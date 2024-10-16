#include "stackType.h"
using namespace std;

template <class ItemType>
stackType<ItemType>::stackType()
{
    top = -1;
}

template <class ItemType>
bool stackType<ItemType>::IsEmpty()
{
    return (top == -1);
}

template <class ItemType>
bool stackType<ItemType>::IsFull()
{
    return (top ==	MAX_ITEMS-1);
}

template <class ItemType>
void stackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() )
        throw FullStack();
    top++;
    items[top] = newItem;
}

template <class ItemType>
void stackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType stackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
