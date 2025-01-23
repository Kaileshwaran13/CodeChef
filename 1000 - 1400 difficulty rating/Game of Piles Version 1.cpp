#include <iostream>

#include <algorithm>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != 0) c++;
        }
        sort(a, a + n);
        if (a[0] == 1) 
            cout << "CHEF" << endl;
        else if (c % 2 == 0) 
            cout << "CHEFINA" << endl;
        else 
            cout << "CHEF" << endl;
    }
    return 0;
}
