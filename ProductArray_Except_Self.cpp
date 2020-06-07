#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> ProductArray(int *arr, int n)
{
    int i;

    vector<int> left(n, 0);
    vector<int> right(n, 0);

    left[0] = 1;
    for(i=1; i<n; i++)
        left[i] = left[i-1]*arr[i-1];

    right[n-1] = 1;
    for(i=n-2; i>(-1); i--)
        right[i] = right[i+1]*arr[i+1];

    
    for(i=0; i<n; i++)
        left[i] = left[i]*right[i];
    
    return left;
}

int main()
{
    int t;
    cout<<"\nEnter the Testcases: ";
    cin>>t;

    while(t)
    {
        int n, i;
        cout<<"\nEnter the Size of the Array: ";
        cin>>n;

        int arr[n];
        cout<<"Enter the Array Elements: ";
        for(i=0; i<n; i++)
            cin>>arr[i];
        
        cout<<"Resultant Array: ";
        vector<int> res;
        res = ProductArray(arr, n);
        for(auto it=res.begin(); it != res.end(); it++)
            cout<<*it<<" ";

        cout<<"\n";
        return 0;
    }
}