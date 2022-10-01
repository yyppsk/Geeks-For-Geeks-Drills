// { Driver Code Starts
#include <stdio.h>
#include <iostream>
// } Driver Code Ends
// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    int aux[n] = {0};
    for (int i = 0; i <= n; i++)
    {
        static int j = 0;
        static int k = 0;
        if (i < d)
        {
            aux[i] = arr[n - d + i];
            arr[n - d + i] = arr[i];
        }
        else if (i >= d)
        {
            if (i > n - d)
            {
                arr[d + 1 + k] = aux[k];
                k += 1;
            }
            else
            {
                arr[j] = arr[i];
                j = j + 1;
            }
        }
    }
}

// { Driver Code Starts.

int main()
{
    int t;
    // taking testcases
    scanf("%d", &t);

    while (t--)
    {
        int n, d;

        // input n and d
        scanf("%d%d", &n, &d);

        int arr[n];

        // inserting elements in the array
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        // calling rotateArr() function
        rotateArr(arr, d, n);

        // printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
} // } Driver Code Ends