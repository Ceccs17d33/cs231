#include <stdio.h>
void main()
{
	int a[10],n,i,j,c,root,temp;
	printf("\nEnter no. of elements:");
	scanf("%d",&n);
	printf("\nEnter the nos:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=1;i<n;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;             
			if(a[root]<a[c])   
			{
				temp=a[root];
				a[root]=a[c];
				a[c]=temp;
			}
			c=root;
		}while(c!=0);
	}
	printf("Heap array : ");
	for (i=0;i<n;i++)
		printf("%d\t",a[i]);
	for (j=n-1;j>=0;j--)
	{
		temp=a[0];
		a[0]=a[j];   
		a[j]=temp;
		root=0;
		do 
		{
			c=2*root+1;    
			if((a[c]<a[c+1])&&c<j-1)
				c++;
			if(a[root]<a[c]&&c<j)    
            		{
				temp=a[root];
				a[root]=a[c];
				a[c]=temp;
			}
			root=c;
		}while(c<j);
	} 
	printf("\nThe sorted array is:");
	for (i=0;i<n;i++)
	printf("\t%d",a[i]);
}
