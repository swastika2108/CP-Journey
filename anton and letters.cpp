#include <bits/stdc++.h>
using namespace std;
const int M=1e7;
#define ll long long
 
int main(){
 string s;
 cin>>s;
 set<char> sp;
 for(int i=0;i<s.size();i++){
    if(s[i]>='a'&&s[i]<='z'){
        sp.insert(s[i]);
    }
 }
 
 cout<<sp.size()<<endl;
 
}