#pragma once
template <typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator++();
	Iterator<T> operator--();
	const bool operator==(const Iterator<T> & iter);
	const bool operator!=(const Iterator<T>& Iter);
	T* operator();
private:
	Node<T>* m_current;
};

template<typename T>
inline Iterator<T>::Iterator()
{
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	return Iterator<T>();
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return false;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& Iter)
{
	return false;
}
