#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 10007;

int main(){
    fastio;

    int n;
    cin>>n;

    while(n--){
        int num;
        cin>>num;
        ll s=num*num;

        string N=to_string(num);
        string S=to_string(s);

        string A;
        
        for (int i = S.size()-N.size();i<S.size();i++){
            A+=S[i];
        }

        if (A==N){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        
    }

    return 0;

}