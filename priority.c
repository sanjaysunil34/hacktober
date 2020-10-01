#include <stdio.h>

struct Queue{
    int arr[10];
}q;

int front=-1,rear=-1;

void enqueue(int n) {
    if(rear==-1){
        front=rear=0;  
        q.arr[rear]=n;
    }
    else if(rear<9){
        for(int i=front;i<=rear;i++){
            if(q.arr[i]>n){
                for(int j=rear+1;j>i;j--)
                    q.arr[j]=q.arr[j-1]; 
                q.arr[i]=n;  
                return;
            }
        }
        q.arr[++rear]=n;
    }
}

int dequeue() {
    if(front==-1)
        return -1;
    else {
        if(front == rear){
            int temp=q.arr[front];
            front = rear = -1;
            return temp;
        } 
        return q.arr[front++];
    }
}

int main() {
    int n,t,qu;
    scanf("%d",&qu);
    while(qu--){
        scanf("%d",&t);
        if(t==1){
            scanf("%d",&n);
            enqueue(n);
        }
        else if(t==2)
            printf("%d\n",dequeue());
    }
    return 0;
}
