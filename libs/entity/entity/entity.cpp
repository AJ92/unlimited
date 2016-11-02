#include "entity.h"

#include "entity_p.h"

Entity::Entity(unsigned long long initial_id) : d_ptr(new EntityPrivate)
{
    //create private data...
    d_ptr->id = initial_id;
}

Entity::~Entity(){
    delete d_ptr;
}

unsigned long long Entity::id(){
    return d_ptr->id;
}
