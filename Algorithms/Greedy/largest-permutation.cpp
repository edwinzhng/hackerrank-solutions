#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, k, temp, highest, i = 0, swapIndex;
    vector<int> array;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        array.push_back(temp);
    }
    highest = n;
    while(i < k && highest > 0) {
        if(array[n - highest] == highest) {
            highest--;
        }
        else {
            for(int j = n - highest + 1; j < n; j++) {
                if(array[j] == highest) {
                    swapIndex = j;
                    break;
                }
            }
            temp = array[n - highest];
            array[n - highest] = array[swapIndex];
            array[swapIndex] = temp;
            highest--;
            i++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
