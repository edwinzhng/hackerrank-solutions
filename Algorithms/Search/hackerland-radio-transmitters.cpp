#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    int answer = 0;
    vector<int> houses(n);
    for(int i = 0; i < n; i++){
        cin >> houses[i];
    }
    sort(houses.begin(), houses.end());
    int middleIndex = 0;
    for(int i = 0; i < n; i++){
        answer++;
        int begin = houses[i];
        while(i + 1 < n && houses[i + 1] - begin <= k){
            i++;
        }
        middleIndex = i;
        while(i + 1 < n && houses[i + 1] - houses[middleIndex] <= k){
            i++;
        }
    }
    cout << answer << endl;
    return 0;
}
