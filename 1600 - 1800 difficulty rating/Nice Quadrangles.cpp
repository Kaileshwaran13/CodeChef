#include <bits/stdc++.h>
using namespace std;

int quadrant(int x, int y) {
    if (x > 0 && y > 0) return 0;
    if (x > 0 && y < 0) return 1;
    if (x < 0 && y < 0) return 2;
    if (x < 0 && y > 0) return 3;
    return -1;
}

int cross(int x0, int y0, int x1, int y1) {
    return (x0 & y1) ^ (x1 & y0);
}

int main() {
    int tn, cs[4][4];
    cin >> tn;
    while (tn--) {
        int n;
        scanf("%d", & n);
        for (int i = 0; i < 4; i++)
            fill(cs[i], cs[i] + 4, 0);
        for (int i = 0; i < n; i++) {
            int xi, yi;
            cin >> xi >> yi;
            int q = quadrant(xi, yi);
            int p = ((yi & 1) << 1) | (xi & 1);
            cs[q][p]++;
        }
        long long sum = 0;
        for (int b = 0; b < 256; b++) {
            int xs[4], ys[4];
            long long c = 1;
            for (int i = 0; i < 4; i++) {
                xs[i] = (b >> (i * 2)) & 1;
                ys[i] = (b >> (i * 2 + 1)) & 1;
                int pi = (ys[i] << 1) | xs[i];
                c *= cs[i][pi];
            }
            if (c == 0)
                continue;
            int vx[3], vy[3];
            for (int i = 0; i < 3; i++) {
                vx[i] = xs[i + 1] ^ xs[0];
                vy[i] = ys[i + 1] ^ ys[0];
            }
            int s0 = cross(vx[1], vy[1], vx[0], vy[0]);
            int s1 = cross(vx[1], vy[1], vx[2], vy[2]);
            if (!(s0 ^ s1)) 
                sum += c;
        }
        cout << sum << '\n';
    }
}
