#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void rearrange(int arr[], int n)
{

    int positive = 0, negative = 0;
    int chance = 1;
    vector<int> result;
    while ((negative <= (n - 1)) && (positive <= n - 1))
    {

        if (chance == 1)
        {
            if (arr[positive] >= 0)
            {
                cout << arr[positive] << " ";
                chance = 0;
                result.push_back(arr[positive]);
            }
            positive++;
        }
        else if (chance == 0 && negative != INT_MIN)
        {
            if (negative == n)
            {
                negative = INT_MIN;
            }
            if (arr[negative] < 0)
            {
                cout << arr[negative] << " ";
                chance = 1;
                result.push_back(arr[negative]);
            }
            negative++;
        }
        cout << "\nIndex : P -> " << positive << " Neg: " << negative << " " << endl;
    }
}
int main()
{

    int N = 10,
        Arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    rearrange(Arr, N);
    return 0;
}