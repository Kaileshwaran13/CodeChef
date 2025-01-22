#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int count = 0, k = 0;
        while(n!=0)
        {
            for(int i=31; i>=1; i--)
            {
                if(n >= i*i)
                {
                    n = n - i*i;
                    i++;
                    count++;
                }
                if(i == 1 && n !=0)
                {
                    k = n;
                    n = 0;
                }
            }
            
        }
        cout << count + k << endl;
            
    }
    return 0;
}
