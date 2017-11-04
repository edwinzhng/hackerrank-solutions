#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int total,n;
    cin >> total >> n;
    int coins[n];
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    long long T[n+1][total+1];
    for(int i = 0;i <= n; i++)
    {
        for(int j = 0; j <= total; j++)
        {
            if(i == 0){
                T[i][j]=0;
            }
            else if(j==0){
                T[i][j]=1;
            }
            else if(coins[i-1] > j){
                T[i][j]=T[i-1][j];
            }
            else{
                T[i][j]=T[i-1][j]+T[i][j-coins[i-1]];
            }
        }
    }
    cout << T[n][total];

    return 0;
}
