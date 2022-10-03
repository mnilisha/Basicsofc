#include <stdio.h>

int main() {
    int a[30], i, j, temp, n;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter array elements");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
