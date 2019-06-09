#include <iostream>
#include <vector>
int main()
{
    std::vector<int> aVector={1, 2, 3, 4, 5};
 
    std::cout << "Pointer\n";
    for (int* p=&aVector[0]; p != &aVector[4+1]; ++p)
    {
        std::cout << *p << "\n";
    }
}
