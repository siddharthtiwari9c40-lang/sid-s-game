// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int binarySearch(int arr[], int n, int key)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid;

//         if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }
// int main()
// {
//     int sizes[] = {1000, 5000, 10000, 50000, 100000, 500000, 1000000};
//     int count = 7;
//     printf("n\t\tTime (seconds)\n");
//     for (int s = 0; s < count; s++)
//     {
//         int n = sizes[s];
//         int *arr = (int *)malloc(n * sizeof(int));       
//         for (int i = 0; i < n; i++)
//         {
//             arr[i] = i + 1;
//         }
//         int key = n;  
//         clock_t start = clock();  
//         for (int i = 0; i < 1000000; i++)
//         {
//             binarySearch(arr, n, key);
//         }
//         clock_t end = clock();
//         double time_taken =
//             (double)(end - start) / CLOCKS_PER_SEC;
//         printf("%d\t\t%.10f\n", n, time_taken);
//         free(arr);
//     }
//     return 0;
// }

#include <stdio.h>
#include <time.h>

// Function to calculate hours required for a given speed
long long calculateHours(int piles[], int n, int k)
{
    long long hours = 0;

    for (int i = 0; i < n; i++)
    {
        // Ceiling of piles[i] / k
        hours += (piles[i] + k - 1) / k;
    }

    return hours;
}

// Koko Eating Bananas using Binary Search
int kokoEatingBananas(int piles[], int n, int h)
{
    int low = 1;
    int high = piles[0];

    // Find maximum pile
    for (int i = 1; i < n; i++)
    {
        if (piles[i] > high)
            high = piles[i];
    }

    int answer = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long hours = calculateHours(piles, n, mid);

        if (hours <= h)
        {
            // Speed is possible, try a smaller speed
            answer = mid;
            high = mid - 1;
        }
        else
        {
            // Speed is too slow, increase speed
            low = mid + 1;
        }
    }

    return answer;
}

int main()
{
    int piles1[] = {3, 6, 7, 11};
    int h1 = 8;

    int piles2[] = {30, 11, 23, 4, 20};
    int h2 = 5;

    // Own test case / edge case
    int piles3[] = {5, 10, 15, 20};
    int h3 = 4;

    int n1 = sizeof(piles1) / sizeof(piles1[0]);
    int n2 = sizeof(piles2) / sizeof(piles2[0]);
    int n3 = sizeof(piles3) / sizeof(piles3[0]);

    clock_t start, end;
    double time_taken;

    printf("Koko Eating Bananas\n");
    printf("--------------------\n");

    // Test Case 1
    start = clock();

    int result1 = kokoEatingBananas(piles1, n1, h1);

    end = clock();

    time_taken = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

    printf("Test Case 1:\n");
    printf("Minimum eating speed = %d\n", result1);
    printf("Time taken = %.6f ms\n\n", time_taken);

    // Test Case 2
    start = clock();

    int result2 = kokoEatingBananas(piles2, n2, h2);

    end = clock();

    time_taken = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

    printf("Test Case 2:\n");
    printf("Minimum eating speed = %d\n", result2);
    printf("Time taken = %.6f ms\n\n", time_taken);

    // Test Case 3
    start = clock();

    int result3 = kokoEatingBananas(piles3, n3, h3);

    end = clock();

    time_taken = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;

    printf("Test Case 3 (Own Edge Case):\n");
    printf("Minimum eating speed = %d\n", result3);
    printf("Time taken = %.6f ms\n", time_taken);

    return 0;
}