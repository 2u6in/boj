#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = unsigned long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 1000000007;

ll id;
ll ans = 9223372036854775807LL;

int main(){
    fastio;

    int n, t;
    cin>>n>>t;

    for (int i=1;i<=n;i++){
        ll P, K, C; cin >> P >> K >> C;
		ll cnt = (t - 1) / K;

		ll val = P + cnt * (cnt + 1) / 2 * C;
		if (val < ans) id = i, ans = val;
    }

    cout<<id<<" "<<ans;

    return 0;
}