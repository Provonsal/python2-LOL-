#ifndef MYCHAROBJECT_H_
#define MYCHAROBJECT_H_

    #include "MyObject.h"

    /// @brief Мой Объект символа
    class MyCharObject : public MyObject
    {

    protected:
        char value = 0;
    public:

        MyCharObject() : MyObject({"MyChar", sizeof(char), 0}), value(0) {};
        MyCharObject(char v) : MyObject({"MyChar", sizeof(char), 0}), value(v) {};

        char GetValue() const
        {
            return value;
        }
    };
#endif // MYCHAROBJECT_H_