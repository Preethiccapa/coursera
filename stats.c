#include<stdio.h>
#include"stats.h"
unsigned char array[100]={10,11,12,16,2,3,1,8,4,5,20,25,6,7,9,14,13,15,19,17,18,21,22,23,24
,26,27,28,29,39,38,37,36,35,34,33,32,31,30,40},rev_array[100], min_set=4, max_set=20, size=40,size1, c;
double mean=0,sum=0;int count=39;

int main()
{
	printf("The given data set is:");
	for(c = 0; c < size; c++)
	 printf(" %d",array[c]);
    for (c = 0; c < size; c++)
      {
       min_set=find_minimum(array[c],min_set);
       max_set=find_maximum(array[c], max_set);
       mean=find_mean(array[c],size);
      }
     sort(array,size);
     printf("\n The sorted data set is: ");
     for(c = 0; c < size; c++)
     	{
     		printf("%d  ",array[c]);
     		rev_array[count]=array[c];
     		count--;
		 }
		printf("\nThe decreasing order data set:"); 
		  for(c = 0; c < size; c++)
	        printf(" %d",rev_array[c]);
	 median(size); 
	 printf("\n The statistics of the data values are \n minimum: %d ,\n maximum: %d ,\n mean: %lf ,\n median: %d\n",
	 min_set,max_set,mean,array[size1]);

   return 0;
//***function definitions ***/////

int find_minimum( unsigned char c,unsigned char min_set)
{
   if (c < min_set)
        {
           min_set = c;
        }
    return min_set;
}
int find_maximum(unsigned char c,unsigned char max_set)
{
	if (c > max_set)
        {
           max_set = c;
        }
    return max_set;
}
double find_mean(unsigned char c,unsigned char n)
{
	sum += c; 
	return  sum/n;
}
int median(unsigned char size)
{
	size1 = (size+1) / 2 - 1; 
	return size1;
}
void sort(unsigned char a[],unsigned char n) 
{ 
   int i,j,temp;
   for(i = 0;i < n-1;i++) 
   {
      for(j = 0;j < n-i-1;j++)
	   {
         if(a[j] > a[j+1])
         swap(&a[j],&a[j+1]);
        
      }
   }
}
void swap(unsigned char *p,unsigned char *q)
{
   int t;
   t=*p; 
   *p=*q; 
   *q=t;
}
