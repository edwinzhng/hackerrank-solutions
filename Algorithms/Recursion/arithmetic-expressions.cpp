#include <iostream>
#include <string>
using namespace std;

bool memo[202][10001] = { false };

string calculate(int n, int arr[], long long total, int index, string operations) {
    int result = total % 101;
    if(result == 0) {
        for(int i = index; i < n; i++) {
            operations += "*" + to_string(arr[i]);
        }
        return operations;
    }
    if(index == n) {
        return "";
    }
    if (memo[101 + result][index]) {
        return "";
    }
    string t = calculate(n, arr, total + arr[index], index + 1, operations + "+" + to_string(arr[index]));
    if(t != "") {
        return t;
    }
    t = calculate(n, arr, total - arr[index], index + 1, operations + "-" + to_string(arr[index]));
    if(t != "") {
        return t;
    }
    t = calculate(n, arr, total * arr[index], index + 1, operations + "*" + to_string(arr[index]));
    if(t != "") {
        return t;
    }
    memo[101 + result][index] = true;
    return "";
}

int main() {
    int n;
    cin >> n;
    int values[n];
    for(int i = 0; i < n; i++) {
        cin >> values[i];
    }
    string ans = calculate(n, values, values[0], 1, to_string(values[0]));
    cout << ans << endl;

    return 0;
}
