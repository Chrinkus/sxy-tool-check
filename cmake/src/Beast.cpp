#include "Beast.hpp"

Beast::Beast(const std::string& name, Type type)
    : n{name}, t{type}
{
    // nothing yet..
}

std::ostream& operator<<(std::ostream& os, const Beast& b)
{
    const std::string type = [&] {
        switch (b.type()) {
        case Beast::Type::animal:   return "animal";
        case Beast::Type::magical:  return "creature";
        case Beast::Type::dragon:   return "dragon";
        default:                    return "unknown";
        }
    }();

    return os << b.name() << ", the " << type;
}
