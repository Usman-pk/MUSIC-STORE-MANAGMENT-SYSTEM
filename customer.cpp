#include "customer.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

customer::customer()
{
	customerName = "";
	customerAddress = "";
	customerEmail = "";
	creditinfo = "";
	accountBalance = 0.0;
}

// parametrized constructor

customer::customer(string name, string address, string email, string info, float balance)
{
	customerName = name;
	customerAddress = address;
	customerEmail = email;
	creditinfo = info;
	accountBalance = balance;
}

// setters

void customer::setname(string name)
{
	customerName = name;
}
void customer::setaddress(string address)
{
	customerAddress = address;
}
void customer::setemail(string email)
{
	customerEmail = email;
}
void customer::setcredit(string info)
{
	creditinfo = info;
}
void customer::setbalance(float balance)
{
	accountBalance = balance;
}

void customer::login()
{
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
	string *id = new string[length];
	string *password = new string[length];
	string *date = new string[length];
	string *name = new string[length];
	string *address = new string[length];
	string *email = new string[length];
	string *credit = new string[length];
	float *balance = new float[length];
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\customer.txt");
	if (inputFile)
	{
		for (int i = 0; i < length; i++)
		{
			inputFile >> id[i];
			inputFile >> password[i];
			inputFile >> date[i];
			inputFile >> name[i];
			inputFile >> address[i];
			inputFile >> email[i];
			inputFile >> credit[i];
			inputFile >> balance[i];
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	for (int i = 0; i < length; i++)
	{
		if (user_id == id[i] && user_password == password[i])
		{
			for (int i = 1; i<100; i = i + 5)
			{
				cout << "Checking Credentials...";
				cout << i << endl;
				system("cls");
			}
			loginstatus = true;
			cout << " Logged in SuccessFully " << endl;
			cout << "\t\t\t\t\t" << "  ****Your Account Info**** " << endl;
			cout << "\t\t\t _______________________________________________________________" << endl;
			cout << "\t\t\t|                                  \t\t\t\t| " << endl;
			cout << "\t\t\t\tYour ID :" << setw(23) << "[ " << id[i] << " ]" << endl;
			cout << "\t\t\t\tYour Password : " << setw(16) << "[ " << password[i] << " ]" << endl;
			cout << "\t\t\t\tRegistration Date : " << setw(12) << "[ " << date[i] << " ]" << endl;
			cout << "\t\t\t\tYour Name :  " << setw(19) << "[ " << name[i] << " ] " << endl;
			cout << "\t\t\t\tYour Address :  " << setw(16) << "[ " << address[i] << " ] " << endl;
			cout << "\t\t\t\tYour Email :  " << setw(18) << "[ " << email[i] << " ] " << endl;
			cout << "\t\t\t\tCredit-Card Number :  " << setw(10) << "[ " << credit[i] << " ]" << endl;
			cout << "\t\t\t\tTotal Balance :  " << setw(15) << "[ " << balance[i] << " ] " << endl;
			cout << "\t\t\t\t\t\t\t\t\t\n\t\t\t|_______________________________________________________________|" << endl << endl;
		}
	}
	if (loginstatus == false)
	{
		for (int i = 1; i<100; i = i + 5)
		{
			cout << "Checking Credentials...";
			cout << i << endl;
			system("cls");
		}
		cout << "Invalid login attempt. Please try again.\n" << '\n';
		loginstatus = false;
		system("pause");
		exit(0);
	}
}

// add customer

string customer::underscore_value(string text)
{
	int value = text.length();
	for (int i = 0; i <value; i++)
	{
		if (isspace(text[i]))
			text[i] = '_';
	}
	return text;
}

void customer::addcustomer()
{
	string cus_id, cus_password, cus_date, cus_name, cus_address, cus_email, cus_credit;
	float cus_balance;
	bool found = false;
	ofstream outputFile;
	outputFile.open("E:\\oop\\OOP\\OOP\\customer.txt", ios::in | ios::app | ios::out);
	if (outputFile.is_open())
	{
		// checking for valid ID 

		/*int count, length;
		string line;
		bool found = false;
		ifstream File;
		File.open("E:\\USMAN ALI\\3rd semester\\OOP\\c++ project\\OOP Project\\customer.txt");
		count = 0;
		while (getline(File, line))
		{
		count++;
		}
		File.close();
		length = count / 8;
		string *id = new string[length];
		string *password = new string[length];
		string *date = new string[length];
		string *name = new string[length];
		string *address = new string[length];
		string *email = new string[length];
		string *credit = new string[length];
		float *balance = new float[length];
		ifstream inputFile;
		inputFile.open("E:\\USMAN ALI\\3rd semester\\OOP\\c++ project\\OOP Project\\customer.txt");
		if (inputFile)
		{
		for (int i = 0; i < length; i++)
		{
		inputFile >> id[i];
		inputFile >> password[i];
		inputFile >> date[i];
		inputFile >> name[i];
		inputFile >> address[i];
		inputFile >> email[i];
		inputFile >> credit[i];
		inputFile >> balance[i];
		}
		inputFile.close();
		}
		else
		{
		cout << "Error In Opening File " << endl;
		exit(0);
		}*/
		cin.ignore();
		cout << "Enter the Following Data For Customer " << endl;
		cout << "Customer ID : ";
		getline(cin, cus_id);
		cus_id = underscore_value(cus_id);
		/*for (int i = 0; i < length; i++)
		{
		if (cus_id == id[i])
		{
		while (cus_id == id[i])
		{
		cout << "ID Already Exit!" << endl;
		cout << "Enter Another ID : ";
		cin >> cus_id;
		}
		}
		}*/
		cout << "Customer Password : ";
		getline(cin, cus_password);
		cus_password = underscore_value(cus_password);
		cout << "Registration Date : ";
		getline(cin, cus_date);
		cus_date = underscore_value(cus_date);
		cout << "Customer Name : ";
		getline(cin, cus_name);
		cus_name = underscore_value(cus_name);
		cout << "Customer Address : ";
		getline(cin, cus_address);
		cus_address = underscore_value(cus_address);
		cout << "Customer Email : ";
		getline(cin, cus_email);
		cus_email = underscore_value(cus_email);
		cout << "Credit Card Number : ";
		getline(cin, cus_credit);
		cus_credit = underscore_value(cus_credit);
		cout << "Customer Balance : ";
		cin >> cus_balance;

		// adding record to file

		outputFile << '\n' << cus_id << endl;
		outputFile << cus_password << endl;
		outputFile << cus_date << endl;
		outputFile << cus_name << endl;
		outputFile << cus_address << endl;
		outputFile << cus_email << endl;
		outputFile << cus_credit << endl;
		outputFile << cus_balance;

		outputFile.close();
		cout << "New Record Has Been Added " << endl;
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
}
