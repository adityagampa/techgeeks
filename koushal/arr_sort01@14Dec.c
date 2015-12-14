#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int j=0,size,i=0,*ptr;							//declaration
	printf("\n Enter the size of array\n");		/*size input */
	scanf("%d",&size);
	
	ptr = (int *)malloc(size*(sizeof(int)));		//memory allocation for array
	if(ptr==NULL)
	{
		printf("ERROR: Couldnot allocate memory \n");
	}
	
	printf("\n Enter the elements of the array \n");		//array input
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
	}
	
	j=size-1;
	i=0;
	
	while(i<j)									//sorting
	{
		if(*(ptr+i) == 0)
		{
			i++;
		}
		else
		{
			if(*(ptr+j) == 0)
			{
				*(ptr+i)=0;
				*(ptr+j)=1;
			}
			else
			{
				while(i<j && *(ptr+j) == 1)
				{
					j--;
				}
				*(ptr+i)=0;
				*(ptr+j)=1;
			}
			i++;
			j--;
		}
	}
	
	printf("\n The sorted array is: \t");
	for(i=0;i<size;i++)
	{
		printf("%d  ",*(ptr+i));
		
	}
	printf("\n");
	return 0;
}
