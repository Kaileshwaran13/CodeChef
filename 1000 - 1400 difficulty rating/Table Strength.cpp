#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int weight[n];
        for (int i = 0; i < n; i++)
            cin >> weight[i];

        sort(weight, weight + n);

        int max = weight[n - 1],j=2,myNum=0;

        for (int i = n-2; i >= 0; i--)
        {
            myNum = j * weight[i];
            if(max <= myNum) 
                max = myNum;
                j++;
        }
        
        cout<<max<<endl;
    }
}
