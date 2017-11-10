#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n1, n2, n3, temp, sum1 = 0, sum2 = 0, sum3 = 0, max;
    vector<int> a1, a2, a3;
    cin >> n1 >> n2 >> n3;
    for(int i = 0; i < n1; i++) {
        cin >> temp;
        sum1 += temp;
        a1.push_back(temp);
    }
    for(int i = 0; i < n2; i++) {
        cin >> temp;
        sum2 += temp;
        a2.push_back(temp);
    }
    for(int i = 0; i < n3; i++) {
        cin >> temp;
        sum3 += temp;
        a3.push_back(temp);
    }

    while((sum1 != sum2 || sum2 != sum3) && sum1 >= 0 && sum2 >= 0 && sum3 >= 0) {
        max = sum1;
        if(sum2 > max) {
            max = sum2;
        }
        if(sum3 > max) {
            max = sum3;
        }
        if(max == sum1) {
            sum1 -= a1[0];
            a1.erase(a1.begin());
        }
        else if(max == sum2) {
            sum2 -= a2[0];
            a2.erase(a2.begin());
        }
        else if(max == sum3) {
            sum3 -= a3[0];
            a3.erase(a3.begin());
        }
    }

    cout << ((sum1 == sum2 && sum2 == sum3) ? sum1 : 0) << endl;

    return 0;
}
