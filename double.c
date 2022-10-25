#include <stdio.h>
#include<stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ch,queue[25],i,q,front=-1,rear=-1,num;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            scanf("%d",&num);
            if(front==-1)
            {
                front=front+1;
                rear++;
                queue[front]=num;
            }
            else if(front==0)
            {
                front=9;
                queue[front]=num;
            }
            else {
            front=front-1;
            queue[front]=num;
            }
            break;
            case 2:
            scanf("%d",&num);
            if(rear==-1)
            {
                rear++;
                front++;
                queue[rear]=num;
            }
            else if (rear==9) {
            rear=0;
            queue[rear]=num;
            }
            else {
            rear++;
            queue[rear]=num;
            }
            break;
            case 3:
            if(front==rear&&front!=-1)
            front=rear=-1;
            if(front==9)
            {
                printf("%d\n",queue[front]);
               front=0;
               
            }
            else {
            printf("%d\n",queue[front]);
            front++;
            }
            break;
            case 4:
            if(front==rear&&front!=-1)
            front=rear=-1;
            else if(rear==0)
            {
                printf("%d\n",queue[rear]);
                rear=9;
            }
            else {
            printf("%d\n",queue[rear]);
            rear--;
            } 
            break;
            case 5:
            if(front>rear)
            {
            for(i=front;i<=9;i++)
            {
                printf("%d ",queue[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d ",queue[i]);
            }
            }
            else {
            for(i=front;i<=rear;i++)
            {
                printf("%d ",queue[i]);
            }
            }

            printf("\n");
            
            break;

        }
    }
    return 0;
}
//oho
