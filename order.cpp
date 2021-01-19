#include "order.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

order::order():customer()
{
	order_id = 0;
}
order::order(int id)
{
	order_id = id;
}

void order::setid(int id)
{
	order_id = id;
}

// function to print all music

void order::all_music()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			cout << endl << "Music " << endl << endl;
			cout << "ID # " << id << endl;
			cout << "Song Category : " << category << endl;
			cout << "Song Type : " << type << endl;
			cout << "Song Name : " << name << endl;
			cout << "Song Artist : " << artist << endl;
			cout << "Released Year : " << year << endl;
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		system("pause");
		exit(0);
	}
}

// function for choosing order

void order::choose_order()
{
	string id, category, type, name, artist, year , music_id;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	bool found = false;
	cout << "Enter The Music ID That you want to Buy " << endl;
	for (int i = 0; i < order_id; i++)
	{
		cout << "Music ID " << i + 1 << " : ";
		cin.ignore();
		getline(cin, music_id);
		if (inputFile.is_open())
		{
			while (!inputFile.eof())
			{
				getline(inputFile, id, '\n');
				getline(inputFile, category, '\n');
				getline(inputFile, type, '\n');
				getline(inputFile, name, '\n');
				getline(inputFile, artist, '\n');
				getline(inputFile, year, '\n');
				if (id == music_id)
				{
					found = true;
				}
			}
			if(found == false)
			{
				cout << "Song Related To ID No " << music_id << " Not Found!" << endl;
				cout << "Try Again Program terminating..." << endl;
				system("pause");
				exit(0);
			}
		}
		else
		{
			cout << "Error In Opening File " << endl;
			system("pause");
			exit(0);
		}
	}
	inputFile.close();
}

// function for calculating price of music

void order::calculate()
{
	int price;
	price = 250 * order_id;
	cout << "Your Total Price : " << price << endl;
	cout << "\n*** Thanku For Choosing Us *** " << endl;

	int count, length;
	string line;
	bool found = false;
	ifstream File;
	File.open("E:\\oop\\OOP\\OOP\\customer.txt");
	count = 0;
	while (getline(File, line))
	{
		count++;
	}
	File.close();
	length = count / 8;
	string id, password, date, name, city, email, credit;
	string *cus_id = new string[length];
	string *cus_password = new string[length];
	string *cus_date = new string[length];
	string *cus_name = new string[length];
	string *cus_city = new string[length];
	string *cus_email = new string[length];
	string *cus_credit = new string[length];
	int *cus_amount = new int[length];
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\customer.txt");
	if (inputFile.is_open())
	{
		for (int i = 0; i < length; i++)
		{
			inputFile >> cus_id[i];
			inputFile >> cus_password[i];
			inputFile >> cus_date[i];
			inputFile >> cus_name[i];
			inputFile >> cus_city[i];
			inputFile >> cus_email[i];
			inputFile >> cus_credit[i];
			inputFile >> cus_amount[i];
		}
		ofstream File;
		File.open("E:\\oop\\OOP\\OOP\\customer.txt", std::ofstream::out | std::ofstream::trunc);
		File.close();
		for (int i = 0; i < length; i++)
		{
			ofstream outputFile;
			outputFile.open("E:\\oop\\OOP\\OOP\\customer.txt", ios::app);
			if (cus_id)
			{
				cus_amount[i] = cus_amount[i] - price;
				outputFile << cus_id[i] << '\n';
				outputFile << cus_password[i] << '\n';
				outputFile << cus_date[i] << '\n';
				outputFile << cus_name[i] << '\n';
				outputFile << cus_city[i] << '\n';
				outputFile << cus_email[i] << '\n';
				outputFile << cus_credit[i] << '\n';
				outputFile << cus_amount[i] << '\n';
				cout << "Record Has Been Updated !" << endl;
			}
			else
			{
				outputFile << cus_id[i] << '\n';
				outputFile << cus_password[i] << '\n';
				outputFile << cus_date[i] << '\n';
				outputFile << cus_name[i] << '\n';
				outputFile << cus_city[i] << '\n';
				outputFile << cus_email[i] << '\n';
				outputFile << cus_credit[i] << '\n';
				outputFile << cus_amount[i] << '\n';
			}
			outputFile.close();
		}
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
}