#ifndef ENTITY_GLOBAL_H
#define ENTITY_GLOBAL_H


#if defined(ENTITY_LIBRARY)
#  define ENTITYSHARED_EXPORT __declspec(dllexport)
#else
#  define ENTITYSHARED_EXPORT __declspec(dllimport)
#endif

#endif // ENTITY_GLOBAL_H
