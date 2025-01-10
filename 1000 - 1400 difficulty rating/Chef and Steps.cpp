#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val, ans;
    cin >>tt;
    vector<int> vect;
    while(tt--){
        cin >> num >> val;
        vect.clear();
        for(int i = 0; i < num; i++){
            cin >> ans;
            vect.push_back(ans);
        }
        for(int i = 0; i < vect.size(); i++){
            if(vect[i] % val == 0 ){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        cout << '\n';
    }

}
