// Lower triangular Matrix: value is non zero if i>=j
// n(n+1)/2  elements are non zero, since total elements in Matric = n*n, therefore no. of zero elements = n*(n-1)/2
// will be stores row by row or column by column

/*
    M[i,j] = 0,          if i<j
    M[i,j] = nonzero,     if i>=j
*/
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
class Matrix
{
    int dimension;
    int * LTM;
    public:
    Matrix()
    {
        dimension = 2;
        int n = dimension*(dimension+1)/2;
        LTM = new int[n];
    }
    Matrix(int dimension)
    {
        this->dimension = dimension;
        int n = dimension*(dimension+1)/2;
        LTM = new int[n];
    }
    void setValue(Matrix *, int, int, int);
    int getValue(Matrix, int, int);
    void display(Matrix);
    ~Matrix()
    {
        delete LTM;
        //free(LTM);
    }
};

void Matrix::setValue(Matrix * m, int i, int j, int y)
{
   // i = i+1; j = j+1;    //0 based indexing to 1 based indexing
    if(i >= j)
    {
        int x = i*(i-1)/2 + (j-1);//((i+1)*(i+1+1))/2 - (i+1);
        m->LTM[x] = y;

    }
    else
        cout<<"i must be >= j, its a Lower Triangular Matrix"<<endl;
}
int Matrix::getValue(Matrix m, int i, int j)
{
    //i = i+1; j = j+1;    //0 based indexing to 1 based indexing
    if(i >= j)
    {
        int x = i*(i-1)/2 + (j-1);//((i+1)*(i+ 1+1))/2 - (i+1);
        return m.LTM[x];
    }
    else
    {
        cout<<"i must be >= j, its a Lower Triangular Matrix"<<endl;
        return 0;
    }
}
void Matrix::display(Matrix m)
{
    for(int i=1;i<m.dimension;i++)
    {
    for(int j=1;j<=m.dimension;j++)
    {
        cout<<m.LTM[i*(i-1)/2 + (j-1)]<<" ";
    }
    cout<<endl;
    }
}

main()
{
    cout<<"Enter dimension: "<<endl;
    int d = 4;
    //cin>>d;
    Matrix m(d);
    m.setValue(&m, 0, 0, 10);
    m.setValue(&m, 1, 0, 20);
    m.setValue(&m, 1, 1, 30);
    m.setValue(&m, 2, 0, 40);
    m.setValue(&m, 2, 1, 50);
    m.setValue(&m, 2, 2, 60);
    m.setValue(&m, 3, 0, 70);
    m.setValue(&m, 3, 1, 80);
    m.setValue(&m, 3, 2, 90);
    m.setValue(&m, 3, 3, 100);
    cout<<m.getValue(m, 0,0)<<endl;
    cout<<m.getValue(m, 1,0); cout<<" "; cout<<m.getValue(m, 1,1)<<endl;
    cout<<m.getValue(m, 2,0); cout<<" ";    cout<<m.getValue(m, 2,1); cout<<" ";    cout<<m.getValue(m, 2,2)<<endl;

    //m.display(m);
}
