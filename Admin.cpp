#include "Admin.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


// default constructor
Admin::Admin() :user()
{
	admin_name = "";
	email = "";
}

// parametrized constructor

Admin::Admin(string name, string e)
{
	admin_name = name;
	email = e;
}

// setters

void Admin::setname(string name)
{
	admin_name = name;
}
void Admin::setemail(string e)
{
	email = e;
}

// getters

string Admin::getname() const
{
	return admin_name;
}
string Admin::getemail() const
{
	return email;
}
void Admin::verifylogin()
{
	string admin_id, admin_password, admin_date, admin_user_name, admin_email;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\admin.txt");
	if (inputFile)
	{
		while (inputFile)
		{
			getline(inputFile, admin_id, '\n');
			getline(inputFile, admin_password, '\n');
			getline(inputFile, admin_date, '\n');
			getline(inputFile, admin_user_name, '\n');
			getline(inputFile, admin_email, '\n');
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (user_id == admin_id && user_password == admin_password)
	{
		for (int i = 1; i<100; i = i + 5)
		{
			cout << "Checking Credentials...";
			cout << i << endl;
			system("cls");
		}
		cout << " Login SucceFully " << endl;
		loginstatus = true;
	}
	else
	{
		for (int i = 1; i<100; i = i + 5)
		{
			cout << "Checking Credentials...";
			cout << i << endl;
			system("cls");
		}
		cout << "Invalid login attempt. Please try again.\n" << '\n';
		loginstatus = false;
		exit(0);
	}
}