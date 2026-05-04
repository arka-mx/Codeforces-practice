#include <bits/stdc++.h>
using namespace std;

void logic(){
    int a,b,c,c1,c2;
    cin>>a>>b>>c;
    if(c%2==0){
        c1=c/2;
        c2=c/2;
    }else{
        c1 = c/2+1;
        c2=c/2;
    }
    int turn_first = a+c1;
    int turn_second = b+c2;
    // cout<<turn_first<<" "<<turn_second<<endl;
    if(turn_first>turn_second)
    cout<<"First"<<endl;
    else if(turn_first<turn_second)
    cout<<"Second"<<endl;
    else{
        cout<<"Second"<<endl;
        // else cout<<"First"<<endl;
    }
}
int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}