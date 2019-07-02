#ifndef BEAST_HPP
#define BEAST_HPP

#include <string>
#include <iostream>

class Beast {
public:
    enum class Type { animal, magical, dragon };

    Beast() = delete;
    Beast(const std::string& name, Type type);

    std::string name() const { return n; }
    Type type() const { return t; }
private:
    const std::string n;
    const Type t;
};

std::ostream& operator<<(std::ostream& os, const Beast& b);

#endif  // BEAST_HPP
