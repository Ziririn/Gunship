#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__

// Visible origin, size (of screen) and center
#define ORIGIN Director::getInstance()->getVisibleOrigin()
#define V_SIZE Director::getInstance()->getVisibleSize()
#define CENTER_X (ORIGIN.x + V_SIZE.width / 2.0)   // sometimes we only 
#define CENTER_Y (ORIGIN.y + V_SIZE.height / 2.0) // need one axis
#define CENTER Vec2(CENTER_X, CENTER_Y) 

// For UI
#define MAIN_FONT "fonts/y2k.ttf"
#define GREEN_COLOR Color3B(111, 185, 109) // 40, 210, 35
#define GAME_UI_COLOR Color3B::WHITE
#define GAME_UI_SHADOW_COLOR GREEN_COLOR
#define GAME_UI_FONT_SIZE (0.04 * V_SIZE.height)
#define GAME_UI_SHADOW_SIZE (GAME_UI_FONT_SIZE * 0.04)
#define GAME_OVER_NUMBER_TEXT_FONT_SIZE (0.04 * V_SIZE.height)
#define GAME_OVER_NUMBER_TEXT_SHADOW_SIZE (GAME_OVER_NUMBER_TEXT_FONT_SIZE * 0.04)
#define GAME_OVER_NUMBER_FONT_SIZE (0.08 * V_SIZE.height)
#define GAME_OVER_NUMBER_SHADOW_SIZE (GAME_OVER_NUMBER_FONT_SIZE * 0.04)
#define GAME_OVER_NUMBER_MIN_DELAY 0.17
#define GAME_OVER_NUMBER_MAX_DELAY 0.55
#define GAME_OVER_NUMBER_TICK_POWER 1.3
#define GAME_UI_SCALE 0.8

// For memory
#define BEST_SCORE_TAG "BestScore"
#define BEST_TIME_TAG "BestTime"

// For sprites
#define BACKGROUND_SPRITE "sprites/Background.png"
#define SPLASH_SCREEN_SPRITE "sprites/SplashScreen.png"
#define TITLE_SPRITE "sprites/Title.png"
#define EXIT_BUTTON_NORMAL_SPRITE "sprites/ExitButtonNormal.png"
#define EXIT_BUTTON_PRESSED_SPRITE "sprites/ExitButtonPressed.png"
#define PLAY_BUTTON_NORMAL_SPRITE "sprites/PlayButtonNormal.png"
#define PLAY_BUTTON_PRESSED_SPRITE "sprites/PlayButtonPressed.png"
#define MENU_BUTTON_NORMAL_SPRITE "sprites/MenuButtonNormal.png"
#define MENU_BUTTON_PRESSED_SPRITE "sprites/MenuButtonPressed.png"
#define RETRY_BUTTON_NORMAL_SPRITE "sprites/RetryButtonNormal.png"
#define RETRY_BUTTON_PRESSED_SPRITE "sprites/RetryButtonPressed.png"
#define GUNSHIP_SPRITE "sprites/Gunship.png"
#define GUN_SPRITE "sprites/Gun.png"
#define LASER_BALL_SPRITE "sprites/LaserBall.png"
#define ASTEROID_SPRITE "sprites/Asteroid.png"
#define WIN_SPRITE "sprites/WinLabel.png"
#define LOSS_SPRITE "sprites/LossLabel.png"

// For sounds
#define GAME_BACKGROUND_MUSIC "audio/bgGame.mp3"
#define MENU_BACKGROUND_MUSIC "audio/bgMenu.wav"
#define CLICK_SOUND_EFFECT "audio/click.wav"
#define LASER_HIT_SOUND_EFFECT "audio/laserHit.wav"
#define LASER_BOUNCE_SOUND_EFFECT "audio/laserBounce.wav"
#define GUNSHIP_BOUNCE_SOUND_EFFECT LASER_BOUNCE_SOUND_EFFECT
#define ASTEROID_BOUNCE_SOUND_EFFECT LASER_HIT_SOUND_EFFECT
#define SHOOT_NORMAL_SOUND_EFFECT "audio/shootNormal.wav"
#define SHOOT_POWERFUL_SOUND_EFFECT "audio/shootPowerful.wav"
#define SCORE_TICK_SOUND_EFFECT "audio/scoreTick.wav"
#define TIME_OUT_SOUND_EFFECT "audio/timeOut.wav"
#define TIME_TICK_SOUND_EFFECT "audio/timeTick.wav"
#define WIN_SOUND_EFFECT "audio/win.wav"

