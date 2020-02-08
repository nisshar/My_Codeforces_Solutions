// Lucky Division
#include <bits/stdc++.h>

using namespace std;
bool isLucky(int n) {
  while (n != 0) {
    if (n % 10 != 7 && n % 10 != 4)
      return false;
    n = n / 10;
  }
  return true;
}

int main() {

  int n, i, val;
  cin >> n;
  if (isLucky(n) == true) {
    cout << "YES";
    return 0;
  }
  for (i = 2;; i++) {
    val = n / i;
    if (val <= 0) {
      cout << "NO";
      return 0;
    }
    if (n % i == 0) {
      if (isLucky(val) == true) {
        cout << "YES";
        return 0;
      }
    }
  }
  return 0;
}