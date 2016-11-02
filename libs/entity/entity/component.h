#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include "entity_global.h"

struct ComponentPrivate;

class ENTITYSHARED_EXPORT Component
{
public:
    Component(std::string initial_component_type);
    ~Component();

    std::string component_type();
private:
    ComponentPrivate *d_ptr;

};

#endif // COMPONENT_H
