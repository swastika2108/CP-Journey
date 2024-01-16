#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    int count = 0;
 
    while(count < k){
        if(n % 10 == 0){
            n = n / 10;
            
        }
        else{
            n -= 1;
            
        }
        count++;
    }
 
    cout << n << endl;
    
    return 0;
}