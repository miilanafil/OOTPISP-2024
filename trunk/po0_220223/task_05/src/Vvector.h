#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ranges>

template <typename T>
class Vvector
{
public:
    Vvector() = default;
    ~Vvector() = default;

    void app(const T &other);
    int currSize() const;

    int getCurrSize() const;
    T operator[](const int index) const;
    auto operator*(const T value) const;
    void print() const;

    int getMaxSize() const { return maxSize; };

    void insertElementAtPosition(const T &key, int position);
    void eraseElement(const T &key);
    void subtractMaxMinDifference();

private:
    std::unique_ptr<std::vector<T>> elements = std::make_unique<std::vector<T>>(2);
    int maxSize = 2;
    int currLength = 0;
};

template <typename T>
void Vvector<T>::app(const T &other)
{
    if (currLength >= maxSize)
    {
        auto newElements = std::make_unique<std::vector<T>>(maxSize * 2);
        std::ranges::copy(*elements, newElements->begin());
        elements = std::move(newElements);
        maxSize *= 2;
    }
    (*elements)[currLength] = other;
    currLength++;
}

template <typename T>
auto Vvector<T>::operator*(const T value) const
{
    auto newVvector = std::make_unique<Vvector<T>>();
    std::ranges::for_each(*elements | std::views::take(currLength), [&](const T &elem)
                          { newVvector->app(elem * value); });
    return newVvector;
}

template <typename T>
int Vvector<T>::currSize() const
{
    return currLength;
}

template <typename T>
int Vvector<T>::getCurrSize() const
{
    return currSize();
}

template <typename T>
T Vvector<T>::operator[](const int index) const
{
    return (*elements)[index];
}

template <typename T>
void Vvector<T>::print() const
{
    std::cout << "{ ";
    for (const auto &elem : *elements | std::views::take(currLength))
    {
        std::cout << elem << " ";
    }
    std::cout << "}" << std::endl;
}

template <typename T>
void Vvector<T>::insertElementAtPosition(const T &key, int position)
{
    if (currLength == 0 || position < 0 || position > currLength)
        return;

    if (auto it = std::ranges::find(*elements | std::views::take(currLength), key); it != elements->begin() + currLength)
    {
        elements->insert(elements->begin() + position, *it);
        ++currLength;
    }
}

template <typename T>
void Vvector<T>::eraseElement(const T &key)
{
    if (auto it = std::ranges::find(*elements | std::views::take(currLength), key); it != elements->begin() + currLength)
    {
        std::move(it + 1, elements->begin() + currLength, it);
        --currLength;
    }
}

template <typename T>
void Vvector<T>::subtractMaxMinDifference()
{
    if (currLength == 0)
        return;

    auto [minElem, maxElem] = std::ranges::minmax(*elements | std::views::take(currLength));
    T difference = maxElem - minElem;

    std::ranges::for_each(*elements | std::views::take(currLength), [difference](T &elem)
                          { elem -= difference; });
}
