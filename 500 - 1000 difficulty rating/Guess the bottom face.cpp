#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x[t];
	for(int i = 0; i < t; i++){
	    cin >> x[i];
	    cout << 7 - x[i] << endl;
	}
	
	return 0;
}
