#include "music_store.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// default constructor
music_store::music_store()
{
	song_id = "";
	song_category = "";
	song_type = "";
	song_name = "";
	song_artist = "";
	song_year = "";
}

// parametrzed constructor

music_store::music_store(string id, string category, string type, string name,
	string artist, string year)
{
	song_id = id;
	song_category = category;
	song_type = type;
	song_name = name;
	song_artist = artist;
	song_year = year;
}

// setters
void music_store::setid(string id)
{
	song_id = id;
}
void music_store::setcategory(string category)
{
	song_category = category;
}
void music_store::settype(string type)
{
	song_type = type;
}
void music_store::setname(string name)
{
	song_name = name;
}
void music_store::setartist(string artist)
{
	song_artist = artist;
}
void music_store::setyear(string year)
{
	song_year = year;
}

//Song search by ID

void music_store::searchbyID()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (id == song_id)
			{
				found = true;
				cout << "Found Sucessfully..." << endl;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To ID No " << song_id << " Not Found!" << endl;
	}
}

// search by category

void music_store::searchbycategory()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (category == song_category)
			{
				found = true;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
				cout << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To Category " << song_category << " Not Found!" << endl;
	}
}

// search by type

void music_store::searchbytype()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (type == song_type)
			{
				found = true;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
				cout << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To Type " << song_type << " Not Found!" << endl;
	}
}

// search by name

void music_store::searchbyname()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (name == song_name)
			{
				found = true;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
				cout << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To Year " << song_name << " Not Found!" << endl;
	}
}

// search by artist

void music_store::searchbyartist()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (artist == song_artist)
			{
				found = true;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
				cout << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To Artist " << song_artist << " Not Found!" << endl;
	}
}

// search by year

void music_store::searchbyyear()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			getline(inputFile, id, '\n');
			getline(inputFile, category, '\n');
			getline(inputFile, type, '\n');
			getline(inputFile, name, '\n');
			getline(inputFile, artist, '\n');
			getline(inputFile, year, '\n');
			if (year == song_year)
			{
				found = true;
				cout << "ID # " << id << endl;
				cout << "Song Category : " << category << endl;
				cout << "Song Type : " << type << endl;
				cout << "Song Name : " << name << endl;
				cout << "Song Artist : " << artist << endl;
				cout << "Released Year : " << year << endl;
				cout << endl;
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
	if (found == false)
	{
		cout << "Song Related To Year " << song_year << " Not Found!" << endl;
	}
}

// admin add music
string music_store::underscore_value(string text)
{
	int value = text.length();
	for (int i = 0; i <value; i++)
	{
		if (isspace(text[i]))
			text[i] = '_';
	}
	return text;
}

