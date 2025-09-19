
#include<conio.h>
#include<stdio.h>
int main ()
{
int arr1[50],arr2[50],merge[100],size1,size2,i,k;
clrscr();
printf("Enter the size of the first array: \n");
scanf("%d",&size1);
printf("Enter the elements of first array:\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("Enter the size of second array:\n");
scanf("%d",&size2);
printf("Enter the elements :\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("The merged array:\n");
for(i=0;i<k;i++)
{
printf("%d \n",merge[i]);
}
getch();
return 0;
}

