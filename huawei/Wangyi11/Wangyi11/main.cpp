#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int calTime(int a,int b,int t)
{
    return t*(abs(a)+abs(b));
}
int minT(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
int main() {
    int n,gx,gy,walkT,taxiT;
    
    cin >> n;
    int tX[n];
    int tY[n];
    int timeTotal[n];
    for(int i=0;i<n;i++)
    {
        cin>>tX[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>tY[i];
    }
    cin>>gx>>gy;
    cin>>walkT>>taxiT;
    int distan[n];
    for(int i=0;i<n;i++)
    {
        distan[i]=abs(tX[i])+abs(tY[i]);
    }
    int minTaxi=minT(distan, n);
    int walk=abs(gx)+abs(gy);
    if(minTaxi>=walk)
    {
        cout<<walk*walkT<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            int walk,taxi,totT;
            walk= calTime(tX[i], tY[i], walkT);
            taxi=calTime(gx-tX[i], gy-tY[i], taxiT);
            totT=walk+taxi;
            timeTotal[i]=totT;
            
        }
        cout<<minT(timeTotal,n)<<endl;
    }
    return 0;
}
