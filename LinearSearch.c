    // C code to linearly search x in arr[]. If x
    // is present then return its location, otherwise
    // return -1

    #include <stdio.h>

    int search(int arr[], int N, int x)
    {
        int i;
        for (i = 0; i < N; i++)
            if (arr[i] == x)
                return i;
        return -1;
    }

    // Driver code
    int main(void)
    {
        int n;
        printf("enter number of elements for array = ");
        scanf("%d",&n);
        int arr[n];
        printf("enter elements of array = ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int x;
        printf("enter element to be searchrd = ");
        scanf("%d",&x);
        // Function call
        int result = search(arr, n, x);
        (result == -1)
            ? printf("Element is not present in array")
            : printf("Element is present at index %d", result);
        return 0;
    }
