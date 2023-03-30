#include "PmergeMe.hpp"
int main(int ac, char **av)
{
    try
    {
        if(ac < 2)
            throw(std::invalid_argument("error"));
        int i = 0;
        av = &av[1];
        PmergeMe p;
        while (av[i])
        {
            check_arg(av[i]);
            i++;
        }
        i = 0;
        std::cout << "Before:";
        while (av[i])
            std::cout << " " << av[i++];
        std::cout<< std::endl;
        
        clock_t start_v = clock();
        p.merge_insertion_sort_vector(av, ac - 1);
        clock_t end_v = clock();

        clock_t start_d = clock();
        p.merge_insertion_sort_deque(av, ac - 1);
        clock_t end_d = clock();

        std::cout << "After: ";
        p.ft_print();
        double elapsed_time_v = double(end_v - start_v); 
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << elapsed_time_v << " us" << std::endl;

        double elapsed_time_d = double(end_d - start_d);
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << elapsed_time_d << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}