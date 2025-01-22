#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t; cin >> t;
	
	while(t--){
	    int x; cin >> x;
	    int y; cin >> y;
	    
	    int plates = x/y;
	    
	    if(plates >20){
	        plates = 20;
	    }
	    
	    cout << (plates) << endl;
	}
	return 0;
}
