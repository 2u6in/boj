#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using ll = long long;
using pp = pair<int,int>;

const ll INF = (ll)1e18;
#define MAX 1e9;
const int MOD = 1000000007;

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b, a%b);
}

int main(){
    fastio;

    int n;
    cin>>n;

    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    int x;
    cin>>x;

    vector<int> cop(n);
    int num=0;
    for (int i=0;i<n;i++){
        if (gcd(x, v[i])==1){
            cop[num]=v[i];
            num++;
        }
    }
    
    ll res=0;

    for (int i=0;i<num;i++){
        res+=cop[i];
    }

    cout<<setprecision(6)<<fixed<<(double)res/num;

    return 0;
}