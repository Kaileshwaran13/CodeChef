#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }    
}

int main() {
	int tt;
	cin>>tt;
	while(tt--){
	    int x,y;
	    cin>>x>>y;
	    int sum = x+y+1;
	    while(prime(sum)!=true){
	        sum++;
	    }
	    cout<<sum - (x+y)<<endl;
	}
}
