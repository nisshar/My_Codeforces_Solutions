// Keanu Reeves
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i, zero = 0, one = 0;
 
    for (i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    if (zero != one) {
        cout << 1 << endl;
        cout << s << endl;
    } else {
        cout << 2 << endl;
        cout << s[0] << " ";
        for (i = 1; i < n; i++)
            cout << s[i];
 
    }
 
    return 0;
}
