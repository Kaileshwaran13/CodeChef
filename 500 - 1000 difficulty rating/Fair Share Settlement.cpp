#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >>k;
        int i=n/(k+1);
        
        int pay=n-k*i;
        cout << pay << endl;
    }
	// your code goes here
	return 0;
}
