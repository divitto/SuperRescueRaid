#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "SceneNode.hpp"

///
/// \brief The Entity class
///
class Entity : public SceneNode
{
    public:
        explicit			Entity(int hitpoints);

        void				setVelocity(sf::Vector2f velocity);
        void				setVelocity(float vx, float vy);
        void				accelerate(sf::Vector2f velocity);
        void				accelerate(float vx, float vy);
        sf::Vector2f		getVelocity() const;

        int					getHitpoints() const;
        void				repair(int points);
        void				damage( unsigned int points);
        void				destroy();
        virtual bool		isDestroyed() const;


    protected:
        virtual void		updateCurrent(sf::Time dt, CommandQueue& commands);


    protected:
        sf::Vector2f		mVelocity;
        int					mHitpoints;
};

#endif // ENTITY_HPP
