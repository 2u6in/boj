#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> save(26);

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
        bool ok = true;
        fill(save.begin(), save.end(), 0);
        string s;
        cin >> s;
        char bef='A';
        for (char c : s) {
            if (bef!=c)
                save[c - 'a']++;
            bef = c;
        }
        for (int i = 0; i < 26; i++) {
            if (save[i] > 1) {
                ok = false;
                break;
            }
        }
        if(ok)
            ans++;
    }

    cout << ans;

    return 0;
}