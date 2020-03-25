#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector<vector<int>> x;
    vector<int> y{10,20,3,0};
    x.push_back(y);
    for(int i=0;i<4;i++)
        cout<<x[0][i]<<endl;
        //cout<<x[0][0]<<endl;
}
