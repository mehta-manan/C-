#include <iostream>

class Entity
{
public:
    // dynamic_cast requires polymorphic classes
    virtual void PrintName() {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

// Run-Time Type Information (RTTI)
int main()
{
    Entity *actualPlayer = new Player(); // implicit upcast
    Entity *actualEnemy = new Enemy(); // implicit upcast
    
    Player* p1 = dynamic_cast<Player *>(actualPlayer);
    Player* p2 = dynamic_cast<Player *>(actualEnemy); 

    if (p1)
        std::cout << "p1 is not NULL" << std::endl;
    else
        std::cout << "p1 is NULL" << std::endl;

    if (p2)
        std::cout << "p2 is not NULL" << std::endl;
    else
        std::cout << "p2 is NULL" << std::endl;
}

// Output:
// p1 is not NULL
// p2 is NULL