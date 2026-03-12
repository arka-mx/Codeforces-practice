#include <bits/stdc++.h>
using namespace std;
void logic(){
    int l,a,b;
    cin>>l;
    cin>>a;
    cin>>b;
    int c=0;
    int d=a; //init pos
    int maxi=a;
    do{
        d+=b;
        c=d%l;
        maxi = max(c,maxi);
    }while(c!=a);
    cout<<maxi<<endl;

}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        logic();
    }
}