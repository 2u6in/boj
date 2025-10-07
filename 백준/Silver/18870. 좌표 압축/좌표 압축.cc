#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    vector<int> v1;
    vector<int> v2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v1.push_back(k);
        v2.push_back(k);
    }
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
        cout << idx<< " ";
    }

    return 0;
}