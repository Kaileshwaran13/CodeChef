#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        string s;
        cin >> s;
        int c = 1;
        for (int i = 0; i < t; i++) {
            if (s[i] == s[i + 1]) {
                c++;
            }
            else {
                //cout<<s[i];c=0;
                if (c % 2 == 0) {
                    cout << string(2, s[i]);
                }
                else {
                    cout << s[i];
                }
                c = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
