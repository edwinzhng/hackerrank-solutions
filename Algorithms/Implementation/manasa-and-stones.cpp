#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> answers;
        for(int j = 0; j < n; j++){
            for(int k = 0; k + j < n; k++){
                if((a*j)+(b*k) > 0 && k + j == n - 1){
                    if(find(answers.begin(), answers.end(), (a*j)+(b*k)) == answers.end()){
                        answers.push_back((a*j)+(b*k));
                    }
                }
            }
        }
        sort(answers.begin(), answers.end());
        for(int j = 0; j < answers.size(); j++){
            cout << answers[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
