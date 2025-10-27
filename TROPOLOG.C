#include <stdio.h>
#include <conio.h>
void main()
{
int i, j, k, n, a[10][10], indeg[10], flag[10], q[20], count = 0;
clrscr();
printf("Enter the number of vertices: ");
scanf("%d", &n);
printf("Enter the adjacency matrix \n");
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
scanf("%d", &a[i][j]);
}
}
for (i = 1; i <= n; i++)
{
indeg[i] = 0;
flag[i] = 0;
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
indeg[i] = indeg[i] + a[j][i];
}
}
printf("\nTopological order\n");
j = 1;
while (count < n)
{
for (k = 1; k <= n; k++)
{
if ((indeg[k] == 0) && (flag[k] == 0))
{
q[j] = k;
printf("%d\t", q[j++]);
flag[k] = 1;
count++;
for (i = 1; i <= n; i++)
{
  if (a[k][i] == 1)
{
 indeg[i]--;
}
}
j++;
}
}
}
getch();
}