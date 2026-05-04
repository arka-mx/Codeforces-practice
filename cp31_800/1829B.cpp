#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lmax=0;
    int l=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            l++;
            lmax = max(lmax,l);
        }else{
            l=0;
        }
    }
    
    cout<<lmax<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)logic();
}