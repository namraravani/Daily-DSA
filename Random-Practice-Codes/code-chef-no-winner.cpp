#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	
	while(t--)
	{
	    int a,b,c,m;

	    cin >> a >> b >> c >> m;
	    
	    int ab = abs(a-b);
	    int ac = abs(a-c);
	    int bc = abs(c-b);
	    
	    
	    if(ab <= m || ac<=m || bc <=m)
	    {
	        cout << "YES"<<endl;
	    }
	    else if(ab == 0 || ac==0 || bc ==0)
	    {
	        cout << "YES" <<endl;
	    }
	    
	    else
	    {
	        cout << "NO" << endl;
	    }
	    
	}

}
