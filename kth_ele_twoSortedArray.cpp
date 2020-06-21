#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthEle(int *arr, int *brr, int n, int m, int z)
{
    int nm = n+m;
    vector<int> temp(nm);
    int i=0, j=0, k=0;
    
    while(i < n && j < m)
    {
        if(arr[i] < brr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=brr[j];
            j++;
        }
        k++;
    }
    
    // leftovers in arr
    while(i < n)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    
    //leftovers in brr
    while(j < m)
    {
        temp[k]=brr[j];
        j++;
        k++;
    }

    
    for(i=0; i<temp.size(); i++)
    {
        if(i+1 == z)
            return temp[i];
    }
}

int main()
{
    cout<<"\n";
    int arr[] = {2,3,6,7,9};
    int brr[] = {1,4,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);
    int z = 5;

    int res;
    res = kthEle(arr, brr, n, m, z);
    cout<<res<<"\n";
    
    return 0;
}