#include "movie.h"


movie::movie(string name_val, string rating_val, int watched_val)
{
	name = name_val;
	rating = rating_val;
	watched = watched_val;
}

void movie::increment_watched()
{
	watched++;
}

void movie::display() const
{
	cout << name << ", " << rating << ", " << watched << endl;
}

string movie::get_name() const
{
	return name;
}
