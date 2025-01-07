#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, a, b, c, x, y, z, sum1, sum2;
    cin >>tt;
    while(tt--){
        sum1 = 0;
        sum2 = 0;
        cin >> a >> b >> c >> x >> y >> z;
        sum1 = a + b + c;
        sum2 = x + y + z;
        if(sum1 == sum2){
            if( a == x && b == y && c == z){
                cout << "TIE" << '\n';
            }
            else{
                if(a != x){
                    if(a < x){
                        cout << "SLOTH" <<'\n';
                    }
                    else{
                        cout << "DRAGON" <<'\n';
                    }
                }
                else if(a == x && b != y){
                    if(b < y){
                        cout << "SLOTH" <<'\n';
                    }
                    else{
                        cout << "DRAGON" <<'\n';
                    }
                }
                else{
                    if(c < z){
                        cout << "SLOTH" <<'\n';
                    }
                    else{
                        cout << "DRAGON" <<'\n';
                    }
                    
                }
            }
        }
        else{
            if(sum1 > sum2){
                cout <<"DRAGON" <<'\n';
            }
            else{
                cout <<"SLOTH" <<'\n';
            }
        }
    }

}
