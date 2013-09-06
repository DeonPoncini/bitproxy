#include <iostream>

#include "Bitproxy.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return -1;
    }

    auto val = atoi(argv[1]);

    bitproxy::Bitproxy<int> bp(val);

    for(auto i = 0; i < bp.minsize(); i++)
    {
        std::cout << "Bit " << i << ": " << bp[i] << std::endl;
    }

    std::cout << "Min size: " << bp.minsize() << std::endl;
    std::cout << "Min bytes: " << bp.minbytes() << std::endl;

    return 0;
}
