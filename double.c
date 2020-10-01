#include <stdio.h>
typedef struct {
    int a[20];
} Queue;

Queue q;
int front=10;
//rear 10 aakka
int rear=11;

void enqueuere(int n) {
    if(rear<19)
    {
        q.a[rear]=n;
        rear++;
    }
}

void enqueuefr(int n)
{
    if(front>0)
    {
        front--;
        q.a[front]=n;
    }
}

int dequeuefr() {
    if(rear != front)
    {
        front++;
        return q.a[front-1];
    }
    else {
        return -1;
    }
}

int dequeuere() {
    if(rear == front)
    {
        return -1;
    }
    else 
    {
        rear--;
        return q.a[rear];   
    }
}

void display()
{
    int c,d;
    if(front!=rear)
    {
        c=front;
        d=rear;
        while(c!=d)
        {
            printf("%d ",q.a[c]);
            c++;
        }
        printf("\n");
    }
}


int main() {
    int q, choice, n;
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &choice);
        switch(choice) {
            case 1: scanf("%d",&n);
                    enqueuefr(n);
                    break;
            case 2: scanf("%d",&n);
                    enqueuere(n);
                    break;
            case 3: printf("%d\n",dequeuefr());
                    break;
            case 4: printf("%d\n",dequeuere());
                    break;
            case 5: display();
                    break;
        }
    }
    return 0;
}