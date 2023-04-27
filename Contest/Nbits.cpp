#include <iostream>
#include <string>

using namespace std;

void generateBinaryStrings(int n, string s)
{
    if(s.length() == n) {
        for(int i=0; i<n; i++) {
            cout << s[i] << " "; // print each bit with a space in between
        }
        cout << endl;
        return;
    }

    generateBinaryStrings(n, s + "0");
    generateBinaryStrings(n, s + "1");
}

int main()
{
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    generateBinaryStrings(n, "");

    return 0;
}
