#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    char arr[100] = {0};
    cin >>tt;
    while(tt--){
        cin >>size;
        for(int i = 0; i < size; i++){
            cin >>arr[i];
            if(arr[i] == 'A'){
                cout << 'T';
            }
            else if( arr[i] == 'T'){
                cout << 'A';
            }
            else if(arr[i] == 'C'){
                cout << 'G';
            }
            else{
                cout << 'C';
            }
        }
        cout <<'\n';
    }

}
