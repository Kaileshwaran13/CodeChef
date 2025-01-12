#include <iostream>
using namespace std;

void val(int a, int b) {
    int c = a - b;
    if (c % 10 == 9) 
        cout << (c - 1) << endl;
    else if (c % 10 == 1) 
        cout << (c + 1) << endl;
    else 
        cout << (c + 1) << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    val(a, b);
}
