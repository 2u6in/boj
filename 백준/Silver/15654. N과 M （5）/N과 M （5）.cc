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

int n, m;
vector<int> v(8);
vector<int> ans(8);
vector<int> visited(8);

void dfs(int s){
    if (s==m) {
        for (int i=0;i<m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
    else{
        for (int i=0;i<n;i++){
            if (!visited[i]){
                ans[s]=v[i];
                visited[i]=1;
                dfs(s+1);
                visited[i]=0;
            }
        }
    }

}



int main(){
    fastio;

    cin>>n>>m;

    fill(v.begin(), v.end(), 10001);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    dfs(0);
    return 0;

}

