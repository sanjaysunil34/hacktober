#include <stdio.h>
#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   
    int queue[10],front=-1,rear=-1,ch,n,i,q;
    scanf("%d",&q);
    while(q--)
    {

    scanf("%d",&ch);
    switch (ch) {
    case 1:
    scanf("%d",&n);
    if(front==-1)
    {
        front=front+1;
        rear++;
        queue[rear]=n;
    }
   
    else if(rear==9 && front!=0)
    {
        rear=0;
        queue[rear]=n;
    }
    else {
    rear++;
    queue[rear]=n;
    }
    
    break;
    case 2:
    if(front==rear)
    {   printf("%d\n",queue[front]);
        front=rear=-1;

    }
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
    case 3:
    if(rear>=front)
    {
    for( i=front;i<=rear;i++)
    printf("%d ",queue[i]);
    }
    else  {
    for( i=front;i<=9;i++)
    {
        printf("%d ",queue[i]);
    }
    for(i=0;i<=rear;i++)
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

