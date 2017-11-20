#include <iostream>
#include <string>
using namespace std;

string super_digit(string p) {
    long long sum = 0;
    if(p.length() == 1) {
        return p;
    }
    for(int i = 0; i < p.length(); i++) {
        sum += p[i] - '0';
    }
    return super_digit(to_string(sum));
}

int main() {
    string n;
    int k;
    long long sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n.length(); i++) {
        sum += n[i] - '0';
    }
    sum *= k;
    string ans = super_digit(to_string(sum));
    cout << ans << endl;
    return 0;
}
