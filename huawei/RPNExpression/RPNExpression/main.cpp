//
//  main.cpp
//  RPNExpression
//  逆波兰式求值，比如输入45+8*  ，输出结果为72
//  Created by Rain on 24/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;
int cal(char op,int a,int b)
{
    int res=0;
    switch (op) {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            res=a/b;
            break;
        default:
            break;
    }
    return res;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    int count=0;
    cin>>count;
    while(count--)
    {
        cin>>str;
        stack<char> stk;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>'0'&&str[i]<'9')
                stk.push(str[i]);
            else
            {
                char op=str[i];
                char a=stk.top();
                stk.pop();
                char b=stk.top();
                stk.pop();
                int c=cal(op,a-'0',b-'0');
                stk.push(c+'0');
            }
        }
        if(!stk.empty()){
            char res=stk.top();
            cout<<res-'0'<<endl;
        }
        
    }
    return 0;
}
