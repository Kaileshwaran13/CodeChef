#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;


int main() {
    int t, n;
    cin >> t;
    cpp_int fact;
    while(t--){
        fact = 1;
        cin >> n;
        while(n > 0){
            fact *= n;
            n--;
        }
        cout << fact << '\n';
    }
}
