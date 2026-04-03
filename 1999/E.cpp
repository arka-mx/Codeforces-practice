#include <bits/stdc++.h>

using namespace std;

bool zero_check(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(v[i]!=0)return false;
    }
    return true;
}
void logic(){
    int l,r;
    cin>>l>>r;
    vector<int> nums(r-l+1);
    for(int i=0;i<nums.size();i++)nums[i] = l+i;
    int count=0;
    while(!zero_check(nums)){
        sort(nums.begin(),nums.end());
        nums[0] = floor(nums[0]/3);
        nums[1] = nums[1]*3;
        count++;
    }
    cout<<count-1<<endl;
    
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}