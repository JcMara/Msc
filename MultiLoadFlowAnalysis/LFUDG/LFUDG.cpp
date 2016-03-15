/**
* Article
* Load Flow Method for Unbalanced Distribution Networks with Dispersed Generation Units
* H. Shateri, M. Ghorbani, N. eskandari, A. H. Mohammad Khani
* 
* Implementation - João Castilho Neto
*/
#include "stdafx.h"
#include "LFUDG.h"


// This is an example of an exported variable
LFUDG_API int nLFUDG=0;

// This is an example of an exported function.
LFUDG_API int fnLFUDG(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see LFUDG.h for the class definition
CLFUDG::CLFUDG()
{
    return;
}
