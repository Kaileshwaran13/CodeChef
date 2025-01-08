#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
        cout <<"Vowel";
    }
    else{
        cout << "Consonant";
    }

}
