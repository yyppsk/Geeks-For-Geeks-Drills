#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool isPossible(int sx, int sy, int dx, int dy)
{
    while (sx <= dx && sy <= dy)
    {
        if (sx == dx && sy == dy)
        {
            return true;
        }
        if (dx > dy)
        {
            dx -= dy;
        }
        else
        {
            dy -= dx;
        }
    }
    return false;
}
int main()
{
    cout << isPossible(3, 2, 5, 7);
    return 0;
}