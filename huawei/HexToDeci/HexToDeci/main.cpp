//
//  main.cpp
//  HexToDeci
//
//  Created by Rain on 15/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
#include <cstdlib>
using namespace std;


int convert(string hex)
{
    int res=0;
    if(hex[0]=='0'&&hex[1]=='x')
        hex=hex.substr(2,hex.size()-2);
    for(int i=hex.size()-1;i>=0;i--)
    {
        if(hex[i]>='0'&&hex[i]<='9')
        {
            res+=(hex[i]-48)*pow(16,hex.size()-i-1);
        }
        else if(hex[i]>='A'&&hex[i]<='F')
        {
            res+=(hex[i]-55)*pow(16,hex.size()-i-1);
            
        }
    }
    
    return res;
}
int main()
{
    string str="";
    
    while(cin>>str)
    {
        
        int output=convert(str);
        
        cout<<output;
    }
    
    return 0;
}
