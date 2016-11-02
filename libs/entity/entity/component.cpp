#include "component.h"

#include "component_p.h"

Component::Component(std::string initial_component_type) : d_ptr(new ComponentPrivate)
{
    d_ptr->component_type = initial_component_type;
}

Component::~Component(){
    delete d_ptr;
}

std::string Component::component_type(){
    return d_ptr->component_type;
}
