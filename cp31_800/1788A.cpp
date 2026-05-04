#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    int f=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2)f++;
    }
    if(f%2==1){
        cout<<-1<<endl;
    }else{
        int f1=0;
        int i=0;
        for(i=0;i<n;i++){
            if(a[i]==2)f1++;
            if(f1==f/2)break;

        }
        cout<<i+1<<endl;
    }



}
int main(){
    int t;
    cin>>t;
    while(t--)logic();
}