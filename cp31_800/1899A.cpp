#include <bits/stdc++.h>
using namespace std;
void logic(){
    int n;
    cin>>n;
    if(n%3==0)cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}