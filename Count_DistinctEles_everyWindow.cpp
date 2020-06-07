#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountElements(int *arr, int n, int k)
{
    int i;
    int maxN = arr[0];
    for(i=0; i<n; i++)
        maxN = max(maxN, arr[i]);
    
    vector<int> hashT(maxN+1, 0);

    int count = 0;
    vector<int> res;
    for(i=0; i<k; i++)
    {
        if(hashT[arr[i]] == 0)
            count = count+1;
        
        hashT[arr[i]] += 1;
    }
    res.push_back(count);

    for(i=k; i<n; i++)
    {
        if(hashT[arr[i-k]] == 1)
            count = count-1;
        
        hashT[arr[i-k]] -= 1;

        if(hashT[arr[i]] == 0)
            count = count+1;
        
        hashT[arr[i]] += 1;
        res.push_back(count);
    }

    for(auto it=res.begin(); it != res.end(); it++)
        cout<<*it<<" ";
}

int main()
{
    // int arr[] = {1,2,1,3,4,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int k = 4;
    int n, i, k;
    cout<<"\nEnter the size and k: ";
    cin>>n>>k;

    int arr[n];
    cout<<"Enter the Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\n";

    CountElements(arr, n, k);
    
    cout<<"\n";
    return 0;
}