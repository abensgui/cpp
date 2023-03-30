#include "Serialization.hpp"
uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data *d = new Data();
    d->x = 10;
    d->y = 4;

    uintptr_t p;
    // unsigned int *p1;

    p = serialize(d);
    Data *d1 = deserialize(p);

    std::cout << d1->x << std::endl;
    std::cout << d1->y<< std::endl;

    delete d;
}