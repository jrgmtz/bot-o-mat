// Bot-O-Mat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>  
#include <string>
#include <Windows.h>
#include <iomanip>
#include "Robot.h"
using namespace std;


int main()
{

	int const cap = 5;
	Robot robot[cap];
	string name;
	int type;
	int i = 0;
	int userInput = 0;

	//INITIAL SCREEN
	cout << "____________________Welcome to BOT-O-MAT_____________________" << endl;
	cout << "\n Press 1 to create a robot." << endl;

	cin >> userInput;

	while (userInput != 0)
	{
		//CREATES A NEW ROBOT
		if (userInput == 1) {
			cout << endl;
			cout << "Enter robot name: \t" << endl;
			cin.ignore();
			std::getline(cin, name);
			cout << endl;
			cout << "Select robot type: \n"
				"  1- Unipedal \n"
				"  2- Bipedal \n"
				"  3- Quadrupedal  \n"
				"  4- Arachnid  \n"
				"  5- Radial  \n"
				"  6- Aeronautical \n" << endl;
			cout << endl;
			cin >> type;

			string typeSelected;
			switch (type) {
			case 1:
				typeSelected = "Unipedal";
				break;
			case 2:
				typeSelected = "Bipedal";
				break;
			case 3:
				typeSelected = "Quadrupedal";
				break;
			case 4:
				typeSelected = "Arachnid";
				break;
			case 5:
				typeSelected = "Radial";
				break;
			case 6:
				typeSelected = "Aeronautical";
				break;
			}

			robot[i] = Robot(name, typeSelected);
			i++;

			userInput = robot->menu();

		}
		//QUITS APPLICATION
		if (userInput == -1)
		{
			string quit;
			cout << endl;
			cout << "Quit Application?  Y/N" << endl;
			cin >> quit;
			if (quit == "Y" || quit == "y")
			{
				exit(0);
			}
			userInput = robot->menu();
		}

		//SELECT A ROBOT AND COMPLETE A TASKS
		if (userInput == 2) {
			int robotSelection;
			cout << endl;
			cout << endl;
			cout << "--------------------------------------------------------------------- \n"
				"          Select an available robot to complete tasks: \n"
				"---------------------------------------------------------------------" << endl;
			for (int counter = 0; counter < i; counter++)
			{
				cout << "   " << counter + 1 << "- " << robot[counter].toString() << endl;
			}
			cout << "---------------------------------------------------------------------" << endl;
			cout << endl;
			cout << "Press -1 to return to Main Menu" << endl;
			cin >> robotSelection;
			if (robotSelection == -1)
			{
				userInput = robot->menu();
			}
			else
			{
				robot[robotSelection - 1].completeTask();
			}
		}
		//DISPLAY ROBOTS INFORMATION
		if (userInput == 3)
		{
			cout << endl;
			cout << endl;
			cout << "-------------------------\n"
				"      ROBOTS INFO:     \n"
				"------------------------- \n" << endl;
			cout << left << setw(20) << "NAME" << internal << setw(20) << "TYPE    " << setw(20) << "TASKS COMPLETED" << setw(20) << "TOTAL POINTS" << '\n';
			for (int counter = 0; counter < i; counter++)
			{
				robot[counter].printInfo();
			}
			cout << endl;
			system("PAUSE");
			userInput = robot->menu();
		}

		//DISPLAY SCOREBOARDS
		if (userInput == 4) {
			cout << endl;
			cout << endl;
			cout << "-------------------------\n"
				"      LEADERBOARDS:     \n"
				"------------------------- \n" << endl;
			cout << left << setw(20) << "NAME" << internal << setw(20) << "TOTAL POINTS" << '\n';
			for (int counter = 0; counter < i; counter++)
			{
				robot[counter].scoreboards();
			}
			cout << endl;
			system("PAUSE");
			userInput = robot->menu();
		}
	}

	system("PAUSE");
	return 0;
}