#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Triplet(int *arr, int n)
{
    int i, j, k;

    for(i=0; i<n; i++)
        if(arr[i] == 5)
            arr[i] = 5*5;
        arr[i] = pow(arr[i], 2);
    
    sort(arr, arr+n);
    // for(i=0; i<n; i++)
    //     cout<<arr[i]<<" ";

    for(i=n-1; i>1; i--)
    {
        k = i-1;
        j = 0;
        while(j < k)
        {
            if(arr[j]+arr[k] == arr[i])
                return true;
            else
            {
                if(arr[j]+arr[k] < arr[i])
                    j++;
                else
                    k--;
            }
        }
    }
    
    return false;

}

int main()
{
    int t;
    cout<<"\nEnter the Testcases: ";
    cin>>t;

    while(t)
    {
        int n, i;
        cout<<"\nEnter the Size of Array: ";
        cin>>n;

        int arr[n];
        cout<<"Enter the Array Elements: ";
        for(i=0; i<n; i++)
            cin>>arr[i];
        

        cout<<"Pythogorean Triplets exist or not, see Below !"<<"\n";
        if(Triplet(arr, n) == true)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";

        t--;
    }
    cout<<"\n";
    return 0;
}