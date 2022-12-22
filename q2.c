#include <stdio.h>
void merge_sort(int a[], int b[], int c[], int n1, int n2, int n3);
int main()
{
    int i, n1, n2, n3;
    printf("Enter the size of the first array.");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the elements.");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array.");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the elements.");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    } 
    n3=n1+n2;
    int c[n3];
    merge_sort(a, b, c, n1, n2, n3);
    printf("The resultant array:");
    for(i=0;i<n3;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}
void merge_sort(int a[], int b[], int c[], int n1, int n2, int n3)
{
    int i, j, k=0;
    int temp;
    for(i=0;i<n1;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        c[k]=b[i];
        k++;
    }
    n3=k;
    for(i=0;i<(n3-1);i++)
    {
        for(j=0;j<(n3-1-i);j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}