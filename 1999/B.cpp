#include <bits/stdc++.h>

using namespace std;

void logic(){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int wins=0;
    int suneet=0;
    int sum1 = a1+a2;
    int slavic=0;
    int sum2=b1+b2;
    for(int i=1;i<=4;i++){
        if(i==1 || i==2) suneet = a1;
        else  suneet =a2;
        if(i%2==1) slavic=b2;
        else  slavic=b1;

        if(suneet>slavic && sum1-suneet>=sum2-slavic)wins++;
        else if(suneet>=slavic && sum1-suneet > sum2-slavic)wins++;
    }
    cout<<wins<<endl;
    
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}