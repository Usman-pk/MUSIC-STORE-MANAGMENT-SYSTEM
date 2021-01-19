#pragma once
#ifndef ORDER_H
#define ORDER_H
#include "customer.h"
#include <string>
using namespace std;
class order:public customer
{
protected:
	int order_id;
public:
	order();
	order(int);
	void setid(int);
	void all_music();
	void choose_order();
	void calculate();
};

#endif