// here i use ios :: app it's mean we can add music at the end of our file 
void music_store::addmusic()
{
	string id, category, type, name, artist, year;
	bool found = false;
	ofstream outputFile;
	outputFile.open("E:\\oop\\OOP\\OOP\\music.txt", ios::in | ios::app | ios::out);
	if (outputFile.is_open())
	{
		cin.ignore();
		cout << "Enter the Following Data For Music " << endl;
		cout << "Music ID : ";
		getline(cin, id);
		id = underscore_value(id);
		cout << "Music Category : ";
		getline(cin, category);
		category = underscore_value(category);
		cout << "Music Type : ";
		getline(cin, type);
		type = underscore_value(type);
		cout << "Music Name : ";
		getline(cin, name);
		name = underscore_value(name);
		cout << "Music Artist : ";
		getline(cin, artist);
		artist = underscore_value(artist);
		cout << "Music Year : ";
		getline(cin, year);
		year = underscore_value(year);

		outputFile << '\n' << id << endl;
		outputFile << category << endl;
		outputFile << type << endl;
		outputFile << name << endl;
		outputFile << artist << endl;
		outputFile << year;

		cout << "New Record Has Been Added " << endl;
		outputFile.close();
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
}

void music_store::updatemusic()
{
	int count, length, choice;
	string line;
	bool found = false;
	ifstream File;
	File.open("E:\\oop\\OOP\\OOP\\music.txt");
	count = 0;
	while (getline(File, line))
	{
		count++;
	}
	File.close();
	length = count / 6;
	string id, category, type, name, artist, year;
	string *music_id = new string[length];
	string *music_category = new string[length];
	string *music_type = new string[length];
	string *music_name = new string[length];
	string *music_artist = new string[length];
	string *music_year = new string[length];
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		for (int i = 0; i < length; i++)
		{
			inputFile >> music_id[i];
			inputFile >> music_category[i];
			inputFile >> music_type[i];
			inputFile >> music_name[i];
			inputFile >> music_artist[i];
			inputFile >> music_year[i];
		}
		ofstream File;
		File.open("E:\\oop\\OOP\\OOP\\music.txt", std::ofstream::out | std::ofstream::trunc);
		File.close();
		for (int i = 0; i < length; i++)
		{
			ofstream outputFile;
			outputFile.open("E:\\oop\\OOP\\OOP\\music.txt", ios::app);
			if (song_id == music_id[i])
			{
				found = true;
				/*system("cls");*/
				cout << "Found Sucessfully...!" << endl;
				cout << endl;
				cout << "What Do You Want To Update" << endl;
				cout << "\t\t 1) Song Category " << endl;
				cout << "\t\t 2) Song Type " << endl;
				cout << "\t\t 3) Song Name " << endl;
				cout << "\t\t 4) Song Artist " << endl;
				cout << "\t\t 5) Song Year " << endl;
				cout << "\nEnter your Choice : ";
				cin >> choice;
				while (choice < 1 || choice > 5)
				{
					cout << "Enter the Right Choice : ";
					cin >> choice;
				}
				switch (choice)
				{
				case 1:
					cin.ignore();
					cout << "Enter Song Category : ";
					getline(cin, category);
					category = underscore_value(category);
					music_category[i] = category;
					outputFile << music_id[i] << '\n';
					outputFile << music_category[i] << '\n';
					outputFile << music_type[i] << '\n';
					outputFile << music_name[i] << '\n';
					outputFile << music_artist[i] << '\n';
					outputFile << music_year[i] << '\n';
					cout << "Record Has Been Updated !" << endl;
					break;
				case 2:
					cin.ignore();
					cout << "Enter Song Type : ";
					getline(cin, type);
					type = underscore_value(type);
					music_type[i] = type;
					outputFile << music_id[i] << '\n';
					outputFile << music_category[i] << '\n';
					outputFile << music_type[i] << '\n';
					outputFile << music_name[i] << '\n';
					outputFile << music_artist[i] << '\n';
					outputFile << music_year[i] << '\n';
					cout << "Record Has Been Updated !" << endl;
					break;
				case 3:
					cin.ignore();
					cout << "Enter Song Name : ";
					getline(cin, name);
					name = underscore_value(name);
					music_name[i] = name;
					outputFile << music_id[i] << '\n';
					outputFile << music_category[i] << '\n';
					outputFile << music_type[i] << '\n';
					outputFile << music_name[i] << '\n';
					outputFile << music_artist[i] << '\n';
					outputFile << music_year[i] << '\n';
					cout << "Record Has Been Updated !" << endl;
					break;
				case 4:
					cin.ignore();
					cout << "Enter Song Artist : ";
					getline(cin, artist);
					artist = underscore_value(artist);
					music_artist[i] = artist;
					outputFile << music_id[i] << '\n';
					outputFile << music_category[i] << '\n';
					outputFile << music_type[i] << '\n';
					outputFile << music_name[i] << '\n';
					outputFile << music_artist[i] << '\n';
					outputFile << music_year[i] << '\n';
					cout << "Record Has Been Updated !" << endl;
					break;
				case 5:
					cin.ignore();
					cout << "Enter Song Year : ";
					getline(cin, year);
					year = underscore_value(year);
					music_year[i] = year;
					outputFile << music_id[i] << '\n';
					outputFile << music_category[i] << '\n';
					outputFile << music_type[i] << '\n';
					outputFile << music_name[i] << '\n';
					outputFile << music_artist[i] << '\n';
					outputFile << music_year[i] << '\n';
					cout << "Record Has Been Updated !" << endl;
					break;
				default:
					break;
				}
			}
			else
			{
				outputFile << music_id[i] << '\n';
				outputFile << music_category[i] << '\n';
				outputFile << music_type[i] << '\n';
				outputFile << music_name[i] << '\n';
				outputFile << music_artist[i] << '\n';
				outputFile << music_year[i] << '\n';
			}
			outputFile.close();
		}
		if (found == false)
		{
			cout << "Song Of ID related to " << song_id << " not found !" << endl;
		}
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
}


// for deleting any music

void music_store::deletemusic()
{
	int count, length;
	string line;
	bool found = false;
	ifstream File;
	File.open("E:\\oop\\OOP\\OOP\\music.txt");
	count = 0;
	while (getline(File, line))
	{
		count++;
	}
	File.close();
	length = count / 6;
	string id, category, type, name, artist, year;
	string *music_id = new string[length];
	string *music_category = new string[length];
	string *music_type = new string[length];
	string *music_name = new string[length];
	string *music_artist = new string[length];
	string *music_year = new string[length];
	ifstream inputFile;
	inputFile.open("E:\\oop\\OOP\\OOP\\music.txt");
	if (inputFile.is_open())
	{
		for (int i = 0; i < length; i++)
		{
			inputFile >> music_id[i];
			inputFile >> music_category[i];
			inputFile >> music_type[i];
			inputFile >> music_name[i];
			inputFile >> music_artist[i];
			inputFile >> music_year[i];
		}
		ofstream File;
		File.open("E:\\oop\\OOP\\OOP\\music.txt", std::ofstream::out | std::ofstream::trunc);
		File.close();
		for (int i = 0; i < length; i++)
		{
			ofstream outputFile;
			outputFile.open("E:\\oop\\OOP\\OOP\\music.txt", ios::app);
			if (song_id == music_id[i])
			{
				found = true;
				/*system("cls");*/
				cout << "Found Sucessfully...!" << endl;
				cout << endl;
				cout << "Record Has Been Deleted Sucessfully ! " << endl;
			}
			else
			{
				outputFile << music_id[i] << '\n';
				outputFile << music_category[i] << '\n';
				outputFile << music_type[i] << '\n';
				outputFile << music_name[i] << '\n';
				outputFile << music_artist[i] << '\n';
				outputFile << music_year[i] << '\n';
			}
			outputFile.close();
		}
		if (found == false)
		{
			cout << "Song Of ID related to " << song_id << " not found !" << endl;
		}
	}
	else
	{
		cout << "Error In Opening File " << endl;
		exit(0);
	}
}