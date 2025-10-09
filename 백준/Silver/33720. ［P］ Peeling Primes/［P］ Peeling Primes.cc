#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2;
        return 0;
    }

    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << 1 + (n - i) / 2;
            return 0;
        }
    }
    cout << 1;

    return 0;
}