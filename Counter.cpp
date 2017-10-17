// Created by butte on 10/17/2017.
//

#include "Counter.h"
//Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count
 */
Counter::Counter(unsigned int count) : count(count) {} // constructor one argument
/*!
 * Counter:Default Constructor
 */
Counter::Counter():count(0){} // constructor with no argument
/*!
 * getCount : getter for count variable
 * @return : current count
 */
unsigned int Counter::getCount() const
{
    return count;
}
/*!
 * setCount: Set Current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}
/*!
 * ++Operator : Increments counter
 * @return ++Count
 */
Counter Counter::operator++() {
    return Counter(++count);
}
/*!
 * CountDn -- operator
 * @return: Decrements counter
 */
Counter CountDn::operator--() {
    return Counter(--count);
}
/*!
 * CountDn Default Constructor
 */
CountDn::CountDn() : Counter() {}
/*!
 * CountDn 1 parameter Constructor
 * @param count
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
