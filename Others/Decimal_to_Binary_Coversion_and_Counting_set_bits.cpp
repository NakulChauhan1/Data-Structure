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


// C program
#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d", &x);
    int bits1 =  (floor)(log2(x) + 1);
    printf("Number of bits: %d\n", bits1);

    int binary1[bits1];
    for ( int i = 0; i < bits1 ;i++ )
    {
        binary1[i] = x%2;
         x /= 2;
    }

    for ( int i = 0; i < bits1/2 ;i++ )
    {
        int t = binary1[i];
        binary1 [i] = binary1 [bits1-i-1];
        binary1 [bits1-i-1] = t;
    }

    for ( int i = 0; i < bits1 ;i++ )
    {
        printf("%d", binary1[i]);
    }

    int y;
    scanf("%d", &y);
    int bits2 = (floor)( log2(y) + 1 );
    printf("Number of bits: %d\n", bits2);

    int binary2[bits2];
    for ( int i = bits2-1; i > -1; i-- )
    {
        binary2[i] = y%2;
        y /= 2;
    }

    for ( int i = 0; i < bits2 ;i++ )
    {
        printf("%d", binary2[i]);
    }

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
