#include<stdio.h>
#define MAX 5
int Q[MAX];
int front =-1;
int rear =-1;
int enqueue(int data)
{
    if(rear == MAX-1)
    {
        printf("qeue is full\n");
        return -1;
    }
    if(front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    Q[rear] = data;
    printf("%d is sucessfully added in the queue\n",Q[rear]);
    return 1;
}
int dequeue()
{
    int data;
    if(front == -1)
    {
        printf("queue is empty\n");
        return -1;
    }
    data = Q[front];
    if(front == MAX-1)
    {
        front = rear = 0;
    }
    else
    {
        front++;
    }
    return data;
}
int checkFront()
{
    if(front == -1)
    {
        printf("queue is empty\n");
        return -1;

    }

    return Q[front];

}
int checkRear()
{
    if(front == -1)
    {
        printf("queue is empty\n");
        return -1;

    }

    return Q[rear];

}
int main()
{
    int option,data;
   do
   {
       printf("1.enqueue\n");
       printf("2.dequeue\n");
       printf("3.checkFront\n");
       printf("4.checkRear\n");
       printf("5.quit\n");
       printf("Enter options from menu:");
       scanf("%d",&option);
       if(option == 1)
       {
           printf("enter data:");
           scanf("%d",&data);
           int res = enqueue(data);
       }
       if (option == 2)
       {
           int res = dequeue();
           printf("%d",res);
           printf("\n");
       }
       if(option == 3)
       {
           int res = checkFront();
            if(res == -1)
           {
               continue;
           }
           else
           {
              printf("the element in front is %d\n",res);

           }

       }
       if(option == 4)
       {
           int res = checkRear();
           if(res == -1)
           {
               continue;
           }
           else
           {
              printf("the element in rear is %d\n",res);

           }
       }
   }while(option!=5);
}

