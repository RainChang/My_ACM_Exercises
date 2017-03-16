//
//  main.cpp
//  ListReverse1
//
//  Created by Rain on 08/03/2017.
//  Copyright © 2017 Rain. All rights reserved.
//



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    
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
    cout<<"\nafter push_back "<<input1.size()<<endl;
    for(int i=0;i<input1.size();i++)
    {
        cout<<input1[i]<<" ";
    }
    std::reverse(input1.begin(),input1.end());
    
    return input1;
}

int main()
{
    int arr1[]={1,3,5,7,9};
    vector<int> input1(arr1,arr1+5);
    vector<int> output1;
    vector<int>::iterator it;
    ListNode *head = new ListNode;
    ListNode *p =head;
    p->val=input1[0];
    //for(it=input1.begin();it!=input1.end();it++)
    for(int i=1;i<input1.size();i++)
    {
        //cout<<input1[i];
        ListNode *node=new ListNode;
        node->val=input1[i];
        p->next=node;
        p=p->next;
        //head->next=NULL;
    }
    cout<<endl;

    output1=ListReverse(head);
    for(it=output1.begin();it!=output1.end();it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}

