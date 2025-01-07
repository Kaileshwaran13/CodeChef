#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main() {
    int tt, num;
    cpp_int product;
    cin >> tt;
    while(tt--){
        cin >> num;
        product = 1;
        while(num > 0){
            product *= num;
            num--;
        }
        cout << product << '\n';
    }

}
