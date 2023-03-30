#include "Span.hpp"
int main()
{
    try
    {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "\n---=-=--------=-=-=-------\n";
        std::vector<int> g2;
        g2.push_back(6);
        g2.push_back(3);
        g2.push_back(17);
        g2.push_back(9);
        g2.push_back(11);
        Span ss(5);
        ss.addNumber(g2.begin(), g2.end());
        std::cout << "sho " << ss.shortestSpan() << std::endl;
        std::cout << "lon " << ss.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    return 0;
}