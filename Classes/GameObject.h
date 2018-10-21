#ifndef __GAME_OBJECT_H__
#define __GAME_OBJECT_H__

#include "Physics/PhysBody.h"
#include "cocos2d.h"

// Basic game object that has (is) a physics body and cointains a scene node to attach sprites to
class GameObject : public PhysBody
{
public:
	// Update position and inform the world about it
	// Also set new node position to move sprites
	virtual void setPosition(const cocos2d::Vec2& pos) override;

	// Set activeness and inform the world
	// Also changes visibility
	virtual void setActive(bool active) override;

	// Constructor
	explicit GameObject(const cocos2d::Vec2& pos = cocos2d::Vec2::ZERO, const float& mass = 1, const float& bounciness = 1);
	// Important for cleaning memory using base class pointer
	virtual ~GameObject();

protected:
	// Root of the object
	cocos2d::Node* rootNode_;
};

#endif // __GAME_OBJECT_H__
