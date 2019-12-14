#pragma once
#include "header.h"
 class fuel
{
protected:
	string type;
	string volume;
	string seller_code;
	string cost;
	bool sold;
public:
	fuel() :
		type(""), volume(""), seller_code(""),cost(""),sold(false) {};
	fuel(string t_type, int v_volume, string s_seller_code,string c_cost,string s_sold ) {};
	void set_type(string t_type)
	{
		type = t_type;
	}
	string get_type()
	{
		return type;
	}
	void set_volume(string v_volume)
	{
		volume = v_volume;
	}
	string get_volume()
	{
		return volume;
	}

	void set_seller_code (string s_seller_code)
	{
		seller_code = s_seller_code;
	}
	string get_seller_code()
	{
		return seller_code;
	}
	void set_cost(string c_cost)
	{
		cost = c_cost;
	}
	string get_cost()
	{
		return cost;
	}
	void set_sold(bool s_sold)
	{
		sold = s_sold;

	}
	bool get_sold()
	{
		return sold;
	}
};

