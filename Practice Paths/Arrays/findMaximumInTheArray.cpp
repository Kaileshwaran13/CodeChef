#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int N, temp, N1;
    for(int i = 0; i < t; i++){
        cin >> N;
        temp = 0;
        for(int i = 0; i < N; i++){
            cin >> N1;
            if(N1 > temp){
                temp = N1;
            }
        }
        cout << temp << '\n';
    }
	// your code goes here

}