#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

    public:

        Zombie(void);
        ~Zombie(void);

        
    private:
    
        std::string name;       
        void    announce(void);
};

#endif