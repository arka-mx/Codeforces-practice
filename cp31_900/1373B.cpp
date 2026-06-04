#include <bits/stdc++.h>
using namespace std;

void logic(){
    string s;
    cin>>s;
    int possible_index=0;
    char left ,right;
    // int n = s.length();
    for(int i=0;i<s.length();i++){
        if(i>0)
        left = s[i-1];
        if(i<s.length()-1)
        right = s[i+2];
        if(left!=right && s[i]!='-1' && s[i+1]!='-1'){
            s[i]='-1';
            s[i+1]='-1';
        }

    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}