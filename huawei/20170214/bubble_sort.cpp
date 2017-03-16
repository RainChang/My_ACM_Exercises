
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int input[]={1,3,5,2,6,8,9,12,595,98,0};

    int length=sizeof(input)/sizeof(int);
    cout<<"length is: "<<length<<endl;
    for(int i=length;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(input[j]>input[j+1])
            {
                int tmp=input[j];
                input[j]=input[j+1];
                input[j+1]=tmp;
            }

        }
    }
    for(int i=0;i<length;i++)
    {
        cout<<input[i]<<' ';
    }
    return 0;
}
