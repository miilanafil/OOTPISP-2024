#pragma once
#ifndef MYVECTORH
#define MYVECTORH
#include <vector>
#include <iostream>

template<class T>
class Vvector
{
public:
    Vvector() = default;
    explicit Vvector(int n);
    ~Vvector() = default;
    void Print() const;
    void Add(const T& a);
    void putMinToEnd();
    void findByKeyAndDelete(T key);
    void addAllMinMaxSum();
private:
    std::vector <T> _vec;
    int len = 0;
};

#endif

template<class T>
inline Vvector<T>::Vvector(int n)
{
    T a;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        _vec.push_back(a);
    }
    len = _vec.size();
}

template<class T>
inline void Vvector<T>::Print() const
{
    for (int i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i] << std::endl;
    }
}

template<class T>
inline void Vvector<T>::Add(const T& a)
{
    _vec.push_back(a);
    len++;
}

template<class T>
inline void Vvector<T>::putMinToEnd()
{
    int index = 0;
    T tmp = _vec[0];
    for (int i = 1; i < _vec.size(); i++)
    {
        if (_vec[i] < tmp)
        {
            index = i;
            tmp = _vec[i];
        }
    }

    _vec.erase(_vec.begin() + index);

    _vec.push_back(tmp);
}

template<class T>
inline void Vvector<T>::findByKeyAndDelete(T key)
{
    int index = 0;
    for (int i = 0; i < _vec.size(); i++)
    {
        if (_vec[i] == key)
        {
            index = i;
            _vec.erase(_vec.begin() + index);
            break;
        }
    }
    len--;
}

template<class T>
inline void Vvector<T>::addAllMinMaxSum()
{
    int index = 0;
    T min = _vec[0];
    for (int i = 1; i < _vec.size(); i++)
    {
        if (_vec[i] < min)
        {
            index = i;
            min = _vec[i];
        }
    }

    int index1 = 0;
    T max = _vec[0];
    for (int i = 1; i < _vec.size(); i++)
    {
        if (_vec[i] > max)
        {
            index1 = i;
            max = _vec[i];
        }
    }

    T sum = min + max;

    for (int i = 0; i < _vec.size(); i++)
    {
        _vec[i] = _vec[i] + sum;
    }
}
