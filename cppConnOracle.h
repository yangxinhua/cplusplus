#ifndef APPCONNORACLE_H
#define APPCONNORACLE_H
#endif
#include <iostream>
#include <stdio.h>
#if !defined(OTL_ORA11G_R2)
#define OTL_ORA11G_R2 // Compile OTL 4.0/OCI11R2
#endif
#if defined(__BORLANDC__)
#define OTL_BIGINT __int64 // Enabling G++ 64-bit integers
#define OTL_UBIGINT unsigned __int64 // Enabling G++ 64-bit integers
#elif !defined(_MSC_VER)
#define OTL_BIGINT long long // Enabling G++ 64-bit integers
#define OTL_UBIGINT unsigned long long // Enabling G++ 64-bit integers
#else
#define OTL_BIGINT __int64 // Enabling VC++ 64-bit integers
#define OTL_UBIGINT unsigned __int64 // Enabling VC++ 64-bit integers
#endif
#include "otlv4.h" // include the OTL 4.0 header file
