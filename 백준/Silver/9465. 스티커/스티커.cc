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

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int arr[2][n+1];
        int dp[2][n+1];

        for (int i=0;i<2;i++){
            for (int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }

        dp[0][0]=dp[1][0]=0;

        dp[0][1]=arr[0][1];
        dp[1][1]=arr[1][1];

        for (int i=2;i<=n;i++){
            dp[0][i]=max(dp[1][i-1], dp[1][i-2])+arr[0][i];
            dp[1][i]=max(dp[0][i-1], dp[0][i-2])+arr[1][i];
        }

        cout<<max(dp[1][n], dp[0][n])<<'\n';

    }


    
    return 0;

}