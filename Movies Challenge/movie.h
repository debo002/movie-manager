#pragma once
#include <iostream>
#include <string>
using namespace std;
class movie
{
private :
	string name;
	string rating;
	int watched;

public:
	movie(string name_val, string rating_val, int watched_val);
	void increment_watched();
	void display() const;
	string get_name() const;
	



};

