#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int size = s.size() / 2;
        int count = 0;
        if(s.length() % 2 != 0){
            cout << "-1" << endl;
        }
        else{
            string x = s.substr(0, size);
            string y = s.substr(size, size);
            vector<int> freqX(26), freqY(26);
            for(int i = 0; i < size; i++){
                freqX[x[i] - 97]++;
            }
            for(int i = 0; i < size; i++){
                freqY[y[i] - 97]++;
            }
            for(int i = 0; i < 26; i++){
                count += abs(freqX[i] - freqY[i]);
            }
            cout << count/2 << endl;
        }
    }
    return 0;
}
