#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t,n,i,j,k;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    if(s.length()<=3)
	    {
	        cout << "Error\n";
	        continue;
	    }
	    if((s[0]!='<')||(s[s.length()-1]!='>')||(s[1]!='/'))
	    {
	        cout << "Error\n";
	        continue;
	    }
	    for(i=2;i<s.length()-1;i++)
	    {
	        if((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z'))
	            continue;
	        else
	            break;
	    }
	    if(i==s.length()-1)
	        cout << "Success\n";
	    else
	        cout << "Error\n";
	}
}
