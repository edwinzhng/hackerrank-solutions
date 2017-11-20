#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string grid = "";
    vector<int> x;

    for(int i = 0; i < n; i++) {
       string x;
       cin >> x;
       grid += x;
    }
    for(int j = n; j < n*n - n; j++) {
        if(j % n != 0 && j % n != (n-1)) {
            if(grid[j] > grid[j+1] && grid[j] > grid[j-1] && grid[j] > grid[j+n] && grid[j] > grid[j-n]){
                grid[j] = 'X';
            }
        }
    }
    for(int i = 0;i < n*n;i++) {
       cout << grid[i];
       if((i + 1) % n == 0) {
           cout << endl;
       }
    }
    return 0;
}
