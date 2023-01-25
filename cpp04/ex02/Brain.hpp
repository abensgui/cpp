#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{
private:
    std::string Ideas[100];
public:
    Brain(/* args */);
    Brain(Brain const &b);
    Brain &operator=(Brain const &b);
    ~Brain();
};

#endif