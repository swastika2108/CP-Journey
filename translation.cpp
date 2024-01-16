#include <bits/stdc++.h>
using namespace std;
const int M=1e7;
#define ll long long
 
int main(){
 string s;
 cin>>s;
 string p;
 cin>>p;
 reverse(s.begin(),s.end());
 if(p==s){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }
}