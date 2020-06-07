#include<bits/stdc++.h>
using namespace std;

int CollectFine(int *crr, int *frr, int n, int date)
{
    int i, fine=0; 
    if(date % 2 == 0)
    {
        for(i=0; i<n; i++)
        {
            if(crr[i] % 2 != 0)
                fine = fine+frr[i];
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(crr[i] % 2 == 0)
                fine = fine+frr[i];
        }
    }
    return fine;
}


int main() 
{
	int t;

    cout<<"\nEnter the testcases: ";
	cin>>t;
	
	while(t)
	{
	    int n, date, i;
	    cout<<"\nEnter the Size and Date: ";
        cin>>n>>date;
	    
	    int crr[n], frr[n];
        cout<<"Enter the Cars: ";
	    for(i=0; i<n; i++)
	        cin>>crr[i];
	        
        cout<<"Enter the Fine: ";
        for(i=0; i<n; i++)
	        cin>>frr[i];
        
        int fine = CollectFine(crr, frr, n, date);
        cout<<"Total Fine is: "<<fine<<"\n";
        
        t--;
	}
	
	return 0;
}