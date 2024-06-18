#pragma once

#include <iostream>
#include <memory>
#include <vector>

template <typename T>
class Vvector;

// Декларация дружественных функций (без явной специализации в классе)
template <class T>
std::ostream &operator<<(std::ostream &out, const Vvector<T> &a);

template <class T>
std::istream &operator>>(std::istream &in, Vvector<T> &a);

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
    std::unique_ptr<Vvector<T>> operator+(const Vvector<T> &vect) const;
    void printVect() const;

    int getСontent() const { return content; };

    friend std::ostream &operator<< <T>(std::ostream &output, const Vvector<T> &a);
    friend std::istream &operator>> <T>(std::istream &input, Vvector<T> &a);

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
    
}

template <class T>
std::unique_ptr<Vvector<T>> Vvector<T>::operator+(const Vvector<T> &vect) const
{
    auto newVector = std::make_unique<Vvector<T>>();

    int minimalSize = std::min(quantity, vect.sizeVect());

    for (int i = 0; i < minimalSize; i++)
    {
        newVector->addVect((*vectorElmnt)[i] + vect[i]);
    }

    for (int i = minimalSize; i < quantity; i++)
    {
        newVector->addVect((*vectorElmnt)[i]);
    }

    for (int i = minimalSize; i < vect.sizeVect(); i++)
    {
        newVector->addVect(vect[i]);
    }

    return newVector;
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
};

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

