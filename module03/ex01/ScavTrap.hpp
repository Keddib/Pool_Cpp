#ifndef SCAVTRAP_77_HPP
#define SCAVTRAP_77_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string);
		~ScavTrap( void );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap& );
		void attack( const std::string&);
		void guardGate();
};

#endif
