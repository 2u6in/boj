#include <iostream>
#include <vector>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9
const int MOD = 1000000007;

vector <pp> v(41);

int main(){
    fastio;

    int n;
    cin>>n;

    v[0]={1, 0};
    v[1]={0, 1};

    for (int i=2;i<=40;i++){
        v[i]={v[i-2].first+v[i-1].first, v[i-2].second+v[i-1].second};
    }

    while(n--){
        int a;
        cin>>a;
        cout<<v[a].first<<" "<<v[a].second<<'\n';
    }

    return 0;
}