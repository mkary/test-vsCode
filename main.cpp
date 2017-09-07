#include <iostream>
#include <vector>

int main()
{
    std::vector<int> list {0,1,2,3,4,5,6,7,8,9};

    for(int value: list)
    {
        std::cout << value << " ";
    }
    return 0;
}