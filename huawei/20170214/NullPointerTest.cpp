#include<iostream>
using namespace std;
class A{
    public:
    string test()
    {
        return "test A";
    }
};
int main(){
    A*pA=NULL;
    //cout<<"hahhghd"<<endl;
    string a= pA->test();
    cout<<a<<endl;

//    int *po=NULL;
//    *po=100;
    //pA->test();
return 0;
}
