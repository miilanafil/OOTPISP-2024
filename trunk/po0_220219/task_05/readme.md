# Лабораторная работа №5 #

## Шаблоны классов ##

## Вариант 5 ##
 

## Цель работы ##
Создание консольного приложения, состоящего из нескольких файлов в системе  программирования Visual Studio. Реализация шаблона класса-контейнера. 

### Перегрузка оператора [] в классе Vector (доступ по индексу) ###
```c++
template <class T>
T& Vector<T>::operator[](int index)
{
    if (index >= 0 && index < size) {
        return data[index];
    }
    else {
        throw out_of_range("Error! Index out of range");
    }
}
```
### Перегрузка оператора () в классе Vector (определение размера вектора) ###
```c++
template <class T>
int Vector<T>::operator()()
{
    return size;
}
```

### Перегрузка оператора * в классе Vector (умножение вектора на число) ###

```c++
template <class T>
Vector<T> Vector<T>::operator*(const int k) 
{
    Vector<T> temp(size);
    for (int i = 0; i < size; ++i)
    {
        temp.data[i] = data[i] * k;
    }
    return temp;
}
```

### Перегрузка оператора * в классе Time ###

```c++
Time Time::operator*(int k) {
    int totalSeconds = (min * 60 + sec) * k;
    int resultMin = totalSeconds / 60;
    int resultSec = totalSeconds % 60;
    return Time(resultMin, resultSec);
}
```

### Перегрузка оператора ввода/вывода в классе Time ###

```c++
ostream& operator<<(ostream& out, const Time& t) {
    out << t.min << ":" << t.sec;
    return out;
}

istream& operator>>(istream& in, Time& t) {
    in >> t.min >> t.sec;
    return in;
}
```
