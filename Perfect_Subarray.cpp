#include<bits/stdc++.h>
using namespace std;

int Kickstart(int *arr, int n)
{
    int count = 0; 
    long double sqSum;
    for(int i=0; i<n; i++)
    {
        int Sum = 0;
        for(int j=i; j<n; j++)
        {
            Sum=Sum+abs(arr[j]);
            sqSum = sqrt(Sum);
            if(sqSum - floor(sqSum) == 0)
                count++;
        }
    }

    return count;
}

int main()
{
    int testcases, t=0;
    cin>>testcases;
    while(t < testcases)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        int res;
        res = Kickstart(arr, n);

        cout<<"Case #"<<(t+1)<<": "<<res<<endl;
        t++;
    }
}

