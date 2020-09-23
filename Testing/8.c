#include<stdio.h>

/*
    Create a sample linked list with about 5 entries using the
    following structure. Insert a new entry before or after a given id.
    Delete an entry of a given id.

    Menu Items

    1. Insert Entry
    2. Delete Entry
    3. Display List
    4. Exit

    struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
}

*/

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
    head = Delete ( head, 0 );
    head = Delete ( head, 5 );
    display( head );
}

