#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;  
        string req = "ADVITIYA";  
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int temp = req[i] - s[i];  
            if (temp < 0) 
                temp += 26;
            ans += temp;
        }
        cout << ans << endl;
    }
}
