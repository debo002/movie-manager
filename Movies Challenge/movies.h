#pragma once
#include "movie.h"
#include <iostream>
#include <vector>
using namespace std;

class movies
{
	private:
		vector<movie> movies_list;

public:
	bool add_movie(const string&, const string&, int);
	bool increment_watched(const string&);
	void display() const;
};

