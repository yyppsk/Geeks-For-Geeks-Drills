#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void threeWayPartition(vector<int> &array, int a, int b)
{
    int blue = 0, white = 0, red = array.size() - 1;
    while (white <= red)
    {
        if (array[white] < a)
        {
            swap(array[white], array[blue]);
            blue++, white++;
        }
        else if (array[white] > b)
        {
            swap(array[white], array[red]);
            red--;
        }
        else if (array[white] >= a && array[white] <= b)
        {
            white++;
        }
    }

    for (auto i : array)
    {
        cout << i << " ";
    }
}
int main()
{
    int a = 1, b = 2;
    vector<int> arr = {4, 1, 3, 2, 8};
    threeWayPartition(arr, a, b);
    return 0;
}