#include <iostream>
#include <vector>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = unsigned long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 10007;

int main(){
    fastio;

    int s, g;
    cin>>s>>g;

    ll count=1;

    while(s<g)
   { 
    if (g%2!=0&&g%10!=1) break;
    else if (g%2!=0) {
        count++;
        g/=10;
    }
    else if (g%2==0){
        count++;
        g/=2;
    }}

    if (s==g){
        cout<<count;
    }
    else cout<<-1;

    return 0;

}