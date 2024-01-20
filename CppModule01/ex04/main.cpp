#include <fstream>
#include <iostream>
int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "Erorr\n"; 
		exit(1);
	}
	std::string line;
	std::fstream a;
	std::fstream b;
	a.open(av[1], std::fstream::in);
	
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string out = av[1] + std::string(".repalce");
	if(a)
		b.open(out, std::fstream::out);
	else
		std::cout << "No such file or directory";
	while(std::getline(a, line))
	{ 
		while(line.find(s1) <= line.length() && s1 != s2 && s1 != "")
			line = line.substr(0,line.find(s1)) + s2 + line.substr(line.find(s1) + s1.length(), line.length());
		b << line << "\n";
	}

}
