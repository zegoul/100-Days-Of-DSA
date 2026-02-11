// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays

#include <stdio.h>
#define max 100

int main()
{
    int n, temp, arr[max];
    int left, right;

    // !takes n
    scanf("%d", &n);

    // !sets left to first index and right to last index of array
    left = 0;
    right = n - 1;

    // !takes input of elements of array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // !reverses the array
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // !prints reversed array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}