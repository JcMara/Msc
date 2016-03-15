// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the UPFDG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// UPFDG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UPFDG_EXPORTS
#define UPFDG_API __declspec(dllexport)
#else
#define UPFDG_API __declspec(dllimport)
#endif

// This class is exported from the UPFDG.dll
class UPFDG_API CUPFDG {
public:
	CUPFDG(void);
	// TODO: add your methods here.
};

extern UPFDG_API int nUPFDG;

UPFDG_API int fnUPFDG(void);
