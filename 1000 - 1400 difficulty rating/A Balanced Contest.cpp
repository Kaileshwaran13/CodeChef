#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, population, easy, hard;
    cin >> tt;
    while(tt--){
        easy = 0;
        hard = 0;
        cin >> size >> population;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if((arr[i]) >= population / 2){
                easy++;
            }
            else if((arr[i]) <= population / 10){
                hard++;
            }
        }
        if(hard == 2 && easy == 1){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
        
    }

}
