#include<iostream>
using namespace std;


string dataFromDB()
{
	return "Data from database";
}

string dataFromWB()
{
	return "Data from web server";
}

void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}


int main()
{
	ShowInfo(dataFromDB);
}