#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxCarry, count, sum, flag;
    cin >> tt;
    while(tt--){
        flag = 0;
        cin >> size >> maxCarry;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] > maxCarry){
                flag = 1;
            }
        }
        count = 0;
        if( flag == 0){
            int i = 0;
            while(true){
                sum = 0;
                while(sum + arr[i] <= maxCarry){
                    sum += arr[i];
                    i++;
                }
                count++;
                if( i > size - 1){
                    cout << count << '\n';
                    break;
                }
            }
            
        }
        else{
            cout << -1 << '\n';
        }
        
    }

}
