//https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char t=a[0];
    string aa=a,bb=b;
    aa[0]=b[0];
    bb[0]=t;
    cout<<aa<<" "<<bb;
    return 0;
}

/*
int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char t=a[0];
    //string aa=a,bb=b;
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b;
    return 0;
}
*/
