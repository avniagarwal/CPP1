#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int choice,a[100],n=0,t,k,l,i,j,sum;
while(1)
      {
      printf("\n1.Insert a new element \n2.Insert element in between\n3.Delete at index location=1 and 2\n4.Sort the elements in the decreasing order.\n5.Display\n6.Exit\n Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
	       {
	       case 1: printf("\nEnter the number you want to insert\n");
		       scanf("%d",&t);
		       printf("\nEnter the index location\n");
		       scanf("%d",&k);
		       if(k<=n)
		       {
			for(i=n-1;i>=k;i--)
			       {
			       a[i+1]=a[i];
			       }
			a[k]=t;
			n++;
			}
			else printf("\nError\n");
			break;
		case 2: printf("\nEnter the number you want to insert\n");
			scanf("%d",&l);
			if(n>=2)
			{
			 for(i=n-i;i>=k;i--)
				 {
				 a[i+1]=a[i];
				 }
			 a[n-1]=l;
			 n++;
			 }
			 else printf("\nError\n");
			 break;
		  case 3:if(n>2)
			 {
			     for(i=1;i<=n;i++)
			         a[i]=a[i+1];
			     n=n-1;
			     for(i=2;i<=n;i++)
			         a[i]=a[i+1];
			     n=n-1;    
			 }
			 else printf("\nError\n");
			 break;
		  case 4:if(n>0)
			 {
			  for(i=0;i<n;i++)
			   {
			     for(j=i+1;j<n;j++)
			      {
				if(a[i]<a[j])
				{
				  t=a[i];
				  a[i]=a[j];
				  a[j]=t;
				}
			      }
			    }
			  }
			  else printf("\nError\n");
			 break;
		 
			 else
			 {
			       for(j=0;j<n;j++)
			       printf("%d\t",a[j]);
			 }
			 printf("\nNumber of elements in Array=%d\n",n);
			 break;
		  case 6:exit(0);
			 }}}
