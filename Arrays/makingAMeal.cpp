#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, temp;
    string str;
    while(t--){
        cin >> n;
        temp = n;
        int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
        while(temp--){
            cin >> str;
            for(int i = 0; i < str.length(); i++){
                if(str[i] == 'c')
                    c++;
                else if(str[i] == 'o')
                    o++;
                else if(str[i] == 'd')
                    d++;
                else if(str[i] == 'e')
                    e++;
                else if(str[i] == 'h')
                    h++;
                else if(str[i] == 'f')
                    f++;
            }
        }
        cout << min((c/2),min(o,min(d,min((e/2),min(h,f))))) << '\n';
    }
}
