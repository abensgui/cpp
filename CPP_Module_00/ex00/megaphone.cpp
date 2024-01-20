#include <iostream>

int main(int ac , char **av)
{
	(void)ac;
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while(i < ac)  
		{
			j = 0;
			while(av[i][j])
			{
				if(av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] = av[i][j] - 32;
				j++;
			}
			std::cout << av[i] ;
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
}
