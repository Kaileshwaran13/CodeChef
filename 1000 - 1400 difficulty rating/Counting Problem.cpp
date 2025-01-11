#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, num;
    cin >> tt;
    vector<int> intEven;
    vector<int> intOdd;
    while(tt--){
        intOdd.clear();
        intEven.clear();
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] % 2 == 0){
                intEven.push_back(arr[i]);
            }
            else{
                intOdd.push_back(arr[i]);
            }
        }
        if(intOdd.size() > 0 && intOdd.size() % 2 == 0 ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
