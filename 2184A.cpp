#include<bits/stdc++.h>

using namespace std;

void logic(){
    int n;
    cin>>n;
    int difference;
    difference=0;
    if(n%3==0 && (n/3)%2==0){
        difference=0;
    }else if(n%3==0 && (n/3)%2==1){
        difference=1;
    }else if(n%2==0 &&(n/2)%2==0){
        difference=0;
    }
    else if(n%2==0){
        if(n==2)difference=2;
        else difference=0;
    }else if(n%2!=0 && n%3!=0){
        difference=1;
    }else{}
    cout<<difference<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    logic();
}