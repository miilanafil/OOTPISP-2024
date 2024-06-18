
# Лабораторная работа №4 #

## Шаблоны классов ##

## Вариант 4 ##
 

## Цель работы ##
Создание консольного приложения, состоящего из нескольких файлов в системе  программирования Visual Studio. Реализация шаблона класса-контейнера. 

### Перегрузка оператора вывода и фунция Show в классе Vector ###
```c++
template <class T>
std::ostream &operator<<(std::ostream &out, const Vector<T> &a)
{
    a.showVector();
    return out;
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
```

### Перегрузка оператора вывода в классе Time ###

```c++
 friend std::ostream &operator<<(std::ostream &out, const Time &time)
    {
        out << time.hour() << ":" << time.minute() << ":" << time.second() << " ";
        return out;
    }

    friend std::istream &operator>>(std::istream &inp, Time &time)
    {
        std::cout << "Hours: ";
        inp >> time.hours;
        std::cout << "Minutes: ";
        inp >> time.minutes;
        std::cout << "Seconds: ";
        inp >> time.seconds;
        return inp;
    }
```

### Перегрузка оператора * класса Vector ###

```c++
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
```

### Перегрузка оператора () и функции Size класса Vector для определения размера векторов ###

```c++

template <class T>
int Vector<T>::operator()() const
{
    return vectorLength();
};
```

### Перегрузка оператора [] класса Vector для обращения к элементу по индексу ###

```c++
template <class T>
T Vector<T>::operator[](const int i) const
{
    return (*arrayForVector)[i];
}
```











