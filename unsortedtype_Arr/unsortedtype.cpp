
#include "unsortedtype.h"

template <class ItemType>
unsortedtype<ItemType>::unsortedtype()
{
    length = 0;
    currentPos = -1;
}


template <class ItemType>
void unsortedtype<ItemType>::MakeEmpty()
{
    length = 0;
}


template <class ItemType>
bool unsortedtype<ItemType>::isFull()
{
    if(length != 0){
        if(length == MAX_ITEMS){
            return true;
        }
        else return false;
    }
}


template <class ItemType>
int unsortedtype<ItemType>::LengthIs()
{
    return length;
}


template <class ItemType>
void unsortedtype<ItemType>::ResetList()
{
    currentPos = -1;
}


template <class ItemType>
void unsortedtype<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}


template <class ItemType>
void unsortedtype<ItemType>::RetrieveItem(ItemType& item, bool& found)
{


   for(int location=0; location<LengthIs();location++){
    if(info[location]==item){
        found = true;
        break;
    }
    else{
         found = false;
        }
    }
}


template <class ItemType>
void unsortedtype<ItemType>::InsertItem(ItemType item)
{
   info[length] = item;
   length++;
}


template <class ItemType>
void unsortedtype<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while(item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}


template class unsortedtype<int>;



