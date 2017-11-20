#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    int count = 0;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++){
        if(i > 1){
            if(s[i] == '0' && s[i - 1] == '1' && s[i - 2] == '0'){
                s[i] = 1;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
