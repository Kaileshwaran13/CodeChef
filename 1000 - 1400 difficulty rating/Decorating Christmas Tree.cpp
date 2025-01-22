#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(n>x){
            cout<<"NO\n";
        }else {
            x+=(y/3);
            if(n*2<=x) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
}
