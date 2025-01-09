#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int num;
    cin >>num;
    if( num >= 1000){
        cout << "More than 3 digits" << '\n';
    }
    else if( num >= 100){
        cout << 3 <<'\n';
    }
    else if( num >= 10){
        cout << 2 << '\n';
    }
    else{
        cout << 1 <<'\n'; 
    }

}
