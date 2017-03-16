//
//  main.cpp
//  DengChag
//
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
   	int input,sum=0;
    cin>>input;
    for(int i=1;i<=input;i++)
    {
        sum+=3*i-1;
    }
    cout<<sum<<endl;
    /*
     if(input==1)
     cout<<2<<endl;
     else
     {
    	for(int i=1;i<input;i++)
    	{
     sum+=3;
     output+=sum;
    	}
     cout<<output;
     }*/
    return 0;
}
