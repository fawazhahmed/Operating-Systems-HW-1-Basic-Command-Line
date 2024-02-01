#include <iostream>
#include <windows.h>



int main()
{
	int a;
	std::cout << "Main Menu:" << std::endl;
 
	std::cout << "1. List directory contents" << std::endl;
	std::cout << "2. Print working directory" << std::endl;
	std::cout << "3. Create a new directory" << std::endl;
	std::cout << "4. Display a message" << std::endl;
	std::cout << "5. Concatenate and display content of a file" << std::endl;
	std::cout << "6. Exit" << std::endl << std::endl;

	std::cout << "Enter a number 1-6:" << std::endl;

	std::cout << std::endl;


	std::cin >> a;

	while (a != 6) 
	{
		switch (a)
		{
		case 1:
			std::cout << "Here's your directory contents:" << std::endl;
			system("dir");
			std::cout << std::endl;
			break;

		case 2:
			std::cout << "Here's your current working directory:" << std::endl;
			system("cd");
			std::cout << std::endl;
			break;

		case 3:
		{
			std::cout << "Your new directory has been created." << std::endl;
			int mkdirR = system("mkdir New_Directory");
			if (mkdirR != 0)
			{
				std::cerr << "The directory already exists." << std::endl;
				
			}
			int del = system("rmdir /s /q Old_Directory");
			if (del != 0)
			{
				std::cerr << "The directory cannot be deleted." << std::endl;
			}

			std::cout << std::endl;
			break;
		}

		case 4:
		{
			std::cout << "Using the echo command:" << std::endl;
			int returnC = system("echo Hello World!");
			if (returnC == 0)
			{
				std::cout << "Success!" << std::endl;
			}
			else
			{
				std::cerr << "Command failed!" << std::endl;
			}
			std::cout << std::endl;
			break;
		}
		case 5:
		{
			std::cout << "Your file contains the following:" << std::endl;
			int typeC = system("type Hello.txt");
			std::cout << std::endl;
			if(typeC != 0)
			{
				std::cerr << "Error. File was unable to open or does not exist!" << std::endl;
			}
			std::cout << std::endl << std::endl;
			break;
		}
		default: 
			std::cerr << "Error: Please choose between 1-5. Choose 6 to exit." << std::endl;
			break;

		}
		/*if(a>=7)
		{
			std::cerr << "Error: Please choose between 1-5. Choose 6 to exit." << std::endl;
			std::cin >> a;
			if (a == 6) { break; }
			std::cout << std::endl;

		}
		else*/
		std::cout << "Main Menu:" << std::endl;

		std::cout << "1. List directory contents" << std::endl;
		std::cout << "2. Print working directory" << std::endl;
		std::cout << "3. Create a new directory" << std::endl;
		std::cout << "4. Display a message" << std::endl;
		std::cout << "5. Concatenate and display content of a file" << std::endl;
		std::cout << "6. Exit" << std::endl << std::endl;
		std::cout << "Enter a number 1-5 to continue or 6 to exit." << std::endl;
		std::cin >> a;
		if (a == 6) { break; }
		std::cout << std::endl;

	}
	
	std::cout << std::endl;
	
}