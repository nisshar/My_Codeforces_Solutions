// Even But Not Even
#include <bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;

    int i, bit = 0, sum = 0, bell = 0, b;
    cin >> s;
    for (i = s.length() - 1; i >= 0; i--) {
      if (s[i] % 2 != 0) {
        bit++;
        break;
      } else s.pop_back();
    }
    if (bit == 0) {
      cout << -1 << endl;

    } 
    else {
      for (i = s.length() - 1; i >= 0; i--) {
        b = s[i] - '0';
        sum = sum + b;

      }

      if (sum % 2 == 0) cout << s << endl;
      else {
        for (auto it = s.begin(); it != s.end() - 1; it++)
          if ( * it % 2 != 0) {
            if (it == s.begin() || ( * it + 1) == '0')
              continue;
            bell++;
            s.erase(it);
            break;
          }
        if (bell == 0) cout << -1 << endl;
        else
          cout << s << endl;
      }
    }
  }

  return 0;
}