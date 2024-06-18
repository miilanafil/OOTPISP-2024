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

    void Add(const T &element);
    int Size() const;
    int operator()() const;
    T operator[](const int index) const;
    auto operator+(const T k) const;
    auto operator+(const Vvector<T> &vvector) const;
    void Show() const;

    inline int GetCapacity() const { return capacity; };

    friend std::ostream &operator<< <T>(std::ostream &out, const Vvector<T> &a);
    friend std::istream &operator>> <T>(std::istream &in, Vvector<T> &a);

private:
    std::unique_ptr<std::vector<T>> vectorElem = std::make_unique<std::vector<T>>(2);
    int capacity = 2;
    int count = 0;
};

template <class T>
void Vvector<T>::Add(const T &element)
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
auto Vvector<T>::operator+(const Vvector<T> &vector) const
{
    auto newVvector = std::make_unique<Vvector<T>>();

    int minSize = std::min(count, vector.Size());

    for (int i = 0; i < minSize; i++)
    {
        newVvector->Add((*vectorElem)[i] + vector[i]);
    }

    for (int i = minSize; i < count; i++)
    {
        newVvector->Add((*vectorElem)[i]);
    }

    for (int i = minSize; i < vector.Size(); i++)
    {
        newVvector->Add(vector[i]);
    }

    return newVvector;
}

template <class T>
int Vvector<T>::Size() const
{
    return count;
}

template <class T>
int Vvector<T>::operator()() const
{
    return Size();
};

template <class T>
T Vvector<T>::operator[](const int index) const
{
    return (*vectorElem)[index];
}

template <class T>
auto Vvector<T>::operator+(const T k) const //+k
{
    auto newVvector = std::make_unique<Vvector<T>>();

    for (int i = 0; i < count; i++)
    {
        (*vectorElem)[i] += k;
    }

    for (int i = 0; i < count; i++)
    {
        newVvector->Add((*vectorElem)[i]);
    }

    return newVvector;
}

template <class T>
void Vvector<T>::Show() const
{
    std::cout << "{ ";
    for (int i = 0; i < count; ++i)
    {
        std::cout << (*vectorElem)[i] << " ";
    }
    std::cout << "}" << std::endl;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Vvector<T> &a)
{
    a.Show();
    return out;
}

template <class T>
std::istream &operator>>(std::istream &in, Vvector<T> &a)
{
    for (int i = 0; i < a.GetCapacity(); i++)
    {
        T temp;
        in >> temp;
        a.Add(temp);
    }
    return in;
}
