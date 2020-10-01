#include <stdio.h>
typedef struct{
    int ar[10];
} queue;

queue q;
int front=0;
int rear=0;
//fag 0 aakka
int flag=1;

void enqueue()
{
    int n;
    scanf("%d",&n);
    if(front!=rear || flag==0)
    {
        flag=1;
        q.ar[rear]=n;
        if(rear==9)
        {
            rear=0;
        }
        else 
        {
            rear++;
        }
    }
}

void dequeue()
{
    int a;
    if(front!=rear)
    {
        a=q.ar[front];
        if(front==9)
        {
            front=0;
        }
        else
        {
            front++;
        }
        if(front==rear)
        {
            flag=0;
        }
        printf("%d\n",a);
    }
    else {
    printf("-1\n");
    }
}

void display()
{
    int a,b;
    if(front!=rear)
    {
        a=front;
        b=rear;
        while(a!=b){
        printf("%d ",q.ar[a]);
            if(a==9)
            {
                a=0;
            }
            else
            {
                a++;
            }
        }
        printf("\n");
    }
    else {
    {printf("-1\n");}
    }
}

int main()
{
    int q, choice;
    scanf("%d", &q);
    //printf("%d\n",q);
    while(q--) {
        scanf("%d", &choice);
        //printf("%d\n",choice);
        switch(choice) {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
        }
    }
    return 0;
}