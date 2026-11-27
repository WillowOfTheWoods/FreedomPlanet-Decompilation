#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_gimmickelevatorpole_2012_0_0[1];
static Direction direction_gimmickelevatorpole_2012_0_0 = {0, 50, 50, 0, 1, images_gimmickelevatorpole_2012_0_0, 1};
static Animation anim_gimmickelevatorpole_2012_0 = {&direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, NULL, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0, &direction_gimmickelevatorpole_2012_0_0};
static Animation * anim_array_gimmickelevatorpole_2012[1] = {&anim_gimmickelevatorpole_2012_0};
static Animations anim_gimmickelevatorpole_2012 = {1, &anim_array_gimmickelevatorpole_2012[0]};
static bool anim_gimmickelevatorpole_2012_initialized;
class GimmickElevatorPole_2012 : public Active
{
public:
    GimmickElevatorPole_2012(int x, int y) : Active(x, y, GimmickElevatorPole_2012_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_ElevatorPole", 20);
#endif
        this->animations = &anim_gimmickelevatorpole_2012;
        if (!anim_gimmickelevatorpole_2012_initialized) {
            anim_gimmickelevatorpole_2012_initialized = true;
            images_gimmickelevatorpole_2012_0_0[0] = get_internal_image(8396);
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
FrameObject * create_gimmickelevatorpole_2012(int x, int y)
{
    return new (Active::pool.create()) GimmickElevatorPole_2012(x, y);
}
static Image* images_gimmickpolepodcaseinner_2013_0_16[1];
static Direction direction_gimmickpolepodcaseinner_2013_0_16 = {16, 50, 50, 0, 1, images_gimmickpolepodcaseinner_2013_0_16, 1};
static Animation anim_gimmickpolepodcaseinner_2013_0 = {NULL, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16, &direction_gimmickpolepodcaseinner_2013_0_16};
static Animation * anim_array_gimmickpolepodcaseinner_2013[1] = {&anim_gimmickpolepodcaseinner_2013_0};
static Animations anim_gimmickpolepodcaseinner_2013 = {1, &anim_array_gimmickpolepodcaseinner_2013[0]};
static bool anim_gimmickpolepodcaseinner_2013_initialized;
class GimmickPolePodCaseInner_2013 : public Active
{
public:
    GimmickPolePodCaseInner_2013(int x, int y) : Active(x, y, GimmickPolePodCaseInner_2013_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PolePod_Case_Inner", 26);
#endif
        this->animations = &anim_gimmickpolepodcaseinner_2013;
        if (!anim_gimmickpolepodcaseinner_2013_initialized) {
            anim_gimmickpolepodcaseinner_2013_initialized = true;
            images_gimmickpolepodcaseinner_2013_0_16[0] = get_internal_image(11622);
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
FrameObject * create_gimmickpolepodcaseinner_2013(int x, int y)
{
    return new (Active::pool.create()) GimmickPolePodCaseInner_2013(x, y);
}
static Image* images_gimmickpolepodstopper_2014_0_0[1];
static Direction direction_gimmickpolepodstopper_2014_0_0 = {0, 50, 50, 0, 1, images_gimmickpolepodstopper_2014_0_0, 1};
static Animation anim_gimmickpolepodstopper_2014_0 = {&direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, NULL, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0, &direction_gimmickpolepodstopper_2014_0_0};
static Animation * anim_array_gimmickpolepodstopper_2014[1] = {&anim_gimmickpolepodstopper_2014_0};
static Animations anim_gimmickpolepodstopper_2014 = {1, &anim_array_gimmickpolepodstopper_2014[0]};
static bool anim_gimmickpolepodstopper_2014_initialized;
class GimmickPolePodStopper_2014 : public Active
{
public:
    GimmickPolePodStopper_2014(int x, int y) : Active(x, y, GimmickPolePodStopper_2014_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PolePod_Stopper", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickpolepodstopper_2014;
        if (!anim_gimmickpolepodstopper_2014_initialized) {
            anim_gimmickpolepodstopper_2014_initialized = true;
            images_gimmickpolepodstopper_2014_0_0[0] = get_internal_image(7299);
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
FrameObject * create_gimmickpolepodstopper_2014(int x, int y)
{
    return new (Active::pool.create()) GimmickPolePodStopper_2014(x, y);
}
static Image* images_carouselplatform_2015_0_0[1];
static Direction direction_carouselplatform_2015_0_0 = {0, 50, 50, 0, 1, images_carouselplatform_2015_0_0, 1};
static Animation anim_carouselplatform_2015_0 = {&direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, NULL, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0, &direction_carouselplatform_2015_0_0};
static Animation * anim_array_carouselplatform_2015[1] = {&anim_carouselplatform_2015_0};
static Animations anim_carouselplatform_2015 = {1, &anim_array_carouselplatform_2015[0]};
static bool anim_carouselplatform_2015_initialized;
class CarouselPlatform_2015 : public Active
{
public:
    CarouselPlatform_2015(int x, int y) : Active(x, y, CarouselPlatform_2015_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Carousel_Platform", 17);
#endif
        this->animations = &anim_carouselplatform_2015;
        if (!anim_carouselplatform_2015_initialized) {
            anim_carouselplatform_2015_initialized = true;
            images_carouselplatform_2015_0_0[0] = get_internal_image(11647);
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
FrameObject * create_carouselplatform_2015(int x, int y)
{
    return new (Active::pool.create()) CarouselPlatform_2015(x, y);
}
static Image* images_breakablefloor1_2016_0_0[1];
static Direction direction_breakablefloor1_2016_0_0 = {0, 50, 50, 0, 1, images_breakablefloor1_2016_0_0, 1};
static Animation anim_breakablefloor1_2016_0 = {&direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, NULL, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0, &direction_breakablefloor1_2016_0_0};
static Animation * anim_array_breakablefloor1_2016[1] = {&anim_breakablefloor1_2016_0};
static Animations anim_breakablefloor1_2016 = {1, &anim_array_breakablefloor1_2016[0]};
static bool anim_breakablefloor1_2016_initialized;
class BreakableFloor1_2016 : public Active
{
public:
    BreakableFloor1_2016(int x, int y) : Active(x, y, BreakableFloor1_2016_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 1", 16);
#endif
        this->animations = &anim_breakablefloor1_2016;
        if (!anim_breakablefloor1_2016_initialized) {
            anim_breakablefloor1_2016_initialized = true;
            images_breakablefloor1_2016_0_0[0] = get_internal_image(7641);
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
FrameObject * create_breakablefloor1_2016(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor1_2016(x, y);
}
static Image* images_breakablefloor2_2017_0_0[1];
static Direction direction_breakablefloor2_2017_0_0 = {0, 50, 50, 0, 1, images_breakablefloor2_2017_0_0, 1};
static Animation anim_breakablefloor2_2017_0 = {&direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, NULL, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0, &direction_breakablefloor2_2017_0_0};
static Animation * anim_array_breakablefloor2_2017[1] = {&anim_breakablefloor2_2017_0};
static Animations anim_breakablefloor2_2017 = {1, &anim_array_breakablefloor2_2017[0]};
static bool anim_breakablefloor2_2017_initialized;
class BreakableFloor2_2017 : public Active
{
public:
    BreakableFloor2_2017(int x, int y) : Active(x, y, BreakableFloor2_2017_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 2", 16);
#endif
        this->animations = &anim_breakablefloor2_2017;
        if (!anim_breakablefloor2_2017_initialized) {
            anim_breakablefloor2_2017_initialized = true;
            images_breakablefloor2_2017_0_0[0] = get_internal_image(8734);
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
FrameObject * create_breakablefloor2_2017(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor2_2017(x, y);
}
static Image* images_bossgate_2018_0_0[1];
static Direction direction_bossgate_2018_0_0 = {0, 50, 50, 0, 1, images_bossgate_2018_0_0, 1};
static Animation anim_bossgate_2018_0 = {&direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, NULL, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0, &direction_bossgate_2018_0_0};
static Animation * anim_array_bossgate_2018[1] = {&anim_bossgate_2018_0};
static Animations anim_bossgate_2018 = {1, &anim_array_bossgate_2018[0]};
static bool anim_bossgate_2018_initialized;
class BossGate_2018 : public Active
{
public:
    BossGate_2018(int x, int y) : Active(x, y, BossGate_2018_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BossGate", 8);
#endif
        this->animations = &anim_bossgate_2018;
        if (!anim_bossgate_2018_initialized) {
            anim_bossgate_2018_initialized = true;
            images_bossgate_2018_0_0[0] = get_internal_image(2793);
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
FrameObject * create_bossgate_2018(int x, int y)
{
    return new (Active::pool.create()) BossGate_2018(x, y);
}
static Image* images_gimmickelevatordoor_2019_0_0[12];
static Direction direction_gimmickelevatordoor_2019_0_0 = {0, 0, 0, 0, 1, images_gimmickelevatordoor_2019_0_0, 12};
static Animation anim_gimmickelevatordoor_2019_0 = {&direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, NULL, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0, &direction_gimmickelevatordoor_2019_0_0};
static Animation * anim_array_gimmickelevatordoor_2019[1] = {&anim_gimmickelevatordoor_2019_0};
static Animations anim_gimmickelevatordoor_2019 = {1, &anim_array_gimmickelevatordoor_2019[0]};
static bool anim_gimmickelevatordoor_2019_initialized;
class GimmickElevatorDoor_2019 : public Active
{
public:
    GimmickElevatorDoor_2019(int x, int y) : Active(x, y, GimmickElevatorDoor_2019_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_ElevatorDoor", 20);
#endif
        this->animations = &anim_gimmickelevatordoor_2019;
        if (!anim_gimmickelevatordoor_2019_initialized) {
            anim_gimmickelevatordoor_2019_initialized = true;
            images_gimmickelevatordoor_2019_0_0[0] = get_internal_image(7324);
            images_gimmickelevatordoor_2019_0_0[1] = get_internal_image(7325);
            images_gimmickelevatordoor_2019_0_0[2] = get_internal_image(7326);
            images_gimmickelevatordoor_2019_0_0[3] = get_internal_image(7323);
            images_gimmickelevatordoor_2019_0_0[4] = get_internal_image(7327);
            images_gimmickelevatordoor_2019_0_0[5] = get_internal_image(7328);
            images_gimmickelevatordoor_2019_0_0[6] = get_internal_image(7329);
            images_gimmickelevatordoor_2019_0_0[7] = get_internal_image(7330);
            images_gimmickelevatordoor_2019_0_0[8] = get_internal_image(7331);
            images_gimmickelevatordoor_2019_0_0[9] = get_internal_image(7323);
            images_gimmickelevatordoor_2019_0_0[10] = get_internal_image(7332);
            images_gimmickelevatordoor_2019_0_0[11] = get_internal_image(7334);
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
FrameObject * create_gimmickelevatordoor_2019(int x, int y)
{
    return new (Active::pool.create()) GimmickElevatorDoor_2019(x, y);
}
static Image* images_gimmickelevator_2020_0_0[1];
static Direction direction_gimmickelevator_2020_0_0 = {0, 0, 0, 0, 1, images_gimmickelevator_2020_0_0, 1};
static Animation anim_gimmickelevator_2020_0 = {&direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, NULL, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0, &direction_gimmickelevator_2020_0_0};
static Animation * anim_array_gimmickelevator_2020[1] = {&anim_gimmickelevator_2020_0};
static Animations anim_gimmickelevator_2020 = {1, &anim_array_gimmickelevator_2020[0]};
static bool anim_gimmickelevator_2020_initialized;
class GimmickElevator_2020 : public Active
{
public:
    GimmickElevator_2020(int x, int y) : Active(x, y, GimmickElevator_2020_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_Elevator", 16);
#endif
        this->animations = &anim_gimmickelevator_2020;
        if (!anim_gimmickelevator_2020_initialized) {
            anim_gimmickelevator_2020_initialized = true;
            images_gimmickelevator_2020_0_0[0] = get_internal_image(11615);
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
FrameObject * create_gimmickelevator_2020(int x, int y)
{
    return new (Active::pool.create()) GimmickElevator_2020(x, y);
}
static Image* images_scrollingfloor_2021_0_0[1];
static Direction direction_scrollingfloor_2021_0_0 = {0, 50, 50, 0, 1, images_scrollingfloor_2021_0_0, 1};
static Animation anim_scrollingfloor_2021_0 = {&direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, NULL, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0, &direction_scrollingfloor_2021_0_0};
static Animation * anim_array_scrollingfloor_2021[1] = {&anim_scrollingfloor_2021_0};
static Animations anim_scrollingfloor_2021 = {1, &anim_array_scrollingfloor_2021[0]};
static bool anim_scrollingfloor_2021_initialized;
class ScrollingFloor_2021 : public Active
{
public:
    ScrollingFloor_2021(int x, int y) : Active(x, y, ScrollingFloor_2021_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("ScrollingFloor", 14);
#endif
        this->animations = &anim_scrollingfloor_2021;
        if (!anim_scrollingfloor_2021_initialized) {
            anim_scrollingfloor_2021_initialized = true;
            images_scrollingfloor_2021_0_0[0] = get_internal_image(8325);
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
FrameObject * create_scrollingfloor_2021(int x, int y)
{
    return new (Active::pool.create()) ScrollingFloor_2021(x, y);
}
static Image* images_bossplasmashot_2022_0_0[1];
static Direction direction_bossplasmashot_2022_0_0 = {0, 50, 50, 0, 1, images_bossplasmashot_2022_0_0, 1};
static Animation anim_bossplasmashot_2022_0 = {&direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, NULL, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0, &direction_bossplasmashot_2022_0_0};
static Animation * anim_array_bossplasmashot_2022[1] = {&anim_bossplasmashot_2022_0};
static Animations anim_bossplasmashot_2022 = {1, &anim_array_bossplasmashot_2022[0]};
static bool anim_bossplasmashot_2022_initialized;
class BossPlasmaShot_2022 : public Active
{
public:
    BossPlasmaShot_2022(int x, int y) : Active(x, y, BossPlasmaShot_2022_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PlasmaShot", 15);
#endif
        this->animations = &anim_bossplasmashot_2022;
        if (!anim_bossplasmashot_2022_initialized) {
            anim_bossplasmashot_2022_initialized = true;
            images_bossplasmashot_2022_0_0[0] = get_internal_image(302);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(randrange(32));
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(100);
        ((BallMovement*)movements[0])->set_deceleration(0);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_bossplasmashot_2022(int x, int y)
{
    return new (Active::pool.create()) BossPlasmaShot_2022(x, y);
}
static Image* images_bossmissile_2023_0_0[4];
static Direction direction_bossmissile_2023_0_0 = {0, 50, 50, 0, -1, images_bossmissile_2023_0_0, 4};
static Image* images_bossmissile_2023_0_16[4];
static Direction direction_bossmissile_2023_0_16 = {16, 50, 50, 0, -1, images_bossmissile_2023_0_16, 4};
static Animation anim_bossmissile_2023_0 = {&direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, NULL, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, &direction_bossmissile_2023_0_16, NULL, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0, &direction_bossmissile_2023_0_0};
static Image* images_bossmissile_2023_8_0[1];
static Direction direction_bossmissile_2023_8_0 = {0, 50, 50, 0, -1, images_bossmissile_2023_8_0, 1};
static Animation anim_bossmissile_2023_8 = {&direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, NULL, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0, &direction_bossmissile_2023_8_0};
static Animation * anim_array_bossmissile_2023[9] = {&anim_bossmissile_2023_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmissile_2023_8};
static Animations anim_bossmissile_2023 = {9, &anim_array_bossmissile_2023[0]};
static bool anim_bossmissile_2023_initialized;
class BossMissile_2023 : public Active
{
public:
    BossMissile_2023(int x, int y) : Active(x, y, BossMissile_2023_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Missile", 12);
#endif
        this->animations = &anim_bossmissile_2023;
        if (!anim_bossmissile_2023_initialized) {
            anim_bossmissile_2023_initialized = true;
            images_bossmissile_2023_0_0[0] = get_internal_image(7236);
            images_bossmissile_2023_0_0[1] = get_internal_image(7237);
            images_bossmissile_2023_0_0[2] = get_internal_image(7238);
            images_bossmissile_2023_0_0[3] = get_internal_image(7239);
            images_bossmissile_2023_0_16[0] = get_internal_image(7240);
            images_bossmissile_2023_0_16[1] = get_internal_image(7241);
            images_bossmissile_2023_0_16[2] = get_internal_image(7242);
            images_bossmissile_2023_0_16[3] = get_internal_image(7243);
            images_bossmissile_2023_8_0[0] = get_internal_image(3049);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(randrange(32));
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(70);
        ((BallMovement*)movements[0])->set_deceleration(30);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_bossmissile_2023(int x, int y)
{
    return new (Active::pool.create()) BossMissile_2023(x, y);
}
static Image* images_effectspeedline_2024_0_0[1];
static Direction direction_effectspeedline_2024_0_0 = {0, 50, 50, 0, 1, images_effectspeedline_2024_0_0, 1};
static Animation anim_effectspeedline_2024_0 = {&direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, NULL, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0, &direction_effectspeedline_2024_0_0};
static Animation * anim_array_effectspeedline_2024[1] = {&anim_effectspeedline_2024_0};
static Animations anim_effectspeedline_2024 = {1, &anim_array_effectspeedline_2024[0]};
static bool anim_effectspeedline_2024_initialized;
class EffectSpeedLine_2024 : public Active
{
public:
    EffectSpeedLine_2024(int x, int y) : Active(x, y, EffectSpeedLine_2024_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_SpeedLine", 16);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_effectspeedline_2024;
        if (!anim_effectspeedline_2024_initialized) {
            anim_effectspeedline_2024_initialized = true;
            images_effectspeedline_2024_0_0[0] = get_internal_image(8936);
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
FrameObject * create_effectspeedline_2024(int x, int y)
{
    return new (Active::pool.create()) EffectSpeedLine_2024(x, y);
}
static Image* images_effectsgroundspark_2025_4_0[5];
static Direction direction_effectsgroundspark_2025_4_0 = {0, 100, 100, 0, 1, images_effectsgroundspark_2025_4_0, 5};
static Animation anim_effectsgroundspark_2025_4 = {&direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, NULL, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0, &direction_effectsgroundspark_2025_4_0};
static Animation * anim_array_effectsgroundspark_2025[5] = {NULL, NULL, NULL, NULL, &anim_effectsgroundspark_2025_4};
static Animations anim_effectsgroundspark_2025 = {5, &anim_array_effectsgroundspark_2025[0]};
static bool anim_effectsgroundspark_2025_initialized;
class EffectsGroundSpark_2025 : public Active
{
public:
    EffectsGroundSpark_2025(int x, int y) : Active(x, y, EffectsGroundSpark_2025_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_GroundSpark", 19);
#endif
        this->animations = &anim_effectsgroundspark_2025;
        if (!anim_effectsgroundspark_2025_initialized) {
            anim_effectsgroundspark_2025_initialized = true;
            images_effectsgroundspark_2025_4_0[0] = get_internal_image(5077);
            images_effectsgroundspark_2025_4_0[1] = get_internal_image(5069);
            images_effectsgroundspark_2025_4_0[2] = get_internal_image(4508);
            images_effectsgroundspark_2025_4_0[3] = get_internal_image(5081);
            images_effectsgroundspark_2025_4_0[4] = get_internal_image(4505);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_direction(pick_random(8, 2, 3, 4, 5, 11, 12, 13, 14));
        create_alterables();
    }
};
FrameObject * create_effectsgroundspark_2025(int x, int y)
{
    return new (Active::pool.create()) EffectsGroundSpark_2025(x, y);
}
static Image* images_effectspeedback_2026_0_0[1];
static Direction direction_effectspeedback_2026_0_0 = {0, 50, 50, 0, 1, images_effectspeedback_2026_0_0, 1};
static Animation anim_effectspeedback_2026_0 = {&direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, NULL, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0, &direction_effectspeedback_2026_0_0};
static Animation * anim_array_effectspeedback_2026[1] = {&anim_effectspeedback_2026_0};
static Animations anim_effectspeedback_2026 = {1, &anim_array_effectspeedback_2026[0]};
static bool anim_effectspeedback_2026_initialized;
class EffectSpeedBack_2026 : public Active
{
public:
    EffectSpeedBack_2026(int x, int y) : Active(x, y, EffectSpeedBack_2026_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_SpeedBack", 16);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_effectspeedback_2026;
        if (!anim_effectspeedback_2026_initialized) {
            anim_effectspeedback_2026_initialized = true;
            images_effectspeedback_2026_0_0[0] = get_internal_image(8941);
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
FrameObject * create_effectspeedback_2026(int x, int y)
{
    return new (Active::pool.create()) EffectSpeedBack_2026(x, y);
}
static Image* images_bosspantherwheel_2027_0_0[1];
static Direction direction_bosspantherwheel_2027_0_0 = {0, 50, 50, 0, 1, images_bosspantherwheel_2027_0_0, 1};
static Animation anim_bosspantherwheel_2027_0 = {&direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, NULL, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0, &direction_bosspantherwheel_2027_0_0};
static Animation * anim_array_bosspantherwheel_2027[1] = {&anim_bosspantherwheel_2027_0};
static Animations anim_bosspantherwheel_2027 = {1, &anim_array_bosspantherwheel_2027[0]};
static bool anim_bosspantherwheel_2027_initialized;
class BossPantherWheel_2027 : public Active
{
public:
    BossPantherWheel_2027(int x, int y) : Active(x, y, BossPantherWheel_2027_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherWheel", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosspantherwheel_2027;
        if (!anim_bosspantherwheel_2027_initialized) {
            anim_bosspantherwheel_2027_initialized = true;
            images_bosspantherwheel_2027_0_0[0] = get_internal_image(2235);
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
FrameObject * create_bosspantherwheel_2027(int x, int y)
{
    return new (Active::pool.create()) BossPantherWheel_2027(x, y);
}
static Image* images_playerassist_2028_0_0[4];
static Direction direction_playerassist_2028_0_0 = {0, 100, 100, 0, -1, images_playerassist_2028_0_0, 4};
static Image* images_playerassist_2028_0_1[4];
static Direction direction_playerassist_2028_0_1 = {1, 100, 100, 0, -1, images_playerassist_2028_0_1, 4};
static Animation anim_playerassist_2028_0 = {&direction_playerassist_2028_0_0, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_1, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0, &direction_playerassist_2028_0_0};
static Animation * anim_array_playerassist_2028[1] = {&anim_playerassist_2028_0};
static Animations anim_playerassist_2028 = {1, &anim_array_playerassist_2028[0]};
static bool anim_playerassist_2028_initialized;
class PlayerAssist_2028 : public Active
{
public:
    PlayerAssist_2028(int x, int y) : Active(x, y, PlayerAssist_2028_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist", 13);
#endif
        set_visible(false);
        this->animations = &anim_playerassist_2028;
        if (!anim_playerassist_2028_initialized) {
            anim_playerassist_2028_initialized = true;
            images_playerassist_2028_0_0[0] = get_internal_image(3507);
            images_playerassist_2028_0_0[1] = get_internal_image(213);
            images_playerassist_2028_0_0[2] = get_internal_image(316);
            images_playerassist_2028_0_0[3] = get_internal_image(3528);
            images_playerassist_2028_0_1[0] = get_internal_image(3747);
            images_playerassist_2028_0_1[1] = get_internal_image(361);
            images_playerassist_2028_0_1[2] = get_internal_image(373);
            images_playerassist_2028_0_1[3] = get_internal_image(3753);
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
FrameObject * create_playerassist_2028(int x, int y)
{
    return new (Active::pool.create()) PlayerAssist_2028(x, y);
}
static Image* images_playerassistdefense_2029_0_0[5];
static Direction direction_playerassistdefense_2029_0_0 = {0, 50, 50, 0, -1, images_playerassistdefense_2029_0_0, 5};
static Image* images_playerassistdefense_2029_0_1[5];
static Direction direction_playerassistdefense_2029_0_1 = {1, 50, 50, 0, -1, images_playerassistdefense_2029_0_1, 5};
static Image* images_playerassistdefense_2029_0_8[1];
static Direction direction_playerassistdefense_2029_0_8 = {8, 50, 50, 0, -1, images_playerassistdefense_2029_0_8, 1};
static Animation anim_playerassistdefense_2029_0 = {&direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_1, &direction_playerassistdefense_2029_0_1, &direction_playerassistdefense_2029_0_1, &direction_playerassistdefense_2029_0_1, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, &direction_playerassistdefense_2029_0_8, NULL, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0, &direction_playerassistdefense_2029_0_0};
static Image* images_playerassistdefense_2029_7_0[7];
static Direction direction_playerassistdefense_2029_7_0 = {0, 50, 50, 2, -1, images_playerassistdefense_2029_7_0, 7};
static Animation anim_playerassistdefense_2029_7 = {&direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, NULL, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0, &direction_playerassistdefense_2029_7_0};
static Image* images_playerassistdefense_2029_10_0[1];
static Direction direction_playerassistdefense_2029_10_0 = {0, 50, 50, 0, -1, images_playerassistdefense_2029_10_0, 1};
static Animation anim_playerassistdefense_2029_10 = {&direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, NULL, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0, &direction_playerassistdefense_2029_10_0};
static Image* images_playerassistdefense_2029_11_0[5];
static Direction direction_playerassistdefense_2029_11_0 = {0, 50, 50, 0, -1, images_playerassistdefense_2029_11_0, 5};
static Image* images_playerassistdefense_2029_11_8[2];
static Direction direction_playerassistdefense_2029_11_8 = {8, 50, 50, 0, 1, images_playerassistdefense_2029_11_8, 2};
static Animation anim_playerassistdefense_2029_11 = {&direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, NULL, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, &direction_playerassistdefense_2029_11_8, NULL, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0, &direction_playerassistdefense_2029_11_0};
static Animation * anim_array_playerassistdefense_2029[12] = {&anim_playerassistdefense_2029_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistdefense_2029_7, NULL, NULL, &anim_playerassistdefense_2029_10, &anim_playerassistdefense_2029_11};
static Animations anim_playerassistdefense_2029 = {12, &anim_array_playerassistdefense_2029[0]};
static bool anim_playerassistdefense_2029_initialized;
class PlayerAssistDefense_2029 : public Active
{
public:
    PlayerAssistDefense_2029(int x, int y) : Active(x, y, PlayerAssistDefense_2029_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Defense", 21);
#endif
        this->animations = &anim_playerassistdefense_2029;
        if (!anim_playerassistdefense_2029_initialized) {
            anim_playerassistdefense_2029_initialized = true;
            images_playerassistdefense_2029_0_0[0] = get_internal_image(852);
            images_playerassistdefense_2029_0_0[1] = get_internal_image(848);
            images_playerassistdefense_2029_0_0[2] = get_internal_image(851);
            images_playerassistdefense_2029_0_0[3] = get_internal_image(847);
            images_playerassistdefense_2029_0_0[4] = get_internal_image(849);
            images_playerassistdefense_2029_0_1[0] = get_internal_image(2602);
            images_playerassistdefense_2029_0_1[1] = get_internal_image(3150);
            images_playerassistdefense_2029_0_1[2] = get_internal_image(4966);
            images_playerassistdefense_2029_0_1[3] = get_internal_image(3687);
            images_playerassistdefense_2029_0_1[4] = get_internal_image(5443);
            images_playerassistdefense_2029_0_8[0] = get_internal_image(844);
            images_playerassistdefense_2029_7_0[0] = get_internal_image(852);
            images_playerassistdefense_2029_7_0[1] = get_internal_image(842);
            images_playerassistdefense_2029_7_0[2] = get_internal_image(855);
            images_playerassistdefense_2029_7_0[3] = get_internal_image(854);
            images_playerassistdefense_2029_7_0[4] = get_internal_image(856);
            images_playerassistdefense_2029_7_0[5] = get_internal_image(853);
            images_playerassistdefense_2029_7_0[6] = get_internal_image(843);
            images_playerassistdefense_2029_10_0[0] = get_internal_image(850);
            images_playerassistdefense_2029_11_0[0] = get_internal_image(11621);
            images_playerassistdefense_2029_11_0[1] = get_internal_image(11617);
            images_playerassistdefense_2029_11_0[2] = get_internal_image(11619);
            images_playerassistdefense_2029_11_0[3] = get_internal_image(11618);
            images_playerassistdefense_2029_11_0[4] = get_internal_image(11620);
            images_playerassistdefense_2029_11_8[0] = get_internal_image(4064);
            images_playerassistdefense_2029_11_8[1] = get_internal_image(1029);
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
FrameObject * create_playerassistdefense_2029(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistDefense_2029(x, y);
}
static Image* images_playerassistprojectile_2030_0_0[5];
static Direction direction_playerassistprojectile_2030_0_0 = {0, 50, 50, 0, -1, images_playerassistprojectile_2030_0_0, 5};
static Image* images_playerassistprojectile_2030_0_16[5];
static Direction direction_playerassistprojectile_2030_0_16 = {16, 50, 50, 0, -1, images_playerassistprojectile_2030_0_16, 5};
static Animation anim_playerassistprojectile_2030_0 = {&direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, NULL, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, &direction_playerassistprojectile_2030_0_16, NULL, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0, &direction_playerassistprojectile_2030_0_0};
static Image* images_playerassistprojectile_2030_7_0[6];
static Direction direction_playerassistprojectile_2030_7_0 = {0, 90, 90, 0, -1, images_playerassistprojectile_2030_7_0, 6};
static Image* images_playerassistprojectile_2030_7_16[6];
static Direction direction_playerassistprojectile_2030_7_16 = {16, 90, 90, 0, -1, images_playerassistprojectile_2030_7_16, 6};
static Animation anim_playerassistprojectile_2030_7 = {&direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, NULL, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, &direction_playerassistprojectile_2030_7_16, NULL, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0, &direction_playerassistprojectile_2030_7_0};
static Image* images_playerassistprojectile_2030_8_0[1];
static Direction direction_playerassistprojectile_2030_8_0 = {0, 9, 9, 0, -1, images_playerassistprojectile_2030_8_0, 1};
static Animation anim_playerassistprojectile_2030_8 = {&direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, NULL, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0, &direction_playerassistprojectile_2030_8_0};
static Animation * anim_array_playerassistprojectile_2030[9] = {&anim_playerassistprojectile_2030_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistprojectile_2030_7, &anim_playerassistprojectile_2030_8};
static Animations anim_playerassistprojectile_2030 = {9, &anim_array_playerassistprojectile_2030[0]};
static bool anim_playerassistprojectile_2030_initialized;
class PlayerAssistProjectile_2030 : public Active
{
public:
    PlayerAssistProjectile_2030(int x, int y) : Active(x, y, PlayerAssistProjectile_2030_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Projectile", 24);
#endif
        this->animations = &anim_playerassistprojectile_2030;
        if (!anim_playerassistprojectile_2030_initialized) {
            anim_playerassistprojectile_2030_initialized = true;
            images_playerassistprojectile_2030_0_0[0] = get_internal_image(10500);
            images_playerassistprojectile_2030_0_0[1] = get_internal_image(10497);
            images_playerassistprojectile_2030_0_0[2] = get_internal_image(10499);
            images_playerassistprojectile_2030_0_0[3] = get_internal_image(10498);
            images_playerassistprojectile_2030_0_0[4] = get_internal_image(10502);
            images_playerassistprojectile_2030_0_16[0] = get_internal_image(10501);
            images_playerassistprojectile_2030_0_16[1] = get_internal_image(10503);
            images_playerassistprojectile_2030_0_16[2] = get_internal_image(10504);
            images_playerassistprojectile_2030_0_16[3] = get_internal_image(10505);
            images_playerassistprojectile_2030_0_16[4] = get_internal_image(10506);
            images_playerassistprojectile_2030_7_0[0] = get_internal_image(10494);
            images_playerassistprojectile_2030_7_0[1] = get_internal_image(10491);
            images_playerassistprojectile_2030_7_0[2] = get_internal_image(10493);
            images_playerassistprojectile_2030_7_0[3] = get_internal_image(10495);
            images_playerassistprojectile_2030_7_0[4] = get_internal_image(10492);
            images_playerassistprojectile_2030_7_0[5] = get_internal_image(10496);
            images_playerassistprojectile_2030_7_16[0] = get_internal_image(10494);
            images_playerassistprojectile_2030_7_16[1] = get_internal_image(10491);
            images_playerassistprojectile_2030_7_16[2] = get_internal_image(10493);
            images_playerassistprojectile_2030_7_16[3] = get_internal_image(10495);
            images_playerassistprojectile_2030_7_16[4] = get_internal_image(10492);
            images_playerassistprojectile_2030_7_16[5] = get_internal_image(10496);
            images_playerassistprojectile_2030_8_0[0] = get_internal_image(10416);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 5);
    }
};
FrameObject * create_playerassistprojectile_2030(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistProjectile_2030(x, y);
}
static Image* images_bosspantherbackcannon_2031_0_0[1];
static Direction direction_bosspantherbackcannon_2031_0_0 = {0, 50, 50, 0, 1, images_bosspantherbackcannon_2031_0_0, 1};
static Image* images_bosspantherbackcannon_2031_0_1[4];
static Direction direction_bosspantherbackcannon_2031_0_1 = {1, 50, 50, 0, -1, images_bosspantherbackcannon_2031_0_1, 4};
static Image* images_bosspantherbackcannon_2031_0_8[2];
static Direction direction_bosspantherbackcannon_2031_0_8 = {8, 50, 50, 0, 1, images_bosspantherbackcannon_2031_0_8, 2};
static Animation anim_bosspantherbackcannon_2031_0 = {&direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_1, &direction_bosspantherbackcannon_2031_0_1, &direction_bosspantherbackcannon_2031_0_1, &direction_bosspantherbackcannon_2031_0_1, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, &direction_bosspantherbackcannon_2031_0_8, NULL, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0, &direction_bosspantherbackcannon_2031_0_0};
static Animation * anim_array_bosspantherbackcannon_2031[1] = {&anim_bosspantherbackcannon_2031_0};
static Animations anim_bosspantherbackcannon_2031 = {1, &anim_array_bosspantherbackcannon_2031[0]};
static bool anim_bosspantherbackcannon_2031_initialized;
class BossPantherBackCannon_2031 : public Active
{
public:
    BossPantherBackCannon_2031(int x, int y) : Active(x, y, BossPantherBackCannon_2031_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherBackCannon", 22);
#endif
        this->animations = &anim_bosspantherbackcannon_2031;
        if (!anim_bosspantherbackcannon_2031_initialized) {
            anim_bosspantherbackcannon_2031_initialized = true;
            images_bosspantherbackcannon_2031_0_0[0] = get_internal_image(11357);
            images_bosspantherbackcannon_2031_0_1[0] = get_internal_image(11357);
            images_bosspantherbackcannon_2031_0_1[1] = get_internal_image(11361);
            images_bosspantherbackcannon_2031_0_1[2] = get_internal_image(11365);
            images_bosspantherbackcannon_2031_0_1[3] = get_internal_image(11360);
            images_bosspantherbackcannon_2031_0_8[0] = get_internal_image(11362);
            images_bosspantherbackcannon_2031_0_8[1] = get_internal_image(11364);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
        alterables->values.set(1, 56);
        alterables->values.set(2, 48);
        alterables->values.set(3, -1);
    }
};
FrameObject * create_bosspantherbackcannon_2031(int x, int y)
{
    return new (Active::pool.create()) BossPantherBackCannon_2031(x, y);
}
static Image* images_bosspantherrider_2032_0_0[1];
static Direction direction_bosspantherrider_2032_0_0 = {0, 50, 50, 0, 1, images_bosspantherrider_2032_0_0, 1};
static Image* images_bosspantherrider_2032_0_1[1];
static Direction direction_bosspantherrider_2032_0_1 = {1, 50, 50, 0, 1, images_bosspantherrider_2032_0_1, 1};
static Image* images_bosspantherrider_2032_0_2[2];
static Direction direction_bosspantherrider_2032_0_2 = {2, 30, 30, 0, -1, images_bosspantherrider_2032_0_2, 2};
static Animation anim_bosspantherrider_2032_0 = {&direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_1, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, &direction_bosspantherrider_2032_0_2, NULL, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0, &direction_bosspantherrider_2032_0_0};
static Image* images_bosspantherrider_2032_7_0[5];
static Direction direction_bosspantherrider_2032_7_0 = {0, 9, 9, 4, -1, images_bosspantherrider_2032_7_0, 5};
static Animation anim_bosspantherrider_2032_7 = {&direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, NULL, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0, &direction_bosspantherrider_2032_7_0};
static Image* images_bosspantherrider_2032_9_0[8];
static Direction direction_bosspantherrider_2032_9_0 = {0, 50, 50, 4, -1, images_bosspantherrider_2032_9_0, 8};
static Animation anim_bosspantherrider_2032_9 = {&direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, NULL, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0, &direction_bosspantherrider_2032_9_0};
static Image* images_bosspantherrider_2032_12_0[1];
static Direction direction_bosspantherrider_2032_12_0 = {0, 100, 100, 0, 8, images_bosspantherrider_2032_12_0, 1};
static Animation anim_bosspantherrider_2032_12 = {&direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, NULL, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0, &direction_bosspantherrider_2032_12_0};
static Image* images_bosspantherrider_2032_13_0[11];
static Direction direction_bosspantherrider_2032_13_0 = {0, 100, 100, 5, 15, images_bosspantherrider_2032_13_0, 11};
static Animation anim_bosspantherrider_2032_13 = {&direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, NULL, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0, &direction_bosspantherrider_2032_13_0};
static Animation * anim_array_bosspantherrider_2032[14] = {&anim_bosspantherrider_2032_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosspantherrider_2032_7, NULL, &anim_bosspantherrider_2032_9, NULL, NULL, &anim_bosspantherrider_2032_12, &anim_bosspantherrider_2032_13};
static Animations anim_bosspantherrider_2032 = {14, &anim_array_bosspantherrider_2032[0]};
static bool anim_bosspantherrider_2032_initialized;
class BossPantherRider_2032 : public Active
{
public:
    BossPantherRider_2032(int x, int y) : Active(x, y, BossPantherRider_2032_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherRider", 17);
#endif
        this->animations = &anim_bosspantherrider_2032;
        if (!anim_bosspantherrider_2032_initialized) {
            anim_bosspantherrider_2032_initialized = true;
            images_bosspantherrider_2032_0_0[0] = get_internal_image(15497);
            images_bosspantherrider_2032_0_1[0] = get_internal_image(15498);
            images_bosspantherrider_2032_0_2[0] = get_internal_image(15499);
            images_bosspantherrider_2032_0_2[1] = get_internal_image(15500);
            images_bosspantherrider_2032_7_0[0] = get_internal_image(7702);
            images_bosspantherrider_2032_7_0[1] = get_internal_image(7702);
            images_bosspantherrider_2032_7_0[2] = get_internal_image(7704);
            images_bosspantherrider_2032_7_0[3] = get_internal_image(7704);
            images_bosspantherrider_2032_7_0[4] = get_internal_image(7703);
            images_bosspantherrider_2032_9_0[0] = get_internal_image(7702);
            images_bosspantherrider_2032_9_0[1] = get_internal_image(7702);
            images_bosspantherrider_2032_9_0[2] = get_internal_image(7702);
            images_bosspantherrider_2032_9_0[3] = get_internal_image(7702);
            images_bosspantherrider_2032_9_0[4] = get_internal_image(7732);
            images_bosspantherrider_2032_9_0[5] = get_internal_image(7733);
            images_bosspantherrider_2032_9_0[6] = get_internal_image(7734);
            images_bosspantherrider_2032_9_0[7] = get_internal_image(7735);
            images_bosspantherrider_2032_12_0[0] = get_internal_image(7748);
            images_bosspantherrider_2032_13_0[0] = get_internal_image(7635);
            images_bosspantherrider_2032_13_0[1] = get_internal_image(7635);
            images_bosspantherrider_2032_13_0[2] = get_internal_image(7635);
            images_bosspantherrider_2032_13_0[3] = get_internal_image(7635);
            images_bosspantherrider_2032_13_0[4] = get_internal_image(7638);
            images_bosspantherrider_2032_13_0[5] = get_internal_image(7640);
            images_bosspantherrider_2032_13_0[6] = get_internal_image(7652);
            images_bosspantherrider_2032_13_0[7] = get_internal_image(7656);
            images_bosspantherrider_2032_13_0[8] = get_internal_image(7658);
            images_bosspantherrider_2032_13_0[9] = get_internal_image(7659);
            images_bosspantherrider_2032_13_0[10] = get_internal_image(7660);
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
FrameObject * create_bosspantherrider_2032(int x, int y)
{
    return new (Active::pool.create()) BossPantherRider_2032(x, y);
}
static Image* images_bosschargeglow_2033_0_0[2];
static Direction direction_bosschargeglow_2033_0_0 = {0, 50, 50, 0, -1, images_bosschargeglow_2033_0_0, 2};
static Animation anim_bosschargeglow_2033_0 = {&direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, NULL, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0, &direction_bosschargeglow_2033_0_0};
static Animation * anim_array_bosschargeglow_2033[1] = {&anim_bosschargeglow_2033_0};
static Animations anim_bosschargeglow_2033 = {1, &anim_array_bosschargeglow_2033[0]};
static bool anim_bosschargeglow_2033_initialized;
class BossChargeglow_2033 : public Active
{
public:
    BossChargeglow_2033(int x, int y) : Active(x, y, BossChargeglow_2033_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Chargeglow", 15);
#endif
        this->animations = &anim_bosschargeglow_2033;
        if (!anim_bosschargeglow_2033_initialized) {
            anim_bosschargeglow_2033_initialized = true;
            images_bosschargeglow_2033_0_0[0] = get_internal_image(7244);
            images_bosschargeglow_2033_0_0[1] = get_internal_image(357);
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
FrameObject * create_bosschargeglow_2033(int x, int y)
{
    return new (Active::pool.create()) BossChargeglow_2033(x, y);
}
static Image* images_bosspantherhitbox_2034_0_0[1];
static Direction direction_bosspantherhitbox_2034_0_0 = {0, 50, 50, 0, 1, images_bosspantherhitbox_2034_0_0, 1};
static Animation anim_bosspantherhitbox_2034_0 = {&direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, NULL, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0, &direction_bosspantherhitbox_2034_0_0};
static Animation * anim_array_bosspantherhitbox_2034[1] = {&anim_bosspantherhitbox_2034_0};
static Animations anim_bosspantherhitbox_2034 = {1, &anim_array_bosspantherhitbox_2034[0]};
static bool anim_bosspantherhitbox_2034_initialized;
class BossPantherHitbox_2034 : public Active
{
public:
    BossPantherHitbox_2034(int x, int y) : Active(x, y, BossPantherHitbox_2034_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_PantherHitbox", 18);
#endif
        set_visible(false);
        this->animations = &anim_bosspantherhitbox_2034;
        if (!anim_bosspantherhitbox_2034_initialized) {
            anim_bosspantherhitbox_2034_initialized = true;
            images_bosspantherhitbox_2034_0_0[0] = get_internal_image(8917);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 60);
    }
};
FrameObject * create_bosspantherhitbox_2034(int x, int y)
{
    return new (Active::pool.create()) BossPantherHitbox_2034(x, y);
}
static Image* images_bosspanthertarget_2035_0_0[1];
static Direction direction_bosspanthertarget_2035_0_0 = {0, 50, 50, 0, 1, images_bosspanthertarget_2035_0_0, 1};
static Animation anim_bosspanthertarget_2035_0 = {&direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, NULL, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0, &direction_bosspanthertarget_2035_0_0};
static Animation * anim_array_bosspanthertarget_2035[1] = {&anim_bosspanthertarget_2035_0};
static Animations anim_bosspanthertarget_2035 = {1, &anim_array_bosspanthertarget_2035[0]};
static bool anim_bosspanthertarget_2035_initialized;
class BossPantherTarget_2035 : public Active
{
public:
    BossPantherTarget_2035(int x, int y) : Active(x, y, BossPantherTarget_2035_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherTarget", 18);
#endif
        set_visible(false);
        this->animations = &anim_bosspanthertarget_2035;
        if (!anim_bosspanthertarget_2035_initialized) {
            anim_bosspanthertarget_2035_initialized = true;
            images_bosspanthertarget_2035_0_0[0] = get_internal_image(8897);
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
FrameObject * create_bosspanthertarget_2035(int x, int y)
{
    return new (Active::pool.create()) BossPantherTarget_2035(x, y);
}
static Image* images_bosspantherlaser_2036_0_0[3];
static Direction direction_bosspantherlaser_2036_0_0 = {0, 100, 100, 0, -1, images_bosspantherlaser_2036_0_0, 3};
static Animation anim_bosspantherlaser_2036_0 = {&direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, NULL, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0, &direction_bosspantherlaser_2036_0_0};
static Animation * anim_array_bosspantherlaser_2036[1] = {&anim_bosspantherlaser_2036_0};
static Animations anim_bosspantherlaser_2036 = {1, &anim_array_bosspantherlaser_2036[0]};
static bool anim_bosspantherlaser_2036_initialized;
class BossPantherLaser_2036 : public Active
{
public:
    BossPantherLaser_2036(int x, int y) : Active(x, y, BossPantherLaser_2036_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherLaser", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosspantherlaser_2036;
        if (!anim_bosspantherlaser_2036_initialized) {
            anim_bosspantherlaser_2036_initialized = true;
            images_bosspantherlaser_2036_0_0[0] = get_internal_image(8938);
            images_bosspantherlaser_2036_0_0[1] = get_internal_image(8942);
            images_bosspantherlaser_2036_0_0[2] = get_internal_image(8918);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_bosspantherlaser_2036(int x, int y)
{
    return new (Active::pool.create()) BossPantherLaser_2036(x, y);
}
static Image* images_playerassistoffense_2037_0_0[4];
static Direction direction_playerassistoffense_2037_0_0 = {0, 50, 50, 0, -1, images_playerassistoffense_2037_0_0, 4};
static Image* images_playerassistoffense_2037_0_1[2];
static Direction direction_playerassistoffense_2037_0_1 = {1, 70, 70, 0, -1, images_playerassistoffense_2037_0_1, 2};
static Animation anim_playerassistoffense_2037_0 = {&direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_1, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0, &direction_playerassistoffense_2037_0_0};
static Image* images_playerassistoffense_2037_7_0[6];
static Direction direction_playerassistoffense_2037_7_0 = {0, 90, 90, 0, -1, images_playerassistoffense_2037_7_0, 6};
static Image* images_playerassistoffense_2037_7_1[9];
static Direction direction_playerassistoffense_2037_7_1 = {1, 50, 50, 1, -1, images_playerassistoffense_2037_7_1, 9};
static Animation anim_playerassistoffense_2037_7 = {&direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_1, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0, &direction_playerassistoffense_2037_7_0};
static Image* images_playerassistoffense_2037_8_0[9];
static Direction direction_playerassistoffense_2037_8_0 = {0, 50, 50, 8, 3, images_playerassistoffense_2037_8_0, 9};
static Image* images_playerassistoffense_2037_8_1[9];
static Direction direction_playerassistoffense_2037_8_1 = {1, 50, 50, 8, 3, images_playerassistoffense_2037_8_1, 9};
static Animation anim_playerassistoffense_2037_8 = {&direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_1, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0, &direction_playerassistoffense_2037_8_0};
static Image* images_playerassistoffense_2037_10_0[1];
static Direction direction_playerassistoffense_2037_10_0 = {0, 50, 50, 0, -1, images_playerassistoffense_2037_10_0, 1};
static Image* images_playerassistoffense_2037_10_1[1];
static Direction direction_playerassistoffense_2037_10_1 = {1, 0, 0, 0, -1, images_playerassistoffense_2037_10_1, 1};
static Animation anim_playerassistoffense_2037_10 = {&direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_1, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0, &direction_playerassistoffense_2037_10_0};
static Animation * anim_array_playerassistoffense_2037[11] = {&anim_playerassistoffense_2037_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistoffense_2037_7, &anim_playerassistoffense_2037_8, NULL, &anim_playerassistoffense_2037_10};
static Animations anim_playerassistoffense_2037 = {11, &anim_array_playerassistoffense_2037[0]};
static bool anim_playerassistoffense_2037_initialized;
class PlayerAssistOffense_2037 : public Active
{
public:
    PlayerAssistOffense_2037(int x, int y) : Active(x, y, PlayerAssistOffense_2037_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Offense", 21);
#endif
        this->animations = &anim_playerassistoffense_2037;
        if (!anim_playerassistoffense_2037_initialized) {
            anim_playerassistoffense_2037_initialized = true;
            images_playerassistoffense_2037_0_0[0] = get_internal_image(6365);
            images_playerassistoffense_2037_0_0[1] = get_internal_image(6364);
            images_playerassistoffense_2037_0_0[2] = get_internal_image(6363);
            images_playerassistoffense_2037_0_0[3] = get_internal_image(6366);
            images_playerassistoffense_2037_0_1[0] = get_internal_image(3516);
            images_playerassistoffense_2037_0_1[1] = get_internal_image(3517);
            images_playerassistoffense_2037_7_0[0] = get_internal_image(6147);
            images_playerassistoffense_2037_7_0[1] = get_internal_image(6145);
            images_playerassistoffense_2037_7_0[2] = get_internal_image(6152);
            images_playerassistoffense_2037_7_0[3] = get_internal_image(6149);
            images_playerassistoffense_2037_7_0[4] = get_internal_image(6151);
            images_playerassistoffense_2037_7_0[5] = get_internal_image(6150);
            images_playerassistoffense_2037_7_1[0] = get_internal_image(1196);
            images_playerassistoffense_2037_7_1[1] = get_internal_image(1203);
            images_playerassistoffense_2037_7_1[2] = get_internal_image(1204);
            images_playerassistoffense_2037_7_1[3] = get_internal_image(1205);
            images_playerassistoffense_2037_7_1[4] = get_internal_image(1206);
            images_playerassistoffense_2037_7_1[5] = get_internal_image(1207);
            images_playerassistoffense_2037_7_1[6] = get_internal_image(1293);
            images_playerassistoffense_2037_7_1[7] = get_internal_image(1453);
            images_playerassistoffense_2037_7_1[8] = get_internal_image(1720);
            images_playerassistoffense_2037_8_0[0] = get_internal_image(5641);
            images_playerassistoffense_2037_8_0[1] = get_internal_image(5640);
            images_playerassistoffense_2037_8_0[2] = get_internal_image(5644);
            images_playerassistoffense_2037_8_0[3] = get_internal_image(5639);
            images_playerassistoffense_2037_8_0[4] = get_internal_image(5642);
            images_playerassistoffense_2037_8_0[5] = get_internal_image(5639);
            images_playerassistoffense_2037_8_0[6] = get_internal_image(5643);
            images_playerassistoffense_2037_8_0[7] = get_internal_image(5639);
            images_playerassistoffense_2037_8_0[8] = get_internal_image(5640);
            images_playerassistoffense_2037_8_1[0] = get_internal_image(4276);
            images_playerassistoffense_2037_8_1[1] = get_internal_image(2974);
            images_playerassistoffense_2037_8_1[2] = get_internal_image(4277);
            images_playerassistoffense_2037_8_1[3] = get_internal_image(2967);
            images_playerassistoffense_2037_8_1[4] = get_internal_image(4278);
            images_playerassistoffense_2037_8_1[5] = get_internal_image(2967);
            images_playerassistoffense_2037_8_1[6] = get_internal_image(4279);
            images_playerassistoffense_2037_8_1[7] = get_internal_image(2967);
            images_playerassistoffense_2037_8_1[8] = get_internal_image(2983);
            images_playerassistoffense_2037_10_0[0] = get_internal_image(1854);
            images_playerassistoffense_2037_10_1[0] = get_internal_image(4779);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 5);
        alterables->values.set(8, 1200);
    }
};
FrameObject * create_playerassistoffense_2037(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistOffense_2037(x, y);
}
static Image* images_planeplatform_2038_0_0[1];
static Direction direction_planeplatform_2038_0_0 = {0, 50, 50, 0, 1, images_planeplatform_2038_0_0, 1};
static Animation anim_planeplatform_2038_0 = {&direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, NULL, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0, &direction_planeplatform_2038_0_0};
static Animation * anim_array_planeplatform_2038[1] = {&anim_planeplatform_2038_0};
static Animations anim_planeplatform_2038 = {1, &anim_array_planeplatform_2038[0]};
static bool anim_planeplatform_2038_initialized;
class PlanePlatform_2038 : public Active
{
public:
    PlanePlatform_2038(int x, int y) : Active(x, y, PlanePlatform_2038_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Plane_Platform", 14);
#endif
        set_visible(false);
        this->animations = &anim_planeplatform_2038;
        if (!anim_planeplatform_2038_initialized) {
            anim_planeplatform_2038_initialized = true;
            images_planeplatform_2038_0_0[0] = get_internal_image(3763);
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
FrameObject * create_planeplatform_2038(int x, int y)
{
    return new (Active::pool.create()) PlanePlatform_2038(x, y);
}
class LevelParallaxPiece0_2039 : public SystemBox
{
public:
    LevelParallaxPiece0_2039(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_2039_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(4792);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_2039(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_2039(x, y);
}
class LevelParallaxSBNight1_2040 : public SystemBox
{
public:
    LevelParallaxSBNight1_2040(int x, int y) : SystemBox(x, y, LevelParallaxSBNight1_2040_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_SBNight1", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(4791);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxsbnight1_2040(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxSBNight1_2040(x, y);
}
class LevelParallaxPiece1_2041 : public SystemBox
{
public:
    LevelParallaxPiece1_2041(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2041_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 72;
        type = PATTERN_IMAGE;
        image = get_internal_image(4800);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2041(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2041(x, y);
}
class LevelParallaxSBNight2_2042 : public SystemBox
{
public:
    LevelParallaxSBNight2_2042(int x, int y) : SystemBox(x, y, LevelParallaxSBNight2_2042_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_SBNight2", 23);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 72;
        type = PATTERN_IMAGE;
        image = get_internal_image(4793);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxsbnight2_2042(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxSBNight2_2042(x, y);
}
class LevelParallaxPiece3_2043 : public SystemBox
{
public:
    LevelParallaxPiece3_2043(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_2043_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 73;
        type = PATTERN_IMAGE;
        image = get_internal_image(4790);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_2043(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_2043(x, y);
}
class LevelParallaxPiece4_2044 : public SystemBox
{
public:
    LevelParallaxPiece4_2044(int x, int y) : SystemBox(x, y, LevelParallaxPiece4_2044_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 96;
        type = PATTERN_IMAGE;
        image = get_internal_image(4789);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4_2044(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4_2044(x, y);
}
class LevelParallaxPiece2_2045 : public SystemBox
{
public:
    LevelParallaxPiece2_2045(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2045_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(4785);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2045(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2045(x, y);
}
class LevelParallaxPiece5_2046 : public SystemBox
{
public:
    LevelParallaxPiece5_2046(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_2046_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 297;
        height = 192;
        type = PATTERN_IMAGE;
        image = get_internal_image(8442);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_2046(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_2046(x, y);
}
class LevelParallaxPiece6_2047 : public SystemBox
{
public:
    LevelParallaxPiece6_2047(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_2047_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 594;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(8437);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_2047(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_2047(x, y);
}
class LevelParallaxPiece7_2048 : public SystemBox
{
public:
    LevelParallaxPiece7_2048(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_2048_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 594;
        height = 256;
        type = PATTERN_IMAGE;
        image = get_internal_image(8441);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_2048(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_2048(x, y);
}
static Image* images_enemyfragbomb_2049_0_0[1];
static Direction direction_enemyfragbomb_2049_0_0 = {0, 25, 25, 0, -1, images_enemyfragbomb_2049_0_0, 1};
static Animation anim_enemyfragbomb_2049_0 = {&direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, NULL, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0, &direction_enemyfragbomb_2049_0_0};
static Image* images_enemyfragbomb_2049_5_0[1];
static Direction direction_enemyfragbomb_2049_5_0 = {0, 50, 50, 0, -1, images_enemyfragbomb_2049_5_0, 1};
static Animation anim_enemyfragbomb_2049_5 = {&direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, NULL, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0, &direction_enemyfragbomb_2049_5_0};
static Image* images_enemyfragbomb_2049_7_0[8];
static Direction direction_enemyfragbomb_2049_7_0 = {0, 100, 100, 0, 1, images_enemyfragbomb_2049_7_0, 8};
static Animation anim_enemyfragbomb_2049_7 = {&direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, NULL, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0, &direction_enemyfragbomb_2049_7_0};
static Animation * anim_array_enemyfragbomb_2049[8] = {&anim_enemyfragbomb_2049_0, NULL, NULL, NULL, NULL, &anim_enemyfragbomb_2049_5, NULL, &anim_enemyfragbomb_2049_7};
static Animations anim_enemyfragbomb_2049 = {8, &anim_array_enemyfragbomb_2049[0]};
static bool anim_enemyfragbomb_2049_initialized;
class EnemyFragBomb_2049 : public Active
{
public:
    EnemyFragBomb_2049(int x, int y) : Active(x, y, EnemyFragBomb_2049_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_FragBomb", 14);
#endif
        this->animations = &anim_enemyfragbomb_2049;
        if (!anim_enemyfragbomb_2049_initialized) {
            anim_enemyfragbomb_2049_initialized = true;
            images_enemyfragbomb_2049_0_0[0] = get_internal_image(145);
            images_enemyfragbomb_2049_5_0[0] = get_internal_image(184);
            images_enemyfragbomb_2049_7_0[0] = get_internal_image(377);
            images_enemyfragbomb_2049_7_0[1] = get_internal_image(377);
            images_enemyfragbomb_2049_7_0[2] = get_internal_image(527);
            images_enemyfragbomb_2049_7_0[3] = get_internal_image(542);
            images_enemyfragbomb_2049_7_0[4] = get_internal_image(543);
            images_enemyfragbomb_2049_7_0[5] = get_internal_image(547);
            images_enemyfragbomb_2049_7_0[6] = get_internal_image(548);
            images_enemyfragbomb_2049_7_0[7] = get_internal_image(549);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(4, 0, 1, 2, 3));
        create_alterables();
        alterables->values.set(2, 1);
        alterables->values.set(3, 1);
    }
};
FrameObject * create_enemyfragbomb_2049(int x, int y)
{
    return new (Active::pool.create()) EnemyFragBomb_2049(x, y);
}
static Image* images_gimmickcannonbullet_2050_0_0[1];
static Direction direction_gimmickcannonbullet_2050_0_0 = {0, 50, 50, 0, 1, images_gimmickcannonbullet_2050_0_0, 1};
static Animation anim_gimmickcannonbullet_2050_0 = {&direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, NULL, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0, &direction_gimmickcannonbullet_2050_0_0};
static Animation * anim_array_gimmickcannonbullet_2050[1] = {&anim_gimmickcannonbullet_2050_0};
static Animations anim_gimmickcannonbullet_2050 = {1, &anim_array_gimmickcannonbullet_2050[0]};
static bool anim_gimmickcannonbullet_2050_initialized;
class GimmickCannonBullet_2050 : public Active
{
public:
    GimmickCannonBullet_2050(int x, int y) : Active(x, y, GimmickCannonBullet_2050_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CannonBullet", 20);
#endif
        this->animations = &anim_gimmickcannonbullet_2050;
        if (!anim_gimmickcannonbullet_2050_initialized) {
            anim_gimmickcannonbullet_2050_initialized = true;
            images_gimmickcannonbullet_2050_0_0[0] = get_internal_image(11983);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 12);
    }
};
FrameObject * create_gimmickcannonbullet_2050(int x, int y)
{
    return new (Active::pool.create()) GimmickCannonBullet_2050(x, y);
}
static Image* images_shipbullet_2051_0_0[2];
static Direction direction_shipbullet_2051_0_0 = {0, 50, 50, 1, -1, images_shipbullet_2051_0_0, 2};
static Image* images_shipbullet_2051_0_1[2];
static Direction direction_shipbullet_2051_0_1 = {1, 50, 50, 1, -1, images_shipbullet_2051_0_1, 2};
static Animation anim_shipbullet_2051_0 = {&direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_1, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0, &direction_shipbullet_2051_0_0};
static Animation * anim_array_shipbullet_2051[1] = {&anim_shipbullet_2051_0};
static Animations anim_shipbullet_2051 = {1, &anim_array_shipbullet_2051[0]};
static bool anim_shipbullet_2051_initialized;
class ShipBullet_2051 : public Active
{
public:
    ShipBullet_2051(int x, int y) : Active(x, y, ShipBullet_2051_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ship_bullet", 11);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_shipbullet_2051;
        if (!anim_shipbullet_2051_initialized) {
            anim_shipbullet_2051_initialized = true;
            images_shipbullet_2051_0_0[0] = get_internal_image(9408);
            images_shipbullet_2051_0_0[1] = get_internal_image(913);
            images_shipbullet_2051_0_1[0] = get_internal_image(6346);
            images_shipbullet_2051_0_1[1] = get_internal_image(5233);
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
FrameObject * create_shipbullet_2051(int x, int y)
{
    return new (Active::pool.create()) ShipBullet_2051(x, y);
}
static Image* images_effectschargebeam_2052_0_0[1];
static Direction direction_effectschargebeam_2052_0_0 = {0, 50, 50, 0, 1, images_effectschargebeam_2052_0_0, 1};
static Animation anim_effectschargebeam_2052_0 = {&direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, NULL, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0, &direction_effectschargebeam_2052_0_0};
static Animation * anim_array_effectschargebeam_2052[1] = {&anim_effectschargebeam_2052_0};
static Animations anim_effectschargebeam_2052 = {1, &anim_array_effectschargebeam_2052[0]};
static bool anim_effectschargebeam_2052_initialized;
class EffectsChargeBeam_2052 : public Active
{
public:
    EffectsChargeBeam_2052(int x, int y) : Active(x, y, EffectsChargeBeam_2052_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_ChargeBeam", 18);
#endif
        this->animations = &anim_effectschargebeam_2052;
        if (!anim_effectschargebeam_2052_initialized) {
            anim_effectschargebeam_2052_initialized = true;
            images_effectschargebeam_2052_0_0[0] = get_internal_image(6123);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(0, 26);
    }
};
FrameObject * create_effectschargebeam_2052(int x, int y)
{
    return new (Active::pool.create()) EffectsChargeBeam_2052(x, y);
}
static Image* images_bosslightning_2053_0_0[1];
static Direction direction_bosslightning_2053_0_0 = {0, 50, 50, 0, 1, images_bosslightning_2053_0_0, 1};
static Animation anim_bosslightning_2053_0 = {&direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, NULL, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0, &direction_bosslightning_2053_0_0};
static Animation * anim_array_bosslightning_2053[1] = {&anim_bosslightning_2053_0};
static Animations anim_bosslightning_2053 = {1, &anim_array_bosslightning_2053[0]};
static bool anim_bosslightning_2053_initialized;
class BossLightning_2053 : public Active
{
public:
    BossLightning_2053(int x, int y) : Active(x, y, BossLightning_2053_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Lightning", 14);
#endif
        this->animations = &anim_bosslightning_2053;
        if (!anim_bosslightning_2053_initialized) {
            anim_bosslightning_2053_initialized = true;
            images_bosslightning_2053_0_0[0] = get_internal_image(6038);
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
FrameObject * create_bosslightning_2053(int x, int y)
{
    return new (Active::pool.create()) BossLightning_2053(x, y);
}
static Image* images_bossbolt_2054_0_0[8];
static Direction direction_bossbolt_2054_0_0 = {0, 100, 100, 0, -1, images_bossbolt_2054_0_0, 8};
static Animation anim_bossbolt_2054_0 = {&direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, NULL, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0, &direction_bossbolt_2054_0_0};
static Animation * anim_array_bossbolt_2054[1] = {&anim_bossbolt_2054_0};
static Animations anim_bossbolt_2054 = {1, &anim_array_bossbolt_2054[0]};
static bool anim_bossbolt_2054_initialized;
class BossBolt_2054 : public Active
{
public:
    BossBolt_2054(int x, int y) : Active(x, y, BossBolt_2054_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Bolt", 9);
#endif
        this->animations = &anim_bossbolt_2054;
        if (!anim_bossbolt_2054_initialized) {
            anim_bossbolt_2054_initialized = true;
            images_bossbolt_2054_0_0[0] = get_internal_image(1696);
            images_bossbolt_2054_0_0[1] = get_internal_image(1780);
            images_bossbolt_2054_0_0[2] = get_internal_image(1764);
            images_bossbolt_2054_0_0[3] = get_internal_image(1790);
            images_bossbolt_2054_0_0[4] = get_internal_image(1767);
            images_bossbolt_2054_0_0[5] = get_internal_image(1803);
            images_bossbolt_2054_0_0[6] = get_internal_image(1640);
            images_bossbolt_2054_0_0[7] = get_internal_image(1804);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(0);
        ((BallMovement*)movements[0])->set_deceleration(0);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
        alterables->values.set(0, 20);
    }
};
FrameObject * create_bossbolt_2054(int x, int y)
{
    return new (Active::pool.create()) BossBolt_2054(x, y);
}
static Image* images_effectsgust_2055_4_0[7];
static Direction direction_effectsgust_2055_4_0 = {0, 100, 100, 0, 1, images_effectsgust_2055_4_0, 7};
static Image* images_effectsgust_2055_4_8[13];
static Direction direction_effectsgust_2055_4_8 = {8, 100, 100, 0, 1, images_effectsgust_2055_4_8, 13};
static Animation anim_effectsgust_2055_4 = {&direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, NULL, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, &direction_effectsgust_2055_4_8, NULL, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0, &direction_effectsgust_2055_4_0};
static Animation * anim_array_effectsgust_2055[5] = {NULL, NULL, NULL, NULL, &anim_effectsgust_2055_4};
static Animations anim_effectsgust_2055 = {5, &anim_array_effectsgust_2055[0]};
static bool anim_effectsgust_2055_initialized;
class EffectsGust_2055 : public Active
{
public:
    EffectsGust_2055(int x, int y) : Active(x, y, EffectsGust_2055_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Gust", 12);
#endif
        this->animations = &anim_effectsgust_2055;
        if (!anim_effectsgust_2055_initialized) {
            anim_effectsgust_2055_initialized = true;
            images_effectsgust_2055_4_0[0] = get_internal_image(6083);
            images_effectsgust_2055_4_0[1] = get_internal_image(6084);
            images_effectsgust_2055_4_0[2] = get_internal_image(6085);
            images_effectsgust_2055_4_0[3] = get_internal_image(6086);
            images_effectsgust_2055_4_0[4] = get_internal_image(6087);
            images_effectsgust_2055_4_0[5] = get_internal_image(6088);
            images_effectsgust_2055_4_0[6] = get_internal_image(6083);
            images_effectsgust_2055_4_8[0] = get_internal_image(6083);
            images_effectsgust_2055_4_8[1] = get_internal_image(6089);
            images_effectsgust_2055_4_8[2] = get_internal_image(6084);
            images_effectsgust_2055_4_8[3] = get_internal_image(6090);
            images_effectsgust_2055_4_8[4] = get_internal_image(6085);
            images_effectsgust_2055_4_8[5] = get_internal_image(6091);
            images_effectsgust_2055_4_8[6] = get_internal_image(6086);
            images_effectsgust_2055_4_8[7] = get_internal_image(6092);
            images_effectsgust_2055_4_8[8] = get_internal_image(6087);
            images_effectsgust_2055_4_8[9] = get_internal_image(6093);
            images_effectsgust_2055_4_8[10] = get_internal_image(6088);
            images_effectsgust_2055_4_8[11] = get_internal_image(6094);
            images_effectsgust_2055_4_8[12] = get_internal_image(6083);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_effectsgust_2055(int x, int y)
{
    return new (Active::pool.create()) EffectsGust_2055(x, y);
}
static Image* images_effectsgust2_2056_0_0[1];
static Direction direction_effectsgust2_2056_0_0 = {0, 100, 100, 0, 1, images_effectsgust2_2056_0_0, 1};
static Animation anim_effectsgust2_2056_0 = {&direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, NULL, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0, &direction_effectsgust2_2056_0_0};
static Animation * anim_array_effectsgust2_2056[1] = {&anim_effectsgust2_2056_0};
static Animations anim_effectsgust2_2056 = {1, &anim_array_effectsgust2_2056[0]};
static bool anim_effectsgust2_2056_initialized;
class EffectsGust2_2056 : public Active
{
public:
    EffectsGust2_2056(int x, int y) : Active(x, y, EffectsGust2_2056_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Gust 2", 14);
#endif
        this->animations = &anim_effectsgust2_2056;
        if (!anim_effectsgust2_2056_initialized) {
            anim_effectsgust2_2056_initialized = true;
            images_effectsgust2_2056_0_0[0] = get_internal_image(6097);
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
FrameObject * create_effectsgust2_2056(int x, int y)
{
    return new (Active::pool.create()) EffectsGust2_2056(x, y);
}
static Image* images_bosstailtracker_2057_0_0[1];
static Direction direction_bosstailtracker_2057_0_0 = {0, 50, 50, 0, 1, images_bosstailtracker_2057_0_0, 1};
static Animation anim_bosstailtracker_2057_0 = {&direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, NULL, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0, &direction_bosstailtracker_2057_0_0};
static Animation * anim_array_bosstailtracker_2057[1] = {&anim_bosstailtracker_2057_0};
static Animations anim_bosstailtracker_2057 = {1, &anim_array_bosstailtracker_2057[0]};
static bool anim_bosstailtracker_2057_initialized;
class BossTailTracker_2057 : public Active
{
public:
    BossTailTracker_2057(int x, int y) : Active(x, y, BossTailTracker_2057_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_TailTracker", 16);
#endif
        set_visible(false);
        this->animations = &anim_bosstailtracker_2057;
        if (!anim_bosstailtracker_2057_initialized) {
            anim_bosstailtracker_2057_initialized = true;
            images_bosstailtracker_2057_0_0[0] = get_internal_image(6082);
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
FrameObject * create_bosstailtracker_2057(int x, int y)
{
    return new (Active::pool.create()) BossTailTracker_2057(x, y);
}
static Image* images_bosslightning2_2058_0_0[4];
static Direction direction_bosslightning2_2058_0_0 = {0, 50, 50, 0, -1, images_bosslightning2_2058_0_0, 4};
static Image* images_bosslightning2_2058_0_1[6];
static Direction direction_bosslightning2_2058_0_1 = {1, 90, 90, 0, -1, images_bosslightning2_2058_0_1, 6};
static Animation anim_bosslightning2_2058_0 = {&direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_1, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0, &direction_bosslightning2_2058_0_0};
static Animation * anim_array_bosslightning2_2058[1] = {&anim_bosslightning2_2058_0};
static Animations anim_bosslightning2_2058 = {1, &anim_array_bosslightning2_2058[0]};
static bool anim_bosslightning2_2058_initialized;
class BossLightning2_2058 : public Active
{
public:
    BossLightning2_2058(int x, int y) : Active(x, y, BossLightning2_2058_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Lightning 2", 16);
#endif
        this->animations = &anim_bosslightning2_2058;
        if (!anim_bosslightning2_2058_initialized) {
            anim_bosslightning2_2058_initialized = true;
            images_bosslightning2_2058_0_0[0] = get_internal_image(3128);
            images_bosslightning2_2058_0_0[1] = get_internal_image(5689);
            images_bosslightning2_2058_0_0[2] = get_internal_image(5946);
            images_bosslightning2_2058_0_0[3] = get_internal_image(5689);
            images_bosslightning2_2058_0_1[0] = get_internal_image(5947);
            images_bosslightning2_2058_0_1[1] = get_internal_image(6400);
            images_bosslightning2_2058_0_1[2] = get_internal_image(6744);
            images_bosslightning2_2058_0_1[3] = get_internal_image(6745);
            images_bosslightning2_2058_0_1[4] = get_internal_image(6749);
            images_bosslightning2_2058_0_1[5] = get_internal_image(6750);
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
FrameObject * create_bosslightning2_2058(int x, int y)
{
    return new (Active::pool.create()) BossLightning2_2058(x, y);
}
static Image* images_levelairship1_2059_0_0[2];
static Direction direction_levelairship1_2059_0_0 = {0, 60, 60, 0, -1, images_levelairship1_2059_0_0, 2};
static Image* images_levelairship1_2059_0_1[2];
static Direction direction_levelairship1_2059_0_1 = {1, 60, 60, 0, -1, images_levelairship1_2059_0_1, 2};
static Image* images_levelairship1_2059_0_2[2];
static Direction direction_levelairship1_2059_0_2 = {2, 60, 60, 0, -1, images_levelairship1_2059_0_2, 2};
static Image* images_levelairship1_2059_0_16[2];
static Direction direction_levelairship1_2059_0_16 = {16, 60, 60, 0, -1, images_levelairship1_2059_0_16, 2};
static Animation anim_levelairship1_2059_0 = {&direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_1, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, &direction_levelairship1_2059_0_2, NULL, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, &direction_levelairship1_2059_0_16, NULL, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0, &direction_levelairship1_2059_0_0};
static Animation * anim_array_levelairship1_2059[1] = {&anim_levelairship1_2059_0};
static Animations anim_levelairship1_2059 = {1, &anim_array_levelairship1_2059[0]};
static bool anim_levelairship1_2059_initialized;
class LevelAirship1_2059 : public Active
{
public:
    LevelAirship1_2059(int x, int y) : Active(x, y, LevelAirship1_2059_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Airship 1", 15);
#endif
        this->animations = &anim_levelairship1_2059;
        if (!anim_levelairship1_2059_initialized) {
            anim_levelairship1_2059_initialized = true;
            images_levelairship1_2059_0_0[0] = get_internal_image(5919);
            images_levelairship1_2059_0_0[1] = get_internal_image(5930);
            images_levelairship1_2059_0_1[0] = get_internal_image(5926);
            images_levelairship1_2059_0_1[1] = get_internal_image(5924);
            images_levelairship1_2059_0_2[0] = get_internal_image(5931);
            images_levelairship1_2059_0_2[1] = get_internal_image(5934);
            images_levelairship1_2059_0_16[0] = get_internal_image(2032);
            images_levelairship1_2059_0_16[1] = get_internal_image(5033);
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
FrameObject * create_levelairship1_2059(int x, int y)
{
    return new (Active::pool.create()) LevelAirship1_2059(x, y);
}
class QuickBackdrop6_2060 : public QuickBackdrop
{
public:
    QuickBackdrop6_2060(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 6", 16);
#endif
        flags |= BACKGROUND;
        width = 1248;
        height = 32;
        image = get_internal_image(2746);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop6_2060(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop6_2060(x, y);
}
class SBFlagpole_2061 : public Backdrop
{
public:
    SBFlagpole_2061(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Flagpole", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5967);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbflagpole_2061(int x, int y)
{
    return new (Backdrop::pool.create()) SBFlagpole_2061(x, y);
}
class ShipMast_2062 : public QuickBackdrop
{
public:
    ShipMast_2062(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship mast", 9);
#endif
        flags |= BACKGROUND;
        width = 64;
        height = 384;
        image = get_internal_image(11948);
        outline = 0;
    }
};
FrameObject * create_shipmast_2062(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ShipMast_2062(x, y);
}
class ShipMast2_2063 : public Backdrop
{
public:
    ShipMast2_2063(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship_mast 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11980);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shipmast2_2063(int x, int y)
{
    return new (Backdrop::pool.create()) ShipMast2_2063(x, y);
}
class Ship19_2064 : public Backdrop
{
public:
    Ship19_2064(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 19", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4766);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship19_2064(int x, int y)
{
    return new (Backdrop::pool.create()) Ship19_2064(x, y);
}
class Ship18_2065 : public Backdrop
{
public:
    Ship18_2065(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 18", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5925);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship18_2065(int x, int y)
{
    return new (Backdrop::pool.create()) Ship18_2065(x, y);
}
class Ship17_2066 : public Backdrop
{
public:
    Ship17_2066(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 17", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5939);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship17_2066(int x, int y)
{
    return new (Backdrop::pool.create()) Ship17_2066(x, y);
}
static Image* images_switchplatformmask_2067_0_0[1];
static Direction direction_switchplatformmask_2067_0_0 = {0, 50, 50, 0, 1, images_switchplatformmask_2067_0_0, 1};
static Animation anim_switchplatformmask_2067_0 = {&direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, NULL, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0, &direction_switchplatformmask_2067_0_0};
static Animation * anim_array_switchplatformmask_2067[1] = {&anim_switchplatformmask_2067_0};
static Animations anim_switchplatformmask_2067 = {1, &anim_array_switchplatformmask_2067[0]};
static bool anim_switchplatformmask_2067_initialized;
class SwitchPlatformMask_2067 : public Active
{
public:
    SwitchPlatformMask_2067(int x, int y) : Active(x, y, SwitchPlatformMask_2067_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_Platform_Mask", 20);
#endif
        this->animations = &anim_switchplatformmask_2067;
        if (!anim_switchplatformmask_2067_initialized) {
            anim_switchplatformmask_2067_initialized = true;
            images_switchplatformmask_2067_0_0[0] = get_internal_image(4489);
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
FrameObject * create_switchplatformmask_2067(int x, int y)
{
    return new (Active::pool.create()) SwitchPlatformMask_2067(x, y);
}
static Image* images_levelzaoflag_2068_0_0[10];
static Direction direction_levelzaoflag_2068_0_0 = {0, 50, 50, 0, -1, images_levelzaoflag_2068_0_0, 10};
static Image* images_levelzaoflag_2068_0_8[1];
static Direction direction_levelzaoflag_2068_0_8 = {8, 50, 50, 0, 1, images_levelzaoflag_2068_0_8, 1};
static Animation anim_levelzaoflag_2068_0 = {&direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, NULL, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, &direction_levelzaoflag_2068_0_8, NULL, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0, &direction_levelzaoflag_2068_0_0};
static Animation * anim_array_levelzaoflag_2068[1] = {&anim_levelzaoflag_2068_0};
static Animations anim_levelzaoflag_2068 = {1, &anim_array_levelzaoflag_2068[0]};
static bool anim_levelzaoflag_2068_initialized;
class LevelZaoFlag_2068 : public Active
{
public:
    LevelZaoFlag_2068(int x, int y) : Active(x, y, LevelZaoFlag_2068_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ZaoFlag", 13);
#endif
        this->animations = &anim_levelzaoflag_2068;
        if (!anim_levelzaoflag_2068_initialized) {
            anim_levelzaoflag_2068_initialized = true;
            images_levelzaoflag_2068_0_0[0] = get_internal_image(12243);
            images_levelzaoflag_2068_0_0[1] = get_internal_image(12244);
            images_levelzaoflag_2068_0_0[2] = get_internal_image(12245);
            images_levelzaoflag_2068_0_0[3] = get_internal_image(12247);
            images_levelzaoflag_2068_0_0[4] = get_internal_image(12246);
            images_levelzaoflag_2068_0_0[5] = get_internal_image(12248);
            images_levelzaoflag_2068_0_0[6] = get_internal_image(12249);
            images_levelzaoflag_2068_0_0[7] = get_internal_image(12250);
            images_levelzaoflag_2068_0_0[8] = get_internal_image(12251);
            images_levelzaoflag_2068_0_0[9] = get_internal_image(12252);
            images_levelzaoflag_2068_0_8[0] = get_internal_image(12241);
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
FrameObject * create_levelzaoflag_2068(int x, int y)
{
    return new (Active::pool.create()) LevelZaoFlag_2068(x, y);
}
static Image* images_leveldarksky_2069_0_0[1];
static Direction direction_leveldarksky_2069_0_0 = {0, 50, 50, 0, 1, images_leveldarksky_2069_0_0, 1};
static Image* images_leveldarksky_2069_0_1[1];
static Direction direction_leveldarksky_2069_0_1 = {1, 50, 50, 0, 1, images_leveldarksky_2069_0_1, 1};
static Animation anim_leveldarksky_2069_0 = {&direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_1, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0, &direction_leveldarksky_2069_0_0};
static Animation * anim_array_leveldarksky_2069[1] = {&anim_leveldarksky_2069_0};
static Animations anim_leveldarksky_2069 = {1, &anim_array_leveldarksky_2069[0]};
static bool anim_leveldarksky_2069_initialized;
class LevelDarkSky_2069 : public Active
{
public:
    LevelDarkSky_2069(int x, int y) : Active(x, y, LevelDarkSky_2069_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_DarkSky", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_leveldarksky_2069;
        if (!anim_leveldarksky_2069_initialized) {
            anim_leveldarksky_2069_initialized = true;
            images_leveldarksky_2069_0_0[0] = get_internal_image(6043);
            images_leveldarksky_2069_0_1[0] = get_internal_image(649);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_leveldarksky_2069(int x, int y)
{
    return new (Active::pool.create()) LevelDarkSky_2069(x, y);
}
class BlimpCable1_2070 : public Backdrop
{
public:
    BlimpCable1_2070(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("blimp cable 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2136);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_blimpcable1_2070(int x, int y)
{
    return new (Backdrop::pool.create()) BlimpCable1_2070(x, y);
}
class Ship24_2071 : public Backdrop
{
public:
    Ship24_2071(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 24", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2773);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship24_2071(int x, int y)
{
    return new (Backdrop::pool.create()) Ship24_2071(x, y);
}
class Ship30_2072 : public Backdrop
{
public:
    Ship30_2072(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 30", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5894);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship30_2072(int x, int y)
{
    return new (Backdrop::pool.create()) Ship30_2072(x, y);
}
class Ship31_2073 : public Backdrop
{
public:
    Ship31_2073(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 31", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5881);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship31_2073(int x, int y)
{
    return new (Backdrop::pool.create()) Ship31_2073(x, y);
}
class ShipBottomsail_2074 : public QuickBackdrop
{
public:
    ShipBottomsail_2074(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship bottomsail", 15);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 40;
        image = get_internal_image(12227);
        outline = 0;
    }
};
FrameObject * create_shipbottomsail_2074(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ShipBottomsail_2074(x, y);
}
class Ship28_2075 : public Backdrop
{
public:
    Ship28_2075(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 28", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12226);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship28_2075(int x, int y)
{
    return new (Backdrop::pool.create()) Ship28_2075(x, y);
}
class Ship13_2076 : public Backdrop
{
public:
    Ship13_2076(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 13", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5937);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship13_2076(int x, int y)
{
    return new (Backdrop::pool.create()) Ship13_2076(x, y);
}
class Ship21_2077 : public Backdrop
{
public:
    Ship21_2077(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 21", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5970);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship21_2077(int x, int y)
{
    return new (Backdrop::pool.create()) Ship21_2077(x, y);
}
class Ship20_2078 : public Backdrop
{
public:
    Ship20_2078(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 20", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5893);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship20_2078(int x, int y)
{
    return new (Backdrop::pool.create()) Ship20_2078(x, y);
}
class Ship23_2079 : public Backdrop
{
public:
    Ship23_2079(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 23", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5914);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship23_2079(int x, int y)
{
    return new (Backdrop::pool.create()) Ship23_2079(x, y);
}
class ShipPlatformLong_2080 : public QuickBackdrop
{
public:
    ShipPlatformLong_2080(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship platform long", 18);
#endif
        flags |= BACKGROUND;
        width = 1152;
        height = 184;
        image = get_internal_image(5433);
        outline = 0;
    }
};
FrameObject * create_shipplatformlong_2080(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ShipPlatformLong_2080(x, y);
}
class Ship16_2081 : public Backdrop
{
public:
    Ship16_2081(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 16", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1452);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship16_2081(int x, int y)
{
    return new (Backdrop::pool.create()) Ship16_2081(x, y);
}
class Ship26_2082 : public Backdrop
{
public:
    Ship26_2082(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 26", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12223);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship26_2082(int x, int y)
{
    return new (Backdrop::pool.create()) Ship26_2082(x, y);
}
class Ship27_2083 : public Backdrop
{
public:
    Ship27_2083(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 27", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12225);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship27_2083(int x, int y)
{
    return new (Backdrop::pool.create()) Ship27_2083(x, y);
}
class Ship29_2084 : public Backdrop
{
public:
    Ship29_2084(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 29", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12229);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship29_2084(int x, int y)
{
    return new (Backdrop::pool.create()) Ship29_2084(x, y);
}
class ShipThrusterFront_2085 : public Backdrop
{
public:
    ShipThrusterFront_2085(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship thruster front", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12221);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shipthrusterfront_2085(int x, int y)
{
    return new (Backdrop::pool.create()) ShipThrusterFront_2085(x, y);
}
class ShipThrusterEnd_2086 : public Backdrop
{
public:
    ShipThrusterEnd_2086(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship thruster end", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12220);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shipthrusterend_2086(int x, int y)
{
    return new (Backdrop::pool.create()) ShipThrusterEnd_2086(x, y);
}
class Ship22_2087 : public Backdrop
{
public:
    Ship22_2087(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 22", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5933);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship22_2087(int x, int y)
{
    return new (Backdrop::pool.create()) Ship22_2087(x, y);
}
class ShipThrusterMid_2088 : public QuickBackdrop
{
public:
    ShipThrusterMid_2088(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship thruster  mid", 18);
#endif
        flags |= BACKGROUND;
        width = 288;
        height = 96;
        image = get_internal_image(12219);
        outline = 0;
    }
};
FrameObject * create_shipthrustermid_2088(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ShipThrusterMid_2088(x, y);
}
class ShipBottomsailShadow_2089 : public QuickBackdrop
{
public:
    ShipBottomsailShadow_2089(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Ship bottomsail shadow", 22);
#endif
        flags |= BACKGROUND;
        width = 768;
        height = 40;
        image = get_internal_image(12228);
        outline = 0;
    }
};
FrameObject * create_shipbottomsailshadow_2089(int x, int y)
{
    return new (QuickBackdrop::pool.create()) ShipBottomsailShadow_2089(x, y);
}
class Ship25_2090 : public Backdrop
{
public:
    Ship25_2090(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 25", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2756);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship25_2090(int x, int y)
{
    return new (Backdrop::pool.create()) Ship25_2090(x, y);
}
class SBSignDown_2091 : public Backdrop
{
public:
    SBSignDown_2091(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_SignDown", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4503);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbsigndown_2091(int x, int y)
{
    return new (Backdrop::pool.create()) SBSignDown_2091(x, y);
}
class SBMetalShipPanel_2092 : public Backdrop
{
public:
    SBMetalShipPanel_2092(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_MetalShipPanel", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5921);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbmetalshippanel_2092(int x, int y)
{
    return new (Backdrop::pool.create()) SBMetalShipPanel_2092(x, y);
}
static Image* images_shipplatform1_2093_0_0[1];
static Direction direction_shipplatform1_2093_0_0 = {0, 50, 50, 0, 1, images_shipplatform1_2093_0_0, 1};
static Animation anim_shipplatform1_2093_0 = {&direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, NULL, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0, &direction_shipplatform1_2093_0_0};
static Animation * anim_array_shipplatform1_2093[1] = {&anim_shipplatform1_2093_0};
static Animations anim_shipplatform1_2093 = {1, &anim_array_shipplatform1_2093[0]};
static bool anim_shipplatform1_2093_initialized;
class ShipPlatform1_2093 : public Active
{
public:
    ShipPlatform1_2093(int x, int y) : Active(x, y, ShipPlatform1_2093_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Ship_Platform 1", 15);
#endif
        set_visible(false);
        this->animations = &anim_shipplatform1_2093;
        if (!anim_shipplatform1_2093_initialized) {
            anim_shipplatform1_2093_initialized = true;
            images_shipplatform1_2093_0_0[0] = get_internal_image(4767);
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
FrameObject * create_shipplatform1_2093(int x, int y)
{
    return new (Active::pool.create()) ShipPlatform1_2093(x, y);
}
static Image* images_shipplatform2_2094_0_0[1];
static Direction direction_shipplatform2_2094_0_0 = {0, 50, 50, 0, 1, images_shipplatform2_2094_0_0, 1};
static Animation anim_shipplatform2_2094_0 = {&direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, NULL, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0, &direction_shipplatform2_2094_0_0};
static Animation * anim_array_shipplatform2_2094[1] = {&anim_shipplatform2_2094_0};
static Animations anim_shipplatform2_2094 = {1, &anim_array_shipplatform2_2094[0]};
static bool anim_shipplatform2_2094_initialized;
class ShipPlatform2_2094 : public Active
{
public:
    ShipPlatform2_2094(int x, int y) : Active(x, y, ShipPlatform2_2094_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Ship_Platform 2", 15);
#endif
        set_visible(false);
        this->animations = &anim_shipplatform2_2094;
        if (!anim_shipplatform2_2094_initialized) {
            anim_shipplatform2_2094_initialized = true;
            images_shipplatform2_2094_0_0[0] = get_internal_image(9010);
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
FrameObject * create_shipplatform2_2094(int x, int y)
{
    return new (Active::pool.create()) ShipPlatform2_2094(x, y);
}
static Image* images_shipplatform3_2095_0_0[1];
static Direction direction_shipplatform3_2095_0_0 = {0, 50, 50, 0, 1, images_shipplatform3_2095_0_0, 1};
static Animation anim_shipplatform3_2095_0 = {&direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, NULL, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0, &direction_shipplatform3_2095_0_0};
static Animation * anim_array_shipplatform3_2095[1] = {&anim_shipplatform3_2095_0};
static Animations anim_shipplatform3_2095 = {1, &anim_array_shipplatform3_2095[0]};
static bool anim_shipplatform3_2095_initialized;
class ShipPlatform3_2095 : public Active
{
public:
    ShipPlatform3_2095(int x, int y) : Active(x, y, ShipPlatform3_2095_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Ship_Platform 3", 15);
#endif
        set_visible(false);
        this->animations = &anim_shipplatform3_2095;
        if (!anim_shipplatform3_2095_initialized) {
            anim_shipplatform3_2095_initialized = true;
            images_shipplatform3_2095_0_0[0] = get_internal_image(9020);
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
FrameObject * create_shipplatform3_2095(int x, int y)
{
    return new (Active::pool.create()) ShipPlatform3_2095(x, y);
}
static Image* images_levelsbplatform1_2096_0_0[1];
static Direction direction_levelsbplatform1_2096_0_0 = {0, 100, 100, 0, 1, images_levelsbplatform1_2096_0_0, 1};
static Animation anim_levelsbplatform1_2096_0 = {&direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, NULL, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0, &direction_levelsbplatform1_2096_0_0};
static Animation * anim_array_levelsbplatform1_2096[1] = {&anim_levelsbplatform1_2096_0};
static Animations anim_levelsbplatform1_2096 = {1, &anim_array_levelsbplatform1_2096[0]};
static bool anim_levelsbplatform1_2096_initialized;
class LevelSBPlatform1_2096 : public Active
{
public:
    LevelSBPlatform1_2096(int x, int y) : Active(x, y, LevelSBPlatform1_2096_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_SBPlatform1", 17);
#endif
        this->animations = &anim_levelsbplatform1_2096;
        if (!anim_levelsbplatform1_2096_initialized) {
            anim_levelsbplatform1_2096_initialized = true;
            images_levelsbplatform1_2096_0_0[0] = get_internal_image(133);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
        alterables->values.set(1, 1);
        alterables->values.set(2, 40);
        alterables->values.set(5, 2);
        alterables->values.set(6, 10);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelsbplatform1_2096(int x, int y)
{
    return new (Active::pool.create()) LevelSBPlatform1_2096(x, y);
}
static Image* images_levelsbplatformflame1_2097_0_0[3];
static Direction direction_levelsbplatformflame1_2097_0_0 = {0, 50, 50, 0, -1, images_levelsbplatformflame1_2097_0_0, 3};
static Animation anim_levelsbplatformflame1_2097_0 = {&direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, NULL, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0, &direction_levelsbplatformflame1_2097_0_0};
static Animation * anim_array_levelsbplatformflame1_2097[1] = {&anim_levelsbplatformflame1_2097_0};
static Animations anim_levelsbplatformflame1_2097 = {1, &anim_array_levelsbplatformflame1_2097[0]};
static bool anim_levelsbplatformflame1_2097_initialized;
class LevelSBPlatformFlame1_2097 : public Active
{
public:
    LevelSBPlatformFlame1_2097(int x, int y) : Active(x, y, LevelSBPlatformFlame1_2097_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_SBPlatformFlame1", 22);
#endif
        this->animations = &anim_levelsbplatformflame1_2097;
        if (!anim_levelsbplatformflame1_2097_initialized) {
            anim_levelsbplatformflame1_2097_initialized = true;
            images_levelsbplatformflame1_2097_0_0[0] = get_internal_image(9250);
            images_levelsbplatformflame1_2097_0_0[1] = get_internal_image(9251);
            images_levelsbplatformflame1_2097_0_0[2] = get_internal_image(9252);
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
FrameObject * create_levelsbplatformflame1_2097(int x, int y)
{
    return new (Active::pool.create()) LevelSBPlatformFlame1_2097(x, y);
}
static Image* images_enemybullet_2098_0_0[2];
static Direction direction_enemybullet_2098_0_0 = {0, 25, 25, 0, -1, images_enemybullet_2098_0_0, 2};
static Animation anim_enemybullet_2098_0 = {&direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, NULL, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0, &direction_enemybullet_2098_0_0};
static Animation * anim_array_enemybullet_2098[1] = {&anim_enemybullet_2098_0};
static Animations anim_enemybullet_2098 = {1, &anim_array_enemybullet_2098[0]};
static bool anim_enemybullet_2098_initialized;
class EnemyBullet_2098 : public Active
{
public:
    EnemyBullet_2098(int x, int y) : Active(x, y, EnemyBullet_2098_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Bullet", 12);
#endif
        this->animations = &anim_enemybullet_2098;
        if (!anim_enemybullet_2098_initialized) {
            anim_enemybullet_2098_initialized = true;
            images_enemybullet_2098_0_0[0] = get_internal_image(9255);
            images_enemybullet_2098_0_0[1] = get_internal_image(9023);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 5);
    }
};
FrameObject * create_enemybullet_2098(int x, int y)
{
    return new (Active::pool.create()) EnemyBullet_2098(x, y);
}
static Image* images_switchdoor_2099_0_0[1];
static Direction direction_switchdoor_2099_0_0 = {0, 50, 50, 0, 1, images_switchdoor_2099_0_0, 1};
static Animation anim_switchdoor_2099_0 = {&direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, NULL, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0, &direction_switchdoor_2099_0_0};
static Animation * anim_array_switchdoor_2099[1] = {&anim_switchdoor_2099_0};
static Animations anim_switchdoor_2099 = {1, &anim_array_switchdoor_2099[0]};
static bool anim_switchdoor_2099_initialized;
class SwitchDoor_2099 : public Active
{
public:
    SwitchDoor_2099(int x, int y) : Active(x, y, SwitchDoor_2099_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door", 11);
#endif
        this->animations = &anim_switchdoor_2099;
        if (!anim_switchdoor_2099_initialized) {
            anim_switchdoor_2099_initialized = true;
            images_switchdoor_2099_0_0[0] = get_internal_image(1077);
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
FrameObject * create_switchdoor_2099(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor_2099(x, y);
}
static Image* images_switchplatform_2100_0_0[1];
static Direction direction_switchplatform_2100_0_0 = {0, 50, 50, 0, 1, images_switchplatform_2100_0_0, 1};
static Animation anim_switchplatform_2100_0 = {&direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, NULL, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0, &direction_switchplatform_2100_0_0};
static Animation * anim_array_switchplatform_2100[1] = {&anim_switchplatform_2100_0};
static Animations anim_switchplatform_2100 = {1, &anim_array_switchplatform_2100[0]};
static bool anim_switchplatform_2100_initialized;
class SwitchPlatform_2100 : public Active
{
public:
    SwitchPlatform_2100(int x, int y) : Active(x, y, SwitchPlatform_2100_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Platform", 15);
#endif
        set_visible(false);
        this->animations = &anim_switchplatform_2100;
        if (!anim_switchplatform_2100_initialized) {
            anim_switchplatform_2100_initialized = true;
            images_switchplatform_2100_0_0[0] = get_internal_image(4490);
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
FrameObject * create_switchplatform_2100(int x, int y)
{
    return new (Active::pool.create()) SwitchPlatform_2100(x, y);
}
static Image* images_levelshipname1_2101_0_0[1];
static Direction direction_levelshipname1_2101_0_0 = {0, 50, 50, 0, 1, images_levelshipname1_2101_0_0, 1};
static Animation anim_levelshipname1_2101_0 = {&direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, NULL, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0, &direction_levelshipname1_2101_0_0};
static Animation * anim_array_levelshipname1_2101[1] = {&anim_levelshipname1_2101_0};
static Animations anim_levelshipname1_2101 = {1, &anim_array_levelshipname1_2101[0]};
static bool anim_levelshipname1_2101_initialized;
class LevelShipName1_2101 : public Active
{
public:
    LevelShipName1_2101(int x, int y) : Active(x, y, LevelShipName1_2101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ShipName 1", 16);
#endif
        this->animations = &anim_levelshipname1_2101;
        if (!anim_levelshipname1_2101_initialized) {
            anim_levelshipname1_2101_initialized = true;
            images_levelshipname1_2101_0_0[0] = get_internal_image(6021);
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
FrameObject * create_levelshipname1_2101(int x, int y)
{
    return new (Active::pool.create()) LevelShipName1_2101(x, y);
}
static Image* images_levelshipname2_2102_0_0[1];
static Direction direction_levelshipname2_2102_0_0 = {0, 50, 50, 0, 1, images_levelshipname2_2102_0_0, 1};
static Animation anim_levelshipname2_2102_0 = {&direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, NULL, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0, &direction_levelshipname2_2102_0_0};
static Animation * anim_array_levelshipname2_2102[1] = {&anim_levelshipname2_2102_0};
static Animations anim_levelshipname2_2102 = {1, &anim_array_levelshipname2_2102[0]};
static bool anim_levelshipname2_2102_initialized;
class LevelShipName2_2102 : public Active
{
public:
    LevelShipName2_2102(int x, int y) : Active(x, y, LevelShipName2_2102_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ShipName 2", 16);
#endif
        this->animations = &anim_levelshipname2_2102;
        if (!anim_levelshipname2_2102_initialized) {
            anim_levelshipname2_2102_initialized = true;
            images_levelshipname2_2102_0_0[0] = get_internal_image(6020);
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
FrameObject * create_levelshipname2_2102(int x, int y)
{
    return new (Active::pool.create()) LevelShipName2_2102(x, y);
}
static Image* images_levelshipname3_2103_0_0[1];
static Direction direction_levelshipname3_2103_0_0 = {0, 50, 50, 0, 1, images_levelshipname3_2103_0_0, 1};
static Animation anim_levelshipname3_2103_0 = {&direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, NULL, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0, &direction_levelshipname3_2103_0_0};
static Animation * anim_array_levelshipname3_2103[1] = {&anim_levelshipname3_2103_0};
static Animations anim_levelshipname3_2103 = {1, &anim_array_levelshipname3_2103[0]};
static bool anim_levelshipname3_2103_initialized;
class LevelShipName3_2103 : public Active
{
public:
    LevelShipName3_2103(int x, int y) : Active(x, y, LevelShipName3_2103_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ShipName 3", 16);
#endif
        this->animations = &anim_levelshipname3_2103;
        if (!anim_levelshipname3_2103_initialized) {
            anim_levelshipname3_2103_initialized = true;
            images_levelshipname3_2103_0_0[0] = get_internal_image(6022);
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
FrameObject * create_levelshipname3_2103(int x, int y)
{
    return new (Active::pool.create()) LevelShipName3_2103(x, y);
}
static Image* images_bosskujackertail_2104_0_0[1];
static Direction direction_bosskujackertail_2104_0_0 = {0, 50, 50, 0, 1, images_bosskujackertail_2104_0_0, 1};
static Image* images_bosskujackertail_2104_0_1[8];
static Direction direction_bosskujackertail_2104_0_1 = {1, 25, 25, 0, -1, images_bosskujackertail_2104_0_1, 8};
static Image* images_bosskujackertail_2104_0_2[2];
static Direction direction_bosskujackertail_2104_0_2 = {2, 50, 50, 0, -1, images_bosskujackertail_2104_0_2, 2};
static Image* images_bosskujackertail_2104_0_3[4];
static Direction direction_bosskujackertail_2104_0_3 = {3, 25, 25, 0, -1, images_bosskujackertail_2104_0_3, 4};
static Image* images_bosskujackertail_2104_0_31[2];
static Direction direction_bosskujackertail_2104_0_31 = {31, 50, 50, 0, 1, images_bosskujackertail_2104_0_31, 2};
static Animation anim_bosskujackertail_2104_0 = {&direction_bosskujackertail_2104_0_0, &direction_bosskujackertail_2104_0_1, &direction_bosskujackertail_2104_0_2, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, &direction_bosskujackertail_2104_0_3, NULL, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31, &direction_bosskujackertail_2104_0_31};
static Image* images_bosskujackertail_2104_10_0[1];
static Direction direction_bosskujackertail_2104_10_0 = {0, 50, 50, 0, -1, images_bosskujackertail_2104_10_0, 1};
static Animation anim_bosskujackertail_2104_10 = {&direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, NULL, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0, &direction_bosskujackertail_2104_10_0};
static Image* images_bosskujackertail_2104_11_0[5];
static Direction direction_bosskujackertail_2104_11_0 = {0, 50, 50, 0, -1, images_bosskujackertail_2104_11_0, 5};
static Image* images_bosskujackertail_2104_11_1[5];
static Direction direction_bosskujackertail_2104_11_1 = {1, 50, 50, 0, -1, images_bosskujackertail_2104_11_1, 5};
static Animation anim_bosskujackertail_2104_11 = {&direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_1, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0, &direction_bosskujackertail_2104_11_0};
static Animation * anim_array_bosskujackertail_2104[12] = {&anim_bosskujackertail_2104_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackertail_2104_10, &anim_bosskujackertail_2104_11};
static Animations anim_bosskujackertail_2104 = {12, &anim_array_bosskujackertail_2104[0]};
static bool anim_bosskujackertail_2104_initialized;
class BossKujackerTail_2104 : public Active
{
public:
    BossKujackerTail_2104(int x, int y) : Active(x, y, BossKujackerTail_2104_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerTail", 17);
#endif
        this->animations = &anim_bosskujackertail_2104;
        if (!anim_bosskujackertail_2104_initialized) {
            anim_bosskujackertail_2104_initialized = true;
            images_bosskujackertail_2104_0_0[0] = get_internal_image(11873);
            images_bosskujackertail_2104_0_1[0] = get_internal_image(11885);
            images_bosskujackertail_2104_0_1[1] = get_internal_image(11885);
            images_bosskujackertail_2104_0_1[2] = get_internal_image(11885);
            images_bosskujackertail_2104_0_1[3] = get_internal_image(11874);
            images_bosskujackertail_2104_0_1[4] = get_internal_image(11886);
            images_bosskujackertail_2104_0_1[5] = get_internal_image(11886);
            images_bosskujackertail_2104_0_1[6] = get_internal_image(11886);
            images_bosskujackertail_2104_0_1[7] = get_internal_image(11874);
            images_bosskujackertail_2104_0_2[0] = get_internal_image(11887);
            images_bosskujackertail_2104_0_2[1] = get_internal_image(11875);
            images_bosskujackertail_2104_0_3[0] = get_internal_image(11888);
            images_bosskujackertail_2104_0_3[1] = get_internal_image(11876);
            images_bosskujackertail_2104_0_3[2] = get_internal_image(11889);
            images_bosskujackertail_2104_0_3[3] = get_internal_image(11876);
            images_bosskujackertail_2104_0_31[0] = get_internal_image(11884);
            images_bosskujackertail_2104_0_31[1] = get_internal_image(11873);
            images_bosskujackertail_2104_10_0[0] = get_internal_image(11877);
            images_bosskujackertail_2104_11_0[0] = get_internal_image(11878);
            images_bosskujackertail_2104_11_0[1] = get_internal_image(11879);
            images_bosskujackertail_2104_11_0[2] = get_internal_image(11880);
            images_bosskujackertail_2104_11_0[3] = get_internal_image(11881);
            images_bosskujackertail_2104_11_0[4] = get_internal_image(11882);
            images_bosskujackertail_2104_11_1[0] = get_internal_image(11883);
            images_bosskujackertail_2104_11_1[1] = get_internal_image(11890);
            images_bosskujackertail_2104_11_1[2] = get_internal_image(11891);
            images_bosskujackertail_2104_11_1[3] = get_internal_image(11892);
            images_bosskujackertail_2104_11_1[4] = get_internal_image(11893);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
    }
};
FrameObject * create_bosskujackertail_2104(int x, int y)
{
    return new (Active::pool.create()) BossKujackerTail_2104(x, y);
}
static Image* images_bosskujackerleg2_2105_0_0[2];
static Direction direction_bosskujackerleg2_2105_0_0 = {0, 50, 50, 0, 1, images_bosskujackerleg2_2105_0_0, 2};
static Image* images_bosskujackerleg2_2105_0_1[2];
static Direction direction_bosskujackerleg2_2105_0_1 = {1, 50, 50, 0, -1, images_bosskujackerleg2_2105_0_1, 2};
static Animation anim_bosskujackerleg2_2105_0 = {&direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_1, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0, &direction_bosskujackerleg2_2105_0_0};
static Image* images_bosskujackerleg2_2105_7_0[1];
static Direction direction_bosskujackerleg2_2105_7_0 = {0, 50, 50, 0, -1, images_bosskujackerleg2_2105_7_0, 1};
static Image* images_bosskujackerleg2_2105_7_16[1];
static Direction direction_bosskujackerleg2_2105_7_16 = {16, 50, 50, 0, -1, images_bosskujackerleg2_2105_7_16, 1};
static Animation anim_bosskujackerleg2_2105_7 = {&direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, NULL, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, &direction_bosskujackerleg2_2105_7_16, NULL, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0, &direction_bosskujackerleg2_2105_7_0};
static Image* images_bosskujackerleg2_2105_11_0[1];
static Direction direction_bosskujackerleg2_2105_11_0 = {0, 50, 50, 0, -1, images_bosskujackerleg2_2105_11_0, 1};
static Animation anim_bosskujackerleg2_2105_11 = {&direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, NULL, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0, &direction_bosskujackerleg2_2105_11_0};
static Animation * anim_array_bosskujackerleg2_2105[12] = {&anim_bosskujackerleg2_2105_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerleg2_2105_7, NULL, NULL, NULL, &anim_bosskujackerleg2_2105_11};
static Animations anim_bosskujackerleg2_2105 = {12, &anim_array_bosskujackerleg2_2105[0]};
static bool anim_bosskujackerleg2_2105_initialized;
class BossKujackerLeg2_2105 : public Active
{
public:
    BossKujackerLeg2_2105(int x, int y) : Active(x, y, BossKujackerLeg2_2105_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerLeg 2", 18);
#endif
        this->animations = &anim_bosskujackerleg2_2105;
        if (!anim_bosskujackerleg2_2105_initialized) {
            anim_bosskujackerleg2_2105_initialized = true;
            images_bosskujackerleg2_2105_0_0[0] = get_internal_image(11870);
            images_bosskujackerleg2_2105_0_0[1] = get_internal_image(11870);
            images_bosskujackerleg2_2105_0_1[0] = get_internal_image(11872);
            images_bosskujackerleg2_2105_0_1[1] = get_internal_image(11870);
            images_bosskujackerleg2_2105_7_0[0] = get_internal_image(11869);
            images_bosskujackerleg2_2105_7_16[0] = get_internal_image(11868);
            images_bosskujackerleg2_2105_11_0[0] = get_internal_image(6006);
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
FrameObject * create_bosskujackerleg2_2105(int x, int y)
{
    return new (Active::pool.create()) BossKujackerLeg2_2105(x, y);
}
static Image* images_bosskujackerleg1_2106_0_0[2];
static Direction direction_bosskujackerleg1_2106_0_0 = {0, 50, 50, 0, 1, images_bosskujackerleg1_2106_0_0, 2};
static Image* images_bosskujackerleg1_2106_0_1[2];
static Direction direction_bosskujackerleg1_2106_0_1 = {1, 50, 50, 0, -1, images_bosskujackerleg1_2106_0_1, 2};
static Animation anim_bosskujackerleg1_2106_0 = {&direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_1, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0, &direction_bosskujackerleg1_2106_0_0};
static Image* images_bosskujackerleg1_2106_7_0[1];
static Direction direction_bosskujackerleg1_2106_7_0 = {0, 50, 50, 0, -1, images_bosskujackerleg1_2106_7_0, 1};
static Image* images_bosskujackerleg1_2106_7_16[1];
static Direction direction_bosskujackerleg1_2106_7_16 = {16, 50, 50, 0, -1, images_bosskujackerleg1_2106_7_16, 1};
static Animation anim_bosskujackerleg1_2106_7 = {&direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, NULL, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, &direction_bosskujackerleg1_2106_7_16, NULL, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0, &direction_bosskujackerleg1_2106_7_0};
static Image* images_bosskujackerleg1_2106_11_0[1];
static Direction direction_bosskujackerleg1_2106_11_0 = {0, 50, 50, 0, -1, images_bosskujackerleg1_2106_11_0, 1};
static Animation anim_bosskujackerleg1_2106_11 = {&direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, NULL, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0, &direction_bosskujackerleg1_2106_11_0};
static Animation * anim_array_bosskujackerleg1_2106[12] = {&anim_bosskujackerleg1_2106_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerleg1_2106_7, NULL, NULL, NULL, &anim_bosskujackerleg1_2106_11};
static Animations anim_bosskujackerleg1_2106 = {12, &anim_array_bosskujackerleg1_2106[0]};
static bool anim_bosskujackerleg1_2106_initialized;
class BossKujackerLeg1_2106 : public Active
{
public:
    BossKujackerLeg1_2106(int x, int y) : Active(x, y, BossKujackerLeg1_2106_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerLeg 1", 18);
#endif
        this->animations = &anim_bosskujackerleg1_2106;
        if (!anim_bosskujackerleg1_2106_initialized) {
            anim_bosskujackerleg1_2106_initialized = true;
            images_bosskujackerleg1_2106_0_0[0] = get_internal_image(11867);
            images_bosskujackerleg1_2106_0_0[1] = get_internal_image(11867);
            images_bosskujackerleg1_2106_0_1[0] = get_internal_image(11871);
            images_bosskujackerleg1_2106_0_1[1] = get_internal_image(11867);
            images_bosskujackerleg1_2106_7_0[0] = get_internal_image(11869);
            images_bosskujackerleg1_2106_7_16[0] = get_internal_image(11868);
            images_bosskujackerleg1_2106_11_0[0] = get_internal_image(6026);
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
FrameObject * create_bosskujackerleg1_2106(int x, int y)
{
    return new (Active::pool.create()) BossKujackerLeg1_2106(x, y);
}
static Image* images_bosskujackerbase_2107_0_0[2];
static Direction direction_bosskujackerbase_2107_0_0 = {0, 50, 50, 0, 1, images_bosskujackerbase_2107_0_0, 2};
static Image* images_bosskujackerbase_2107_0_1[2];
static Direction direction_bosskujackerbase_2107_0_1 = {1, 50, 50, 0, -1, images_bosskujackerbase_2107_0_1, 2};
static Animation anim_bosskujackerbase_2107_0 = {&direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_1, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0, &direction_bosskujackerbase_2107_0_0};
static Image* images_bosskujackerbase_2107_7_0[1];
static Direction direction_bosskujackerbase_2107_7_0 = {0, 50, 50, 0, -1, images_bosskujackerbase_2107_7_0, 1};
static Animation anim_bosskujackerbase_2107_7 = {&direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, NULL, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0, &direction_bosskujackerbase_2107_7_0};
static Image* images_bosskujackerbase_2107_11_0[5];
static Direction direction_bosskujackerbase_2107_11_0 = {0, 50, 50, 0, -1, images_bosskujackerbase_2107_11_0, 5};
static Animation anim_bosskujackerbase_2107_11 = {&direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, NULL, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0, &direction_bosskujackerbase_2107_11_0};
static Animation * anim_array_bosskujackerbase_2107[12] = {&anim_bosskujackerbase_2107_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerbase_2107_7, NULL, NULL, NULL, &anim_bosskujackerbase_2107_11};
static Animations anim_bosskujackerbase_2107 = {12, &anim_array_bosskujackerbase_2107[0]};
static bool anim_bosskujackerbase_2107_initialized;
class BossKujackerBase_2107 : public Active
{
public:
    BossKujackerBase_2107(int x, int y) : Active(x, y, BossKujackerBase_2107_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerBase", 17);
#endif
        this->animations = &anim_bosskujackerbase_2107;
        if (!anim_bosskujackerbase_2107_initialized) {
            anim_bosskujackerbase_2107_initialized = true;
            images_bosskujackerbase_2107_0_0[0] = get_internal_image(12237);
            images_bosskujackerbase_2107_0_0[1] = get_internal_image(12237);
            images_bosskujackerbase_2107_0_1[0] = get_internal_image(12242);
            images_bosskujackerbase_2107_0_1[1] = get_internal_image(12237);
            images_bosskujackerbase_2107_7_0[0] = get_internal_image(12238);
            images_bosskujackerbase_2107_11_0[0] = get_internal_image(12240);
            images_bosskujackerbase_2107_11_0[1] = get_internal_image(12239);
            images_bosskujackerbase_2107_11_0[2] = get_internal_image(12237);
            images_bosskujackerbase_2107_11_0[3] = get_internal_image(12237);
            images_bosskujackerbase_2107_11_0[4] = get_internal_image(12239);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 60);
        alterables->values.set(9, 5);
        alterables->values.set(10, -1);
        alterables->values.set(11, 4);
    }
};
FrameObject * create_bosskujackerbase_2107(int x, int y)
{
    return new (Active::pool.create()) BossKujackerBase_2107(x, y);
}
static Image* images_bosskujackerhead2_2108_0_0[2];
static Direction direction_bosskujackerhead2_2108_0_0 = {0, 50, 50, 0, 1, images_bosskujackerhead2_2108_0_0, 2};
static Image* images_bosskujackerhead2_2108_0_1[2];
static Direction direction_bosskujackerhead2_2108_0_1 = {1, 50, 50, 0, -1, images_bosskujackerhead2_2108_0_1, 2};
static Animation anim_bosskujackerhead2_2108_0 = {&direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_1, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0, &direction_bosskujackerhead2_2108_0_0};
static Image* images_bosskujackerhead2_2108_11_0[3];
static Direction direction_bosskujackerhead2_2108_11_0 = {0, 50, 50, 0, -1, images_bosskujackerhead2_2108_11_0, 3};
static Animation anim_bosskujackerhead2_2108_11 = {&direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, NULL, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0, &direction_bosskujackerhead2_2108_11_0};
static Animation * anim_array_bosskujackerhead2_2108[12] = {&anim_bosskujackerhead2_2108_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerhead2_2108_11};
static Animations anim_bosskujackerhead2_2108 = {12, &anim_array_bosskujackerhead2_2108[0]};
static bool anim_bosskujackerhead2_2108_initialized;
class BossKujackerHead2_2108 : public Active
{
public:
    BossKujackerHead2_2108(int x, int y) : Active(x, y, BossKujackerHead2_2108_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerHead 2", 19);
#endif
        this->animations = &anim_bosskujackerhead2_2108;
        if (!anim_bosskujackerhead2_2108_initialized) {
            anim_bosskujackerhead2_2108_initialized = true;
            images_bosskujackerhead2_2108_0_0[0] = get_internal_image(703);
            images_bosskujackerhead2_2108_0_0[1] = get_internal_image(703);
            images_bosskujackerhead2_2108_0_1[0] = get_internal_image(648);
            images_bosskujackerhead2_2108_0_1[1] = get_internal_image(703);
            images_bosskujackerhead2_2108_11_0[0] = get_internal_image(6034);
            images_bosskujackerhead2_2108_11_0[1] = get_internal_image(6035);
            images_bosskujackerhead2_2108_11_0[2] = get_internal_image(6036);
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
FrameObject * create_bosskujackerhead2_2108(int x, int y)
{
    return new (Active::pool.create()) BossKujackerHead2_2108(x, y);
}
static Image* images_bosskujackertailtarget_2109_0_0[1];
static Direction direction_bosskujackertailtarget_2109_0_0 = {0, 50, 50, 0, 1, images_bosskujackertailtarget_2109_0_0, 1};
static Animation anim_bosskujackertailtarget_2109_0 = {&direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, NULL, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0, &direction_bosskujackertailtarget_2109_0_0};
static Image* images_bosskujackertailtarget_2109_11_0[3];
static Direction direction_bosskujackertailtarget_2109_11_0 = {0, 50, 50, 0, -1, images_bosskujackertailtarget_2109_11_0, 3};
static Animation anim_bosskujackertailtarget_2109_11 = {&direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, NULL, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0, &direction_bosskujackertailtarget_2109_11_0};
static Animation * anim_array_bosskujackertailtarget_2109[12] = {&anim_bosskujackertailtarget_2109_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackertailtarget_2109_11};
static Animations anim_bosskujackertailtarget_2109 = {12, &anim_array_bosskujackertailtarget_2109[0]};
static bool anim_bosskujackertailtarget_2109_initialized;
class BossKujackerTailTarget_2109 : public Active
{
public:
    BossKujackerTailTarget_2109(int x, int y) : Active(x, y, BossKujackerTailTarget_2109_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_KujackerTailTarget", 23);
#endif
        set_visible(false);
        this->animations = &anim_bosskujackertailtarget_2109;
        if (!anim_bosskujackertailtarget_2109_initialized) {
            anim_bosskujackertailtarget_2109_initialized = true;
            images_bosskujackertailtarget_2109_0_0[0] = get_internal_image(6037);
            images_bosskujackertailtarget_2109_11_0[0] = get_internal_image(6034);
            images_bosskujackertailtarget_2109_11_0[1] = get_internal_image(6035);
            images_bosskujackertailtarget_2109_11_0[2] = get_internal_image(6036);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_bosskujackertailtarget_2109(int x, int y)
{
    return new (Active::pool.create()) BossKujackerTailTarget_2109(x, y);
}
static Image* images_bosskujackerwing1_2110_0_0[1];
static Direction direction_bosskujackerwing1_2110_0_0 = {0, 0, 0, 0, 1, images_bosskujackerwing1_2110_0_0, 1};
static Image* images_bosskujackerwing1_2110_0_1[2];
static Direction direction_bosskujackerwing1_2110_0_1 = {1, 50, 50, 0, -1, images_bosskujackerwing1_2110_0_1, 2};
static Animation anim_bosskujackerwing1_2110_0 = {&direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_1, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0, &direction_bosskujackerwing1_2110_0_0};
static Image* images_bosskujackerwing1_2110_11_0[5];
static Direction direction_bosskujackerwing1_2110_11_0 = {0, 50, 50, 0, -1, images_bosskujackerwing1_2110_11_0, 5};
static Animation anim_bosskujackerwing1_2110_11 = {&direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, NULL, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0, &direction_bosskujackerwing1_2110_11_0};
static Animation * anim_array_bosskujackerwing1_2110[12] = {&anim_bosskujackerwing1_2110_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerwing1_2110_11};
static Animations anim_bosskujackerwing1_2110 = {12, &anim_array_bosskujackerwing1_2110[0]};
static bool anim_bosskujackerwing1_2110_initialized;
class BossKujackerWing1_2110 : public Active
{
public:
    BossKujackerWing1_2110(int x, int y) : Active(x, y, BossKujackerWing1_2110_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerWing 1", 19);
#endif
        this->animations = &anim_bosskujackerwing1_2110;
        if (!anim_bosskujackerwing1_2110_initialized) {
            anim_bosskujackerwing1_2110_initialized = true;
            images_bosskujackerwing1_2110_0_0[0] = get_internal_image(863);
            images_bosskujackerwing1_2110_0_1[0] = get_internal_image(877);
            images_bosskujackerwing1_2110_0_1[1] = get_internal_image(863);
            images_bosskujackerwing1_2110_11_0[0] = get_internal_image(6041);
            images_bosskujackerwing1_2110_11_0[1] = get_internal_image(6042);
            images_bosskujackerwing1_2110_11_0[2] = get_internal_image(6044);
            images_bosskujackerwing1_2110_11_0[3] = get_internal_image(6045);
            images_bosskujackerwing1_2110_11_0[4] = get_internal_image(6046);
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
FrameObject * create_bosskujackerwing1_2110(int x, int y)
{
    return new (Active::pool.create()) BossKujackerWing1_2110(x, y);
}
static Image* images_bosskujackerwing2_2111_0_0[1];
static Direction direction_bosskujackerwing2_2111_0_0 = {0, 0, 0, 0, 1, images_bosskujackerwing2_2111_0_0, 1};
static Image* images_bosskujackerwing2_2111_0_1[2];
static Direction direction_bosskujackerwing2_2111_0_1 = {1, 50, 50, 0, -1, images_bosskujackerwing2_2111_0_1, 2};
static Animation anim_bosskujackerwing2_2111_0 = {&direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_1, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0, &direction_bosskujackerwing2_2111_0_0};
static Image* images_bosskujackerwing2_2111_11_0[5];
static Direction direction_bosskujackerwing2_2111_11_0 = {0, 50, 50, 0, -1, images_bosskujackerwing2_2111_11_0, 5};
static Animation anim_bosskujackerwing2_2111_11 = {&direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, NULL, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0, &direction_bosskujackerwing2_2111_11_0};
static Animation * anim_array_bosskujackerwing2_2111[12] = {&anim_bosskujackerwing2_2111_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerwing2_2111_11};
static Animations anim_bosskujackerwing2_2111 = {12, &anim_array_bosskujackerwing2_2111[0]};
static bool anim_bosskujackerwing2_2111_initialized;
class BossKujackerWing2_2111 : public Active
{
public:
    BossKujackerWing2_2111(int x, int y) : Active(x, y, BossKujackerWing2_2111_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerWing 2", 19);
#endif
        this->animations = &anim_bosskujackerwing2_2111;
        if (!anim_bosskujackerwing2_2111_initialized) {
            anim_bosskujackerwing2_2111_initialized = true;
            images_bosskujackerwing2_2111_0_0[0] = get_internal_image(878);
            images_bosskujackerwing2_2111_0_1[0] = get_internal_image(5369);
            images_bosskujackerwing2_2111_0_1[1] = get_internal_image(878);
            images_bosskujackerwing2_2111_11_0[0] = get_internal_image(6049);
            images_bosskujackerwing2_2111_11_0[1] = get_internal_image(6050);
            images_bosskujackerwing2_2111_11_0[2] = get_internal_image(6051);
            images_bosskujackerwing2_2111_11_0[3] = get_internal_image(6052);
            images_bosskujackerwing2_2111_11_0[4] = get_internal_image(6053);
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
FrameObject * create_bosskujackerwing2_2111(int x, int y)
{
    return new (Active::pool.create()) BossKujackerWing2_2111(x, y);
}
