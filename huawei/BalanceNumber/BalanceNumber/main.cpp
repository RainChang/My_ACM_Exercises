//
//  main.cpp
//  BalanceNumber
//
//  Created by Rain on 23/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int mul(vector<char> vec,int a,int b)
{
    int result=1;
    for(int i=a;i<=b;i++)
   	{
        result*=(vec[i]-'0');
    }
    return result;
}
int main(){
    //freopen("1.in","r",stdin);
    int n=0;
    
    cin >> n;
        vector<char> vec;
        if(n<10)
        {
            cout<<"NO"<<endl;
            //continue;
        }
        int a=0;
        while(n!=0)
        {
            a=n%10;
            vec.push_back(a+'0');
            n/=10;
        }
        int i=0;
        for(;i<vec.size();i++)
        {
            if(mul(vec,0,i)==mul(vec,i+1,vec.size()-1))
            {
                cout<<"YES"<<endl;
                break;
            }
            
        }
        if(i==vec.size())
            cout<<"NO"<<endl;
    
    return 0;
}
