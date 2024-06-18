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

    void insertVector(const T &other);
    int vectorLength() const;

    int operator()() const;
    T operator[](const int index) const;
    auto operator*(const T value) const;
    void showVector() const;

    int getСontent() const { return size; };

    friend std::ostream &operator<< <T>(std::ostream &output, const Vector<T> &a);
    friend std::istream &operator>> <T>(std::istream &input, Vector<T> &a);

private:
    std::unique_ptr<std::vector<T>> arrayForVector = std::make_unique<std::vector<T>>(2);
    int size = 2;
    int length = 0;
};

template <class T>
void Vector<T>::insertVector(const T &other)
{
    if (length >= size)
    {
        auto newArrayForVector = std::make_unique<std::vector<T>>(size * 2);
        for (int i = 0; i < length; ++i)
        {
            (*newArrayForVector)[i] = (*arrayForVector)[i];
        }

        arrayForVector = std::move(newArrayForVector);
        size *= 2;
    }
    (*arrayForVector)[length] = other;
    length++;
}

template <class T>
auto Vector<T>::operator*(const T value) const
{
    auto newVector = std::make_unique<Vector<T>>();

    for (int i = 0; i < length; i++)
    {
        newVector->insertVector((*arrayForVector)[i] * value);
    }

    return newVector;
}

template <class T>
int Vector<T>::vectorLength() const
{
    return length;
}

template <class T>
int Vector<T>::operator()() const
{
    return vectorLength();
};

template <class T>
T Vector<T>::operator[](const int i) const
{
    return (*arrayForVector)[i];
}

template <class T>
void Vector<T>::showVector() const
{
    std::cout << "{ ";
    for (int i = 0; i < length; ++i)
    {
        std::cout << (*arrayForVector)[i] << " ";
    }
    std::cout << "}" << std::endl;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &a)
{
    a.showVector();
    return out;
}

template <class T>
std::istream &operator>>(std::istream &in, Vector<T> &a)
{
    for (int i = 0; i < a.getСontent(); i++)
    {
        T temp;
        in >> temp;
        a.insertVector(temp);
    }
    return in;
}