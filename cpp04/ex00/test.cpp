#include <iostream>
#include <string>

class S{
    int x;
public:
    S();
    virtual void f(){}
};
S::S()
{
}

int main(){
    S s;
    std::cout << "size : " << sizeof(S) << "\n";
    void*** ptr = (void***)&s;
    std::cout << "address : " << ptr << "\n";
    std::cout << "bytes : " << *ptr << " and " << *(ptr+1) << "\n";
    std::cout << "address if vftable : " << *ptr << "\naddress of f : " << **ptr << "\n";
    std::cin.get();
    while (1);
    
    return 0;
}

