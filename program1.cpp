#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct  PERSON 
{
	char  Name[20];
	float Balance;
};

void Display(PERSON *arr1, int size)
{
	cout << "Name" << "      " << "Balance" << endl;
	cout << "-------------------------------------" << endl;
	int i;
	for (i = 0; i < size; i++)
		cout << arr1[i].Name << " " << arr1[i].Balance << endl;
}

string findRichest(PERSON *arr1, int size)
{
	int i;
	string Richest = arr1[0].Name;
	double rMoney;
	for (i = 1; i < size; i++)
	{
		if (arr1[i].Balance > rMoney)
		{
			rMoney = arr1[i].Balance;
			Richest = arr1[i].Name;
		}
	}
	return Richest;
}

double Deposit()
{
	return 0;
}

int main()
{
	PERSON arr1[6];
	PERSON dude;
	int i = 0;
	double balance;
	string fName, lName, fullName;
	ifstream dataFile;
	dataFile.open("data.txt");
	dataFile >> fName;
	while (dataFile)
	{
		dataFile >> lName;
		dataFile >> balance;
		arr1[i].Balance = balance;
		fullName = fName + " " + lName;
		strcpy_s(arr1[i].Name, fullName.c_str());
		dataFile >> fName;
		i++;
	}
	Display(arr1, 6);
	system("pause");
}