#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == 'a' || s[i]  == 'e' || s[i]  == 'i' || s[i]  == 'o' || s[i]  == 'u'){
                count++;
                if(count == 3){
                    cout << "Happy" << '\n';
                    break;
                }
            }
            else{
                count = 0;
            }
        }
        if(count < 3){
            cout << "Sad" << '\n';
        }
    }

}
