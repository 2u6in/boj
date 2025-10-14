#include <iostream>
#include <vector>
using namespace std;
vector<int> v1(10);
vector<int> v2(10);


int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 0; i < 10; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> v2[i];
    }
    int a = 0;
    int b = 0;
    for (int i = 0; i < 10; i++) {
        if (v1[i] > v2[i]) a++;
        else if (v1[i] < v2[i]) b++;
    }

    if (a > b) cout << "A";
    else if (a < b) cout << "B";
    else cout << "D";
    return 0;
}