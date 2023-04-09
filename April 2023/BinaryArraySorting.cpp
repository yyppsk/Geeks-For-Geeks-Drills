#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // A[]: input array
    // N: input array
    // Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int i = 0;
        int j = N - 1;
        while (i <= j)
        {
            cout << "Y" << endl;
            if (A[i] == 1 && A[j] == 0)
            {
                swap(A[i], A[j]);
                i++;
                j--;
            }
            else if (A[i] == 0 && A[j] == 1)
            {
                i++;
                j--;
            }
            else if (A[i] == 1 && A[j] == 1)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int T = 1;
    // Input the number of testcases
    while (T--)
    {
        int N = 10;
        int A[N] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0};
        Solution obj;
        obj.binSort(A, N);
        for (int x : A)
            cout << x << " ";

        cout << endl;
    }
    return 0;
}
