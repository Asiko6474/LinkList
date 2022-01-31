#pragma once
#include "Node.h"
#include "Iterator.h"
template <typename T>
class List
{
public:
	List();
	List(const List<T>&);
	~List();
	void destroy();
	const iterator<T> begin();
	const iterator<T> end();
	const bool contains(const T object);
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initialize();
	const bool isEmpty();
	bool getData(iterator<T>& iter, int index);
	const int getLength();
	void sort();
	const List<T>& operator = (const List<T>& otherList);
private:
	Node<T>* m_first;
	Node<T>* m_last;
	int m_nodeCount;
};