#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_hazardscanlaserhead_3113_0_0[1];
static Direction direction_hazardscanlaserhead_3113_0_0 = {0, 50, 50, 0, 1, images_hazardscanlaserhead_3113_0_0, 1};
static Animation anim_hazardscanlaserhead_3113_0 = {&direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, NULL, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0, &direction_hazardscanlaserhead_3113_0_0};
static Animation * anim_array_hazardscanlaserhead_3113[1] = {&anim_hazardscanlaserhead_3113_0};
static Animations anim_hazardscanlaserhead_3113 = {1, &anim_array_hazardscanlaserhead_3113[0]};
static bool anim_hazardscanlaserhead_3113_initialized;
class HazardScanLaserHead_3113 : public Active
{
public:
    HazardScanLaserHead_3113(int x, int y) : Active(x, y, HazardScanLaserHead_3113_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserHead", 20);
#endif
        this->animations = &anim_hazardscanlaserhead_3113;
        if (!anim_hazardscanlaserhead_3113_initialized) {
            anim_hazardscanlaserhead_3113_initialized = true;
            images_hazardscanlaserhead_3113_0_0[0] = get_internal_image(7846);
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
FrameObject * create_hazardscanlaserhead_3113(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserHead_3113(x, y);
}
static Image* images_hazardscanlaserhead2_3114_0_0[1];
static Direction direction_hazardscanlaserhead2_3114_0_0 = {0, 50, 50, 0, 1, images_hazardscanlaserhead2_3114_0_0, 1};
static Animation anim_hazardscanlaserhead2_3114_0 = {&direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, NULL, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0, &direction_hazardscanlaserhead2_3114_0_0};
static Animation * anim_array_hazardscanlaserhead2_3114[1] = {&anim_hazardscanlaserhead2_3114_0};
static Animations anim_hazardscanlaserhead2_3114 = {1, &anim_array_hazardscanlaserhead2_3114[0]};
static bool anim_hazardscanlaserhead2_3114_initialized;
class HazardScanLaserHead2_3114 : public Active
{
public:
    HazardScanLaserHead2_3114(int x, int y) : Active(x, y, HazardScanLaserHead2_3114_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserHead 2", 22);
#endif
        this->animations = &anim_hazardscanlaserhead2_3114;
        if (!anim_hazardscanlaserhead2_3114_initialized) {
            anim_hazardscanlaserhead2_3114_initialized = true;
            images_hazardscanlaserhead2_3114_0_0[0] = get_internal_image(7852);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(16);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_hazardscanlaserhead2_3114(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserHead2_3114(x, y);
}
static Image* images_hazardscanlaserhead5_3115_0_0[1];
static Direction direction_hazardscanlaserhead5_3115_0_0 = {0, 50, 50, 0, 1, images_hazardscanlaserhead5_3115_0_0, 1};
static Animation anim_hazardscanlaserhead5_3115_0 = {&direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, NULL, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0, &direction_hazardscanlaserhead5_3115_0_0};
static Animation * anim_array_hazardscanlaserhead5_3115[1] = {&anim_hazardscanlaserhead5_3115_0};
static Animations anim_hazardscanlaserhead5_3115 = {1, &anim_array_hazardscanlaserhead5_3115[0]};
static bool anim_hazardscanlaserhead5_3115_initialized;
class HazardScanLaserHead5_3115 : public Active
{
public:
    HazardScanLaserHead5_3115(int x, int y) : Active(x, y, HazardScanLaserHead5_3115_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserHead 5", 22);
#endif
        this->animations = &anim_hazardscanlaserhead5_3115;
        if (!anim_hazardscanlaserhead5_3115_initialized) {
            anim_hazardscanlaserhead5_3115_initialized = true;
            images_hazardscanlaserhead5_3115_0_0[0] = get_internal_image(8626);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(16);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_hazardscanlaserhead5_3115(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserHead5_3115(x, y);
}
static Image* images_hazardscanlaserhead3_3116_0_0[1];
static Direction direction_hazardscanlaserhead3_3116_0_0 = {0, 50, 50, 0, 1, images_hazardscanlaserhead3_3116_0_0, 1};
static Animation anim_hazardscanlaserhead3_3116_0 = {&direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, NULL, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0, &direction_hazardscanlaserhead3_3116_0_0};
static Animation * anim_array_hazardscanlaserhead3_3116[1] = {&anim_hazardscanlaserhead3_3116_0};
static Animations anim_hazardscanlaserhead3_3116 = {1, &anim_array_hazardscanlaserhead3_3116[0]};
static bool anim_hazardscanlaserhead3_3116_initialized;
class HazardScanLaserHead3_3116 : public Active
{
public:
    HazardScanLaserHead3_3116(int x, int y) : Active(x, y, HazardScanLaserHead3_3116_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserHead 3", 22);
#endif
        this->animations = &anim_hazardscanlaserhead3_3116;
        if (!anim_hazardscanlaserhead3_3116_initialized) {
            anim_hazardscanlaserhead3_3116_initialized = true;
            images_hazardscanlaserhead3_3116_0_0[0] = get_internal_image(9407);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(16);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_hazardscanlaserhead3_3116(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserHead3_3116(x, y);
}
static Image* images_hazardscanlaserboss_3117_0_0[1];
static Direction direction_hazardscanlaserboss_3117_0_0 = {0, 50, 50, 0, -1, images_hazardscanlaserboss_3117_0_0, 1};
static Image* images_hazardscanlaserboss_3117_0_1[3];
static Direction direction_hazardscanlaserboss_3117_0_1 = {1, 50, 50, 0, -1, images_hazardscanlaserboss_3117_0_1, 3};
static Animation anim_hazardscanlaserboss_3117_0 = {&direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_1, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0, &direction_hazardscanlaserboss_3117_0_0};
static Animation * anim_array_hazardscanlaserboss_3117[1] = {&anim_hazardscanlaserboss_3117_0};
static Animations anim_hazardscanlaserboss_3117 = {1, &anim_array_hazardscanlaserboss_3117[0]};
static bool anim_hazardscanlaserboss_3117_initialized;
class HazardScanLaserBoss_3117 : public Active
{
public:
    HazardScanLaserBoss_3117(int x, int y) : Active(x, y, HazardScanLaserBoss_3117_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserBoss", 20);
#endif
        this->animations = &anim_hazardscanlaserboss_3117;
        if (!anim_hazardscanlaserboss_3117_initialized) {
            anim_hazardscanlaserboss_3117_initialized = true;
            images_hazardscanlaserboss_3117_0_0[0] = get_internal_image(13014);
            images_hazardscanlaserboss_3117_0_1[0] = get_internal_image(13015);
            images_hazardscanlaserboss_3117_0_1[1] = get_internal_image(13018);
            images_hazardscanlaserboss_3117_0_1[2] = get_internal_image(13021);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_hazardscanlaserboss_3117(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserBoss_3117(x, y);
}
static Image* images_hazardspikesup_3118_0_0[1];
static Direction direction_hazardspikesup_3118_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_3118_0_0, 1};
static Animation anim_hazardspikesup_3118_0 = {&direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, NULL, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0, &direction_hazardspikesup_3118_0_0};
static Animation * anim_array_hazardspikesup_3118[1] = {&anim_hazardspikesup_3118_0};
static Animations anim_hazardspikesup_3118 = {1, &anim_array_hazardspikesup_3118[0]};
static bool anim_hazardspikesup_3118_initialized;
class HazardSpikesUp_3118 : public Active
{
public:
    HazardSpikesUp_3118(int x, int y) : Active(x, y, HazardSpikesUp_3118_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_3118;
        if (!anim_hazardspikesup_3118_initialized) {
            anim_hazardspikesup_3118_initialized = true;
            images_hazardspikesup_3118_0_0[0] = get_internal_image(9452);
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
FrameObject * create_hazardspikesup_3118(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_3118(x, y);
}
static Image* images_hazardspikesleft_3119_0_0[1];
static Direction direction_hazardspikesleft_3119_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_3119_0_0, 1};
static Animation anim_hazardspikesleft_3119_0 = {&direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, NULL, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0, &direction_hazardspikesleft_3119_0_0};
static Animation * anim_array_hazardspikesleft_3119[1] = {&anim_hazardspikesleft_3119_0};
static Animations anim_hazardspikesleft_3119 = {1, &anim_array_hazardspikesleft_3119[0]};
static bool anim_hazardspikesleft_3119_initialized;
class HazardSpikesLeft_3119 : public Active
{
public:
    HazardSpikesLeft_3119(int x, int y) : Active(x, y, HazardSpikesLeft_3119_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_3119;
        if (!anim_hazardspikesleft_3119_initialized) {
            anim_hazardspikesleft_3119_initialized = true;
            images_hazardspikesleft_3119_0_0[0] = get_internal_image(9455);
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
FrameObject * create_hazardspikesleft_3119(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_3119(x, y);
}
static Image* images_hazardspikesright_3120_0_0[1];
static Direction direction_hazardspikesright_3120_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_3120_0_0, 1};
static Animation anim_hazardspikesright_3120_0 = {&direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, NULL, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0, &direction_hazardspikesright_3120_0_0};
static Animation * anim_array_hazardspikesright_3120[1] = {&anim_hazardspikesright_3120_0};
static Animations anim_hazardspikesright_3120 = {1, &anim_array_hazardspikesright_3120[0]};
static bool anim_hazardspikesright_3120_initialized;
class HazardSpikesRight_3120 : public Active
{
public:
    HazardSpikesRight_3120(int x, int y) : Active(x, y, HazardSpikesRight_3120_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_3120;
        if (!anim_hazardspikesright_3120_initialized) {
            anim_hazardspikesright_3120_initialized = true;
            images_hazardspikesright_3120_0_0[0] = get_internal_image(9458);
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
FrameObject * create_hazardspikesright_3120(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_3120(x, y);
}
class LevelParallaxPiece0_3121 : public SystemBox
{
public:
    LevelParallaxPiece0_3121(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3121_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 100;
        height = 720;
        type = PATTERN_IMAGE;
        image = get_internal_image(13082);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3121(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3121(x, y);
}
class THTorchTop_3122 : public Backdrop
{
public:
    THTorchTop_3122(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_TorchTop", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3238);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thtorchtop_3122(int x, int y)
{
    return new (Backdrop::pool.create()) THTorchTop_3122(x, y);
}
class THTorchMid_3123 : public Backdrop
{
public:
    THTorchMid_3123(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_TorchMid", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3282);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thtorchmid_3123(int x, int y)
{
    return new (Backdrop::pool.create()) THTorchMid_3123(x, y);
}
static Image* images_thflame_3124_0_0[6];
static Direction direction_thflame_3124_0_0 = {0, 16, 16, 0, -1, images_thflame_3124_0_0, 6};
static Animation anim_thflame_3124_0 = {&direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, NULL, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0, &direction_thflame_3124_0_0};
static Animation * anim_array_thflame_3124[1] = {&anim_thflame_3124_0};
static Animations anim_thflame_3124 = {1, &anim_array_thflame_3124[0]};
static bool anim_thflame_3124_initialized;
class THFlame_3124 : public Active
{
public:
    THFlame_3124(int x, int y) : Active(x, y, THFlame_3124_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TH_Flame", 8);
#endif
        this->animations = &anim_thflame_3124;
        if (!anim_thflame_3124_initialized) {
            anim_thflame_3124_initialized = true;
            images_thflame_3124_0_0[0] = get_internal_image(3322);
            images_thflame_3124_0_0[1] = get_internal_image(3284);
            images_thflame_3124_0_0[2] = get_internal_image(3286);
            images_thflame_3124_0_0[3] = get_internal_image(3285);
            images_thflame_3124_0_0[4] = get_internal_image(3283);
            images_thflame_3124_0_0[5] = get_internal_image(3287);
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
FrameObject * create_thflame_3124(int x, int y)
{
    return new (Active::pool.create()) THFlame_3124(x, y);
}
class THBack2_3125 : public Backdrop
{
public:
    THBack2_3125(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Back 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13050);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thback2_3125(int x, int y)
{
    return new (Backdrop::pool.create()) THBack2_3125(x, y);
}
class THBack1_3126 : public Backdrop
{
public:
    THBack1_3126(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Back 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13049);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thback1_3126(int x, int y)
{
    return new (Backdrop::pool.create()) THBack1_3126(x, y);
}
class THBack3_3127 : public Backdrop
{
public:
    THBack3_3127(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Back 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1149);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thback3_3127(int x, int y)
{
    return new (Backdrop::pool.create()) THBack3_3127(x, y);
}
class THBack4_3128 : public Backdrop
{
public:
    THBack4_3128(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Back 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1160);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thback4_3128(int x, int y)
{
    return new (Backdrop::pool.create()) THBack4_3128(x, y);
}
class THBackBarrel_3129 : public Backdrop
{
public:
    THBackBarrel_3129(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_BackBarrel", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1352);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbackbarrel_3129(int x, int y)
{
    return new (Backdrop::pool.create()) THBackBarrel_3129(x, y);
}
class RYBlossomTreeHuge1_3130 : public Backdrop
{
public:
    RYBlossomTreeHuge1_3130(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_BlossomTreeHuge 1", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12576);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ryblossomtreehuge1_3130(int x, int y)
{
    return new (Backdrop::pool.create()) RYBlossomTreeHuge1_3130(x, y);
}
class RYBlossomTreeHuge2_3131 : public Backdrop
{
public:
    RYBlossomTreeHuge2_3131(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_BlossomTreeHuge 2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12577);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ryblossomtreehuge2_3131(int x, int y)
{
    return new (Backdrop::pool.create()) RYBlossomTreeHuge2_3131(x, y);
}
class RYBlossomTree3_3132 : public Backdrop
{
public:
    RYBlossomTree3_3132(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_BlossomTree 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11861);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ryblossomtree3_3132(int x, int y)
{
    return new (Backdrop::pool.create()) RYBlossomTree3_3132(x, y);
}
class RYBlossomTree4_3133 : public Backdrop
{
public:
    RYBlossomTree4_3133(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_BlossomTree 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6003);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ryblossomtree4_3133(int x, int y)
{
    return new (Backdrop::pool.create()) RYBlossomTree4_3133(x, y);
}
class THWood2_3134 : public Backdrop
{
public:
    THWood2_3134(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13055);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood2_3134(int x, int y)
{
    return new (Backdrop::pool.create()) THWood2_3134(x, y);
}
class THTire2_3135 : public Backdrop
{
public:
    THTire2_3135(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13038);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thtire2_3135(int x, int y)
{
    return new (Backdrop::pool.create()) THTire2_3135(x, y);
}
class THTire1_3136 : public Backdrop
{
public:
    THTire1_3136(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13080);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thtire1_3136(int x, int y)
{
    return new (Backdrop::pool.create()) THTire1_3136(x, y);
}
class THWood3_3137 : public Backdrop
{
public:
    THWood3_3137(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13052);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood3_3137(int x, int y)
{
    return new (Backdrop::pool.create()) THWood3_3137(x, y);
}
class THTire4_3138 : public Backdrop
{
public:
    THTire4_3138(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1728);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire4_3138(int x, int y)
{
    return new (Backdrop::pool.create()) THTire4_3138(x, y);
}
class THTire5_3139 : public Backdrop
{
public:
    THTire5_3139(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1163);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire5_3139(int x, int y)
{
    return new (Backdrop::pool.create()) THTire5_3139(x, y);
}
class THTire3_3140 : public Backdrop
{
public:
    THTire3_3140(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1161);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire3_3140(int x, int y)
{
    return new (Backdrop::pool.create()) THTire3_3140(x, y);
}
class THRope2_3141 : public Backdrop
{
public:
    THRope2_3141(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Rope 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13065);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thrope2_3141(int x, int y)
{
    return new (Backdrop::pool.create()) THRope2_3141(x, y);
}
class THRope3_3142 : public Backdrop
{
public:
    THRope3_3142(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Rope 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13066);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thrope3_3142(int x, int y)
{
    return new (Backdrop::pool.create()) THRope3_3142(x, y);
}
class THWood6_3143 : public Backdrop
{
public:
    THWood6_3143(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13056);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood6_3143(int x, int y)
{
    return new (Backdrop::pool.create()) THWood6_3143(x, y);
}
class THWood5_3144 : public Backdrop
{
public:
    THWood5_3144(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13054);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood5_3144(int x, int y)
{
    return new (Backdrop::pool.create()) THWood5_3144(x, y);
}
class THWood4_3145 : public Backdrop
{
public:
    THWood4_3145(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13053);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood4_3145(int x, int y)
{
    return new (Backdrop::pool.create()) THWood4_3145(x, y);
}
class THStone10_3146 : public Backdrop
{
public:
    THStone10_3146(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1801);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone10_3146(int x, int y)
{
    return new (Backdrop::pool.create()) THStone10_3146(x, y);
}
class THRope1_3147 : public Backdrop
{
public:
    THRope1_3147(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Rope 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13064);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thrope1_3147(int x, int y)
{
    return new (Backdrop::pool.create()) THRope1_3147(x, y);
}
class THHandlebar_3148 : public Backdrop
{
public:
    THHandlebar_3148(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5110);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thhandlebar_3148(int x, int y)
{
    return new (Backdrop::pool.create()) THHandlebar_3148(x, y);
}
static Image* images_enemymetalpup_3149_0_0[1];
static Direction direction_enemymetalpup_3149_0_0 = {0, 50, 50, 0, 1, images_enemymetalpup_3149_0_0, 1};
static Image* images_enemymetalpup_3149_0_16[1];
static Direction direction_enemymetalpup_3149_0_16 = {16, 50, 50, 0, 1, images_enemymetalpup_3149_0_16, 1};
static Animation anim_enemymetalpup_3149_0 = {&direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, NULL, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, &direction_enemymetalpup_3149_0_16, NULL, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0, &direction_enemymetalpup_3149_0_0};
static Image* images_enemymetalpup_3149_1_0[10];
static Direction direction_enemymetalpup_3149_1_0 = {0, 30, 30, 0, -1, images_enemymetalpup_3149_1_0, 10};
static Image* images_enemymetalpup_3149_1_16[10];
static Direction direction_enemymetalpup_3149_1_16 = {16, 30, 30, 0, -1, images_enemymetalpup_3149_1_16, 10};
static Animation anim_enemymetalpup_3149_1 = {&direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, NULL, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, &direction_enemymetalpup_3149_1_16, NULL, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0, &direction_enemymetalpup_3149_1_0};
static Image* images_enemymetalpup_3149_7_0[5];
static Direction direction_enemymetalpup_3149_7_0 = {0, 25, 25, 0, 3, images_enemymetalpup_3149_7_0, 5};
static Image* images_enemymetalpup_3149_7_8[1];
static Direction direction_enemymetalpup_3149_7_8 = {8, 50, 50, 0, 1, images_enemymetalpup_3149_7_8, 1};
static Image* images_enemymetalpup_3149_7_16[5];
static Direction direction_enemymetalpup_3149_7_16 = {16, 25, 25, 0, 3, images_enemymetalpup_3149_7_16, 5};
static Animation anim_enemymetalpup_3149_7 = {&direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, NULL, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, &direction_enemymetalpup_3149_7_8, NULL, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, &direction_enemymetalpup_3149_7_16, NULL, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0, &direction_enemymetalpup_3149_7_0};
static Image* images_enemymetalpup_3149_8_0[1];
static Direction direction_enemymetalpup_3149_8_0 = {0, 50, 50, 0, -1, images_enemymetalpup_3149_8_0, 1};
static Image* images_enemymetalpup_3149_8_16[1];
static Direction direction_enemymetalpup_3149_8_16 = {16, 50, 50, 0, -1, images_enemymetalpup_3149_8_16, 1};
static Animation anim_enemymetalpup_3149_8 = {&direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, NULL, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, &direction_enemymetalpup_3149_8_16, NULL, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0, &direction_enemymetalpup_3149_8_0};
static Image* images_enemymetalpup_3149_10_0[4];
static Direction direction_enemymetalpup_3149_10_0 = {0, 50, 50, 0, 1, images_enemymetalpup_3149_10_0, 4};
static Image* images_enemymetalpup_3149_10_16[4];
static Direction direction_enemymetalpup_3149_10_16 = {16, 50, 50, 0, 1, images_enemymetalpup_3149_10_16, 4};
static Animation anim_enemymetalpup_3149_10 = {&direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, NULL, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, &direction_enemymetalpup_3149_10_16, NULL, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0, &direction_enemymetalpup_3149_10_0};
static Animation * anim_array_enemymetalpup_3149[11] = {&anim_enemymetalpup_3149_0, &anim_enemymetalpup_3149_1, NULL, NULL, NULL, NULL, NULL, &anim_enemymetalpup_3149_7, &anim_enemymetalpup_3149_8, NULL, &anim_enemymetalpup_3149_10};
static Animations anim_enemymetalpup_3149 = {11, &anim_array_enemymetalpup_3149[0]};
static bool anim_enemymetalpup_3149_initialized;
class EnemyMetalPup_3149 : public Active
{
public:
    EnemyMetalPup_3149(int x, int y) : Active(x, y, EnemyMetalPup_3149_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_MetalPup", 14);
#endif
        this->animations = &anim_enemymetalpup_3149;
        if (!anim_enemymetalpup_3149_initialized) {
            anim_enemymetalpup_3149_initialized = true;
            images_enemymetalpup_3149_0_0[0] = get_internal_image(4221);
            images_enemymetalpup_3149_0_16[0] = get_internal_image(3969);
            images_enemymetalpup_3149_1_0[0] = get_internal_image(4221);
            images_enemymetalpup_3149_1_0[1] = get_internal_image(4546);
            images_enemymetalpup_3149_1_0[2] = get_internal_image(4483);
            images_enemymetalpup_3149_1_0[3] = get_internal_image(4546);
            images_enemymetalpup_3149_1_0[4] = get_internal_image(4478);
            images_enemymetalpup_3149_1_0[5] = get_internal_image(4221);
            images_enemymetalpup_3149_1_0[6] = get_internal_image(4650);
            images_enemymetalpup_3149_1_0[7] = get_internal_image(4651);
            images_enemymetalpup_3149_1_0[8] = get_internal_image(4546);
            images_enemymetalpup_3149_1_0[9] = get_internal_image(4478);
            images_enemymetalpup_3149_1_16[0] = get_internal_image(3969);
            images_enemymetalpup_3149_1_16[1] = get_internal_image(4222);
            images_enemymetalpup_3149_1_16[2] = get_internal_image(4845);
            images_enemymetalpup_3149_1_16[3] = get_internal_image(4222);
            images_enemymetalpup_3149_1_16[4] = get_internal_image(5280);
            images_enemymetalpup_3149_1_16[5] = get_internal_image(3969);
            images_enemymetalpup_3149_1_16[6] = get_internal_image(5281);
            images_enemymetalpup_3149_1_16[7] = get_internal_image(5282);
            images_enemymetalpup_3149_1_16[8] = get_internal_image(4222);
            images_enemymetalpup_3149_1_16[9] = get_internal_image(5280);
            images_enemymetalpup_3149_7_0[0] = get_internal_image(5339);
            images_enemymetalpup_3149_7_0[1] = get_internal_image(5338);
            images_enemymetalpup_3149_7_0[2] = get_internal_image(5337);
            images_enemymetalpup_3149_7_0[3] = get_internal_image(5284);
            images_enemymetalpup_3149_7_0[4] = get_internal_image(5291);
            images_enemymetalpup_3149_7_8[0] = get_internal_image(5334);
            images_enemymetalpup_3149_7_16[0] = get_internal_image(5283);
            images_enemymetalpup_3149_7_16[1] = get_internal_image(5355);
            images_enemymetalpup_3149_7_16[2] = get_internal_image(5356);
            images_enemymetalpup_3149_7_16[3] = get_internal_image(5357);
            images_enemymetalpup_3149_7_16[4] = get_internal_image(5358);
            images_enemymetalpup_3149_8_0[0] = get_internal_image(8743);
            images_enemymetalpup_3149_8_16[0] = get_internal_image(8149);
            images_enemymetalpup_3149_10_0[0] = get_internal_image(4221);
            images_enemymetalpup_3149_10_0[1] = get_internal_image(5360);
            images_enemymetalpup_3149_10_0[2] = get_internal_image(5359);
            images_enemymetalpup_3149_10_0[3] = get_internal_image(3969);
            images_enemymetalpup_3149_10_16[0] = get_internal_image(3969);
            images_enemymetalpup_3149_10_16[1] = get_internal_image(5444);
            images_enemymetalpup_3149_10_16[2] = get_internal_image(6543);
            images_enemymetalpup_3149_10_16[3] = get_internal_image(4221);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(4, -1);
    }
};
FrameObject * create_enemymetalpup_3149(int x, int y)
{
    return new (Active::pool.create()) EnemyMetalPup_3149(x, y);
}
static Image* images_enemyshockpuppet_3150_0_0[7];
static Direction direction_enemyshockpuppet_3150_0_0 = {0, 15, 15, 1, -1, images_enemyshockpuppet_3150_0_0, 7};
static Animation anim_enemyshockpuppet_3150_0 = {&direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, NULL, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0, &direction_enemyshockpuppet_3150_0_0};
static Image* images_enemyshockpuppet_3150_7_0[8];
static Direction direction_enemyshockpuppet_3150_7_0 = {0, 25, 25, 0, 1, images_enemyshockpuppet_3150_7_0, 8};
static Animation anim_enemyshockpuppet_3150_7 = {&direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, NULL, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0, &direction_enemyshockpuppet_3150_7_0};
static Image* images_enemyshockpuppet_3150_8_0[8];
static Direction direction_enemyshockpuppet_3150_8_0 = {0, 50, 50, 4, -1, images_enemyshockpuppet_3150_8_0, 8};
static Animation anim_enemyshockpuppet_3150_8 = {&direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, NULL, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0, &direction_enemyshockpuppet_3150_8_0};
static Image* images_enemyshockpuppet_3150_10_0[1];
static Direction direction_enemyshockpuppet_3150_10_0 = {0, 50, 50, 0, -1, images_enemyshockpuppet_3150_10_0, 1};
static Animation anim_enemyshockpuppet_3150_10 = {&direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, NULL, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0, &direction_enemyshockpuppet_3150_10_0};
static Animation * anim_array_enemyshockpuppet_3150[11] = {&anim_enemyshockpuppet_3150_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyshockpuppet_3150_7, &anim_enemyshockpuppet_3150_8, NULL, &anim_enemyshockpuppet_3150_10};
static Animations anim_enemyshockpuppet_3150 = {11, &anim_array_enemyshockpuppet_3150[0]};
static bool anim_enemyshockpuppet_3150_initialized;
class EnemyShockPuppet_3150 : public Active
{
public:
    EnemyShockPuppet_3150(int x, int y) : Active(x, y, EnemyShockPuppet_3150_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_ShockPuppet", 17);
#endif
        this->animations = &anim_enemyshockpuppet_3150;
        if (!anim_enemyshockpuppet_3150_initialized) {
            anim_enemyshockpuppet_3150_initialized = true;
            images_enemyshockpuppet_3150_0_0[0] = get_internal_image(8014);
            images_enemyshockpuppet_3150_0_0[1] = get_internal_image(7994);
            images_enemyshockpuppet_3150_0_0[2] = get_internal_image(4522);
            images_enemyshockpuppet_3150_0_0[3] = get_internal_image(5324);
            images_enemyshockpuppet_3150_0_0[4] = get_internal_image(5328);
            images_enemyshockpuppet_3150_0_0[5] = get_internal_image(5330);
            images_enemyshockpuppet_3150_0_0[6] = get_internal_image(1351);
            images_enemyshockpuppet_3150_7_0[0] = get_internal_image(1351);
            images_enemyshockpuppet_3150_7_0[1] = get_internal_image(7995);
            images_enemyshockpuppet_3150_7_0[2] = get_internal_image(7993);
            images_enemyshockpuppet_3150_7_0[3] = get_internal_image(8010);
            images_enemyshockpuppet_3150_7_0[4] = get_internal_image(8012);
            images_enemyshockpuppet_3150_7_0[5] = get_internal_image(8010);
            images_enemyshockpuppet_3150_7_0[6] = get_internal_image(8012);
            images_enemyshockpuppet_3150_7_0[7] = get_internal_image(8010);
            images_enemyshockpuppet_3150_8_0[0] = get_internal_image(7993);
            images_enemyshockpuppet_3150_8_0[1] = get_internal_image(7995);
            images_enemyshockpuppet_3150_8_0[2] = get_internal_image(8013);
            images_enemyshockpuppet_3150_8_0[3] = get_internal_image(8011);
            images_enemyshockpuppet_3150_8_0[4] = get_internal_image(8015);
            images_enemyshockpuppet_3150_8_0[5] = get_internal_image(8016);
            images_enemyshockpuppet_3150_8_0[6] = get_internal_image(8019);
            images_enemyshockpuppet_3150_8_0[7] = get_internal_image(8017);
            images_enemyshockpuppet_3150_10_0[0] = get_internal_image(324);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 12);
    }
};
FrameObject * create_enemyshockpuppet_3150(int x, int y)
{
    return new (Active::pool.create()) EnemyShockPuppet_3150(x, y);
}
static Image* images_enemybladeorbiterleft_3151_0_0[2];
static Direction direction_enemybladeorbiterleft_3151_0_0 = {0, 0, 0, 0, 1, images_enemybladeorbiterleft_3151_0_0, 2};
static Animation anim_enemybladeorbiterleft_3151_0 = {&direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, NULL, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0, &direction_enemybladeorbiterleft_3151_0_0};
static Animation * anim_array_enemybladeorbiterleft_3151[1] = {&anim_enemybladeorbiterleft_3151_0};
static Animations anim_enemybladeorbiterleft_3151 = {1, &anim_array_enemybladeorbiterleft_3151[0]};
static bool anim_enemybladeorbiterleft_3151_initialized;
class EnemyBladeOrbiterLeft_3151 : public Active
{
public:
    EnemyBladeOrbiterLeft_3151(int x, int y) : Active(x, y, EnemyBladeOrbiterLeft_3151_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BladeOrbiterLeft", 22);
#endif
        this->animations = &anim_enemybladeorbiterleft_3151;
        if (!anim_enemybladeorbiterleft_3151_initialized) {
            anim_enemybladeorbiterleft_3151_initialized = true;
            images_enemybladeorbiterleft_3151_0_0[0] = get_internal_image(7040);
            images_enemybladeorbiterleft_3151_0_0[1] = get_internal_image(13042);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, -10);
    }
};
FrameObject * create_enemybladeorbiterleft_3151(int x, int y)
{
    return new (Active::pool.create()) EnemyBladeOrbiterLeft_3151(x, y);
}
static Image* images_enemybladeorbiterright_3152_0_0[2];
static Direction direction_enemybladeorbiterright_3152_0_0 = {0, 0, 0, 0, 1, images_enemybladeorbiterright_3152_0_0, 2};
static Animation anim_enemybladeorbiterright_3152_0 = {&direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, NULL, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0, &direction_enemybladeorbiterright_3152_0_0};
static Animation * anim_array_enemybladeorbiterright_3152[1] = {&anim_enemybladeorbiterright_3152_0};
static Animations anim_enemybladeorbiterright_3152 = {1, &anim_array_enemybladeorbiterright_3152[0]};
static bool anim_enemybladeorbiterright_3152_initialized;
class EnemyBladeOrbiterRight_3152 : public Active
{
public:
    EnemyBladeOrbiterRight_3152(int x, int y) : Active(x, y, EnemyBladeOrbiterRight_3152_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BladeOrbiterRight", 23);
#endif
        this->animations = &anim_enemybladeorbiterright_3152;
        if (!anim_enemybladeorbiterright_3152_initialized) {
            anim_enemybladeorbiterright_3152_initialized = true;
            images_enemybladeorbiterright_3152_0_0[0] = get_internal_image(13043);
            images_enemybladeorbiterright_3152_0_0[1] = get_internal_image(13045);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 10);
    }
};
FrameObject * create_enemybladeorbiterright_3152(int x, int y)
{
    return new (Active::pool.create()) EnemyBladeOrbiterRight_3152(x, y);
}
static Image* images_enemybladeorbiter_3153_0_0[1];
static Direction direction_enemybladeorbiter_3153_0_0 = {0, 50, 50, 0, 1, images_enemybladeorbiter_3153_0_0, 1};
static Animation anim_enemybladeorbiter_3153_0 = {&direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, NULL, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0, &direction_enemybladeorbiter_3153_0_0};
static Image* images_enemybladeorbiter_3153_7_0[4];
static Direction direction_enemybladeorbiter_3153_7_0 = {0, 50, 50, 0, 1, images_enemybladeorbiter_3153_7_0, 4};
static Animation anim_enemybladeorbiter_3153_7 = {&direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, NULL, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0, &direction_enemybladeorbiter_3153_7_0};
static Image* images_enemybladeorbiter_3153_8_0[1];
static Direction direction_enemybladeorbiter_3153_8_0 = {0, 50, 50, 0, -1, images_enemybladeorbiter_3153_8_0, 1};
static Animation anim_enemybladeorbiter_3153_8 = {&direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, NULL, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0, &direction_enemybladeorbiter_3153_8_0};
static Animation * anim_array_enemybladeorbiter_3153[9] = {&anim_enemybladeorbiter_3153_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemybladeorbiter_3153_7, &anim_enemybladeorbiter_3153_8};
static Animations anim_enemybladeorbiter_3153 = {9, &anim_array_enemybladeorbiter_3153[0]};
static bool anim_enemybladeorbiter_3153_initialized;
class EnemyBladeOrbiter_3153 : public Active
{
public:
    EnemyBladeOrbiter_3153(int x, int y) : Active(x, y, EnemyBladeOrbiter_3153_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_BladeOrbiter", 18);
#endif
        this->animations = &anim_enemybladeorbiter_3153;
        if (!anim_enemybladeorbiter_3153_initialized) {
            anim_enemybladeorbiter_3153_initialized = true;
            images_enemybladeorbiter_3153_0_0[0] = get_internal_image(13047);
            images_enemybladeorbiter_3153_7_0[0] = get_internal_image(13048);
            images_enemybladeorbiter_3153_7_0[1] = get_internal_image(13048);
            images_enemybladeorbiter_3153_7_0[2] = get_internal_image(13051);
            images_enemybladeorbiter_3153_7_0[3] = get_internal_image(13047);
            images_enemybladeorbiter_3153_8_0[0] = get_internal_image(13057);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_enemybladeorbiter_3153(int x, int y)
{
    return new (Active::pool.create()) EnemyBladeOrbiter_3153(x, y);
}
static Image* images_hazardshuriken_3154_0_0[1];
static Direction direction_hazardshuriken_3154_0_0 = {0, 50, 50, 0, 1, images_hazardshuriken_3154_0_0, 1};
static Animation anim_hazardshuriken_3154_0 = {&direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, NULL, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0, &direction_hazardshuriken_3154_0_0};
static Animation * anim_array_hazardshuriken_3154[1] = {&anim_hazardshuriken_3154_0};
static Animations anim_hazardshuriken_3154 = {1, &anim_array_hazardshuriken_3154[0]};
static bool anim_hazardshuriken_3154_initialized;
class HazardShuriken_3154 : public Active
{
public:
    HazardShuriken_3154(int x, int y) : Active(x, y, HazardShuriken_3154_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Hazard_Shuriken", 15);
#endif
        this->animations = &anim_hazardshuriken_3154;
        if (!anim_hazardshuriken_3154_initialized) {
            anim_hazardshuriken_3154_initialized = true;
            images_hazardshuriken_3154_0_0[0] = get_internal_image(13086);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
    }
};
FrameObject * create_hazardshuriken_3154(int x, int y)
{
    return new (Active::pool.create()) HazardShuriken_3154(x, y);
}
static Image* images_hazardshurikenbase_3155_0_0[1];
static Direction direction_hazardshurikenbase_3155_0_0 = {0, 50, 50, 0, 1, images_hazardshurikenbase_3155_0_0, 1};
static Animation anim_hazardshurikenbase_3155_0 = {&direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, NULL, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0, &direction_hazardshurikenbase_3155_0_0};
static Animation * anim_array_hazardshurikenbase_3155[1] = {&anim_hazardshurikenbase_3155_0};
static Animations anim_hazardshurikenbase_3155 = {1, &anim_array_hazardshurikenbase_3155[0]};
static bool anim_hazardshurikenbase_3155_initialized;
class HazardShurikenBase_3155 : public Active
{
public:
    HazardShurikenBase_3155(int x, int y) : Active(x, y, HazardShurikenBase_3155_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ShurikenBase", 19);
#endif
        this->animations = &anim_hazardshurikenbase_3155;
        if (!anim_hazardshurikenbase_3155_initialized) {
            anim_hazardshurikenbase_3155_initialized = true;
            images_hazardshurikenbase_3155_0_0[0] = get_internal_image(13088);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 4);
    }
};
FrameObject * create_hazardshurikenbase_3155(int x, int y)
{
    return new (Active::pool.create()) HazardShurikenBase_3155(x, y);
}
static Image* images_hazardshurikenturn_3156_0_0[1];
static Direction direction_hazardshurikenturn_3156_0_0 = {0, 50, 50, 0, 1, images_hazardshurikenturn_3156_0_0, 1};
static Animation anim_hazardshurikenturn_3156_0 = {&direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, NULL, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0, &direction_hazardshurikenturn_3156_0_0};
static Animation * anim_array_hazardshurikenturn_3156[1] = {&anim_hazardshurikenturn_3156_0};
static Animations anim_hazardshurikenturn_3156 = {1, &anim_array_hazardshurikenturn_3156[0]};
static bool anim_hazardshurikenturn_3156_initialized;
class HazardShurikenTurn_3156 : public Active
{
public:
    HazardShurikenTurn_3156(int x, int y) : Active(x, y, HazardShurikenTurn_3156_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ShurikenTurn", 19);
#endif
        set_visible(false);
        this->animations = &anim_hazardshurikenturn_3156;
        if (!anim_hazardshurikenturn_3156_initialized) {
            anim_hazardshurikenturn_3156_initialized = true;
            images_hazardshurikenturn_3156_0_0[0] = get_internal_image(13071);
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
FrameObject * create_hazardshurikenturn_3156(int x, int y)
{
    return new (Active::pool.create()) HazardShurikenTurn_3156(x, y);
}
static Image* images_levelhideoutplatform1_3157_0_0[1];
static Direction direction_levelhideoutplatform1_3157_0_0 = {0, 100, 100, 0, 1, images_levelhideoutplatform1_3157_0_0, 1};
static Animation anim_levelhideoutplatform1_3157_0 = {&direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, NULL, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0, &direction_levelhideoutplatform1_3157_0_0};
static Animation * anim_array_levelhideoutplatform1_3157[1] = {&anim_levelhideoutplatform1_3157_0};
static Animations anim_levelhideoutplatform1_3157 = {1, &anim_array_levelhideoutplatform1_3157[0]};
static bool anim_levelhideoutplatform1_3157_initialized;
class LevelHideoutPlatform1_3157 : public Active
{
public:
    LevelHideoutPlatform1_3157(int x, int y) : Active(x, y, LevelHideoutPlatform1_3157_type)
    {
        // qualifiers: 14, 19, 20
#ifndef NDEBUG
        name = std::string("Level_HideoutPlatform 1", 23);
#endif
        this->animations = &anim_levelhideoutplatform1_3157;
        if (!anim_levelhideoutplatform1_3157_initialized) {
            anim_levelhideoutplatform1_3157_initialized = true;
            images_levelhideoutplatform1_3157_0_0[0] = get_internal_image(3112);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 64);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelhideoutplatform1_3157(int x, int y)
{
    return new (Active::pool.create()) LevelHideoutPlatform1_3157(x, y);
}
static Image* images_levelhideoutplatformflame_3158_0_8[3];
static Direction direction_levelhideoutplatformflame_3158_0_8 = {8, 50, 50, 0, -1, images_levelhideoutplatformflame_3158_0_8, 3};
static Animation anim_levelhideoutplatformflame_3158_0 = {&direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, NULL, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8, &direction_levelhideoutplatformflame_3158_0_8};
static Animation * anim_array_levelhideoutplatformflame_3158[1] = {&anim_levelhideoutplatformflame_3158_0};
static Animations anim_levelhideoutplatformflame_3158 = {1, &anim_array_levelhideoutplatformflame_3158[0]};
static bool anim_levelhideoutplatformflame_3158_initialized;
class LevelHideoutPlatformFlame_3158 : public Active
{
public:
    LevelHideoutPlatformFlame_3158(int x, int y) : Active(x, y, LevelHideoutPlatformFlame_3158_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HideoutPlatformFlame", 26);
#endif
        this->animations = &anim_levelhideoutplatformflame_3158;
        if (!anim_levelhideoutplatformflame_3158_initialized) {
            anim_levelhideoutplatformflame_3158_initialized = true;
            images_levelhideoutplatformflame_3158_0_8[0] = get_internal_image(3096);
            images_levelhideoutplatformflame_3158_0_8[1] = get_internal_image(3094);
            images_levelhideoutplatformflame_3158_0_8[2] = get_internal_image(3109);
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
FrameObject * create_levelhideoutplatformflame_3158(int x, int y)
{
    return new (Active::pool.create()) LevelHideoutPlatformFlame_3158(x, y);
}
static Image* images_gimmickbarrel_3159_0_0[1];
static Direction direction_gimmickbarrel_3159_0_0 = {0, 50, 50, 0, 1, images_gimmickbarrel_3159_0_0, 1};
static Animation anim_gimmickbarrel_3159_0 = {&direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, NULL, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0, &direction_gimmickbarrel_3159_0_0};
static Animation * anim_array_gimmickbarrel_3159[1] = {&anim_gimmickbarrel_3159_0};
static Animations anim_gimmickbarrel_3159 = {1, &anim_array_gimmickbarrel_3159[0]};
static bool anim_gimmickbarrel_3159_initialized;
class GimmickBarrel_3159 : public Active
{
public:
    GimmickBarrel_3159(int x, int y) : Active(x, y, GimmickBarrel_3159_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Barrel", 14);
#endif
        this->animations = &anim_gimmickbarrel_3159;
        if (!anim_gimmickbarrel_3159_initialized) {
            anim_gimmickbarrel_3159_initialized = true;
            images_gimmickbarrel_3159_0_0[0] = get_internal_image(1377);
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
FrameObject * create_gimmickbarrel_3159(int x, int y)
{
    return new (Active::pool.create()) GimmickBarrel_3159(x, y);
}
static Image* images_enemyrocketpuncher_3160_0_0[1];
static Direction direction_enemyrocketpuncher_3160_0_0 = {0, 50, 50, 0, 1, images_enemyrocketpuncher_3160_0_0, 1};
static Image* images_enemyrocketpuncher_3160_0_8[1];
static Direction direction_enemyrocketpuncher_3160_0_8 = {8, 50, 50, 0, 1, images_enemyrocketpuncher_3160_0_8, 1};
static Image* images_enemyrocketpuncher_3160_0_16[1];
static Direction direction_enemyrocketpuncher_3160_0_16 = {16, 50, 50, 0, 1, images_enemyrocketpuncher_3160_0_16, 1};
static Animation anim_enemyrocketpuncher_3160_0 = {&direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, NULL, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, &direction_enemyrocketpuncher_3160_0_8, NULL, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, &direction_enemyrocketpuncher_3160_0_16, NULL, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0, &direction_enemyrocketpuncher_3160_0_0};
static Image* images_enemyrocketpuncher_3160_7_0[8];
static Direction direction_enemyrocketpuncher_3160_7_0 = {0, 50, 50, 7, -1, images_enemyrocketpuncher_3160_7_0, 8};
static Image* images_enemyrocketpuncher_3160_7_16[8];
static Direction direction_enemyrocketpuncher_3160_7_16 = {16, 50, 50, 7, -1, images_enemyrocketpuncher_3160_7_16, 8};
static Animation anim_enemyrocketpuncher_3160_7 = {&direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, NULL, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, &direction_enemyrocketpuncher_3160_7_16, NULL, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0, &direction_enemyrocketpuncher_3160_7_0};
static Image* images_enemyrocketpuncher_3160_8_0[8];
static Direction direction_enemyrocketpuncher_3160_8_0 = {0, 50, 50, 7, 1, images_enemyrocketpuncher_3160_8_0, 8};
static Image* images_enemyrocketpuncher_3160_8_16[8];
static Direction direction_enemyrocketpuncher_3160_8_16 = {16, 50, 50, 7, 1, images_enemyrocketpuncher_3160_8_16, 8};
static Animation anim_enemyrocketpuncher_3160_8 = {&direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, NULL, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, &direction_enemyrocketpuncher_3160_8_16, NULL, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0, &direction_enemyrocketpuncher_3160_8_0};
static Image* images_enemyrocketpuncher_3160_10_0[2];
static Direction direction_enemyrocketpuncher_3160_10_0 = {0, 50, 50, 0, -1, images_enemyrocketpuncher_3160_10_0, 2};
static Image* images_enemyrocketpuncher_3160_10_16[2];
static Direction direction_enemyrocketpuncher_3160_10_16 = {16, 50, 50, 0, -1, images_enemyrocketpuncher_3160_10_16, 2};
static Animation anim_enemyrocketpuncher_3160_10 = {&direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, NULL, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, &direction_enemyrocketpuncher_3160_10_16, NULL, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0, &direction_enemyrocketpuncher_3160_10_0};
static Animation * anim_array_enemyrocketpuncher_3160[11] = {&anim_enemyrocketpuncher_3160_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyrocketpuncher_3160_7, &anim_enemyrocketpuncher_3160_8, NULL, &anim_enemyrocketpuncher_3160_10};
static Animations anim_enemyrocketpuncher_3160 = {11, &anim_array_enemyrocketpuncher_3160[0]};
static bool anim_enemyrocketpuncher_3160_initialized;
class EnemyRocketPuncher_3160 : public Active
{
public:
    EnemyRocketPuncher_3160(int x, int y) : Active(x, y, EnemyRocketPuncher_3160_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_RocketPuncher", 19);
#endif
        this->animations = &anim_enemyrocketpuncher_3160;
        if (!anim_enemyrocketpuncher_3160_initialized) {
            anim_enemyrocketpuncher_3160_initialized = true;
            images_enemyrocketpuncher_3160_0_0[0] = get_internal_image(3976);
            images_enemyrocketpuncher_3160_0_8[0] = get_internal_image(3977);
            images_enemyrocketpuncher_3160_0_16[0] = get_internal_image(3978);
            images_enemyrocketpuncher_3160_7_0[0] = get_internal_image(3976);
            images_enemyrocketpuncher_3160_7_0[1] = get_internal_image(3998);
            images_enemyrocketpuncher_3160_7_0[2] = get_internal_image(3976);
            images_enemyrocketpuncher_3160_7_0[3] = get_internal_image(3999);
            images_enemyrocketpuncher_3160_7_0[4] = get_internal_image(4924);
            images_enemyrocketpuncher_3160_7_0[5] = get_internal_image(4926);
            images_enemyrocketpuncher_3160_7_0[6] = get_internal_image(4951);
            images_enemyrocketpuncher_3160_7_0[7] = get_internal_image(4926);
            images_enemyrocketpuncher_3160_7_16[0] = get_internal_image(3978);
            images_enemyrocketpuncher_3160_7_16[1] = get_internal_image(4952);
            images_enemyrocketpuncher_3160_7_16[2] = get_internal_image(3978);
            images_enemyrocketpuncher_3160_7_16[3] = get_internal_image(4954);
            images_enemyrocketpuncher_3160_7_16[4] = get_internal_image(4955);
            images_enemyrocketpuncher_3160_7_16[5] = get_internal_image(5146);
            images_enemyrocketpuncher_3160_7_16[6] = get_internal_image(5152);
            images_enemyrocketpuncher_3160_7_16[7] = get_internal_image(5146);
            images_enemyrocketpuncher_3160_8_0[0] = get_internal_image(4926);
            images_enemyrocketpuncher_3160_8_0[1] = get_internal_image(4951);
            images_enemyrocketpuncher_3160_8_0[2] = get_internal_image(4926);
            images_enemyrocketpuncher_3160_8_0[3] = get_internal_image(4924);
            images_enemyrocketpuncher_3160_8_0[4] = get_internal_image(3999);
            images_enemyrocketpuncher_3160_8_0[5] = get_internal_image(3976);
            images_enemyrocketpuncher_3160_8_0[6] = get_internal_image(3998);
            images_enemyrocketpuncher_3160_8_0[7] = get_internal_image(3976);
            images_enemyrocketpuncher_3160_8_16[0] = get_internal_image(5146);
            images_enemyrocketpuncher_3160_8_16[1] = get_internal_image(5152);
            images_enemyrocketpuncher_3160_8_16[2] = get_internal_image(5146);
            images_enemyrocketpuncher_3160_8_16[3] = get_internal_image(4955);
            images_enemyrocketpuncher_3160_8_16[4] = get_internal_image(4954);
            images_enemyrocketpuncher_3160_8_16[5] = get_internal_image(3978);
            images_enemyrocketpuncher_3160_8_16[6] = get_internal_image(4952);
            images_enemyrocketpuncher_3160_8_16[7] = get_internal_image(3978);
            images_enemyrocketpuncher_3160_10_0[0] = get_internal_image(6631);
            images_enemyrocketpuncher_3160_10_0[1] = get_internal_image(6730);
            images_enemyrocketpuncher_3160_10_16[0] = get_internal_image(6727);
            images_enemyrocketpuncher_3160_10_16[1] = get_internal_image(6735);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 25);
        alterables->values.set(4, -24);
        alterables->values.set(5, 16);
        alterables->values.set(6, 24);
        alterables->values.set(8, 1);
    }
};
FrameObject * create_enemyrocketpuncher_3160(int x, int y)
{
    return new (Active::pool.create()) EnemyRocketPuncher_3160(x, y);
}
static Image* images_enemyrocketpuncherhand_3161_0_0[1];
static Direction direction_enemyrocketpuncherhand_3161_0_0 = {0, 50, 50, 0, 1, images_enemyrocketpuncherhand_3161_0_0, 1};
static Image* images_enemyrocketpuncherhand_3161_0_16[1];
static Direction direction_enemyrocketpuncherhand_3161_0_16 = {16, 50, 50, 0, 1, images_enemyrocketpuncherhand_3161_0_16, 1};
static Animation anim_enemyrocketpuncherhand_3161_0 = {&direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, NULL, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, &direction_enemyrocketpuncherhand_3161_0_16, NULL, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0, &direction_enemyrocketpuncherhand_3161_0_0};
static Image* images_enemyrocketpuncherhand_3161_7_0[4];
static Direction direction_enemyrocketpuncherhand_3161_7_0 = {0, 100, 100, 0, -1, images_enemyrocketpuncherhand_3161_7_0, 4};
static Image* images_enemyrocketpuncherhand_3161_7_8[3];
static Direction direction_enemyrocketpuncherhand_3161_7_8 = {8, 50, 50, 0, -1, images_enemyrocketpuncherhand_3161_7_8, 3};
static Image* images_enemyrocketpuncherhand_3161_7_16[4];
static Direction direction_enemyrocketpuncherhand_3161_7_16 = {16, 100, 100, 0, -1, images_enemyrocketpuncherhand_3161_7_16, 4};
static Animation anim_enemyrocketpuncherhand_3161_7 = {&direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, NULL, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, &direction_enemyrocketpuncherhand_3161_7_8, NULL, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, &direction_enemyrocketpuncherhand_3161_7_16, NULL, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0, &direction_enemyrocketpuncherhand_3161_7_0};
static Image* images_enemyrocketpuncherhand_3161_8_0[1];
static Direction direction_enemyrocketpuncherhand_3161_8_0 = {0, 50, 50, 0, -1, images_enemyrocketpuncherhand_3161_8_0, 1};
static Image* images_enemyrocketpuncherhand_3161_8_16[1];
static Direction direction_enemyrocketpuncherhand_3161_8_16 = {16, 50, 50, 0, -1, images_enemyrocketpuncherhand_3161_8_16, 1};
static Animation anim_enemyrocketpuncherhand_3161_8 = {&direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, NULL, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, &direction_enemyrocketpuncherhand_3161_8_16, NULL, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0, &direction_enemyrocketpuncherhand_3161_8_0};
static Animation * anim_array_enemyrocketpuncherhand_3161[9] = {&anim_enemyrocketpuncherhand_3161_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyrocketpuncherhand_3161_7, &anim_enemyrocketpuncherhand_3161_8};
static Animations anim_enemyrocketpuncherhand_3161 = {9, &anim_array_enemyrocketpuncherhand_3161[0]};
static bool anim_enemyrocketpuncherhand_3161_initialized;
class EnemyRocketPuncherHand_3161 : public Active
{
public:
    EnemyRocketPuncherHand_3161(int x, int y) : Active(x, y, EnemyRocketPuncherHand_3161_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_RocketPuncherHand", 23);
#endif
        this->animations = &anim_enemyrocketpuncherhand_3161;
        if (!anim_enemyrocketpuncherhand_3161_initialized) {
            anim_enemyrocketpuncherhand_3161_initialized = true;
            images_enemyrocketpuncherhand_3161_0_0[0] = get_internal_image(5154);
            images_enemyrocketpuncherhand_3161_0_16[0] = get_internal_image(5156);
            images_enemyrocketpuncherhand_3161_7_0[0] = get_internal_image(5157);
            images_enemyrocketpuncherhand_3161_7_0[1] = get_internal_image(5158);
            images_enemyrocketpuncherhand_3161_7_0[2] = get_internal_image(5191);
            images_enemyrocketpuncherhand_3161_7_0[3] = get_internal_image(5194);
            images_enemyrocketpuncherhand_3161_7_8[0] = get_internal_image(5195);
            images_enemyrocketpuncherhand_3161_7_8[1] = get_internal_image(5196);
            images_enemyrocketpuncherhand_3161_7_8[2] = get_internal_image(5197);
            images_enemyrocketpuncherhand_3161_7_16[0] = get_internal_image(5198);
            images_enemyrocketpuncherhand_3161_7_16[1] = get_internal_image(5199);
            images_enemyrocketpuncherhand_3161_7_16[2] = get_internal_image(5200);
            images_enemyrocketpuncherhand_3161_7_16[3] = get_internal_image(5380);
            images_enemyrocketpuncherhand_3161_8_0[0] = get_internal_image(5442);
            images_enemyrocketpuncherhand_3161_8_16[0] = get_internal_image(5751);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_enemyrocketpuncherhand_3161(int x, int y)
{
    return new (Active::pool.create()) EnemyRocketPuncherHand_3161(x, y);
}
static Image* images_enemyrocketpunchershield_3162_0_0[5];
static Direction direction_enemyrocketpunchershield_3162_0_0 = {0, 0, 0, 0, 1, images_enemyrocketpunchershield_3162_0_0, 5};
static Image* images_enemyrocketpunchershield_3162_0_16[5];
static Direction direction_enemyrocketpunchershield_3162_0_16 = {16, 0, 0, 0, 1, images_enemyrocketpunchershield_3162_0_16, 5};
static Animation anim_enemyrocketpunchershield_3162_0 = {&direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, NULL, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, &direction_enemyrocketpunchershield_3162_0_16, NULL, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0, &direction_enemyrocketpunchershield_3162_0_0};
static Animation * anim_array_enemyrocketpunchershield_3162[1] = {&anim_enemyrocketpunchershield_3162_0};
static Animations anim_enemyrocketpunchershield_3162 = {1, &anim_array_enemyrocketpunchershield_3162[0]};
static bool anim_enemyrocketpunchershield_3162_initialized;
class EnemyRocketPuncherShield_3162 : public Active
{
public:
    EnemyRocketPuncherShield_3162(int x, int y) : Active(x, y, EnemyRocketPuncherShield_3162_type)
    {
        // qualifiers: 14, 97
#ifndef NDEBUG
        name = std::string("Enemy_RocketPuncherShield", 25);
#endif
        this->animations = &anim_enemyrocketpunchershield_3162;
        if (!anim_enemyrocketpunchershield_3162_initialized) {
            anim_enemyrocketpunchershield_3162_initialized = true;
            images_enemyrocketpunchershield_3162_0_0[0] = get_internal_image(5756);
            images_enemyrocketpunchershield_3162_0_0[1] = get_internal_image(5758);
            images_enemyrocketpunchershield_3162_0_0[2] = get_internal_image(5759);
            images_enemyrocketpunchershield_3162_0_0[3] = get_internal_image(5778);
            images_enemyrocketpunchershield_3162_0_0[4] = get_internal_image(6001);
            images_enemyrocketpunchershield_3162_0_16[0] = get_internal_image(6118);
            images_enemyrocketpunchershield_3162_0_16[1] = get_internal_image(6119);
            images_enemyrocketpunchershield_3162_0_16[2] = get_internal_image(6570);
            images_enemyrocketpunchershield_3162_0_16[3] = get_internal_image(6584);
            images_enemyrocketpunchershield_3162_0_16[4] = get_internal_image(6591);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
        alterables->values.set(4, 1);
    }
};
FrameObject * create_enemyrocketpunchershield_3162(int x, int y)
{
    return new (Active::pool.create()) EnemyRocketPuncherShield_3162(x, y);
}
static Image* images_effectrocketpuncherwarning_3163_0_0[3];
static Direction direction_effectrocketpuncherwarning_3163_0_0 = {0, 50, 50, 0, -1, images_effectrocketpuncherwarning_3163_0_0, 3};
static Animation anim_effectrocketpuncherwarning_3163_0 = {&direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, NULL, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0, &direction_effectrocketpuncherwarning_3163_0_0};
static Animation * anim_array_effectrocketpuncherwarning_3163[1] = {&anim_effectrocketpuncherwarning_3163_0};
static Animations anim_effectrocketpuncherwarning_3163 = {1, &anim_array_effectrocketpuncherwarning_3163[0]};
static bool anim_effectrocketpuncherwarning_3163_initialized;
class EffectRocketPuncherWarning_3163 : public Active
{
public:
    EffectRocketPuncherWarning_3163(int x, int y) : Active(x, y, EffectRocketPuncherWarning_3163_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_RocketPuncherWarning", 27);
#endif
        set_visible(false);
        this->animations = &anim_effectrocketpuncherwarning_3163;
        if (!anim_effectrocketpuncherwarning_3163_initialized) {
            anim_effectrocketpuncherwarning_3163_initialized = true;
            images_effectrocketpuncherwarning_3163_0_0[0] = get_internal_image(11988);
            images_effectrocketpuncherwarning_3163_0_0[1] = get_internal_image(11989);
            images_effectrocketpuncherwarning_3163_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectrocketpuncherwarning_3163(int x, int y)
{
    return new (Active::pool.create()) EffectRocketPuncherWarning_3163(x, y);
}
static Image* images_levelthcollapsingplatform_3164_0_0[1];
static Direction direction_levelthcollapsingplatform_3164_0_0 = {0, 50, 50, 0, 1, images_levelthcollapsingplatform_3164_0_0, 1};
static Animation anim_levelthcollapsingplatform_3164_0 = {&direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, NULL, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0, &direction_levelthcollapsingplatform_3164_0_0};
static Animation * anim_array_levelthcollapsingplatform_3164[1] = {&anim_levelthcollapsingplatform_3164_0};
static Animations anim_levelthcollapsingplatform_3164 = {1, &anim_array_levelthcollapsingplatform_3164[0]};
static bool anim_levelthcollapsingplatform_3164_initialized;
class LevelTHCollapsingPlatform_3164 : public Active
{
public:
    LevelTHCollapsingPlatform_3164(int x, int y) : Active(x, y, LevelTHCollapsingPlatform_3164_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_THCollapsingPlatform", 26);
#endif
        this->animations = &anim_levelthcollapsingplatform_3164;
        if (!anim_levelthcollapsingplatform_3164_initialized) {
            anim_levelthcollapsingplatform_3164_initialized = true;
            images_levelthcollapsingplatform_3164_0_0[0] = get_internal_image(4086);
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
FrameObject * create_levelthcollapsingplatform_3164(int x, int y)
{
    return new (Active::pool.create()) LevelTHCollapsingPlatform_3164(x, y);
}
static Image* images_levelthcollapsingplatformpiece_3165_0_0[8];
static Direction direction_levelthcollapsingplatformpiece_3165_0_0 = {0, 0, 0, 0, 1, images_levelthcollapsingplatformpiece_3165_0_0, 8};
static Animation anim_levelthcollapsingplatformpiece_3165_0 = {&direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, NULL, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0, &direction_levelthcollapsingplatformpiece_3165_0_0};
static Animation * anim_array_levelthcollapsingplatformpiece_3165[1] = {&anim_levelthcollapsingplatformpiece_3165_0};
static Animations anim_levelthcollapsingplatformpiece_3165 = {1, &anim_array_levelthcollapsingplatformpiece_3165[0]};
static bool anim_levelthcollapsingplatformpiece_3165_initialized;
class LevelTHCollapsingPlatformPiece_3165 : public Active
{
public:
    LevelTHCollapsingPlatformPiece_3165(int x, int y) : Active(x, y, LevelTHCollapsingPlatformPiece_3165_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_THCollapsingPlatformPiece", 31);
#endif
        this->animations = &anim_levelthcollapsingplatformpiece_3165;
        if (!anim_levelthcollapsingplatformpiece_3165_initialized) {
            anim_levelthcollapsingplatformpiece_3165_initialized = true;
            images_levelthcollapsingplatformpiece_3165_0_0[0] = get_internal_image(1336);
            images_levelthcollapsingplatformpiece_3165_0_0[1] = get_internal_image(8158);
            images_levelthcollapsingplatformpiece_3165_0_0[2] = get_internal_image(8170);
            images_levelthcollapsingplatformpiece_3165_0_0[3] = get_internal_image(8457);
            images_levelthcollapsingplatformpiece_3165_0_0[4] = get_internal_image(12282);
            images_levelthcollapsingplatformpiece_3165_0_0[5] = get_internal_image(13331);
            images_levelthcollapsingplatformpiece_3165_0_0[6] = get_internal_image(13349);
            images_levelthcollapsingplatformpiece_3165_0_0[7] = get_internal_image(13361);
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
FrameObject * create_levelthcollapsingplatformpiece_3165(int x, int y)
{
    return new (Active::pool.create()) LevelTHCollapsingPlatformPiece_3165(x, y);
}
class LevelParallaxPiece1_3166 : public SystemBox
{
public:
    LevelParallaxPiece1_3166(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3166_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(5979);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3166(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3166(x, y);
}
class LevelParallaxPiece0_3167 : public SystemBox
{
public:
    LevelParallaxPiece0_3167(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3167_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 100;
        height = 1000;
        type = PATTERN_IMAGE;
        image = get_internal_image(13082);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3167(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3167(x, y);
}
static Image* images_enemybikeninjadefeated_3168_0_0[1];
static Direction direction_enemybikeninjadefeated_3168_0_0 = {0, 50, 50, 0, -1, images_enemybikeninjadefeated_3168_0_0, 1};
static Image* images_enemybikeninjadefeated_3168_0_16[1];
static Direction direction_enemybikeninjadefeated_3168_0_16 = {16, 50, 50, 0, 1, images_enemybikeninjadefeated_3168_0_16, 1};
static Animation anim_enemybikeninjadefeated_3168_0 = {&direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, NULL, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, &direction_enemybikeninjadefeated_3168_0_16, NULL, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0, &direction_enemybikeninjadefeated_3168_0_0};
static Animation * anim_array_enemybikeninjadefeated_3168[1] = {&anim_enemybikeninjadefeated_3168_0};
static Animations anim_enemybikeninjadefeated_3168 = {1, &anim_array_enemybikeninjadefeated_3168[0]};
static bool anim_enemybikeninjadefeated_3168_initialized;
class EnemyBikeNinjaDefeated_3168 : public Active
{
public:
    EnemyBikeNinjaDefeated_3168(int x, int y) : Active(x, y, EnemyBikeNinjaDefeated_3168_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BikeNinjaDefeated", 23);
#endif
        this->animations = &anim_enemybikeninjadefeated_3168;
        if (!anim_enemybikeninjadefeated_3168_initialized) {
            anim_enemybikeninjadefeated_3168_initialized = true;
            images_enemybikeninjadefeated_3168_0_0[0] = get_internal_image(11103);
            images_enemybikeninjadefeated_3168_0_16[0] = get_internal_image(11104);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_enemybikeninjadefeated_3168(int x, int y)
{
    return new (Active::pool.create()) EnemyBikeNinjaDefeated_3168(x, y);
}
static Image* images_thspotlight_3169_0_0[2];
static Direction direction_thspotlight_3169_0_0 = {0, 25, 25, 0, -1, images_thspotlight_3169_0_0, 2};
static Animation anim_thspotlight_3169_0 = {&direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, NULL, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0, &direction_thspotlight_3169_0_0};
static Animation * anim_array_thspotlight_3169[1] = {&anim_thspotlight_3169_0};
static Animations anim_thspotlight_3169 = {1, &anim_array_thspotlight_3169[0]};
static bool anim_thspotlight_3169_initialized;
class THSpotlight_3169 : public Active
{
public:
    THSpotlight_3169(int x, int y) : Active(x, y, THSpotlight_3169_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TH_Spotlight", 12);
#endif
        set_visible(false);
        this->animations = &anim_thspotlight_3169;
        if (!anim_thspotlight_3169_initialized) {
            anim_thspotlight_3169_initialized = true;
            images_thspotlight_3169_0_0[0] = get_internal_image(6107);
            images_thspotlight_3169_0_0[1] = get_internal_image(2720);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_thspotlight_3169(int x, int y)
{
    return new (Active::pool.create()) THSpotlight_3169(x, y);
}
static Image* images_effectbikeninjawarning_3170_0_0[3];
static Direction direction_effectbikeninjawarning_3170_0_0 = {0, 50, 50, 0, -1, images_effectbikeninjawarning_3170_0_0, 3};
static Animation anim_effectbikeninjawarning_3170_0 = {&direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, NULL, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0, &direction_effectbikeninjawarning_3170_0_0};
static Animation * anim_array_effectbikeninjawarning_3170[1] = {&anim_effectbikeninjawarning_3170_0};
static Animations anim_effectbikeninjawarning_3170 = {1, &anim_array_effectbikeninjawarning_3170[0]};
static bool anim_effectbikeninjawarning_3170_initialized;
class EffectBikeNinjaWarning_3170 : public Active
{
public:
    EffectBikeNinjaWarning_3170(int x, int y) : Active(x, y, EffectBikeNinjaWarning_3170_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_BikeNinjaWarning", 23);
#endif
        set_visible(false);
        this->animations = &anim_effectbikeninjawarning_3170;
        if (!anim_effectbikeninjawarning_3170_initialized) {
            anim_effectbikeninjawarning_3170_initialized = true;
            images_effectbikeninjawarning_3170_0_0[0] = get_internal_image(11988);
            images_effectbikeninjawarning_3170_0_0[1] = get_internal_image(11989);
            images_effectbikeninjawarning_3170_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectbikeninjawarning_3170(int x, int y)
{
    return new (Active::pool.create()) EffectBikeNinjaWarning_3170(x, y);
}
static Image* images_enemybikeninjamask_3171_0_0[1];
static Direction direction_enemybikeninjamask_3171_0_0 = {0, 50, 50, 0, 1, images_enemybikeninjamask_3171_0_0, 1};
static Image* images_enemybikeninjamask_3171_0_1[1];
static Direction direction_enemybikeninjamask_3171_0_1 = {1, 50, 50, 0, 1, images_enemybikeninjamask_3171_0_1, 1};
static Image* images_enemybikeninjamask_3171_0_2[1];
static Direction direction_enemybikeninjamask_3171_0_2 = {2, 50, 50, 0, 1, images_enemybikeninjamask_3171_0_2, 1};
static Image* images_enemybikeninjamask_3171_0_3[1];
static Direction direction_enemybikeninjamask_3171_0_3 = {3, 50, 50, 0, 1, images_enemybikeninjamask_3171_0_3, 1};
static Image* images_enemybikeninjamask_3171_0_4[1];
static Direction direction_enemybikeninjamask_3171_0_4 = {4, 50, 50, 0, 1, images_enemybikeninjamask_3171_0_4, 1};
static Animation anim_enemybikeninjamask_3171_0 = {&direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_1, &direction_enemybikeninjamask_3171_0_2, &direction_enemybikeninjamask_3171_0_3, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, &direction_enemybikeninjamask_3171_0_4, NULL, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0, &direction_enemybikeninjamask_3171_0_0};
static Image* images_enemybikeninjamask_3171_10_0[1];
static Direction direction_enemybikeninjamask_3171_10_0 = {0, 50, 50, 0, -1, images_enemybikeninjamask_3171_10_0, 1};
static Image* images_enemybikeninjamask_3171_10_1[1];
static Direction direction_enemybikeninjamask_3171_10_1 = {1, 50, 50, 0, -1, images_enemybikeninjamask_3171_10_1, 1};
static Image* images_enemybikeninjamask_3171_10_2[1];
static Direction direction_enemybikeninjamask_3171_10_2 = {2, 50, 50, 0, -1, images_enemybikeninjamask_3171_10_2, 1};
static Image* images_enemybikeninjamask_3171_10_3[1];
static Direction direction_enemybikeninjamask_3171_10_3 = {3, 50, 50, 0, -1, images_enemybikeninjamask_3171_10_3, 1};
static Image* images_enemybikeninjamask_3171_10_4[1];
static Direction direction_enemybikeninjamask_3171_10_4 = {4, 50, 50, 0, -1, images_enemybikeninjamask_3171_10_4, 1};
static Animation anim_enemybikeninjamask_3171_10 = {&direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_1, &direction_enemybikeninjamask_3171_10_2, &direction_enemybikeninjamask_3171_10_3, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, &direction_enemybikeninjamask_3171_10_4, NULL, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0, &direction_enemybikeninjamask_3171_10_0};
static Animation * anim_array_enemybikeninjamask_3171[11] = {&anim_enemybikeninjamask_3171_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemybikeninjamask_3171_10};
static Animations anim_enemybikeninjamask_3171 = {11, &anim_array_enemybikeninjamask_3171[0]};
static bool anim_enemybikeninjamask_3171_initialized;
class EnemyBikeNinjaMask_3171 : public Active
{
public:
    EnemyBikeNinjaMask_3171(int x, int y) : Active(x, y, EnemyBikeNinjaMask_3171_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_BikeNinjaMask", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemybikeninjamask_3171;
        if (!anim_enemybikeninjamask_3171_initialized) {
            anim_enemybikeninjamask_3171_initialized = true;
            images_enemybikeninjamask_3171_0_0[0] = get_internal_image(7849);
            images_enemybikeninjamask_3171_0_1[0] = get_internal_image(7851);
            images_enemybikeninjamask_3171_0_2[0] = get_internal_image(11100);
            images_enemybikeninjamask_3171_0_3[0] = get_internal_image(11101);
            images_enemybikeninjamask_3171_0_4[0] = get_internal_image(8620);
            images_enemybikeninjamask_3171_10_0[0] = get_internal_image(4091);
            images_enemybikeninjamask_3171_10_1[0] = get_internal_image(4407);
            images_enemybikeninjamask_3171_10_2[0] = get_internal_image(4408);
            images_enemybikeninjamask_3171_10_3[0] = get_internal_image(4409);
            images_enemybikeninjamask_3171_10_4[0] = get_internal_image(4411);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
        alterables->values.set(3, -1);
        alterables->values.set(4, 1);
        alterables->values.set(18, 4);
        alterables->values.set(20, -4);
    }
};
FrameObject * create_enemybikeninjamask_3171(int x, int y)
{
    return new (Active::pool.create()) EnemyBikeNinjaMask_3171(x, y);
}
static Image* images_enemybikeninja_3172_0_0[4];
static Direction direction_enemybikeninja_3172_0_0 = {0, 70, 70, 0, -1, images_enemybikeninja_3172_0_0, 4};
static Image* images_enemybikeninja_3172_0_8[8];
static Direction direction_enemybikeninja_3172_0_8 = {8, 70, 70, 0, -1, images_enemybikeninja_3172_0_8, 8};
static Image* images_enemybikeninja_3172_0_16[4];
static Direction direction_enemybikeninja_3172_0_16 = {16, 70, 70, 0, -1, images_enemybikeninja_3172_0_16, 4};
static Animation anim_enemybikeninja_3172_0 = {&direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, NULL, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, &direction_enemybikeninja_3172_0_8, NULL, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, &direction_enemybikeninja_3172_0_16, NULL, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0, &direction_enemybikeninja_3172_0_0};
static Image* images_enemybikeninja_3172_5_0[4];
static Direction direction_enemybikeninja_3172_5_0 = {0, 70, 70, 0, -1, images_enemybikeninja_3172_5_0, 4};
static Image* images_enemybikeninja_3172_5_16[4];
static Direction direction_enemybikeninja_3172_5_16 = {16, 70, 70, 0, -1, images_enemybikeninja_3172_5_16, 4};
static Animation anim_enemybikeninja_3172_5 = {&direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, NULL, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, &direction_enemybikeninja_3172_5_16, NULL, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0, &direction_enemybikeninja_3172_5_0};
static Image* images_enemybikeninja_3172_7_0[2];
static Direction direction_enemybikeninja_3172_7_0 = {0, 70, 70, 0, -1, images_enemybikeninja_3172_7_0, 2};
static Image* images_enemybikeninja_3172_7_16[2];
static Direction direction_enemybikeninja_3172_7_16 = {16, 70, 70, 0, -1, images_enemybikeninja_3172_7_16, 2};
static Animation anim_enemybikeninja_3172_7 = {&direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, NULL, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, &direction_enemybikeninja_3172_7_16, NULL, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0, &direction_enemybikeninja_3172_7_0};
static Image* images_enemybikeninja_3172_9_0[6];
static Direction direction_enemybikeninja_3172_9_0 = {0, 25, 25, 0, 1, images_enemybikeninja_3172_9_0, 6};
static Image* images_enemybikeninja_3172_9_16[6];
static Direction direction_enemybikeninja_3172_9_16 = {16, 25, 25, 0, 1, images_enemybikeninja_3172_9_16, 6};
static Animation anim_enemybikeninja_3172_9 = {&direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, NULL, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, &direction_enemybikeninja_3172_9_16, NULL, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0, &direction_enemybikeninja_3172_9_0};
static Image* images_enemybikeninja_3172_10_0[8];
static Direction direction_enemybikeninja_3172_10_0 = {0, 50, 50, 0, -1, images_enemybikeninja_3172_10_0, 8};
static Image* images_enemybikeninja_3172_10_8[4];
static Direction direction_enemybikeninja_3172_10_8 = {8, 50, 50, 0, 1, images_enemybikeninja_3172_10_8, 4};
static Image* images_enemybikeninja_3172_10_16[8];
static Direction direction_enemybikeninja_3172_10_16 = {16, 50, 50, 0, -1, images_enemybikeninja_3172_10_16, 8};
static Animation anim_enemybikeninja_3172_10 = {&direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, NULL, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, &direction_enemybikeninja_3172_10_8, NULL, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, &direction_enemybikeninja_3172_10_16, NULL, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0, &direction_enemybikeninja_3172_10_0};
static Image* images_enemybikeninja_3172_11_0[8];
static Direction direction_enemybikeninja_3172_11_0 = {0, 25, 25, 0, 1, images_enemybikeninja_3172_11_0, 8};
static Image* images_enemybikeninja_3172_11_16[8];
static Direction direction_enemybikeninja_3172_11_16 = {16, 25, 25, 0, 1, images_enemybikeninja_3172_11_16, 8};
static Animation anim_enemybikeninja_3172_11 = {&direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, NULL, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, &direction_enemybikeninja_3172_11_16, NULL, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0, &direction_enemybikeninja_3172_11_0};
static Animation * anim_array_enemybikeninja_3172[12] = {&anim_enemybikeninja_3172_0, NULL, NULL, NULL, NULL, &anim_enemybikeninja_3172_5, NULL, &anim_enemybikeninja_3172_7, NULL, &anim_enemybikeninja_3172_9, &anim_enemybikeninja_3172_10, &anim_enemybikeninja_3172_11};
static Animations anim_enemybikeninja_3172 = {12, &anim_array_enemybikeninja_3172[0]};
static bool anim_enemybikeninja_3172_initialized;
class EnemyBikeNinja_3172 : public Active
{
public:
    EnemyBikeNinja_3172(int x, int y) : Active(x, y, EnemyBikeNinja_3172_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BikeNinja", 15);
#endif
        this->animations = &anim_enemybikeninja_3172;
        if (!anim_enemybikeninja_3172_initialized) {
            anim_enemybikeninja_3172_initialized = true;
            images_enemybikeninja_3172_0_0[0] = get_internal_image(7009);
            images_enemybikeninja_3172_0_0[1] = get_internal_image(11088);
            images_enemybikeninja_3172_0_0[2] = get_internal_image(7013);
            images_enemybikeninja_3172_0_0[3] = get_internal_image(11088);
            images_enemybikeninja_3172_0_8[0] = get_internal_image(7005);
            images_enemybikeninja_3172_0_8[1] = get_internal_image(6997);
            images_enemybikeninja_3172_0_8[2] = get_internal_image(7590);
            images_enemybikeninja_3172_0_8[3] = get_internal_image(7593);
            images_enemybikeninja_3172_0_8[4] = get_internal_image(7010);
            images_enemybikeninja_3172_0_8[5] = get_internal_image(7008);
            images_enemybikeninja_3172_0_8[6] = get_internal_image(7657);
            images_enemybikeninja_3172_0_8[7] = get_internal_image(11099);
            images_enemybikeninja_3172_0_16[0] = get_internal_image(7011);
            images_enemybikeninja_3172_0_16[1] = get_internal_image(11087);
            images_enemybikeninja_3172_0_16[2] = get_internal_image(7540);
            images_enemybikeninja_3172_0_16[3] = get_internal_image(11087);
            images_enemybikeninja_3172_5_0[0] = get_internal_image(11084);
            images_enemybikeninja_3172_5_0[1] = get_internal_image(11089);
            images_enemybikeninja_3172_5_0[2] = get_internal_image(11085);
            images_enemybikeninja_3172_5_0[3] = get_internal_image(11089);
            images_enemybikeninja_3172_5_16[0] = get_internal_image(11091);
            images_enemybikeninja_3172_5_16[1] = get_internal_image(11096);
            images_enemybikeninja_3172_5_16[2] = get_internal_image(11097);
            images_enemybikeninja_3172_5_16[3] = get_internal_image(11096);
            images_enemybikeninja_3172_7_0[0] = get_internal_image(7637);
            images_enemybikeninja_3172_7_0[1] = get_internal_image(7670);
            images_enemybikeninja_3172_7_16[0] = get_internal_image(7671);
            images_enemybikeninja_3172_7_16[1] = get_internal_image(7676);
            images_enemybikeninja_3172_9_0[0] = get_internal_image(14632);
            images_enemybikeninja_3172_9_0[1] = get_internal_image(14632);
            images_enemybikeninja_3172_9_0[2] = get_internal_image(14645);
            images_enemybikeninja_3172_9_0[3] = get_internal_image(13606);
            images_enemybikeninja_3172_9_0[4] = get_internal_image(14631);
            images_enemybikeninja_3172_9_0[5] = get_internal_image(14631);
            images_enemybikeninja_3172_9_16[0] = get_internal_image(14644);
            images_enemybikeninja_3172_9_16[1] = get_internal_image(14644);
            images_enemybikeninja_3172_9_16[2] = get_internal_image(14646);
            images_enemybikeninja_3172_9_16[3] = get_internal_image(14648);
            images_enemybikeninja_3172_9_16[4] = get_internal_image(14649);
            images_enemybikeninja_3172_9_16[5] = get_internal_image(14649);
            images_enemybikeninja_3172_10_0[0] = get_internal_image(6002);
            images_enemybikeninja_3172_10_0[1] = get_internal_image(4860);
            images_enemybikeninja_3172_10_0[2] = get_internal_image(4891);
            images_enemybikeninja_3172_10_0[3] = get_internal_image(6478);
            images_enemybikeninja_3172_10_0[4] = get_internal_image(6004);
            images_enemybikeninja_3172_10_0[5] = get_internal_image(6477);
            images_enemybikeninja_3172_10_0[6] = get_internal_image(13612);
            images_enemybikeninja_3172_10_0[7] = get_internal_image(11296);
            images_enemybikeninja_3172_10_8[0] = get_internal_image(5204);
            images_enemybikeninja_3172_10_8[1] = get_internal_image(7590);
            images_enemybikeninja_3172_10_8[2] = get_internal_image(6262);
            images_enemybikeninja_3172_10_8[3] = get_internal_image(11665);
            images_enemybikeninja_3172_10_16[0] = get_internal_image(4903);
            images_enemybikeninja_3172_10_16[1] = get_internal_image(6544);
            images_enemybikeninja_3172_10_16[2] = get_internal_image(11299);
            images_enemybikeninja_3172_10_16[3] = get_internal_image(11300);
            images_enemybikeninja_3172_10_16[4] = get_internal_image(11302);
            images_enemybikeninja_3172_10_16[5] = get_internal_image(14627);
            images_enemybikeninja_3172_10_16[6] = get_internal_image(14628);
            images_enemybikeninja_3172_10_16[7] = get_internal_image(14629);
            images_enemybikeninja_3172_11_0[0] = get_internal_image(13072);
            images_enemybikeninja_3172_11_0[1] = get_internal_image(13072);
            images_enemybikeninja_3172_11_0[2] = get_internal_image(13072);
            images_enemybikeninja_3172_11_0[3] = get_internal_image(13073);
            images_enemybikeninja_3172_11_0[4] = get_internal_image(13074);
            images_enemybikeninja_3172_11_0[5] = get_internal_image(13075);
            images_enemybikeninja_3172_11_0[6] = get_internal_image(13075);
            images_enemybikeninja_3172_11_0[7] = get_internal_image(13075);
            images_enemybikeninja_3172_11_16[0] = get_internal_image(13076);
            images_enemybikeninja_3172_11_16[1] = get_internal_image(13076);
            images_enemybikeninja_3172_11_16[2] = get_internal_image(13076);
            images_enemybikeninja_3172_11_16[3] = get_internal_image(13077);
            images_enemybikeninja_3172_11_16[4] = get_internal_image(13078);
            images_enemybikeninja_3172_11_16[5] = get_internal_image(13079);
            images_enemybikeninja_3172_11_16[6] = get_internal_image(13079);
            images_enemybikeninja_3172_11_16[7] = get_internal_image(13079);
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
FrameObject * create_enemybikeninja_3172(int x, int y)
{
    return new (Active::pool.create()) EnemyBikeNinja_3172(x, y);
}
static Image* images_enemyninjastar_3173_0_0[1];
static Direction direction_enemyninjastar_3173_0_0 = {0, 25, 25, 0, -1, images_enemyninjastar_3173_0_0, 1};
static Image* images_enemyninjastar_3173_0_1[2];
static Direction direction_enemyninjastar_3173_0_1 = {1, 50, 50, 0, -1, images_enemyninjastar_3173_0_1, 2};
static Animation anim_enemyninjastar_3173_0 = {&direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_1, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0, &direction_enemyninjastar_3173_0_0};
static Animation * anim_array_enemyninjastar_3173[1] = {&anim_enemyninjastar_3173_0};
static Animations anim_enemyninjastar_3173 = {1, &anim_array_enemyninjastar_3173[0]};
static bool anim_enemyninjastar_3173_initialized;
class EnemyNinjaStar_3173 : public Active
{
public:
    EnemyNinjaStar_3173(int x, int y) : Active(x, y, EnemyNinjaStar_3173_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_NinjaStar", 15);
#endif
        this->animations = &anim_enemyninjastar_3173;
        if (!anim_enemyninjastar_3173_initialized) {
            anim_enemyninjastar_3173_initialized = true;
            images_enemyninjastar_3173_0_0[0] = get_internal_image(14651);
            images_enemyninjastar_3173_0_1[0] = get_internal_image(11719);
            images_enemyninjastar_3173_0_1[1] = get_internal_image(14650);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 7);
    }
};
FrameObject * create_enemyninjastar_3173(int x, int y)
{
    return new (Active::pool.create()) EnemyNinjaStar_3173(x, y);
}
class LevelParallaxPiece2_3174 : public SystemBox
{
public:
    LevelParallaxPiece2_3174(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3174_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 200;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(2717);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3174(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3174(x, y);
}
class THBleachers1_3175 : public Backdrop
{
public:
    THBleachers1_3175(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13626);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers1_3175(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers1_3175(x, y);
}
class THBleachers4_3176 : public Backdrop
{
public:
    THBleachers4_3176(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4080);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers4_3176(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers4_3176(x, y);
}
class THBleachers3_3177 : public Backdrop
{
public:
    THBleachers3_3177(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13624);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers3_3177(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers3_3177(x, y);
}
class THBleachers2_3178 : public Backdrop
{
public:
    THBleachers2_3178(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13623);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers2_3178(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers2_3178(x, y);
}
class THBleachers5_3179 : public Backdrop
{
public:
    THBleachers5_3179(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5201);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers5_3179(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers5_3179(x, y);
}
class THBleachers6_3180 : public Backdrop
{
public:
    THBleachers6_3180(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Bleachers 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5202);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thbleachers6_3180(int x, int y)
{
    return new (Backdrop::pool.create()) THBleachers6_3180(x, y);
}
static Image* images_thcrowd_3181_0_0[8];
static Direction direction_thcrowd_3181_0_0 = {0, 14, 14, 0, -1, images_thcrowd_3181_0_0, 8};
static Animation anim_thcrowd_3181_0 = {&direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, NULL, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0, &direction_thcrowd_3181_0_0};
static Animation * anim_array_thcrowd_3181[1] = {&anim_thcrowd_3181_0};
static Animations anim_thcrowd_3181 = {1, &anim_array_thcrowd_3181[0]};
static bool anim_thcrowd_3181_initialized;
class THCrowd_3181 : public Active
{
public:
    THCrowd_3181(int x, int y) : Active(x, y, THCrowd_3181_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TH_Crowd", 8);
#endif
        this->animations = &anim_thcrowd_3181;
        if (!anim_thcrowd_3181_initialized) {
            anim_thcrowd_3181_initialized = true;
            images_thcrowd_3181_0_0[0] = get_internal_image(13636);
            images_thcrowd_3181_0_0[1] = get_internal_image(13635);
            images_thcrowd_3181_0_0[2] = get_internal_image(13638);
            images_thcrowd_3181_0_0[3] = get_internal_image(13635);
            images_thcrowd_3181_0_0[4] = get_internal_image(13636);
            images_thcrowd_3181_0_0[5] = get_internal_image(13637);
            images_thcrowd_3181_0_0[6] = get_internal_image(13639);
            images_thcrowd_3181_0_0[7] = get_internal_image(13637);
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
FrameObject * create_thcrowd_3181(int x, int y)
{
    return new (Active::pool.create()) THCrowd_3181(x, y);
}
static Image* images_bosscrystalbashersegment_3182_0_0[2];
static Direction direction_bosscrystalbashersegment_3182_0_0 = {0, 0, 0, 0, 1, images_bosscrystalbashersegment_3182_0_0, 2};
static Animation anim_bosscrystalbashersegment_3182_0 = {&direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, NULL, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0, &direction_bosscrystalbashersegment_3182_0_0};
static Animation * anim_array_bosscrystalbashersegment_3182[1] = {&anim_bosscrystalbashersegment_3182_0};
static Animations anim_bosscrystalbashersegment_3182 = {1, &anim_array_bosscrystalbashersegment_3182[0]};
static bool anim_bosscrystalbashersegment_3182_initialized;
class BossCrystalBasherSegment_3182 : public Active
{
public:
    BossCrystalBasherSegment_3182(int x, int y) : Active(x, y, BossCrystalBasherSegment_3182_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalBasherSegment", 25);
#endif
        this->animations = &anim_bosscrystalbashersegment_3182;
        if (!anim_bosscrystalbashersegment_3182_initialized) {
            anim_bosscrystalbashersegment_3182_initialized = true;
            images_bosscrystalbashersegment_3182_0_0[0] = get_internal_image(7006);
            images_bosscrystalbashersegment_3182_0_0[1] = get_internal_image(6737);
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
FrameObject * create_bosscrystalbashersegment_3182(int x, int y)
{
    return new (Active::pool.create()) BossCrystalBasherSegment_3182(x, y);
}
static Image* images_bosscrystalspike_3183_0_0[2];
static Direction direction_bosscrystalspike_3183_0_0 = {0, 0, 0, 0, 1, images_bosscrystalspike_3183_0_0, 2};
static Animation anim_bosscrystalspike_3183_0 = {&direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, NULL, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0, &direction_bosscrystalspike_3183_0_0};
static Animation * anim_array_bosscrystalspike_3183[1] = {&anim_bosscrystalspike_3183_0};
static Animations anim_bosscrystalspike_3183 = {1, &anim_array_bosscrystalspike_3183[0]};
static bool anim_bosscrystalspike_3183_initialized;
class BossCrystalSpike_3183 : public Active
{
public:
    BossCrystalSpike_3183(int x, int y) : Active(x, y, BossCrystalSpike_3183_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpike", 17);
#endif
        this->animations = &anim_bosscrystalspike_3183;
        if (!anim_bosscrystalspike_3183_initialized) {
            anim_bosscrystalspike_3183_initialized = true;
            images_bosscrystalspike_3183_0_0[0] = get_internal_image(6929);
            images_bosscrystalspike_3183_0_0[1] = get_internal_image(6939);
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
FrameObject * create_bosscrystalspike_3183(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpike_3183(x, y);
}
static Image* images_bosscrystalspike2_3184_0_0[2];
static Direction direction_bosscrystalspike2_3184_0_0 = {0, 0, 0, 0, 1, images_bosscrystalspike2_3184_0_0, 2};
static Animation anim_bosscrystalspike2_3184_0 = {&direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, NULL, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0, &direction_bosscrystalspike2_3184_0_0};
static Animation * anim_array_bosscrystalspike2_3184[1] = {&anim_bosscrystalspike2_3184_0};
static Animations anim_bosscrystalspike2_3184 = {1, &anim_array_bosscrystalspike2_3184[0]};
static bool anim_bosscrystalspike2_3184_initialized;
class BossCrystalSpike2_3184 : public Active
{
public:
    BossCrystalSpike2_3184(int x, int y) : Active(x, y, BossCrystalSpike2_3184_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpike 2", 19);
#endif
        this->animations = &anim_bosscrystalspike2_3184;
        if (!anim_bosscrystalspike2_3184_initialized) {
            anim_bosscrystalspike2_3184_initialized = true;
            images_bosscrystalspike2_3184_0_0[0] = get_internal_image(6980);
            images_bosscrystalspike2_3184_0_0[1] = get_internal_image(6982);
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
FrameObject * create_bosscrystalspike2_3184(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpike2_3184(x, y);
}
static Image* images_bosscrystalbasherhead_3185_0_0[2];
static Direction direction_bosscrystalbasherhead_3185_0_0 = {0, 0, 0, 0, 1, images_bosscrystalbasherhead_3185_0_0, 2};
static Animation anim_bosscrystalbasherhead_3185_0 = {&direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, NULL, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0, &direction_bosscrystalbasherhead_3185_0_0};
static Animation * anim_array_bosscrystalbasherhead_3185[1] = {&anim_bosscrystalbasherhead_3185_0};
static Animations anim_bosscrystalbasherhead_3185 = {1, &anim_array_bosscrystalbasherhead_3185[0]};
static bool anim_bosscrystalbasherhead_3185_initialized;
class BossCrystalBasherHead_3185 : public Active
{
public:
    BossCrystalBasherHead_3185(int x, int y) : Active(x, y, BossCrystalBasherHead_3185_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalBasherHead", 22);
#endif
        this->animations = &anim_bosscrystalbasherhead_3185;
        if (!anim_bosscrystalbasherhead_3185_initialized) {
            anim_bosscrystalbasherhead_3185_initialized = true;
            images_bosscrystalbasherhead_3185_0_0[0] = get_internal_image(1765);
            images_bosscrystalbasherhead_3185_0_0[1] = get_internal_image(3544);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(3, 5);
        alterables->values.set(4, 180);
    }
};
FrameObject * create_bosscrystalbasherhead_3185(int x, int y)
{
    return new (Active::pool.create()) BossCrystalBasherHead_3185(x, y);
}
class THTire9_3186 : public Backdrop
{
public:
    THTire9_3186(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6985);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire9_3186(int x, int y)
{
    return new (Backdrop::pool.create()) THTire9_3186(x, y);
}
class THTire8_3187 : public Backdrop
{
public:
    THTire8_3187(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6984);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire8_3187(int x, int y)
{
    return new (Backdrop::pool.create()) THTire8_3187(x, y);
}
class THTire6_3188 : public Backdrop
{
public:
    THTire6_3188(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6984);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire6_3188(int x, int y)
{
    return new (Backdrop::pool.create()) THTire6_3188(x, y);
}
class THTire7_3189 : public Backdrop
{
public:
    THTire7_3189(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Tire 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6985);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_thtire7_3189(int x, int y)
{
    return new (Backdrop::pool.create()) THTire7_3189(x, y);
}
static Image* images_enemyninja_3190_0_0[1];
static Direction direction_enemyninja_3190_0_0 = {0, 50, 50, 0, 1, images_enemyninja_3190_0_0, 1};
static Image* images_enemyninja_3190_0_8[3];
static Direction direction_enemyninja_3190_0_8 = {8, 50, 50, 0, 1, images_enemyninja_3190_0_8, 3};
static Image* images_enemyninja_3190_0_16[1];
static Direction direction_enemyninja_3190_0_16 = {16, 50, 50, 0, 1, images_enemyninja_3190_0_16, 1};
static Animation anim_enemyninja_3190_0 = {&direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, NULL, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, &direction_enemyninja_3190_0_8, NULL, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, &direction_enemyninja_3190_0_16, NULL, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0, &direction_enemyninja_3190_0_0};
static Image* images_enemyninja_3190_5_0[2];
static Direction direction_enemyninja_3190_5_0 = {0, 1, 10, 0, -1, images_enemyninja_3190_5_0, 2};
static Animation anim_enemyninja_3190_5 = {&direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, NULL, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0, &direction_enemyninja_3190_5_0};
static Image* images_enemyninja_3190_11_0[8];
static Direction direction_enemyninja_3190_11_0 = {0, 25, 25, 0, 1, images_enemyninja_3190_11_0, 8};
static Image* images_enemyninja_3190_11_16[8];
static Direction direction_enemyninja_3190_11_16 = {16, 25, 25, 0, 1, images_enemyninja_3190_11_16, 8};
static Animation anim_enemyninja_3190_11 = {&direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, NULL, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, &direction_enemyninja_3190_11_16, NULL, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0, &direction_enemyninja_3190_11_0};
static Animation * anim_array_enemyninja_3190[12] = {&anim_enemyninja_3190_0, NULL, NULL, NULL, NULL, &anim_enemyninja_3190_5, NULL, NULL, NULL, NULL, NULL, &anim_enemyninja_3190_11};
static Animations anim_enemyninja_3190 = {12, &anim_array_enemyninja_3190[0]};
static bool anim_enemyninja_3190_initialized;
class EnemyNinja_3190 : public Active
{
public:
    EnemyNinja_3190(int x, int y) : Active(x, y, EnemyNinja_3190_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Ninja", 11);
#endif
        set_visible(false);
        this->animations = &anim_enemyninja_3190;
        if (!anim_enemyninja_3190_initialized) {
            anim_enemyninja_3190_initialized = true;
            images_enemyninja_3190_0_0[0] = get_internal_image(13060);
            images_enemyninja_3190_0_8[0] = get_internal_image(13061);
            images_enemyninja_3190_0_8[1] = get_internal_image(13062);
            images_enemyninja_3190_0_8[2] = get_internal_image(13063);
            images_enemyninja_3190_0_16[0] = get_internal_image(13061);
            images_enemyninja_3190_5_0[0] = get_internal_image(6506);
            images_enemyninja_3190_5_0[1] = get_internal_image(3613);
            images_enemyninja_3190_11_0[0] = get_internal_image(13072);
            images_enemyninja_3190_11_0[1] = get_internal_image(13072);
            images_enemyninja_3190_11_0[2] = get_internal_image(13072);
            images_enemyninja_3190_11_0[3] = get_internal_image(13073);
            images_enemyninja_3190_11_0[4] = get_internal_image(13074);
            images_enemyninja_3190_11_0[5] = get_internal_image(13075);
            images_enemyninja_3190_11_0[6] = get_internal_image(13075);
            images_enemyninja_3190_11_0[7] = get_internal_image(13075);
            images_enemyninja_3190_11_16[0] = get_internal_image(13076);
            images_enemyninja_3190_11_16[1] = get_internal_image(13076);
            images_enemyninja_3190_11_16[2] = get_internal_image(13076);
            images_enemyninja_3190_11_16[3] = get_internal_image(13077);
            images_enemyninja_3190_11_16[4] = get_internal_image(13078);
            images_enemyninja_3190_11_16[5] = get_internal_image(13079);
            images_enemyninja_3190_11_16[6] = get_internal_image(13079);
            images_enemyninja_3190_11_16[7] = get_internal_image(13079);
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
FrameObject * create_enemyninja_3190(int x, int y)
{
    return new (Active::pool.create()) EnemyNinja_3190(x, y);
}
static Image* images_bossdoor_3191_0_0[1];
static Direction direction_bossdoor_3191_0_0 = {0, 50, 50, 0, 1, images_bossdoor_3191_0_0, 1};
static Animation anim_bossdoor_3191_0 = {&direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, NULL, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0, &direction_bossdoor_3191_0_0};
static Animation * anim_array_bossdoor_3191[1] = {&anim_bossdoor_3191_0};
static Animations anim_bossdoor_3191 = {1, &anim_array_bossdoor_3191[0]};
static bool anim_bossdoor_3191_initialized;
class BossDoor_3191 : public Active
{
public:
    BossDoor_3191(int x, int y) : Active(x, y, BossDoor_3191_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BossDoor", 8);
#endif
        this->animations = &anim_bossdoor_3191;
        if (!anim_bossdoor_3191_initialized) {
            anim_bossdoor_3191_initialized = true;
            images_bossdoor_3191_0_0[0] = get_internal_image(6983);
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
FrameObject * create_bossdoor_3191(int x, int y)
{
    return new (Active::pool.create()) BossDoor_3191(x, y);
}
static Image* images_bosscrystalbasherface_3192_0_0[1];
static Direction direction_bosscrystalbasherface_3192_0_0 = {0, 50, 50, 0, 1, images_bosscrystalbasherface_3192_0_0, 1};
static Animation anim_bosscrystalbasherface_3192_0 = {&direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, NULL, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0, &direction_bosscrystalbasherface_3192_0_0};
static Image* images_bosscrystalbasherface_3192_8_0[5];
static Direction direction_bosscrystalbasherface_3192_8_0 = {0, 100, 100, 0, -1, images_bosscrystalbasherface_3192_8_0, 5};
static Animation anim_bosscrystalbasherface_3192_8 = {&direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, NULL, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0, &direction_bosscrystalbasherface_3192_8_0};
static Animation * anim_array_bosscrystalbasherface_3192[9] = {&anim_bosscrystalbasherface_3192_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscrystalbasherface_3192_8};
static Animations anim_bosscrystalbasherface_3192 = {9, &anim_array_bosscrystalbasherface_3192[0]};
static bool anim_bosscrystalbasherface_3192_initialized;
class BossCrystalBasherFace_3192 : public Active
{
public:
    BossCrystalBasherFace_3192(int x, int y) : Active(x, y, BossCrystalBasherFace_3192_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_CrystalBasherFace", 22);
#endif
        set_visible(false);
        this->animations = &anim_bosscrystalbasherface_3192;
        if (!anim_bosscrystalbasherface_3192_initialized) {
            anim_bosscrystalbasherface_3192_initialized = true;
            images_bosscrystalbasherface_3192_0_0[0] = get_internal_image(1829);
            images_bosscrystalbasherface_3192_8_0[0] = get_internal_image(6999);
            images_bosscrystalbasherface_3192_8_0[1] = get_internal_image(7001);
            images_bosscrystalbasherface_3192_8_0[2] = get_internal_image(7002);
            images_bosscrystalbasherface_3192_8_0[3] = get_internal_image(7003);
            images_bosscrystalbasherface_3192_8_0[4] = get_internal_image(7004);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 120);
    }
};
FrameObject * create_bosscrystalbasherface_3192(int x, int y)
{
    return new (Active::pool.create()) BossCrystalBasherFace_3192(x, y);
}
static Image* images_bosscrystalbasherbase_3193_0_0[1];
static Direction direction_bosscrystalbasherbase_3193_0_0 = {0, 50, 50, 0, 1, images_bosscrystalbasherbase_3193_0_0, 1};
static Animation anim_bosscrystalbasherbase_3193_0 = {&direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, NULL, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0, &direction_bosscrystalbasherbase_3193_0_0};
static Animation * anim_array_bosscrystalbasherbase_3193[1] = {&anim_bosscrystalbasherbase_3193_0};
static Animations anim_bosscrystalbasherbase_3193 = {1, &anim_array_bosscrystalbasherbase_3193[0]};
static bool anim_bosscrystalbasherbase_3193_initialized;
class BossCrystalBasherBase_3193 : public Active
{
public:
    BossCrystalBasherBase_3193(int x, int y) : Active(x, y, BossCrystalBasherBase_3193_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalBasherBase", 22);
#endif
        this->animations = &anim_bosscrystalbasherbase_3193;
        if (!anim_bosscrystalbasherbase_3193_initialized) {
            anim_bosscrystalbasherbase_3193_initialized = true;
            images_bosscrystalbasherbase_3193_0_0[0] = get_internal_image(7007);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
        alterables->values.set(1, 70);
        alterables->values.set(2, 90);
        alterables->values.set(3, 10);
    }
};
FrameObject * create_bosscrystalbasherbase_3193(int x, int y)
{
    return new (Active::pool.create()) BossCrystalBasherBase_3193(x, y);
}
class GUIEnemiesLeft_3194 : public Counter
{
public:
    GUIEnemiesLeft_3194(int x, int y) : Counter(x, y, GUIEnemiesLeft_3194_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_EnemiesLeft", 15);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(99);
    }
};
FrameObject * create_guienemiesleft_3194(int x, int y)
{
    return new (Counter::pool.create()) GUIEnemiesLeft_3194(x, y);
}
static Image* images_guigoalmessage_3195_0_0[3];
static Direction direction_guigoalmessage_3195_0_0 = {0, 0, 0, 0, 1, images_guigoalmessage_3195_0_0, 3};
static Animation anim_guigoalmessage_3195_0 = {&direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, NULL, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0, &direction_guigoalmessage_3195_0_0};
static Animation * anim_array_guigoalmessage_3195[1] = {&anim_guigoalmessage_3195_0};
static Animations anim_guigoalmessage_3195 = {1, &anim_array_guigoalmessage_3195[0]};
static bool anim_guigoalmessage_3195_initialized;
class GUIGoalMessage_3195 : public Active
{
public:
    GUIGoalMessage_3195(int x, int y) : Active(x, y, GUIGoalMessage_3195_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_GoalMessage", 15);
#endif
        set_visible(false);
        this->animations = &anim_guigoalmessage_3195;
        if (!anim_guigoalmessage_3195_initialized) {
            anim_guigoalmessage_3195_initialized = true;
            images_guigoalmessage_3195_0_0[0] = get_internal_image(11667);
            images_guigoalmessage_3195_0_0[1] = get_internal_image(4890);
            images_guigoalmessage_3195_0_0[2] = get_internal_image(662);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 99);
    }
};
FrameObject * create_guigoalmessage_3195(int x, int y)
{
    return new (Active::pool.create()) GUIGoalMessage_3195(x, y);
}
class DialogData_3196 : public Text
{
public:
    DialogData_3196(int x, int y) : Text(x, y, DialogData_3196_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("04 12 sp_04_01 You're here to ask for help, aren't you\? Couldn't handle that little quest of yours on your own\?", 111));
        add_line(std::string("02 27 ca_26_05 Cram it, Spade!", 30));
        add_line(std::string("03 60 mi_19_01 STOP IT!", 23));
        add_line(std::string("03 24 mi_19_02 You're right... We need your help. Our friends are in trouble!", 77));
        add_line(std::string("04 00 sp_04_02 I'm supposed to care, why\?", 41));
        add_line(std::string("02 75 ca_26_06 The guy who kidnapped them is the one who killed your father.", 76));
        add_line(std::string("02 00 ca_26_07 Face it, buster, we're the only lead you've got.", 63));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_dialogdata_3196(int x, int y)
{
    return new (Text::pool.create()) DialogData_3196(x, y);
}
class LevelParallaxPiece0_3197 : public SystemBox
{
public:
    LevelParallaxPiece0_3197(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3197_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 200;
        type = PATTERN_IMAGE;
        image = get_internal_image(1004);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3197(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3197(x, y);
}
class LevelParallaxPiece1_3198 : public SystemBox
{
public:
    LevelParallaxPiece1_3198(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3198_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(1593);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3198(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3198(x, y);
}
class LevelParallaxPiece2_3199 : public SystemBox
{
public:
    LevelParallaxPiece2_3199(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3199_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(1591);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3199(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3199(x, y);
}
class LevelParallaxPiece5_3200 : public SystemBox
{
public:
    LevelParallaxPiece5_3200(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_3200_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(1504);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_3200(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_3200(x, y);
}
class LevelParallaxPiece6_3201 : public SystemBox
{
public:
    LevelParallaxPiece6_3201(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_3201_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1151);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_3201(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_3201(x, y);
}
static Image* images_objectteleblock_3202_0_0[12];
static Direction direction_objectteleblock_3202_0_0 = {0, 25, 25, 0, -1, images_objectteleblock_3202_0_0, 12};
static Animation anim_objectteleblock_3202_0 = {&direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, NULL, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0, &direction_objectteleblock_3202_0_0};
static Animation * anim_array_objectteleblock_3202[1] = {&anim_objectteleblock_3202_0};
static Animations anim_objectteleblock_3202 = {1, &anim_array_objectteleblock_3202[0]};
static bool anim_objectteleblock_3202_initialized;
class ObjectTeleBlock_3202 : public Active
{
public:
    ObjectTeleBlock_3202(int x, int y) : Active(x, y, ObjectTeleBlock_3202_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TeleBlock", 16);
#endif
        set_visible(false);
        this->animations = &anim_objectteleblock_3202;
        if (!anim_objectteleblock_3202_initialized) {
            anim_objectteleblock_3202_initialized = true;
            images_objectteleblock_3202_0_0[0] = get_internal_image(13561);
            images_objectteleblock_3202_0_0[1] = get_internal_image(13565);
            images_objectteleblock_3202_0_0[2] = get_internal_image(13564);
            images_objectteleblock_3202_0_0[3] = get_internal_image(13566);
            images_objectteleblock_3202_0_0[4] = get_internal_image(13554);
            images_objectteleblock_3202_0_0[5] = get_internal_image(13563);
            images_objectteleblock_3202_0_0[6] = get_internal_image(13562);
            images_objectteleblock_3202_0_0[7] = get_internal_image(13567);
            images_objectteleblock_3202_0_0[8] = get_internal_image(13568);
            images_objectteleblock_3202_0_0[9] = get_internal_image(13569);
            images_objectteleblock_3202_0_0[10] = get_internal_image(13570);
            images_objectteleblock_3202_0_0[11] = get_internal_image(13571);
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
FrameObject * create_objectteleblock_3202(int x, int y)
{
    return new (Active::pool.create()) ObjectTeleBlock_3202(x, y);
}
class BGSnowDune2_3203 : public Backdrop
{
public:
    BGSnowDune2_3203(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowDune 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4775);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgsnowdune2_3203(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowDune2_3203(x, y);
}
class BGDeadTree_3204 : public Backdrop
{
public:
    BGDeadTree_3204(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_DeadTree", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2993);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgdeadtree_3204(int x, int y)
{
    return new (Backdrop::pool.create()) BGDeadTree_3204(x, y);
}
class BGSolarPanelPipe_3205 : public Backdrop
{
public:
    BGSolarPanelPipe_3205(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SolarPanelPipe", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13533);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgsolarpanelpipe_3205(int x, int y)
{
    return new (Backdrop::pool.create()) BGSolarPanelPipe_3205(x, y);
}
class BGSnowDune1_3206 : public Backdrop
{
public:
    BGSnowDune1_3206(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowDune 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2997);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgsnowdune1_3206(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowDune1_3206(x, y);
}
class BGSnowMound_3207 : public Backdrop
{
public:
    BGSnowMound_3207(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_SnowMound", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7227);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgsnowmound_3207(int x, int y)
{
    return new (Backdrop::pool.create()) BGSnowMound_3207(x, y);
}
class BGDeadTree2_3208 : public Backdrop
{
public:
    BGDeadTree2_3208(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_DeadTree 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5181);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bgdeadtree2_3208(int x, int y)
{
    return new (Backdrop::pool.create()) BGDeadTree2_3208(x, y);
}
static Image* images_gimmicksnowspire_3209_0_0[1];
static Direction direction_gimmicksnowspire_3209_0_0 = {0, 50, 50, 0, 1, images_gimmicksnowspire_3209_0_0, 1};
static Animation anim_gimmicksnowspire_3209_0 = {&direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, NULL, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0, &direction_gimmicksnowspire_3209_0_0};
static Animation * anim_array_gimmicksnowspire_3209[1] = {&anim_gimmicksnowspire_3209_0};
static Animations anim_gimmicksnowspire_3209 = {1, &anim_array_gimmicksnowspire_3209[0]};
static bool anim_gimmicksnowspire_3209_initialized;
class GimmickSnowSpire_3209 : public Active
{
public:
    GimmickSnowSpire_3209(int x, int y) : Active(x, y, GimmickSnowSpire_3209_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SnowSpire", 17);
#endif
        this->animations = &anim_gimmicksnowspire_3209;
        if (!anim_gimmicksnowspire_3209_initialized) {
            anim_gimmicksnowspire_3209_initialized = true;
            images_gimmicksnowspire_3209_0_0[0] = get_internal_image(13591);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_807_gimmick_snowspire.value;
        if (!global_data_807_gimmick_snowspire.init) {
            global_data_807_gimmick_snowspire.init = true;
        }
    }
};
FrameObject * create_gimmicksnowspire_3209(int x, int y)
{
    return new (Active::pool.create()) GimmickSnowSpire_3209(x, y);
}
static Image* images_bgsolarpanel_3210_0_0[20];
static Direction direction_bgsolarpanel_3210_0_0 = {0, 0, 0, 0, -1, images_bgsolarpanel_3210_0_0, 20};
static Animation anim_bgsolarpanel_3210_0 = {&direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, NULL, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0, &direction_bgsolarpanel_3210_0_0};
static Animation * anim_array_bgsolarpanel_3210[1] = {&anim_bgsolarpanel_3210_0};
static Animations anim_bgsolarpanel_3210 = {1, &anim_array_bgsolarpanel_3210[0]};
static bool anim_bgsolarpanel_3210_initialized;
class BGSolarPanel_3210 : public Active
{
public:
    BGSolarPanel_3210(int x, int y) : Active(x, y, BGSolarPanel_3210_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BG_SolarPanel", 13);
#endif
        this->animations = &anim_bgsolarpanel_3210;
        if (!anim_bgsolarpanel_3210_initialized) {
            anim_bgsolarpanel_3210_initialized = true;
            images_bgsolarpanel_3210_0_0[0] = get_internal_image(13779);
            images_bgsolarpanel_3210_0_0[1] = get_internal_image(13780);
            images_bgsolarpanel_3210_0_0[2] = get_internal_image(13781);
            images_bgsolarpanel_3210_0_0[3] = get_internal_image(13782);
            images_bgsolarpanel_3210_0_0[4] = get_internal_image(13783);
            images_bgsolarpanel_3210_0_0[5] = get_internal_image(13784);
            images_bgsolarpanel_3210_0_0[6] = get_internal_image(13805);
            images_bgsolarpanel_3210_0_0[7] = get_internal_image(13806);
            images_bgsolarpanel_3210_0_0[8] = get_internal_image(13807);
            images_bgsolarpanel_3210_0_0[9] = get_internal_image(13808);
            images_bgsolarpanel_3210_0_0[10] = get_internal_image(13525);
            images_bgsolarpanel_3210_0_0[11] = get_internal_image(13809);
            images_bgsolarpanel_3210_0_0[12] = get_internal_image(13810);
            images_bgsolarpanel_3210_0_0[13] = get_internal_image(13811);
            images_bgsolarpanel_3210_0_0[14] = get_internal_image(13812);
            images_bgsolarpanel_3210_0_0[15] = get_internal_image(13814);
            images_bgsolarpanel_3210_0_0[16] = get_internal_image(13815);
            images_bgsolarpanel_3210_0_0[17] = get_internal_image(13816);
            images_bgsolarpanel_3210_0_0[18] = get_internal_image(13817);
            images_bgsolarpanel_3210_0_0[19] = get_internal_image(13818);
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
FrameObject * create_bgsolarpanel_3210(int x, int y)
{
    return new (Active::pool.create()) BGSolarPanel_3210(x, y);
}
static Image* images_gimmicksnakedrill_3211_0_0[8];
static Direction direction_gimmicksnakedrill_3211_0_0 = {0, 50, 50, 0, -1, images_gimmicksnakedrill_3211_0_0, 8};
static Image* images_gimmicksnakedrill_3211_0_1[8];
static Direction direction_gimmicksnakedrill_3211_0_1 = {1, 50, 50, 0, -1, images_gimmicksnakedrill_3211_0_1, 8};
static Image* images_gimmicksnakedrill_3211_0_8[6];
static Direction direction_gimmicksnakedrill_3211_0_8 = {8, 50, 50, 0, 1, images_gimmicksnakedrill_3211_0_8, 6};
static Animation anim_gimmicksnakedrill_3211_0 = {&direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_1, &direction_gimmicksnakedrill_3211_0_1, &direction_gimmicksnakedrill_3211_0_1, &direction_gimmicksnakedrill_3211_0_1, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, &direction_gimmicksnakedrill_3211_0_8, NULL, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0, &direction_gimmicksnakedrill_3211_0_0};
static Animation * anim_array_gimmicksnakedrill_3211[1] = {&anim_gimmicksnakedrill_3211_0};
static Animations anim_gimmicksnakedrill_3211 = {1, &anim_array_gimmicksnakedrill_3211[0]};
static bool anim_gimmicksnakedrill_3211_initialized;
class GimmickSnakeDrill_3211 : public Active
{
public:
    GimmickSnakeDrill_3211(int x, int y) : Active(x, y, GimmickSnakeDrill_3211_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SnakeDrill", 18);
#endif
        this->animations = &anim_gimmicksnakedrill_3211;
        if (!anim_gimmicksnakedrill_3211_initialized) {
            anim_gimmicksnakedrill_3211_initialized = true;
            images_gimmicksnakedrill_3211_0_0[0] = get_internal_image(14135);
            images_gimmicksnakedrill_3211_0_0[1] = get_internal_image(14151);
            images_gimmicksnakedrill_3211_0_0[2] = get_internal_image(14143);
            images_gimmicksnakedrill_3211_0_0[3] = get_internal_image(14145);
            images_gimmicksnakedrill_3211_0_0[4] = get_internal_image(14146);
            images_gimmicksnakedrill_3211_0_0[5] = get_internal_image(14147);
            images_gimmicksnakedrill_3211_0_0[6] = get_internal_image(14148);
            images_gimmicksnakedrill_3211_0_0[7] = get_internal_image(14149);
            images_gimmicksnakedrill_3211_0_1[0] = get_internal_image(14136);
            images_gimmicksnakedrill_3211_0_1[1] = get_internal_image(14137);
            images_gimmicksnakedrill_3211_0_1[2] = get_internal_image(14138);
            images_gimmicksnakedrill_3211_0_1[3] = get_internal_image(14139);
            images_gimmicksnakedrill_3211_0_1[4] = get_internal_image(14141);
            images_gimmicksnakedrill_3211_0_1[5] = get_internal_image(14142);
            images_gimmicksnakedrill_3211_0_1[6] = get_internal_image(14140);
            images_gimmicksnakedrill_3211_0_1[7] = get_internal_image(14144);
            images_gimmicksnakedrill_3211_0_8[0] = get_internal_image(12774);
            images_gimmicksnakedrill_3211_0_8[1] = get_internal_image(12771);
            images_gimmicksnakedrill_3211_0_8[2] = get_internal_image(13543);
            images_gimmicksnakedrill_3211_0_8[3] = get_internal_image(13550);
            images_gimmicksnakedrill_3211_0_8[4] = get_internal_image(13596);
            images_gimmicksnakedrill_3211_0_8[5] = get_internal_image(13600);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
    }
};
FrameObject * create_gimmicksnakedrill_3211(int x, int y)
{
    return new (Active::pool.create()) GimmickSnakeDrill_3211(x, y);
}
class BGRocks13_3212 : public Backdrop
{
public:
    BGRocks13_3212(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BG_Rocks 13", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14068);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bgrocks13_3212(int x, int y)
{
    return new (Backdrop::pool.create()) BGRocks13_3212(x, y);
}
