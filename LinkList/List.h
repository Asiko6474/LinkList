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
	initialize();
}

template<typename T>
inline List<T>::List(const List<T>&)
{
	m_first = otherList.m_first;
	m_last = otherList.m_last;
	m_nodeCount = otherList.m_nodeCount;
}

template<typename T>
inline List<T>::~List()
{
	destroy();
}

template<typename T>
inline void List<T>::destroy()
{
	Node<int>* startingNode = m_first;
	Node<T>* nextNode;
	
	for (int i = 0; i < getLength(); i++)
	{
		
		nextNode = startingNode->next;
		delete startingNode;
		startingNode = nextNode;
	}
	initialize();
}

template<typename T>
inline const Iterator<T> List<T>::begin()
{
	Iterator<T> iterator(m_first); 
	return iterator;
}

template<typename T>
inline const Iterator<T> List<T>::end()
{
	Iterator<T> iterator(m_last);
	return iterator;
}

template<typename T>
inline const bool List<T>::contains(const T object)
{
	for (Iterator<T> iterator = begin(); iterator != end(); ++iterator)
	{
		if (*iterator == object)
			return true;
	}
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& value)
{
	Node<T>* newNode = new Node<T>(value); 

	if (m_nodeCount == 0) {
		m_first = newNode;
		m_last = newNode;
	}
	else if (m_nodeCount == 1) {
		m_first = newNode;
		m_first->next = m_last;
		m_last->previous = m_first;
	}
	else {
		
		m_first->previous = newNode;
		newNode->next = m_first;
		m_first = newNode;
	}
	m_nodeCount++;
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
	Node<T>* newNode = new Node<T>(value); 

	if (m_nodeCount == 0) {
		m_first = newNode;
		m_last = newNode;
	}
	else if (m_nodeCount == 1) {
		m_last = newNode;
		m_first->next = m_last;
		m_last->previous = m_first;
	}
	else {
		
		m_last->next = newNode;
		m_last = newNode;
	}
	m_nodeCount++;
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	if (index >= 0 || index < m_nodeCount)
		return false;
	Node<T>* newNode = new Node<T>(value);

	if (index == 0)
		pushFront(value);

	else if (index == m_nodeCount)
		pushBack(value);

	Node<T>* node = m_first;

	for (int* c = 0; *c < index; c++)
	{
		for (int* i = c + 1; *i < index; i++) {

			if (value[i] < value[c])
			{
				node = node->next;
				newNode->next = node;
				newNode->previous = node->previous;
				node->previous->next = newNode;
				node->previous = newNode;

			}
		}
	}
}

template<typename T>
inline bool List<T>::remove(const T& value)
{
	
	if (!value || getLength() <= 0)
		return false;

	bool actorRemoved = false;
	
	T* newArray = new T[getLength() - 1];
	int j = 0;
	
	for (int* i = 0; *i < getLength(); i++)
	{
		
		if (value != m_nodeCount[i] || actorRemoved)
		{
			newArray[j] = m_nodeCount[i];
			j++;
		}
		else
			actorRemoved = true;
	}
	
	if (actorRemoved)
	{
		delete m_first;
		*m_first = *newArray;
		m_nodeCount--;
	}
	
	return actorRemoved;
}

template<typename T>
inline const void List<T>::print()
{
	return void();
}

template<typename T>
inline void List<T>::initialize()
{
	m_first = nullptr;
	m_last = nullptr;
	m_nodeCount = 0;
}

template<typename T>
inline const bool List<T>::isEmpty()
{
	if (getLength() == 0 || getLength() == NULL)
		return true;

	else return false;
}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	if (index < 0 || index < getLength())
		return false;

	for (int i = 1; i < index; ++iter);
}

template<typename T>
inline const int List<T>::getLength()
{
	return m_nodeCount;
}

template<typename T>
inline void List<T>::sort()
{

		
}
