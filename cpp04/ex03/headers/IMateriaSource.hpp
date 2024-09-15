#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
    public:
    virtual ~IMateriaDource();
    virtual void learnMateria(AMateria* m) = 0;
    virtual AMateria* createMateria(std::string const &type) = 0;

};

#endif