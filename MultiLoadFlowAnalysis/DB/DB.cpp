// DB.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DB.h"


// This is an example of an exported variable
DB_API int nDB=0;

// This is an example of an exported function.
DB_API int fnDB(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see DB.h for the class definition
CDB::CDB()
{
    return;
}
