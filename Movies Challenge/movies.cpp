#include "movies.h"
#include <iostream>
#include "movie.h"
using namespace std;

bool movies::add_movie(const string& name, const string& rating, int watched)
{
	for (const movie& m : movies_list)
	{
		if (m.get_name() == name)
		{
			return false;
		}
	}
	movie temp{name, rating, watched};
	movies_list.push_back(temp);
	return true;
}
bool movies::increment_watched(const string& name)
{
	for (movie& m : movies_list)
	{
		if (m.get_name() == name)
		{
			m.increment_watched();
			return true;
		}
	}
	return false;
}
void movies::display() const
{
	if (movies_list.size() == 0)
	{
		cout << "No movies to display" << endl;
	}
	else
	{
		cout << "Movies List: " << endl;
		for (const movie& m : movies_list)
		{
			m.display();
		}
	}
}
