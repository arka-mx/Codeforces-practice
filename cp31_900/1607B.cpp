#include <bits/stdc++.h>
using namespace std;

void logic(){
    long long x,n;
    cin>>x>>n;
    n+=1;
    if(x%2==0){
        long long m = n/4;
        // cout<<m<<endl;
        int residue = n%4;
        // cout<<"m"<<m<<endl;
        // cout<<"residue "<<residue<<endl;
        x+=4*m;
        for(int i=0;i<residue;i++){
            // cout<<"loop running"<<" ";
            if(i==1||i==0)x-=n-residue+i;
            else x+=n-residue+i;
            // cout<<x<<endl;
        }
    }else{
        long long m = n/4;
        int residue = n%4;
        x-=4*m;
        // cout<<"m"<<m<<endl;
        // cout<<"residue "<<residue<<endl;
        for(int i=0;i<residue;i++){
            // cout<<"loop running"<<" ";
            if(i==1||i==0)x+=n-residue+i;
            else x-=n-residue+i;
            // cout<<x<<endl;
        }
    }
    cout<<x<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}