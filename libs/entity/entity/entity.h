#ifndef ENTITY_H
#define ENTITY_H

#include "entity_global.h"

struct EntityPrivate;

class ENTITYSHARED_EXPORT Entity
{

public:
    Entity(unsigned long long initial_id);
    ~Entity();

    unsigned long long id();
private:
    EntityPrivate *d_ptr;
};

#endif // ENTITY_H
