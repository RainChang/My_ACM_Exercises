#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n=0
    
    while(cin>>n)
    {
        vector<string> vec;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            vec.push_back(str);
        }
        for(int i=0;i<vec.size();i++)
        {
            int count=0;
            for(int j=0;i<vec.size();j++)
            {
                if(isFunc(vec[j],vec[i]))
                {
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
        
    }

	return 0;
}