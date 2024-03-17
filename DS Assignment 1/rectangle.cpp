#include<bits/stdc++.h>
using namespace std;

int main () {
    int cs = 1;
    int tc; cin >> tc; while (tc--) {
        int n; cin >> n;
        string s; cin >> s;
        int r = 0, g = 0, b = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') r++;
            else if (s[i] == 'G') g++;
            else b++;
        }
        if (r == g and g == b) cout << "Case " << cs++ <<  ": Harmonious" << endl;
        else cout << "Case " << cs++ << ": Not Harmonious" << endl;
    }
    return 0;
}
