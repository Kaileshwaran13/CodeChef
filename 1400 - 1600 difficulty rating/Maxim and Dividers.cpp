#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll is_over_lucky(ll n)
{
    while(n)
    {
        if((n%10==4)||(n%10==7))
            return 1;
        n/=10;
    }
    return 0;
}

int main() 
{
	ll t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    ll ans=0ll;
	    for(i=1;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        {
    	        if(i==(n/i))
    	        {
    	            ans+=(is_over_lucky(i));
    	        }
    	        else
    	        {
    	            ans+=(is_over_lucky(i));
    	            ans+=(is_over_lucky(n/i));
    	        }
	        }
	    }
	    cout << ans << "\n";
	}
	return 0;
}
