#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MinimumJumps(int *arr, int n)
{
    if(arr[0] == 0)
        return -1;

    int i, j;
    vector<int> jumps(n);

    jumps[0] = 0;
    for(i=1; i<n; i++)
    {
        jumps[i] = 9999999;
        for(j=0; j<i; j++)
        {
            if(i <= arr[j]+j && jumps[j] != 9999999)
            {
                jumps[i] = min(jumps[i], jumps[j]+1);
            }
        }    
    }
    if(jumps[n-1] == 9999999)
        return -1;
    else
        return jumps[n-1];
}

int main()
{
    cout<<"\n";

    // int arr[] = {2,3,1,1,2,4,2,0,1,1};
    int arr[] = {2,1,0,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int res = MinimumJumps(arr, n);
    cout<<"Minimum Number of Jumps: "<<res;
    
    cout<<"\n";
    return 0;
}