#include<stdio.h>
int main()
{
	int i,j,n,a[20];
	printf("\nEnter size of array ::");
	scanf("%d",&n);
	printf("\nEnter Elements ::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
        }
        printf("\nArray elements are ::");
        for(i=0;i<n;i++)
        {       
		printf("\t%d",a[i]);
        }
        int min_ind;
        for(i=0;i<n-1;i++)
        {
                min_ind=i;
                for(j=i+1;j<n;j++)
                {
                        if(a[j]<a[min_ind])
                        {
                                min_ind=j;
                        }
                }
                int temp=a[i];
                a[i]=a[min_ind];
                a[min_ind]=temp;
        }
        printf("\n\nArray After sorting :: ");
        for(i=0;i<n;i++)
        {                     
		printf("\t%d",a[i]);
        }
	printf("\n");
        return 0;
}     
