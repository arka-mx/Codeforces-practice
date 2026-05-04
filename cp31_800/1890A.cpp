#include <bits/stdc++.h>
using namespace std;
void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int k1=0,k2=0;
    k1=a[0];
    for(int i=1;i<n;i++){
        if(a[i]!=k1){
            k2=a[i];
            break;
        }
    }
    int count_k1 = count(a.begin(),a.end(),k1);
    int count_k2 = count(a.begin(),a.end(),k2);
    
    if(n%2==0){
        if(count_k1==count_k2 && count_k1+count_k2==n)cout<<"YES"<<endl;
        else{
            if(count_k2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }else{
        if((count_k1+1==count_k2 || count_k2+1==count_k1) && (count_k1+count_k2==n))cout<<"YES"<<endl;
        else{
            if(count_k2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}