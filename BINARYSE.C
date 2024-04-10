#include<stdio.h>
#include<conio.h>
void main()
{
int i,beg,mid,end,n,item,a[100];
clrscr();
printf("enter the of elements:\n");
scanf("%d",&n);
printf("enter the number :\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element the searched \n");
scanf("%d",&item);
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{
if (a[mid]<item)
beg=mid+1;
else if (a[mid]==item)
{
printf("search is successful item%d found at location %d\n ",item,mid+1);
break;
}
else
end=mid-1;
mid=(beg+end)/2;
}
if(beg>end)
printf("search is unsuccessful and item%d is not found \n ",item);
getch();
}