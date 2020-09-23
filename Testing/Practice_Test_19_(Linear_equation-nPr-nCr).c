#include<stdio.h>
int main()
{
    /* 91. Linear equation with two variables.
    int x, y, t;
    scanf("%d%d%d", &x, &y, &t);

    int xx, yy, tt;
    scanf("%d%d%d", &xx, &yy, &tt);

    int d;
    d = x*yy - y*xx;
    //adjoint of matrix
    float adj_x, adj_y, adj_xx, adj_yy;
    adj_x = (float)yy/d;
    adj_y = -(float)y/d;
    adj_xx = -(float)xx/d;
    adj_yy = (float)x/d;
    //printf("%d %d %d %d\n ", x, y, xx, yy);
    //printf("%f %f %f %f\n ", adj_x, adj_y, adj_xx, adj_yy);

    float r1, r2;
    r1 = adj_x*t + adj_y*tt ;
    r2 = adj_xx*t + adj_yy*tt ;

    printf("%f %f", r1, r2);

    */

    /* 92. Linear equation with three variables.
    int a, b, c, d1;
    scanf("%d%d%d%d", &a, &b, &c, &d1);

    int aa, bb, cc, d2;
    scanf("%d%d%d%d", &aa, &bb, &cc, &d2);

    int aaa, bbb, ccc, d3;
    scanf("%d%d%d%d", &aaa, &bbb, &ccc, &d3);

    int D;
    D = a*( bb*ccc - cc*bbb ) - b* ( aa*ccc - cc*aaa ) + c* ( aa*bbb - bb*aaa );

    printf("%d\n", D);

    int adj_a, adj_b, adj_c, adj_aa, adj_bb, adj_cc, adj_aaa, adj_bbb, adj_ccc ;

    adj_a = a*( bb*ccc - cc*bbb );
    adj_aa = -b*( aa*ccc - cc*aaa );
    adj_aaa = c*( aa*bbb - bb*aaa );
    adj_b = - aa*( b*ccc - c*bbb);
    adj_bb = bb*(a*ccc - c*aaa);
    adj_bbb = -cc*( a*bbb - b*aaa);
    adj_c = aaa*( b*cc - c*bb );
    adj_cc = -bbb*( a*cc - c*aa );
    adj_ccc = ccc*( a*bb - b*aa );

    adj_a /= D;
    adj_aa /= D;
    adj_aaa /= D;
    adj_b /= D;
    adj_bb /= D;
    adj_bbb /= D;
    adj_c /= D;
    adj_cc /= D;
    adj_ccc /= D;

    int r1, r2, r3;
    r1 = adj_a*d1 + adj_b*d2 + adj_c*d3;
    r2 = adj_aa*d1 + adj_bb*d2 + adj_cc*d3;
    r3 = adj_aaa*d1 + adj_bbb*d2 + adj_ccc*d3;

    printf("%d %d %d", r1, r2, r3);




    printf("\nCramers rule\n");
    int a, b, c, d1;
    scanf("%d%d%d%d", &a, &b, &c, &d1);

    int aa, bb, cc, d2;
    scanf("%d%d%d%d", &aa, &bb, &cc, &d2);

    int aaa, bbb, ccc, d3;
    scanf("%d%d%d%d", &aaa, &bbb, &ccc, &d3);

    int D, Dx, Dy, Dz;
    D = a*( bb*ccc - cc*bbb ) - b* ( aa*ccc - cc*aaa ) + c* ( aa*bbb - bb*aaa );
    Dx = d1*( bb*ccc - cc*bbb ) - b* ( d2*ccc - cc*d3 ) + c* ( d2*bbb - bb*d3 );
    Dy = a*( d2*ccc - cc*d3 ) - d1* ( aa*ccc - cc*aaa ) + c* ( aa*d3 - d2*aaa );
    Dz = a*( bb*d3 - cc*bbb ) - b* ( aa*d3 - d2*aaa ) + d1* ( aa*bbb - bb*aaa );
    printf("%d\n", D);

    printf("x = %d\ny = %d\nz = %d\n ", Dx/D, Dy/D, Dz/D);

    */

/*
    //93. nPr
    int n, r;
    scanf("%d%d", &n, &r);

    float t1 = 1, t2 = 1;
    for ( int i = n; i > 0; i-- )
    {
        t1 *= i;
    }

    for ( int i = n-r; i > 0; i-- )
    {
        t2 *= i;
    }

    //printf("%d %d\n", t1, t2);
    printf("%f\n", t1/t2);


    printf("/nOther way of doing it and more good way\n");
    scanf("%d%d", &n, &r);
    int res = 1;
    for ( int i = 0; i < r; i++ )
    {
        res *= n;
        n--;
    }
    printf("%d\n", res);
*/


/* 94. nCr
    int n ,r , res = 1;
    scanf("%d%d", &n, &r);

    for ( int i = 0; i < r; i++ )
    {
        res *= n;
        n--;
    }

    int t1 = 1;
    for ( int i = r; i > 0; i-- )
    {
        t1 *= i;
    }

    printf("%d\n", res/t1 );

    printf("\nOther way for doing it, and that too good one\n");

    scanf("%d%d", &n, &r);

    float ress = 1;
    for ( int i = r; i > 0; i-- )
    {
        ress *= (float)n/i;
        //printf("%f\n", (float)n/i);
        n--;
    }
    printf("%f\n", ress);
    */

    ///* 95. print answer in decimal without using float data type
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%0.5f", (float)a/b);


    printf("\n\nOther way of doing it\n");
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d.", x/y);
    for ( int i = 0; i < 5; i++ )
    {
        printf("%d",x%y*10/y);
    }



    printf("\n\nOther way of doing it\n");
    int xx, yy;
    scanf("%d%d",&xx,&yy);
    printf("%d.", xx/yy);
    int r = xx%yy;
    for ( int i = 0; i < 5; i++ )
    {
        printf("%d",r*10/yy);
        r = r*10%yy;
    }

    //*/

}

