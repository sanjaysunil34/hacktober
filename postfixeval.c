#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
typedef struct {
    float a[40];
} Stack;

Stack s;
int top=0;

void push(float n) {

    top++;
    s.a[top]=n;

}

float pop() {

    top=top--;
    return s.a[top+1];
}

int isOperand(char a)
{
    return ( a >= '0' && a <= '9' );
}


float evaluate(char expression[], int len) {

    int i;
    float j,a,b;
    for(i=0;i<len;i++)
    {
        if(isOperand(expression[i]))
        {
            a=expression[i]-'0';
            push(a);
        }
        else 
        {
            if(expression[i]=='+')
            {
                a=pop();
                b=pop();
                push(b+a);
            }
            else if(expression[i]=='-')
            {
                a=pop();
                b=pop();
                push(b-a);
            }
            else if(expression[i]=='*')
            {
                a=pop();
                b=pop();
                push(b*a);
            }
            else if(expression[i]=='/')
            {
                a=pop();
                b=pop();
                push(b/a);
            }   
        }
    }
    j=pop();
    return j;
}

int main() {
    int q,n;
    scanf("%d",&q);
    while(q--) {
        scanf("%d", &n);
        char *exp = (char *)malloc(n * sizeof(char));
        scanf("%s", exp);
        printf("%.1f\n", evaluate(exp, n));
    }
    return 0;
}

