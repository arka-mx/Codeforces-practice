#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;

    if(i==j && i==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    }else if(i==n && j==m){
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
    }else if(i==n && j==1){
        cout<<1<<" "<<m<<" "1<<" "<<m<<endl;
    }else if(i==1 && j==m){
        cout<<n<<" "<<1<<" "<<n<<" "<<1<<endl;
    }else{
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}