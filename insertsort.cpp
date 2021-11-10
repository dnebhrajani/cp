#include <bits/stdc++.h>

void swap(int& x, int& y)
//function that takes in two variables as input and exchanges their values (integers)
{
    int a = x;
    x = y;
    y = a;
}

std::vector<int> insert_sort(std::vector<int>& v)
{
    std::vector<int> x(v.size());
    x[0] = v[0];
    for(int i = 0; i < v.size(); ++i)
    {
        if(v[i + 1] > x[i])
        {
            x[i + 1] = v[i + 1];
        }
        else if(v[i + 1] < x[i])
        {
            x[i + 1] = v[i + 1];
            while(x[i + 1] < x[i])
            {
                swap(x[i], x[i + 1]);
            }
        }
        
    }
}