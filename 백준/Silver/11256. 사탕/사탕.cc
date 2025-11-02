#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9;
const int MOD = 1000000007;

int main(){
    fastio;

    int tc;
    cin>>tc;

    while(tc--){
        int c, n;
        cin>>c>>n;

        vector<int> v(n);

        for (int i=0;i<n;i++){
            int a, b;
            cin>>a>>b;
            v[i]=a*b;
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v. end());

        int res=0;
        while(1){
            if(c<=0){
                break;
            }
            c-=v[res];
            res++;
        }

        cout<<res<<"\n";

    }

    return 0;
}