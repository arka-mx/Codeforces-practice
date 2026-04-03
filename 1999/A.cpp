#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}