#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, num, count;
    cin >>tt;
    while(tt--){
        count = 0;
        cin >> size >> num;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( (arr[i] + num) % 7 == 0){
                count++;
            }
        }
        cout << count << '\n';
    }

}
