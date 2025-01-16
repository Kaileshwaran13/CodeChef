#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    double a, b, c;
    cin >> tt;
    while(tt--){
        double loss = 0.0;
        cin >> size;
        while(size--){
            cin >> a >> b >> c;
            double percent = c / 100.0;
            double afterInc = a + (percent * a);
            afterInc -= (afterInc * percent);
            loss += (a - afterInc) * b;
        }
        cout << fixed << setprecision(9) << loss <<'\n';
    }

}
