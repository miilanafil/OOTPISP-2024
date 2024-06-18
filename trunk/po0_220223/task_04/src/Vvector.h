#pragma once

#include <iostream>
#include <memory>
#include <vector>

template <typename T>
class Vvector
{
public:
    Vvector() = default;
    ~Vvector() = default;

    void addVect(const T &elmnt);
    int sizeVect() const;
    int operator()() const;
    T operator[](const int i) const;
    friend Vvector<T> operator+(const Vvector<T> &vect1, const Vvector<T> &vect2); // Декларация дружественной функции
    void printVect() const;

    int getСontent() const { return content; };

private:
    std::unique_ptr<std::vector<T>> vectorElmnt = std::make_unique<std::vector<T>>(2);
    int content = 2;
    int quantity = 0;
};

template <class T>
void Vvector<T>::addVect(const T &elmnt)
{
    if (quantity >= content)
    {
        auto newElements = std::make_unique<std::vector<T>>(content * 2);
        for (int i = 0; i < quantity; ++i)
        {
            (*newElements)[i] = (*vectorElmnt)[i];
        }

        vectorElmnt = std::move(newElements);
        content *= 2;
    }
    (*vectorElmnt)[quantity++] = elmnt;
}

template <class T>
int Vvector<T>::sizeVect() const
{
    return quantity;
}

template <class T>
int Vvector<T>::operator()() const
{
    return sizeVect();
}

template <class T>
T Vvector<T>::operator[](const int i) const
{
    return (*vectorElmnt)[i];
}

template <class T>
void Vvector<T>::printVect() const
{
    std::cout << "{ ";
    for (int i = 0; i < quantity; ++i)
    {
        std::cout << (*vectorElmnt)[i] << " ";
    }
    std::cout << "}" << std::endl;
}

// Определение дружественной функции оператора +
template <class T>
Vvector<T> operator+(const Vvector<T> &vect1, const Vvector<T> &vect2)
{
    Vvector<T> newVector;

    int minimalSize = std::min(vect1.sizeVect(), vect2.sizeVect());

    for (int i = 0; i < minimalSize; i++)
    {
        newVector.addVect(vect1[i] + vect2[i]);
    }

    for (int i = minimalSize; i < vect1.sizeVect(); i++)
    {
        newVector.addVect(vect1[i]);
    }

    for (int i = minimalSize; i < vect2.sizeVect(); i++)
    {
        newVector.addVect(vect2[i]);
    }

    return newVector;
}
