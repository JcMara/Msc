// NewtonRaphson.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "NewtonRaphson.h"


// This is an example of an exported variable
NEWTONRAPHSON_API int nNewtonRaphson=0;

// This is an example of an exported function.
NEWTONRAPHSON_API int fnNewtonRaphson(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see NewtonRaphson.h for the class definition
CNewtonRaphson::CNewtonRaphson()
{
    return;
}
