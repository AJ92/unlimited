#ifndef ENTITYMANAGER_P_H
#define ENTITYMANAGER_P_H

#include <string>           //component type
#include <unordered_map>    //hashmap
#include <vector>           //list
#include <memory>           //shared_ptr
#include "entity.h"
#include "component.h"


struct EntityManagerPrivate
{
    std::unordered_map<unsigned long long, Component> id_components;
};


#endif // ENTITYMANAGER_P_H
