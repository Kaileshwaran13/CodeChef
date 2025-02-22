#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 + (10 * num2);
    if(sum >= 100)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
