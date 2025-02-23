#include <bits/stdc++.h>
using namespace std;

int main() {
    int f;
    cin >> f;
    while (f--)
    {
        long long int n, i, j, count1 = 0, count2 = 0, count = 0, sum = 0, flag = 0, tempcount = 0;
        char s[1000];
        scanf("%s %lld", s, &n);
        for (i = 0; i < n; i++)
        {
            tempcount = 0;
            for (j = 0; j < strlen(s); j++)
            {
                if (s[j] == 'a')
                    count1++;
                else if (s[j] == 'b')
                    count2++;
                if (count1 > count2)
                {
                    count++;
                    tempcount++;
                }
            }
            if (count1 == count2)
            {
                flag = 1;
                break;
            }
            if (tempcount == strlen(s))
            {
                flag = 2;
                break;
            }
            if (tempcount == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            sum = count * n;
        }
        else if (flag == 2)
        {
            sum = count + (n - 1 - i) * strlen(s);
        }
        else
            sum = count;
        printf("%lld\n", sum);
    }
    return 0;
}
