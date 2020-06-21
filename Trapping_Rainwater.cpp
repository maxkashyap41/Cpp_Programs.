#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int trappingRainwater(int *arr, int n)
{
    int i;
    vector<int> left(n, 0);
    left[0] = arr[0];
    for(i=1; i<n; i++)
        left[i] = std::max(left[i-1], arr[i]);
    
    vector<int> right(n, 0);
    right[n-1] = arr[n-1];
    for(i=n-2; i>(-1); i--)
        right[i] = std::max(right[i+1], arr[i]);
    
    int unit = 0;
    for(i=0; i<n; i++)
        unit = unit + (std::min(left[i], right[i]) - arr[i]);
    
    return unit;
}

int main()
{
    cout<<"\n";
    int n, unit;
    //int arr[] = {3,0,0,2,0,4};
    int arr[] = {6,9,9};
    n = sizeof(arr) / sizeof(arr[0]);

    unit = trappingRainwater(arr, n);
    cout<<"Unit of Trapped Rain Water: "<<unit<<"\n";

    return 0;
}