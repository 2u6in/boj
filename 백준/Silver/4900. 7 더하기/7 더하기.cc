#include <iostream>
#include <unordered_map>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 1000000007;

int code[10] = {63, 10, 93, 79, 106, 103, 119, 11, 127, 107};
unordered_map<int, int> decode;

int main(){
    fastio;

        for(int i = 0; i < 10; i++) decode[code[i]] = i;

    string str;
    while(cin >> str && str != "BYE"){
        int a = 0, b = 0;
        bool isFirst = true;

        for(int i = 0; i < str.size() - 1; i++){
            if(str[i] == '+') {
                isFirst = false;
                continue;
            }

            int tmp = decode[stoi(str.substr(i, 3))];
            if(isFirst) a = a * 10 + tmp;
            else b = b * 10 + tmp;
            i += 2;
        }

        cout << str;

        for(auto ch : to_string(a + b)){
            int tmp = code[ch - '0'];
            if(tmp < 100) cout << "0";
            cout << tmp;
        }
        cout << "\n";
    }

    return 0;
}