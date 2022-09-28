#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int arr[] = {7, 7, 5, 5, 5, 5, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7};
    int size = sizeof(arr) / arr[0];
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (candidate = arr[i])
            count++;
        else
            count--;
    }
    cout << "Answer: " << candidate;
    return 0;
}