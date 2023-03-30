#include "esayfind.hpp"
int main()
{
    try
    {
        std::deque<int> g1;
        g1.push_back(10);
    g1.push_front(20);
    g1.push_back(30);
    g1.push_front(15);
    std::cout << *esayfind(g1, 2) << std::endl;
    std::vector<int> g2;
    g2.push_back(1);
    g2.push_back(16);
    std::cout << *esayfind(g2, 2) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}