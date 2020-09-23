/*

#include<stdio.h>

int main ()
{
    /* 1.
    int x;
    scanf("%d", &x);
    int rev = 0;
    while ( x!=0 )
    {
        rev = rev*10 + x%10;
        x/=10;
    }
    printf("%d", rev);
    */


    /* 2.
    int x = 100, n = 0;
    while ( x < 1000 )
    {
        int i= x-1;
        for( ; i>1; i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
            n++;
        x++;
    }
    printf("%d", n);
    */


    /* 3.

    //largest 8 digit prime number
    int x = 99999999;
    while ( x > 1 )
    {
        int i = x-1;
        for ( ; i>1;i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
        {
            printf("%d", x);
            break;
        }
        x--;
    }
    */


    /* 4.
    int x = 100000000, sum = 0, n = 0;
    while ( x > 1 )
    {
        int i = x-1;
        for ( ; i>1; i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
        {
            int y = x;
            while ( y!=0 )
            {
                sum = sum + y%10;
                y/=10;
            }
            if ( sum == 14 )
            {
                n++;
            }
        }
        sum = 0;
        x--;
    }
    printf("%d", n);
    */




    // 8.


//}


#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int id;
    int Maths;
    int Science;
    struct student *next;
}student;

student * Insert_at_the_end ( student * head, int id, int Maths, int Science )
{
    student * temp = ( student * ) malloc ( sizeof(student) );
    temp->id = id;
    temp->Maths = Maths;
    temp->Science = Science;
    temp->next = NULL;

    if ( head == NULL )
    {
        return temp;
    }
    else
    {
        student * t = head;
        while ( t->next )
        {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}

student * Insert_before ( student * head, int id, int Maths, int Science, int x  )              //x is id before which entry has to be made
{
    student * temp = ( student * )malloc ( sizeof (student) );
    temp->id = id;
    temp->Maths = Maths;
    temp->Science = Science;
    temp->next = NULL;

    if ( x == head->id )
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        student * t = head, * before_t = NULL;
        while ( t->id != x )
        {
            before_t = t;
            t = t->next;
        }
        temp->next = before_t->next;
        before_t->next = temp;
    }
    return head;
}

student * Delete ( student * head, int x )           //x is entry to be deleted
{
    if ( x == head->id )
    {
        student * t = head;
        head = head->next;
        t->next = NULL;
        free ( t );
        return head;
    }
    student * t = head, * before_t = NULL;
    while ( t->id != x )
    {
        before_t = t;
        t = t->next;
    }
    before_t->next = t->next;
    t->next = NULL;
    free( t );
    return head;
}

void display ( student * head )
{
    while ( head )
    {
        printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
        head = head->next;
    }
    printf("\n\n");
}

int main ()
{
    student * head = NULL;
    head = Insert_at_the_end( head, 1, 100, 200 );
    head = Insert_at_the_end( head, 2, 101, 201 );
    head = Insert_at_the_end( head, 3, 102, 202 );
    head = Insert_at_the_end( head, 4, 103, 203 );
    head = Insert_at_the_end( head, 5, 104, 204 );
    head = Insert_before ( head, 6, 105, 205, 2 );
    head = Insert_before ( head, 0, 0, 0, 1 );

    display( head );

    head = Delete ( head, 1 );
    display( head );

    head = Delete ( head, 0 );
    display( head );

    head = Delete ( head, 5 );
    display( head );
}
