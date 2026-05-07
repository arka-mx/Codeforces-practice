#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++)fact=fact*i;
    return fact;
}
void logic(){
    int n,a,b;
    cin>>n>>a>>b;
    int mid = n-a-b;
    
    if(fact(mid)>=2 || (n==a&&n==b)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}