
# Лабораторная работа №2 #

## НАСЛЕДОВАНИЕ И ВИРТУАЛЬНЫЕ ФУНКЦИИ ##

## Вариант 1 ##
 

## Цель работы ##
Получить практические навыки создания иерархии классов и использования статических компонентов класса.


### Конструкторы с параметрами: ###

### Базовый класс: ###
```c++
Person::Person(string name1) : name(name1), next(nullptr) {
	if (head == nullptr) {
		head = this;
	}
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
}

```
### Дочерние классы: ###
```c++
Chair::Chair(string name1, const int numOfSubordinates1)
	: Person(name1), numOfSubordinates(numOfSubordinates1) {
}

Teacher::Teacher(string name1, const int workExperience1)
	: Person(name1), workExperience(workExperience1) {
}

Student::Student(string name1, const int averageGrade1)
	: Person(name1), averageGrade(averageGrade1) {
}
```

### Конструкторы без параметров базового класса ###
```c++
Person::Person() : Person("name") {}
```


### Статические компоненты базового класса ###
```c++
	static Person* head;
    static Person* last;
```

### Метод для просмотра списка ###
```c++
void Person::printHead() {
	Person* p = head;
	while (p != nullptr) {
		cout << p->getName() << endl;
		p = p->next;
	}
}

```



