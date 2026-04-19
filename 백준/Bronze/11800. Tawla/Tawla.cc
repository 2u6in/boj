#include <bits/stdc++.h>
using namespace std;

int main() {
    string name[] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
    string same[] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
    
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a >> b;
        
        int hi = max(a, b), lo = min(a, b);
        
        string result;
        if (a == b) {
            result = same[a];
        } else if (hi == 6 && lo == 5) {
            result = "Sheesh Beesh";
        } else {
            result = name[hi] + " " + name[lo];
        }
        
        cout << "Case " << i << ": " << result << "\n";
    }
    
    return 0;
}
