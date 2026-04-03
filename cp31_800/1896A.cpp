#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int num=n;
    bool swapped=false;
    bool can_be_sorted=true;
    for(int i=n-1;i>=1;i--){
        swapped=false;
        for(int j=1;j<=i;j++){
            if(a[j]==num){
                swapped=true;
                if(j!=i){
                    swap(a[j],a[i]);
                    
                }
                break;
            }
        }
        num--;
        if(swapped==false){
            can_be_sorted=false;
            break;
        }
    }
    if(can_be_sorted==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}