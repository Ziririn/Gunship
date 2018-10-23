#ifndef __LASER_BALL_H__
#define __LASER_BALL_H__

#include "Projectile.h"
#include "cocos2d.h"

// A laser ball projectile
class LaserBall : public Projectile
{
public:
	// Constructors
	LaserBall(const cocos2d::Vec2& pos, const cocos2d::Vec2& speed);
	LaserBall(const cocos2d::Vec2& pos, std::unique_ptr<PhysMovement> movement);
	// Important for cleaning memory using base class pointer
	virtual ~LaserBall();

	// Called on hits
	virtual void onHit(const PhysContact& contact) override;

protected:
	// Called on hitting (overlapping) a Target
	virtual void onHitTarget(class Target* target, const cocos2d::Vec2& toTarget) override;

private:
	cocos2d::Sprite* laserBall_;
};

#endif // __LASER_BALL_H__
