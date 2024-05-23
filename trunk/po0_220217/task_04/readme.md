# Лабораторная работа №4

## Шаблоны классов

## Вариант 3

## Цель работы

Создание консольного приложения, состоящего из нескольких файлов в системе программирования Visual Studio. Реализация шаблона класса-контейнера в C++

### Перегрузка операций ввода/вывода в классе Vector

```c++
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
```

### Перегрузка операторов ввода/вывода в классе Time

```c++
friend std::ostream &operator<<(std::ostream &out, const Time &a)
{
    out << a.GetMin() << ":" << a.GetSec() << " ";
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

### Перегрузка оператора + класса Vector для сложения векторов

```c++
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
```

### Перегрузка оператора () класса Vector для определения размера вектора

```c++
template <class T>
int Vector<T>::operator()() const
{
    return Size();
};
```

### Перегрузка оператора [] класса Vector для обращения к элементу вектора по индексу

```c++
template <class T>
T Vector<T>::operator[](const int index) const
{
    return (*vectorElem)[index];
}
```
