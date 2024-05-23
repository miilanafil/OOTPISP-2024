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

    void Add(const T &element);
    int Size() const;
    int operator()() const;
    T operator[](const int index) const;
    auto operator+(const T k) const;
    auto operator+(const Vector<T> &vector) const;
    void Show() const;

    inline int GetCapacity() const { return capacity; };

    friend std::ostream &operator<< <T>(std::ostream &out, const Vector<T> &a);
    friend std::istream &operator>> <T>(std::istream &in, Vector<T> &a);

private:
    std::unique_ptr<std::vector<T>> vectorElem = std::make_unique<std::vector<T>>(2);
    int capacity = 2;
    int count = 0;
};

template <class T>
void Vector<T>::Add(const T &element)
{
    if (count >= capacity)
    {
        auto newElements = std::make_unique<std::vector<T>>(capacity * 2);
        for (int i = 0; i < count; ++i)
        {
            (*newElements)[i] = (*vectorElem)[i];
        }

        vectorElem = std::move(newElements);
        capacity *= 2;
    }
    (*vectorElem)[count++] = element;
}

template <class T>
auto Vector<T>::operator+(const Vector<T> &vector) const
{
    auto newVector = std::make_unique<Vector<T>>();

    int minSize = std::min(count, vector.Size());

    for (int i = 0; i < minSize; i++)
    {
        newVector->Add((*vectorElem)[i] + vector[i]);
    }

    for (int i = minSize; i < count; i++)
    {
        newVector->Add((*vectorElem)[i]);
    }

    for (int i = minSize; i < vector.Size(); i++)
    {
        newVector->Add(vector[i]);
    }

    return newVector;
}

template <class T>
int Vector<T>::Size() const
{
    return count;
}

template <class T>
int Vector<T>::operator()() const
{
    return Size();
};

template <class T>
T Vector<T>::operator[](const int index) const
{
    return (*vectorElem)[index];
}

template <class T>
auto Vector<T>::operator+(const T k) const //+k
{
    auto newVector = std::make_unique<Vector<T>>();

    for (int i = 0; i < count; i++)
    {
        (*vectorElem)[i] += k;
    }

    for (int i = 0; i < count; i++)
    {
        newVector->Add((*vectorElem)[i]);
    }

    return newVector;
}

template <class T>
void Vector<T>::Show() const
{
    std::cout << "{ ";
    for (int i = 0; i < count; ++i)
    {
        std::cout << (*vectorElem)[i] << " ";
    }
    std::cout << "}" << std::endl;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &a)
{
    a.Show();
    return out;
}

template <class T>
std::istream &operator>>(std::istream &in, Vector<T> &a)
{
    for (int i = 0; i < a.GetCapacity(); i++)
    {
        T temp;
        in >> temp;
        a.Add(temp);
    }
    return in;
}