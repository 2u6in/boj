#include <iostream>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 1000000007;

int main(){
    fastio;

    string s;

    while(1){
        getline(cin, s);

        int ans=0;
        for (char c : s){
            if (c=='A'||c=='a'||c=='E'||c=='e'||c=='O'||c=='o'||c=='I'||c=='i'||c=='U'||c=='u'){
                ans++;
            }
            else if(c=='#') return 0;
        }
        cout<<ans<<"\n";
    }

    return 0;
}