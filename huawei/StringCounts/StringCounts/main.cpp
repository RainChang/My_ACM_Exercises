//
//  main.cpp
//  StringCounts
//
//  Created by Rain on 09/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//


#include<iostream>
using namespace std;

int main()
{
    string s;
    int a[30];
    
    while(cin>>s)
    {
        for(int i=0; i<30; i++)
            a[i]=1;
        int len=s.length();
        int k=0;
        for(int i=1; i<=len; i++)
        {
            if(s[i]==s[i-1])
            {
                a[k]++;
            }
            else
            {
                if(a[k]==1)
                    cout<<s[i-1];
                if(a[k]!=1)
                {
                    cout<<s[i-1]<<a[k];
                }
                
//                if(a[k]!=1&&a[k]>9)
//                {
//                    for(int pp=0;pp<a[k]/9;pp++)
//                        cout<<s[i-1]<<9;
//                    cout<<s[i-1]<<a[k]%9;
//                }
                k++;
            }
        }
        cout<<endl;
    }
}

