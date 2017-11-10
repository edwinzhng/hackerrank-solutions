#include <vector>
#include <iostream>
using namespace std;

int max(vector<int>& arr) {
    int m = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}


int main() {
    int n, p1, p2;
    cin >> n;
    vector<int> arr;
    while(n--) {
        cin >> p1;
        if(p1 == 1) {
            cin >> p2;
            arr.push_back(p2);
        }
        else if(p1 == 2) {
            arr.pop_back();
        }
        else {
            cout << max(arr) << endl;
        }
    }
    return 0;
}
