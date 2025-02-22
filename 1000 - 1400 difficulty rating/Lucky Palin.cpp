#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (s.size() < 9) {
            cout << "unlucky" << endl;
        } else {
            string replaced = s;
            string lucky = "lucky";
            string rev_lucky = "ykcul";
            int replacements = 0;
            int start = 0, end = s.size() - 1;
            while (start < end) {
                if (replaced[start] != replaced[end]) {
                    if (replaced[start] < replaced[end]) {
                        replaced[end] = replaced[start];
                    } else {
                        replaced[start] = replaced[end];
                    }
                    replacements++;
                }
                start++;
                end--;
            }
            int n = s.size();
            string finalAnswer = replaced;
            int count = replaced.size() * 2;
            string currentAnswer = replaced;
            int currentCount = replacements;
            for (int start = 0; start <= s.size() - 5; start++) {
                end = n - 1 - start;
                currentCount = replacements;
                if ((end - start + 1) < 9 && start < end) {
                    continue;
                }
                for (int i = start; i < start + 5; i++) {
                    if (i != (n - 1 - i) && replaced[i] != s[i]) {
                        currentCount--;
                    }
                    if (i != (n - 1 - i) && replaced[n - 1 - i] != s[n - 1 - i]) {
                        currentCount--;
                    }
                    if (i == (n - 1 - i) && replaced[i] != s[(n - 1 - i)]) {
                        currentCount--;
                    }
                }
                currentAnswer.replace(start, 5, lucky);
                currentAnswer.replace(end - 4, 5, rev_lucky);
                for (int i = start; i < start + 5; i++) {
                    if (i != (n - 1 - i) && currentAnswer[i] != s[i]) {
                        currentCount++;
                    }
                    if (i != (n - 1 - i) && currentAnswer[(n - 1 - i)] != s[(n - 1 - i)]) {
                        currentCount++;
                    }
                    if (i == (n - 1 - i) && currentAnswer[i] != s[(n - 1 - i)]) {
                        currentCount++;
                    }
                }
                if (currentCount < count ||
                    ((currentCount == count) && currentAnswer < finalAnswer)) {
                    finalAnswer = currentAnswer;
                    count = currentCount;
                }
                currentAnswer.replace(start, 5, replaced, start, 5);
                currentAnswer.replace(end - 4, 5, replaced, end - 4, 5);
            }
            cout << finalAnswer << " " << count << endl;
        }
    }
    return 0;
}
