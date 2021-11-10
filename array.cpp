#include <bits/stdc++.h>

//Take as input an integer and return vector of the form 1, 2, 3...n

std::vector<int> vector_maker(int x)
{
    std::vector<int> v(x);
    for(int i = 0; i < x; ++i)
    {
        v[i] = i + 1;
    }
    return v;
}


int main()
{
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::vector<int> output_vector = vector_maker(n);
    for(int i = 0; i < n; ++i)
    {
        std::cout << output_vector[i] << " ";
    }
    std::cout << "\n";
    return 0;
}