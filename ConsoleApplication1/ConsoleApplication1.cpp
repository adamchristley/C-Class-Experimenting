#include <iostream>
#include <string>

class skin {
private:
	std::string name;
	std::string color;
	int quant;

public:
	void skinname()
	{
		std::cout << "What is your skin's name?" << std::endl;
		std::cin >> name;
	}
	void skincolor()
	{
		std::cout << "What is the color of your skin? " << std::endl;
		std::cin >> color;
	}
	void output()
	{
		std::cout << "The name of your skin is: " << name << std::endl << "The color of your skin is: " << color << std::endl;
	}
};


int main()
{
	
	skin sk;
	sk.skinname();
	sk.skincolor();
	sk.output();
	return 0;
};