#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int i;
    string s;
    vector < char > v;
    cin >> s;
    for (i = 0; i < s.length(); i++) {
        if (i == s.length() - 1 && s[i] != s[i - 1])
            v.push_back(s[i]);
        else if (s[i] != s[i + 1])
            v.push_back(s[i]);
        else i++;
 
    }
    if (v.empty()) cout << endl;
    else {
 
        map < char, int > map;
        for (i = 0; i < v.size(); i++)
            map[v[i]];
 
        for (auto it = map.begin(); it != map.end(); it++)
            cout << it -> first;
 
        cout << endl;
    }
}
    return 0;
}
