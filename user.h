#pragma once
#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class user
{
protected:
	string user_id;
	string user_password;
	string reg_date;
public:
	user();
	user(string, string, string);
	void setuserid(string);
	void setpassword(string);
	void setdate(string);
	string getid() const;
	string getpassword() const;
	string getdate() const;
};

#endif
