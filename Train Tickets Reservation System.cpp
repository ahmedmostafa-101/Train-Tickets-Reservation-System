#include <iostream>
using namespace std;

struct chair {
	int num;
	bool reservation;
};
struct car {
	int id;
	chair seat[30];
};
struct train
{
	car c[10];
};
int main()
{
	cout << "*************************************************************" << endl;
	cout << "**********Welcome To The Tickets Reservation System********** " << endl;
	cout << "*************************************************************" << endl;
	cout << endl;
	cout << "Note : The departure station is Cairo and the train stops at Assiut's station..." << endl << endl;
	cout << "**Please Enter Integer Numbers Only**" << endl << endl;

	int choose, choise;                     //choose(for operation num)  choise(for exit or another operation)
	train t;
	bool available, exit = 0;                  //available(for seats)           exit(for choise) 
	for (int i = 0; i < 10; i++)                    // declare (car numbers & seats numbers & make all seats available)
	{
		t.c[i].id = i + 1;
		for (int j = 0; j < 30; j++)
		{
			t.c[i].seat[j].num = j + 1;
			t.c[i].seat[j].reservation = true;       //true=availabale
		}
	}
	int carnum, chairnum;
	do
	{
		cout << "Choose what you need from the menu please... " << endl;
		cout << "1-Reserve a ticket. " << endl;
		cout << "2-Cancel the reservation. " << endl;
		cout << "3-Check whether a specific car has available seat or not. " << endl;
		cout << "4-Check whether a specific seat is available or not. " << endl;
		cout << "5-Get the number of the available seats in specific car. " << endl;
		cout << "6-Show all the seats status of a specific car. " << endl;
		cout << "7-Exit. " << endl;
		cin >> choose;
		while (choose > 7 || choose < 1)
		{
			cout << "This number is not in this menu , please reenter the number of the operation. " << endl;
			cin >> choose;
		}
		cout << endl;
		switch (choose)
		{
		case (1): {
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			cout << "Please Enter the number of the seat : ";
			cin >> chairnum;
			while (chairnum > 30 || chairnum < 1)
			{
				cout << "The car has only 30 seats , Enter the number of the seat again." << endl;
				cin >> chairnum;
			}
			if (t.c[carnum - 1].seat[chairnum - 1].reservation == false)  //carnum & seatnum start from 1...and array indx starts from 0
				cout << "Sorry this seat is not available" << endl;
			else
			{
				t.c[carnum - 1].seat[chairnum - 1].reservation = false;
				cout << "*Reservation Done*" << endl;
			}
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case 2:
		{
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			cout << "Please Enter the number of the seat : ";
			cin >> chairnum;
			while (chairnum > 30 || chairnum < 1)
			{
				cout << "The car has only 30 seats , Enter the number of the seat again." << endl;
				cin >> chairnum;
			}
			if (t.c[carnum - 1].seat[chairnum - 1].reservation == true)
				cout << "This seat is not reserved" << endl;
			else
			{
				t.c[carnum - 1].seat[chairnum - 1].reservation = true;
				cout << "*Reservation Canceled*" << endl;
			}
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case (3):
		{
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			available = 0;
			for (int j = 0; j < 30; j++)
			{
				if (t.c[carnum - 1].seat[j].reservation == true)
				{
					cout << "There is a available seat" << endl;
					available = 1;
					break;
				}
			}
			if (available == 0)
				cout << "Sorry there is no available seat" << endl;
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case 4:
		{
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			cout << "Please Enter the number of the seat : ";
			cin >> chairnum;
			while (chairnum > 30 || chairnum < 1)
			{
				cout << "The car has only 30 seats , Enter the number of the seat again." << endl;
				cin >> chairnum;
			}
			if (t.c[carnum - 1].seat[chairnum - 1].reservation == false)
				cout << "Sorry this seat is not available" << endl;
			else
			{
				t.c[carnum - 1].seat[chairnum - 1].reservation = false;
				cout << "This seat is available " << endl;
			}
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case 5:
		{
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			int ctr = 0;     //ctr==counter
			for (int j = 0; j < 30; j++)
			{
				if (t.c[carnum - 1].seat[j].reservation == true)
					ctr++;
			}
			cout << "The Number of the available seats in car number " << carnum << " is " << ctr << endl;
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case 6:
		{
			cout << "Please Enter the car number : ";
			cin >> carnum;
			while (carnum > 10 || carnum < 1)
			{
				cout << "The train has only 10 cars , Enter the number of the car again." << endl;
				cin >> carnum;
			}
			for (int j = 0; j < 30; j++)
			{
				cout << "The seat number " << t.c[carnum - 1].seat[j].num << " is :";
				if (t.c[carnum - 1].seat[j].reservation == true)
					cout << " ->Available<- " << endl;
				else
					cout << " ->NOT Available<- " << endl;
			}
			cout << "1-Exit || 2-Another operation " << endl;
			cin >> choise;
			while (choise != 1 && choise != 2)
			{
				cout << "You must enter number |(1) to exit or (2) for another operation|" << endl;
				cin >> choise;
			}
			if (choise == 1) {
				cout << "Thank you for using our service..." << endl;
				exit = 1;
			}
			else if (choise == 2)
				exit = 0;
			break;
		}
		case 7:
		{
			cout << "Thank you for using our service..." << endl;
			return 0;
		}
		}
	} while (exit == 0);
	return 0;
}