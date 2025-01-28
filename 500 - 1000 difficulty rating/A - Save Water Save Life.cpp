#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y, c;
        cin >> h >> x >> y >> c;

        if (h * (x + (y / 2)) <= c) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}
