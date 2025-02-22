#include <bits/stdc++.h>
using namespace std;

int main() {
    string ch;
    getline(cin, ch);
    int count = 0;
    int c = 0, h = 0, e = 0, f = 0;
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == 'C')
            c++;
        else if (ch[i] == 'H' && c > h)
            h++;
        else if (ch[i] == 'E' && h > e)
            e++;
        else if (ch[i] == 'F' && e > f)
            f++;
        i++;
    }
    printf("%d", f);
    return 0;
}
