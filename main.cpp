#include <iostream>
#include <string>

#include "headers/Lizheart.h"

using namespace std;



// //////////////////////////// БАЗОВЫЕ ТИПЫ

// /// @brief Базовый класс типа
// class Type
// {
// public:
//     string name;
//     unsigned long basicsize;
//     unsigned long itemsize;

// public:
//     Type() : name(""), basicsize(0), itemsize(0) {};
//     Type(const string &nm, unsigned long bs, unsigned long is) : name(nm), basicsize(bs), itemsize(is) {};
// };

// /// @brief Базовый класс объекта
// struct MyObject
// {
// public:
//     Type type;

//     MyObject() : type({}) {};

//     MyObject(Type tp) : type(tp) {};
// };





// //////////////////////////// САМОПИСНЫЕ ТИПЫ




// /// @brief Мой Объект целого числа
// class MyIntObject : public MyObject
// {
// protected:
//     int value = 0;

// public:
//     MyIntObject() : MyObject({"MyInt", sizeof(MyIntObject), 0}), value(0) {};
//     MyIntObject(int v) : MyObject({"MyInt", sizeof(MyIntObject), 0}), value(v) {};

//     int GetValue() const
//     {
//         return value;
//     };
// };

// /// @brief Мой Объект символа
// class MyCharObject : public MyObject
// {

// protected:
//     char value = 0;
// public:

//     MyCharObject() : MyObject({"MyChar", sizeof(char), 0}), value(0) {};
//     MyCharObject(char v) : MyObject({"MyChar", sizeof(char), 0}), value(v) {};

//     char GetValue() const
//     {
//         return value;
//     }
// };




// //////////////////////////// ТИП ПЕРЕМЕННОЙ И ШАБЛОНЫ ЕГО




// /// @brief Мой Объект целого числа
// template <typename T>
// class MyVar : public MyObject
// {
// public:
//     MyObject data;

//     MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {"NULL", 0, 0};
//     };
//     MyVar(T v) : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {"NULL", 0, 0};
//     };

//     friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
//     {
//         os << "NULL";
//         return os;
//     };
// };

// template <>
// class MyVar<int> : public MyObject
// {
// public:
//     MyIntObject data;

//     MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {0};
//     };
//     MyVar(int v) : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {v};
//     };

//     friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
//     {
//         os << ob.data.GetValue();
//         return os;
//     };
// };

// template <>
// class MyVar<char> : public MyObject
// {
// public:
//     MyCharObject data;

//     MyVar() : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {'\0'};
//     };
//     MyVar(char v) : MyObject({"MyVariable", sizeof(MyVar), 0})
//     {
//         data = {v};
//     };

//     friend std::ostream &operator<<(std::ostream &os, const MyVar &ob)
//     {
//         os << ob.data.GetValue();
//         return os;
//     };
// };

void print()
{
    cout << endl;
}

template <typename First, typename... MyObject>
void print(First arg, const MyObject &...rest)
{
    std::cout << arg << " ";
    print(rest...);
};

// #define mychar MyVar<char>
// #define myint MyVar<int>





int main()
{

    mychar var = 'd';

    myint var2 = 2032;



    print(var, var2);

    return 0;
}
