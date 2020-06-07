#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string RemoveChars(string str1, string str2)
{
    vector<int> hash1(26, 0);
    vector<int> hash2(26, 0);

    int i;
    for(i=0; i<str1.size(); i++)
        hash1[int(str1[i])-97] = 1;
    
    for(i=0; i<str2.size(); i++)
        hash2[int(str2[i])-97] = 1;
    
    string x = "";
    for(i=0; i<str1.size(); i++)
    {
        if(hash2[int(str1[i])-97] != 1)
            x = x+str1[i];
    }

    for(i=0; i<str2.size(); i++)
    {
        if(hash1[int(str2[i])-97] != 1)
            x = x+str2[i];
    }

    if(x.size() == 0)
        return "";
    else
        return x;
}

int main()
{
    int t;
    cout<<"\nEnter the Number of Testcases: ";
    cin>>t;

    while(t)
    {
        string str1, str2;
        cout<<"Enter the Two Strings: ";
        cin>>str1>>str2;

        string ans = RemoveChars(str1, str2);
        if(ans == "")
            cout<<"\nResultant String: "<<-1;
        else
            cout<<"\nResultant String: "<<ans;
        
        t--;
    }
    cout<<"\n";
    return 0;
}