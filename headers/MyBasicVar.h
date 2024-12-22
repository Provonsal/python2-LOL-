#ifndef MYVAROBJECT_H_
#define MYVAROBJECT_H_

    #include "MyObject.h"

    /// @brief Мой Объект целого числа
    template <typename T>
    class MyVar : public MyObject
    {
    public:
        MyObject data;

        MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {"NULL", 0, 0};
        };
        MyVar(T v) : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {"NULL", 0, 0};
        };

        friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
        {
            os << "NULL";
            return os;
        };
    };
#endif // MYVAROBJECT_H_