#include "Bit.h"

namespace bitproxy
{

Bit::Bit(bool _value) :
    value(_value)
{
}

Bit::operator bool()
{
    return value;
}

bool Bit::test() const
{
    return value;
}

void Bit::flip()
{
    value = !value;
}

void Bit::set()
{
    value = true;
}

void Bit::clear()
{
    value = false;
}

}
