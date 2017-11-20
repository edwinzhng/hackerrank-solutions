#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }
    sort(values.begin(), values.end());

    cout << values[floor(n / 2)] << endl;
    return 0;
}
