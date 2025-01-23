#include <iostream>

using namespace std;

int main() {
    long j, s, m, c = 0;
    cin >> j >> s >> m;
    m -= j;
    c = m / s;
    if (c % 2 == 0)
        cout << "Lucky Chef" << endl;
    else
        cout << "Unlucky Chef" << endl;
    return 0;
}
