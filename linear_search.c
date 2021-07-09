#include <stdio.h>

int main()
{
    int i,n,a[100],key;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements into array \n ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter key to be you want to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        break;
    }
    if(i<n)
    printf("element found at index %d",i);
    else
    printf("element not found");
}
