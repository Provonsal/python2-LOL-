#ifndef MYTYPEOBJECT_H_
#define MYTYPEOBJECT_H_

    #include <string>

    /// @brief Базовый класс типа
    class Type
    {
    public:
        std::string name;
        unsigned long basicsize;
        unsigned long itemsize;

    public:
        Type() : name(""), basicsize(0), itemsize(0) {};
        Type(const std::string &nm, unsigned long bs, unsigned long is) : name(nm), basicsize(bs), itemsize(is) {};
    };
#endif // MYTYPEOBJECT_H_