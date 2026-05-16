#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int l=0,l_max=0;
    char ch;
    for(int i=0;i<n;i++){
        if(l==0)ch=s[i];
        // cout<<ch<<" "<<s[i]<<endl;
        if(s[i]==ch){
            l++;
            if(s[i+1]!=ch){
                l_max = max(l,l_max);
                l=0;
            }
        }
        
    }
    l_max = max(l,l_max);
    cout<<l_max+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}