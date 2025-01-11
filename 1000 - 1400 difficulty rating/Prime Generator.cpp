#include <bits/stdc++.h>

using namespace std;

bool primeGen(int n) {
    for(int i = 2; i <= sqrt(n); i++){
        if( n % i == 0 ){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tt, num1, num2;
    cin >> tt;
    while(tt--){
        cin >> num1 >> num2;
        for( int i = num1; i <= num2; i++){
            if(i == 0 || i == 1){
                i++;
            }
            if( i == 2 ){
                cout << 2 <<  '\n';
            }
            else if(primeGen(i) == 1){
                cout << i << '\n'; 
            }
        }
        cout << '\n';
    }
}
