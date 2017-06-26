//
//  main.cpp
//  binarysearch
//
//  Created by Rain on 12/04/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
    int getPos(vector<int> A, int n, int val) {
        // write code here
        vector<int>count(10000,0);
        for(int i=0;i<n;i++)
        {
            count[A[i]]++;
        }
        int low=0;
        int high=n-1;
        int result=0,mid=0;
        while(low<=high)
        {
            mid=(high-low)/2+low;
            if(A[mid]==val)
            {
                result=A[mid];
                break;
            }
            if(A[mid]<val)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(count[A[mid]]==1)
            return mid;
        else
        {
            for(int i=mid;i>=0;i--)
            {
                if(A[i]!=A[mid])
                    return i;
            }
        }
        return 0;
    }

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A={9,13,21,31};
    cout<<getPos(A, 4, 9)<<endl;
    return 0;
}
