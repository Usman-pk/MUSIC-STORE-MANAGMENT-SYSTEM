#pragma once
#ifndef MUSIC_STORE_H
#define MUSIC_STORE_H
#include <string>
using namespace std;

class music_store
{
protected:
	string song_id;
	string song_category;
	string song_type;
	string song_name;
	string song_artist;
	string song_year;
public:
	// default constructor
	music_store();
	music_store(string, string, string, string, string, string);
	void setid(string);
	void setcategory(string);
	void settype(string);
	void setname(string);
	void setartist(string);
	void setyear(string);
	void searchbyID();
	void searchbycategory();
	void searchbytype();
	void searchbyname();
	void searchbyartist();
	void searchbyyear();
	string underscore_value(string);
	void addmusic();
	void updatemusic();
	void deletemusic();
};

#endif
