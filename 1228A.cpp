// Distinct Digits
#include<bits/stdc++.h>
 
using namespace std;
bool all_distinct(int num) {
    string str = to_string(num);
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int n, m, i;
    cin >> n >> m;
 
    for (i = n; i <= m; i++) {
        if (all_distinct(i) == true) {
            cout << i;
            break;
        }
        if (i == m) cout << -1;
    }
 
    return 0;
}
