#include "Header.h"

void programMenu()
{
	int programChoice;
	do {
		clrscr();
		border();


		gotoxy(48, 8); SetColorAndBackground(15, 0);
		cout << "                           ";
		gotoxy(48, 9); SetColorAndBackground(15, 0);
		cout << "  [PLANT CARE GUIDE MENU]  ";
		gotoxy(48, 10); SetColorAndBackground(15, 0);
		cout << "                           ";
		gotoxy(40, 12); SetColorAndBackground(15, 0);
		cout << "[1]"; SetColorAndBackground(0, 15); cout << " - Plant Library and Watering Schedule";
		gotoxy(40, 14); SetColorAndBackground(15, 0);
		cout << "[2]"; SetColorAndBackground(0, 15); cout << " - Plant Check-Up";
		gotoxy(40, 16); SetColorAndBackground(15, 0);
		cout << "[3]"; SetColorAndBackground(0, 15); cout << " - Return";

		
		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> programChoice;

		switch (programChoice)
		{
			case 1:
			{
				int searchChoice=0;
				do {
						clrscr();
						border();

						gotoxy(50, 7); SetColorAndBackground(15, 0);
						cout << "                      ";
						gotoxy(50, 8); SetColorAndBackground(15, 0);
						cout << "  [SEARCHING METHOD]  ";
						gotoxy(50, 9); SetColorAndBackground(15, 0);
						cout << "                      ";

						gotoxy(22, 11); SetColorAndBackground(0, 15);
						cout << "[This option shows two types of searching method for the plant dictionary]";
						gotoxy(50, 13); SetColorAndBackground(15, 0);
						cout << "[1]"; SetColorAndBackground(0, 15); cout << " - Manual Search";
						gotoxy(50, 15); SetColorAndBackground(15, 0);
						cout << "[2]"; SetColorAndBackground(0, 15); cout << " - Recommend Search";
						gotoxy(50, 17); SetColorAndBackground(15, 0);
						cout << "[3]"; SetColorAndBackground(0, 15); cout << " - Return";
						

						gotoxy(5, 27); SetColorAndBackground(0, 9);
						cout << "INPUT:";
						gotoxy(12, 27); SetColorAndBackground(4, 7);
						cout << "           ";
						gotoxy(13, 27);
						cin >> searchChoice;

					switch (searchChoice)
					{
						case 1:	
						{
							assignment();
							searchfor();
							break;
						}
						case 2: 
						{
							assignment();
							recommend();
							break;
						}
					}
				} while (searchChoice < 3);
				break;
			}
			case 2:
			{
				checkUp();
				break;
			}
			default:
				gotoxy(5, 27); getch();
			break;
		}
	} while (programChoice < 3);
}

void creditsMenu()
{
	clrscr();
	border();

	gotoxy(10, 1); SetColorAndBackground(15, 0);
	cout << "\n\t\t                          [BACKGROUND OF THE APPLICATIION]                          ";
	SetColorAndBackground(0, 15); 
	cout << "\n\n\tDue to quarantine, there has been a shift in the work and learning environment of people. Those who are \n\tpracticing work-from-home and online learning have caught attention in the hobby of gardening or planting. \n\tThe term Plantito and Plantita has been coined by the netizens because of the sudden popularity \n\tof the said hobby. This pastime has been a stress-reliever for most. Because of the rising demand \n\tin planting, the demand for care information about these plants also has risen. ";
	SetColorAndBackground(15, 0);
	cout << "\n\n\t\t                            [PURPOSE OF THE APPLICATION]                            ";
	SetColorAndBackground(0, 15);
	cout << "\n\n\t- Plant Dictionary which helps user search for their plant manually according to their Plant Type and \n\tName or through a recommendation which shows user the applicable plants based on their care characteristics\n\t- Computing for the next watering schedule depending on plant typeand last date watered\n\t- A library for plant diseasesand pests which also includes an option for \n\tdetermining these disorders based on its symptoms on specific plant parts(e.g.Leaf, Roots, Stems)";
	SetColorAndBackground(15, 0);
	cout << "\n\n\t\t                          [OBJECTIVES OF THE APPLICATION]                           ";
	SetColorAndBackground(0, 15);
	cout << "\n\n\tThe objective of this application is to assist current Plantito and Plantita on their planting journey. \n\tIt also aims to further educate the future hobbyists about the care requirements of specific plants \n\tbefore they start. Plant Care Guide aims to promote the planting and gardening hobby while also doing \n\tit in the proper way.  ";
	gotoxy(5, 27); getch();
}

