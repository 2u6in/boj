#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = unsigned long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 10007;

int list[1001];

int main(){
    fastio;

    int n;
    cin>>n;

    list[0]=0;
    list[1]=1;
    list[2]=3;
    for (int i=3;i<=n;i++){
        list[i]=(list[i-1]+list[i-2]*2)%MOD;
    }

    cout<<list[n];

    return 0;
}