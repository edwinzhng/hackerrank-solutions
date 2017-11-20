#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long x;
        cin >> x;
        bitset<32> s(x);
        s.flip();
        cout << s.to_ulong() << endl;
    }
    return 0;
}
