
# Лабораторная работа №3 #

## Правила перегрузки операций и принципы обработки исключений в C++ ##

## Вариант 8 ##
 

## Цель работы ##
Изучение правил перегрузки операций и принципов обработки исключений в C++. 

### Обработка исключения в ProgrammError *operator[](const int index) ###
```c++
 try
    {
        if (index < 0 || index >= _size)
            throw std::out_of_range("index out of range");

        auto ptr = std::move(head);
        for (int i = 0; i < index; i++)
        {
            ptr = std::move(ptr->next);
        }
        return ptr->date;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << e.what() << std::endl;
        ProgrammError err;
        return nullptr;
    }
```

### Перегрузка операторов класса Figures ###

```c++

bool Figures::operator==(const Figures& right) const
{
    if (this->area == right.area && this->perimeter == right.perimeter)
        return true;
    else return false;
}
}
```

### Перегрузка операторов класса Ellipse ###

```c++
bool Ellipse::operator==(const Ellipse& right) const
{
    if (this->facet == right.facet)
        return true;
    else return false;
}
```

### Перегрузка операторов класса Square ###

```c++
bool Square::operator==(const Square& right) const
{
    if (this->facet == right.facet)
        return true;
    else return false;
}
```

### Перегрузка операторов класса Trapeze ###

```c++
bool Trapeze::operator==(const Trapeze& right) const
{
    if (this->cargoCapacity == right.cargoCapacity)
        return true;
    else return false;
}
```

