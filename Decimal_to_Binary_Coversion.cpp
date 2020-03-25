/*
    https://www.geeksforgeeks.org/program-decimal-binary-conversion/
*/

#include<iostream>
#include<vector>
using namespace std;
void count_set_bits(int x)
{
    int c=0;
    int i=32;
    while(i>0)
    {
        if(x&1==1)
        {
            c++;
        }
        x>>=1;
        i--;
    }
    cout<<c<<endl;
}

int binary_representation(int a)
{
    vector<int> arr;
    while(a>=1)
    {
        arr.push_back(a%2);
        a=a/2;
    }
    for(int i=0;i<arr.size()/2;i++)
    {
        int t=arr[i];
        arr[i]=arr[arr.size()-i-1];
        arr[arr.size()-i-1]=t;
    }
     for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}
main()
{
    int N;
    cin>>N;
    count_set_bits(N);
    binary_representation(N);
}



/*#include<iostream>
using namespace std;
int DtoB(int l)
{
   if(l==0)
        return 1;
   else
   {
       DtoB(l/2);
      printf("%d",l%2);
   }
}
main()
{
    cout<<"Enter number to be Converted\n";
    int r;
    cin>>r;
    cout<<"Binary Number is: ";
    DtoB(r);
}
*/
