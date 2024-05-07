#include "FiguresCollection.h"

void FiguresCollection::showAll() const
{
    const Node* current = head.get();
    while (current != nullptr)
    {
        current->date->Show();
        current = current->next.get();
    }
}

void FiguresCollection::add(Figures* figures)
{
    auto temp = std::make_unique<Node>(figures);
    if (head)
    {
        temp->next = std::move(head);
        head = std::move(temp);
    }
    else
    {
        head = std::move(temp);
    }

    collectionSize++;
}

int FiguresCollection::size() const
{
    return collectionSize;
}

Figures* FiguresCollection::operator[](const int index)
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
        Figures _figures;
        return nullptr;
    }
}
