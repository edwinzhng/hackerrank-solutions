#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> ratings(n), candies(n, 1);
    for(int i = 0; i < n; i++){
        cin >> ratings[i];
    }


    for(int i = 1; i < n; i++){
        if(ratings[i] > ratings[i - 1]){
            candies[i] = candies[i - 1] + 1;
        }
    }

    for(int i = ratings.size() - 1; i > 0; i--){
        if(ratings[i] < ratings[i - 1]){
            candies[i - 1] = max(candies[i - 1], candies[i] + 1);
        }
    }

    long count = 0;
    for(int i = 0; i < n; i++){
        count += candies[i];
    }

    cout << count << endl;
    return 0;
}
