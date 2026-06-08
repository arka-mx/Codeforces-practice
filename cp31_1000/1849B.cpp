#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int remaining = n;
    int largest_index=-1;
    vector<int> order;
    int total_iterations=0;
    while (remaining > 0)
    {
        long long maxi = 0;
        long long maxi2 = 0;
        for (int i = 0; i < n; i++)
        {
            total_iterations++;
            int x = a[i];
            if (x > maxi)
            {
                maxi2 = maxi;
                maxi = x;
                largest_index=i;
            }
            else if (x > maxi2)
            {
                maxi2 = x;
            }
            
        }
        while (a[largest_index]>=maxi2)
        {
            total_iterations++;
            a[largest_index]-=k;
            if(a[largest_index]==maxi2)break;
            if(a[largest_index]<=0){
                // cout<<a[largest_index]<<"  "<<largest_index<<endl;
                order.push_back(largest_index+1);
                remaining--;
            }
            if(remaining==0)break;
        }
        for(int x : a)
        cout<<x<<" ";
        cout<<endl;
        
    }
    // cout<<total_iterations<<endl;
    for(int x : order)
    cout<<x<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}