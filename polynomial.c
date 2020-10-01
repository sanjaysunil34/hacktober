#include<stdio.h>
int main()
{
    int m,n,a[10],b[10],c[10],i,j,q;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<=m; i++)
    {
        scanf("%d",&b[i]);
    }
    if(m>=n)
    {
	m-n aakk
        q=m;
        for(i=0;i<q;i++)
        {
            c[i]=0;
        }
        for(j=0;j<=n;j++)
        {
            c[i]=a[j];
            i++;
        }
        for(i=0;i<=m;i++)
        {
            a[i]=b[i]+c[i];
            printf("%d ",a[i]);
        }

    }
    else
    {
        q=n-m;
        for(i=0;i<q;i++)
        {
            c[i]=0;
        }
        for(j=0;j<=m;j++)
        {
            c[i]=b[j];
            i++;
        }
        for(i=0;i<=n;i++)
        {
            b[i]=a[i]+c[i];
            printf("%d ",b[i]);
        }
    }
    return 0;
}