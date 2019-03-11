#include "stdafx.h"
#include <iostream>
#include <time.h>  
#include <string>
#include<windows.h>
#include <iomanip>
#include "Robot.h"
using namespace std;

Robot::Robot() {

}

Robot::Robot(string n, string t)
{
	name = n;
	type = t;
}

void Robot::completeTask() {

	int taskSelected;
	int userSelection = 0;

	while (userSelection != -1)
	{
		if (userSelection == 0)
		{

			//Generate 5 random numbers
			if (randomNumbersSelected == false)
			{

				srand(time(NULL));

				for (int i = 0; i < 5; i++)
				{
					bool check; //variable to check or number is already used
					int n; //variable to store the number in
					do
					{
						n = rand() % 10 + 1;
						//check or number is already used:
						check = true;
						for (int j = 0; j < i; j++)
							if (n == randomNumbers[j]) //if number is already used
							{
								check = false; //set check to false
								break; //no need to check the other elements of value[]
							}
					} while (!check); //loop until new, unique number is found
					randomNumbers[i] = n; //store the generated number in the array
				}
			}
		}

		randomNumbersSelected = true;

		cout << endl;
		cout << endl;
		cout << "-------------------------------------- \n"
			"      Select a task to complete: \n"
			"-------------------------------------- \n" << endl;

		for (int counter = 0; counter < 5; counter++) {

			switch (randomNumbers[counter]) {
			case 1:
				if (dishesCompleted == false) {
					cout << "   1- do the dishes \n";
					break;
				}
				else {
					break;
				}
			case 2:
				if (sweepCompleted == false) {
					cout << "   2- sweep the house \n";
					break;
				}
				else {
					break;
				}
			case 3:
				if (lawndryCompleted == false) {
					cout << "   3- do the laundry \n";
					break;
				}
				else {
					break;
				}
			case 4:
				if (recyclingCompleted == false) {
					cout << "   4- take out the recycling \n";
					break;
				}
				else {
					break;
				}
			case 5:
				if (sammichCompleted == false) {
					cout << "   5- make a sammich \n";
					break;
				}
				else {
					break;
				}
			case 6:
				if (mawLawnCompleted == false) {
					cout << "   6- mow the lawn \n";
					break;
				}
				else {
					break;
				}
			case 7:
				if (leavesCompleted == false) {
					cout << "   7- rake the leaves \n";
					break;
				}
				else {
					break;
				}
			case 8:
				if (dogBathCompleted == false) {
					cout << "   8- give the dog a bath \n";
					break;
				}
				else {
					break;
				}
			case 9:
				if (bakeCookiesCompleted == false) {
					cout << "   9- bake some cookies \n";
					break;
				}
				else {
					break;
				}
			case 10:
				if (washCarCompleted == false) {
					cout << "   10- wash the car \n";
					break;
				}
				else {
					break;
				}
			}
		}
		cout << endl;
		cout << "--------------------------------------" << endl;
		cout << endl;
		cout << "Press -1 to return to robot selection" << endl;
		cout << "Press 0 to refresh task list." << endl;
		cin >> userSelection;

		if (userSelection == 0)
		{
			randomNumbersSelected = false;
			refreshList();
		}

		switch (userSelection) {
		case 1:
			dishesCompleted = doDishes();
			break;
		case 2:
			sweepCompleted = sweepHouse();
			break;
		case 3:
			lawndryCompleted = doLaundry();
			break;
		case 4:
			recyclingCompleted = takeOutRecyclin();
			break;
		case 5:
			sammichCompleted = makeSammish();
			break;
		case 6:
			mawLawnCompleted = mowTheLawn();
			break;
		case 7:
			leavesCompleted = rakeLeaves();
			break;
		case 8:
			dogBathCompleted = dogBath();
			break;
		case 9:
			bakeCookiesCompleted = bakeCookies();
			break;
		case 10:
			washCarCompleted = washCar();
			break;
		}
	}
}

