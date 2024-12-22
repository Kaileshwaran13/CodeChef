#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt, divVal, num, count = 0;
    cin >> tt >> divVal;
    while(tt--){
        cin >> num;
        if(num % divVal == 0){
            count++;
        }
    }
    cout << count << '\n';
}
