#include <vector>
#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    vector<int> freqA(26, 0), freqB(26, 0);

    for(int i = 0; i < a.size(); i++){
        freqA[a[i] - 97]++;
    }
    for(int i = 0; i < b.size(); i++){
        freqB[b[i] - 97]++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(freqA[i] < freqB[i]){
            while(freqA[i] < freqB[i]){
                freqB[i]--;
                count++;
            }
        }
        else if(freqA[i] > freqB[i]){
            while(freqA[i] > freqB[i]){
                freqA[i]--;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
