/* Multiply without asterisk */

#include <iostream>

void multipliesWithoutAsterisk(int a, int b, int& r)
{
    if(b < 0)
    {
        r = 0;
    }
    for (int i=0; i < b; i++)
    {
        r = r + a;
    }
}
int main()
{
    int a = 0;
    int b = 5;
    int p = 0;
    multipliesWithoutAsterisk(a,b, p);
    cout << "multiplies : " << p << endl;
}
