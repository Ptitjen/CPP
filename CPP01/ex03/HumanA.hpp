#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {

    public:

        HumanA(std::string name, Weapon& initial_w);
    
        ~HumanA(void);
 
        void    attack(void);
        

    private:
        std::string _name;
        Weapon&     _w;    
        
};

#endif