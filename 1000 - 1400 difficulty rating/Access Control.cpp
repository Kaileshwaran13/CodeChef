#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,x; cin>>n>>x;
	    string s; cin>>s;
	    int swipes = 0;
	    string ans = "YES";
	    for(int i=0; i<n; i++){
	        if(s[i]=='0'){
	            swipes--;
	        }
	        else{
	            swipes = x;
	        }
	        if(swipes<0){
	            ans = "NO";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
}
