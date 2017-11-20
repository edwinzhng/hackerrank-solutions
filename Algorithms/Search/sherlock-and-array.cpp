#include <vector>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        vector<int> A(n);
        int rightSum = 0, leftSum = 0;
        for(int j = 0; j < n; j++){
            cin >> A[j];
            rightSum += A[j];
        }
        if(n == 1){
            cout << "YES" << endl;
        }
        else if (n == 2){
            cout << "NO" << endl;;
        }
        else{
            bool possible = false;
            for(int k = 0; k < n; k++){
                if(k > 0){
                    leftSum += A[k - 1];
                }
                rightSum -= A[k];

                if(leftSum == rightSum){
                    possible = true;
                    break;
                }
            }
            cout << (possible ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
