#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[n], e = 0, o = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) 
                e++;
            else 
                o++;
        }
        if (s == "Dum") {
            cout << "Dum" << endl;
        }
        else if (s == "Dee") {
            if (n == 1 && e == 1) 
                cout << "Dee" << endl;
            else 
                cout << "Dum" << endl;
        }
    }
    return 0;
}
