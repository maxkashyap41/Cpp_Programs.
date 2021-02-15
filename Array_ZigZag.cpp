#include<bits/stdc++.h>
using namespace std;

int *ZigZag(int *arr, int n)
{
    int flag=0, i=0;
    while(i < n-1)
    {
        if(flag == 0)
        {
            if(arr[i] < arr[i+1])
                i++;
            else
            {
                swap(arr[i], arr[i+1]);
                i++;
            }
        }
        else
            if(flag == 1)
            {
                if(arr[i] > arr[i+1])
                    i++;
                else
                {
                    swap(arr[i], arr[i+1]);
                    i++;
                }
            }
        
        flag = !flag;
    }
    return arr;
}

int main() {
	//code
	int t;
	cout<<"\nEnter the Number of Testcases: ";
    cin>>t;
	
	while(t)
	{
	    int n, i, *res;
	    cout<<"\nEnter the Size of the Array: ";
        cin>>n;
	    
	    int arr[n];
        cout<<"Enter the Array Elements: ";
	    for(i=0; i<n; i++)
	        cin>>arr[i];
        
        res = ZigZag(arr, n);
        cout<<"The Resultant Array after ZigZag: ";
        for(i=0; i<n; i++)
            cout<<res[i]<<" ";
        
        cout<<"\n";
        t--;
	}
	return 0;
}