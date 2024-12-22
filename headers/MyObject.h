
#ifndef MYOBJECT_H_
#define MYOBJECT_H_

    
    #include "MyType.h"
    
    #define CAST_TO_OB(var) (MyObject*)(var.data.GetRef());

    /// @brief Базовый класс объекта
    struct MyObject
    {
    public:
        Type type;
        MyObject() : type({}) {};
        MyObject(Type tp) : type(tp) {};
    };

#endif // MYOBJECT_H_