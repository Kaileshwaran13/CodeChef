#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    char option1, option2, option3, choice1, choice2;
    while(tt--){
        cin >> option1 >> option2 >> option3;
        cin >> choice1 >> choice2;
        if(option1 == choice1 || option1 == choice2){
            cout << option1 <<'\n';
        }
        else if(option2 == choice1 || option2 == choice2){
            cout << option2 <<'\n';
        }
        else if(option3 == choice1 || option3 == choice2){
            cout << option3 <<'\n';
        }
    }

}
