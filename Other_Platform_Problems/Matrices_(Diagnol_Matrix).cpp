// why to waste space if same functionality can be achieved with less space
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

struct Matrix
{
    int Diagnol[10];
    int dimension;
};

//typedef struct Matrix M;

void setValue(struct Matrix * m, int i, int j, int x)
{
    if(i == j)
    {
        m->Diagnol[i-1] = x;
    }
    else
        cout<<"Coordinates Must be same, its a Diagnol Matrix"<<endl;
}
int getValue(struct Matrix m, int ii, int jj)
{
    if(ii == jj)
    {
        return m.Diagnol[ii-1];
    }
    else
    {
        cout<<"Coordinates Must be same, its a Diagnol Matrix"<<endl;
        return 0;
    }
}

void display(struct Matrix m)
{
    for(int i=0;i<m.dimension;i++)
    {
    for(int j=0;j<m.dimension;j++)
    {
        if(i == j)
            cout<<m.Diagnol[i]<<"  ";
        else
            cout<<"0   ";
    }
    cout<<endl;
    }

}
main()
{
    struct Matrix m;
    m.dimension = 4;
    setValue(&m, 1, 1, 10);
    setValue(&m, 2, 2, 20);
    setValue(&m, 3, 3, 30);
    setValue(&m, 4, 4, 40);
    display(m);
    cout<<getValue(m, 4, 4)<<endl;
    cout<<getValue(m, 2, 2)<<endl;
    cout<<getValue(m, 4, 5)<<endl;
}
