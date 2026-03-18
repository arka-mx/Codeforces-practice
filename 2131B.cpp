#include <bits/stdc++.h>

using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> v(n);
    if(n%2==0){
        for(int i=0;i<n;i++){
            if(i==n-1)v[i]=2;
            else if(i%2==0)v[i]=-1;
            else v[i]=3;
        }
    }else{
        for(int i=0;i<n;i++){
            if(i==n-1)v[i]=-1;
            else if(i%2==0)v[i]=-1;
            else v[i]=3;
        }
    }
    for(int x : v){
        cout<<x<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}