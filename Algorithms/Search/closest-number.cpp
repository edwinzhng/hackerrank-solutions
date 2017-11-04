#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, second;
    cin >> n;
    vector<int> values(n);
    vector<int> answers;
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }
    sort(values.begin(), values.end());
    long long answer = 100000000;
    int t1, t2;
    for(int i = 0; i < n - 1; i++){
        second = i + 1;
        if(abs(values[second] - values[i]) < answer){
            answers.clear();
            answer = abs(values[second] - values[i]);
            answers.push_back(values[second]);
            answers.push_back(values[i]);
        }
        else if(abs(values[second] - values[i]) == answer){
            answers.push_back(values[second]);
            answers.push_back(values[i]);
        }
    }

    sort(answers.begin(), answers.end());
    for(int i = 0; i < answers.size(); i++){
        cout << answers[i] << " ";
    }
    return 0;
}
