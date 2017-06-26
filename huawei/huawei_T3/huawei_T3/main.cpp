#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

int shortest(vector<vector<int> > mat,int a,int b)
{
    int res=0;
    
    
    return res;
}
int main()
{
    int x,y;
    int shortTime;
    vector<vector<int> > mat={{0,2,10,5,3,1000},{1000,0,12,1000,1000,10},
        {1000,1000,0,1000,7,1000},{2,1000,1000,0,2,1000},
        {4,1000,1000,1,0,1000},{3,1000,1,1000,2,0}};
    cin>>x>>y;
    if(mat[4][x-1]==1000)
    {
        cout<<1000<<endl;
        cout<<"[]"<<endl;
    }
    else
    {
        cout<<shortest(mat,x,y)<<endl;
        cout<<"[";
        
        cout<<"]"<<endl;
    }
    //cout<<<<endl;
    
    return 0;
}
