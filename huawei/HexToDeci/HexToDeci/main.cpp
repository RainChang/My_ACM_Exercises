//
//  main.cpp
//  HexToDeci
//
//  Created by Rain on 15/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
#include<algorithm>
#include <cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    string str="";
    vector<char> ch;
    stack<int> sch;
    
    while(cin>>str)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]!='0'&&str[i]!='x')
            {
                if(str[i]>='0'&&str[i]<='9')
                {
                    sch.push(str[i]-48);
                }
                else if(str[i]>='A'&&str[i]<='F')
                {
                    sch.push(str[i]-55);
                }
                else
                {
                    return 0;
                }
            }
        }
        int output=0;
        for(int i=0;!sch.empty();i++)
        {
            output=output+sch.top()*pow(16,i);
            sch.pop();
        }
        cout<<output;
    }
    
    return 0;
}
