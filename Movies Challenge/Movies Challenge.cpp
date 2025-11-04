#include <iostream>
#include <string>
#include <vector>
#include "movies.h"
using namespace std;

//global variable
movies my_movies;


int get_choice()
{
	int choice;
	cin >> choice;
	return choice;
}
void case_1() {
	string name, rating;
	int watched;
	cout << "Enter movie name: ";
	cin >> ws;
	getline(cin, name);
	cout << "Enter movie rating: ";
	getline(cin, rating);
	cout << "Enter number of times watched: ";
	cin >> watched;
	if (my_movies.add_movie(name, rating, watched))
	{
		cout << "Movie added successfully!" << endl;
	}
	else
	{
		cout << "Movie already exists!" << endl;
	}
}
void case_2() {
	string name;
	cout << "Enter movie name to increment watched: ";
	cin >> ws;
	getline(cin, name);
	if (my_movies.increment_watched(name))
	{
		cout << "Watched count incremented!" << endl;
	}
	else
	{
		cout << "Movie not found!" << endl;
	}
}
void case_3() {
	my_movies.display();
}
void case_4(bool &exit_program) {
	exit_program = true;
	cout << "Exiting program." << endl;
}

void switch_case(int choice, bool &exit_program) {
	switch (choice)
	{
	case 1:
		case_1();
		break;
	case 2:
		case_2();
		break;
	case 3:
		case_3();
		break;
	case 4:
		case_4(exit_program);
		break;

	default:
		cout << "Invalid choice. Please try again." << endl;
		break;
	}
}
void display_menu(bool& exit_program)
{
	cout << "Menu: " << endl;
	cout << "1. Add Movie" << endl;
	cout << "2. Increment Watched" << endl;
	cout << "3. Display Movies" << endl;
	cout << "4. Exit" << endl;
	int choice = get_choice();
	switch_case(choice, exit_program);


}



int main()
{
	bool exit_program = false;
	
	while (!exit_program)
	{
		display_menu(exit_program);
	}
	return 0;
}

