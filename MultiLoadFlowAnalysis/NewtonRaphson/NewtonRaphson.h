// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NEWTONRAPHSON_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NEWTONRAPHSON_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef NEWTONRAPHSON_EXPORTS
#define NEWTONRAPHSON_API __declspec(dllexport)
#else
#define NEWTONRAPHSON_API __declspec(dllimport)
#endif

// This class is exported from the NewtonRaphson.dll
class NEWTONRAPHSON_API CNewtonRaphson {
public:
	CNewtonRaphson(void);
	// TODO: add your methods here.
};

extern NEWTONRAPHSON_API int nNewtonRaphson;

NEWTONRAPHSON_API int fnNewtonRaphson(void);
