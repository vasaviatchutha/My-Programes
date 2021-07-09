#include <stdio.h>

int main()
{
    int i,j,n,temp,a[100];
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements into array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("insertion sort result \n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}

