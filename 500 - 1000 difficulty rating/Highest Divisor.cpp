#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, i = 11;
    cin >>num;
    while(i--){
        if( num % i == 0){
            cout << i;
            break;
        }
    }
    
}
