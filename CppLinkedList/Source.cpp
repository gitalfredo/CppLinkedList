#include <iostream>
#include "CCollegeLinkedList.h"

using namespace std;


int main()
{
	CCollegeLinkedList<string> *a = new CCollegeLinkedList<string>();

	cout << "Good Overwatch team for defending El Dorado" << endl;
	a->Push("Tracer");
	a->Push("Soldier 76");
	a->Push("Junkrat");
	a->Push("Hanzo");
	a->Push("Reinhart");
	a->Push("Mercy");

	a->Display();

	cout << "First one down" << endl;
	cout << "Next one down" << endl;
	a->DeleteFirst();
	a->DeleteFirst();
	
	cout << "Last one down" << endl;
	a->DeleteLast();

	a->Display();


	system("pause");
	return 0;
}