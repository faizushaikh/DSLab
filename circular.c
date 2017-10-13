#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
    //returns 1 if queue is full else returns -1
    if((rear==MAX_SIZE-1&&front==0)||rear+1==front)
    return 1;
    else
    return 0;
}

int isEmpty(){
//returns 1 if stack is empty else returns -1
if(rear==-1&&front==-1)
return 1;
else
return 0;
}

void display()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d \n",queue[i]);
        i=(i+1)%MAX_SIZE;
        
    }
    printf("%d",queue[i]);
}
//return element at thr front of queue


void insert(int d)
{
if(!isFull())
{
  if(isEmpty())
  {
    front++;
    }
    rear=(rear+1)%MAX_SIZE;
    queue[rear]=d;
    printf("%d element is successfully inserted",d);
    }
    else
    {
    printf("the queue is full,element cannot be inserted");
    }
    }
  
  void delete()
  {
     if(!isEmpty())
     {
         int d=queue[front];
         if(front==rear)
         {
             front=rear=-1;
             printf("the element deleted is %d",d);
         }
         else
         {
         front=(front+1)%MAX_SIZE;
         printf("the element not deleted");
     }
  }
}
    
int main()
{
   int choice,e;
    do
    {
        printf("enter\n1.display\n2.insert\n3.delete\n4.exit\n");
        printf("please enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            
            case 1:
                display(e);
                break; 
            case 2:
                printf("enter the element to be inserted :");
                scanf("%d",&e);
                insert(e);
                break;
            case 3:delete();
                break;
            case 4:
            exit(0);
               break;
            default:printf("invalid choice");
        }
    }while(1);
    return 0;
}
