#ifndef BITPROXY_BIT_H
#define BITPROXY_BIT_H

namespace bitproxy
{

class Bit
{
public:
    Bit(bool _value);

    operator bool();

    bool test() const;
    void flip();
    void set();
    void clear();

private:
    bool value;
};

}

#endif
