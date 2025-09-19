#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n 1.CREATE");
printf("\n 2.UNION");
printf("\n 3.FIND");
printf("\n 4.EXIT");
while(1)
{
printf("\n Enter Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1://CREATE SET
printf("Enter no of elements in set: ");
scanf("%d",&n);
printf("Enter elements in sets: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=i;
}
break;
case 2://UNION
printf("\n Enter the index of ekements(2 dices) Which are to be connected(UNION):\n");
scanf("%d%d",&a,&b);
temp=arr2[a];
for(i=0;i<n;i++)
{
if(arr2[i]==temp)
arr2[i]=arr2[b];
}
printf("\n Elements States after union \n");
for(i=0;i<n;i++)
{
printf("\n Elements states after union \n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr2[i]);
}
printf("\n Elements have been Successfully Connected(union operaqtion)\n");
break;
case 3: //FIND-return true if A and B are connected else return false.
printf("\n Enter THE INDEX OF ELEMENTS WHOSE CONNECTION IS TO BE CHECKED (FINAL OPERATION : \n)");
scanf("%d%d",&a,&b);
if(arr2[a]==arr2[b])
printf("\n Elements at indices %d & %d are connected \n",a,b);
else
printf("\n Elements at indices %d & %d queue not");
break;
case 4://EXIT
exit(0);
break;
default:
printf("\n wrong choice,please select a valid choice");
break;
}
}
}}