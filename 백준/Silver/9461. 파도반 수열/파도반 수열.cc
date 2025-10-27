#include <iostream>
#include <vector>
using namespace std;

#define ll long long

vector<ll> v(105);

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    v[0] = 1;
    v[1] = 1;
    v[2] = 1;

    ll tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;

        for (ll i = 3; i <= n; i++) {
            v[i] = v[i - 3] + v[i - 2];
        }

        cout << v[n - 1] << "\n";
    }

}