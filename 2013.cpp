#include <stdio.h>

/*¹é²¢ÅÅĞò*/
void Merge_Sort(int *arr, int *temparr,int start,int mid,int end)
{
    int left_start = start ;
    int left_end   = mid ;

    int right_start = mid+1 ;
    int right_end   = end ;

    int index = start ;

    while(left_start<=left_end&&right_start<=right_end)
    {
        if(arr[left_start]>arr[right_start])
            temparr[index++] = arr[right_start++] ;
        else
            temparr[index++] = arr[left_start++] ;
    }

    while(left_start<=left_end)
        temparr[index++] = arr[left_start++] ;

    while(right_start<=right_end)
        temparr[index++] = arr[right_start++] ;

    for(index = start ;index<=end ;++index)
        arr[index] = temparr[index] ;
}
void Sort_Message(int *arr, int *temparr,int start,int end)
{
    if(start<end)
    {
        int mid = (start+end)/2;
        Sort_Message(arr,temparr,start,mid);
        Sort_Message(arr,temparr,mid+1,end);
        Merge_Sort(arr,temparr,start,mid,end);
    }
}

int main()
{
	int num[200],out[200];
	int i,j,n;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&num[i]);
	if(n==1) printf("%d",num[0]);
	else
	{
		Sort_Message(num,out,0,n-1);
		for(i=0; i<n; i++)
			printf("%d ",out[i]);
	}
	return 0;
}

