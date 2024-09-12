#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "Utils.hpp"
class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(const ScavTrap &other);
    ScavTrap& operator=(const ScavTrap &other);
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
};

#endif