#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
typedef long long int ll;
using namespace std;
bool check(vector<ll> A, vector<ll> B, int N)
{
    unordered_map<ll, ll> mapA;
    for (int i = 0; i < N; i++)
    {
        mapA[A[i]]++;
    }
    cout << "Map of A: " << endl;
    for (auto i : mapA)
    {
        cout << i.first << ":" << i.second << endl;
    }
    unordered_map<ll, ll> mapB;
    for (int i = 0; i < N; i++)
    {
        mapB[B[i]]++;
    }
    cout << "Map of B: " << endl;
    for (auto i : mapB)
    {
        cout << i.first << ":" << i.second << endl;
    }
    for (int i = 0; i < N; i++)
    {
        printf("Checking %d:%d == %d:%d\n", A[i], mapA[A[i]], B[i], mapA[B[i]]);
        if (mapA[A[i]] != mapB[A[i]])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<ll> A = {1, 2, 5};

    vector<ll> B = {2, 4, 15};
    cout << check(A, B, 3);
    return 0;
}