#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    long maximum = 0;
    for(int i = L; i <= R; i++){
        for(int j = i; j <= R; j++){
            bitset<10> a(i);
            bitset<10> b(j);
            bitset<10> c = a^b;
            if(c.to_ulong() > maximum){
                maximum = c.to_ulong();
            }
        }
    }
    cout << maximum << endl;
    return 0;
}
