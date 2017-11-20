#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool stringCompare(string a, string b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), stringCompare);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
