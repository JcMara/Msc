// Rede.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Rede.h"


// This is an example of an exported variable
REDE_API int nRede=0;

// This is an example of an exported function.
REDE_API int fnRede(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Rede.h for the class definition
CRede::CRede()
{
    return;
}
