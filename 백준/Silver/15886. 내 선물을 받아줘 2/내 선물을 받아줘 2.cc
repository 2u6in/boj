#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int res = 0;
    bool continual = false;
    for (char c : s) {
        if (c == 'E'&&continual==false) {
            continual = true;
        }
        if (c == 'W' && continual == true) {
            res++;
            continual = false;
        }
    }

    cout << res;
    
    return 0;
}