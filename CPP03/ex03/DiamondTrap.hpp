#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class  DiamondTrap: public FragTrap, public ScavTrap{
    private:
      std::string  name;
    public:
      DiamondTrap(void);
      DiamondTrap(const std::string _name);
      DiamondTrap(const DiamondTrap &a);
      DiamondTrap& operator = (const DiamondTrap &a);
      ~DiamondTrap(void);
      void  whoAmI(void);
};

#endif