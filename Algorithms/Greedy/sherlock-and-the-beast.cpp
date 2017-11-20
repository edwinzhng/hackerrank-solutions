#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      if(n == 1 || n == 2 || n == 4 || n == 7){
        cout<< -1 << endl;
      }
      else if(n % 3==0)
      {
          for(int j = 0; j < n; j++){
            cout << "5";
          }
          cout << endl;
      }
      else if(n % 3 == 2)
      {
          for(int j = 0; j < (n - 5); j++){
            cout << 5;
          }
          cout << 33333 << endl;
      }
      else if(n % 3==1)
      {
          for(int j = 0; j < (n - 10); j++){
            cout << 5;
          }
          cout << 3333333333 << endl;
      }
    }
    return 0;
}
