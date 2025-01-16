#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m, c;
    cin >> m >> c;
    long int u = 0, i = 0;
    while (n--) {
        int x, y, p;
        cin >> x >> y >> p;
        if (y > ((m * x) + c)) 
            u += p;
        else 
            i += p;
    }
    if (u >= i) 
        cout << u << endl;
    else 
        cout << i << endl;
        
}
