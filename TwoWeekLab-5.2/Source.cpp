#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct ITINERARY
{
	string FIRST;			//� ����� ����������� ������ ��������;
	string FINAL;			//� ����� �������� ������ ��������;
	unsigned int NUM;		//� ����� ��������.
	double DISTANCE;		//- ������� � ���������.
};

int main()
{
	fstream database;
	database.open("database.txt", ios_base::in | ios_base::out | ios_base::binary);

	
	database.close();
	system("pause");
	return NULL;
}