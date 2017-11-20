#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K, answer = 0;
    cin >> N >> K;
    vector<int> values(N);
    for(int i = 0; i < N; i++){
        cin >> values[i];
    }
    sort(values.begin(), values.end());
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(values[j] - values[i] == K){
                answer++;
            }
            else if(values[j] - values[i] > K){
                break;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
