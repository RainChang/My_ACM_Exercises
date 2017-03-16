//
//  main.cpp
//  FirstString
//
//  Created by Rain on 15/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string str_in="";
    int count;
    int out[500]={0};
    cin>>str_in;
    cin>>count;
    for(int i=0;i<count;i++)
    {
        if(out[str_in[i]]==0)
            out[str_in[i]]++;
        else
        {
            cout<<str_in[i]<<endl;
            break;
    
        }
    }
    
    return 0;
}
