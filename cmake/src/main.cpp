#include <iostream>

#include "Beast.hpp"

int main()
{
    Beast b { "Fluffykins", Beast::Type::dragon };

    std::cout << b << " roars \"CMAKE WORKS!!\"\n";
}
