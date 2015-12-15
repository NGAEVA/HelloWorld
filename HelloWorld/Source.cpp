#include <iostream>
void main()
{
	int c;
	c = rand() % 6+1;
	//make commit randomly
	while (1)
	{
		if (c == 1)
		{
			std::cout << "First commit\n";
			system("pause");
		}

		else if (c == 2)
		{
			std::cout << "Second commit\n";
			system("pause");
		}
		else if (c == 3)
		{
			std::cout << "Third commit\n";
			system("pause");
		}
		else if (c == 4)
		{
			std::cout << "Fourth commit\n";
			system("pause");
		}

		else if (c == 5)
		{
			std::cout << "Fifth commit\n";
			system("pause");
		}
		else
		{
			std::cout << "Commit done\n";
			system("pause");
		}
	}
	
}