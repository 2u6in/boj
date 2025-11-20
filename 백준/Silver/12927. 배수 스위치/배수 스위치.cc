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
    cin>>s;

    bool ok=false;
    int count=0;
    for (int i=0;i<s.length();i++){
        if (s[i]=='Y'){
            int temp = i+1;
            for (int j=i+1;j<s.length()+1;j+=temp){
                if (s[j-1]=='Y'){
                    s[j-1]='N';
                }
                else if(s[j-1]=='N'){
                    s[j-1]='Y';
                }
            }
            count++;
        }
        bool end = true;
        for (int j=0;j<s.length();j++){
            if (s[j]=='Y') end =false;
        }
        if (end) {
            ok=true;
            break;
        }
    }

    cout<<(ok?count : -1);

    return 0;
}