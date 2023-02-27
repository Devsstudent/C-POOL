#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class  ICharacter;

class  AMateria{
  protected:
    std::string  materia_name;
  public:
    AMateria(std::string const & type);
    AMateria(const AMateria &a);
    AMateria & operator = (const AMateria &a);
    ~AMateria(void);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif