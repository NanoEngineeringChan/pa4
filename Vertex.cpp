#include "Vertex.h"
#include <iostream>

std::string Vertex::get_actor_name() const
{
  if (actor_name == "")
  {
    std::cout << " empty vertex";
    
    //make sure has a value, and uf not
  }
  return actor_name;
}

Vertex::~Vertex(){};
