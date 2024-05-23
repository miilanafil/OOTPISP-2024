# Лабораторная работа №2 #

## Правила перегрузки операций и принципы обработки исключений в С++ ##

## Вариант 2 ##

## Цель работы ##

Изучить правила перегрузки операций и принцивы обработки исключений в С++

### Обработка исключаний для Transport \*operator [](const int index) ###

```c++
    
Transport* TransportCollection::operator[](const int index)
{
    try
    {
        if (index < 0 || index >= collectionSize)
            throw std::out_of_range("out of range");

        auto ptr = std::move(head);
        for (int i = 0; i < index; i++)
        {
            ptr = std::move(ptr->next);
        }
        return ptr->date;
    }
    catch (const std::out_of_range& err)
    {
        std::cout << err.what() << std::endl;
        Transport _transport;
        return nullptr;
    }
}
```

## Перегрузка операторов ##

### Class Bike ###

```c++
    
bool Bike::operator==(const Bike& right) const
{
if (this->numGears == right.numGears)
return true;
else return false;
}
```

### Class Car ###

```c++

bool Car::operator==(const Car& right) const
{
if (this->numSeats == right.numSeats)
return true;
else return false;
}
```

### Class Truck ###

```c++

bool Truck::operator==(const Truck& right) const
{
if (this->cargoCapacity == right.cargoCapacity)
return true;
else return false;
}
```

### Базовый Class Transport ###

```c++

bool Transport::operator==(const Transport& right) const
{
if (this->manufacturer == right.manufacturer && this->age == right.age)
return true;
else return false;
}
```
