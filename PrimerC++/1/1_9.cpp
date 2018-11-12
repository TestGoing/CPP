#include <iostream>

/**
 * 计算从50到100之间的整数和
 */
int main()
{
	// while方法
	// int sum = 0;
	// int i = 50;
	// while(i <= 100)
	// {
	// 	sum += i;
	// 	i++;
	// }
	// std::cout << "50到100之间的整数之和为" << sum << std::endl;
	// return 0;
	//

	int sum = 0;
	
	for(int i = 50; i <= 100; i++)
		sum += i;

	std::cout << "50到100之间的整数之和为"
	          << sum << std::endl;
	return 0;

}

