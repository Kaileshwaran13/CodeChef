#include <iostream>
#include <bits/stdc++.h>
// #include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;


int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int p1,p2,k;
        cin>>p1>>p2>>k;
        int ans=p1+p2,change=ans/k;

        if (change%2==0)
        {
            cout<<"CHEF"<<endl;
        }
        else cout<<"COOK"<<endl; 
        
        
        
    }
}
