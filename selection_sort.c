/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.  

*******************************************************************************/
#include <stdio.h>
int main()
{
int a[100], n, i, j, pos, temp;
printf("Enter number of elements \n");
scanf("%d", &n);
printf("Enter elements into array \n");
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(a[pos] > a[j])
pos=j;
}
if(pos!= i)
{
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
printf("Sorted Array \n");
for(i = 0; i < n; i++)
printf("%d", a[i]);
return 0;
}

