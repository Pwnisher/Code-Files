#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct studentGrade
{
	string lastName;
	string firstName;
	string middleName;
	float quiz1Score;
	float quiz1Grade;
	float quiz2Score;
	float quiz2Grade;
	float quizTotal;
	float exercisesGrade;
	float projectGrade;
	float semestralGrade;
	float equiGrade;
	string remarks;
};

void clrscr()
{
	cout << "\033[2J\033[1;1H";
}

void getch()
{
	system("read");
}

int numArrayStruct = 5;
struct studentGrade student[5];
bool passed;

void structMMC1()
{
	for (int n=0; n<numArrayStruct; n++)
	{
		cout << "Student" << n+1 << "'s Last Name: " << endl;
		cin >> student[n].lastName;
		cout << "Student" << n+1 << "'s First Name: " << endl;
		cin >> student[n].firstName;
		cout << "Student" << n+1 << "'s Middle Name: " << endl;
		cin >> student[n].middleName;
	}	
}

void structMMC2()
{	
	cout << "Last Name:" << setw(20) << "First Name:" << setw(20) << "Middle Name:" << endl << endl;
	for(int m=0; m<numArrayStruct; m++)
	{
		cout << student[m].lastName << setw(20) << student[m].firstName << setw(20) << student[m].middleName << endl;
	}
	passed = true;
}

void structMMC2modified()
{	
	cout << "No:" << setw(15) << "Last Name:" << setw(20) << "First Name:" << setw(20) << "Middle Name:" << setw(20) << "Semester Grade:" << setw(20) << "Equivalent Grade:" << setw(20) << "Remarks:" << endl << endl;
	for(int m=0; m<numArrayStruct; m++)
	{
		cout << m+1 << setw(15) << student[m].lastName << setw(20) << student[m].firstName << setw(20) << student[m].middleName << setw(20) << setprecision(4) << student[m].semestralGrade << setw(20) << student[m].equiGrade << setw(20) << student[m].remarks << endl;
	}
}

void structMMC3()
{
	int quiz1Over=10, quiz2Over=10;
	
	for(int z=0; z<numArrayStruct; z++)
	{
		cout << student[z].firstName << "'s Quiz 1 Score: " << endl;
		cin >> student[z].quiz1Score;
		cout << student[z].firstName << "'s Quiz 2 Score: " << endl;
		cin >> student[z].quiz2Score;
		cout << student[z].firstName << "'s Exercise Grade: " << endl;
		cin >> student[z].exercisesGrade;
		cout << student[z].firstName << "'s Project Grade: " << endl;
		cin >> student[z].projectGrade;		
	}
	
	for(int q=0; q<numArrayStruct; q++)
	{
		student[q].quiz1Grade = (student[q].quiz1Score / quiz1Over) * 100;
		student[q].quiz2Grade = (student[q].quiz2Score / quiz2Over) * 100;
		

		student[q].quizTotal = (student[q].quiz1Grade + student[q].quiz2Grade) / 2;

		student[q].semestralGrade = (student[q].quizTotal + student[q].exercisesGrade + student[q].projectGrade) / 3;
	}	
	
	for(int w=0; w<numArrayStruct; w++)
	{
		if(student[w].semestralGrade >= 97 && student[w].semestralGrade <= 100)
			student[w].equiGrade = 1.0;
		else if(student[w].semestralGrade >= 94 && student[w].semestralGrade <= 96)
			student[w].equiGrade = 1.25;
		else if(student[w].semestralGrade >= 91 && student[w].semestralGrade <= 93)
			student[w].equiGrade = 1.50;
		else if(student[w].semestralGrade >= 88 && student[w].semestralGrade <= 90)
			student[w].equiGrade = 1.75;
		else if(student[w].semestralGrade >= 85 && student[w].semestralGrade <= 87)
			student[w].equiGrade = 2.0;
		else if(student[w].semestralGrade >= 82 && student[w].semestralGrade <= 84)
			student[w].equiGrade = 2.25;
		else if(student[w].semestralGrade >= 79 && student[w].semestralGrade <= 81)
			student[w].equiGrade = 2.5;
		else if(student[w].semestralGrade >= 76 && student[w].semestralGrade <= 78)
			student[w].equiGrade = 2.75;
		else if(student[w].semestralGrade == 75)
			student[w].equiGrade = 3.0;
		else if(student[w].semestralGrade < 75)
			student[w].equiGrade = 5.0;
	}	
	
	for(int r=0; r<numArrayStruct; r++)
	{
		if(student[r].equiGrade != 5.0)
			student[r].remarks = "PASSED";
		else
			student[r].remarks = "FAILED";
	}
	
	cout << "Grades have been calculated" << endl;
}

void structMMC4(string search)
{
	bool yes = true;	
	for(int s=0; s<numArrayStruct; s++)
	{
		if(student[s].lastName == search)
		{
			cout << "Last Name:" << setw(20) << "First Name:" << setw(20) << "Semester Grade:" << setw(20) << "Equiv Grade:" << setw(20) << "Remarks:" << endl;
			cout << student[s].lastName << setw(20) << student[s].firstName << setw(20) << student[s].semestralGrade << setw(20) << student[s].equiGrade << setw(20) << student[s].remarks << endl;
			yes = false;
			break;
		}			
	}
	if(yes == true)
		cout << "No Records / Invalid Name" << endl;	
}

bool compare(studentGrade s1, studentGrade s2)
{
	return s1.lastName < s2.lastName;
}

void structMMC5()
{			
	sort(student, student+5, compare);
	cout << "Last Name has been sorted" << endl;
}
