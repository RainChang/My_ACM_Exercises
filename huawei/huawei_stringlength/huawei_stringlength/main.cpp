//
//  main.cpp
//  题目：
//
//	算法：
//  Created by Rain on 17/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   	string str="";
    
    int count=0;
    int i=0;
    getline(cin, str);
    for(i=str.length()-1;i>=0;i--)
    {
        if(str[i]!=' ')
            count++;
        else
            break;
        
    }
    cout<<count<<endl;
    
    return 0;
}





