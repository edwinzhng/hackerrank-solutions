#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, m, temp;
    vector<int> scores;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(scores.size() == 0 || temp != scores.back())
        scores.push_back(temp);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> temp;
        while(scores.size() != 0 && temp >= scores.back()) {
            scores.pop_back();
        }
        cout << scores.size() + 1 << endl;
    }

    return 0;
}
