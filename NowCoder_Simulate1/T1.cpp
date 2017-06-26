#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int min=0,max=0;
    
    
    while(cin>>min>>max)
    {
        int count=0,out=0;
        vector<int> vec;
        cin>>count;
        for(int i=0;i<count;i++)
        {
            int in=0;
            cin>>in;
            vec.push_back(in);
        }
        for(int i=min;i<=max;i++)
        {
            int j=0;
            for(j;j<vec.size();j++)
            {
                if(i>=(2*vec[j])&&i<=(vec[j]*10))
                    break;
                if(vec[j]>=(2*i)&&vec[j]<=(i*10))
                    break;
            }
            if(j==vec.size())
                out++;
        }
        cout<<out<<endl;
    }

	return 0;
}