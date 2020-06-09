#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string BooleanString(string str1)
{
    int i, n, x;
    n = str1.size();
    vector<string> arr(n);

    for(i=0; i<n; i++)
        arr[i].push_back(str1[i]);
    
    i=0;
    while(i < n-1)
    {
        if(arr[i] == "A")
        {
            x = stoi(arr[i-1]) * stoi(arr[i+1]);
            arr[i+1] = to_string(x);
        }

        if(arr[i] == "B")
        {
            x = stoi(arr[i-1]) + stoi(arr[i+1]);
            if(x == 2)
                x = x-1;
            arr[i+1] = to_string(x);
        }

        if(arr[i] == "C")
        {
            x = stoi(arr[i-1]) ^ stoi(arr[i+1]);
            arr[i+1] = to_string(x);
        }
        i++;
    }
    return arr[n-1];
}

int main()
{
    int t;
    cout<<"\nEnter the Number of Testcases: ";
    cin>>t;

    while(t)
    {
        string str1, ans;
        cout<<"\nEnter the String: ";
        cin>>str1;

        ans = BooleanString(str1);
        cout<<"The Resultant String: "<<ans<<endl;

        t--;
    }

    cout<<"\n";
    return 0;
}