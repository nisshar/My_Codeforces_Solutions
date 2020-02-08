// Diversity
#include <bits/stdc++.h>

using namespace std;
int main() {
    string str;
    int k, e = 0, ans = 0;
    unordered_map < int, int > mappy;
    cin >> str >> k;

    for (int i = 0; i < str.size(); i++)
        mappy[str[i]]++;
    for (auto it = mappy.begin(); it != mappy.end(); it++)
        e++;

    if (e >= k) cout << 0 << endl;
    else {
        int val = k - e;
        if (val <= str.length() - e)
            cout << val << endl;
        else cout << "impossible";
    }
    return 0;
}
