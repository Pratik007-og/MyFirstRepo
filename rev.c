#include<stdio.h>
void main()
{
		int a[20],n;
		int *ptr;
		ptr=a;
		printf("Enter size of array:");
		scanf("%d",&n);
		printf("Enter the array:");
		for(int i=0;i<n;++i){
			scanf("%d",(ptr+i));
		}
		printf("The reversed array is:");
		for(int j=n-1;j>=0;--j){
			printf("%d ",*(ptr+j));
		printf("\n");
		}
}