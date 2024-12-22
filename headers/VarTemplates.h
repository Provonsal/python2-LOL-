#ifndef MYTEMPLATES_H_
#define MYTEMPLATES_H_

    #include <iostream>

    #include "MyChar.h"
    #include "MyInt.h"
    #include "MyBasicVar.h"
    #include "MyObject.h"

    template <>
    class MyVar<int> : public MyObject
    {
    public:
        MyIntObject data;

        MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {0};
        };
        MyVar(int v) : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {v};
        };

        friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
        {
            os << ob.data.GetValue();
            return os;
        };
    };

    template <>
    class MyVar<char> : public MyObject
    {
    public:
        MyCharObject data;

        MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {'\0'};
        };
        MyVar(char v) : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {v};
        };

        friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
        {
            os << ob.data.GetValue();
            return os;
        };
    };

    template <>
    class MyVar<int*> : public MyObject
    {
    public:
        MyCharObject data;

        MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {'\0'};
        };
        MyVar(char v) : MyObject({"MyVariable", sizeof(MyVar), 0})
        {
            data = {v};
        };

        friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
        {
            os << ob.data.GetValue();
            return os;
        };
    };
#endif // MYTEMPLATES_H_