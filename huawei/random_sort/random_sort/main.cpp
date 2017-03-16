//
//  main.cpp
//  random_sort
//
//  Created by Rain on 15/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int inCount=0;
    while(cin>>inCount)
    {
        vector<int> input(inCount);
        for(int i=0;i<inCount;i++)
        {
            cin>>input[i];
        }
        sort(input.begin(),input.end());
        cout<<input[0]<<endl;
        for(int i=0;i<input.size()-1;i++)
        {
            if(input[i+1]!=input[i])
            {
                cout<<input[i+1]<<endl;
            }
            
        }
    }
    return 0;   
}
