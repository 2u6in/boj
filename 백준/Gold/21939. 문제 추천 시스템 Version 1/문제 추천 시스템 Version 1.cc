#include <iostream>
#include <string>
#include <map>
#include <set>
#include <utility>
using namespace std;

set<pair<int, int>> L;
map<int, int> SL;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int p, l;
        cin >> p >> l;
        L.insert({ l, p });
        SL.insert({ p, l });
    }

    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        if (s == "add") {
            int p, l;
            cin >> p >> l;
            SL.insert({ p, l });
            L.insert({ l, p });
        }
        else if (s == "recommend") {
            int r;
            cin >> r;
            auto it = (r == 1 ? prev(L.end()) : L.begin());

            cout << it->second << "\n";
        }
        else if (s == "solved") {
            int sn;
            cin >> sn;
            int kV = SL[sn];
            L.erase({ kV, sn });
            SL.erase(sn);
        }
    }

    return 0;
}
