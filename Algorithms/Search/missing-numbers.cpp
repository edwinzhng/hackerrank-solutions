#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    vector<int> A;
    vector<int> B;
    vector<int> freqA(10001, 0);
    vector<int> freqB(10001, 0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        A.push_back(temp);
        freqA[temp]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        B.push_back(temp);
        freqB[temp]++;
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int min, max;
    if(A[0] <= B[0]) {
        min = A[0];
    }
    else {
        min = B[0];
    }
    if(A[n - 1] >= B[m - 1]) {
        max = A[n - 1];
    }
    else {
        max = B[m - 1];
    }

    for(int i = min; i <= max; i++) {
        if(freqA[i] < freqB[i]) {
            cout << i << " ";
        }
    }
    return 0;
}
