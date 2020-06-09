// Given two non-negative numbers X and Y.
// The task is calculate the sum of X and Y.
// If the number of digits in sum (X+Y) are equal to the number of digits in X,
// then print sum, else print X.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Sum_LargeNums(string str1, string str2)
{
    int i, j, n, m, x, carry=0;
    string res = "";
    n = str1.size();
    m = str2.size();
    i = n-1;
    j = m-1;
    while(i>(-1) && j>(-1))
    {
        x = (str1[i]-'0') + (str2[j]-'0') + carry;
        if(x / 10 == 1)
        {
            carry = 1;
            res = res + to_string(x % 10);
        }
        else
        {
            carry = 0;
            res = res + to_string(x % 10);
        }
        i--;
        j--;
    }

    while(j > (-1))
    {
        x = (str2[j]-'0') + carry;
        if(x / 10 == 1)
        {
            carry = 1;
            res = res + to_string(x % 10);
        }
        else
        {
            carry = 0;
            res = res + to_string(x % 10);
        }
        j--;
    }
    while(i > (-1))
    {
        x = (str1[i]-'0') + carry;
        if(x / 10 == 1)
        {
            carry = 1;
            res = res + to_string(x % 10);
        }
        else
        {
            carry = 0;
            res = res + to_string(x % 10);
        }
        i--;
    }
    if(carry == 1)
        res = res + to_string(carry);
        
    reverse(res.begin(), res.end());

    if(res.size() == str1.size())
        return res;
    else
        return str1;
}

int main()
{
    // x = 25;
    // y = 23;
    // x = 100;
    // y = 1000;
    int t;
    cout<<"\nEnter the Number of Testcases: ";
    cin>>t;

    while(t)
    {
        string x, y, ans;
        cout<<"\nEnter the X and Y: ";
        cin>>x>>y;
        ans = Sum_LargeNums(x, y);
        cout<<"The Resultant Answer is: "<<ans<<"\n";

        t--;
    }
    cout<<"\n";
    return 0;
}