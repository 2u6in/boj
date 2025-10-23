#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    string s;
    cin >> s;
    int count = 0;
    string a = "AAAA";
    string b = "BB";
    string res;
    bool ok = true;
    bool exist = false;
    for (char c : s) {
        exist = false;
        if (c == '.') {
            exist = true;
            if (count > 0) {
                if (count >= 4) {
                    for (int i = 0; i < count / 4; i++) {
                        res =res+ a;
                    }
                    count %= 4;
                }
                if (count % 2 != 0) {
                    ok = false;
                    break;
                }
                else {
                    for (int i = 0; i < count / 2; i++) {
                        res =res+b;
                    }
                }
                count = 0;
            }
            res += ".";
        }
        else {
            count++;
        }
    }
    if (!exist) {
        if (count >= 4) {
            for (int i = 0; i < count / 4; i++) {
                res = res + a;
            }
            count %= 4;
        }
        if (count % 2 != 0) {
            ok = false;
        }
        else {
            for (int i = 0; i < count / 2; i++) {
                res = res + b;
            }
        }
    }
    if (ok) {
        cout << res;
    }
    else {
        cout << -1;
    }
}