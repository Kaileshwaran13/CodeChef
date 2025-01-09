#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count, sum, a, b, c, d;
    cin >> tt;
    while(tt--){
        count = 0;
        cin >> num;
        sum = 0;
        int arr[num] = {0};
        for(int i = 0; i < num; i++){
            cin >> arr[i];
            sum += arr[i];
            if( (sum == (i +1)) ){
                count++;
            }
        }    
        cout << count <<'\n';
    }

}
