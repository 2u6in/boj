#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 10007;

int arr[1001][3];

int main(){
    fastio;

    int n;
    cin>>n;

    int cost[3];


    for (int i=1;i<=n;i++){
        cin>>cost[0]>>cost[1]>>cost[2];

        arr[i][0]=min(arr[i-1][1], arr[i-1][2])+cost[0];
        arr[i][1]=min(arr[i-1][0], arr[i-1][2])+cost[1];
        arr[i][2]=min(arr[i-1][1], arr[i-1][0])+cost[2];
    }

    ll res=INF;
    for (int i=0;i<3;i++){
        if (arr[n][i]<res){
            res=arr[n][i];
        }
    }

    cout<<res;

    return 0;

}

