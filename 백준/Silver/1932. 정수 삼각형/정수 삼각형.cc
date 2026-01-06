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

int main(){
    fastio;

    int n;

    cin>>n;

    int arr[n][n];
    int dp[n][n];
    
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0;i<n;i++){
        dp[n-1][i]=arr[n-1][i];
    }

    for (int i=n-2;i>=0;i--){
        for (int j=0;j<i+1;j++){
            dp[i][j]=max(dp[i+1][j], dp[i+1][j+1])+arr[i][j];
        }
    }

    cout<<dp[0][0];

    return 0;

}