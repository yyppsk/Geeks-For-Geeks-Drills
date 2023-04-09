#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*N = 4, date = 12
car[] = {2375, 7682, 2325, 2352}
fine[] = {250, 500, 350, 200}
Output:
600*/
long long int totalFine(int n, int date, int car[], int fine[])
{
    // odd date fine lena hai for even number of cars
    long long int paisa = 0;
    if (date % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (car[i] % 2 == 0)
            {
                paisa += fine[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (car[i] % 2 != 0)
            {
                paisa += fine[i];
            }
        }
    }
    return paisa;
}
int main()
{
    int N = 4, date = 12, car[] = {2375, 7682, 2325, 2352}, fine[] = {250, 500, 350, 200};
    cout << totalFine(N, date, car, fine) << endl;
    return 0;
}