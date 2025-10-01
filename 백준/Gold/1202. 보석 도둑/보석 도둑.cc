#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int n, k;
multimap<int, int> j;
multiset<int> b;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        j.insert({ b, a });
    }

    for (int i = 0; i < k; i++) {
        int k;
        cin >>k;
        b.insert(k);
    }

    long long ans = 0;
    for (auto it = j.rbegin(); it != j.rend();++it) {
        int j_v = it->first;
        int j_w = it->second;

        //auto bb = lower_bound(b.begin(), b.end(), j_w);
        auto bb = b.lower_bound(j_w);

        if (bb != b.end()) {
            ans += j_v;
            b.erase(bb);
        }

        if (b.empty()) break;

    }

    cout << ans;
    return 0;
}