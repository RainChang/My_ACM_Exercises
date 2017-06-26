//
//  main.cpp
//  QuickSort
//
//  Created by Rain on 23/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>

using namespace std;

///**
// <#Description#>
//
// @param a <#a description#>
// @param p <#p description#>
// @param q <#q description#>
// */
//void quicksort(int a[],int p,int q)
//{
//    if(p<q)
//    {
//        int key=a[p];
//        int low=p,high=q;
//        while(low<high)
//        {
//            while(low<high&&key<=a[high])
//                high--;
//            if (low<high) {
//                a[low]=a[high];
//                low++;
//            }
//            
//            while(low<high&&key>=a[high])
//                low++;
//            if(low<high)
//            {
//                a[high]=a[low];
//                high--;
//                
//            }
//        }
//        a[low]=key;
////        for (int i=0; i<11; i++) {
////            cout<<a[i]<<" ";
////        }
//        quicksort(a, p, low-1);
//        quicksort(a, low+1, q);
//    }
//}
void quicksort(int a[],int left,int right)
{
    if (left<right)
    {
        int key = a[left];
        int low = left;
        int high = right;
        while (low<high)
        {
            while (low<high && a[high]>=key)
            {
                high--;
            }
            if (low>=high)
            {
                break;
            }
            a[low++]=a[high];
            while (low<high && a[low]<=key)
            {
                low++;
            }
            if (low>=high)
            {
                break;
            }
            a[high--]=a[low];
        }
        a[low] = key;
        quicksort(a,left,low-1);
        quicksort(a,low+1,right);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[11]={3,66,6,2,9,14,88,34,24,90,17};
    quicksort(a, 0, 10);
    for (int i=0; i<11; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
