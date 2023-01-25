#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(Brain const &b);
    Brain &operator=(Brain const &b);
    std::string getId(int i) const;
    void setId(int i, std::string id);
    ~Brain();
};

#endif