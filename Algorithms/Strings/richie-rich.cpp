#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int first = 0, last = s.length() - 1;
    while(first <= last) {
        if(s[first++] != s[last--]) {
            return false;
        }
    }
    return true;
}

string changeNumber(string s, int move, int k) {
    string max = s, temp = s;
    if(move == k) {
        return s;
    }
    for(int i = 0; i < s.length(); i++) {
        for(int j = 0; j < 10; j++) {
            temp = s;
            temp[i] = '0' + j;
            temp = changeNumber(temp, move + 1, k);
            if(isPalindrome(temp) && temp > max) {
                max = temp;
            }
        }
    }
    return isPalindrome(max) ? max : "-1";
}

int main() {
    int n, k;
    string s, ans;
    cin >> n >> k >> s;
    ans = changeNumber(s, 0, k);
    cout << ans << endl;
    return 0;
}
