#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
template <class T, class T1>
void iter(T* add, T1 len, void (*func)(const T&));

#endif /* ************************************************************ ITER_H */

template <class T, class T1>
void iter(T* add, T1 len, void (*func)(const T&))
{    int i;
    i = 0;
    while(i < len)
    {
        func(add[i]);
                i++;
    }
}
