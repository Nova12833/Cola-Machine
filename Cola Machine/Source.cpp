//Cola Machine Exercise
#include <iostream>;

int main()
{
	
	int choice;

	std::cout << "Please select a Beverage. \n\n";
	std::cout << "Select 1 for Coke\n";
	std::cout << "Select 2 for Water\n";
	std::cout << "Select 3 for Sprite\n";
	std::cout << "Select 4 for bai\n";
	std::cout << "Select 5 for Tea\n\n";

	std::cin >> choice;

	std::cout << "\n\n";

	switch (choice) 
	{
		case 1: std::cout << "You have selected: Coke"; break;
		case 2: std::cout << "You have selected: Water"; break;
		case 3: std::cout << "You have selected: Sprite"; break;
		case 4: std::cout << "You have selected: bai"; break;
		case 5: std::cout << "You have selected: Tea"; break;
		default: std::cout << "Error. choice was not valid, here is your money back."; break;
	}

	
	
	
	
	return 0;
}