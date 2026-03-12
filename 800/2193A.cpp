#include <bits/stdc++.h>
using namespace std;
void logic(){
    int n,s,x;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of s = ";
    cin>>s;
    cout<<"Enter the value of x = ";
    cin>>x;
    int sum=0;
    //calculating the sum of the elements
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    if(sum>s)
    cout<<"NO"<<endl;
    else{
        int d = s-sum;
        if(d%x==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main(){
    
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        logic();
    }
}