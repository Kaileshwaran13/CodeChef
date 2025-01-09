#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        int arr[5] = {0};
        for(int i = 0; i < 5; i++){
            cin >> num;
            if( num == 1){
                count++;
            }
        }
        if(count == 0){
            cout << "Beginner" <<'\n';
        }
        else if(count == 1){
            cout << "Junior Developer" <<'\n';
        }
        else if(count == 2){
            cout << "Middle Developer" <<'\n';
        }
        else if(count == 3){
            cout << "Senior Developer" <<'\n';
        }
        else if(count == 4){
            cout << "Hacker" <<'\n';
        }
        else if(count == 5){
            cout << "Jeff Dean" <<'\n';
        }
    }

}
