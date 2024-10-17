
#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;

}NODE;
NODE *start;
int inser_beg(int x)
{
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE));
    if(p==NULL)
    {
        printf("linklist is full");
        return -1;
    }
    p->data = x;
    p->next =NULL;

    p->next = start;
    start  = p;
    return 1;
}
int insert_end(int x)
{
    NODE *p,*ptr;
    p = (NODE *)malloc(sizeof(NODE));
    if(p==NULL)
    {
        printf("linklist is full");
        return -1;
    }
    p->data = x;
    p->next =NULL;
    if(start == NULL)
    {
        start = p;
    }
    else
    {
        ptr = start;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;

        }
        ptr->next = p;
    }
            return 1;

}
int insert_afer(int key,int x)
{
    NODE *p,*ptr;
    ptr = (NODE *)malloc(sizeof(NODE));
    if(ptr==NULL)
    {
        printf("linklist is full");
        return -1;
    }
    ptr->data = x;
    ptr->next =NULL;
    p = start;
    while(p!=NULL && p->data!=key)
    {
        p = p->next;
    }
    if(p == NULL){
        printf("key not found\n");
        return -1;
    }
    ptr->next = p->next;
    p->next = ptr;
    return 1;

}
int delete_beg()
{
    NODE *p;
    int x;
    if(start == NULL)
    {
        printf("linklist is empty\n");
        return -1;

    }
    p = start;
    start = start->next;
    x = p->data;
    free(p);
    return x;
}
int delete_end()
{
    NODE *p,*prev;
    int x;
    if(start == NULL)
    {
        printf("linklist is empty\n");
        return -1;

    }
    if(start->next == NULL)
    {
        p = start;
        start = NULL;
        x = p->data;
        free(p);
        return x;
    }
    prev = NULL;
    p = start;
    while(p->next!=NULL)
    {
        prev = p;
        p = p->next;

    }
    prev->next = NULL;
    x = p->data;
    free(p);
    return x;
}
int delete_after(int key)
{
    NODE *p,*ptr;
    int x;
    p = start;
    while(p!=NULL || p->data!=key)
    {

        p = p->next;
    }
    if(p == NULL)
    {
        printf("key not found\n");
        return -1;

    }
    else if(p->next == NULL)
    {
        printf("key found at last pos\n");
        return -1;
    }
    else
    {
      ptr = p->next;
      x = ptr->data;
      p->next = ptr->next;
      free(ptr);
      return x;
    }


}
void display()
{
    NODE *p;
    if(start == NULL)
    {
        printf("LINKLIST is enpty\n");
    }
    else
    {
            p = start;
        while(p!=NULL)
        {
            printf("%d->",p->data);
            p=p->next;
        }
        printf("NULL\n");
    }
}
int search(int key)
{
   int pos =1;
   NODE *p;
   p = start;
   while(p!=NULL && p->data!=key)
   {
       p = p->next;
       pos++;
   }
   if(p==NULL)
   {
       printf("key not found\n");
       return -1;
   }
   else
   {
       return pos;
   }

}
int main()
{
    int option,x,key;
    do
    {
        printf("1.insert beginning\n");
        printf("2.insert ending\n");
        printf("3.insert after key\n");
        printf("4.delete beginning\n");
        printf("5.delete ending\n");
        printf("6.delete after key\n");
        printf("7.display\n");
        printf("8.search\n");
        printf("9.exit\n");



        printf("Enter option from menu\n");
        scanf("%d",&option);
        if(option ==1)
        {
            printf("Enter data:\n");
            scanf("%d",&x);
            int res = inser_beg(x);
            if(res == 1)
            {
                printf("data stored succesfully\n");
            }

        }
        if(option == 2)
        {
            printf("Enter data:\n");
            scanf("%d",&x);
            int res = insert_end(x);
            if(res == 1)
            {
                printf("data stored at end succesfully\n");
            }

        }
        if(option == 3)
        {
            printf("Enter data:\n");
            scanf("%d",&x);
            printf("Enter key:");
            scanf("%d",&key);

            int res = insert_afer(key,x);
            if(res == 1)
            {
                printf("data stored  succesfully\n");
            }
        }
        if(option == 4)
        {
            int res = delete_beg();
            printf("deleted value is %d\n",res);


        }
        if(option == 5)
        {
            int res = delete_end();
            printf("deleted value is %d\n",res);
        }
        if(option == 6)
        {
            printf("Enter key:");
            scanf("%d",&key);
            int res = delete_after(key);
            if(res !=-1)
            {
                printf("deleted value is %d\n",res);

            }
        }
        if(option == 7)
        {
             display();
        }
        if(option == 8)
        {
            printf("Enter key to be searched:");
            scanf("%d",&key);
            int res = search(key);
            if(res!=-1)
            {
                printf("key found at pos %d\n",res);
            }

        }
    }while(option!=9);
}


