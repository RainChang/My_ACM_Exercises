//
//  main.cpp
//  PasswordVerify
//
//  Created by Rain on 23/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int ope[4]={0};
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                ope[0]=1;
            else if(str[i]>='a'&&str[i]<='z')
                ope[1]=1;
            else if(str[i]>='0'&&str[i]<='9')
                ope[2]=1;
            else
                ope[3]=1;
        }
        int sum=ope[0]+ope[1]+ope[2]+ope[3];
        if(sum<3)
        {
            cout<<"NG"<<endl;
            continue;
        }
        for(int i=0;i<str.length()-2;i++)
        {
            char c1=str[i],c2=str[i+1],c3=str[i+2];
            for(int j=i+3;j<str.length()-2;j++)
            {
                if(str[j]==c1&&str[j+1]==c2&&str[j+2]==c3)
                {
                    cout<<"NG"<<endl;
                    break;
                }
            }
        }
        if(str.length()<=8)
        {
            cout<<"NG"<<endl;
            continue;
        }
        cout<<"OK"<<endl;
    }
    return 0;
}
