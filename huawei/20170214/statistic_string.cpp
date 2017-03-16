#include<iostream>
#include<string>
using namespace std;
int main()
{
    string inputStr;
    int out1,out2,out3,out4;
    getline(cin,inputStr);
    out1=out2=out3=out4=0;
    int length = inputStr.length();
    for(int i=0;i<length;i++)
    {
        if((inputStr[i]>='a'&&inputStr[i]<='z')||(inputStr[i]>='A'&&inputStr[i]<='Z'))
        { out1++;}
        else if(inputStr[i]==' ')
            out2++;
        else if(inputStr[i]>='0'&&inputStr[i]<='9')
            out3++;
        else
            out4++;
    }
    cout<<out1<<" "<<out2<<" "<<out3<<" "<<out4<<endl;
    return 0;
}
