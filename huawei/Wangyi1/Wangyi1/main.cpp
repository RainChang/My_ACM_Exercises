//
//  main.cpp
//  Wangyi1
//  网易雷火盘古实习生招聘输入AAABBBCCDDAA，要求输出3A3B2C2D2A
//  Created by Rain on 24/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//



#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    
    cin>>str;
    
    int num=1;
    for(int i=0;i<str.length()-1;i++)
    {
        
        
        if(str[i+1]==str[i])
            num++;
        else{
            cout<<num<<str[i];
            num=1;
        }
    }
    cout<<num<<str[str.length()-1];
    cout<<endl;
    return 0;
}


