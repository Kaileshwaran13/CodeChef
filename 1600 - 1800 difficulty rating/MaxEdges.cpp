#include <iostream>

#define int long long
using namespace std;

signed main() {
    int kaushal;
    cin >> kaushal;
    for (int i = 0; i < kaushal; i++) {
        int one, two, three;
        cin >> one >> two >> three;
        int answer = 0;
        int sum = two + three;
        if (sum <= one) {
            int allthree = one - (two + three);
            int sum2 = (allthree + three);
            answer += two * sum2;
            answer += allthree * three;
            answer += (allthree * (allthree - 1)) / 2;
        }
        else {
            int allthree = (two + three) - one;
            two = two - allthree;
            three = three - allthree;
            allthree = 0;
            answer += two * (allthree + three);
            answer += (allthree * three);
            answer += allthree * (allthree + 1) / 2;
        }
        cout << answer << endl;
    }
    return 0;
}
