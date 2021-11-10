#include <bits/stdc++.h>

int find_min(std::vector<int>& v, int start_index)
//function that takes in vector as input and returns index of minimum value in the vector
{
    int min_index = start_index;
    for(int i = start_index; i < v.size(); ++i)
    {
       if(v[i] < v[min_index])
       {
           min_index = i;
       }
    }
    return min_index;
}

void swap(int& x, int& y)
//function that takes in two variables as input and exchanges their values (integers)
{
    int a = x;
    x = y;
    y = a;
}

std::vector<int> sel_sort(std::vector<int>& v)  
{
    for(int i = 0; i < v.size(); ++i)
    {
        int min = find_min(v, i);
        swap(v[min], v[i]); 
    }
    return v;
}

int main()
{
    std::vector<int> a = {80, 92, 34, 67, 3, 89};
    std::vector<int> output = sel_sort(a);
    for(int i = 0; i < a.size(); ++i)
    {
        std::cout << output[i] << " ";
    }
    std::cout << "\n";
}