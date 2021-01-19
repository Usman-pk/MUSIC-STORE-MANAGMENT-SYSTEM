#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
#include <string>
using namespace std;

class Admin :public user
{
private:
	string admin_name;
	string email;
	bool loginstatus;
public:

	Admin();
	Admin(string, string);
	void setname(string);
	void setemail(string);

	string getname() const;
	string getemail() const;
	void verifylogin();
};

#endif

