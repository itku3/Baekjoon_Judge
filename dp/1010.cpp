#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

double facto(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * facto(n - 1);
}
double comb(int n, int r)
{
    return facto(n) / (facto(r) * facto(n - r));
}
int main()
{

    int t;
    int a, b;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        printf("%.lf\n", comb(b, a));
    }
}