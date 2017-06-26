//
//  main.cpp
//  IncludeString
//  输入一个字符串，求出该字符串包含的字符集合。比如输入abcqweracb，输出abcqwer
//  Created by Rain on 24/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    vector<string>vec;
    int a[128]={0};
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        a[str[i]]++;
        if(a[str[i]]==1)
            cout<<str[i];
    }
    return 0;
}
