#include "Target.h"
#include "Physics/Physics.h"
#include "Projectile.h"
#include "Definitions.h"

// #include "audio/include/SimpleAudioEngine.h"
// using namespace CocosDenshion;

USING_NS_CC;

// Constructor
Target::Target(const cocos2d::Vec2& pos, const float& mass, const float& bounciness) : GameObject(pos, mass, bounciness) { }
// Important for cleaning memory using base class pointer
Target::~Target() = default;

// Called on being hit (overlaped) by a Projectile
void Target::onBeingHit(Projectile* projectile, const cocos2d::Vec2& toProjectile)
{
	// Target is destroyed
	destroy();
}
