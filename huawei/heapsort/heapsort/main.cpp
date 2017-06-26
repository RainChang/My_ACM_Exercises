//
//  main.cpp
//  heapsort
//
//  Created by Rain on 12/04/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

    int heapAdjust(vector<int> input,int start,int length)
    {
        int left=2*start+1;
        
        int tmp=input[start];
        for(int i=left;i<=length;i*=2)
        {
            if(i<length&&input[i]<input[i+1])//记录最大的孩子节点
                ++i;
            if(input[i]<=tmp)
                break;
            input[start]=input[i];
            start=i;
        }
        input[start]=tmp;
        return input[start];
    }
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        //维护一个大根堆，元素比堆顶大则不管，比堆顶小则替换堆顶，并调整。
        int n=input.size();
        int top=0;
        for(int i=(k-1)/2;i>=0;i--)
            top=heapAdjust(input,i,k);
        for(int i=k;i<n;i++)
        {
            if(input[i]<top)
            {
                int tmp=top;
                top=input[i];
                input[i]=tmp;
                top=heapAdjust(input,0,k);
            }
            
        }
        vector<int>out;
        for(int i=0;i<4;i++)
            out.push_back(input[i]);
        return out;
        
    }

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec={4,5,1,6,2,7,3,8};
    int k=4;
    vector<int> pri;
    pri=GetLeastNumbers_Solution(vec,k);
    for (int i=0; i<k; i++) {
        cout<<pri[i]<<" ";
    }
    return 0;
}
