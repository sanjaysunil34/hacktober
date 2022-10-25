#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char a[50];
} Stack;

Stack s;
//top -1 aakk
int top=0;

int isOperand(char a)
{
    return ( a >= 'a' && a <= 'z' ) || ( a >= 'A' && a <= 'Z' );
}

int prec(char a)
{
    switch(a)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return -1;
}


void push(char n) {

    top++;
    s.a[top]=n;

}

char pop() {

    top--;
    return s.a[top+1];
}





int main() {
    int n,i,j;
    char st[50],a;
    scanf("%d",&n);
    scanf(" %[^\n] ", st);
    for(i=0;i<n;i++)
    {
        if(isOperand(st[i]))
        {
            printf("%c",st[i]);
        }
        else if(st[i]=='(')
        {
            push(st[i]);
        }
        else if(st[i]==')')
        {
            while(s.a[top]!='(')
            {
                a=pop();
                printf("%c",a);
            }
            pop();
        }
        else
        {
            if(top==-1 || s.a[top]=='(')
                push(st[i]);
            else if(prec(st[i])>prec(s.a[top]))
                push(st[i]);
            else if(prec(st[i])==prec(s.a[top]))
            {
                a=pop();
                printf("%c",a);
                push(st[i]);
            }
            else
            {
                while(prec(st[i])<prec(s.a[top]))
                {
                    a=pop();
                    printf("%c",a);
                }
                if(prec(st[i])>prec(s.a[top]))
                    push(st[i]);
                else
                {
                    printf("%c",pop(s));
                    push(st[i]);
                }
            }
        }
    }
    while(top!=-1)
    {
        a=pop();
        printf("%c",a);
    }
    return 0;
}
