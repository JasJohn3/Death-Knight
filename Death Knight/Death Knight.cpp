// Death Knight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "Player.h"
#include "Mage.h"
int Dice_Roll();
void Intro();
void Profile();
string CharacterName(string character_name);
using namespace std;
int main()
{
	string character_name;
	//User Menu Assignment requirement(1)
	cout << "1. Introduction." << endl;
	cout << "2. Create a User Profile." << endl;
	cout << "3. Play Game." << endl;
	cout << "4. Quit." << endl << endl;


	cout << "Please Enter your selection: " << flush;

	int user_input;
	cin >> user_input;
	cout << endl;
	switch (user_input)
	{
	case 1:
		//Final Assignment requirement(2)
		cout << "\nIntroduction." << endl << endl;
		Intro();
		main();
		break;
	case 2:
		cout << "Create a User Profile" << endl << endl;
		Profile();
		main();
		break;
	case 3:
		cout << "Loading Game" << endl << endl;
		system("cls");
		break;
	case 4:
		cout << "Exit" << endl << endl;
		exit(0);
	default:
		cout << "Invalid Selection.  Returning to Main Menu." << endl;
		break;
	}

	character_name = CharacterName(character_name);
	Player p = Player(character_name);
	Mage M = Mage("Mage");
	std::cout << "Your Character Name is " << p.GetName() << endl;
	int damage;
	bool victory_condition=true;
	do
	{
		
		
		std::cout << "\nYour Health is " << p.GetHealth() << endl<<endl;
		cout << "Press Enter to roll the dice for your attack." << endl;
		std::system("pause");
		cout << "You attack for: " << flush;
		damage=Dice_Roll();
		cout << damage << " Damage" << endl<<endl;
		M.Damage(damage);
		system("pause");
		cout << "\nBoss Health is " << M.GetHealth() << endl<<endl;
		damage = Dice_Roll();
		cout << "Deadly boss attacks for: "<<endl<<endl;
		cout << damage << " Damage" << endl;
		p.Damage(damage);
		if (p.GetHealth() <= 0)
		{
			cout << "You have died.  Thank you for playing." << endl;

			victory_condition = false;
		}
		else if (M.GetHealth() <= 0)
		{
			cout << "You have defeated the deadly boss.  Thank you for playing." << endl;

			victory_condition = false;
		}


	} while (victory_condition);
	std::system("pause");
	main();


	return 0;
}
int Dice_Roll()
{
	srand(time(0));
	int dice_roll = (rand() % 6) + 1;
	return dice_roll;
}
void Intro() {
	//basic introduction
	// Final Assignment requirement(2)
	std::cout << "Welcome to Death Knight.  This is a game based on Dice Rolls."<<endl;  
	cout<<"The Player will roll their dice and determine how much damage they do to the enemy." << endl;
	std::cout << "You're Character is a Death Knight.  You will face enemies in a duel." << endl<<endl;
	system("pause");
	
	system("cls");
}
void Profile()
{
	//Final Assignment requirement(9)
	ofstream Output_Profile("Profile.txt");
	ifstream Input_Profile("Profile.txt");
	
	//takes user input and stores it in a txt file.
	string first_name;
	cout << "Please Enter your First Name: " << flush;
	cin>>first_name;
	Output_Profile << "First Name: " << first_name << endl;
	string middle_name;
	cout << "Please Enter your Middle Name: " << flush;
	cin>>middle_name;
	Output_Profile << "Middle Name: " << middle_name << endl;
	string last_name;
	cout << "Please Enter your Middle Name: " << flush;
	cin>>last_name;
	Output_Profile << "Last Name: " << last_name << endl;
	string user_name;
	cout << "Please create a user name for your account: " << flush;
	cin>>user_name;
	Output_Profile << "User Name: " << user_name << endl;
	/*Can't figure out the logic for this portion.  I want to create a file that stores a username.  Then I want to run a check to see if the Username already exists.
	As discovered previously, the find() function does not seem to work in my programs.  I will be excluding this feature for now unless I can find a way to solve this logic problem.
	Instead, I will just create a txt file with the user's profile data.
	
		ofstream("User_Names.txt");
	ifstream("User_Names.txt");
	
	string user_name;
	cout << "Please create a user name for your account: " << flush;
	getline(cin, user_name);

	vector<string> userNames;
	vector<string>::iterator iterator;

	for (iterator=userNames.begin();iterator!=userNames.end();iterator++)
	{

	}
	
	*/

}

string CharacterName(string character_name)
{
	
	vector<string> user_data;//Final Assignment requirement(3)
	vector<string>::iterator iterator;//Final Assignment requirement(4)
	bool exit = true;
	do
	{
		char Leave_Loop;
		std::cout << "Please Enter a Character name: " << flush;
		std::cin >> character_name;
		user_data.push_back(character_name);


		/*

		function does not work.  Removing from the program to continue work.

		Function was designed to search through the Vector user_data and compare if the user input already exists.

		The function worked correctly the first time it was compiled and now no longer works.  I am removing to continue with the build.

		if (find(user_data.begin(), user_data.end(), user_input)!=user_data.end())
		{
			user_data.pop_back();
			cout << "User Name already Exists" << endl;
		}
		else{cout << "New User Name Created: " << user_input << endl;}

		Function always returns true.  Uncertain as to why?

		iterator = find(user_data.begin(), user_data.end(), user_input);
		if ( iterator != user_data.end())
		{
			user_data.pop_back();
			cout << "User Name already Exists" << endl;
		}
		lse { cout << "New User Name Created: " << user_input << endl; }

		Third and final attempt.  Erases all data in the vector always returns true.
		auto it = find(user_data.begin(), user_data.end(), user_input);
		if (it != user_data.end())
			user_data.erase(it);

		*/
		std::cout << "Would you like to enter another name (Y or N): " << flush;
		std::cin >> Leave_Loop;
		if (Leave_Loop == 'y' || Leave_Loop == 'Y')
		{
			exit = false;
		}
		else if (Leave_Loop == 'n' || Leave_Loop == 'N')
		{
			exit = true;
		}
		else { std::cout << "You entered invalid information!" << endl; }

	} while (exit != true);
	for (iterator = user_data.begin(); iterator != user_data.end(); iterator++)
	{
		std::cout << *iterator << endl;
	}
	return character_name;
}

