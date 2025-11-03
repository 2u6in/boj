#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long n;
    cin >> n;

    cout << (a + b + c) * (n%2==1 ? n / 2 + 1 : n/2) + (c - a) * (n / 2);
}