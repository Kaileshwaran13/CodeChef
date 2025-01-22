#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--) {
	    long long int n;
	    cin>>n;
	    long long int res = (sqrt(8*n+1)-1)/2;
	    cout<<res<<endl;
	}
	return 0;
}
