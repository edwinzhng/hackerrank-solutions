#include <vector>
#include <iostream>
using namespace std;

void getSum(vector<int>& powers, int index, int sum, int& count, int x){
    if(powers.size() == index){
        if(sum == x){
            count++;
        }
        return;
    }
    int val = sum + powers[index];
    getSum(powers, index + 1, val, count, x);
    getSum(powers, index + 1, sum, count, x);
}

int main() {
    int n, x;
    cin >> x >> n;
    vector<int> powers;
    int i = 1;
    while(pow(i, n) <= x){
        powers.push_back(pow(i, n));
        i++;
    }

    int count = 0;
    int sum = 0;

    getSum(powers, 0, sum, count, x);
    cout << count << endl;
    return 0;
}
