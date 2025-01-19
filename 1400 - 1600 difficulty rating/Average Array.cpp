#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    cin >> n >> k;
	    if(n&1)
	        cout << k << " ";
	    for(i=1;i<=(n/2);i++)
	    {
	            cout << k+i << " " << k-i << " ";
	    }
	    cout << "\n";
	}
}
