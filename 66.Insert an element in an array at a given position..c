#include <stdio.h>

int main()
{
    int arr[100], n, element, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}