#ifndef __NODE_H_INCLUDED__
#define __NODE_H_INCLUDED__


#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
	T data;
	Node* next;

	Node<T>(T d, Node* n = NULL){ data = d; next = n; };
	Node() {};
	~Node() {};
	

};


#endif // !__NODE_H_INCLUDED__



