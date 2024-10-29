#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,x;
    cin >> n >> m >> x;
    int flag = 0, mat[n][m] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j]; 
            if(mat[i][j] == x){
                flag = 1;
            }
        }
    }
    if(flag == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}