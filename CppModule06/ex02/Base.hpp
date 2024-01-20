#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
#include <time.h>
#include <cstdlib>

class Base
{
	public:
		Base();
		virtual ~Base();
};
class A : public Base
{
	public:
		A(){};
};
class B : public Base
{
	public:
		B(){};
};
class C : public Base
{
	public:
		C(){};
};
#endif