#pragma once
#include <string>
#include<iostream>
using namespace std;

class Robot
{
public:

	Robot();
	//CREATES ROBOT CLASS
	Robot(string name, string type);
	//MENU DISPLAY
	int menu();
	//PRINT INFORMATION ABOUT LEADERBORADS AND ROBOTS NAME-TYPE
	string toString();
	void printName();
	//DISPLAY AND COMPLETES RANDOM TASKS
	void completeTask();
	//DISPLAY SCOREBOARD
	void scoreboards();
	void printInfo();
	//REFRESH RANDOMM LIST OF SELECTED ROBOT
	void refreshList();

	//FUNCTIONS TO COMPLETE SELECTED TASKS BY COUNTDOWN TIMER- RETURNS "COOLEAN FOR COMPLETE"
	bool doDishes();
	bool sweepHouse();
	bool doLaundry();
	bool takeOutRecyclin();
	bool makeSammish();
	bool mowTheLawn();
	bool rakeLeaves();
	bool dogBath();
	bool bakeCookies();
	bool washCar();

private:

	string name;
	string type;
	int tasksCompleted = 0;
	int totalPoints = 0;
	int randomNumbers[10];
	bool randomNumbersSelected = false;

	//BOOLEANS FOR TASKS ALREADY MADE
	bool dishesCompleted = false;
	bool sweepCompleted = false;
	bool lawndryCompleted = false;
	bool recyclingCompleted = false;
	bool sammichCompleted = false;
	bool mawLawnCompleted = false;
	bool leavesCompleted = false;
	bool dogBathCompleted = false;
	bool bakeCookiesCompleted = false;
	bool washCarCompleted = false;

	//DESCRIPTION OF TASKS, ESTIMATE TIME AND POINTS
	string description1 = "do the dishes";
	int eta1 = 1000;
	int pts1 = 300;
	string description2 = "sweep the house";
	int eta2 = 3000;
	int pts2 = 500;
	string description3 = "do the laundry";
	int eta3 = 10000;
	int pts3 = 600;
	string description4 = "take out the recycling";
	int eta4 = 4000;
	int pts4 = 1000;
	string description5 = "make a sammich";
	int  eta5 = 7000;
	int pts5 = 200;
	string  description6 = "mow the lawn";
	int  eta6 = 20000;
	int pts6 = 1500;
	string  description7 = "rake the leaves";
	int  eta7 = 1800;
	int pts7 = 800;
	string description8 = "give the dog a bath";
	int eta8 = 14500;
	int pts8 = 1200;
	string description9 = "bake some cookies";
	int eta9 = 8000;
	int pts9 = 1800;
	string  description10 = "wash the car";
	int  eta10 = 20000;
	int pts10 = 2000;

};
