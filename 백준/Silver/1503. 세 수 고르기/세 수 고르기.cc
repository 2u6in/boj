#include <iostream>
using namespace std;

int n, m;

bool arr[1001];

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int input;
        cin >> input;
        arr[input] = true;
    }

    int ans = 2000000000;

    for (int i = 1; i <= 1001; i++) {
        if (arr[i]) continue;
        for (int j = 1; j <= 1001; j++) {
            if (arr[j]) continue;
            for (int k = 1; k <= 1001; k++) {
                if (arr[k]) continue;
                int xyz = i * j * k;
                if (ans > abs(n - xyz)) ans = abs(n - xyz);
                if (n < xyz) break;
            }
        }
    }
    cout << ans;
}