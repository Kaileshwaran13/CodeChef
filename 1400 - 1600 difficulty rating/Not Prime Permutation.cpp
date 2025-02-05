 #include <bits/stdc++.h>
 using namespace std;

 int main() {
     int t;
     cin >> t;
     while (t--) {
         int n;
         cin >> n;
         vector < int > p(n);
         for (int i = 0; i < n; i++) {
             cin >> p[i];
         }
         if (n == 1 || n == 2) {
             cout << -1 << endl;
             return;
         }
         int one;
         int three;
         for (int i = 0; i < n; i++) {
             if (p[i] == 1) {
                 one = i;
             }
             if (p[i] == 3) {
                 three = i;
             }
         }
         swap(p[one], p[three]);
         for (int i = 0; i < n; i++) {
             cout << p[i] << " ";
         }
         cout << endl;
     }

     return 0;
 }
