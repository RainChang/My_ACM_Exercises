#include<iostream>
#include<vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
vector<int> ListReverse(ListNode *head)
{
    vector<int> input1;

    while(head!=NULL)
    {
        input1.push_back(head->val);

    }
    reverse(input1.begin(),input1.end());
    return input1;
}
int main()
{
    vector<int> input1={1,3,5,7,9};
    vector<int> output1;
    vector<int>::iterator it;
    ListNode *head = new ListNode();
    for(it=input1.begin();it!=input1.end();it++)
    {
        head->val=*it;
    }
    output1=ListReverse(head);
    for(auto val:output1)
        cout<<val<<" ";
    return 0;
}
