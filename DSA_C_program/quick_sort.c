#include <stdio.h>

// Function to partition the array
int PARTITION(int A[], int p, int r) 
{
    int v = A[p]; // Pivot element (first element)
    int i = p; // Left pointer
    int j = r + 1; // Right pointer

    while (i<j) 
    {
        // Move i to the right until A[i] < pivot
        do 
        {
            i++;
        } while (A[i] < v && i < r);

        // Move j to the left until A[j] > pivot
        do 
        {
            j--;
        } while (A[j] > v && j > p);

        // If pointers cross, partitioning is complete
        if (i < j)
        {
            // Swap A[i] and A[j]
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    // Swap pivot element with A[j] to put it in the correct position
    A[p] = A[j];
    A[j] = v;

    return j; // Return partition index
}

// Function to implement Quicksort
void QUICKSORT(int A[], int p, int r) 
{
    if (p < r) 
    {
        int q = PARTITION(A, p, r); // Partitioning index
        QUICKSORT(A, p, q - 1); // Sort left sub-array
        QUICKSORT(A, q + 1, r); // Sort right sub-array
    }
}

// Function to print the array
void printArray(int A[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", A[i]);
    }
    printf("\n");
}

void main() 
{
    int A[] = {10, 80, 30, 90, 40, 50, 70}; 
    int n = sizeof(A) / sizeof(A[0]); 
    printf("Original array: ");
    printArray(A, n); // Print without using index 0
    QUICKSORT(A, 0, n-1); // Sorting the array
    printf("Sorted array: ");
    printArray(A, n); // Print sorted array
}