#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, count = 0;
    cin >> n;

    while(n > 0){
        if((n&0x1)==0){
    		   count++;
    	   }
        n >>= 1;
    }

    long long answer = pow(2,count);
    cout << answer << endl;
    return 0;
}
