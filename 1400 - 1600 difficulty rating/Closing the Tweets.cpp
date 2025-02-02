#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n] = {0};
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        if (s == "CLICK"){
            int e;
            cin >> e;
            if (!(arr[e - 1])) 
                arr[e - 1] = 1, sum++;
            else 
                arr[e - 1] = 0, sum--;
        }
        else if (s == "CLOSEALL"){
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]) 
                    arr[i] = 0;
            }
        }
        cout << sum << endl;
    }
}
