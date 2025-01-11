#include <bits/stdc++.h>
using namespace std;


int checkSum(int num){
    int parity = 0;
    int givenSum = 0, givenVal = num;
  
    while(givenVal > 0){
        givenSum += givenVal % 10;
        givenVal /= 10;
    }
  
    if(givenSum % 2 == 0){
        parity = 1;
    }
    else{
        parity = 0;
    }
  
    num++;
    while(true){
        int val = num, sum = 0;
        while(val > 0){
            sum += val % 10;
            val /= 10;
        }
        if( (parity == 0 && sum % 2 == 0) || ( parity == 1 && sum % 2 != 0) ){
            return(num);
        }
        else{
            num++;
        }
    }
}

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        cout << checkSum(num) << '\n';
    }

}