// For particles
#define STARS_PARTICLES "particles/stars.plist"
#define SPARKS_PARTICLES "particles/spark.plist"
#define LASER_BALL_DESTROYED_PARTICLES SPARKS_PARTICLES
#define LASER_BALL_BOUNCED_PARTICLES SPARKS_PARTICLES
#define LASER_BALL_TRAIL_PARTICLES "particles/laserTrail.plist"
#define GUNSHIP_BOOSTERS_PARTICLES "particles/boosters.plist"
#define GUNSHIP_BOUNCED_PARTICLES SPARKS_PARTICLES
#define ASTEROID_BREAK_PARTICLES "particles/wreck.plist"
#define ASTEROID_BOUNCED_PARTICLES "particles/debris.plist"
#define CURSOR_PARTICLES "particles/cursor.plist"

// For scene transitions and durations
#define SCENE_TRANSITION_TIME 0.5
#define SCENE_TRANSITION_TYPE TransitionCrossFade
#define SCENE_TRANSITION(scene) SCENE_TRANSITION_TYPE::create(SCENE_TRANSITION_TIME, scene)
#define GAME_OVER_SCENE_TRANSITION_DELAY 0.8 // delay after game is over and before going to game over screen
#define SPLASH_SCREEN_DURATION 1.0

// Z levels
#define Z_LEVEL_BACKGROUND	0
#define Z_LEVEL_STARS	    1
#define Z_LEVEL_TARGET		2
#define Z_LEVEL_PROJECTILE	3
#define Z_LEVEL_GUNSHIP		4
#define Z_LEVEL_UI			5

// For gunship
#define SHOT_INTERVAL 0.4
#define POWER_SHOT_INDEX 4
#define POWER_SHOT_SPEED_K 1.2
#define POWER_SHOT_ANGULAR_SPEED 400
#define POWER_SHOT_CURVE_DURATION 0.5
#define GUNSHIP_MASS 3.5
#define GUNSHIP_BOUNCINESS 1
#define GUNSHIP_ACCELERATION (0.1 * V_SIZE.width)
#define LASER_BALL_MASS 0.8
#define LASER_BALL_BOUNCINESS 1
#define LASER_BALL_LIFE_TIME 5
#define LASER_BALL_SPAWN_DISTANCE 0.8 // based on cannon size
#define LASER_BALL_NORMAL_COLOR Color3B::WHITE
#define LASER_BALL_POWERFUL_COLOR Color3B(40, 210, 35)
#define LASER_BALL_START_OPACITY 255

// For asteroids
#define ASTEROIDS_SPARCITY 0.4
#define ASTEROID_MASS 5
#define ASTEROID_BOUNCINESS 1
#define ASTEROID_MAX_SPEED 0.08 // based on screen width
#define ASTEROID_MAX_ANGULAR_SPEED 120
#define ASTEROID_MIN_CURVE_TIME 1
#define ASTEROID_MAX_CURVE_TIME 10
#define ASTEROID_MIN_SCALE 0.8
#define ASTEROID_MAX_SCALE 1.6
#define ASTEROID_HP 2
#define ASTEROIDS_CURVED_COLOR Color3B(255, 200, 200)

// For physics
#define PHYSICS_UPDATE_INTERVAL (1.0 / 60)
#define N_PARTITIONS_X 4
#define N_PARTITIONS_Y 3
#define PARTITIONS_OUTSIDE_OFFSET 0.05 // based on screen size
#define DIR_HELPER 0.9
#define EDGE_WIDTH 10
#define COLLISION_BITMASK_ALL        0b11111111
#define COLLISION_BITMASK_NOTHING	 0b00000000
#define COLLISION_BITMASK_GUNSHIP    0b00000001
#define COLLISION_BITMASK_ASTEROID   0b00000010
#define COLLISION_BITMASK_PROJECTILE 0b00000100
#define COLLISION_BITMASK_EDGE	     0b00001000
// self, hit, overlap
#define EDGE_BITMASKS       COLLISION_BITMASK_EDGE, \
                            COLLISION_BITMASK_ALL, \
                            COLLISION_BITMASK_NOTHING
#define GUNSHIP_BITMASKS    COLLISION_BITMASK_GUNSHIP, \
	                        COLLISION_BITMASK_ASTEROID | COLLISION_BITMASK_EDGE | COLLISION_BITMASK_GUNSHIP, \
	                        COLLISION_BITMASK_NOTHING
#define ASTEROID_BITMASKS   COLLISION_BITMASK_ASTEROID, \
	                        COLLISION_BITMASK_ASTEROID | COLLISION_BITMASK_EDGE | COLLISION_BITMASK_GUNSHIP, \
						    COLLISION_BITMASK_PROJECTILE
#define LASER_BALL_BITMASKS COLLISION_BITMASK_PROJECTILE, \
	                        COLLISION_BITMASK_EDGE, \
                            COLLISION_BITMASK_ASTEROID

// Other
#define TIME_OUT_TIMER 5
#define INPUT_FILE "input.txt"
#define INPUT_COUNT_TARGET_TAG "CountTarget"
#define INPUT_PROJECTILE_SPEED_TAG "Speed"
#define INPUT_GAME_TIME_TAG "Time"


#endif // __DEFINITIONS_H__
