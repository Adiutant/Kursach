#pragma once
#include "header.h"
#include "fuel.h"
class fuel_station
{
protected:
	string city;
	string street;
	string budget;
	string storage_for_one_type;
	vector <fuel> Fuels;
	fuel fuels;
public:
	fuel_station() :
		city(""), street(""), budget(""), storage_for_one_type(""), Fuels() {};
	fuel_station(string c_city, string s_street, string b_budget, string s_storage_for_one_type, vector <fuel> f_fuels) {};
	void set_fuels(fuel f)
	{
		Fuels.push_back(f);
	}
	vector <fuel> get_fuels()
	{
		return Fuels;
	}
	fuel get_fuel(int x)
	{
		return Fuels[x];
	}
	void set_city(string c_city)
	{
		city = c_city;
	}
	string get_city()
	{
		return city;
	}
	void set_street(string s_street)
	{
		street = s_street;
	}
	void clear_fuel()
	{
		Fuels.clear();
	}
	string get_street()
	{
		return street;
	}
	void set_budget(string b_budget)
	{
		budget = b_budget;
	}
	string get_budget()
	{
		return budget;
	}
	void set_storage_for_one_type(string s_storage_for_one_type)
	{
		storage_for_one_type = s_storage_for_one_type;
	}
	string get_storage_for_one_type()
	{
		return storage_for_one_type;
	}

};

