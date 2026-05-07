#include <bits/stdc++.h>
using namespace std;
void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int positives=0;
    for(int i=n-1;i>0;i--){
        if(a[i]>0){
            a[i-1]+=a[i];
            
        }
    }

    for(int x : a){
        if(x>0)positives++;
    }
    
    cout<<positives<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        logic();
        /* code */
    }
    
}