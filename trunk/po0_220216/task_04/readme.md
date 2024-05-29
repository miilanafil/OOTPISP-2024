# Лабораторная работа №4 #

## Щаблоны классов ##

## Вариант 2 ##

## Цель работы ##

1) Создать консольное приложение, состоящее из нескольких файлов в системе программирования Visual Studio.
2) Реализаовать шаблон класса-контейнера в C++

Класс- контейнер ВЕКТОР с элементами типа int.

### Ввод/вывод в классе Vector ###

```c++
template <class T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &a)
{
    a.printVect();
    return out;
}

template <class T>
std::istream &operator>>(std::istream &in, Vector<T> &a)
{
    for (int i = 0; i < a.getCapaciry(); i++)
    {
        T temp;
        in >> temp;
        a.addVect(temp);
    }
    return in;
}
```

### Ввод/вывод в классе Time ###

```c++
friend std::ostream &operator<<(std::ostream &out, const Time &a)
    {
        out << a.getMin() << ":" << a.getSecond() << " ";
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Time &a)
    {
        std::cout << "Enter minutes: ";
        in >> a.minutes;
        std::cout << "Enter seconds: ";
        in >> a.seconds;
        return in;
    }
```

### Сложение жлементов векторов ###

```c++
template <class T>
auto Vector<T>::operator+(const Vector<T> &vector) const
{
    auto newVect = std::make_unique<Vector<T>>();
    int minSize = std::min(count, vector.sizeVect());
    for (int i = 0; i < minSize; i++)
    {
        newVect->addVect((*vectorElem)[i] + vector[i]);
    }
    for (int i = minSize; i < count; i++)
    {
        newVect->addVect((*vectorElem)[i]);
    }
    for (int i = minSize; i < vector.sizeVect(); i++)
    {
        newVect->addVect(vector[i]);
    }
    return newVect;
}
```

### Перегрузка оператора () класса Vector для определения размера вектора ###

```c++
template <class T>
int Vector<T>::operator()() const
{
    return sizeVect();
};
```

### Перегрузка [] ###

```c++
template <class T>
T Vector<T>::operator[](const int index) const
{
    return (*vectorElem)[index];
}
```
