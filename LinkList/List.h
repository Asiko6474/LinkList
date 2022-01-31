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
		//Deletes all nodes in the list
	const Iterator<T> begin();
		//Returns an iterator
	const Iterator<T> end();
		//Returns the next item after the last node in the list
	const bool contains(const T object);
		//Checks to see if the given item is in the list
	void pushFront(const T& value);
		//Adds a new node to the beginning of the list
	void pushBack(const T& value);
		//Adds a new node to the end of the list
	bool insert(const T& value, int index);
		//Adds a new node at the given index
	bool remove(const T& value);
		//Removes the first node with the given value
	const void print();
		//Prints the values for all nodes
	void initialize();
		//Set the default values for the first node pointer, the last node pointer, and the node count
	const bool isEmpty();
		//Returns whether or not the list has any nodes in it
	bool getData(Iterator<T>& iter, int index);
		//Sets the given iterator to point to a node at the given index
	const int getLength();
		//returns the amount of nodes in the list
	void sort();
	const List<T>& operator = (const List<T>& otherList);
private:
	Node<T>* m_first;
	Node<T>* m_last;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List()
{
}

template<typename T>
inline List<T>::List(const List<T>&)
{
}

template<typename T>
inline List<T>::~List()
{
}

template<typename T>
inline void List<T>::destroy()
{
}

template<typename T>
inline const Iterator<T> List<T>::begin()
{
	return iterator<T>();
}

template<typename T>
inline const Iterator<T> List<T>::end()
{
	return iterator<T>();
}

template<typename T>
inline const bool List<T>::contains(const T object)
{
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& value)
{
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	return false;
}

template<typename T>
inline bool List<T>::remove(const T& value)
{
	return false;
}

template<typename T>
inline const void List<T>::print()
{
	return void();
}

template<typename T>
inline void List<T>::initialize()
{
}

template<typename T>
inline const bool List<T>::isEmpty()
{
	return false;
}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	return false;
}

template<typename T>
inline const int List<T>::getLength()
{
	return 0;
}

template<typename T>
inline void List<T>::sort()
{
}
