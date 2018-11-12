#include <iostream>
/**
 * 输出10以内的数字
 */
int main()
{
	////while 方法
	// int i = 10;
	// while(i >= 0)
	// {
	// 	std::cout<<i<<" ";
	// 	i--;
	// }
	// std::cout<<std::endl;

	//for 方法
	for(int i = 10; i >= 0; i--)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}