//
//  main.cpp
//  TwoStackForQueue
//
//  Created by Rain on 08/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    stack<int> s1;
    
    for(int i=0;i<10;i++)
    {
        s1.push(i);
    }
    cout<<"input over!"<<endl;
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
