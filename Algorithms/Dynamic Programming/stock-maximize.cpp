#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long solve(vector<int>& prices, int n){
    long long answer = 0, currentMax = 0;
    for(int i = n; i > 0; i--){
        if(prices[i] >= currentMax){
            currentMax = prices[i];
        }
        answer += currentMax - prices[i];
    }
    return answer;
}


int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> prices(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> prices[i];
        }
        cout << solve(prices, n) << endl;
    }
    return 0;
}