void startMenu()
{
	string start;
	do {
		clrscr();
		border();

		gotoxy(2, 3); SetColorAndBackground(15, 0);
		cout << "                                                                                                                    ";
		gotoxy(2, 4); 
		cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(187) << "      " << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(219) << char(187) << "  " << char(219) << char(219) << char(187) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "   " << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "   " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(187) << "   " << char(219) << char(219) << char(187) << char(219) << char(219) << char(187) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187);
		gotoxy(2, 5);
		cout << " " << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(186) << char(200) << char(205) << char(205) << char(219) << char(219) << char(201) << char(205) << char(205) << char(188) << "  " << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188) << "  " << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188) << " " << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(205) << char(188);
		gotoxy(2, 6);
		cout << " " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(186) << char(219) << char(219) << char(201) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(186) << "  " << char(200) << char(205) << char(188) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(186) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "    " << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(187) << " " << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "  ";
		gotoxy(2, 7);
		cout << " " << char(219) << char(219) << char(201) << char(205) << char(205) << char(205) << char(188) << " " << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << char(200) << char(219) << char(219) << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(186) << char(219) << char(219) << char(201) << char(205) << char(205) << char(219) << char(219) << char(187) << char(219) << char(219) << char(201) << char(205) << char(205) << char(188) << "    " << char(219) << char(219) << char(186) << "  " << char(200) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186) << char(219) << char(219) << char(201) << char(205) << char(205) << char(188) << "  ";
		gotoxy(2, 8);
		cout << " " << char(219) << char(219) << char(186) << "     " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << " " << char(200) << char(219) << char(219) << char(219) << char(186) << "   " << char(219) << char(219) << char(186) << "     " << char(200) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186) << char(219) << char(219) << char(186) << "  " << char(219) << char(219) << char(186) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187) << "  " << char(200) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(200) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(186) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(201) << char(188) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(187);
		gotoxy(2, 9);
		cout << " " << char(200) << char(205) << char(188) << "     " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188) << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(205) << char(188) << "   " << char(200) << char(205) << char(188) << "      " << char(200) << char(205) << char(205) << char(205) << char(205) << char(188) << " " << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188) << char(200) << char(205) << char(188) << "  " << char(200) << char(205) << char(188) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "   " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "  " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << " " << char(200) << char(205) << char(188) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << " " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
		gotoxy(2, 10);
		cout << "                                                                                                                    ";
		
		gotoxy(13, 13); SetColorAndBackground(0, 15);
		cout << "[ DABU, Althea V. | DECENA, Mark Angelo Q. | ENCINA, John Reign M. | BSIT 1-1 | FINAL PROJECT ]";
		gotoxy(3, 15);
		cout << "[This application guides plant owners about their plants' care specifications, diseases and schedule in watering]";

		gotoxy(35, 18); 
		cout << "  "; SetColorAndBackground(15, 0);  cout << "[START]"; SetColorAndBackground(0, 15); cout <<" - Start the Program";
		gotoxy(35, 19);
		SetColorAndBackground(15, 0); cout << "[CREDITS]"; SetColorAndBackground(0, 15); cout << " - Application Information and Details";
		gotoxy(35, 20);
		cout << "  "; SetColorAndBackground(15, 0); cout << "[LEAVE]"; SetColorAndBackground(0, 15); cout << " - Exit the Program";
		gotoxy(50, 22); SetColorAndBackground(15, 7);
		cout << "[ENTER YOUR CHOICE]";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           "; 
		gotoxy(13, 27); 
		cin >> start;


		

		for (int i = 0; i < start.length(); i++)
		{
			start[i] = (char)toupper(start[i]);
		}

		
		if (start == "START")
			programMenu();
		if (start == "CREDITS")
			creditsMenu();
		if (start == "LEAVE")
			exit(0);
	} while (start != "LEAVE");
}

int main()
{
	startMenu();
	return 0;
}