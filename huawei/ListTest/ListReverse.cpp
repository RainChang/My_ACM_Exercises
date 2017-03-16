//
//  ListReverse.cpp
//  ListTest
//
//  Created by Rain on 08/03/2017.
//
//

//#include "ListReverse.hpp"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int i):val(i),next(NULL){}
};
vector<int> ListReverse(ListNode *head)
{
    vector<int> input1;
    cout<<"\nbefore push_back "<<endl;
    ListNode *p = head;
    while(p!=NULL)
    {
        input1.push_back(p->val);
        p=p->next;
    }
    //std::reverse(input1.begin(),input1.end());
    
    return input1;
}

int main()
{
    int arr1[]={1,3,5,7,9};
    vector<int> input1(arr1,arr1+5);
    vector<int> output1;
    vector<int>::iterator it;
    ListNode *head = new ListNode(input1[0]);
    //for(it=input1.begin();it!=input1.end();it++)
    for(int i=0;i<input1.size();i++)
    {
        //cout<<input1[i];
        ListNode *node=new ListNode(*it);
        head->next=node;
        head=node;
        head->next=NULL;
    }
    //head->next=NULL;
    cout<<endl;
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    output1=ListReverse(head);
    for(it=output1.begin();it!=output1.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}
