#include "coupi.h"

string getFunction1()
{
    static const QString LIB_NAME = "D:/QTProjects/testAssigment/coupi.dll";
    QLibrary lib( LIB_NAME );
    typedef const char*  (*FUNCTION_POINTER)();
    if( !lib.load() )
    {
        return "DLL Loading failed!";
    }
    else
    {
        FUNCTION_POINTER PFUNC = (FUNCTION_POINTER) lib.resolve("function1");
        if (PFUNC)
            return PFUNC();
        else
            return "function not found in dll file";
    }
    lib.unload();
}

string getFunction2()
{
    static const QString LIB_NAME = "D:/QTProjects/testAssigment/coupi.dll";
    QLibrary lib( LIB_NAME );
    typedef const char*  (*FUNCTION_POINTER)();
    if( !lib.load() )
    {
        return "DLL Loading failed!";
    }
    else
    {
        FUNCTION_POINTER PFUNC = (FUNCTION_POINTER) lib.resolve("function2");
        if (PFUNC)
            return PFUNC();
        else
            return "function not found in dll file";
    }
    lib.unload();
}

string getFunction3()
{
    static const QString LIB_NAME = "D:/QTProjects/testAssigment/coupi.dll";
    QLibrary lib( LIB_NAME );
    typedef const char*  (*FUNCTION_POINTER)();
    if( !lib.load() )
    {
        return "DLL Loading failed!";
    }
    else
    {
        FUNCTION_POINTER PFUNC = (FUNCTION_POINTER) lib.resolve("function3");
        if (PFUNC)
            return PFUNC();
        else
            return "function not found in dll file";
    }
    lib.unload();
}
