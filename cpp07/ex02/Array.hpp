#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <class T>
class Array
{
	private:
		T* arr;
		unsigned int N;
	public:

		Array();
		Array(unsigned int n);
		Array( Array const & src );
		Array & operator=( Array const & src );
		T &operator[](int i);
		const T &operator[](int i) const;
		int size();
		~Array();
		
};


#endif /* *********************************************************** ARRAY_H */

template <class T>
Array<T>::Array()
{
	std::cout << "Default constructor Array called\n";
	arr = new T[0];
}

template <class T>
inline Array<T>::Array(unsigned int n)
{
    std::cout << "parameter constructor Arrayt called\n";
	arr = new T[n];
	N = n;
}

template <class T>
Array<T>::Array(Array const &src)
{
    std::cout << "copy constructor Array called\n";
	N = src.N;
	arr = new T[N];
	*arr = *(src.arr);
}
template <class T>
Array<T> &Array<T>::operator=(Array const &src)
{
	std::cout << "Copy assignment operator Array called\n";
	*arr = *(src.arr);
	return (*this);
}

template <class T>
const T &Array<T>::operator[](int i) const{
	if(i > size()||  i < 0)
		throw std::range_error("out of range");
	return(arr[i]);
}

template <class T>
int Array<T>::size()
{
    return (N);
}

template <class T>
T &Array<T>::operator[](int i)
{
	if(i > size() ||  i < 0)
		throw std::range_error("out of range");
    return(arr[i]);
}
template <class T>
Array<T>::~Array()
{
	std::cout << "Destructor called\n";
	delete arr;
}
