#include <iostream>
#include <windows.h>



int main()
{
	int a;																			//declare variables and display the following menu 
	std::cout << "Main Menu:" << std::endl;
 
	std::cout << "1. List directory contents" << std::endl;
	std::cout << "2. Print working directory" << std::endl;
	std::cout << "3. Create a new directory" << std::endl;
	std::cout << "4. Display a message" << std::endl;
	std::cout << "5. Concatenate and display content of a file" << std::endl;
	std::cout << "6. Exit" << std::endl << std::endl;

	std::cout << "Enter a number 1-6:" << std::endl;							//ask for user input

	std::cout << std::endl;


	std::cin >> a;																//user inputs

	while (a != 6)																//while the user has not entered 6 (to exit the menu)
	{
		switch (a)																//user input switch 
		{
		case 1:																	//if they enter 1
			std::cout << "Here's your directory contents:" << std::endl;		//display text
			system("dir");														//show all contents in the directory
			std::cout << std::endl;
			break;																//exit from this case 

		case 2:
			std::cout << "Here's your current working directory:" << std::endl;	//if they enter 2, display this text and
			system("cd");														//print the current working directory
			std::cout << std::endl;
			break;																//exit the case 

		case 3:
		{
			std::cout << "Your new directory has been created." << std::endl;	//if 3 is entered, display this
			int mkdirR = system("mkdir New_Directory");							//make a new directory called "New_Directory" 
			if (mkdirR != 0)													//if there is one already made
			{
				std::cerr << "The directory already exists." << std::endl;		//tell the user this
				
			}
			int del = system("rmdir /s /q Old_Directory");						//and delete the old directry name to be replaced with the new one
			if (del != 0)														//if there is a directory with that name which can't be deleted
			{
				std::cerr << "The directory cannot be deleted." << std::endl;	//tell the user
			}

			std::cout << std::endl;
			break;																//exit the case
		}

		case 4:
		{
			std::cout << "Using the echo command:" << std::endl;
			int returnC = system("echo Hello World!");							//if user inputs 4, then display that and run the echo command to print "Hello World!" to console
			if (returnC == 0)													//if the command is executed
			{
				std::cout << "Success!" << std::endl;							//tell user it was able to run
			}
			else
			{
				std::cerr << "Command failed!" << std::endl;					//if not, say it failed
			}
			std::cout << std::endl;
			break;																//exit case
		}
		case 5:
		{
			std::cout << "Your file contains the following:" << std::endl;
			int typeC = system("type Hello.txt");								//if 5 is entered, display the text and open the "Hello.txt" file
			std::cout << std::endl;
			if(typeC != 0)														//if it does not exist or cannot be opened, tell that to the user
			{
				std::cerr << "Error. File was unable to open or does not exist!" << std::endl;
			}
			std::cout << std::endl << std::endl;
			break;																//exit the case
		}
		default:																//if any other number besides 1-6 is entered, ask the user to input a proper number
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
		std::cout << "Main Menu:" << std::endl;									//redisplay the menu at end of each run

		std::cout << "1. List directory contents" << std::endl;
		std::cout << "2. Print working directory" << std::endl;
		std::cout << "3. Create a new directory" << std::endl;
		std::cout << "4. Display a message" << std::endl;
		std::cout << "5. Concatenate and display content of a file" << std::endl;
		std::cout << "6. Exit" << std::endl << std::endl;
		std::cout << "Enter a number 1-5 to continue or 6 to exit." << std::endl;
		std::cin >> a;
		if (a == 6) { break; }													//if they instantly put 6 in, exit the program
		std::cout << std::endl;

	}
	
	std::cout << std::endl;
	
}