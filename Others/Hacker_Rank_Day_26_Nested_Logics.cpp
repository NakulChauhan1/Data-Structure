#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    h: int d,m,y;
    cin>>d>>m>>y;
    int ed,em,ey;
    int fine;
    cin>>ed>>em>>ey;
    if(y<ey)
        fine=0;
    else if(y==ey)
            if(m<em)
            fine=0;
            else if(m==em)
            if(d<=ed)
            fine=0;
            else fine=15*(d-ed);
            else fine=500*(m-em);
    else fine=10000;

    cout<<fine<<endl;
    goto h;

    return 0;
}





/* SECOND WAY TO DO SAME PROBLEM
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT //
    int d,m,y;
    cin>>d>>m>>y;
    int ed,em,ey;
    int fine;
    cin>>ed>>em>>ey;
    if(y<ey)
    fine=0;
    else if(y==ey)
    {
    if(m<=em)
    if(d<=ed)
    fine=0;
    else fine=15*(d-ed);
    else fine=500*(m-em);

    }
    else
    fine=10000;

    cout<<fine;



    return 0;
}


*/
