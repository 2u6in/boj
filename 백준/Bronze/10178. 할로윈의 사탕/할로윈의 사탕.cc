#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        int c, s;
        cin >> c >> s;

        cout << "You get " << c / s << " piece(s) and your dad gets " << c % s << " piece(s).\n";
    }

}