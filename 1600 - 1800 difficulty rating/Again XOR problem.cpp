#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        vector<int> P(N+1, 0);
        for (int i = 0; i < N; i++){
            int bit = S[i] - '0';
            P[i+1] = P[i] ^ bit;
        }
        long long ans = 0;
        for (int j = 0; j < K; j++){
            int R = j + (N - K); 
            int parity = P[R+1] ^ P[j];
            if(parity == 1)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
