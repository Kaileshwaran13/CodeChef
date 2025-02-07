#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    long long n,a,b,c;
	    cin>>n>>a>>b>>c;
	    
	    long long x;
	    long long mn=LLONG_MAX;
	    for(long long i=0;i<n;i++){
	        cin>>x;
	        
	        mn=min(mn,(abs(x-b)+abs(x-a)));
	    }
	    
	    cout<<c+mn<<endl;
	    
	    
	}

}
