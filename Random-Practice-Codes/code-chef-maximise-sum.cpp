#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        int neg_count = 0;
        long long sum  = 0;
        int min_abs_value = 1e6;
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];  
            if(v[i] < 0) neg_count++;
            sum += abs(v[i]);
            min_abs_value = min(min_abs_value, abs(v[i]));
        }
        
        if(neg_count % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - 2 * min_abs_value << endl;
        }
    }

    return 0;
}
