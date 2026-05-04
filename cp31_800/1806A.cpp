#include <bits/stdc++.h>
using namespace std;
 
void logic(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int diff = d-b;
    if(diff<0){
        cout<<-1<<endl;
    }else{
        a+=diff;
        if(a<c)cout<<-1<<endl;
        else{
            cout<<diff+a-c<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)logic();
}
