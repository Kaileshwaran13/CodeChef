#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n, a, b;
	    cin >>n >>a >>b;
	    string s;
	    cin >>s;
	    int count0 = 0, count1;
	    for(int i=0; i<n; i++){
	        if(s[i] == '0') count0++;
	    }
	    count1 = n - count0;
	    int ans = a*count0 + b*count1;
	    cout <<ans <<endl;
	}
	return 0;
}
