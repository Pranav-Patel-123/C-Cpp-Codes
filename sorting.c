// selection sort
for(int i=0; i<n-1; i++)
{
    int min = i;
    for(int j=i+1; j<n ;j++)
    {
        if(a[j]<a[min])
        {
            min = j;
        }
        if(min != i)
        {
            int temp = 0;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

// insertion sort
void insertion(int a[], int n)
{
    int i,j,temp;
    for(int i=0; i<n-1; i++)
    {
        temp = a[i];
        i=j+1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

// merging selections

void main(int a[],int l, int m, int r)
{
    int i=l,j=m+1,k=l;
    while(i<m && )
}