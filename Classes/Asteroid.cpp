#include "Asteroid.h"
#include "Physics/Physics.h"
#include "Projectile.h"
#include "Definitions.h"

USING_NS_CC;

// Constructors
Asteroid::Asteroid(const cocos2d::Vec2& pos) : Asteroid(pos, std::make_unique<PhysMovement>()) {}
Asteroid::Asteroid(const cocos2d::Vec2& pos, std::unique_ptr<PhysMovement> movement) : Target(pos, ASTEROID_MASS, ASTEROID_BOUNCINESS)
{
	asteroid_ = Sprite::create();
	asteroid_->initWithFile(ASTEROID_SPRITE);
	asteroid_->setPosition(0, 0);

	rootNode_->addChild(asteroid_);

	addCollider(std::make_unique<PhysCircleCollider>(asteroid_->getContentSize().width / 2, ASTEROID_BITMASKS));
	setMovement(std::move(movement));
}
// Important for cleaning memory using base class pointer
Asteroid::~Asteroid() = default;
