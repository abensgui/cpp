#include "Base.hpp"

Base *generate(void)
{
    srand(time(0));
    if (rand() % 3 == 0)
    {
        std::cout << "return A\n";
        return (new A());
    }
    else if (rand() % 3 == 1)
    {
        std::cout << "return B\n";
        return (new B());
    }
    else
    {
        std::cout << "return C\n";
        return (new C());
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
}
void identify(Base &p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A\n";
    }
    catch (std::exception &e)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            std::cout << "B\n";
        }
        catch (std::exception &e)
        {
            try
            {
                C c = dynamic_cast<C &>(p);
                std::cout << "C\n";
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }
}
int main()
{
    Base* p = generate();
    identify(p);
    identify(*p);
    delete p;
}