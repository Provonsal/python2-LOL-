
#ifndef MYOBJECT_H_
#define MYOBJECT_H_

    // List.h code


    #include "MyType.h"

    /// @brief Базовый класс объекта
    struct MyObject
    {
    public:
        Type type;
        MyObject() : type({}) {};
        MyObject(Type tp) : type(tp) {};
    };

#endif // MYOBJECT_H_