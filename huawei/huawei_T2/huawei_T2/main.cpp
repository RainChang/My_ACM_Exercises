#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

void swapCh(char &a,char &b)
{
    char tmp=a;
    a=b;
    b=tmp;
}
void change(string &vec,char ch)
{
    
    switch (ch) {
        case 'L':
            swapCh(vec[0],vec[5]);
            swapCh(vec[1],vec[4]);
            swapCh(vec[0],vec[1]);
            break;
        case 'R':
            swapCh(vec[0],vec[5]);
            swapCh(vec[1],vec[4]);
            swapCh(vec[4],vec[5]);
            break;
        case 'F':
            swapCh(vec[2],vec[4]);
            swapCh(vec[3],vec[5]);
            swapCh(vec[4],vec[5]);
            break;
        case 'B':
            swapCh(vec[2],vec[5]);
            swapCh(vec[3],vec[4]);
            swapCh(vec[4],vec[5]);
            break;
        case 'A':
            swapCh(vec[0],vec[3]);
            swapCh(vec[1],vec[2]);
            swapCh(vec[2],vec[3]);
            break;
        case 'C':
            swapCh(vec[0],vec[3]);
            swapCh(vec[1],vec[2]);
            swapCh(vec[0],vec[1]);
            break;
        default:
            break;
    }
}
string deal(string str)
{
    //vector<char> vecInit={'1','2','3','4','5','6'};
    string strInit="123456";
    for(int i=0;i<str.size();i++)
    {
        change(strInit,str[i]);
    }
    
    return strInit;
}
int main()
{
    string str;
    cin>>str;
    cout<<deal(str)<<endl;
    
    
    return 0;
}
