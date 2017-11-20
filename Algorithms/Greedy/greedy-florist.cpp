#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> flowers(n);
    for(int i = 0; i < n; i++){
        cin >> flowers[i];
    }

    sort(flowers.begin(), flowers.end());
    int person = 0;
    int cost = 0;
    int multiplier = 1;

    for(int i = n - 1; i >= 0; i--){
        person++;
        cost += multiplier * flowers[i];
        if(person == k){
            person = 0;
            multiplier += 1;
        }
    }
    cout << cost << endl;
    return 0;
}
