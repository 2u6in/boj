#include <iostream>
#include <utility>
#include <vector>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const int INF = 1e9;
#define MAX 1e9
const int MOD = 1000000007;


int main(){
    fastio;
    
    int n, c, a, b;
    cin >> n >> c >> a >> b;

    vector<int> dp(n+1, INF);
    dp[0]=0;

    for (int i=0;i<c;i++){
        int aa, bb;
        cin>>aa>>bb;
        for (int j=aa;j<=bb&&j<=n;j++){
            dp[j]=-1;
        }
    }

    for (int i=1;i<=n;i++){
        if(dp[i]==-1) continue;

        int ma=i-a;
        int mb=i-b;

        if (ma >= 0 && dp[ma] != -1)
            dp[i] = min(dp[i], dp[ma] + 1);
        if (mb >= 0 && dp[mb] != -1)
            dp[i] = min(dp[i], dp[mb] + 1);
    }

    if (dp[n]==INF) cout<<-1;
    else cout<<dp[n];

    return 0;
}