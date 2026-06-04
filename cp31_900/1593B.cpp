#include <bits/stdc++.h>
using namespace std;


void logic(){
    long long n;
    cin>>n;

    long long temp=n;
    int first=0,last=0;
    int temp1=0,temp2=0;
    string s=to_string(n);
    int size= s.size();
    int ans=INT_MAX;
    for(int i=size-1;i>=0;i--){
        if(s[i]=='5' && temp1==0){
            last=i;
            for(int j=i-1;j>=0;j--){
                if(s[j]=='2'||s[j]=='7'){
                    first=j;
                    break;
                }
            }
            ans = min(size-first-2,ans);
        }else if(s[i]=='0' && temp2==0){
            last = i;
            for(int j=i-1;j>=0;j--){
                if(s[j]=='0'||s[j]=='5'){
                    first=j;
                    break;
                }
            }
            ans = min(size-first-2,ans);
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}