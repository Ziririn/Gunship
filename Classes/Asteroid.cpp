#include "Asteroid.h"
#include "Physics/Physics.h"
#include "Projectile.h"
#include "Definitions.h"

USING_NS_CC;

// Constructors
Asteroid::Asteroid(const Vec2& pos, const float& scale) : Asteroid(pos, std::make_unique<PhysMovement>(), scale) {}
Asteroid::Asteroid(const Vec2& pos, std::unique_ptr<PhysMovement> movement, const float& scale) : Target(pos, ASTEROID_MASS * scale * scale, ASTEROID_BOUNCINESS)
{
	asteroid_ = Sprite::create();
	asteroid_->initWithFile(ASTEROID_SPRITE);
	asteroid_->setPosition(0, 0);
	asteroid_->setScale(scale);

	rootNode_->addChild(asteroid_);

	addCollider(std::make_unique<PhysCircleCollider>(asteroid_->getContentSize().width / 2 * scale, ASTEROID_BITMASKS));
	setMovement(std::move(movement));

	healthPoints_ = ASTEROID_HP;
}
// Important for cleaning memory using base class pointer
Asteroid::~Asteroid() = default;

// Called on being hit (overlaped) by a Projectile
void Asteroid::onBeingHit(Projectile* projectile, const Vec2& toProjectile)
{
	if(healthPoints_ <= 1)
		destroy();
	else {
		--healthPoints_;
		const int temp = 255 * (static_cast<float>(healthPoints_) / ASTEROID_HP);
		asteroid_->setColor(Color3B(temp, temp, temp));
	}
}
