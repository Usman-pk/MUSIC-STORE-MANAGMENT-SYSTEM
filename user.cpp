#include "user.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
// default constructor
user::user()
{
	user_id = "";
	user_password = "";
	reg_date = "";
}

// parametrized constructor
user::user(string id, string password, string date)
{
	user_id = id;
	user_password = password;
	date = reg_date;
}

// setters

void user::setuserid(string id)
{
	user_id = id;
}
void user::setpassword(string password)
{
	user_password = password;
}
void user::setdate(string date)
{
	reg_date = date;
}

// getters

string user::getid() const
{
	return user_id;
}
string user::getpassword() const
{
	return user_password;
}
string user::getdate() const
{
	return reg_date;
}
