#ifndef MYCHAROBJECT_H_
#define MYCHAROBJECT_H_

    #include "MyObject.h"

    #define CAST_TO_CHAR(ob) (*MyCharObject)(ob+ob.type->basicsize);

    /// @brief Мой Объект символа
    class MyCharObject : public MyObject
    {

    protected:
        char value = 0;
    public:

        MyCharObject() : MyObject({"MyChar", sizeof(MyCharObject), 0}), value(0) {};
        MyCharObject(char v) : MyObject({"MyChar", sizeof(MyCharObject), 0}), value(v) {};

        char GetValue() const
        {
            return value;
        }

        Type* GetRef(){
            return &type;
        }
    };
#endif // MYCHAROBJECT_H_