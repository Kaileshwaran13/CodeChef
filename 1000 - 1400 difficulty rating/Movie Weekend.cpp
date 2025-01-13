#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxRating, maxValue, maxValueAppear;
    cin >> tt;
    while(tt--){
        cin >> size;
        int arrL[size] = {0}, arrR[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arrL[i];
        }
        for(int i = 0; i < size; i++){
            cin >> arrR[i];
        }
        maxRating = 0;
        maxValue = 0;
        maxValueAppear = 0;
        for(int i = 0; i < size; i++){
            if( maxValue <= arrL[i] * arrR[i] && maxRating < arrR[i] ){
                maxValue = arrL[i] * arrR[i];
                maxRating = arrR[i];
                maxValueAppear = i;
            }
        }
        cout << maxValueAppear + 1 << '\n';
    }

}
