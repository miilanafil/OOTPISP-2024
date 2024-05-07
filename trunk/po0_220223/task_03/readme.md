
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

### Перегрузка операторов класса CantCastValue ###

```c++
bool CantCastValue::operator==(const CantCastValue &right) const
{
    return (this->erLevel == right.erLevel);
}
```

### Перегрузка операторов класса NotEnoughtPrivileges ###

```c++
bool NotEnoughtPrivileges::operator==(const NotEnoughtPrivileges &right) const
{
    return ((this->writePrivileges == right.writePrivileges) && (this->readPrivileges == right.readPrivileges));
}
```

### Перегрузка операторов класса CastError ###

```c++
bool CastError::operator==(const CastError &right) const
{
    return (this->errorCode == right.errorCode);
}
```

### Перегрузка операторов класса ImpossibleToInterface ###

```c++
bool ImpossibleToInterface::operator==(const ImpossibleToInterface &right) const
{
    return (this->interfaceNumber == right.interfaceNumber);
}
```

