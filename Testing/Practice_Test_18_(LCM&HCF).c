#include<stdio.h>
int main()
{
    /* 86.
    //print LCM of two numbers. (used Hash Table). Other way can be first storing multiple of one number in one array upto product of two numbers and then checking of multiple of other one by one array of multiples of first number.
    int x, y, temp;
    scanf("%d %d", &x, &y);
    temp = x*y;
    int flag[temp];
    int j = 1;

    while ( y*j <= temp )
    {
        flag[y*j] = 1;
        j++;
    }

    for ( int i = 1; 1; i++ )
    {
        if ( flag[x*i] == 1 )
        {
            printf("%d", x*i);
            break;
        }
    }





    printf("\n\nOther way for finding LCM of two numbers: \n");
    int xx, yy, tempp;
    scanf("%d %d", &xx, &yy);
    tempp = xx*yy;
    int i = xx;
    while ( i <= tempp )
    {
        if ( i%yy == 0 )
        {
            printf("LCM is: %d", i);
            break;
        }
        i = i + xx;
    }
    */




/* 87.
    //print LCM of three numbers
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int i = a;
    while (1)
    {
        if ( i%b == 0 && i%c == 0 )
        {
            printf("LCM of these numbers is: %d", i);
            break;
        }
        i += a;
    }


    // other way of doing it.
    int aa, bb, cc;
    scanf("%d%d%d", &aa, &bb, &cc);
    int temp = aa*bb*cc;
    int status[temp];

    for ( int u = 0; u<temp;u++)
        status[u] = 0;


    int i = 1;
    while ( aa*i <= temp )
    {
        status[aa*i] = 1;
        i++;
    }

    for ( int j = 1; bb*j <= temp; j++ )
    {
        if ( status[bb*j] == 1 )
        {
            status[bb*j] = 2;                                //it will become 2 and it will be indication that this number is LCM of first two numbers
        }

    }

    for ( int k = 1; 1; k++ )
    {
        if ( status[cc*k] == 2 )                        //value 2 indicates that the number is LCM of previous two number and if for third number if this place is multiple then its LCM of all three numbers.
        {
            printf("%d", cc*k);
            break;
        }
    }
*/




/* 88.
    //print HCF of two numbers
    int x, y;
    scanf("%d%d", &x, &y);

    int status[x*y];
    for ( int i = 0; i < x*y; i++ )
    {
        status[i] = 0;
    }

    for ( int i = 1; i <= x; i++ )
    {
        if ( x%i == 0 )
        {
            //printf("%d\n", i);
            status[i] = 1;          //means i is a factor of x.
        }
    }

    for ( int i = 1; i <= y; i++ )
    {
        if ( y%i == 0 && status[i] == 1 )
        {
            status[i] ++;                 //value 2 means its a factor of both the numbers
        }
    }

    int highest_index = 0;                 //there will be many numbers who are factor of both, but we need to find highest
    for ( int i = 0; i < x*y; i++ )
    {
        if ( status[i] == 2 && highest_index < i )
        {
            highest_index = i;
        }
    }

    printf("%d", highest_index);


    printf("\n\nOther way of doing it\n");
    int xx, yy;
    scanf("%d%d", &xx, &yy);


    for ( int i = xx; i > 0; i-- )
    {
        if ( xx%i == 0 && yy%i == 0 )
        {
            printf("%d\n", i);
            break;
        }
    }

*/



/* 89.

    //print HCF of three numbers
    int a, b, c;
    scanf ( "%d%d%d", &a, &b, &c );

    int status[a*b];
    for ( int i = 0; i < a*b; i++ )
    {
        status[i] = 0;
    }

    for ( int i = 1; i <= a; i++ )
    {
        if ( a%i == 0 )
        {
            status[i] = 1;
        }
    }
    //printf("%d\n", status[10]);

    for ( int i = 1; i <= b; i++ )
    {
        if ( b%i == 0 && status[i] == 1 )                   //note: status[i] = 1, means i is factor of first two numbers.
        {
            status[i] ++;
        }
    }

    //printf("%d\n", status[10]);


    for ( int i = 1; i <= c; i++ )
    {
        if ( c%i == 0 && status[i] == 2 )
        {
            status[i] ++;
        }
    }
    //printf("%d\n", status[10]);


    int highest_index = 0;
    for ( int i = 0; i < a*b; i++ )
    {
        if ( status[i] == 3 && highest_index < i )
        {
            highest_index = i;
        }
    }

    printf("%d", highest_index);


    printf("Other way of doing it\n");

    int xx, yy, zz;
    scanf("%d%d%d", &xx, &yy, &zz);

    for ( int i = xx; i > 0; i-- )
    {
        if ( xx%i == 0 && yy%i == 0 && zz%i == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

*/


/*90.
    //Print HCF of four numbers

    int a, b, c, d;
    scanf ( "%d%d%d%d", &a, &b, &c, &d );

    int status[a*b];
    for ( int i = 0; i < a*b; i++ )
    {
        status[i] = 0;
    }

    for ( int i = 1; i <= a; i++ )
    {
        if ( a%i == 0 )
        {
            status[i] = 1;
        }
    }

    for ( int i = 1; i <= b; i++ )
    {
        if ( b%i == 0 && status[i] == 1 )
        {
            status[i] ++;
        }
    }

    for ( int i = 1; i <= c; i++ )
    {
        if ( c%i == 0 && status[i] == 2 )
        {
            status[i] ++;
        }
    }

    for ( int i = 1; i <= d; i++ )
    {
        if ( d%i == 0 && status[i] == 3 )               //this condition if true then it means i is factor of all four numbers
        {
            status[i] ++;
        }
    }

    int highest_index = 0;
    for ( int i = 0; i < a*b; i++ )
    {
        if ( status[i] == 4 && highest_index < i )
        {
            highest_index = i;
        }
    }

    printf("%d", highest_index);




    printf("\n\Other way of doing it\n\n");
    int xx, yy, zz, aa;
    scanf("%d%d%d%d", &xx, &yy, &zz, &aa);

    for ( int i = xx; i > 0; i-- )
    {
        if ( xx%i == 0 && yy%i == 0 && zz%i == 0 && aa%i == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
*/

}
