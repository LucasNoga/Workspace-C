#include <stdio.h>

void Merge(int arr[],int l,int m,int r)
{
    int *arr2;
    int j=m+1;
    int c1=l;
    int c2=j;
    int i;
    arr2=malloc((m-l+1)*sizeof(int));
    for(i=l;i<=m;i++)
    {
        arr2[i-l]=arr[i];
    }
    for(i=l;i<=r;i++)
    {
        if (arr2[c1-l]<arr[c2])
        {
            arr[i]=arr2[c1-l];
        c1++;
        }

        else if (c2==(r+1))
        {
            arr[i]=arr2[c1-l];
        c1++;
        }
        else
        {
            (arr[i]=arr[c2]);
        c2++;
        }

    }
free(arr2);
}

void MergeSort(int arr[],int l,int r)
{
    if (l!=r)
    {
        int m=(r+l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    int arr[]={12,11,3,13,5,6,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    printf("tableau initial:\n");
    printArray(arr,arr_size);

    MergeSort(arr, 0, arr_size-1);

    printf("\n");
    printf("tableau trie:\n");
    printArray(arr,arr_size);
    return 0;
}
