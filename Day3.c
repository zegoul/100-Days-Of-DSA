// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line : n space - separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// - Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)

#include <stdio.h>
#define max 50

int main()
{

    int n, k, arr[max];
    int index, comparisons;

    // !takes n
    scanf("%d", &n);

    // !inputs elements in array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // !takes k
    scanf("%d", &k);

    // finds k in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            index = i;
            comparisons = i + 1;
        }
    }

    // !final output
    if (index != -1)
    {
        printf("Found at index: %d\n", index);
    }
    else
    {
        printf("Not Found");
    }
    printf("comparisons: %d", comparisons);

    return 0;
}