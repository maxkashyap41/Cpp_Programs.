#include<bits/stdc++.h>

using namespace std;

int *storingOddEven(int *arr, int n)
{
    vector<int> even;
    vector<int> odd;
    
    // for even
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    int j = 0;
    int k = 0;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            arr[i] = even[j];
            j++;
        }
        else
        {
            arr[i] = odd[k];
            k++;
        }        
    }
    return arr;
}

int main()
{
    int n;
    cout<<"\nEnter the Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int *res;
    res = storingOddEven(arr, n);
    cout<<"\nSorted Array Elements are: ";
    for(int i=0; i<n; i++)
        cout<<res[i]<<" ";
    cout<<"\n\n";
    return 0;

}

