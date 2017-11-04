#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> times(n + 1);
    int maxTime = 1;

    for(int i = 1; i <= n; i++){
        int t, d;
        cin >> t >> d;
        times[i] = t + d;
        if(t+d > maxTime){
            maxTime = t + d;
        }
    }

    for(int i = 1; i <= maxTime; i++){
        for(int j = 1; j <= n; j++){
            if(times[j] == i){
                cout << j << " ";
            }
        }
    }
    return 0;
}
