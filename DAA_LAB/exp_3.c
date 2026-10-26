#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    if (L == NULL || R == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(void)
{
    int sizes[] = {100, 200, 300, 400, 500};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);
    int repetitions = 100;
    srand((unsigned int)time(NULL));
    printf("\nMerge Sort \n");

    printf("Number of Elements | Average Execution Time (ms)\n");
    printf("------------------------------------------------\n");

    for (int k = 0; k < num_sizes; k++)
    {
        int n = sizes[k];
        int *original = (int *)malloc(n * sizeof(int));
        int *arr = (int *)malloc(n * sizeof(int));

        if (original == NULL || arr == NULL)
        {
            printf("Memory allocation failed.\n");

            free(original);
            free(arr);

            return 1;
        }
        for (int i = 0; i < n; i++)
        {
            original[i] = rand() % 100000;
        }

        clock_t start_time = clock();

        for (int r = 0; r < repetitions; r++)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = original[i];
            }

            mergeSort(arr, 0, n - 1);
        }

        clock_t end_time = clock();

        double total_time_ms =
            ((double)(end_time - start_time) / CLOCKS_PER_SEC) * 1000.0;

        double average_time_ms = total_time_ms / repetitions;

        printf("%-18d | %.8f\n", n, average_time_ms);

        free(original);
        free(arr);
    }
    return 0;
}

// #include <stdio.h>
// #include <time.h>
// int minMaxSearch(int arr[], int low, int high, int key)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (arr[mid] == key)
//         return mid;
//     if (key < arr[mid])
//         return minMaxSearch(arr, low, mid - 1, key);
//     else
//         return minMaxSearch(arr, mid + 1, high, key);
// }
// int main()
// {
//     int n, key, index;
//     int repetitions = 1000000;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = i + 1;
//     }
//     printf("\nGenerated a sorted array");

//     printf("\n\nEnter element to search: ");
//     scanf("%d", &key);
//     clock_t start = clock();
//     for (int i = 0; i < repetitions; i++)
//     {
//         index = minMaxSearch(arr, 0, n - 1, key);
//     }
//     clock_t end = clock();
//     double total_time = (double)(end - start) / CLOCKS_PER_SEC;
//     double time_taken = total_time / repetitions;
//     if (index != -1)
//         printf("\nElement found at index: %d\n", index);
//     else
//         printf("\nElement not found\n");

//     printf("Total time: %.10f seconds\n", total_time);
//     printf("Average time: %.10f seconds\n", time_taken);
//     return 0;
// }