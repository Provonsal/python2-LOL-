
#ifndef MYINTOBJECT_H_
#define MYINTOBJECT_H_

    #include "MyObject.h"


    /// @brief Мой Объект целого числа
    class MyListObject : public MyObject
    {
    protected:
        int value = 0;

    public:
        MyListObject() : MyObject({"MyListObject", sizeof(MyListObject), sizeof(MyObject)}), value(0) {};
        MyListObject(int v) : MyObject({"MyListObject", sizeof(MyListObject), sizeof(MyObject)}), value(v) {};

        int GetValue() const
        {
            return value;
        };
    };

#endif // MYINTOBJECT_H_