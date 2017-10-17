// Created by butte on 10/17/2017.
//

#ifndef INHERITANCE_COUNTER_H
#define INHERITANCE_COUNTER_H


class Counter
{
//count
protected:
    unsigned int count;
public:
    Counter(unsigned int count); // constructor with one argument
    Counter(); //constructor with no arguments

    unsigned int getCount() const;
    void setCount(unsigned int count);

    Counter operator ++();
};
class CountDn : public Counter//derived class
{
public:
        Counter operator --();
};

#endif //INHERITANCE_COUNTER_H
