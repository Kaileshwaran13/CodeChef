#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    int mat[num][num];
    for(int i = 0; i< num; i++){
        for(int j = 0; j < num; j++){
            cin >> mat[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i< num; i++){
        sum += mat[i][i];
    }
    for(int i = 0, j = num - 1; i < num, j >= 0; i++, j--){
        if( i != j){
            sum += mat[i][j];
        }
    }
    cout << sum;
    // your code goes here

}