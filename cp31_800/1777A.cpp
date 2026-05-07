#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    int N=n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        while((a[i]+a[i+1])%2==0){
            int x=a[i]*a[i+1];
            a.erase(a.begin()+i,a.begin()+i+2);
            a.insert(a.begin()+i,x);
            n--;
            if(n==1)break;
            else if(i==n-1)break;
        }
        
    }
    cout<<N-n<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        logic();
    }
    
}