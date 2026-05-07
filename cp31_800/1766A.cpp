#include <bits/stdc++.h>
using namespace std;

pair<int,int> length_digit(int x){
    int l=0;
    int d=0;
    while(x>0){
        if(x<10)d=x;
        x=x/10;
        l++;
    }
    return {l,d};
}
void logic(){
    int n;
    cin>>n;
    pair<int,int> p = length_digit(n);
    int ans = 9*(p.first-1)+p.second;
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        logic();
    }
    
}