#include <bits/stdc++.h>
using namespace std;


void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    bool isSorted =true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            if(a[i]<a[i-1])
            isSorted=false;
        }
    }
    if(isSorted==false){
        cout<<0<<endl;
    }else{
        int d=0;
        int dmin = INT_MAX;
        for(int i=0;i<n-1;i++){
            d = a[i+1]-a[i];
            dmin = min(dmin,d);
        }
        if(dmin%2==1){
            cout<<(dmin+1)/2<<endl;
        }else{
            cout<<dmin/2+1<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}