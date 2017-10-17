// Created by butte on 10/17/2017.
//

#include "Counter.h"

Counter::Counter(unsigned int count) : count(count) {} // constructor one argument
Counter::Counter():count(0){} // constructor with no argument

unsigned int Counter::getCount() const
{
    return count;
}
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}
Counter Counter::operator++() {
    return Counter(++count);
}

Counter CountDn::operator--() {
    return Counter(--count);
}
