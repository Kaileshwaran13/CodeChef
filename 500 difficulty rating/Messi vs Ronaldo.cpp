#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int messi = (a * 2) + b, ronaldo = (x * 2) + y;
    if( messi > ronaldo){
        cout << "Messi";
    }
    else if ( messi < ronaldo){
        cout << "Ronaldo";
    }
    else{
        cout << "Equal";
    }
	// your code goes here

}
