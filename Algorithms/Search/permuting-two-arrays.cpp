#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    for(int queries = 0; queries < q; queries++){
        int n, k, temp;
        cin >> n >> k;
        bool possible = true;
        vector<int> A(n), B(n);
        for(int i = 0; i < n; i++){
            cin >> temp;
            A[i] = temp;
        }
        for(int i = 0; i < n; i++){
            cin >> temp;
            B[i] = temp;
        }

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        reverse(B.begin(), B.end());



        for(int i = 0; i < n; i++){
            if(A[i] + B[i] < k){
                possible = false;
            }
        }
        if(possible){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }


    return 0;
}
