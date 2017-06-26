//
//  main.cpp
//  BSTPostOrder
//
//  Created by Rain on 20/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
bool VerifySquenceOfBST(vector<int> sequence) {
    
    if(sequence.size()<=0)
        return false;
    int ssize=sequence.size();
    int root=sequence.at(ssize-1);
    vector<int> left;
    vector<int> right;
    int i=0,j;
    while(i<(ssize-1))
    {
        if(sequence[i]>root)
        {
            break;
            //return false;
        }
        left.push_back(sequence[i]);
        ++i;
        
    }
    j=i;
    while(j<(ssize-1))
    {
        if(sequence[j]<root)
        {
            //break;
            return false;
        }
        right.push_back(sequence[j]);
        ++j;
    }
    return VerifySquenceOfBST(left)&&VerifySquenceOfBST(right);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec={4,8,6,12,16,14,10};
    bool result=VerifySquenceOfBST(vec);
    cout<<result<<endl;
    return 0;
}
