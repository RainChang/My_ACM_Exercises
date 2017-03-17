//
//  main.cpp
//  题目：
//
//	算法：
//  Created by Rain on 16/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
int max(vector<int> vec,int from,int to)
{
    int max=0;
    if(from<to)
    {
        for(int i=from;i<=to;i++)
        {
            if(vec[i]>max)
                max=vec[i];
        }
    }else
    {
        for(int i=to;i<=from;i++)
        {
            if(vec[i]>max)
                max=vec[i];
        }
    }
    return max;
}
int main()
{
   	int n,m;
    int grade=0;
    char ch;
    int id=0;
    int g=0;
    vector<int> vec;
    while(cin>>n>>m)
    {
        while(n--)
        {
            cin>>grade;
            vec.push_back(grade);
        }
        for(int i=0;i<m;i++)
        {
            cin>>ch;
            cin>>id;
            cin>>g;
            if(ch=='Q')
            {
                cout<<max(vec,id-1,g-1)<<endl;
            }
            else if(ch=='U')
            {
                vec[id-1]=g;
            }
            
        }
    }
    return 0;
}








