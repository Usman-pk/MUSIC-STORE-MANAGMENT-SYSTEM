#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "user.h"
#include "Admin.h"
#include "music_store.h"
#include "customer.h"
#include "order.h"

using namespace std;

string underscore(string text)
{
	int value = text.length();
	for (int i = 0; i <value; i++)
	{
		if (isspace(text[i]))
			text[i] = '_';
	}
	return text;
}

int main()
{
	system("color 0e");

	// welcome message
	cout << "\t\t\t*****************************************************************" << endl;
	cout << "\t\t\t*\t                                                        *" << endl;
	cout << "\t\t\t*\t **** Welcome To Music Store Managment System ***       *" << endl;
	cout << "\t\t\t*\t                                                        *" << endl;
	cout << "\t\t\t* Are You:                                                      *      " << endl;
	cout << "			*    	                                                        *" << endl;
	cout << "\t\t\t*\t|  1) Admin   |                                         *" << endl;
	cout << "			*    	                                                        *" << endl;
	cout << "\t\t\t*\t|  2) Customer|                                         *" << endl;
	cout << "			*    	                                                        *" << endl;
	cout << "\t\t\t*\t|  3) Exit    |                                         *" << endl;
	cout << "			*    	                                                        *" << endl;
	cout << "\t\t\t*****************************************************************" << endl;
	cout << endl;

	int choice;
	cout << "***********************" << endl << endl;
	cout << "Enter Your Choice : ";
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "Enter Right Choice : ";
		cin >> choice;
	}
	cout << "\n***********************" << endl;

	string id, password, registration_date, name, email, s_id, category, type, s_name,
		sg_name, artist, year;
	char ch;
	Admin object_1;
	music_store object_2;
	system("Color 47");
	switch (choice)
	{
	case 1:
		cin.ignore();
		cout << "Enter Admin ID # ";
		getline(cin, id);
		object_1.setuserid(id);
		cout << "Enter Admin Password # ";
		getline(cin, password);
		object_1.setpassword(password);
		object_1.verifylogin();
		do
		{
			system("Color 40");
			cout << "**********************************" << endl << endl;
			cout << "\t1 : Logout from Music Store" << endl;
			cout << "\t2 : Go To Music Store" << endl;
			cout << "\n**********************************" << endl;
			int value, number;
			cout << "\n Enter your Choice : ";
			cin >> value;
			while (value != 1 && value != 2)
			{
				cout << "Enter Right Value : ";
				cin >> value;
			}
			switch (value)
			{
			case 1:
				system("cls");
				main();
				break;
			case 2:

				cout << "\t\t\t\t\t" << "  *** Welcome To CRUD ***" << endl;
				cout << "\t\t\t*****************************************************************" << endl;
				cout << "\t\t\t*\t\t" << "             VIEW\t\t\t\t* " << endl;
				cout << "\t\t\t_________________________________________________________________" << endl;
				cout << "\t\t\t*\t1 : by ID\t\t\t\t\t\t* " << endl;
				cout << "\t\t\t*\t2 : by Category\t\t\t\t\t\t* " << endl;
				cout << "\t\t\t*\t3 : by Type\t\t\t\t\t\t* " << endl;
				cout << "\t\t\t*\t4 : by Name\t\t\t\t\t\t* " << endl;
				cout << "\t\t\t*\t5 : by Artist\t\t\t\t\t\t* " << endl;
				cout << "\t\t\t*\t6 : by Released Year\t\t\t\t\t*" << endl;
				cout << "\t\t\t*\t7 : Add Music\t\t\t\t\t\t*" << endl;
				cout << "\t\t\t*\t8 : Update Music\t\t\t\t\t*" << endl;
				cout << "\t\t\t*\t9 : Delete Music\t\t\t\t\t*" << endl;
				cout << "\t\t\t*\t                 \t\t\t\t\t*\n\t\t\t*****************************************************************" << endl << endl;
				cout << "Enter Your Choice : ";
				cin >> number;
				while (number < 1 && number > 9)
				{
					cout << "Enter Right Choice : ";
					cin >> number;
				}
				system("Color 0d");
				switch (number)
				{
				case 1:
					system("Color 90");
					cin.ignore();
					cout << "Enter Song ID : ";
					getline(cin, s_id);
					object_2.setid(s_id);
					object_2.searchbyID();
					break;
				case 2:
					system("Color 5f");
					cin.ignore();
					cout << "Enter Song Category : ";
					getline(cin, category);
					object_2.setcategory(category);
					object_2.searchbycategory();
					break;
				case 3:
					system("Color e0");
					cin.ignore();
					cout << "Enter Song Type : ";
					getline(cin, type);
					object_2.settype(type);
					object_2.searchbytype();
					break;
				case 4:
					system("Color de");
					cin.ignore();
					cout << "Enter Song Name : ";
					getline(cin, s_name);
					s_name = underscore(s_name);
					object_2.setname(s_name);
					object_2.searchbyname();
					break;
				case 5:
					system("Color 60");
					cin.ignore();
					cout << "Enter Song Artist : ";
					getline(cin, artist);
					artist = underscore(artist);
					object_2.setartist(artist);
					object_2.searchbyartist();
					break;
				case 6:
					system("Color 06");
					cin.ignore();
					cout << "Enter Song Year Released : ";
					getline(cin, year);
					object_2.setyear(year);
					object_2.searchbyyear();
					break;
				case 7:
					system("Color 01");
					object_2.addmusic();
					break;
				case 8:
					system("Color 40");
					cin.ignore();
					cout << "Enter the song ID that you want to update : ";
					getline(cin, s_id);
					object_2.setid(s_id);
					object_2.updatemusic();
					break;
				case 9:
					cin.ignore();
					cout << "Enter the song ID that you want to Delete : ";
					getline(cin, s_id);
					object_2.setid(s_id);
					object_2.deletemusic();
				default:
					break;
				}
				break;
			default:
				break;
			}
			cout << endl;
			cout << "Do You Want To Continue Again (y/n)? : ";
			cin >> ch;
			system("cls");
		} while (ch == 'Y' || ch == 'y');
		main();
		break;
	case 2:
		break;
	case 3:
		cout << "Program Terminating..." << endl;
		exit(0);
		break;
	default:
		break;
	}


	// all customer working start from here

	string cus_id, cus_password;
	int option, option_value , order_music;
	char ch_value;
	customer object_3;
	order object_4;
	system("Color 0e");
	cout << "\t\t\t\t ***** CUSTOMER PANNEL ***** " << endl << endl;
	cout << "\t\t\t 1) Register " << endl << endl;
	cout << "\t\t\t 2) Login " << endl << endl;

	cout << "Enter your Choice : ";
	cin >> option;
	while (option != 1 && option != 2)
	{
		cout << "Enter Right Option : ";
		cin >> option;
	}
	system("Color 7c");
	switch (option)
	{
	case 1:
		system("Color 27");
		object_3.addcustomer();
		main();
		break;
	case 2:
		system("Color 06");
		cin.ignore();
		cout << "Enter Your ID : ";
		getline(cin, cus_id);
		cus_id = underscore(cus_id);
		object_3.setuserid(cus_id);
		cout << "Enter Your Password : ";
		getline(cin, cus_password);
		cus_password = underscore(cus_password);
		object_3.setpassword(cus_password);
		object_3.login();
		do
		{
			system("Color 27");
			cout << "**********************************" << endl << endl;
			cout << "\t1 : Logout from Music Store" << endl;
			cout << "\t2 : Go for Order" << endl;
			cout << "\n**********************************" << endl << endl;
			cout << "Enter Your choice : ";
			cin >> option_value;
			while (option_value != 1 && option_value != 2)
			{
				cout << "Enter Right Choice : ";
				cin >> option_value;
			}
			system("Color f0");
			switch (option_value)
			{
			case 1:
				system("cls");
				main();
				break;
			case 2:
				cout << "Enter Any Key To See Our Store " << endl;
				system("pause");
				cout << "\n***Here Is Our Music Store***" << endl;
				object_4.all_music();
				cout << "\nUnit Cost of each song = 250 " << endl << endl;
				cout << "Enter The Number Of Song : ";
				cin >> order_music;
				object_4.setid(order_music);
				object_4.choose_order();
				object_4.calculate();
				break;
			default:
				break;
			}
			cout << endl;
			cout << "Do You Want To Continue Again (y/n)? : ";
			cin >> ch_value;
			system("cls");
		} while (ch_value == 'Y' || ch_value == 'y');
		main();
		break;
	default:
		break;
	}
	system("pause");
}