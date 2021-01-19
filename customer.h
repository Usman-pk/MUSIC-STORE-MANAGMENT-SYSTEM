#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "user.h"
#include <string>
using namespace std;

class customer:public user
{
private:
	string customerName;
	string customerAddress;
	string customerEmail;
	string creditinfo;
	float accountBalance;
	bool loginstatus;
public:

	customer();
	customer(string, string, string, string, float);
	void setname(string);
	void setaddress(string);
	void setemail(string);
	void setcredit(string);
	void setbalance(float);
	void login();
	string underscore_value(string);
	void addcustomer();
};

#endif

