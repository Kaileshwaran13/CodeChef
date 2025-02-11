#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int flag = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '1' && b[i] == '0') 
                c1++;
            else if (a[i] == '0' && b[i] == '1') 
                c2++;
            if (a[0] != a[i]) 
                flag++;
        }
        if (flag == 0 && a != b) 
            cout << "Unlucky Chef" << endl;
        else 
            cout << "Lucky Chef\n" << max(c1, c2) << endl;
    }
    return 0;
}
