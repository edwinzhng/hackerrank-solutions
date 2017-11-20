#include <iostream>
#include <string>
using namespace std;

string solve(string s, int n, int k) {
    bool changed[n] = { false };
    int last = n - 1, first = 0;

    // first check if palindrome can be created
    while(first <= last) {
        if(s[first] != s[last]) {
            if(s[first] > s[last]) {
                s[last] = s[first];
                changed[last] = true;
                k--;
            }
            else {
                s[first] = s[last];
                changed[first] = true;
                k--;
            }
        }
        if(k < 0) {
            return "-1";
        }
        first++;
        last--;
    }

    first = 0;
    last = n - 1;

    // set indices to maximum possible values
    while(first <= last) {
        if(s[first] != '9' && s[last] != '9') {
            if(changed[first] || changed[last]) {
                s[first] = '9';
                s[last] = '9';
                k--;
            }
            else {
                if(k >= 2 || first == last) {
                    s[first] = '9';
                    s[last] = '9';
                    k -= 2;
                }
            }
        }
        if(k <= 0) {
            return s;
        }
        first++;
        last--;
    }

    return s;
}

int main() {
    int n, k;
    string s, ans;
    cin >> n >> k >> s;
    ans = solve(s, n, k);
    cout << ans << endl;
    return 0;
}
