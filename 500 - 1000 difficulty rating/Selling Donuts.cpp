#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, xSize, ySize;
    cin >> tt;
    while(tt--){
        cin >> xSize >> ySize;
        int arr1[xSize] = {0}, arr2[ySize] = {0};
        for(int i = 0; i < xSize; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < ySize; i++){
            cin >> arr2[i];
        }
        int sad = 0;
        for( int i = 0; i < ySize; i++){
            if(arr1[arr2[i] - 1] <= 0){
                sad++;
            }
            else{
                arr1[arr2[i] - 1]--;
            }
        }
        cout << sad << '\n';
    }

}
