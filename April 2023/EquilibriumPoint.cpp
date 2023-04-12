#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int equilibriumPoint(long long a[], int n)
{
    if(n == 1)
            return 1;
        if(n == 2)
            return -1;
        long long leftsum = a[0], rightsum = a[n-1];
        int left = 1, right = n - 2;
        while (left < right)
        {
            if(leftsum < rightsum){
                leftsum = leftsum + a[left];
                left++;
            }
            else if(leftsum > rightsum){
                rightsum = rightsum + a[right];
                right--;
            }
            else{
                leftsum+=a[left];
                rightsum+=a[right];
                left++,right--;
            }
        }
         if(left > right){
            return -1;
            }
        if(leftsum == rightsum)
            return left+1;
        return -1;
}
int main()
{
    int n = 5;
    long long A[] = {1, 3, 5, 2, 2};
    cout << equilibriumPoint(A, n);
    return 0;
}