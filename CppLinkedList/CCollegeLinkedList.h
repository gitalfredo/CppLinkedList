#ifndef __CCOLLEGELINKEDLIST_H_INCLUDED__
#define __CCOLLEGELINKEDLIST_H_INCLUDED__

#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

template <class T>
class CCollegeLinkedList
{
public:
	Node<T>* first;

	CCollegeLinkedList()
	{
		first = nullptr;
	};


	//Add to end
	void Push(T d)
	{
		if (first == nullptr)
		{
			first = new Node<T>(d);
		}
		else
		{
			//Copy first value
			Node<T> * last = first;

			//Get last value
			while (last->next != nullptr)		//penultimate
				last = last->next;				//Ultimate

			//Create new node to be added at end of list
			Node<T> * val = new Node<T>(d);

			//Assign/add it
			last->next = val;
		}
	}

	//Delete last node
	void DeleteLast()
	{
		if (first != nullptr)
		{
			Node<T> * last = first;
			if (last->next != nullptr)
			{
				Node<T> * penultimate = first->next;
				while (last->next != nullptr)		//penultimate position
				{
					penultimate = last;
					last = last->next;				//Ultimate
				}
				delete last;
				penultimate->next = nullptr;
			}
		}
	}

	void DeletePosition(int pos)
	{

	Node<T> *previous = NULL;
	Node<T> *current = first;
	for (int i = 0; i < pos; i++)
	{
		previous=current;
		current = current->next;
	
	}
	if (pos == 0)
	{
		if (first->next != nullptr)
		{
			first = first->next;
		}
		else
		{
			first = nullptr;
		}
	}
	
	else
	{
		previous->next = current->next;
		delete current;
		current = NULL;
	}
		
	}

	//Delete first
	void DeleteFirst()
	{
		if (first != nullptr)
		{
			if (first->next != nullptr)
			{
				first = first->next;		//Pointing the first Node to the one next deletes it
			}
			else
			{
				first = nullptr;			//Nullifying the first node deletes it if list is size 1
			}
		}
	}


	//Display
	void Display()
	{
		cout << "Display:" << endl;
		if (first != nullptr)
		{
			Node<T> * temp = first;
			while (temp != nullptr)					//Ultimate position
			{
				cout << temp->data << "-> ";
				temp = temp->next;
			}
			cout << endl;
		}
	}
};

#endif