// Beautiful String
#include <bits/stdc++.h>

using namespace std;
char no_of_two(char ch1, char ch2) {
    if ((ch1 == 'a' || ch1 == 'b') && (ch2 == 'b' || ch2 == 'a'))
        return 'c';
    if ((ch1 == 'b' || ch1 == 'c') && (ch2 == 'c' || ch2 == 'b'))
        return 'a';
    else
        return 'b';

}
char no_of(char ch) {

    if (ch == 'a')
        return 'b';
    else if (ch == 'b')
        return 'a';
    else
        return 'a';

}
bool all_distinct(string str) {

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '?')
            if (str[i] == str[i + 1]) {
                return false;
            }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {

        string s;
        int i;
        cin >> s;

        if (all_distinct(s) == false) cout << -1 << endl;
        else {
            for (i = 0; i < s.length(); i++) {
                if (i > 0 && i < s.length() - 1) {
                    if (s[i] == '?' && s[i + 1] != '?' && s[i - 1] == '?')
                        s[i] = no_of(s[i + 1]);
                    else if (s[i] == '?' && s[i + 1] == '?')
                        s[i] = no_of(s[i - 1]);
                    else if (s[i] == '?' && s[i + 1] != '?' && s[i - 1] != '?')
                        s[i] = no_of_two(s[i - 1], s[i + 1]);

                } else if (i == 0) {
                    if (s[i] == '?')
                        s[i] = no_of(s[i + 1]);

                } else {

                    if (s[i] == '?')
                        s[i] = no_of(s[i - 1]);
                }

            }
            cout << s << endl;
        }
    }
    return 0;
}