void Robot::refreshList() {
	dishesCompleted = false;
	sweepCompleted = false;
	lawndryCompleted = false;
	recyclingCompleted = false;
	sammichCompleted = false;
	mawLawnCompleted = false;
	leavesCompleted = false;
	dogBathCompleted = false;
	bakeCookiesCompleted = false;
	washCarCompleted = false;
}

//FUNCTIONS TASKS TO BE MADE
//TASK #1
bool Robot::doDishes() {
	if (dishesCompleted == false) {
		int time = eta1;
		cout << endl;
		cout << "Doing the dishes..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;
		for (int i = 1; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts1;
	cout << pts1 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #2
bool Robot::sweepHouse() {
	if (sweepCompleted == false) {
		int time = eta2;
		cout << endl;
		cout << "Sweeping the house..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 3; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts2;
	cout << pts2 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #3
bool Robot::doLaundry() {
	if (lawndryCompleted == false) {
		int time = eta3;
		cout << endl;
		cout << "Doing the lawndry..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 10; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts3;
	cout << pts3 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #4
bool Robot::takeOutRecyclin() {
	if (recyclingCompleted == false) {
		int time = eta4;
		cout << endl;
		cout << "Taking out the recycling..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 4; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts4;
	cout << pts4 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #5
bool Robot::makeSammish() {
	if (sammichCompleted == false) {
		int time = eta5;
		cout << endl;
		cout << "Making a sammish..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 7; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts5;
	cout << pts5 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #6
bool Robot::mowTheLawn() {
	if (mawLawnCompleted == false) {
		int time = eta6;
		cout << endl;
		cout << "Mowing the lawn..." << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 20; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts6;
	cout << pts6 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #7
bool Robot::rakeLeaves() {
	if (leavesCompleted == false) {
		int time = eta7;
		cout << endl;
		cout << "Raking the leaves... " << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 18; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts7;
	cout << pts7 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #8
bool Robot::dogBath() {
	if (dogBathCompleted == false) {
		int time = eta8;
		cout << endl;
		cout << "Bathing the dog... " << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 14.5; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts8;
	cout << pts8 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #9
bool Robot::bakeCookies() {
	if (bakeCookiesCompleted == false) {
		int time = eta9;
		cout << endl;
		cout << "Baking cookies... " << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 8; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts9;
	cout << pts9 << " POINTS MADE!" << endl << endl;
	return true;
}

//TASK #10
bool Robot::washCar() {
	if (washCarCompleted == false) {
		int time = eta10;
		cout << endl;
		cout << "Washing the car... " << endl;
		cout << "Time expected to complete: " << to_string(time) << " milliseconds." << endl;;
		for (int i = 20; i >= 1; i--)
		{
			cout << i;
			cout << "\n";
			Sleep(1000);
		}
	}
	cout << endl;
	cout << "Task completed!" << endl << endl;
	tasksCompleted++;
	totalPoints += pts10;
	cout << pts10 << " POINTS MADE!" << endl << endl;
	return true;
}



void Robot::scoreboards() {
	cout << left << setw(20) << this->name << internal << setw(20) << this->totalPoints << '\n';
}

void Robot::printInfo() {
	cout << left << setw(20) << this->name << internal << setw(20) << this->type << setw(20) << this->tasksCompleted << setw(20) << this->totalPoints << '\n';
}

int Robot::menu() {
	int userSelection;
	cout << endl;
	cout << "\n-------------------MAIN MENU------------------ \n \n"
		"   1- CREATE A ROBOT \n \n"
		"   2- SELECT A ROBOT TO COMPLETE TASKS \n \n"
		"   3- ROBOTS INFORMATION \n \n"
		"   4- SCOREBOARD \n \n"
		"      Press -1 to exit. \n"
		"------------------------------------------------ \n";
	cin >> userSelection;
	return userSelection;
}

string Robot::toString() {
	return "NAME: " + name + "   ---   TYPE: " + type + "   ---   TASKS COMPLETED: " + to_string(tasksCompleted) + "\n";
}

void Robot::printName() {
	cout << "My name is: " << name << " My type is: " << type << endl;
}