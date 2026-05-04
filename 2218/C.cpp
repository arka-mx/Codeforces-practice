#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    

    int i,j;
    i=1;j=3*n;
    vector<int> b;
    while(i<j){
        b.push_back(i);
        b.push_back(j-1);
        b.push_back(j);
        j-=2;
        i++;
    }
    for(int i=0;i<3*n;i++)
    cout<<b[i]<<" ";

    cout<<"\n";
    
}
int main(){
    int t ;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}