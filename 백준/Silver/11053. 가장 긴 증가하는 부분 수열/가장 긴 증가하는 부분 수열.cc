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

    vector<int> v(n);
    vector<int> dp(n);
    fill(dp.begin(), dp.end(), 1);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    dp[0]=1;
    for (int i=1;i<n;i++){
        for (int j=i-1;j>=0;j--)
            if (v[i]>v[j]&&dp[j]>=dp[i]){
                dp[i]=dp[j]+1;
            }
    }

    int max=0;

    for (int a : dp){
        if (max<a) max=a;
    }

    cout<<max;

    return 0;

}