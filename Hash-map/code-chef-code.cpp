#include <bits/stdc++.h>
using namespace std;

void permutation(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        cout << (n-i+1) << " ";
        cout << i << " ";
    }
    if(n%2!=0)
    {
        cout << (n/2 + 1) << " "; 
    }
    cout << endl;
}

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	while(t--)
	{
	   
	    cin >> n;
	    permutation(n);
	    
	}
	

}
