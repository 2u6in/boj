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

int main(){
    fastio;

    int n;
    cin>>n;

    vector<ll> dp(50001);
    fill(dp.begin(), dp.end(), INF);

    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    // dp[4]=1;
    // dp[5]=2;
    // dp[6]=3;
    // dp[7]=4;
    // dp[8]=2;
    // dp[9]=1;
    // dp[10]=2;
    // dp[11]=3;
    // dp[12]=4;
    // dp[13]=2;
    // dp[14]=3;
    // dp[15]=4;

    for (int i=4;i<=n;i++){
        int max=0;
        bool s=false;
        for (int j=1;j*j<=i;j++){
            if(i==j*j) {
                dp[i]=1;
                s=true;
            }
            else{
                dp[i]=min(dp[i-j*j]+1, dp[i]);
            }
        }
    }

    cout<<dp[n];

    return 0;

}