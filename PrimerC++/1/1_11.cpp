#include <iostream>
/**
 * 输出输入的两个数之间的所有整数
 */
int main()
{
	// //while方法
	// std::cout << "请输入两个数";
	// std::cout << std::endl;
	// int v1, v2;
	// std::cin >> v1 >> v2;
	// if(v1 > v2)
	// 	while(v1 >= v2)
	// 	{
	// 		std::cout << v1 << " ";
	// 		v1--;
	// 	}
	// else
	// 	while(v1 <= v2)
	// 	{
	// 		std::cout << v1 << " ";
	// 		v1++;
	// 	}
	// std::cout << std::endl;
	//

	//for 方法
	std::cout << "请输入两个数";
	std::cout << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	if(v1 > v2)
		for(; v1 >= v2; v1--)
			std::cout << v1 << " ";
	else
		for(; v1 <= v2; v1++)
			std::cout << v1 << " ";
	std::cout << std::endl;

	return 0;
}