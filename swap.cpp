#include <bits/stdc++.h>

void swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int a = 5;
    int b = 3;
    swap(a, b);
    std::cout << a << " " << b << "\n";
}

