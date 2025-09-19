#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
char pop()
{
if(top>0){
return stack[top--];
}
return'\0';
}
void reverseString(char str[]){
int i;
for(i=0;str[i]!='\0';i++)

{
str[i]=pop();
}
}
int main()
{
char str[100];
printf("Enter a string:");
gets(str);
reverseString(str);
printf("Reversed string :%s\n",str );
getch();

return 0;
}