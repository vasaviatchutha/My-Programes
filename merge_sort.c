#include <stdio.h>

int main()
{
    int i,n,a[10];
    printf("enter size of the array");
    scanf("%d",&n);
    printf("enter elements into array \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements before sorting \n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    mergesort(a,0,n-1);
    printf("elements after sorting \n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
 void mergesort(int lb,int ub,int a[])
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,mid+1,ub);
    }
}
void merge(int l1,int l2,int u1,int u2,int a[],int temp[50])
{
    int i,k,j;
    i=l1,j=l2,k=0;
    while(i<=u1 && j<=u2)
    {
        if(a[i]<a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=u1)
    {
        temp[k++]=a[i++];
    }
    while(j<=u2)
    {
        temp[k++]=a[j++];
    }
    for(i=l1,j=0;i<=u2;i++,j++)
    {
        a[i]=temp[k++];
    }
}

    


