//
//  main.cpp
//  matrix_multiply
//
//  Created by Rain on 21/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    
    int m,k,n;
    while(cin>>m>>k>>n)
    {
        int vec1[m][k],vec2[k][n];
        int out[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>vec1[i][j];
            }
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>vec2[i][j];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                out[i][j]=0;
                for(int t=0;t<k;t++)
                {
                    out[i][j]+=vec1[i][t]*vec2[t][j];
                }
                cout<<out[i][j];
                if(j<n-1)
                    cout<<" ";
            }
            if(i<m-1)
                cout<<endl;
        }
    }
    return 0;
}

