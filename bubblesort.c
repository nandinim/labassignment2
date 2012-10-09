/*Program to implement bubble sort
Input: Array of elements
Output: Sorted array of elements
 */
#include<stdio.h>
void main()
{
    int n,a[100],j,temp,i;
    printf("enter the size of array");
    scanf("%d",&n);    // read the size
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  //read the array
    }

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) //swapping in increasing order
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } 

    }     
    printf("THE SORTED ARRAY IS:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}



