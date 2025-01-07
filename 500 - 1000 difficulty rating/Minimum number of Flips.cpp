#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, possitiveCount, negativeCount;
    cin >> tt;
    while(tt--){
        possitiveCount = 0;
        negativeCount = 0;
        cin >> size;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                possitiveCount += 1;
            }
            else{
                negativeCount += 1;
            }
        }
        if(size % 2 == 0){
            if(possitiveCount == negativeCount){
                cout << 0 << '\n';
            }
            else{
                if( abs(possitiveCount - (size / 2)) != 0){
                    cout << abs(possitiveCount - (size/2)) << '\n';
                }
            }
        }
        else{
            cout << -1 << '\n';
        }
    }

}
