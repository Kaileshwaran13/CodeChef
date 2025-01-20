#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, num;
    cin >> tt;
    while(tt--){
        cin >> size >> num;
        int arr[size], minVal = INT_MAX;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                minVal = min(minVal, abs( (arr[i] + arr[j]) - num) );
            }
        }
        cout << minVal << ' ';
        int count = 0;
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if( abs((arr[i] + arr[j]) - num) == minVal)
                    count++;
            }
        }
        cout << count <<'\n';

    }

}
