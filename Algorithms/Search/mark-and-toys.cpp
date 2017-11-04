#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long> prices(n);

    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int spent = 0;
    int toys = 0;

    do{
        spent += prices[toys];
        toys++;
    }while(spent < k);

    cout << toys - 1 << endl;
    return 0;
}
