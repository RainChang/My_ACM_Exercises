//
//  main.cpp
//  Redraiment是走梅花桩的高手。Redraiment总是起点不限，从前到后，往高的桩子走，但走的步数最多，不知道为什么？
//	你能替Redraiment研究他最多走的步数吗？
//
//	算法：求最长上升子序列的长度
//  Created by Rain on 16/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   	string str="";
    int n=0;
    
    while(cin>>n)
    {
        vector<int> vec;
        int maxlen[1000];
        int in=0;
        for(int i=0;i<n;i++)
            maxlen[i]=1;
        while(n--)
        {
            cin>>in;
            vec.push_back(in);
            
        }
        for(int i=1;i<vec.size();i++)
        {
            int max=0;
            for(int j=i-1;j>=0;j--)
            {
                
                if(vec[i]>vec[j]&&maxlen[j]>max)
                {
                    max=maxlen[j];
                }
                maxlen[i]=max+1;
            }
        }
        int max=0;
        for(int i=0;i<vec.size();i++)
        {
            if(max<maxlen[i])
                max=maxlen[i];
        }
        cout<<max<<endl;
    }
    return 0;
}





