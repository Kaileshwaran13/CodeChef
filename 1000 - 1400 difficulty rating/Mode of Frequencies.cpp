#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxval;
    cin >> tt;
    while(tt--){
        maxval = 0;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxval = max(arr[i], maxval);
        }
        int arrCount[maxval + 1] = {0};
        for(int i = 0; i < size; i++){
            arrCount[arr[i]]++;
        }
        int maxFreq = 0;
        for(int i = 1; i <= maxval; i++){
            maxFreq = max(arrCount[i], maxFreq);
        }
        int freq[maxFreq + 1] = {0};
        for(int i = 1; i <= maxval; i++){
            if( arrCount[i] != 0)
                freq[arrCount[i]]++;
        }
        int maxAns = 0;
        for( int i = 1; i <= maxFreq; i++){
            maxAns = max( freq[i], maxAns);
        }
        for(int i = 1; i <= maxFreq; i++){
            if(freq[i] == maxAns){
                cout << i <<'\n';
                break;
            }
        }
    }

}
