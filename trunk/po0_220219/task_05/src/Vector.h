#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>

template <class T>
class Vector {
public:
    Vector(int s, T k);
    explicit Vector(int s);
    ~Vector() = default;

    T& operator[](int index);
    const T& operator[](int index) const;
    int operator()() const;
    Vector operator*(int k) const;

    friend std::ostream& operator<<(std::ostream& out, const Vector<T>& v) {
        for (const auto& elem : v.data) {
            out << elem << " ";
        }
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Vector<T>& v) {
        for (auto& elem : v.data) {
            in >> elem;
        }
        return in;
    }

private:
    int size;
    std::vector<T> data;
};


template <class T>
Vector<T>::Vector(int s, T k) : size(s), data(s, k) {}

template <class T>
Vector<T>::Vector(int s) : size(s), data(s) {}

template <class T>
T& Vector<T>::operator[](int index) {
    return data[index];
}

template <class T>
const T& Vector<T>::operator[](int index) const {
    return data[index];
}

template <class T>
int Vector<T>::operator()() const {
    return size;
}

template <class T>
Vector<T> Vector<T>::operator*(int k) const {
    Vector<T> result(size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = data[i] * k;
    }
    return result;
}

template <class T>
Vector(int, T) -> Vector<T>;

template <class T>
Vector(int) -> Vector<T>;

#endif 
