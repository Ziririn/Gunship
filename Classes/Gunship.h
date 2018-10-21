#ifndef __GUNSHIP_H__
#define __GUNSHIP_H__

#include "GameObject.h"
#include "cocos2d.h"

// A gunship that can shoot projectiles
class Gunship : public GameObject
{
public:
	// Change where the gun 'looks'
	void lookAt(const cocos2d::Vec2& position);
	void lookInDirection(const cocos2d::Vec2& direction);

	// Shooting functions
	void startShooting();
	void stopShooting();
	void shoot();

	// Adds game object to scene
	virtual void addToScene(cocos2d::Scene* scene, int zLevel) override;

	// Constructor
	explicit Gunship(const cocos2d::Vec2& pos = cocos2d::Vec2::ZERO);
	// Important for cleaning memory using base class pointer
	virtual ~Gunship();

private:
	// Direction where the gun looks
	cocos2d::Vec2 gunDirection_;

	// Sprites
	cocos2d::Sprite* hull_;
	cocos2d::Sprite* gun_;
};

#endif // __GUNSHIP_H__
