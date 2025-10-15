#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int tc;
    string coin;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> coin;
        int coin_list[8] = { 0 };

        for (int j = 0; j < coin.length() - 2; j++) {
            string coin_3 = coin.substr(j, 3);

            if (coin_3 == "TTT") {
                coin_list[0]++;
            }
            else if (coin_3 == "TTH") {
                coin_list[1]++;
            }
            else if (coin_3 == "THT") {
                coin_list[2]++;
            }
            else if (coin_3 == "THH") {
                coin_list[3]++;
            }
            else if (coin_3 == "HTT") {
                coin_list[4]++;
            }
            else if (coin_3 == "HTH") {
                coin_list[5]++;
            }
            else if (coin_3 == "HHT") {
                coin_list[6]++;
            }
            else if (coin_3 == "HHH") {
                coin_list[7]++;
            }
        }
        for (int on : coin_list) {
            cout << on << " ";
        }
        cout << "\n";
    }
    return 0;
}