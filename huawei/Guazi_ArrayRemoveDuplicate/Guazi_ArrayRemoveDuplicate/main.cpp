//
//  main.cpp
//  Guazi_ArrayRemoveDuplicate
//
//  Created by Rain on 14/04/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec={1,2,3,2,2,5,3,4,3,4,6,7,2,1,5};
    int count=1;
    int tmp=0;
    int val=vec[0];
    sort(vec.begin(), vec.end());
    for (int i=0; i<vec.size(); i++)
    {
        if(vec[i+1]==vec[i])
            count++;
        if(count==3)
        {
            val=vec[i];
            tmp=i+1;
        }
        if(vec[i+1]!=val&&count>=3)
        {
            count=1;
            vec[tmp]=vec[i+1];
            
            tmp++;
        }
        if(vec[i+1]!=vec[i]&&count<=2)
            count=1;
        
    }
    for (int i=0; i<vec.size(); i++) {
        cout<<vec[i]<<" ";
    }
    return 0;
}
