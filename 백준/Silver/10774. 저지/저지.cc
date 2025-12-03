#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const int MOD = 1000000000;

int main(){
    fastio;

    int n, m;
    cin>>n>>m;

    vector<int> j(n);
    vector<pp> p(m);
    
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if (c=='S'){
            j[i]=1;
        }
        else if (c=='M'){
            j[i]=2;
        }
        else if (c=='L'){
            j[i]=3;
        }
    }

    for(int i=0;i<m;i++){
        char c;
        int num;
        cin>>c>>num;
        if (c=='S'){
            p[i]={num, 1};
        }
        else if (c=='M'){
            p[i]={num, 2};
        }
        else if (c=='L'){
            p[i]={num, 3};
        }
    }

    sort(p.begin(), p.end());

    int ans=0;
    for (int i=0;i<m;i++){
        if (p[i].first>j.size()){
            continue;
        }
        if (p[i].second<=j[p[i].first-1]){
            ans++;
            j[p[i].first-1]=0;
        }
    }

    cout<<ans;

    return 0;
}