#ifndef STACKTYPE_H
#define STACKTYPE_H
const int MAX_ITEMS = 5;

class FullStack
//Exception Class thrown
//by Push when stack is Full
{};

class EmptyStack
//Exception Class thrown
//by Pop and Top when stack is Empty
{};

template<class ItemType>
class stackType
{
    public:
        stackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();

    private:
        int top;
        ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H
