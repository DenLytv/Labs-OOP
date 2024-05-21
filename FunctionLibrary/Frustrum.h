#pragma once
#ifdef FUNCTIONLIBRARY_EXPORTS
#define FUNCTIONLIBRARY_API __declspec(dllexport)
#else
#define FUNCTIONLIBRARY_API __declspec(dllimport)
#endif

extern "C" FUNCTIONLIBRARY_API double findArea(double r1, double r2, double t);