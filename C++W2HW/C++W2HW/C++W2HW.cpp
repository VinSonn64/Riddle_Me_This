// C++W2HW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Stores how many correct answers and questions (x) were made
float correct;
int x;

//function takes in both question and answer and displays them
//funstion also compares your answer with the correct one. If the same add one correct point.
string AskQuestion(string Riddle, string RiddleAnswer)
{
	string answer;
	cout << Riddle << endl;
	cin >> answer;
	if (answer == RiddleAnswer)
	{
		correct += 1;
	}
	return "The answer was " + RiddleAnswer;
	
}

float GetPercentCorrect(float TotalQuestions, float TotalCorrect)
{
	float percentage;
	percentage = (TotalCorrect / TotalQuestions)*100;
	
	return percentage;
}


int _tmain(int argc, _TCHAR* argv[])
{
	//Adding more questions and answers can update the score.
	string Question[] = 
	{ 
		/*Question 1*/ "The more of it you take, the more you leave behind. What are they?  ",
		/*Question 2*/ "Feed me and I live, yet give me a drink and I shall die. What am I?  ",
		/*Question 3*/ "I am lighter than a feather, yet no man can hold me for very long. What am I?  "
	};

	string answer[] = 
	{
		/*Answer1*/ "footsteps",
		/*Answer2*/ "fire",
		/*Answer3*/ "breath"
	};


	//Stores your name
	string name;
	cout << "What is your name?  ";
	cin >> name;
	cout << endl << "Hello " + name << ", let see if you can answer these riddles."<< endl<<endl;
	
	//for loop updates current question and answer, and sets maximum number of questions
	for (x = 0; x<3; x++)
	{
		Question[x];
		answer[x];
		cout << AskQuestion(Question[x],answer[x]) << endl<< endl;
	}


	cout << endl << name << ", You got " << GetPercentCorrect(x,correct) << "% correct.";
	
	system("Pause");
	cin.get();
	return 0;
}

