
#ifndef MYINTOBJECT_H_
#define MYINTOBJECT_H_

    #include "MyObject.h"


    /// @brief Мой Объект целого числа
    class MyIntObject : public MyObject
    {
    protected:
        int value = 0;

    public:
        MyIntObject() : MyObject({"MyInt", sizeof(MyIntObject), 0}), value(0) {};
        MyIntObject(int v) : MyObject({"MyInt", sizeof(MyIntObject), 0}), value(v) {};

        int GetValue() const
        {
            return value;
        };
    };

#endif // MYINTOBJECT_H_