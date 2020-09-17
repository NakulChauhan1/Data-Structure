/*
Learnings:
1. for overloading operators for objects of different class, we use friend function method. (Line 72 and 88)
2. type casting in new situation (line 67)
3. Copy Constructor
4. Overloading of cout and a object of different class
*/


#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
    int l;
    int b;
    int h;
    public:
    Box()
    {
        l=0;b=0;h=0;
    }
    Box(int l,int b,int h)
    {
        this->l=l; this->b=b; this->h=h;
    }
    Box(Box &B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long ll,bb,hh;         //type casting is required result will be of type long long and therefore l,b,h should also be of type long long.
        ll=(long long)l;
        bb=(long long)b;
        hh=(long long)h;
        return (ll*bb*hh);
    }
    friend bool operator<(Box x, Box y)   //x-A and y-B
    {
        if(x.l<y.l)
        return 1;
        else
        {
            if(x.b<y.b and x.l==y.l)
        return 1;
        else
        {
        if(x.h<y.h and x.b==y.b and x.l==y.l)
        return 1;
        else return 0;
        }
        }
    }
    friend ostream& operator<<(ostream &c, Box &bb)
    {
        c<<bb.l<<" "<<bb.b<<" "<<bb.h;
        return c;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
