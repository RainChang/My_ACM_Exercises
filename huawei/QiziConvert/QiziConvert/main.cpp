//
//  main.cpp
//  QiziConvert
//
//  Created by Rain on 12/04/2017.
//  Copyright © 2017 Rain. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

    vector<vector<int> > convert(vector<vector<int> > A, vector<int> f)
    {
        vector<vector<int> >vec=A;
        if(f[0]-2>=0)
            vec[f[0]-2][f[1]-1]^=1;
        if(f[1]-2>=0)
            vec[f[0]-1][f[1]-2]^=1;
        if(f[0]+1<=A.size())
            vec[f[0]][f[1]-1]^=1;
        if(f[1]+1<=A[0].size())
            vec[f[0]-1][f[1]]^=1;
        
        return vec;
    }
    vector<vector<int> > flipChess(vector<vector<int> > A, vector<vector<int> > f) {
        // write code here
        vector<vector<int> >vec=A;
        if(f.empty())
            return vec;
        vector<vector<int> > tmp;
        for(int i=0;i<f.size();i++)
        {
            vec=convert(vec,f[i]);
        }
        return vec;
    }

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int> >A={{0,1,0,0},{1,0,1,0},{1,1,0,0},{1,0,0,1}};
    vector<vector<int> > f={{2,3},{4,2},{2,3}};
    vector<vector<int> >B;
    B=flipChess(A, f);
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
