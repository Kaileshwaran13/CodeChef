#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int mat[x][y] = {0};
    for(int i = 0; i< x; i++){
        for(int j= 0; j < y; j++){
            cin >> mat[i][j];   
        }
    }
    for(int i = 0; i< x; i++){
        if(i % 2 == 0){
            for(int j= 0; j < y; j++){
                cout << mat[i][j] << " ";   
            }
        }else{
          for(int j = y - 1; j >= 0; j--){
                cout << mat[i][j] << " ";   
            }  
        }
    }
}