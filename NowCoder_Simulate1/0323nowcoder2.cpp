#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    //freopen("1.in","r",stdin);
    int n=0,num=1;
    vector<string> vec;
    cin >> n;
    while(n--)
    {
        string str;
        cin>>str;
        vec.push_back(str);
    }
    for(int i=0;i<vec.size();i++)
        sort(vec[i].begin(),vec[i].end());
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i]!=vec[i+1])
            num++;
        
    }
    cout<<num<<endl;
    return 0;
}