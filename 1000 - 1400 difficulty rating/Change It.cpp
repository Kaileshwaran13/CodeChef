#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	
	while(t--)
	{
	    map<int,int>mp;
	    int n;
	    cin>>n;
	    int res=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin >> a[i];
   
	    }
	    for(int i=0;i<n;i++)
	    mp[a[i]]++;
	    for(auto i:mp)
	    {
	        if(i.second>res)
	        res=i.second;
	    }
	  
	    cout << n-res << endl;
	    
	}
	return 0;
}
