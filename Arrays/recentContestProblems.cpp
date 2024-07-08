#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, count1, count2;
    while(t--){
        cin >> n;
        count1 = 0;
        count2 = 0;
        string str[n] = {" "};
        for(int i = 0; i < n; i++){
            cin >> str[i];
            if(str[i] == "START38"){
                count1++;
            }else{
                count2++;
            }
        }    
        cout << count1 << " " << count2 << '\n';
    }
}
