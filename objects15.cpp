#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_gimmickmovingpillar3_1409_0_0[1];
static Direction direction_gimmickmovingpillar3_1409_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingpillar3_1409_0_0, 1};
static Animation anim_gimmickmovingpillar3_1409_0 = {&direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, NULL, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0, &direction_gimmickmovingpillar3_1409_0_0};
static Animation * anim_array_gimmickmovingpillar3_1409[1] = {&anim_gimmickmovingpillar3_1409_0};
static Animations anim_gimmickmovingpillar3_1409 = {1, &anim_array_gimmickmovingpillar3_1409[0]};
static bool anim_gimmickmovingpillar3_1409_initialized;
class GimmickMovingPillar3_1409 : public Active
{
public:
    GimmickMovingPillar3_1409(int x, int y) : Active(x, y, GimmickMovingPillar3_1409_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingPillar 3", 22);
#endif
        this->animations = &anim_gimmickmovingpillar3_1409;
        if (!anim_gimmickmovingpillar3_1409_initialized) {
            anim_gimmickmovingpillar3_1409_initialized = true;
            images_gimmickmovingpillar3_1409_0_0[0] = get_internal_image(10861);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickmovingpillar3_1409(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingPillar3_1409(x, y);
}
static Image* images_cavesoilcraterfront_1410_0_0[1];
static Direction direction_cavesoilcraterfront_1410_0_0 = {0, 50, 50, 0, 1, images_cavesoilcraterfront_1410_0_0, 1};
static Animation anim_cavesoilcraterfront_1410_0 = {&direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, NULL, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0, &direction_cavesoilcraterfront_1410_0_0};
static Animation * anim_array_cavesoilcraterfront_1410[1] = {&anim_cavesoilcraterfront_1410_0};
static Animations anim_cavesoilcraterfront_1410 = {1, &anim_array_cavesoilcraterfront_1410[0]};
static bool anim_cavesoilcraterfront_1410_initialized;
class CaveSoilCraterFront_1410 : public Active
{
public:
    CaveSoilCraterFront_1410(int x, int y) : Active(x, y, CaveSoilCraterFront_1410_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Cave Soil crater front", 22);
#endif
        this->animations = &anim_cavesoilcraterfront_1410;
        if (!anim_cavesoilcraterfront_1410_initialized) {
            anim_cavesoilcraterfront_1410_initialized = true;
            images_cavesoilcraterfront_1410_0_0[0] = get_internal_image(58);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_cavesoilcraterfront_1410(int x, int y)
{
    return new (Active::pool.create()) CaveSoilCraterFront_1410(x, y);
}
static Image* images_cavesoilcraterfront2_1411_0_0[1];
static Direction direction_cavesoilcraterfront2_1411_0_0 = {0, 50, 50, 0, 1, images_cavesoilcraterfront2_1411_0_0, 1};
static Animation anim_cavesoilcraterfront2_1411_0 = {&direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, NULL, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0, &direction_cavesoilcraterfront2_1411_0_0};
static Animation * anim_array_cavesoilcraterfront2_1411[1] = {&anim_cavesoilcraterfront2_1411_0};
static Animations anim_cavesoilcraterfront2_1411 = {1, &anim_array_cavesoilcraterfront2_1411[0]};
static bool anim_cavesoilcraterfront2_1411_initialized;
class CaveSoilCraterFront2_1411 : public Active
{
public:
    CaveSoilCraterFront2_1411(int x, int y) : Active(x, y, CaveSoilCraterFront2_1411_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Cave Soil crater front 2", 24);
#endif
        this->animations = &anim_cavesoilcraterfront2_1411;
        if (!anim_cavesoilcraterfront2_1411_initialized) {
            anim_cavesoilcraterfront2_1411_initialized = true;
            images_cavesoilcraterfront2_1411_0_0[0] = get_internal_image(3553);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_cavesoilcraterfront2_1411(int x, int y)
{
    return new (Active::pool.create()) CaveSoilCraterFront2_1411(x, y);
}
static Image* images_levelfloatingplatform3_1412_0_0[1];
static Direction direction_levelfloatingplatform3_1412_0_0 = {0, 50, 50, 0, 1, images_levelfloatingplatform3_1412_0_0, 1};
static Animation anim_levelfloatingplatform3_1412_0 = {&direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, NULL, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0, &direction_levelfloatingplatform3_1412_0_0};
static Animation * anim_array_levelfloatingplatform3_1412[1] = {&anim_levelfloatingplatform3_1412_0};
static Animations anim_levelfloatingplatform3_1412 = {1, &anim_array_levelfloatingplatform3_1412[0]};
static bool anim_levelfloatingplatform3_1412_initialized;
class LevelFloatingPlatform3_1412 : public Active
{
public:
    LevelFloatingPlatform3_1412(int x, int y) : Active(x, y, LevelFloatingPlatform3_1412_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_FloatingPlatform 3", 24);
#endif
        set_visible(false);
        this->animations = &anim_levelfloatingplatform3_1412;
        if (!anim_levelfloatingplatform3_1412_initialized) {
            anim_levelfloatingplatform3_1412_initialized = true;
            images_levelfloatingplatform3_1412_0_0[0] = get_internal_image(4763);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelfloatingplatform3_1412(int x, int y)
{
    return new (Active::pool.create()) LevelFloatingPlatform3_1412(x, y);
}
static Image* images_levelminetrackswitch_1413_0_0[1];
static Direction direction_levelminetrackswitch_1413_0_0 = {0, 50, 50, 0, 1, images_levelminetrackswitch_1413_0_0, 1};
static Animation anim_levelminetrackswitch_1413_0 = {&direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, NULL, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0, &direction_levelminetrackswitch_1413_0_0};
static Animation * anim_array_levelminetrackswitch_1413[1] = {&anim_levelminetrackswitch_1413_0};
static Animations anim_levelminetrackswitch_1413 = {1, &anim_array_levelminetrackswitch_1413[0]};
static bool anim_levelminetrackswitch_1413_initialized;
class LevelMinetrackSwitch_1413 : public Active
{
public:
    LevelMinetrackSwitch_1413(int x, int y) : Active(x, y, LevelMinetrackSwitch_1413_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_MinetrackSwitch", 21);
#endif
        this->animations = &anim_levelminetrackswitch_1413;
        if (!anim_levelminetrackswitch_1413_initialized) {
            anim_levelminetrackswitch_1413_initialized = true;
            images_levelminetrackswitch_1413_0_0[0] = get_internal_image(9453);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -1);
    }
};
FrameObject * create_levelminetrackswitch_1413(int x, int y)
{
    return new (Active::pool.create()) LevelMinetrackSwitch_1413(x, y);
}
static Image* images_levelhandcarhandle_1414_0_0[1];
static Direction direction_levelhandcarhandle_1414_0_0 = {0, 50, 50, 0, 1, images_levelhandcarhandle_1414_0_0, 1};
static Animation anim_levelhandcarhandle_1414_0 = {&direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, NULL, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0, &direction_levelhandcarhandle_1414_0_0};
static Animation * anim_array_levelhandcarhandle_1414[1] = {&anim_levelhandcarhandle_1414_0};
static Animations anim_levelhandcarhandle_1414 = {1, &anim_array_levelhandcarhandle_1414[0]};
static bool anim_levelhandcarhandle_1414_initialized;
class LevelHandcarHandle_1414 : public Active
{
public:
    LevelHandcarHandle_1414(int x, int y) : Active(x, y, LevelHandcarHandle_1414_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HandcarHandle", 19);
#endif
        this->animations = &anim_levelhandcarhandle_1414;
        if (!anim_levelhandcarhandle_1414_initialized) {
            anim_levelhandcarhandle_1414_initialized = true;
            images_levelhandcarhandle_1414_0_0[0] = get_internal_image(9445);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcarhandle_1414(int x, int y)
{
    return new (Active::pool.create()) LevelHandcarHandle_1414(x, y);
}
static Image* images_levelhandcar_1415_0_0[1];
static Direction direction_levelhandcar_1415_0_0 = {0, 50, 50, 0, 1, images_levelhandcar_1415_0_0, 1};
static Animation anim_levelhandcar_1415_0 = {&direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, NULL, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0, &direction_levelhandcar_1415_0_0};
static Animation * anim_array_levelhandcar_1415[1] = {&anim_levelhandcar_1415_0};
static Animations anim_levelhandcar_1415 = {1, &anim_array_levelhandcar_1415[0]};
static bool anim_levelhandcar_1415_initialized;
class LevelHandcar_1415 : public Active
{
public:
    LevelHandcar_1415(int x, int y) : Active(x, y, LevelHandcar_1415_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_Handcar", 13);
#endif
        this->animations = &anim_levelhandcar_1415;
        if (!anim_levelhandcar_1415_initialized) {
            anim_levelhandcar_1415_initialized = true;
            images_levelhandcar_1415_0_0[0] = get_internal_image(9446);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcar_1415(int x, int y)
{
    return new (Active::pool.create()) LevelHandcar_1415(x, y);
}
static Image* images_levelhandcartop_1416_0_0[1];
static Direction direction_levelhandcartop_1416_0_0 = {0, 50, 50, 0, 1, images_levelhandcartop_1416_0_0, 1};
static Animation anim_levelhandcartop_1416_0 = {&direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, NULL, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0, &direction_levelhandcartop_1416_0_0};
static Animation * anim_array_levelhandcartop_1416[1] = {&anim_levelhandcartop_1416_0};
static Animations anim_levelhandcartop_1416 = {1, &anim_array_levelhandcartop_1416[0]};
static bool anim_levelhandcartop_1416_initialized;
class LevelHandcarTop_1416 : public Active
{
public:
    LevelHandcarTop_1416(int x, int y) : Active(x, y, LevelHandcarTop_1416_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HandcarTop", 16);
#endif
        this->animations = &anim_levelhandcartop_1416;
        if (!anim_levelhandcartop_1416_initialized) {
            anim_levelhandcartop_1416_initialized = true;
            images_levelhandcartop_1416_0_0[0] = get_internal_image(9447);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcartop_1416(int x, int y)
{
    return new (Active::pool.create()) LevelHandcarTop_1416(x, y);
}
static Image* images_levelhandcarfloor1_1417_0_0[1];
static Direction direction_levelhandcarfloor1_1417_0_0 = {0, 50, 50, 0, 1, images_levelhandcarfloor1_1417_0_0, 1};
static Animation anim_levelhandcarfloor1_1417_0 = {&direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, NULL, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0, &direction_levelhandcarfloor1_1417_0_0};
static Animation * anim_array_levelhandcarfloor1_1417[1] = {&anim_levelhandcarfloor1_1417_0};
static Animations anim_levelhandcarfloor1_1417 = {1, &anim_array_levelhandcarfloor1_1417[0]};
static bool anim_levelhandcarfloor1_1417_initialized;
class LevelHandcarFloor1_1417 : public Active
{
public:
    LevelHandcarFloor1_1417(int x, int y) : Active(x, y, LevelHandcarFloor1_1417_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HandcarFloor 1", 20);
#endif
        set_visible(false);
        this->animations = &anim_levelhandcarfloor1_1417;
        if (!anim_levelhandcarfloor1_1417_initialized) {
            anim_levelhandcarfloor1_1417_initialized = true;
            images_levelhandcarfloor1_1417_0_0[0] = get_internal_image(9448);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcarfloor1_1417(int x, int y)
{
    return new (Active::pool.create()) LevelHandcarFloor1_1417(x, y);
}
static Image* images_levelhandcarfloor2_1418_0_0[1];
static Direction direction_levelhandcarfloor2_1418_0_0 = {0, 50, 50, 0, 1, images_levelhandcarfloor2_1418_0_0, 1};
static Animation anim_levelhandcarfloor2_1418_0 = {&direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, NULL, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0, &direction_levelhandcarfloor2_1418_0_0};
static Animation * anim_array_levelhandcarfloor2_1418[1] = {&anim_levelhandcarfloor2_1418_0};
static Animations anim_levelhandcarfloor2_1418 = {1, &anim_array_levelhandcarfloor2_1418[0]};
static bool anim_levelhandcarfloor2_1418_initialized;
class LevelHandcarFloor2_1418 : public Active
{
public:
    LevelHandcarFloor2_1418(int x, int y) : Active(x, y, LevelHandcarFloor2_1418_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HandcarFloor 2", 20);
#endif
        set_visible(false);
        this->animations = &anim_levelhandcarfloor2_1418;
        if (!anim_levelhandcarfloor2_1418_initialized) {
            anim_levelhandcarfloor2_1418_initialized = true;
            images_levelhandcarfloor2_1418_0_0[0] = get_internal_image(9449);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcarfloor2_1418(int x, int y)
{
    return new (Active::pool.create()) LevelHandcarFloor2_1418(x, y);
}
static Image* images_levelhandcarfloor3_1419_0_0[1];
static Direction direction_levelhandcarfloor3_1419_0_0 = {0, 50, 50, 0, 1, images_levelhandcarfloor3_1419_0_0, 1};
static Animation anim_levelhandcarfloor3_1419_0 = {&direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, NULL, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0, &direction_levelhandcarfloor3_1419_0_0};
static Animation * anim_array_levelhandcarfloor3_1419[1] = {&anim_levelhandcarfloor3_1419_0};
static Animations anim_levelhandcarfloor3_1419 = {1, &anim_array_levelhandcarfloor3_1419[0]};
static bool anim_levelhandcarfloor3_1419_initialized;
class LevelHandcarFloor3_1419 : public Active
{
public:
    LevelHandcarFloor3_1419(int x, int y) : Active(x, y, LevelHandcarFloor3_1419_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HandcarFloor 3", 20);
#endif
        set_visible(false);
        this->animations = &anim_levelhandcarfloor3_1419;
        if (!anim_levelhandcarfloor3_1419_initialized) {
            anim_levelhandcarfloor3_1419_initialized = true;
            images_levelhandcarfloor3_1419_0_0[0] = get_internal_image(9450);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelhandcarfloor3_1419(int x, int y)
{
    return new (Active::pool.create()) LevelHandcarFloor3_1419(x, y);
}
static Image* images_rmalternatepath_1420_0_0[1];
static Direction direction_rmalternatepath_1420_0_0 = {0, 50, 50, 0, 1, images_rmalternatepath_1420_0_0, 1};
static Animation anim_rmalternatepath_1420_0 = {&direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, NULL, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0, &direction_rmalternatepath_1420_0_0};
static Animation * anim_array_rmalternatepath_1420[1] = {&anim_rmalternatepath_1420_0};
static Animations anim_rmalternatepath_1420 = {1, &anim_array_rmalternatepath_1420[0]};
static bool anim_rmalternatepath_1420_initialized;
class RMAlternatePath_1420 : public Active
{
public:
    RMAlternatePath_1420(int x, int y) : Active(x, y, RMAlternatePath_1420_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("RM_AlternatePath", 16);
#endif
        this->animations = &anim_rmalternatepath_1420;
        if (!anim_rmalternatepath_1420_initialized) {
            anim_rmalternatepath_1420_initialized = true;
            images_rmalternatepath_1420_0_0[0] = get_internal_image(7809);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_rmalternatepath_1420(int x, int y)
{
    return new (Active::pool.create()) RMAlternatePath_1420(x, y);
}
static Image* images_switchwallplate2_1421_0_0[1];
static Direction direction_switchwallplate2_1421_0_0 = {0, 50, 50, 0, 1, images_switchwallplate2_1421_0_0, 1};
static Animation anim_switchwallplate2_1421_0 = {&direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, NULL, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0, &direction_switchwallplate2_1421_0_0};
static Animation * anim_array_switchwallplate2_1421[1] = {&anim_switchwallplate2_1421_0};
static Animations anim_switchwallplate2_1421 = {1, &anim_array_switchwallplate2_1421[0]};
static bool anim_switchwallplate2_1421_initialized;
class SwitchWallPlate2_1421 : public Active
{
public:
    SwitchWallPlate2_1421(int x, int y) : Active(x, y, SwitchWallPlate2_1421_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate 2", 18);
#endif
        this->animations = &anim_switchwallplate2_1421;
        if (!anim_switchwallplate2_1421_initialized) {
            anim_switchwallplate2_1421_initialized = true;
            images_switchwallplate2_1421_0_0[0] = get_internal_image(9457);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_switchwallplate2_1421(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate2_1421(x, y);
}
class LevelParallaxPiece5_1422 : public SystemBox
{
public:
    LevelParallaxPiece5_1422(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_1422_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 264;
        type = PATTERN_IMAGE;
        image = get_internal_image(12380);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_1422(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_1422(x, y);
}
class GimmickSpinnyCupAxle_1423 : public Backdrop
{
public:
    GimmickSpinnyCupAxle_1423(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_SpinnyCupAxle", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10913);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickspinnycupaxle_1423(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickSpinnyCupAxle_1423(x, y);
}
class CaravanPlatform15_1424 : public Backdrop
{
public:
    CaravanPlatform15_1424(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 15", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16491);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform15_1424(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform15_1424(x, y);
}
class LevelParallaxPiece6_1425 : public SystemBox
{
public:
    LevelParallaxPiece6_1425(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_1425_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3364);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_1425(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_1425(x, y);
}
class LevelParallaxPiece7_1426 : public SystemBox
{
public:
    LevelParallaxPiece7_1426(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_1426_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3407);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_1426(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_1426(x, y);
}
class LevelParallaxPiece9_1427 : public SystemBox
{
public:
    LevelParallaxPiece9_1427(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_1427_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1969);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_1427(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_1427(x, y);
}
static Image* images_breakableruinspiece_1428_0_0[1];
static Direction direction_breakableruinspiece_1428_0_0 = {0, 50, 50, 0, 1, images_breakableruinspiece_1428_0_0, 1};
static Animation anim_breakableruinspiece_1428_0 = {&direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, NULL, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0, &direction_breakableruinspiece_1428_0_0};
static Animation * anim_array_breakableruinspiece_1428[1] = {&anim_breakableruinspiece_1428_0};
static Animations anim_breakableruinspiece_1428 = {1, &anim_array_breakableruinspiece_1428[0]};
static bool anim_breakableruinspiece_1428_initialized;
class BreakableRuinsPiece_1428 : public Active
{
public:
    BreakableRuinsPiece_1428(int x, int y) : Active(x, y, BreakableRuinsPiece_1428_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRuins_piece", 20);
#endif
        this->animations = &anim_breakableruinspiece_1428;
        if (!anim_breakableruinspiece_1428_initialized) {
            anim_breakableruinspiece_1428_initialized = true;
            images_breakableruinspiece_1428_0_0[0] = get_internal_image(2734);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_breakableruinspiece_1428(int x, int y)
{
    return new (Active::pool.create()) BreakableRuinsPiece_1428(x, y);
}
static Image* images_enemysentinelspike_1429_0_0[4];
static Direction direction_enemysentinelspike_1429_0_0 = {0, 50, 50, 0, -1, images_enemysentinelspike_1429_0_0, 4};
static Animation anim_enemysentinelspike_1429_0 = {&direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, NULL, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0, &direction_enemysentinelspike_1429_0_0};
static Animation * anim_array_enemysentinelspike_1429[1] = {&anim_enemysentinelspike_1429_0};
static Animations anim_enemysentinelspike_1429 = {1, &anim_array_enemysentinelspike_1429[0]};
static bool anim_enemysentinelspike_1429_initialized;
class EnemySentinelSpike_1429 : public Active
{
public:
    EnemySentinelSpike_1429(int x, int y) : Active(x, y, EnemySentinelSpike_1429_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SentinelSpike", 19);
#endif
        this->animations = &anim_enemysentinelspike_1429;
        if (!anim_enemysentinelspike_1429_initialized) {
            anim_enemysentinelspike_1429_initialized = true;
            images_enemysentinelspike_1429_0_0[0] = get_internal_image(3105);
            images_enemysentinelspike_1429_0_0[1] = get_internal_image(3106);
            images_enemysentinelspike_1429_0_0[2] = get_internal_image(3107);
            images_enemysentinelspike_1429_0_0[3] = get_internal_image(3108);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(pick_random(4, 4, 12, 20, 28));
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(70);
        ((BallMovement*)movements[0])->set_deceleration(50);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_enemysentinelspike_1429(int x, int y)
{
    return new (Active::pool.create()) EnemySentinelSpike_1429(x, y);
}
static Image* images_minibossgansekidebris_1430_0_0[4];
static Direction direction_minibossgansekidebris_1430_0_0 = {0, 0, 0, 0, 1, images_minibossgansekidebris_1430_0_0, 4};
static Animation anim_minibossgansekidebris_1430_0 = {&direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, NULL, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0, &direction_minibossgansekidebris_1430_0_0};
static Animation * anim_array_minibossgansekidebris_1430[1] = {&anim_minibossgansekidebris_1430_0};
static Animations anim_minibossgansekidebris_1430 = {1, &anim_array_minibossgansekidebris_1430[0]};
static bool anim_minibossgansekidebris_1430_initialized;
class MinibossGansekiDebris_1430 : public Active
{
public:
    MinibossGansekiDebris_1430(int x, int y) : Active(x, y, MinibossGansekiDebris_1430_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiDebris", 22);
#endif
        this->animations = &anim_minibossgansekidebris_1430;
        if (!anim_minibossgansekidebris_1430_initialized) {
            anim_minibossgansekidebris_1430_initialized = true;
            images_minibossgansekidebris_1430_0_0[0] = get_internal_image(2727);
            images_minibossgansekidebris_1430_0_0[1] = get_internal_image(3735);
            images_minibossgansekidebris_1430_0_0[2] = get_internal_image(2724);
            images_minibossgansekidebris_1430_0_0[3] = get_internal_image(2744);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_minibossgansekidebris_1430(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiDebris_1430(x, y);
}
class CaveColumn3_1431 : public Backdrop
{
public:
    CaveColumn3_1431(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3134);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn3_1431(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn3_1431(x, y);
}
class CaveColumn4_1432 : public Backdrop
{
public:
    CaveColumn4_1432(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3135);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn4_1432(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn4_1432(x, y);
}
class Stalactites2_1433 : public Backdrop
{
public:
    Stalactites2_1433(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("stalactites 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1006);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_stalactites2_1433(int x, int y)
{
    return new (Backdrop::pool.create()) Stalactites2_1433(x, y);
}
class RMCaveBrick4_1434 : public Backdrop
{
public:
    RMCaveBrick4_1434(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(375);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcavebrick4_1434(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick4_1434(x, y);
}
class RMScaleyPillar_1435 : public Backdrop
{
public:
    RMScaleyPillar_1435(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_ScaleyPillar", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10903);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmscaleypillar_1435(int x, int y)
{
    return new (Backdrop::pool.create()) RMScaleyPillar_1435(x, y);
}
class RMCaveBrick6_1436 : public Backdrop
{
public:
    RMCaveBrick6_1436(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10879);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick6_1436(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick6_1436(x, y);
}
class RMCaveBrick8_1437 : public Backdrop
{
public:
    RMCaveBrick8_1437(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10882);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmcavebrick8_1437(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick8_1437(x, y);
}
class Stalactites_1438 : public Backdrop
{
public:
    Stalactites_1438(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("stalactites", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1016);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_stalactites_1438(int x, int y)
{
    return new (Backdrop::pool.create()) Stalactites_1438(x, y);
}
class Gateway_1439 : public Backdrop
{
public:
    Gateway_1439(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gateway", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(919);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gateway_1439(int x, int y)
{
    return new (Backdrop::pool.create()) Gateway_1439(x, y);
}
class RMCaveBrick3_1440 : public Backdrop
{
public:
    RMCaveBrick3_1440(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10866);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick3_1440(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick3_1440(x, y);
}
class CaveBrick11_1441 : public Backdrop
{
public:
    CaveBrick11_1441(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Brick 11", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(379);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavebrick11_1441(int x, int y)
{
    return new (Backdrop::pool.create()) CaveBrick11_1441(x, y);
}
class RMCaveBrick14_1442 : public Backdrop
{
public:
    RMCaveBrick14_1442(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick14", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10887);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick14_1442(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick14_1442(x, y);
}
class RMCaveBrick13_1443 : public Backdrop
{
public:
    RMCaveBrick13_1443(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10883);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick13_1443(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick13_1443(x, y);
}
class SwitchBase_1444 : public Backdrop
{
public:
    SwitchBase_1444(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(921);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_1444(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_1444(x, y);
}
class RMCaveBrick2_1445 : public Backdrop
{
public:
    RMCaveBrick2_1445(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10871);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick2_1445(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick2_1445(x, y);
}
class RMCaveBrick7_1446 : public Backdrop
{
public:
    RMCaveBrick7_1446(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10869);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick7_1446(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick7_1446(x, y);
}
class CaveSoil33_1447 : public Backdrop
{
public:
    CaveSoil33_1447(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 33", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12553);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil33_1447(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil33_1447(x, y);
}
class RMCaveBrick5_1448 : public Backdrop
{
public:
    RMCaveBrick5_1448(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(397);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcavebrick5_1448(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick5_1448(x, y);
}
class RMCaveBrick1_1449 : public Backdrop
{
public:
    RMCaveBrick1_1449(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10870);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick1_1449(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick1_1449(x, y);
}
class CaveSoil36_1450 : public Backdrop
{
public:
    CaveSoil36_1450(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 36", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4061);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil36_1450(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil36_1450(x, y);
}
class RMCaveBrick10_1451 : public Backdrop
{
public:
    RMCaveBrick10_1451(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10880);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick10_1451(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick10_1451(x, y);
}
class Loop7Back_1452 : public Backdrop
{
public:
    Loop7Back_1452(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 7 back", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3729);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_loop7back_1452(int x, int y)
{
    return new (Backdrop::pool.create()) Loop7Back_1452(x, y);
}
class LevelLayer116Back_1453 : public Backdrop
{
public:
    LevelLayer116Back_1453(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Layer1_16 back", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2729);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_levellayer116back_1453(int x, int y)
{
    return new (Backdrop::pool.create()) LevelLayer116Back_1453(x, y);
}
class CaveSoil8_1454 : public Backdrop
{
public:
    CaveSoil8_1454(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 8", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10857);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil8_1454(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil8_1454(x, y);
}
class RMCaveBrick9_1455 : public Backdrop
{
public:
    RMCaveBrick9_1455(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10881);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmcavebrick9_1455(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick9_1455(x, y);
}
class CaveSoil13_1456 : public Backdrop
{
public:
    CaveSoil13_1456(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 13", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12508);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil13_1456(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil13_1456(x, y);
}
class CaveSoil10_1457 : public Backdrop
{
public:
    CaveSoil10_1457(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 10", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3443);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil10_1457(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil10_1457(x, y);
}
class RMUCurveCave_1458 : public Backdrop
{
public:
    RMUCurveCave_1458(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_UCurveCave", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7807);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmucurvecave_1458(int x, int y)
{
    return new (Backdrop::pool.create()) RMUCurveCave_1458(x, y);
}
class SignpostBack_1459 : public Backdrop
{
public:
    SignpostBack_1459(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Signpost_back", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3541);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_signpostback_1459(int x, int y)
{
    return new (Backdrop::pool.create()) SignpostBack_1459(x, y);
}
class CaveSoil19_1460 : public Backdrop
{
public:
    CaveSoil19_1460(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 19", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10813);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil19_1460(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil19_1460(x, y);
}
class CaveSoil28_1461 : public Backdrop
{
public:
    CaveSoil28_1461(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 28", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10868);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil28_1461(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil28_1461(x, y);
}
class CaveSoil30_1462 : public Backdrop
{
public:
    CaveSoil30_1462(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 30", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12512);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil30_1462(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil30_1462(x, y);
}
class CaveSoil31_1463 : public Backdrop
{
public:
    CaveSoil31_1463(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 31", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12514);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil31_1463(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil31_1463(x, y);
}
class CaveSoil20_1464 : public Backdrop
{
public:
    CaveSoil20_1464(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 20", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10810);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil20_1464(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil20_1464(x, y);
}
class CaveSoil29_1465 : public Backdrop
{
public:
    CaveSoil29_1465(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 29", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10867);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil29_1465(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil29_1465(x, y);
}
class Loop1_1466 : public Backdrop
{
public:
    Loop1_1466(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 1", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3133);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop1_1466(int x, int y)
{
    return new (Backdrop::pool.create()) Loop1_1466(x, y);
}
class Loop3_1467 : public Backdrop
{
public:
    Loop3_1467(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 3", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(596);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop3_1467(int x, int y)
{
    return new (Backdrop::pool.create()) Loop3_1467(x, y);
}
class Loop5Back_1468 : public Backdrop
{
public:
    Loop5Back_1468(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 5 back", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(906);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_loop5back_1468(int x, int y)
{
    return new (Backdrop::pool.create()) Loop5Back_1468(x, y);
}
class Loop2_1469 : public Backdrop
{
public:
    Loop2_1469(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 2", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3731);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop2_1469(int x, int y)
{
    return new (Backdrop::pool.create()) Loop2_1469(x, y);
}
class Loop4_1470 : public Backdrop
{
public:
    Loop4_1470(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 4", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(904);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop4_1470(int x, int y)
{
    return new (Backdrop::pool.create()) Loop4_1470(x, y);
}
class Loop6Down_1471 : public Backdrop
{
public:
    Loop6Down_1471(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 6 down", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4065);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop6down_1471(int x, int y)
{
    return new (Backdrop::pool.create()) Loop6Down_1471(x, y);
}
class CaveSoil32_1472 : public Backdrop
{
public:
    CaveSoil32_1472(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 32", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10865);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil32_1472(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil32_1472(x, y);
}
class CaveSoil34_1473 : public Backdrop
{
public:
    CaveSoil34_1473(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 34", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10876);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil34_1473(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil34_1473(x, y);
}
class CaveElbowCurve1_1474 : public Backdrop
{
public:
    CaveElbowCurve1_1474(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave elbow curve 1", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(583);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_caveelbowcurve1_1474(int x, int y)
{
    return new (Backdrop::pool.create()) CaveElbowCurve1_1474(x, y);
}
class CaveElbowCurve2_1475 : public Backdrop
{
public:
    CaveElbowCurve2_1475(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave elbow curve 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(440);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_caveelbowcurve2_1475(int x, int y)
{
    return new (Backdrop::pool.create()) CaveElbowCurve2_1475(x, y);
}
class CaveElbowCurve3_1476 : public Backdrop
{
public:
    CaveElbowCurve3_1476(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave elbow curve 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(607);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_caveelbowcurve3_1476(int x, int y)
{
    return new (Backdrop::pool.create()) CaveElbowCurve3_1476(x, y);
}
class CaveElbowCurve4_1477 : public Backdrop
{
public:
    CaveElbowCurve4_1477(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave elbow curve 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(528);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_caveelbowcurve4_1477(int x, int y)
{
    return new (Backdrop::pool.create()) CaveElbowCurve4_1477(x, y);
}
class Backdrop4_1478 : public Backdrop
{
public:
    Backdrop4_1478(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12860);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop4_1478(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_1478(x, y);
}
class Loop6_1479 : public Backdrop
{
public:
    Loop6_1479(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 6", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2732);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop6_1479(int x, int y)
{
    return new (Backdrop::pool.create()) Loop6_1479(x, y);
}
class Loop7_1480 : public Backdrop
{
public:
    Loop7_1480(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 7", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(925);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop7_1480(int x, int y)
{
    return new (Backdrop::pool.create()) Loop7_1480(x, y);
}
class RMCaveBrick15_1481 : public Backdrop
{
public:
    RMCaveBrick15_1481(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick15", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10888);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick15_1481(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick15_1481(x, y);
}
class CaveSoil35_1482 : public Backdrop
{
public:
    CaveSoil35_1482(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 35", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1436);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil35_1482(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil35_1482(x, y);
}
class CaveSoil38_1483 : public Backdrop
{
public:
    CaveSoil38_1483(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 38", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(225);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil38_1483(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil38_1483(x, y);
}
class CaveSoil37_1484 : public Backdrop
{
public:
    CaveSoil37_1484(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 37", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(714);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil37_1484(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil37_1484(x, y);
}
class Backdrop6_1485 : public Backdrop
{
public:
    Backdrop6_1485(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4069);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_backdrop6_1485(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_1485(x, y);
}
class SwitchWallBase_1486 : public Backdrop
{
public:
    SwitchWallBase_1486(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(390);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1486(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1486(x, y);
}
static Image* images_levellayer117_1487_0_0[1];
static Direction direction_levellayer117_1487_0_0 = {0, 50, 50, 0, 1, images_levellayer117_1487_0_0, 1};
static Animation anim_levellayer117_1487_0 = {&direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, NULL, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0, &direction_levellayer117_1487_0_0};
static Animation * anim_array_levellayer117_1487[1] = {&anim_levellayer117_1487_0};
static Animations anim_levellayer117_1487 = {1, &anim_array_levellayer117_1487[0]};
static bool anim_levellayer117_1487_initialized;
class LevelLayer117_1487 : public Active
{
public:
    LevelLayer117_1487(int x, int y) : Active(x, y, LevelLayer117_1487_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_ 17", 16);
#endif
        this->animations = &anim_levellayer117_1487;
        if (!anim_levellayer117_1487_initialized) {
            anim_levellayer117_1487_initialized = true;
            images_levellayer117_1487_0_0[0] = get_internal_image(10874);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer117_1487(int x, int y)
{
    return new (Active::pool.create()) LevelLayer117_1487(x, y);
}
static Image* images_gimmickrollingplatformcave2_1488_0_0[1];
static Direction direction_gimmickrollingplatformcave2_1488_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingplatformcave2_1488_0_0, 1};
static Animation anim_gimmickrollingplatformcave2_1488_0 = {&direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, NULL, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0, &direction_gimmickrollingplatformcave2_1488_0_0};
static Animation * anim_array_gimmickrollingplatformcave2_1488[1] = {&anim_gimmickrollingplatformcave2_1488_0};
static Animations anim_gimmickrollingplatformcave2_1488 = {1, &anim_array_gimmickrollingplatformcave2_1488[0]};
static bool anim_gimmickrollingplatformcave2_1488_initialized;
class GimmickRollingPlatformCave2_1488 : public Active
{
public:
    GimmickRollingPlatformCave2_1488(int x, int y) : Active(x, y, GimmickRollingPlatformCave2_1488_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RollingPlatformCave 2", 29);
#endif
        this->animations = &anim_gimmickrollingplatformcave2_1488;
        if (!anim_gimmickrollingplatformcave2_1488_initialized) {
            anim_gimmickrollingplatformcave2_1488_initialized = true;
            images_gimmickrollingplatformcave2_1488_0_0[0] = get_internal_image(7780);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickrollingplatformcave2_1488(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingPlatformCave2_1488(x, y);
}
static Image* images_breakableruins_1489_0_0[1];
static Direction direction_breakableruins_1489_0_0 = {0, 50, 50, 0, 1, images_breakableruins_1489_0_0, 1};
static Animation anim_breakableruins_1489_0 = {&direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, NULL, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0, &direction_breakableruins_1489_0_0};
static Animation * anim_array_breakableruins_1489[1] = {&anim_breakableruins_1489_0};
static Animations anim_breakableruins_1489 = {1, &anim_array_breakableruins_1489[0]};
static bool anim_breakableruins_1489_initialized;
class BreakableRuins_1489 : public Active
{
public:
    BreakableRuins_1489(int x, int y) : Active(x, y, BreakableRuins_1489_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableRuins", 14);
#endif
        this->animations = &anim_breakableruins_1489;
        if (!anim_breakableruins_1489_initialized) {
            anim_breakableruins_1489_initialized = true;
            images_breakableruins_1489_0_0[0] = get_internal_image(12509);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_breakableruins_1489(int x, int y)
{
    return new (Active::pool.create()) BreakableRuins_1489(x, y);
}
static Image* images_minibossganseki_1490_0_0[3];
static Direction direction_minibossganseki_1490_0_0 = {0, 50, 50, 0, -1, images_minibossganseki_1490_0_0, 3};
static Animation anim_minibossganseki_1490_0 = {&direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, NULL, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0, &direction_minibossganseki_1490_0_0};
static Image* images_minibossganseki_1490_7_0[23];
static Direction direction_minibossganseki_1490_7_0 = {0, 50, 50, 21, 1, images_minibossganseki_1490_7_0, 23};
static Animation anim_minibossganseki_1490_7 = {&direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, NULL, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0, &direction_minibossganseki_1490_7_0};
static Image* images_minibossganseki_1490_8_0[2];
static Direction direction_minibossganseki_1490_8_0 = {0, 50, 50, 0, -1, images_minibossganseki_1490_8_0, 2};
static Animation anim_minibossganseki_1490_8 = {&direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, NULL, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0, &direction_minibossganseki_1490_8_0};
static Image* images_minibossganseki_1490_10_0[9];
static Direction direction_minibossganseki_1490_10_0 = {0, 100, 100, 8, -1, images_minibossganseki_1490_10_0, 9};
static Animation anim_minibossganseki_1490_10 = {&direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, NULL, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0, &direction_minibossganseki_1490_10_0};
static Image* images_minibossganseki_1490_11_0[8];
static Direction direction_minibossganseki_1490_11_0 = {0, 50, 50, 7, 1, images_minibossganseki_1490_11_0, 8};
static Animation anim_minibossganseki_1490_11 = {&direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, NULL, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0, &direction_minibossganseki_1490_11_0};
static Animation * anim_array_minibossganseki_1490[12] = {&anim_minibossganseki_1490_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossganseki_1490_7, &anim_minibossganseki_1490_8, NULL, &anim_minibossganseki_1490_10, &anim_minibossganseki_1490_11};
static Animations anim_minibossganseki_1490 = {12, &anim_array_minibossganseki_1490[0]};
static bool anim_minibossganseki_1490_initialized;
class MinibossGanseki_1490 : public Active
{
public:
    MinibossGanseki_1490(int x, int y) : Active(x, y, MinibossGanseki_1490_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_Ganseki", 16);
#endif
        this->animations = &anim_minibossganseki_1490;
        if (!anim_minibossganseki_1490_initialized) {
            anim_minibossganseki_1490_initialized = true;
            images_minibossganseki_1490_0_0[0] = get_internal_image(13116);
            images_minibossganseki_1490_0_0[1] = get_internal_image(13117);
            images_minibossganseki_1490_0_0[2] = get_internal_image(13118);
            images_minibossganseki_1490_7_0[0] = get_internal_image(13122);
            images_minibossganseki_1490_7_0[1] = get_internal_image(13133);
            images_minibossganseki_1490_7_0[2] = get_internal_image(13135);
            images_minibossganseki_1490_7_0[3] = get_internal_image(13136);
            images_minibossganseki_1490_7_0[4] = get_internal_image(13138);
            images_minibossganseki_1490_7_0[5] = get_internal_image(13135);
            images_minibossganseki_1490_7_0[6] = get_internal_image(13122);
            images_minibossganseki_1490_7_0[7] = get_internal_image(13137);
            images_minibossganseki_1490_7_0[8] = get_internal_image(13140);
            images_minibossganseki_1490_7_0[9] = get_internal_image(13141);
            images_minibossganseki_1490_7_0[10] = get_internal_image(13140);
            images_minibossganseki_1490_7_0[11] = get_internal_image(13137);
            images_minibossganseki_1490_7_0[12] = get_internal_image(13139);
            images_minibossganseki_1490_7_0[13] = get_internal_image(13122);
            images_minibossganseki_1490_7_0[14] = get_internal_image(13122);
            images_minibossganseki_1490_7_0[15] = get_internal_image(13123);
            images_minibossganseki_1490_7_0[16] = get_internal_image(13124);
            images_minibossganseki_1490_7_0[17] = get_internal_image(13125);
            images_minibossganseki_1490_7_0[18] = get_internal_image(13122);
            images_minibossganseki_1490_7_0[19] = get_internal_image(13123);
            images_minibossganseki_1490_7_0[20] = get_internal_image(13124);
            images_minibossganseki_1490_7_0[21] = get_internal_image(13125);
            images_minibossganseki_1490_7_0[22] = get_internal_image(13122);
            images_minibossganseki_1490_8_0[0] = get_internal_image(13126);
            images_minibossganseki_1490_8_0[1] = get_internal_image(13128);
            images_minibossganseki_1490_10_0[0] = get_internal_image(13116);
            images_minibossganseki_1490_10_0[1] = get_internal_image(13131);
            images_minibossganseki_1490_10_0[2] = get_internal_image(13129);
            images_minibossganseki_1490_10_0[3] = get_internal_image(13130);
            images_minibossganseki_1490_10_0[4] = get_internal_image(13127);
            images_minibossganseki_1490_10_0[5] = get_internal_image(13134);
            images_minibossganseki_1490_10_0[6] = get_internal_image(13132);
            images_minibossganseki_1490_10_0[7] = get_internal_image(13119);
            images_minibossganseki_1490_10_0[8] = get_internal_image(13122);
            images_minibossganseki_1490_11_0[0] = get_internal_image(13119);
            images_minibossganseki_1490_11_0[1] = get_internal_image(13132);
            images_minibossganseki_1490_11_0[2] = get_internal_image(13134);
            images_minibossganseki_1490_11_0[3] = get_internal_image(13127);
            images_minibossganseki_1490_11_0[4] = get_internal_image(13130);
            images_minibossganseki_1490_11_0[5] = get_internal_image(13129);
            images_minibossganseki_1490_11_0[6] = get_internal_image(13131);
            images_minibossganseki_1490_11_0[7] = get_internal_image(13116);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 7);
        alterables->values.set(9, -1);
        alterables->values.set(14, 1);
        alterables->values.set(18, 20);
    }
};
FrameObject * create_minibossganseki_1490(int x, int y)
{
    return new (Active::pool.create()) MinibossGanseki_1490(x, y);
}
static Image* images_minibossgansekicap_1491_0_0[1];
static Direction direction_minibossgansekicap_1491_0_0 = {0, 50, 50, 0, 1, images_minibossgansekicap_1491_0_0, 1};
static Animation anim_minibossgansekicap_1491_0 = {&direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, NULL, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0, &direction_minibossgansekicap_1491_0_0};
static Image* images_minibossgansekicap_1491_7_0[4];
static Direction direction_minibossgansekicap_1491_7_0 = {0, 50, 50, 0, 2, images_minibossgansekicap_1491_7_0, 4};
static Animation anim_minibossgansekicap_1491_7 = {&direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, NULL, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0, &direction_minibossgansekicap_1491_7_0};
static Animation * anim_array_minibossgansekicap_1491[8] = {&anim_minibossgansekicap_1491_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossgansekicap_1491_7};
static Animations anim_minibossgansekicap_1491 = {8, &anim_array_minibossgansekicap_1491[0]};
static bool anim_minibossgansekicap_1491_initialized;
class MinibossGansekiCap_1491 : public Active
{
public:
    MinibossGansekiCap_1491(int x, int y) : Active(x, y, MinibossGansekiCap_1491_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiCap", 19);
#endif
        set_visible(false);
        this->animations = &anim_minibossgansekicap_1491;
        if (!anim_minibossgansekicap_1491_initialized) {
            anim_minibossgansekicap_1491_initialized = true;
            images_minibossgansekicap_1491_0_0[0] = get_internal_image(13119);
            images_minibossgansekicap_1491_7_0[0] = get_internal_image(13142);
            images_minibossgansekicap_1491_7_0[1] = get_internal_image(13143);
            images_minibossgansekicap_1491_7_0[2] = get_internal_image(13144);
            images_minibossgansekicap_1491_7_0[3] = get_internal_image(13145);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossgansekicap_1491(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiCap_1491(x, y);
}
static Image* images_minibossgansekispike1_1492_0_0[1];
static Direction direction_minibossgansekispike1_1492_0_0 = {0, 50, 50, 0, 1, images_minibossgansekispike1_1492_0_0, 1};
static Animation anim_minibossgansekispike1_1492_0 = {&direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, NULL, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0, &direction_minibossgansekispike1_1492_0_0};
static Animation * anim_array_minibossgansekispike1_1492[1] = {&anim_minibossgansekispike1_1492_0};
static Animations anim_minibossgansekispike1_1492 = {1, &anim_array_minibossgansekispike1_1492[0]};
static bool anim_minibossgansekispike1_1492_initialized;
class MinibossGansekiSpike1_1492 : public Active
{
public:
    MinibossGansekiSpike1_1492(int x, int y) : Active(x, y, MinibossGansekiSpike1_1492_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiSpike 1", 23);
#endif
        this->animations = &anim_minibossgansekispike1_1492;
        if (!anim_minibossgansekispike1_1492_initialized) {
            anim_minibossgansekispike1_1492_initialized = true;
            images_minibossgansekispike1_1492_0_0[0] = get_internal_image(13120);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossgansekispike1_1492(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiSpike1_1492(x, y);
}
static Image* images_minibossgansekispike2_1493_0_0[1];
static Direction direction_minibossgansekispike2_1493_0_0 = {0, 50, 50, 0, 1, images_minibossgansekispike2_1493_0_0, 1};
static Animation anim_minibossgansekispike2_1493_0 = {&direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, NULL, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0, &direction_minibossgansekispike2_1493_0_0};
static Animation * anim_array_minibossgansekispike2_1493[1] = {&anim_minibossgansekispike2_1493_0};
static Animations anim_minibossgansekispike2_1493 = {1, &anim_array_minibossgansekispike2_1493[0]};
static bool anim_minibossgansekispike2_1493_initialized;
class MinibossGansekiSpike2_1493 : public Active
{
public:
    MinibossGansekiSpike2_1493(int x, int y) : Active(x, y, MinibossGansekiSpike2_1493_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiSpike 2", 23);
#endif
        this->animations = &anim_minibossgansekispike2_1493;
        if (!anim_minibossgansekispike2_1493_initialized) {
            anim_minibossgansekispike2_1493_initialized = true;
            images_minibossgansekispike2_1493_0_0[0] = get_internal_image(13121);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossgansekispike2_1493(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiSpike2_1493(x, y);
}
static Image* images_minibossgansekispike3_1494_0_0[1];
static Direction direction_minibossgansekispike3_1494_0_0 = {0, 50, 50, 0, 1, images_minibossgansekispike3_1494_0_0, 1};
static Animation anim_minibossgansekispike3_1494_0 = {&direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, NULL, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0, &direction_minibossgansekispike3_1494_0_0};
static Animation * anim_array_minibossgansekispike3_1494[1] = {&anim_minibossgansekispike3_1494_0};
static Animations anim_minibossgansekispike3_1494 = {1, &anim_array_minibossgansekispike3_1494[0]};
static bool anim_minibossgansekispike3_1494_initialized;
class MinibossGansekiSpike3_1494 : public Active
{
public:
    MinibossGansekiSpike3_1494(int x, int y) : Active(x, y, MinibossGansekiSpike3_1494_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiSpike 3", 23);
#endif
        this->animations = &anim_minibossgansekispike3_1494;
        if (!anim_minibossgansekispike3_1494_initialized) {
            anim_minibossgansekispike3_1494_initialized = true;
            images_minibossgansekispike3_1494_0_0[0] = get_internal_image(13121);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossgansekispike3_1494(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiSpike3_1494(x, y);
}
static Image* images_minibossgansekispike4_1495_0_0[1];
static Direction direction_minibossgansekispike4_1495_0_0 = {0, 50, 50, 0, 1, images_minibossgansekispike4_1495_0_0, 1};
static Animation anim_minibossgansekispike4_1495_0 = {&direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, NULL, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0, &direction_minibossgansekispike4_1495_0_0};
static Animation * anim_array_minibossgansekispike4_1495[1] = {&anim_minibossgansekispike4_1495_0};
static Animations anim_minibossgansekispike4_1495 = {1, &anim_array_minibossgansekispike4_1495[0]};
static bool anim_minibossgansekispike4_1495_initialized;
class MinibossGansekiSpike4_1495 : public Active
{
public:
    MinibossGansekiSpike4_1495(int x, int y) : Active(x, y, MinibossGansekiSpike4_1495_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiSpike 4", 23);
#endif
        this->animations = &anim_minibossgansekispike4_1495;
        if (!anim_minibossgansekispike4_1495_initialized) {
            anim_minibossgansekispike4_1495_initialized = true;
            images_minibossgansekispike4_1495_0_0[0] = get_internal_image(13120);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossgansekispike4_1495(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiSpike4_1495(x, y);
}
static Image* images_enemysentinel_1496_0_0[8];
static Direction direction_enemysentinel_1496_0_0 = {0, 20, 20, 0, -1, images_enemysentinel_1496_0_0, 8};
static Animation anim_enemysentinel_1496_0 = {&direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, NULL, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0, &direction_enemysentinel_1496_0_0};
static Image* images_enemysentinel_1496_7_0[2];
static Direction direction_enemysentinel_1496_7_0 = {0, 50, 50, 0, -1, images_enemysentinel_1496_7_0, 2};
static Image* images_enemysentinel_1496_7_8[2];
static Direction direction_enemysentinel_1496_7_8 = {8, 50, 50, 0, -1, images_enemysentinel_1496_7_8, 2};
static Image* images_enemysentinel_1496_7_16[2];
static Direction direction_enemysentinel_1496_7_16 = {16, 50, 50, 0, -1, images_enemysentinel_1496_7_16, 2};
static Image* images_enemysentinel_1496_7_24[2];
static Direction direction_enemysentinel_1496_7_24 = {24, 50, 50, 0, -1, images_enemysentinel_1496_7_24, 2};
static Animation anim_enemysentinel_1496_7 = {&direction_enemysentinel_1496_7_0, &direction_enemysentinel_1496_7_0, &direction_enemysentinel_1496_7_0, &direction_enemysentinel_1496_7_0, NULL, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, &direction_enemysentinel_1496_7_8, NULL, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, &direction_enemysentinel_1496_7_16, NULL, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, &direction_enemysentinel_1496_7_24, NULL, &direction_enemysentinel_1496_7_0, &direction_enemysentinel_1496_7_0, &direction_enemysentinel_1496_7_0};
static Animation * anim_array_enemysentinel_1496[8] = {&anim_enemysentinel_1496_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemysentinel_1496_7};
static Animations anim_enemysentinel_1496 = {8, &anim_array_enemysentinel_1496[0]};
static bool anim_enemysentinel_1496_initialized;
class EnemySentinel_1496 : public Active
{
public:
    EnemySentinel_1496(int x, int y) : Active(x, y, EnemySentinel_1496_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Sentinel", 14);
#endif
        this->animations = &anim_enemysentinel_1496;
        if (!anim_enemysentinel_1496_initialized) {
            anim_enemysentinel_1496_initialized = true;
            images_enemysentinel_1496_0_0[0] = get_internal_image(13190);
            images_enemysentinel_1496_0_0[1] = get_internal_image(13191);
            images_enemysentinel_1496_0_0[2] = get_internal_image(13192);
            images_enemysentinel_1496_0_0[3] = get_internal_image(13193);
            images_enemysentinel_1496_0_0[4] = get_internal_image(13194);
            images_enemysentinel_1496_0_0[5] = get_internal_image(13195);
            images_enemysentinel_1496_0_0[6] = get_internal_image(13196);
            images_enemysentinel_1496_0_0[7] = get_internal_image(13197);
            images_enemysentinel_1496_7_0[0] = get_internal_image(13199);
            images_enemysentinel_1496_7_0[1] = get_internal_image(13190);
            images_enemysentinel_1496_7_8[0] = get_internal_image(13200);
            images_enemysentinel_1496_7_8[1] = get_internal_image(13192);
            images_enemysentinel_1496_7_16[0] = get_internal_image(13198);
            images_enemysentinel_1496_7_16[1] = get_internal_image(13194);
            images_enemysentinel_1496_7_24[0] = get_internal_image(13201);
            images_enemysentinel_1496_7_24[1] = get_internal_image(13196);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_enemysentinel_1496(int x, int y)
{
    return new (Active::pool.create()) EnemySentinel_1496(x, y);
}
static Image* images_gimmickrollingplatformcave_1497_0_0[1];
static Direction direction_gimmickrollingplatformcave_1497_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingplatformcave_1497_0_0, 1};
static Animation anim_gimmickrollingplatformcave_1497_0 = {&direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, NULL, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0, &direction_gimmickrollingplatformcave_1497_0_0};
static Animation * anim_array_gimmickrollingplatformcave_1497[1] = {&anim_gimmickrollingplatformcave_1497_0};
static Animations anim_gimmickrollingplatformcave_1497 = {1, &anim_array_gimmickrollingplatformcave_1497[0]};
static bool anim_gimmickrollingplatformcave_1497_initialized;
class GimmickRollingPlatformCave_1497 : public Active
{
public:
    GimmickRollingPlatformCave_1497(int x, int y) : Active(x, y, GimmickRollingPlatformCave_1497_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_RollingPlatformCave", 27);
#endif
        this->animations = &anim_gimmickrollingplatformcave_1497;
        if (!anim_gimmickrollingplatformcave_1497_initialized) {
            anim_gimmickrollingplatformcave_1497_initialized = true;
            images_gimmickrollingplatformcave_1497_0_0[0] = get_internal_image(7394);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
        alterables->values.set(2, 192);
        alterables->values.set(4, 180);
        alterables->values.set(6, -192);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickrollingplatformcave_1497(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingPlatformCave_1497(x, y);
}
static Image* images_levellayer115_1498_0_0[1];
static Direction direction_levellayer115_1498_0_0 = {0, 50, 50, 0, 1, images_levellayer115_1498_0_0, 1};
static Animation anim_levellayer115_1498_0 = {&direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, NULL, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0, &direction_levellayer115_1498_0_0};
static Animation * anim_array_levellayer115_1498[1] = {&anim_levellayer115_1498_0};
static Animations anim_levellayer115_1498 = {1, &anim_array_levellayer115_1498[0]};
static bool anim_levellayer115_1498_initialized;
class LevelLayer115_1498 : public Active
{
public:
    LevelLayer115_1498(int x, int y) : Active(x, y, LevelLayer115_1498_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_15", 15);
#endif
        this->animations = &anim_levellayer115_1498;
        if (!anim_levellayer115_1498_initialized) {
            anim_levellayer115_1498_initialized = true;
            images_levellayer115_1498_0_0[0] = get_internal_image(3091);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer115_1498(int x, int y)
{
    return new (Active::pool.create()) LevelLayer115_1498(x, y);
}
static Image* images_levellayer002_1499_0_0[1];
static Direction direction_levellayer002_1499_0_0 = {0, 50, 50, 0, 1, images_levellayer002_1499_0_0, 1};
static Animation anim_levellayer002_1499_0 = {&direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, NULL, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0, &direction_levellayer002_1499_0_0};
static Animation * anim_array_levellayer002_1499[1] = {&anim_levellayer002_1499_0};
static Animations anim_levellayer002_1499 = {1, &anim_array_levellayer002_1499[0]};
static bool anim_levellayer002_1499_initialized;
class LevelLayer002_1499 : public Active
{
public:
    LevelLayer002_1499(int x, int y) : Active(x, y, LevelLayer002_1499_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_02", 15);
#endif
        this->animations = &anim_levellayer002_1499;
        if (!anim_levellayer002_1499_initialized) {
            anim_levellayer002_1499_initialized = true;
            images_levellayer002_1499_0_0[0] = get_internal_image(643);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer002_1499(int x, int y)
{
    return new (Active::pool.create()) LevelLayer002_1499(x, y);
}
static Image* images_levellayer001_1500_0_0[1];
static Direction direction_levellayer001_1500_0_0 = {0, 50, 50, 0, 1, images_levellayer001_1500_0_0, 1};
static Animation anim_levellayer001_1500_0 = {&direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, NULL, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0, &direction_levellayer001_1500_0_0};
static Animation * anim_array_levellayer001_1500[1] = {&anim_levellayer001_1500_0};
static Animations anim_levellayer001_1500 = {1, &anim_array_levellayer001_1500[0]};
static bool anim_levellayer001_1500_initialized;
class LevelLayer001_1500 : public Active
{
public:
    LevelLayer001_1500(int x, int y) : Active(x, y, LevelLayer001_1500_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_01", 15);
#endif
        this->animations = &anim_levellayer001_1500;
        if (!anim_levellayer001_1500_initialized) {
            anim_levellayer001_1500_initialized = true;
            images_levellayer001_1500_0_0[0] = get_internal_image(3417);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer001_1500(int x, int y)
{
    return new (Active::pool.create()) LevelLayer001_1500(x, y);
}
static Image* images_levellayer02_1501_0_0[1];
static Direction direction_levellayer02_1501_0_0 = {0, 50, 50, 0, 1, images_levellayer02_1501_0_0, 1};
static Animation anim_levellayer02_1501_0 = {&direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, NULL, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0, &direction_levellayer02_1501_0_0};
static Animation * anim_array_levellayer02_1501[1] = {&anim_levellayer02_1501_0};
static Animations anim_levellayer02_1501 = {1, &anim_array_levellayer02_1501[0]};
static bool anim_levellayer02_1501_initialized;
class LevelLayer02_1501 : public Active
{
public:
    LevelLayer02_1501(int x, int y) : Active(x, y, LevelLayer02_1501_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_ 2", 15);
#endif
        this->animations = &anim_levellayer02_1501;
        if (!anim_levellayer02_1501_initialized) {
            anim_levellayer02_1501_initialized = true;
            images_levellayer02_1501_0_0[0] = get_internal_image(1970);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer02_1501(int x, int y)
{
    return new (Active::pool.create()) LevelLayer02_1501(x, y);
}
static Image* images_levellayer015_1502_0_0[1];
static Direction direction_levellayer015_1502_0_0 = {0, 50, 50, 0, 1, images_levellayer015_1502_0_0, 1};
static Animation anim_levellayer015_1502_0 = {&direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, NULL, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0, &direction_levellayer015_1502_0_0};
static Animation * anim_array_levellayer015_1502[1] = {&anim_levellayer015_1502_0};
static Animations anim_levellayer015_1502 = {1, &anim_array_levellayer015_1502[0]};
static bool anim_levellayer015_1502_initialized;
class LevelLayer015_1502 : public Active
{
public:
    LevelLayer015_1502(int x, int y) : Active(x, y, LevelLayer015_1502_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_15", 15);
#endif
        this->animations = &anim_levellayer015_1502;
        if (!anim_levellayer015_1502_initialized) {
            anim_levellayer015_1502_initialized = true;
            images_levellayer015_1502_0_0[0] = get_internal_image(884);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer015_1502(int x, int y)
{
    return new (Active::pool.create()) LevelLayer015_1502(x, y);
}
static Image* images_gimmickdrillplatform_1503_0_0[4];
static Direction direction_gimmickdrillplatform_1503_0_0 = {0, 100, 100, 0, -1, images_gimmickdrillplatform_1503_0_0, 4};
static Image* images_gimmickdrillplatform_1503_0_8[2];
static Direction direction_gimmickdrillplatform_1503_0_8 = {8, 50, 50, 0, 1, images_gimmickdrillplatform_1503_0_8, 2};
static Image* images_gimmickdrillplatform_1503_0_24[1];
static Direction direction_gimmickdrillplatform_1503_0_24 = {24, 50, 50, 0, 1, images_gimmickdrillplatform_1503_0_24, 1};
static Animation anim_gimmickdrillplatform_1503_0 = {&direction_gimmickdrillplatform_1503_0_0, &direction_gimmickdrillplatform_1503_0_0, &direction_gimmickdrillplatform_1503_0_0, &direction_gimmickdrillplatform_1503_0_0, NULL, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, &direction_gimmickdrillplatform_1503_0_8, NULL, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, &direction_gimmickdrillplatform_1503_0_24, NULL, &direction_gimmickdrillplatform_1503_0_0, &direction_gimmickdrillplatform_1503_0_0, &direction_gimmickdrillplatform_1503_0_0};
static Animation * anim_array_gimmickdrillplatform_1503[1] = {&anim_gimmickdrillplatform_1503_0};
static Animations anim_gimmickdrillplatform_1503 = {1, &anim_array_gimmickdrillplatform_1503[0]};
static bool anim_gimmickdrillplatform_1503_initialized;
class GimmickDrillPlatform_1503 : public Active
{
public:
    GimmickDrillPlatform_1503(int x, int y) : Active(x, y, GimmickDrillPlatform_1503_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_DrillPlatform", 21);
#endif
        this->animations = &anim_gimmickdrillplatform_1503;
        if (!anim_gimmickdrillplatform_1503_initialized) {
            anim_gimmickdrillplatform_1503_initialized = true;
            images_gimmickdrillplatform_1503_0_0[0] = get_internal_image(7341);
            images_gimmickdrillplatform_1503_0_0[1] = get_internal_image(7454);
            images_gimmickdrillplatform_1503_0_0[2] = get_internal_image(7453);
            images_gimmickdrillplatform_1503_0_0[3] = get_internal_image(7440);
            images_gimmickdrillplatform_1503_0_8[0] = get_internal_image(3156);
            images_gimmickdrillplatform_1503_0_8[1] = get_internal_image(3501);
            images_gimmickdrillplatform_1503_0_24[0] = get_internal_image(7337);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickdrillplatform_1503(int x, int y)
{
    return new (Active::pool.create()) GimmickDrillPlatform_1503(x, y);
}
static Image* images_levellayer1loop2_1504_0_0[1];
static Direction direction_levellayer1loop2_1504_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop2_1504_0_0, 1};
static Animation anim_levellayer1loop2_1504_0 = {&direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, NULL, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0, &direction_levellayer1loop2_1504_0_0};
static Animation * anim_array_levellayer1loop2_1504[1] = {&anim_levellayer1loop2_1504_0};
static Animations anim_levellayer1loop2_1504 = {1, &anim_array_levellayer1loop2_1504[0]};
static bool anim_levellayer1loop2_1504_initialized;
class LevelLayer1Loop2_1504 : public Active
{
public:
    LevelLayer1Loop2_1504(int x, int y) : Active(x, y, LevelLayer1Loop2_1504_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop 2", 19);
#endif
        this->animations = &anim_levellayer1loop2_1504;
        if (!anim_levellayer1loop2_1504_initialized) {
            anim_levellayer1loop2_1504_initialized = true;
            images_levellayer1loop2_1504_0_0[0] = get_internal_image(4069);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer1loop2_1504(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop2_1504(x, y);
}
static Image* images_levellayer03_1505_0_0[1];
static Direction direction_levellayer03_1505_0_0 = {0, 50, 50, 0, 1, images_levellayer03_1505_0_0, 1};
static Animation anim_levellayer03_1505_0 = {&direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, NULL, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0, &direction_levellayer03_1505_0_0};
static Animation * anim_array_levellayer03_1505[1] = {&anim_levellayer03_1505_0};
static Animations anim_levellayer03_1505 = {1, &anim_array_levellayer03_1505[0]};
static bool anim_levellayer03_1505_initialized;
class LevelLayer03_1505 : public Active
{
public:
    LevelLayer03_1505(int x, int y) : Active(x, y, LevelLayer03_1505_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_ 3", 15);
#endif
        this->animations = &anim_levellayer03_1505;
        if (!anim_levellayer03_1505_initialized) {
            anim_levellayer03_1505_initialized = true;
            images_levellayer03_1505_0_0[0] = get_internal_image(3727);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levellayer03_1505(int x, int y)
{
    return new (Active::pool.create()) LevelLayer03_1505(x, y);
}
static Image* images_levelrmplatform_1506_0_0[1];
static Direction direction_levelrmplatform_1506_0_0 = {0, 50, 50, 0, 1, images_levelrmplatform_1506_0_0, 1};
static Animation anim_levelrmplatform_1506_0 = {&direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, NULL, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0, &direction_levelrmplatform_1506_0_0};
static Animation * anim_array_levelrmplatform_1506[1] = {&anim_levelrmplatform_1506_0};
static Animations anim_levelrmplatform_1506 = {1, &anim_array_levelrmplatform_1506[0]};
static bool anim_levelrmplatform_1506_initialized;
class LevelRMPlatform_1506 : public Active
{
public:
    LevelRMPlatform_1506(int x, int y) : Active(x, y, LevelRMPlatform_1506_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_RMPlatform", 16);
#endif
        this->animations = &anim_levelrmplatform_1506;
        if (!anim_levelrmplatform_1506_initialized) {
            anim_levelrmplatform_1506_initialized = true;
            images_levelrmplatform_1506_0_0[0] = get_internal_image(10866);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelrmplatform_1506(int x, int y)
{
    return new (Active::pool.create()) LevelRMPlatform_1506(x, y);
}
static Image* images_switchpressureplate_1507_0_0[1];
static Direction direction_switchpressureplate_1507_0_0 = {0, 50, 50, 0, 1, images_switchpressureplate_1507_0_0, 1};
static Animation anim_switchpressureplate_1507_0 = {&direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, NULL, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0, &direction_switchpressureplate_1507_0_0};
static Animation * anim_array_switchpressureplate_1507[1] = {&anim_switchpressureplate_1507_0};
static Animations anim_switchpressureplate_1507 = {1, &anim_array_switchpressureplate_1507[0]};
static bool anim_switchpressureplate_1507_initialized;
class SwitchPressurePlate_1507 : public Active
{
public:
    SwitchPressurePlate_1507(int x, int y) : Active(x, y, SwitchPressurePlate_1507_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_PressurePlate", 20);
#endif
        this->animations = &anim_switchpressureplate_1507;
        if (!anim_switchpressureplate_1507_initialized) {
            anim_switchpressureplate_1507_initialized = true;
            images_switchpressureplate_1507_0_0[0] = get_internal_image(1076);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_switchpressureplate_1507(int x, int y)
{
    return new (Active::pool.create()) SwitchPressurePlate_1507(x, y);
}
static Image* images_switchdoor_1508_0_0[1];
static Direction direction_switchdoor_1508_0_0 = {0, 50, 50, 0, 1, images_switchdoor_1508_0_0, 1};
static Animation anim_switchdoor_1508_0 = {&direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, NULL, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0, &direction_switchdoor_1508_0_0};
static Animation * anim_array_switchdoor_1508[1] = {&anim_switchdoor_1508_0};
static Animations anim_switchdoor_1508 = {1, &anim_array_switchdoor_1508[0]};
static bool anim_switchdoor_1508_initialized;
class SwitchDoor_1508 : public Active
{
public:
    SwitchDoor_1508(int x, int y) : Active(x, y, SwitchDoor_1508_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door", 11);
#endif
        this->animations = &anim_switchdoor_1508;
        if (!anim_switchdoor_1508_initialized) {
            anim_switchdoor_1508_initialized = true;
            images_switchdoor_1508_0_0[0] = get_internal_image(13189);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_switchdoor_1508(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor_1508(x, y);
}
