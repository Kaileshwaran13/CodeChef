#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	int tiger = 0;
	cin >>t;
	while(t-- > 0){
	    cin >>n;
	    int arr[n];
	    
	    for(int i = 0; i < n; i++){
	        cin >>arr[i];
	    }
	    //lets take a maxScore variable 
	    int maxScore = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] > maxScore){
	            cout <<1 <<" ";
	            maxScore = arr[i];
	        }
	        else{
	            cout <<0 <<" ";
	        }
	    }
	    cout <<endl;
	}

}
