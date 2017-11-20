#include <vector>
#include <iostream>
using namespace std;

int main() {
    int g;
    cin >> g;
   for(int i = 0; i < g; i++) {
       int n;
       string b;
       cin >> n >> b;
       vector<int> recurrence(26, 0);
       bool underscore = false, works = true, single = false;

       for(int j = 0;j < n; j++) {
           if(b[j] == '_') {
               underscore = true;
           }
           else {
               recurrence[b[j] - 65]++;
           }
       }
       if(!underscore) {
           for(int k = 0; k < n; k++) {
               if(b[k] != b[k-1] && b[k] != b[k+1]) {
                   works = false;
               }
           }
           if(!works) {
               cout << "NO\n";
           }
           else{
               cout << "YES\n";
           }
       }
       else {
           for(int j = 0; j < 26; j++) {
               if(recurrence[j] == 1) {
                   single = true;
                   break;
               }
           }
           if(single) {
               cout << "NO\n";
           }
           else {
               cout << "YES\n";
           }
       }
   }
    return 0;
}
