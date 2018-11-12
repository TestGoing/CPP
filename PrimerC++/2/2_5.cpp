#include <iostream>

int main()
{
	//(a)
	std::cout << 'a' << std::endl;
	std::cout << L'a' << std::endl;
	std::cout<<L"a"<<std::endl;
	//(b)
	std::cout<<10<<std::endl;
	std::cout<<10u<<std::endl;
	std::cout<<10L<<std::endl;
	std::cout<<10uL<<std::endl;
	std::cout<<012<<std::endl;
	std::cout<<0xC<<std::endl;
	//(c)
	std::cout<<3.14<<std::endl;
	std::cout<<3.14f<<std::endl;
	std::cout<<3.14L<<std::endl;
	//(d)
	std::cout<<10<<std::endl;
	std::cout<<10u<<std::endl;
	std::cout<<10.<<std::endl;
	std::cout<<10e-2<<std::endl;	
}