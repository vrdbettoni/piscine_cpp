#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
    
        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);

    private:
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorReduction;

        std::string _name;
        void    setStats();
};

#endif