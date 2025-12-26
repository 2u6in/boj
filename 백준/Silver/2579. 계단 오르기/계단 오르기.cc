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

    vector<int> v(n);
    vector<int> dp(n);

    for (int i=0;i<n;i++){
        cin>>v[i];
    }


    dp[0]=v[0];
    dp[1]=v[0]+v[1];
    dp[2]=max(v[0]+v[2], v[1]+v[2]);
    for (int i=3;i<n;i++){
        dp[i]=max(dp[i-3]+v[i-1], dp[i-2])+v[i];
    }

    cout<<dp[n-1];
}