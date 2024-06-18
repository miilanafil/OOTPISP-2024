#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
#include <numeric>
#include <optional>

#include "Money.h"
#include "Vvector.h"
#include "VectorOnPriority.h"

template <typename T>
void removeElementFromDeque(std::deque<T> &deq, const T &value)
{
    auto it = std::ranges::find(deq, value);
    if (it != deq.end())
    {
        deq.erase(it);
    }
}

template <typename T>
void insertElementAtPosition(std::deque<T> &deq, const T &value, size_t position)
{
    if (auto it = std::ranges::find(deq, value); it != deq.end() && position <= deq.size())
    {
        deq.insert(deq.begin() + position, *it);
    }
}




template <typename T>
void removeElement(std::queue<T> &q, const T &value)
{
    std::queue<T> tempQueue;
    while (!q.empty())
    {
        if (q.front() != value)
        {
            tempQueue.push(q.front());
        }
        q.pop();
    }
    q = std::move(tempQueue);
}


int main()
{
    // TASK_1

    std::deque<double> doubleDeque = {1.3, 2.8, 4.3, 3.6};

    insertElementAtPosition(doubleDeque, 2.8, 4);
    removeElementFromDeque(doubleDeque, 1.4);
   

    for (const auto &elem : doubleDeque)
    {
        std::cout << elem << " ";
    }

    std::cout << std::endl;

    // TASK_3

    Vvector<int> Vect;
    Vect.app(6);
    Vect.app(1);
    Vect.app(8);
    Vect.app(5);
    Vect.app(9);

    Vect.insertElementAtPosition(8, 4);
    Vect.eraseElement(8);
    Vect.subtractMaxMinDifference();
    Vect.print();



    std::deque<Money> timeDeque = {Money("22:52:16"), Money("27:52:10"), Money("2:52:25"), Money("2:52:00")};

    insertElementAtPosition(timeDeque, Money("11:52:16"), 3);
    removeElementFromDeque(timeDeque, Money("17:52:10"));
    

    for (const auto &elem : timeDeque)
    {
        std::cout << elem << " ";
    }

    std::cout << std::endl;
    // TASK_4

    std::queue<Money> tim;

    tim.push(Money("12:52:11"));
    tim.push(Money("14:52:12"));
    tim.push(Money("1:52:10"));
    tim.push(Money("23:52:00"));

    
    removeElement(tim, Money("12:52:11"));
    

    std::cout << "{ ";
    while (!tim.empty())
    {
        std::cout << tim.front() << " ";
        tim.pop();
    }
    std::cout << "}" << std::endl;

    

    VectorOnPriority<int> vect;
    vect.application(2);
    vect.application(7);
    vect.application(8);
    vect.application(10);
    vect.application(52);

    vect.fold(7, 1);
    vect.deleteEl(8);
    vect.subMinMax();

    vect.show();
}
