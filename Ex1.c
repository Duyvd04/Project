#include <stdio.h>
#include <math.h>

void Binary_search(int search, int array[], int n)
{
    int low = 0;
    int high = n;
    int mid = (low + high) / 2;

    while (low <= high)
    {
        if (array[mid] < search)
        {
            low = mid + 1;
        }
        else if (array[mid] == search)
        {
            printf("\n%d found at location %d", search, mid + 1);
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    if (low > high)
    {
        printf("\nNot found!");
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array number %d (bigger than befor): ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nThe given array is sorted: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    int add;
    printf("\nEnter new value to add (bigger than befor): ");
    scanf("%d", &add);

    while (1)
    {
        if (add <= array[n - 1])
        {
            printf("Please enter again value to add: ");
            scanf("%d", &add);
            printf("\n");
        }
        else
        {
            array[n] = add;
            break;
        }
    }

    printf("\nThe array after add new value: ");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }

    int search;
    printf("\nEnter value to find: ");
    scanf("%d", &search);

    Binary_search(search, array, n);

    return 0;
}