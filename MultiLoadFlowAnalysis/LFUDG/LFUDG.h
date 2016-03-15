// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LFUDG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LFUDG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LFUDG_EXPORTS
#define LFUDG_API __declspec(dllexport)
#else
#define LFUDG_API __declspec(dllimport)
#endif

// This class is exported from the LFUDG.dll
class LFUDG_API CLFUDG {
public:
	CLFUDG(void);
	// TODO: add your methods here.
};

extern LFUDG_API int nLFUDG;

LFUDG_API int fnLFUDG(void);
