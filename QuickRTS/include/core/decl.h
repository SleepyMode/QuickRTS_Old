
#ifndef QUICKRTS_CORE_DECL_H_
#define QUICKRTS_CORE_DECL_H_

//-----------------------------------------------------------------------------
// QuickRTS Core Declarations File.
// This file will include declarations for common things.
//-----------------------------------------------------------------------------

typedef		unsigned char		uint8;
typedef		unsigned short		uint16;
typedef		unsigned int		uint32;
typedef		unsigned long long	uint64;
typedef		signed char			int8;
typedef		signed short		int16;
typedef		signed int			int32;
typedef		signed long long	int64;

#define NO_VTABLE __declspec( novtable )

#define abstract_class class NO_VTABLE
#define abstract_struct struct NO_VTABLE

#define DLL_EXPORT extern "C" __declspec( dllexport )
#define DLL_IMPORT extern "C" __declspec( dllimport )

#define DLL_CLASS_EXPORT __declspec( dllexport )
#define DLL_CLASS_IMPORT __declspec( dllimport )

#define DLL_GLOBAL_EXPORT __declspec( dllexport )
#define DLL_GLOBAL_IMPORT extern __declspec( dllimport )

#define FORCEINLINE __forceinline

#endif // QUICKRTS_CORE_DECL_H_