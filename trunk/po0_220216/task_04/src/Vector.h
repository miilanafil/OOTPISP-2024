#pragma once

#include <iostream>
#include <memory>
#include <vector>

template <typename T>
class Vector
{
public:
    Vector() = default;
    ~Vector() = default;

    void addVect(const T &elmnt);
    int sizeVect() const;
    int operator()() const;
    T operator[](const int i) const;
    auto operator+(const Vector<T> &vect) const;
    void printVect() const;

    int getСontent() const { return content; };

    friend std::ostream &operator<< <T>(std::ostream &output, const Vector<T> &a);
    friend std::istream &operator>> <T>(std::istream &input, Vector<T> &a);

private:
    std::unique_ptr<std::vector<T>> vectorElmnt = std::make_unique<std::vector<T>>(2);
    int content = 2;
    int quantity = 0;
};

template <class T>
void Vector<T>::addVect(const T &elmnt)
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
    quantity++;
    (*vectorElmnt)[quantity] = elmnt;
}

template <class T>
auto Vector<T>::operator+(const Vector<T> &vect) const
{
    auto newVector = std::make_unique<Vector<T>>();

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
int Vector<T>::sizeVect() const
{
    return quantity;
}

template <class T>
int Vector<T>::operator()() const
{
    return sizeVect();
};

template <class T>
T Vector<T>::operator[](const int i) const
{
    return (*vectorElmnt)[i];
}

template <class T>
void Vector<T>::printVect() const
{
    std::cout << "{ ";
    for (int i = 0; i < quantity; ++i)
    {
        std::cout << (*vectorElmnt)[i] << " ";
    }
    std::cout << "}" << std::endl;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &a)
{
    a.printVect();
    return out;
}

template <class T>
std::istream &operator>>(std::istream &in, Vector<T> &a)
{
    for (int i = 0; i < a.getСontent(); i++)
    {
        T temp;
        in >> temp;
        a.addVect(temp);
    }
    return in;
}