//
//  main.cpp
//  sortIntegerArray
//
//  Created by Rain on 16/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//


#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
   	int n,isSort=0;
    int ele = 0;
    vector<int> vec;
    cin>>n;
    while(n--)
    {
        cin>>ele;
        vec.push_back(ele);
    }
    cin>>isSort;
    if(isSort==0)
        sort(vec.begin(),vec.end());
    else if(isSort==1)
        sort(vec.begin(),vec.end(),cmp);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}



