#include<stdio.h>
#include<conio.h>

int main()
{
 int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
 int n = sizeof(a) / sizeof(a[0]);
 int reachable = 0 , jumps,i;
 if(a[0] = 0)
 {
 printf("Cant reach end");
 }
 for(i=0;i<n;i++)
 {
 	if(reachable<(i+a[i]))
 	{
 	    reachable = (i + a[i]);
	}
	if(i>reachable)
	{
		printf("Cant reach at end");
	}
	if(reachable>=n-1)
	{
		jumps = i+1;
		break;
	}
 }
 printf("NO of jumps:\n%d",jumps);
}
