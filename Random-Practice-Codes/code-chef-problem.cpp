#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, xb, yb;
        string cord;
        cin >> n >> xb >> yb;
        cin >> cord;
        
        int xa = 0, ya = 0;
        vector<pair<int, int>> alice_positions;
        
       
        alice_positions.push_back({xa, ya});
        
        for(int i = 0; i < cord.size(); i++) {
            if(cord[i] == 'R') xa++;
            else if(cord[i] == 'U') ya++;
            else if(cord[i] == 'L') xa--;
            else if(cord[i] == 'D') ya--;
            
            
            alice_positions.push_back({xa, ya});
        }
        
        bool found = false;
        for(int i = 0; i < alice_positions.size(); i++) {
            int dist = abs(xb - alice_positions[i].first) + abs(yb - alice_positions[i].second);
            if(dist == i) {
                cout << "Yes" << endl;
                found = true;
                break;
            }
        }
        
        if(!found) cout << "No" << endl;
    }
}
