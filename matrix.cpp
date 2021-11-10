#include <bits/stdc++.h>

int main()
{
    int n;
    int m;
    std::cin >> n >> m;
    int x[n][m];
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            x[j][i] = j + 1;
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << x[j][i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}