#include <bits/stdc++.h>
using namespace std;

void logic(){
    long long n;
    cin>>n;

    long long mod = n%12;
    // cout<<n/4<<endl;
    long long maxi,mini=0;
    switch ((mod))
    {
    case 0:
        maxi = n/4;
        // cout<<maxi<<endl;
        mini = n/6;
        break;
    case 2:
        maxi = n/4;
        
        mini = n/6 + 1;
        break;
    case 4:
        maxi = n/4;
        mini = n/6 + 1;
        break;
    case 6:
        maxi = n/4;
        mini = n/6;
        break;
    case 8:
        maxi = n/4;
        mini = (n-8)/6+2;
        break;
    case 10:
        maxi = (n-10)/4 + 2;
        mini = (n-10)/6 + 2;
        break;
    
    default:
        maxi = -1;
        mini = -1;
        break;
    }
    if(maxi >0 && mini >0){
        cout<<mini<<" "<<maxi<<endl;
    }else{
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}