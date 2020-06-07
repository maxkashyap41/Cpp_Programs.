#include<bits/stdc++.h>
using namespace std;

int Sum_Array(int *arr, int n)
{   
    int i, Sum = 0;
    for(i=0; i<n; i++)
    {
        Sum = Sum+arr[i];
    }
    return Sum;
}

int main()
{
    int t;
    cout<<"\nEnter the Testcases: ";
    cin>>t;

    while(t)
    {
        int n, i;
        cout<<"\nEnter the Size: ";
        cin>>n;

        int arr[n];
        cout<<"Enter the Array Elements: ";
        for(i=0; i<n; i++)
            cin>>arr[i];
        
        int Res = Sum_Array(arr, n);
        cout<<"Sum is: "<<Res<<"\n";

        t--;

    }
}