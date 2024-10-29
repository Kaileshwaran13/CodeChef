#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;
	int mat1[x][y] = {0}, mat2[x][y] = {0}, mat3[x][y] = {0};
	for(int i = 0; i < x; i++){
	    for(int j = 0; j < y; j++){
	        cin >> mat1[i][j];
	    }
	}	
	for(int i = 0; i < x; i++){
	    for(int j = 0; j < y; j++){
	        cin >> mat2[i][j];
	    }
	}
	for(int i = 0; i < x; i++){
	    for(int j = 0; j < y; j++){
	        mat3[i][j] = mat1[i][j] + mat2[i][j];
	    }
	}
	for(int i = 0; i < x; i++){
	    for(int j = 0; j < y; j++){
	        cout << mat3[i][j] << " ";
	    }
	    cout << '\n';
	}
}