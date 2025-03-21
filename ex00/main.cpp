#include "easyfind.hpp"

const char *NotFoundException::what() const throw()
{
    return "Element not found";
}

int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(21);
    v.push_back(30);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 30);
        std::cout << "Found : " << *it << std::endl;
        std::vector<int>::iterator it2 = easyfind(v, 20);
        std::cout << "Found : " << *it2 << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }

    return 0;
}