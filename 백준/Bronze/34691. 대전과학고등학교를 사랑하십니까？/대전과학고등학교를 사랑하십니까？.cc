#include <iostream>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = unsigned long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 10007;

int main(){
    fastio;

    string s;
    cin>>s;

    while(s!="end"){
        if (s=="animal") cout<<"Panthera tigris\n";
        else if(s=="tree") cout<<"Pinus densiflora\n";
        else if (s=="flower") cout<<"Forsythia koreana\n";
        cin>>s;
    }

    return 0;

}