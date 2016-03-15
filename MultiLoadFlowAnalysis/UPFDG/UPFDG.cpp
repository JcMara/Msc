/**
* Article
* Development of three-phase unbalanced power flow using PV and PQ models for distributed generation and study of the impact of DG models. 
* KHUSHALANI, S.; SOLANKI, J. M.; SCHULZ, N. N. 
* IEEE Transactions on Power Systems, v. 22, n. 3, p. 1019–1025, 2007.
* 
* Implementation - João Castilho Neto
*/

#include "stdafx.h"
#include "UPFDG.h"


// This is an example of an exported variable
UPFDG_API int nUPFDG=0;

// This is an example of an exported function.
UPFDG_API int fnUPFDG(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see UPFDG.h for the class definition
CUPFDG::CUPFDG()
{
    return;
}
