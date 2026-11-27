#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_active_2713_0_0[1];
static Direction direction_active_2713_0_0 = {0, 50, 50, 0, 1, images_active_2713_0_0, 1};
static Animation anim_active_2713_0 = {&direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, NULL, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0, &direction_active_2713_0_0};
static Animation * anim_array_active_2713[1] = {&anim_active_2713_0};
static Animations anim_active_2713 = {1, &anim_array_active_2713[0]};
static bool anim_active_2713_initialized;
class Active_2713 : public Active
{
public:
    Active_2713(int x, int y) : Active(x, y, Active_2713_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_2713;
        if (!anim_active_2713_initialized) {
            anim_active_2713_initialized = true;
            images_active_2713_0_0[0] = get_internal_image(6113);
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
FrameObject * create_active_2713(int x, int y)
{
    return new (Active::pool.create()) Active_2713(x, y);
}
static Image* images_switchbuttonright_2714_0_0[2];
static Direction direction_switchbuttonright_2714_0_0 = {0, 10, 10, 0, -1, images_switchbuttonright_2714_0_0, 2};
static Animation anim_switchbuttonright_2714_0 = {&direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, NULL, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0, &direction_switchbuttonright_2714_0_0};
static Animation * anim_array_switchbuttonright_2714[1] = {&anim_switchbuttonright_2714_0};
static Animations anim_switchbuttonright_2714 = {1, &anim_array_switchbuttonright_2714[0]};
static bool anim_switchbuttonright_2714_initialized;
class SwitchButtonRight_2714 : public Active
{
public:
    SwitchButtonRight_2714(int x, int y) : Active(x, y, SwitchButtonRight_2714_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_ButtonRight", 18);
#endif
        this->animations = &anim_switchbuttonright_2714;
        if (!anim_switchbuttonright_2714_initialized) {
            anim_switchbuttonright_2714_initialized = true;
            images_switchbuttonright_2714_0_0[0] = get_internal_image(6574);
            images_switchbuttonright_2714_0_0[1] = get_internal_image(6416);
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
FrameObject * create_switchbuttonright_2714(int x, int y)
{
    return new (Active::pool.create()) SwitchButtonRight_2714(x, y);
}
static Image* images_switchbuttonleft_2715_0_0[2];
static Direction direction_switchbuttonleft_2715_0_0 = {0, 10, 10, 0, -1, images_switchbuttonleft_2715_0_0, 2};
static Animation anim_switchbuttonleft_2715_0 = {&direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, NULL, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0, &direction_switchbuttonleft_2715_0_0};
static Animation * anim_array_switchbuttonleft_2715[1] = {&anim_switchbuttonleft_2715_0};
static Animations anim_switchbuttonleft_2715 = {1, &anim_array_switchbuttonleft_2715[0]};
static bool anim_switchbuttonleft_2715_initialized;
class SwitchButtonLeft_2715 : public Active
{
public:
    SwitchButtonLeft_2715(int x, int y) : Active(x, y, SwitchButtonLeft_2715_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_ButtonLeft", 17);
#endif
        this->animations = &anim_switchbuttonleft_2715;
        if (!anim_switchbuttonleft_2715_initialized) {
            anim_switchbuttonleft_2715_initialized = true;
            images_switchbuttonleft_2715_0_0[0] = get_internal_image(6575);
            images_switchbuttonleft_2715_0_0[1] = get_internal_image(6540);
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
FrameObject * create_switchbuttonleft_2715(int x, int y)
{
    return new (Active::pool.create()) SwitchButtonLeft_2715(x, y);
}
static Image* images_levelfireplatform1_2716_0_0[2];
static Direction direction_levelfireplatform1_2716_0_0 = {0, 0, 0, 0, 1, images_levelfireplatform1_2716_0_0, 2};
static Animation anim_levelfireplatform1_2716_0 = {&direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, NULL, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0, &direction_levelfireplatform1_2716_0_0};
static Animation * anim_array_levelfireplatform1_2716[1] = {&anim_levelfireplatform1_2716_0};
static Animations anim_levelfireplatform1_2716 = {1, &anim_array_levelfireplatform1_2716[0]};
static bool anim_levelfireplatform1_2716_initialized;
class LevelFirePlatform1_2716 : public Active
{
public:
    LevelFirePlatform1_2716(int x, int y) : Active(x, y, LevelFirePlatform1_2716_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_FirePlatform 1", 20);
#endif
        this->animations = &anim_levelfireplatform1_2716;
        if (!anim_levelfireplatform1_2716_initialized) {
            anim_levelfireplatform1_2716_initialized = true;
            images_levelfireplatform1_2716_0_0[0] = get_internal_image(11258);
            images_levelfireplatform1_2716_0_0[1] = get_internal_image(10956);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 160);
    }
};
FrameObject * create_levelfireplatform1_2716(int x, int y)
{
    return new (Active::pool.create()) LevelFirePlatform1_2716(x, y);
}
static Image* images_levelpistonplatform1_2717_0_0[1];
static Direction direction_levelpistonplatform1_2717_0_0 = {0, 100, 100, 0, 1, images_levelpistonplatform1_2717_0_0, 1};
static Animation anim_levelpistonplatform1_2717_0 = {&direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, NULL, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0, &direction_levelpistonplatform1_2717_0_0};
static Animation * anim_array_levelpistonplatform1_2717[1] = {&anim_levelpistonplatform1_2717_0};
static Animations anim_levelpistonplatform1_2717 = {1, &anim_array_levelpistonplatform1_2717[0]};
static bool anim_levelpistonplatform1_2717_initialized;
class LevelPistonPlatform1_2717 : public Active
{
public:
    LevelPistonPlatform1_2717(int x, int y) : Active(x, y, LevelPistonPlatform1_2717_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_PistonPlatform 1", 22);
#endif
        set_visible(false);
        this->animations = &anim_levelpistonplatform1_2717;
        if (!anim_levelpistonplatform1_2717_initialized) {
            anim_levelpistonplatform1_2717_initialized = true;
            images_levelpistonplatform1_2717_0_0[0] = get_internal_image(4884);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 6);
        alterables->values.set(6, 64);
    }
};
FrameObject * create_levelpistonplatform1_2717(int x, int y)
{
    return new (Active::pool.create()) LevelPistonPlatform1_2717(x, y);
}
static Image* images_levelspinplatform_2718_0_0[1];
static Direction direction_levelspinplatform_2718_0_0 = {0, 0, 0, 0, 1, images_levelspinplatform_2718_0_0, 1};
static Animation anim_levelspinplatform_2718_0 = {&direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, NULL, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0, &direction_levelspinplatform_2718_0_0};
static Animation * anim_array_levelspinplatform_2718[1] = {&anim_levelspinplatform_2718_0};
static Animations anim_levelspinplatform_2718 = {1, &anim_array_levelspinplatform_2718[0]};
static bool anim_levelspinplatform_2718_initialized;
class LevelSpinPlatform_2718 : public Active
{
public:
    LevelSpinPlatform_2718(int x, int y) : Active(x, y, LevelSpinPlatform_2718_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_SpinPlatform", 18);
#endif
        set_visible(false);
        this->animations = &anim_levelspinplatform_2718;
        if (!anim_levelspinplatform_2718_initialized) {
            anim_levelspinplatform_2718_initialized = true;
            images_levelspinplatform_2718_0_0[0] = get_internal_image(1582);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -1);
        alterables->values.set(2, 160);
        alterables->values.set(3, 1);
        alterables->values.set(5, -1);
        alterables->values.set(6, 160);
    }
};
FrameObject * create_levelspinplatform_2718(int x, int y)
{
    return new (Active::pool.create()) LevelSpinPlatform_2718(x, y);
}
static Image* images_hazardlavapit_2719_0_0[4];
static Direction direction_hazardlavapit_2719_0_0 = {0, 0, 0, 0, 1, images_hazardlavapit_2719_0_0, 4};
static Image* images_hazardlavapit_2719_0_1[1];
static Direction direction_hazardlavapit_2719_0_1 = {1, 50, 50, 0, 1, images_hazardlavapit_2719_0_1, 1};
static Animation anim_hazardlavapit_2719_0 = {&direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_1, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0, &direction_hazardlavapit_2719_0_0};
static Animation * anim_array_hazardlavapit_2719[1] = {&anim_hazardlavapit_2719_0};
static Animations anim_hazardlavapit_2719 = {1, &anim_array_hazardlavapit_2719[0]};
static bool anim_hazardlavapit_2719_initialized;
class HazardLavaPit_2719 : public Active
{
public:
    HazardLavaPit_2719(int x, int y) : Active(x, y, HazardLavaPit_2719_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LavaPit", 14);
#endif
        this->animations = &anim_hazardlavapit_2719;
        if (!anim_hazardlavapit_2719_initialized) {
            anim_hazardlavapit_2719_initialized = true;
            images_hazardlavapit_2719_0_0[0] = get_internal_image(2362);
            images_hazardlavapit_2719_0_0[1] = get_internal_image(2392);
            images_hazardlavapit_2719_0_0[2] = get_internal_image(2367);
            images_hazardlavapit_2719_0_0[3] = get_internal_image(2510);
            images_hazardlavapit_2719_0_1[0] = get_internal_image(11925);
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
FrameObject * create_hazardlavapit_2719(int x, int y)
{
    return new (Active::pool.create()) HazardLavaPit_2719(x, y);
}
static Image* images_hazardlavafall_2720_0_0[1];
static Direction direction_hazardlavafall_2720_0_0 = {0, 50, 50, 0, 1, images_hazardlavafall_2720_0_0, 1};
static Animation anim_hazardlavafall_2720_0 = {&direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, NULL, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0, &direction_hazardlavafall_2720_0_0};
static Animation * anim_array_hazardlavafall_2720[1] = {&anim_hazardlavafall_2720_0};
static Animations anim_hazardlavafall_2720 = {1, &anim_array_hazardlavafall_2720[0]};
static bool anim_hazardlavafall_2720_initialized;
class HazardLavaFall_2720 : public Active
{
public:
    HazardLavaFall_2720(int x, int y) : Active(x, y, HazardLavaFall_2720_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LavaFall", 15);
#endif
        this->animations = &anim_hazardlavafall_2720;
        if (!anim_hazardlavafall_2720_initialized) {
            anim_hazardlavafall_2720_initialized = true;
            images_hazardlavafall_2720_0_0[0] = get_internal_image(5983);
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
FrameObject * create_hazardlavafall_2720(int x, int y)
{
    return new (Active::pool.create()) HazardLavaFall_2720(x, y);
}
static Image* images_enemylavasquid_2721_0_0[5];
static Direction direction_enemylavasquid_2721_0_0 = {0, 15, 15, 0, -1, images_enemylavasquid_2721_0_0, 5};
static Image* images_enemylavasquid_2721_0_16[5];
static Direction direction_enemylavasquid_2721_0_16 = {16, 15, 15, 0, -1, images_enemylavasquid_2721_0_16, 5};
static Animation anim_enemylavasquid_2721_0 = {&direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, NULL, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, &direction_enemylavasquid_2721_0_16, NULL, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0, &direction_enemylavasquid_2721_0_0};
static Image* images_enemylavasquid_2721_7_0[6];
static Direction direction_enemylavasquid_2721_7_0 = {0, 20, 20, 0, 1, images_enemylavasquid_2721_7_0, 6};
static Image* images_enemylavasquid_2721_7_1[4];
static Direction direction_enemylavasquid_2721_7_1 = {1, 30, 30, 0, 1, images_enemylavasquid_2721_7_1, 4};
static Image* images_enemylavasquid_2721_7_15[4];
static Direction direction_enemylavasquid_2721_7_15 = {15, 30, 30, 0, 1, images_enemylavasquid_2721_7_15, 4};
static Image* images_enemylavasquid_2721_7_16[6];
static Direction direction_enemylavasquid_2721_7_16 = {16, 20, 20, 0, 1, images_enemylavasquid_2721_7_16, 6};
static Image* images_enemylavasquid_2721_7_17[4];
static Direction direction_enemylavasquid_2721_7_17 = {17, 30, 30, 0, 1, images_enemylavasquid_2721_7_17, 4};
static Image* images_enemylavasquid_2721_7_31[4];
static Direction direction_enemylavasquid_2721_7_31 = {31, 30, 30, 0, 1, images_enemylavasquid_2721_7_31, 4};
static Animation anim_enemylavasquid_2721_7 = {&direction_enemylavasquid_2721_7_0, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, &direction_enemylavasquid_2721_7_1, NULL, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_15, &direction_enemylavasquid_2721_7_16, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, &direction_enemylavasquid_2721_7_17, NULL, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31, &direction_enemylavasquid_2721_7_31};
static Image* images_enemylavasquid_2721_9_0[1];
static Direction direction_enemylavasquid_2721_9_0 = {0, 50, 50, 0, -1, images_enemylavasquid_2721_9_0, 1};
static Animation anim_enemylavasquid_2721_9 = {&direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, NULL, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0, &direction_enemylavasquid_2721_9_0};
static Image* images_enemylavasquid_2721_11_0[3];
static Direction direction_enemylavasquid_2721_11_0 = {0, 50, 50, 0, -1, images_enemylavasquid_2721_11_0, 3};
static Image* images_enemylavasquid_2721_11_1[6];
static Direction direction_enemylavasquid_2721_11_1 = {1, 100, 100, 0, -1, images_enemylavasquid_2721_11_1, 6};
static Image* images_enemylavasquid_2721_11_15[6];
static Direction direction_enemylavasquid_2721_11_15 = {15, 100, 100, 0, -1, images_enemylavasquid_2721_11_15, 6};
static Image* images_enemylavasquid_2721_11_16[3];
static Direction direction_enemylavasquid_2721_11_16 = {16, 50, 50, 0, -1, images_enemylavasquid_2721_11_16, 3};
static Image* images_enemylavasquid_2721_11_17[6];
static Direction direction_enemylavasquid_2721_11_17 = {17, 100, 100, 0, -1, images_enemylavasquid_2721_11_17, 6};
static Image* images_enemylavasquid_2721_11_31[6];
static Direction direction_enemylavasquid_2721_11_31 = {31, 100, 100, 0, -1, images_enemylavasquid_2721_11_31, 6};
static Animation anim_enemylavasquid_2721_11 = {&direction_enemylavasquid_2721_11_0, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, &direction_enemylavasquid_2721_11_1, NULL, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_15, &direction_enemylavasquid_2721_11_16, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, &direction_enemylavasquid_2721_11_17, NULL, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31, &direction_enemylavasquid_2721_11_31};
static Animation * anim_array_enemylavasquid_2721[12] = {&anim_enemylavasquid_2721_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemylavasquid_2721_7, NULL, &anim_enemylavasquid_2721_9, NULL, &anim_enemylavasquid_2721_11};
static Animations anim_enemylavasquid_2721 = {12, &anim_array_enemylavasquid_2721[0]};
static bool anim_enemylavasquid_2721_initialized;
class EnemyLavaSquid_2721 : public Active
{
public:
    EnemyLavaSquid_2721(int x, int y) : Active(x, y, EnemyLavaSquid_2721_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_LavaSquid", 15);
#endif
        this->animations = &anim_enemylavasquid_2721;
        if (!anim_enemylavasquid_2721_initialized) {
            anim_enemylavasquid_2721_initialized = true;
            images_enemylavasquid_2721_0_0[0] = get_internal_image(522);
            images_enemylavasquid_2721_0_0[1] = get_internal_image(524);
            images_enemylavasquid_2721_0_0[2] = get_internal_image(526);
            images_enemylavasquid_2721_0_0[3] = get_internal_image(541);
            images_enemylavasquid_2721_0_0[4] = get_internal_image(5234);
            images_enemylavasquid_2721_0_16[0] = get_internal_image(9393);
            images_enemylavasquid_2721_0_16[1] = get_internal_image(12115);
            images_enemylavasquid_2721_0_16[2] = get_internal_image(12117);
            images_enemylavasquid_2721_0_16[3] = get_internal_image(12118);
            images_enemylavasquid_2721_0_16[4] = get_internal_image(12119);
            images_enemylavasquid_2721_7_0[0] = get_internal_image(12120);
            images_enemylavasquid_2721_7_0[1] = get_internal_image(12121);
            images_enemylavasquid_2721_7_0[2] = get_internal_image(12122);
            images_enemylavasquid_2721_7_0[3] = get_internal_image(12123);
            images_enemylavasquid_2721_7_0[4] = get_internal_image(12124);
            images_enemylavasquid_2721_7_0[5] = get_internal_image(12125);
            images_enemylavasquid_2721_7_1[0] = get_internal_image(12126);
            images_enemylavasquid_2721_7_1[1] = get_internal_image(12127);
            images_enemylavasquid_2721_7_1[2] = get_internal_image(12128);
            images_enemylavasquid_2721_7_1[3] = get_internal_image(12129);
            images_enemylavasquid_2721_7_15[0] = get_internal_image(12130);
            images_enemylavasquid_2721_7_15[1] = get_internal_image(12131);
            images_enemylavasquid_2721_7_15[2] = get_internal_image(12132);
            images_enemylavasquid_2721_7_15[3] = get_internal_image(12133);
            images_enemylavasquid_2721_7_16[0] = get_internal_image(12134);
            images_enemylavasquid_2721_7_16[1] = get_internal_image(12135);
            images_enemylavasquid_2721_7_16[2] = get_internal_image(12136);
            images_enemylavasquid_2721_7_16[3] = get_internal_image(12137);
            images_enemylavasquid_2721_7_16[4] = get_internal_image(12138);
            images_enemylavasquid_2721_7_16[5] = get_internal_image(12139);
            images_enemylavasquid_2721_7_17[0] = get_internal_image(12140);
            images_enemylavasquid_2721_7_17[1] = get_internal_image(12141);
            images_enemylavasquid_2721_7_17[2] = get_internal_image(12142);
            images_enemylavasquid_2721_7_17[3] = get_internal_image(12143);
            images_enemylavasquid_2721_7_31[0] = get_internal_image(12144);
            images_enemylavasquid_2721_7_31[1] = get_internal_image(12145);
            images_enemylavasquid_2721_7_31[2] = get_internal_image(12146);
            images_enemylavasquid_2721_7_31[3] = get_internal_image(12147);
            images_enemylavasquid_2721_9_0[0] = get_internal_image(12148);
            images_enemylavasquid_2721_11_0[0] = get_internal_image(12120);
            images_enemylavasquid_2721_11_0[1] = get_internal_image(12149);
            images_enemylavasquid_2721_11_0[2] = get_internal_image(12125);
            images_enemylavasquid_2721_11_1[0] = get_internal_image(12150);
            images_enemylavasquid_2721_11_1[1] = get_internal_image(12151);
            images_enemylavasquid_2721_11_1[2] = get_internal_image(12152);
            images_enemylavasquid_2721_11_1[3] = get_internal_image(12153);
            images_enemylavasquid_2721_11_1[4] = get_internal_image(12154);
            images_enemylavasquid_2721_11_1[5] = get_internal_image(12155);
            images_enemylavasquid_2721_11_15[0] = get_internal_image(12156);
            images_enemylavasquid_2721_11_15[1] = get_internal_image(12157);
            images_enemylavasquid_2721_11_15[2] = get_internal_image(12158);
            images_enemylavasquid_2721_11_15[3] = get_internal_image(12159);
            images_enemylavasquid_2721_11_15[4] = get_internal_image(12160);
            images_enemylavasquid_2721_11_15[5] = get_internal_image(12161);
            images_enemylavasquid_2721_11_16[0] = get_internal_image(12134);
            images_enemylavasquid_2721_11_16[1] = get_internal_image(12162);
            images_enemylavasquid_2721_11_16[2] = get_internal_image(12139);
            images_enemylavasquid_2721_11_17[0] = get_internal_image(12163);
            images_enemylavasquid_2721_11_17[1] = get_internal_image(12164);
            images_enemylavasquid_2721_11_17[2] = get_internal_image(12165);
            images_enemylavasquid_2721_11_17[3] = get_internal_image(12166);
            images_enemylavasquid_2721_11_17[4] = get_internal_image(12167);
            images_enemylavasquid_2721_11_17[5] = get_internal_image(12168);
            images_enemylavasquid_2721_11_31[0] = get_internal_image(12169);
            images_enemylavasquid_2721_11_31[1] = get_internal_image(12170);
            images_enemylavasquid_2721_11_31[2] = get_internal_image(12171);
            images_enemylavasquid_2721_11_31[3] = get_internal_image(12172);
            images_enemylavasquid_2721_11_31[4] = get_internal_image(12173);
            images_enemylavasquid_2721_11_31[5] = get_internal_image(12174);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(5, 1);
        alterables->values.set(6, -1);
    }
};
FrameObject * create_enemylavasquid_2721(int x, int y)
{
    return new (Active::pool.create()) EnemyLavaSquid_2721(x, y);
}
static Image* images_minibosstrapdoor_2722_0_0[1];
static Direction direction_minibosstrapdoor_2722_0_0 = {0, 50, 50, 0, 1, images_minibosstrapdoor_2722_0_0, 1};
static Animation anim_minibosstrapdoor_2722_0 = {&direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, NULL, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0, &direction_minibosstrapdoor_2722_0_0};
static Animation * anim_array_minibosstrapdoor_2722[1] = {&anim_minibosstrapdoor_2722_0};
static Animations anim_minibosstrapdoor_2722 = {1, &anim_array_minibosstrapdoor_2722[0]};
static bool anim_minibosstrapdoor_2722_initialized;
class MinibossTrapDoor_2722 : public Active
{
public:
    MinibossTrapDoor_2722(int x, int y) : Active(x, y, MinibossTrapDoor_2722_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Miniboss_TrapDoor", 17);
#endif
        this->animations = &anim_minibosstrapdoor_2722;
        if (!anim_minibosstrapdoor_2722_initialized) {
            anim_minibosstrapdoor_2722_initialized = true;
            images_minibosstrapdoor_2722_0_0[0] = get_internal_image(12183);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_minibosstrapdoor_2722(int x, int y)
{
    return new (Active::pool.create()) MinibossTrapDoor_2722(x, y);
}
static Image* images_enemywallpusher_2723_0_0[4];
static Direction direction_enemywallpusher_2723_0_0 = {0, 8, 8, 0, -1, images_enemywallpusher_2723_0_0, 4};
static Image* images_enemywallpusher_2723_0_16[1];
static Direction direction_enemywallpusher_2723_0_16 = {16, 50, 50, 0, -1, images_enemywallpusher_2723_0_16, 1};
static Animation anim_enemywallpusher_2723_0 = {&direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, NULL, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, &direction_enemywallpusher_2723_0_16, NULL, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0, &direction_enemywallpusher_2723_0_0};
static Image* images_enemywallpusher_2723_8_0[1];
static Direction direction_enemywallpusher_2723_8_0 = {0, 50, 50, 0, -1, images_enemywallpusher_2723_8_0, 1};
static Image* images_enemywallpusher_2723_8_16[1];
static Direction direction_enemywallpusher_2723_8_16 = {16, 50, 50, 0, -1, images_enemywallpusher_2723_8_16, 1};
static Animation anim_enemywallpusher_2723_8 = {&direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, NULL, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, &direction_enemywallpusher_2723_8_16, NULL, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0, &direction_enemywallpusher_2723_8_0};
static Animation * anim_array_enemywallpusher_2723[9] = {&anim_enemywallpusher_2723_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemywallpusher_2723_8};
static Animations anim_enemywallpusher_2723 = {9, &anim_array_enemywallpusher_2723[0]};
static bool anim_enemywallpusher_2723_initialized;
class EnemyWallPusher_2723 : public Active
{
public:
    EnemyWallPusher_2723(int x, int y) : Active(x, y, EnemyWallPusher_2723_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_WallPusher", 16);
#endif
        this->animations = &anim_enemywallpusher_2723;
        if (!anim_enemywallpusher_2723_initialized) {
            anim_enemywallpusher_2723_initialized = true;
            images_enemywallpusher_2723_0_0[0] = get_internal_image(15028);
            images_enemywallpusher_2723_0_0[1] = get_internal_image(15029);
            images_enemywallpusher_2723_0_0[2] = get_internal_image(15026);
            images_enemywallpusher_2723_0_0[3] = get_internal_image(15025);
            images_enemywallpusher_2723_0_16[0] = get_internal_image(15024);
            images_enemywallpusher_2723_8_0[0] = get_internal_image(11029);
            images_enemywallpusher_2723_8_16[0] = get_internal_image(11032);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 30);
    }
};
FrameObject * create_enemywallpusher_2723(int x, int y)
{
    return new (Active::pool.create()) EnemyWallPusher_2723(x, y);
}
static Image* images_hazardlavafall2_2724_0_0[1];
static Direction direction_hazardlavafall2_2724_0_0 = {0, 50, 50, 0, 1, images_hazardlavafall2_2724_0_0, 1};
static Animation anim_hazardlavafall2_2724_0 = {&direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, NULL, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0, &direction_hazardlavafall2_2724_0_0};
static Animation * anim_array_hazardlavafall2_2724[1] = {&anim_hazardlavafall2_2724_0};
static Animations anim_hazardlavafall2_2724 = {1, &anim_array_hazardlavafall2_2724[0]};
static bool anim_hazardlavafall2_2724_initialized;
class HazardLavaFall2_2724 : public Active
{
public:
    HazardLavaFall2_2724(int x, int y) : Active(x, y, HazardLavaFall2_2724_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LavaFall 2", 17);
#endif
        this->animations = &anim_hazardlavafall2_2724;
        if (!anim_hazardlavafall2_2724_initialized) {
            anim_hazardlavafall2_2724_initialized = true;
            images_hazardlavafall2_2724_0_0[0] = get_internal_image(2378);
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
FrameObject * create_hazardlavafall2_2724(int x, int y)
{
    return new (Active::pool.create()) HazardLavaFall2_2724(x, y);
}
static Image* images_bossspikelauncher_2725_0_0[1];
static Direction direction_bossspikelauncher_2725_0_0 = {0, 50, 50, 0, 1, images_bossspikelauncher_2725_0_0, 1};
static Animation anim_bossspikelauncher_2725_0 = {&direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, NULL, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0, &direction_bossspikelauncher_2725_0_0};
static Image* images_bossspikelauncher_2725_7_0[3];
static Direction direction_bossspikelauncher_2725_7_0 = {0, 25, 25, 0, 1, images_bossspikelauncher_2725_7_0, 3};
static Animation anim_bossspikelauncher_2725_7 = {&direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, NULL, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0, &direction_bossspikelauncher_2725_7_0};
static Image* images_bossspikelauncher_2725_8_0[2];
static Direction direction_bossspikelauncher_2725_8_0 = {0, 30, 30, 0, -1, images_bossspikelauncher_2725_8_0, 2};
static Animation anim_bossspikelauncher_2725_8 = {&direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, NULL, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0, &direction_bossspikelauncher_2725_8_0};
static Animation * anim_array_bossspikelauncher_2725[9] = {&anim_bossspikelauncher_2725_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossspikelauncher_2725_7, &anim_bossspikelauncher_2725_8};
static Animations anim_bossspikelauncher_2725 = {9, &anim_array_bossspikelauncher_2725[0]};
static bool anim_bossspikelauncher_2725_initialized;
class BossSpikeLauncher_2725 : public Active
{
public:
    BossSpikeLauncher_2725(int x, int y) : Active(x, y, BossSpikeLauncher_2725_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SpikeLauncher", 18);
#endif
        this->animations = &anim_bossspikelauncher_2725;
        if (!anim_bossspikelauncher_2725_initialized) {
            anim_bossspikelauncher_2725_initialized = true;
            images_bossspikelauncher_2725_0_0[0] = get_internal_image(5793);
            images_bossspikelauncher_2725_7_0[0] = get_internal_image(1191);
            images_bossspikelauncher_2725_7_0[1] = get_internal_image(5792);
            images_bossspikelauncher_2725_7_0[2] = get_internal_image(1185);
            images_bossspikelauncher_2725_8_0[0] = get_internal_image(5792);
            images_bossspikelauncher_2725_8_0[1] = get_internal_image(1185);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
        alterables->values.set(1, 8);
    }
};
FrameObject * create_bossspikelauncher_2725(int x, int y)
{
    return new (Active::pool.create()) BossSpikeLauncher_2725(x, y);
}
static Image* images_bosssyntaxhook_2726_0_0[1];
static Direction direction_bosssyntaxhook_2726_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxhook_2726_0_0, 1};
static Image* images_bosssyntaxhook_2726_0_16[1];
static Direction direction_bosssyntaxhook_2726_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxhook_2726_0_16, 1};
static Animation anim_bosssyntaxhook_2726_0 = {&direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, NULL, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, &direction_bosssyntaxhook_2726_0_16, NULL, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0, &direction_bosssyntaxhook_2726_0_0};
static Animation * anim_array_bosssyntaxhook_2726[1] = {&anim_bosssyntaxhook_2726_0};
static Animations anim_bosssyntaxhook_2726 = {1, &anim_array_bosssyntaxhook_2726[0]};
static bool anim_bosssyntaxhook_2726_initialized;
class BossSyntaxHook_2726 : public Active
{
public:
    BossSyntaxHook_2726(int x, int y) : Active(x, y, BossSyntaxHook_2726_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxHook", 15);
#endif
        this->animations = &anim_bosssyntaxhook_2726;
        if (!anim_bosssyntaxhook_2726_initialized) {
            anim_bosssyntaxhook_2726_initialized = true;
            images_bosssyntaxhook_2726_0_0[0] = get_internal_image(1219);
            images_bosssyntaxhook_2726_0_16[0] = get_internal_image(2183);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
    }
};
FrameObject * create_bosssyntaxhook_2726(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxHook_2726(x, y);
}
class QuickBackdrop_2727 : public QuickBackdrop
{
public:
    QuickBackdrop_2727(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 4128;
        height = 480;
        image = get_internal_image(6122);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_2727(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_2727(x, y);
}
class QuickBackdrop2_2728 : public QuickBackdrop
{
public:
    QuickBackdrop2_2728(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 1088;
        height = 160;
        color = Color(8, 0, 0, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_2728(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_2728(x, y);
}
static Image* images_hazardlavafall3_2729_0_0[4];
static Direction direction_hazardlavafall3_2729_0_0 = {0, 100, 100, 0, -1, images_hazardlavafall3_2729_0_0, 4};
static Animation anim_hazardlavafall3_2729_0 = {&direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, NULL, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0, &direction_hazardlavafall3_2729_0_0};
static Animation * anim_array_hazardlavafall3_2729[1] = {&anim_hazardlavafall3_2729_0};
static Animations anim_hazardlavafall3_2729 = {1, &anim_array_hazardlavafall3_2729[0]};
static bool anim_hazardlavafall3_2729_initialized;
class HazardLavaFall3_2729 : public Active
{
public:
    HazardLavaFall3_2729(int x, int y) : Active(x, y, HazardLavaFall3_2729_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LavaFall 3", 17);
#endif
        this->animations = &anim_hazardlavafall3_2729;
        if (!anim_hazardlavafall3_2729_initialized) {
            anim_hazardlavafall3_2729_initialized = true;
            images_hazardlavafall3_2729_0_0[0] = get_internal_image(6218);
            images_hazardlavafall3_2729_0_0[1] = get_internal_image(6219);
            images_hazardlavafall3_2729_0_0[2] = get_internal_image(6217);
            images_hazardlavafall3_2729_0_0[3] = get_internal_image(6220);
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
FrameObject * create_hazardlavafall3_2729(int x, int y)
{
    return new (Active::pool.create()) HazardLavaFall3_2729(x, y);
}
class TBWallLight2_2730 : public Backdrop
{
public:
    TBWallLight2_2730(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallLight 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6111);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalllight2_2730(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallLight2_2730(x, y);
}
class TBCornerCurve4_2731 : public Backdrop
{
public:
    TBCornerCurve4_2731(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_CornerCurve 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2355);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbcornercurve4_2731(int x, int y)
{
    return new (Backdrop::pool.create()) TBCornerCurve4_2731(x, y);
}
class TBCornerCurve3_2732 : public Backdrop
{
public:
    TBCornerCurve3_2732(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_CornerCurve 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3554);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbcornercurve3_2732(int x, int y)
{
    return new (Backdrop::pool.create()) TBCornerCurve3_2732(x, y);
}
class TBWall25_2733 : public Backdrop
{
public:
    TBWall25_2733(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 25", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5987);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbwall25_2733(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall25_2733(x, y);
}
class TBWall26_2734 : public Backdrop
{
public:
    TBWall26_2734(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 26", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5988);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall26_2734(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall26_2734(x, y);
}
class TBWall27_2735 : public Backdrop
{
public:
    TBWall27_2735(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 27", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5993);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbwall27_2735(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall27_2735(x, y);
}
class TBWall28_2736 : public Backdrop
{
public:
    TBWall28_2736(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 28", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6000);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall28_2736(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall28_2736(x, y);
}
class TBWall24_2737 : public Backdrop
{
public:
    TBWall24_2737(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 24", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4072);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall24_2737(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall24_2737(x, y);
}
static Image* images_bosssyntaxspiderlegback_2738_0_0[1];
static Direction direction_bosssyntaxspiderlegback_2738_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxspiderlegback_2738_0_0, 1};
static Image* images_bosssyntaxspiderlegback_2738_0_16[1];
static Direction direction_bosssyntaxspiderlegback_2738_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxspiderlegback_2738_0_16, 1};
static Animation anim_bosssyntaxspiderlegback_2738_0 = {&direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, NULL, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, &direction_bosssyntaxspiderlegback_2738_0_16, NULL, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0, &direction_bosssyntaxspiderlegback_2738_0_0};
static Animation * anim_array_bosssyntaxspiderlegback_2738[1] = {&anim_bosssyntaxspiderlegback_2738_0};
static Animations anim_bosssyntaxspiderlegback_2738 = {1, &anim_array_bosssyntaxspiderlegback_2738[0]};
static bool anim_bosssyntaxspiderlegback_2738_initialized;
class BossSyntaxSpiderLegBack_2738 : public Active
{
public:
    BossSyntaxSpiderLegBack_2738(int x, int y) : Active(x, y, BossSyntaxSpiderLegBack_2738_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderLegBack", 24);
#endif
        this->animations = &anim_bosssyntaxspiderlegback_2738;
        if (!anim_bosssyntaxspiderlegback_2738_initialized) {
            anim_bosssyntaxspiderlegback_2738_initialized = true;
            images_bosssyntaxspiderlegback_2738_0_0[0] = get_internal_image(1651);
            images_bosssyntaxspiderlegback_2738_0_16[0] = get_internal_image(1806);
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
FrameObject * create_bosssyntaxspiderlegback_2738(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderLegBack_2738(x, y);
}
static Image* images_levelfireplatform2_2739_0_0[2];
static Direction direction_levelfireplatform2_2739_0_0 = {0, 0, 0, 0, 1, images_levelfireplatform2_2739_0_0, 2};
static Animation anim_levelfireplatform2_2739_0 = {&direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, NULL, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0, &direction_levelfireplatform2_2739_0_0};
static Animation * anim_array_levelfireplatform2_2739[1] = {&anim_levelfireplatform2_2739_0};
static Animations anim_levelfireplatform2_2739 = {1, &anim_array_levelfireplatform2_2739[0]};
static bool anim_levelfireplatform2_2739_initialized;
class LevelFirePlatform2_2739 : public Active
{
public:
    LevelFirePlatform2_2739(int x, int y) : Active(x, y, LevelFirePlatform2_2739_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Level_FirePlatform 2", 20);
#endif
        this->animations = &anim_levelfireplatform2_2739;
        if (!anim_levelfireplatform2_2739_initialized) {
            anim_levelfireplatform2_2739_initialized = true;
            images_levelfireplatform2_2739_0_0[0] = get_internal_image(11260);
            images_levelfireplatform2_2739_0_0[1] = get_internal_image(11253);
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
FrameObject * create_levelfireplatform2_2739(int x, int y)
{
    return new (Active::pool.create()) LevelFirePlatform2_2739(x, y);
}
static Image* images_bosssyntaxspiderbody_2740_0_0[1];
static Direction direction_bosssyntaxspiderbody_2740_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxspiderbody_2740_0_0, 1};
static Image* images_bosssyntaxspiderbody_2740_0_16[1];
static Direction direction_bosssyntaxspiderbody_2740_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxspiderbody_2740_0_16, 1};
static Image* images_bosssyntaxspiderbody_2740_0_24[1];
static Direction direction_bosssyntaxspiderbody_2740_0_24 = {24, 50, 50, 0, 1, images_bosssyntaxspiderbody_2740_0_24, 1};
static Animation anim_bosssyntaxspiderbody_2740_0 = {&direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, NULL, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, &direction_bosssyntaxspiderbody_2740_0_16, NULL, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, &direction_bosssyntaxspiderbody_2740_0_24, NULL, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0, &direction_bosssyntaxspiderbody_2740_0_0};
static Image* images_bosssyntaxspiderbody_2740_8_0[2];
static Direction direction_bosssyntaxspiderbody_2740_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxspiderbody_2740_8_0, 2};
static Image* images_bosssyntaxspiderbody_2740_8_16[2];
static Direction direction_bosssyntaxspiderbody_2740_8_16 = {16, 50, 50, 0, -1, images_bosssyntaxspiderbody_2740_8_16, 2};
static Image* images_bosssyntaxspiderbody_2740_8_24[2];
static Direction direction_bosssyntaxspiderbody_2740_8_24 = {24, 50, 50, 0, -1, images_bosssyntaxspiderbody_2740_8_24, 2};
static Animation anim_bosssyntaxspiderbody_2740_8 = {&direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, NULL, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, &direction_bosssyntaxspiderbody_2740_8_16, NULL, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, &direction_bosssyntaxspiderbody_2740_8_24, NULL, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0, &direction_bosssyntaxspiderbody_2740_8_0};
static Animation * anim_array_bosssyntaxspiderbody_2740[9] = {&anim_bosssyntaxspiderbody_2740_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxspiderbody_2740_8};
static Animations anim_bosssyntaxspiderbody_2740 = {9, &anim_array_bosssyntaxspiderbody_2740[0]};
static bool anim_bosssyntaxspiderbody_2740_initialized;
class BossSyntaxSpiderBody_2740 : public Active
{
public:
    BossSyntaxSpiderBody_2740(int x, int y) : Active(x, y, BossSyntaxSpiderBody_2740_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderBody", 21);
#endif
        this->animations = &anim_bosssyntaxspiderbody_2740;
        if (!anim_bosssyntaxspiderbody_2740_initialized) {
            anim_bosssyntaxspiderbody_2740_initialized = true;
            images_bosssyntaxspiderbody_2740_0_0[0] = get_internal_image(599);
            images_bosssyntaxspiderbody_2740_0_16[0] = get_internal_image(3239);
            images_bosssyntaxspiderbody_2740_0_24[0] = get_internal_image(1374);
            images_bosssyntaxspiderbody_2740_8_0[0] = get_internal_image(599);
            images_bosssyntaxspiderbody_2740_8_0[1] = get_internal_image(3277);
            images_bosssyntaxspiderbody_2740_8_16[0] = get_internal_image(3239);
            images_bosssyntaxspiderbody_2740_8_16[1] = get_internal_image(3240);
            images_bosssyntaxspiderbody_2740_8_24[0] = get_internal_image(1374);
            images_bosssyntaxspiderbody_2740_8_24[1] = get_internal_image(3279);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_bosssyntaxspiderbody_2740(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderBody_2740(x, y);
}
static Image* images_bosssyntaxspiderarm_2741_0_0[1];
static Direction direction_bosssyntaxspiderarm_2741_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxspiderarm_2741_0_0, 1};
static Image* images_bosssyntaxspiderarm_2741_0_16[1];
static Direction direction_bosssyntaxspiderarm_2741_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxspiderarm_2741_0_16, 1};
static Animation anim_bosssyntaxspiderarm_2741_0 = {&direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, NULL, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, &direction_bosssyntaxspiderarm_2741_0_16, NULL, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0, &direction_bosssyntaxspiderarm_2741_0_0};
static Image* images_bosssyntaxspiderarm_2741_8_0[2];
static Direction direction_bosssyntaxspiderarm_2741_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxspiderarm_2741_8_0, 2};
static Image* images_bosssyntaxspiderarm_2741_8_16[2];
static Direction direction_bosssyntaxspiderarm_2741_8_16 = {16, 50, 50, 0, -1, images_bosssyntaxspiderarm_2741_8_16, 2};
static Animation anim_bosssyntaxspiderarm_2741_8 = {&direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, NULL, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, &direction_bosssyntaxspiderarm_2741_8_16, NULL, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0, &direction_bosssyntaxspiderarm_2741_8_0};
static Animation * anim_array_bosssyntaxspiderarm_2741[9] = {&anim_bosssyntaxspiderarm_2741_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxspiderarm_2741_8};
static Animations anim_bosssyntaxspiderarm_2741 = {9, &anim_array_bosssyntaxspiderarm_2741[0]};
static bool anim_bosssyntaxspiderarm_2741_initialized;
class BossSyntaxSpiderArm_2741 : public Active
{
public:
    BossSyntaxSpiderArm_2741(int x, int y) : Active(x, y, BossSyntaxSpiderArm_2741_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderArm", 20);
#endif
        this->animations = &anim_bosssyntaxspiderarm_2741;
        if (!anim_bosssyntaxspiderarm_2741_initialized) {
            anim_bosssyntaxspiderarm_2741_initialized = true;
            images_bosssyntaxspiderarm_2741_0_0[0] = get_internal_image(1382);
            images_bosssyntaxspiderarm_2741_0_16[0] = get_internal_image(3116);
            images_bosssyntaxspiderarm_2741_8_0[0] = get_internal_image(1382);
            images_bosssyntaxspiderarm_2741_8_0[1] = get_internal_image(3127);
            images_bosssyntaxspiderarm_2741_8_16[0] = get_internal_image(3116);
            images_bosssyntaxspiderarm_2741_8_16[1] = get_internal_image(3131);
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
FrameObject * create_bosssyntaxspiderarm_2741(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderArm_2741(x, y);
}
static Image* images_bosssyntaxspiderlavacannon_2742_0_0[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxspiderlavacannon_2742_0_0, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_0_1[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_1 = {1, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_0_1, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_0_8[1];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_8 = {8, 50, 50, 0, 1, images_bosssyntaxspiderlavacannon_2742_0_8, 1};
static Image* images_bosssyntaxspiderlavacannon_2742_0_16[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxspiderlavacannon_2742_0_16, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_0_17[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_17 = {17, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_0_17, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_0_24[1];
static Direction direction_bosssyntaxspiderlavacannon_2742_0_24 = {24, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_0_24, 1};
static Animation anim_bosssyntaxspiderlavacannon_2742_0 = {&direction_bosssyntaxspiderlavacannon_2742_0_0, &direction_bosssyntaxspiderlavacannon_2742_0_1, &direction_bosssyntaxspiderlavacannon_2742_0_1, &direction_bosssyntaxspiderlavacannon_2742_0_1, &direction_bosssyntaxspiderlavacannon_2742_0_1, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, &direction_bosssyntaxspiderlavacannon_2742_0_8, NULL, &direction_bosssyntaxspiderlavacannon_2742_0_16, &direction_bosssyntaxspiderlavacannon_2742_0_16, &direction_bosssyntaxspiderlavacannon_2742_0_16, &direction_bosssyntaxspiderlavacannon_2742_0_16, &direction_bosssyntaxspiderlavacannon_2742_0_17, &direction_bosssyntaxspiderlavacannon_2742_0_17, &direction_bosssyntaxspiderlavacannon_2742_0_17, &direction_bosssyntaxspiderlavacannon_2742_0_17, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, &direction_bosssyntaxspiderlavacannon_2742_0_24, NULL, &direction_bosssyntaxspiderlavacannon_2742_0_0, &direction_bosssyntaxspiderlavacannon_2742_0_0, &direction_bosssyntaxspiderlavacannon_2742_0_0};
static Image* images_bosssyntaxspiderlavacannon_2742_7_0[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_7_0 = {0, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_7_0, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_7_16[4];
static Direction direction_bosssyntaxspiderlavacannon_2742_7_16 = {16, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_7_16, 4};
static Image* images_bosssyntaxspiderlavacannon_2742_7_24[2];
static Direction direction_bosssyntaxspiderlavacannon_2742_7_24 = {24, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_7_24, 2};
static Animation anim_bosssyntaxspiderlavacannon_2742_7 = {&direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, NULL, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, &direction_bosssyntaxspiderlavacannon_2742_7_16, NULL, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, &direction_bosssyntaxspiderlavacannon_2742_7_24, NULL, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0, &direction_bosssyntaxspiderlavacannon_2742_7_0};
static Image* images_bosssyntaxspiderlavacannon_2742_8_0[2];
static Direction direction_bosssyntaxspiderlavacannon_2742_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_8_0, 2};
static Image* images_bosssyntaxspiderlavacannon_2742_8_16[2];
static Direction direction_bosssyntaxspiderlavacannon_2742_8_16 = {16, 50, 50, 0, -1, images_bosssyntaxspiderlavacannon_2742_8_16, 2};
static Animation anim_bosssyntaxspiderlavacannon_2742_8 = {&direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, NULL, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, &direction_bosssyntaxspiderlavacannon_2742_8_16, NULL, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0, &direction_bosssyntaxspiderlavacannon_2742_8_0};
static Animation * anim_array_bosssyntaxspiderlavacannon_2742[9] = {&anim_bosssyntaxspiderlavacannon_2742_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxspiderlavacannon_2742_7, &anim_bosssyntaxspiderlavacannon_2742_8};
static Animations anim_bosssyntaxspiderlavacannon_2742 = {9, &anim_array_bosssyntaxspiderlavacannon_2742[0]};
static bool anim_bosssyntaxspiderlavacannon_2742_initialized;
class BossSyntaxSpiderLavaCannon_2742 : public Active
{
public:
    BossSyntaxSpiderLavaCannon_2742(int x, int y) : Active(x, y, BossSyntaxSpiderLavaCannon_2742_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderLavaCannon", 27);
#endif
        this->animations = &anim_bosssyntaxspiderlavacannon_2742;
        if (!anim_bosssyntaxspiderlavacannon_2742_initialized) {
            anim_bosssyntaxspiderlavacannon_2742_initialized = true;
            images_bosssyntaxspiderlavacannon_2742_0_0[0] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_0_0[1] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_0_0[2] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_0_0[3] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_0_1[0] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_0_1[1] = get_internal_image(2290);
            images_bosssyntaxspiderlavacannon_2742_0_1[2] = get_internal_image(2291);
            images_bosssyntaxspiderlavacannon_2742_0_1[3] = get_internal_image(2330);
            images_bosssyntaxspiderlavacannon_2742_0_8[0] = get_internal_image(1812);
            images_bosssyntaxspiderlavacannon_2742_0_16[0] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_0_16[1] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_0_16[2] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_0_16[3] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_0_17[0] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_0_17[1] = get_internal_image(2292);
            images_bosssyntaxspiderlavacannon_2742_0_17[2] = get_internal_image(2331);
            images_bosssyntaxspiderlavacannon_2742_0_17[3] = get_internal_image(2344);
            images_bosssyntaxspiderlavacannon_2742_0_24[0] = get_internal_image(1816);
            images_bosssyntaxspiderlavacannon_2742_7_0[0] = get_internal_image(1817);
            images_bosssyntaxspiderlavacannon_2742_7_0[1] = get_internal_image(1818);
            images_bosssyntaxspiderlavacannon_2742_7_0[2] = get_internal_image(1819);
            images_bosssyntaxspiderlavacannon_2742_7_0[3] = get_internal_image(1820);
            images_bosssyntaxspiderlavacannon_2742_7_16[0] = get_internal_image(1821);
            images_bosssyntaxspiderlavacannon_2742_7_16[1] = get_internal_image(1822);
            images_bosssyntaxspiderlavacannon_2742_7_16[2] = get_internal_image(1823);
            images_bosssyntaxspiderlavacannon_2742_7_16[3] = get_internal_image(1825);
            images_bosssyntaxspiderlavacannon_2742_7_24[0] = get_internal_image(1827);
            images_bosssyntaxspiderlavacannon_2742_7_24[1] = get_internal_image(1828);
            images_bosssyntaxspiderlavacannon_2742_8_0[0] = get_internal_image(1811);
            images_bosssyntaxspiderlavacannon_2742_8_0[1] = get_internal_image(2176);
            images_bosssyntaxspiderlavacannon_2742_8_16[0] = get_internal_image(1814);
            images_bosssyntaxspiderlavacannon_2742_8_16[1] = get_internal_image(2171);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 10);
    }
};
FrameObject * create_bosssyntaxspiderlavacannon_2742(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderLavaCannon_2742(x, y);
}
static Image* images_bosssyntaxspider_2743_0_0[2];
static Direction direction_bosssyntaxspider_2743_0_0 = {0, 40, 40, 0, -1, images_bosssyntaxspider_2743_0_0, 2};
static Image* images_bosssyntaxspider_2743_0_16[2];
static Direction direction_bosssyntaxspider_2743_0_16 = {16, 40, 40, 0, -1, images_bosssyntaxspider_2743_0_16, 2};
static Image* images_bosssyntaxspider_2743_0_24[2];
static Direction direction_bosssyntaxspider_2743_0_24 = {24, 40, 40, 0, -1, images_bosssyntaxspider_2743_0_24, 2};
static Animation anim_bosssyntaxspider_2743_0 = {&direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, NULL, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, &direction_bosssyntaxspider_2743_0_16, NULL, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, &direction_bosssyntaxspider_2743_0_24, NULL, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0, &direction_bosssyntaxspider_2743_0_0};
static Image* images_bosssyntaxspider_2743_7_24[2];
static Direction direction_bosssyntaxspider_2743_7_24 = {24, 40, 40, 0, -1, images_bosssyntaxspider_2743_7_24, 2};
static Animation anim_bosssyntaxspider_2743_7 = {&direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, NULL, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24, &direction_bosssyntaxspider_2743_7_24};
static Image* images_bosssyntaxspider_2743_8_0[2];
static Direction direction_bosssyntaxspider_2743_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxspider_2743_8_0, 2};
static Image* images_bosssyntaxspider_2743_8_16[2];
static Direction direction_bosssyntaxspider_2743_8_16 = {16, 50, 50, 0, -1, images_bosssyntaxspider_2743_8_16, 2};
static Image* images_bosssyntaxspider_2743_8_24[2];
static Direction direction_bosssyntaxspider_2743_8_24 = {24, 50, 50, 0, -1, images_bosssyntaxspider_2743_8_24, 2};
static Animation anim_bosssyntaxspider_2743_8 = {&direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, NULL, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, &direction_bosssyntaxspider_2743_8_16, NULL, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, &direction_bosssyntaxspider_2743_8_24, NULL, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0, &direction_bosssyntaxspider_2743_8_0};
static Image* images_bosssyntaxspider_2743_11_0[18];
static Direction direction_bosssyntaxspider_2743_11_0 = {0, 70, 70, 0, 1, images_bosssyntaxspider_2743_11_0, 18};
static Animation anim_bosssyntaxspider_2743_11 = {&direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, NULL, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0, &direction_bosssyntaxspider_2743_11_0};
static Animation * anim_array_bosssyntaxspider_2743[12] = {&anim_bosssyntaxspider_2743_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxspider_2743_7, &anim_bosssyntaxspider_2743_8, NULL, NULL, &anim_bosssyntaxspider_2743_11};
static Animations anim_bosssyntaxspider_2743 = {12, &anim_array_bosssyntaxspider_2743[0]};
static bool anim_bosssyntaxspider_2743_initialized;
class BossSyntaxSpider_2743 : public Active
{
public:
    BossSyntaxSpider_2743(int x, int y) : Active(x, y, BossSyntaxSpider_2743_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpider", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosssyntaxspider_2743;
        if (!anim_bosssyntaxspider_2743_initialized) {
            anim_bosssyntaxspider_2743_initialized = true;
            images_bosssyntaxspider_2743_0_0[0] = get_internal_image(3230);
            images_bosssyntaxspider_2743_0_0[1] = get_internal_image(3228);
            images_bosssyntaxspider_2743_0_16[0] = get_internal_image(3233);
            images_bosssyntaxspider_2743_0_16[1] = get_internal_image(3234);
            images_bosssyntaxspider_2743_0_24[0] = get_internal_image(3242);
            images_bosssyntaxspider_2743_0_24[1] = get_internal_image(3536);
            images_bosssyntaxspider_2743_7_24[0] = get_internal_image(5795);
            images_bosssyntaxspider_2743_7_24[1] = get_internal_image(5986);
            images_bosssyntaxspider_2743_8_0[0] = get_internal_image(1834);
            images_bosssyntaxspider_2743_8_0[1] = get_internal_image(758);
            images_bosssyntaxspider_2743_8_16[0] = get_internal_image(1835);
            images_bosssyntaxspider_2743_8_16[1] = get_internal_image(757);
            images_bosssyntaxspider_2743_8_24[0] = get_internal_image(1839);
            images_bosssyntaxspider_2743_8_24[1] = get_internal_image(1641);
            images_bosssyntaxspider_2743_11_0[0] = get_internal_image(5038);
            images_bosssyntaxspider_2743_11_0[1] = get_internal_image(5447);
            images_bosssyntaxspider_2743_11_0[2] = get_internal_image(5555);
            images_bosssyntaxspider_2743_11_0[3] = get_internal_image(5556);
            images_bosssyntaxspider_2743_11_0[4] = get_internal_image(5561);
            images_bosssyntaxspider_2743_11_0[5] = get_internal_image(5555);
            images_bosssyntaxspider_2743_11_0[6] = get_internal_image(5562);
            images_bosssyntaxspider_2743_11_0[7] = get_internal_image(5038);
            images_bosssyntaxspider_2743_11_0[8] = get_internal_image(5447);
            images_bosssyntaxspider_2743_11_0[9] = get_internal_image(5555);
            images_bosssyntaxspider_2743_11_0[10] = get_internal_image(5556);
            images_bosssyntaxspider_2743_11_0[11] = get_internal_image(5561);
            images_bosssyntaxspider_2743_11_0[12] = get_internal_image(5555);
            images_bosssyntaxspider_2743_11_0[13] = get_internal_image(5562);
            images_bosssyntaxspider_2743_11_0[14] = get_internal_image(5563);
            images_bosssyntaxspider_2743_11_0[15] = get_internal_image(5570);
            images_bosssyntaxspider_2743_11_0[16] = get_internal_image(5571);
            images_bosssyntaxspider_2743_11_0[17] = get_internal_image(5570);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 200);
    }
};
FrameObject * create_bosssyntaxspider_2743(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpider_2743(x, y);
}
static Image* images_bosssyntaxspiderlegfront_2744_0_0[1];
static Direction direction_bosssyntaxspiderlegfront_2744_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxspiderlegfront_2744_0_0, 1};
static Image* images_bosssyntaxspiderlegfront_2744_0_16[1];
static Direction direction_bosssyntaxspiderlegfront_2744_0_16 = {16, 50, 50, 0, 1, images_bosssyntaxspiderlegfront_2744_0_16, 1};
static Animation anim_bosssyntaxspiderlegfront_2744_0 = {&direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, NULL, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, &direction_bosssyntaxspiderlegfront_2744_0_16, NULL, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0, &direction_bosssyntaxspiderlegfront_2744_0_0};
static Image* images_bosssyntaxspiderlegfront_2744_8_0[2];
static Direction direction_bosssyntaxspiderlegfront_2744_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxspiderlegfront_2744_8_0, 2};
static Image* images_bosssyntaxspiderlegfront_2744_8_16[2];
static Direction direction_bosssyntaxspiderlegfront_2744_8_16 = {16, 50, 50, 0, -1, images_bosssyntaxspiderlegfront_2744_8_16, 2};
static Animation anim_bosssyntaxspiderlegfront_2744_8 = {&direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, NULL, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, &direction_bosssyntaxspiderlegfront_2744_8_16, NULL, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0, &direction_bosssyntaxspiderlegfront_2744_8_0};
static Animation * anim_array_bosssyntaxspiderlegfront_2744[9] = {&anim_bosssyntaxspiderlegfront_2744_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxspiderlegfront_2744_8};
static Animations anim_bosssyntaxspiderlegfront_2744 = {9, &anim_array_bosssyntaxspiderlegfront_2744[0]};
static bool anim_bosssyntaxspiderlegfront_2744_initialized;
class BossSyntaxSpiderLegFront_2744 : public Active
{
public:
    BossSyntaxSpiderLegFront_2744(int x, int y) : Active(x, y, BossSyntaxSpiderLegFront_2744_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderLegFront", 25);
#endif
        this->animations = &anim_bosssyntaxspiderlegfront_2744;
        if (!anim_bosssyntaxspiderlegfront_2744_initialized) {
            anim_bosssyntaxspiderlegfront_2744_initialized = true;
            images_bosssyntaxspiderlegfront_2744_0_0[0] = get_internal_image(1378);
            images_bosssyntaxspiderlegfront_2744_0_16[0] = get_internal_image(1385);
            images_bosssyntaxspiderlegfront_2744_8_0[0] = get_internal_image(1378);
            images_bosssyntaxspiderlegfront_2744_8_0[1] = get_internal_image(1387);
            images_bosssyntaxspiderlegfront_2744_8_16[0] = get_internal_image(1385);
            images_bosssyntaxspiderlegfront_2744_8_16[1] = get_internal_image(1386);
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
FrameObject * create_bosssyntaxspiderlegfront_2744(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderLegFront_2744(x, y);
}
static Image* images_bosslavasplash1_2745_0_0[6];
static Direction direction_bosslavasplash1_2745_0_0 = {0, 75, 75, 0, -1, images_bosslavasplash1_2745_0_0, 6};
static Animation anim_bosslavasplash1_2745_0 = {&direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, NULL, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0, &direction_bosslavasplash1_2745_0_0};
static Animation * anim_array_bosslavasplash1_2745[1] = {&anim_bosslavasplash1_2745_0};
static Animations anim_bosslavasplash1_2745 = {1, &anim_array_bosslavasplash1_2745[0]};
static bool anim_bosslavasplash1_2745_initialized;
class BossLavaSplash1_2745 : public Active
{
public:
    BossLavaSplash1_2745(int x, int y) : Active(x, y, BossLavaSplash1_2745_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplash 1", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplash1_2745;
        if (!anim_bosslavasplash1_2745_initialized) {
            anim_bosslavasplash1_2745_initialized = true;
            images_bosslavasplash1_2745_0_0[0] = get_internal_image(1843);
            images_bosslavasplash1_2745_0_0[1] = get_internal_image(1844);
            images_bosslavasplash1_2745_0_0[2] = get_internal_image(1845);
            images_bosslavasplash1_2745_0_0[3] = get_internal_image(1846);
            images_bosslavasplash1_2745_0_0[4] = get_internal_image(1847);
            images_bosslavasplash1_2745_0_0[5] = get_internal_image(1853);
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
FrameObject * create_bosslavasplash1_2745(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplash1_2745(x, y);
}
static Image* images_bosslavasplash2_2746_0_0[6];
static Direction direction_bosslavasplash2_2746_0_0 = {0, 75, 75, 0, -1, images_bosslavasplash2_2746_0_0, 6};
static Animation anim_bosslavasplash2_2746_0 = {&direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, NULL, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0, &direction_bosslavasplash2_2746_0_0};
static Animation * anim_array_bosslavasplash2_2746[1] = {&anim_bosslavasplash2_2746_0};
static Animations anim_bosslavasplash2_2746 = {1, &anim_array_bosslavasplash2_2746[0]};
static bool anim_bosslavasplash2_2746_initialized;
class BossLavaSplash2_2746 : public Active
{
public:
    BossLavaSplash2_2746(int x, int y) : Active(x, y, BossLavaSplash2_2746_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplash 2", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplash2_2746;
        if (!anim_bosslavasplash2_2746_initialized) {
            anim_bosslavasplash2_2746_initialized = true;
            images_bosslavasplash2_2746_0_0[0] = get_internal_image(1873);
            images_bosslavasplash2_2746_0_0[1] = get_internal_image(1894);
            images_bosslavasplash2_2746_0_0[2] = get_internal_image(1895);
            images_bosslavasplash2_2746_0_0[3] = get_internal_image(1897);
            images_bosslavasplash2_2746_0_0[4] = get_internal_image(1898);
            images_bosslavasplash2_2746_0_0[5] = get_internal_image(1899);
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
FrameObject * create_bosslavasplash2_2746(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplash2_2746(x, y);
}
static Image* images_bosssyntaxspiderweb_2747_0_0[8];
static Direction direction_bosssyntaxspiderweb_2747_0_0 = {0, 100, 100, 0, -1, images_bosssyntaxspiderweb_2747_0_0, 8};
static Animation anim_bosssyntaxspiderweb_2747_0 = {&direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, NULL, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0, &direction_bosssyntaxspiderweb_2747_0_0};
static Animation * anim_array_bosssyntaxspiderweb_2747[1] = {&anim_bosssyntaxspiderweb_2747_0};
static Animations anim_bosssyntaxspiderweb_2747 = {1, &anim_array_bosssyntaxspiderweb_2747[0]};
static bool anim_bosssyntaxspiderweb_2747_initialized;
class BossSyntaxSpiderWeb_2747 : public Active
{
public:
    BossSyntaxSpiderWeb_2747(int x, int y) : Active(x, y, BossSyntaxSpiderWeb_2747_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSpiderWeb", 20);
#endif
        this->animations = &anim_bosssyntaxspiderweb_2747;
        if (!anim_bosssyntaxspiderweb_2747_initialized) {
            anim_bosssyntaxspiderweb_2747_initialized = true;
            images_bosssyntaxspiderweb_2747_0_0[0] = get_internal_image(1916);
            images_bosssyntaxspiderweb_2747_0_0[1] = get_internal_image(1931);
            images_bosssyntaxspiderweb_2747_0_0[2] = get_internal_image(1932);
            images_bosssyntaxspiderweb_2747_0_0[3] = get_internal_image(1934);
            images_bosssyntaxspiderweb_2747_0_0[4] = get_internal_image(2038);
            images_bosssyntaxspiderweb_2747_0_0[5] = get_internal_image(2039);
            images_bosssyntaxspiderweb_2747_0_0[6] = get_internal_image(2276);
            images_bosssyntaxspiderweb_2747_0_0[7] = get_internal_image(2277);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_bosssyntaxspiderweb_2747(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSpiderWeb_2747(x, y);
}
static Image* images_hazardfloortrap_2748_0_0[2];
static Direction direction_hazardfloortrap_2748_0_0 = {0, 8, 8, 0, -1, images_hazardfloortrap_2748_0_0, 2};
static Animation anim_hazardfloortrap_2748_0 = {&direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, NULL, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0, &direction_hazardfloortrap_2748_0_0};
static Image* images_hazardfloortrap_2748_7_0[2];
static Direction direction_hazardfloortrap_2748_7_0 = {0, 35, 35, 0, -1, images_hazardfloortrap_2748_7_0, 2};
static Animation anim_hazardfloortrap_2748_7 = {&direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, NULL, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0, &direction_hazardfloortrap_2748_7_0};
static Animation * anim_array_hazardfloortrap_2748[8] = {&anim_hazardfloortrap_2748_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_hazardfloortrap_2748_7};
static Animations anim_hazardfloortrap_2748 = {8, &anim_array_hazardfloortrap_2748[0]};
static bool anim_hazardfloortrap_2748_initialized;
class HazardFloorTrap_2748 : public Active
{
public:
    HazardFloorTrap_2748(int x, int y) : Active(x, y, HazardFloorTrap_2748_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Hazard_FloorTrap", 16);
#endif
        this->animations = &anim_hazardfloortrap_2748;
        if (!anim_hazardfloortrap_2748_initialized) {
            anim_hazardfloortrap_2748_initialized = true;
            images_hazardfloortrap_2748_0_0[0] = get_internal_image(1687);
            images_hazardfloortrap_2748_0_0[1] = get_internal_image(1769);
            images_hazardfloortrap_2748_7_0[0] = get_internal_image(1687);
            images_hazardfloortrap_2748_7_0[1] = get_internal_image(1769);
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
FrameObject * create_hazardfloortrap_2748(int x, int y)
{
    return new (Active::pool.create()) HazardFloorTrap_2748(x, y);
}
static Image* images_bossrobosquidleftarm_2749_0_0[1];
static Direction direction_bossrobosquidleftarm_2749_0_0 = {0, 50, 50, 0, 1, images_bossrobosquidleftarm_2749_0_0, 1};
static Animation anim_bossrobosquidleftarm_2749_0 = {&direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, NULL, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0, &direction_bossrobosquidleftarm_2749_0_0};
static Animation * anim_array_bossrobosquidleftarm_2749[1] = {&anim_bossrobosquidleftarm_2749_0};
static Animations anim_bossrobosquidleftarm_2749 = {1, &anim_array_bossrobosquidleftarm_2749[0]};
static bool anim_bossrobosquidleftarm_2749_initialized;
class BossRobosquidLeftArm_2749 : public Active
{
public:
    BossRobosquidLeftArm_2749(int x, int y) : Active(x, y, BossRobosquidLeftArm_2749_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RobosquidLeftArm", 21);
#endif
        this->animations = &anim_bossrobosquidleftarm_2749;
        if (!anim_bossrobosquidleftarm_2749_initialized) {
            anim_bossrobosquidleftarm_2749_initialized = true;
            images_bossrobosquidleftarm_2749_0_0[0] = get_internal_image(9264);
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
FrameObject * create_bossrobosquidleftarm_2749(int x, int y)
{
    return new (Active::pool.create()) BossRobosquidLeftArm_2749(x, y);
}
static Image* images_bossrobosquidrightarm_2750_0_0[1];
static Direction direction_bossrobosquidrightarm_2750_0_0 = {0, 50, 50, 0, 1, images_bossrobosquidrightarm_2750_0_0, 1};
static Animation anim_bossrobosquidrightarm_2750_0 = {&direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, NULL, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0, &direction_bossrobosquidrightarm_2750_0_0};
static Animation * anim_array_bossrobosquidrightarm_2750[1] = {&anim_bossrobosquidrightarm_2750_0};
static Animations anim_bossrobosquidrightarm_2750 = {1, &anim_array_bossrobosquidrightarm_2750[0]};
static bool anim_bossrobosquidrightarm_2750_initialized;
class BossRobosquidRightArm_2750 : public Active
{
public:
    BossRobosquidRightArm_2750(int x, int y) : Active(x, y, BossRobosquidRightArm_2750_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RobosquidRightArm", 22);
#endif
        this->animations = &anim_bossrobosquidrightarm_2750;
        if (!anim_bossrobosquidrightarm_2750_initialized) {
            anim_bossrobosquidrightarm_2750_initialized = true;
            images_bossrobosquidrightarm_2750_0_0[0] = get_internal_image(9264);
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
FrameObject * create_bossrobosquidrightarm_2750(int x, int y)
{
    return new (Active::pool.create()) BossRobosquidRightArm_2750(x, y);
}
static Image* images_bossrobosquidglass_2751_0_0[2];
static Direction direction_bossrobosquidglass_2751_0_0 = {0, 14, 14, 0, -1, images_bossrobosquidglass_2751_0_0, 2};
static Image* images_bossrobosquidglass_2751_0_1[1];
static Direction direction_bossrobosquidglass_2751_0_1 = {1, 50, 50, 0, 1, images_bossrobosquidglass_2751_0_1, 1};
static Image* images_bossrobosquidglass_2751_0_8[1];
static Direction direction_bossrobosquidglass_2751_0_8 = {8, 50, 50, 0, 1, images_bossrobosquidglass_2751_0_8, 1};
static Animation anim_bossrobosquidglass_2751_0 = {&direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_1, &direction_bossrobosquidglass_2751_0_1, &direction_bossrobosquidglass_2751_0_1, &direction_bossrobosquidglass_2751_0_1, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, &direction_bossrobosquidglass_2751_0_8, NULL, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0, &direction_bossrobosquidglass_2751_0_0};
static Animation * anim_array_bossrobosquidglass_2751[1] = {&anim_bossrobosquidglass_2751_0};
static Animations anim_bossrobosquidglass_2751 = {1, &anim_array_bossrobosquidglass_2751[0]};
static bool anim_bossrobosquidglass_2751_initialized;
class BossRobosquidGlass_2751 : public Active
{
public:
    BossRobosquidGlass_2751(int x, int y) : Active(x, y, BossRobosquidGlass_2751_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RobosquidGlass", 19);
#endif
        this->animations = &anim_bossrobosquidglass_2751;
        if (!anim_bossrobosquidglass_2751_initialized) {
            anim_bossrobosquidglass_2751_initialized = true;
            images_bossrobosquidglass_2751_0_0[0] = get_internal_image(11966);
            images_bossrobosquidglass_2751_0_0[1] = get_internal_image(12003);
            images_bossrobosquidglass_2751_0_1[0] = get_internal_image(12004);
            images_bossrobosquidglass_2751_0_8[0] = get_internal_image(12005);
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
FrameObject * create_bossrobosquidglass_2751(int x, int y)
{
    return new (Active::pool.create()) BossRobosquidGlass_2751(x, y);
}
static Image* images_bossrobosquid_2752_0_0[1];
static Direction direction_bossrobosquid_2752_0_0 = {0, 0, 0, 0, 1, images_bossrobosquid_2752_0_0, 1};
static Animation anim_bossrobosquid_2752_0 = {&direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, NULL, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0, &direction_bossrobosquid_2752_0_0};
static Image* images_bossrobosquid_2752_8_0[2];
static Direction direction_bossrobosquid_2752_8_0 = {0, 50, 50, 0, -1, images_bossrobosquid_2752_8_0, 2};
static Animation anim_bossrobosquid_2752_8 = {&direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, NULL, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0, &direction_bossrobosquid_2752_8_0};
static Image* images_bossrobosquid_2752_10_0[4];
static Direction direction_bossrobosquid_2752_10_0 = {0, 12, 12, 3, -1, images_bossrobosquid_2752_10_0, 4};
static Animation anim_bossrobosquid_2752_10 = {&direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, NULL, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0, &direction_bossrobosquid_2752_10_0};
static Image* images_bossrobosquid_2752_11_0[1];
static Direction direction_bossrobosquid_2752_11_0 = {0, 50, 50, 0, 1, images_bossrobosquid_2752_11_0, 1};
static Animation anim_bossrobosquid_2752_11 = {&direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, NULL, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0, &direction_bossrobosquid_2752_11_0};
static Animation * anim_array_bossrobosquid_2752[12] = {&anim_bossrobosquid_2752_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossrobosquid_2752_8, NULL, &anim_bossrobosquid_2752_10, &anim_bossrobosquid_2752_11};
static Animations anim_bossrobosquid_2752 = {12, &anim_array_bossrobosquid_2752[0]};
static bool anim_bossrobosquid_2752_initialized;
class BossRobosquid_2752 : public Active
{
public:
    BossRobosquid_2752(int x, int y) : Active(x, y, BossRobosquid_2752_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Robosquid", 14);
#endif
        this->animations = &anim_bossrobosquid_2752;
        if (!anim_bossrobosquid_2752_initialized) {
            anim_bossrobosquid_2752_initialized = true;
            images_bossrobosquid_2752_0_0[0] = get_internal_image(12204);
            images_bossrobosquid_2752_8_0[0] = get_internal_image(12206);
            images_bossrobosquid_2752_8_0[1] = get_internal_image(12222);
            images_bossrobosquid_2752_10_0[0] = get_internal_image(12222);
            images_bossrobosquid_2752_10_0[1] = get_internal_image(12222);
            images_bossrobosquid_2752_10_0[2] = get_internal_image(12222);
            images_bossrobosquid_2752_10_0[3] = get_internal_image(12224);
            images_bossrobosquid_2752_11_0[0] = get_internal_image(12224);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(4, 40);
        alterables->values.set(5, 5);
        alterables->values.set(6, 30);
        alterables->values.set(7, 30);
        alterables->values.set(8, 150);
        alterables->values.set(13, 1);
        alterables->values.set(16, 5);
    }
};
FrameObject * create_bossrobosquid_2752(int x, int y)
{
    return new (Active::pool.create()) BossRobosquid_2752(x, y);
}
static Image* images_bossrobosquidjet_2753_0_0[2];
static Direction direction_bossrobosquidjet_2753_0_0 = {0, 50, 50, 0, -1, images_bossrobosquidjet_2753_0_0, 2};
static Animation anim_bossrobosquidjet_2753_0 = {&direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, NULL, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0, &direction_bossrobosquidjet_2753_0_0};
static Image* images_bossrobosquidjet_2753_7_0[5];
static Direction direction_bossrobosquidjet_2753_7_0 = {0, 50, 50, 0, 1, images_bossrobosquidjet_2753_7_0, 5};
static Animation anim_bossrobosquidjet_2753_7 = {&direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, NULL, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0, &direction_bossrobosquidjet_2753_7_0};
static Animation * anim_array_bossrobosquidjet_2753[8] = {&anim_bossrobosquidjet_2753_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossrobosquidjet_2753_7};
static Animations anim_bossrobosquidjet_2753 = {8, &anim_array_bossrobosquidjet_2753[0]};
static bool anim_bossrobosquidjet_2753_initialized;
class BossRoboSquidJet_2753 : public Active
{
public:
    BossRoboSquidJet_2753(int x, int y) : Active(x, y, BossRoboSquidJet_2753_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RoboSquidJet", 17);
#endif
        set_visible(false);
        this->animations = &anim_bossrobosquidjet_2753;
        if (!anim_bossrobosquidjet_2753_initialized) {
            anim_bossrobosquidjet_2753_initialized = true;
            images_bossrobosquidjet_2753_0_0[0] = get_internal_image(12230);
            images_bossrobosquidjet_2753_0_0[1] = get_internal_image(12257);
            images_bossrobosquidjet_2753_7_0[0] = get_internal_image(12258);
            images_bossrobosquidjet_2753_7_0[1] = get_internal_image(12267);
            images_bossrobosquidjet_2753_7_0[2] = get_internal_image(12268);
            images_bossrobosquidjet_2753_7_0[3] = get_internal_image(12230);
            images_bossrobosquidjet_2753_7_0[4] = get_internal_image(12257);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(1, -10);
    }
};
FrameObject * create_bossrobosquidjet_2753(int x, int y)
{
    return new (Active::pool.create()) BossRoboSquidJet_2753(x, y);
}
static Image* images_bosssyntaxgrappleline_2754_0_0[1];
static Direction direction_bosssyntaxgrappleline_2754_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxgrappleline_2754_0_0, 1};
static Animation anim_bosssyntaxgrappleline_2754_0 = {&direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, NULL, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0, &direction_bosssyntaxgrappleline_2754_0_0};
static Animation * anim_array_bosssyntaxgrappleline_2754[1] = {&anim_bosssyntaxgrappleline_2754_0};
static Animations anim_bosssyntaxgrappleline_2754 = {1, &anim_array_bosssyntaxgrappleline_2754[0]};
static bool anim_bosssyntaxgrappleline_2754_initialized;
class BossSyntaxGrappleLine_2754 : public Active
{
public:
    BossSyntaxGrappleLine_2754(int x, int y) : Active(x, y, BossSyntaxGrappleLine_2754_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxGrappleLine", 22);
#endif
        this->animations = &anim_bosssyntaxgrappleline_2754;
        if (!anim_bosssyntaxgrappleline_2754_initialized) {
            anim_bosssyntaxgrappleline_2754_initialized = true;
            images_bosssyntaxgrappleline_2754_0_0[0] = get_internal_image(5794);
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
FrameObject * create_bosssyntaxgrappleline_2754(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxGrappleLine_2754(x, y);
}
static Image* images_levellavacascadeend_2755_0_0[1];
static Direction direction_levellavacascadeend_2755_0_0 = {0, 50, 50, 0, 1, images_levellavacascadeend_2755_0_0, 1};
static Animation anim_levellavacascadeend_2755_0 = {&direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, NULL, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0, &direction_levellavacascadeend_2755_0_0};
static Animation * anim_array_levellavacascadeend_2755[1] = {&anim_levellavacascadeend_2755_0};
static Animations anim_levellavacascadeend_2755 = {1, &anim_array_levellavacascadeend_2755[0]};
static bool anim_levellavacascadeend_2755_initialized;
class LevelLavaCascadeEnd_2755 : public Active
{
public:
    LevelLavaCascadeEnd_2755(int x, int y) : Active(x, y, LevelLavaCascadeEnd_2755_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_LavaCascadeEnd", 20);
#endif
        set_visible(false);
        this->animations = &anim_levellavacascadeend_2755;
        if (!anim_levellavacascadeend_2755_initialized) {
            anim_levellavacascadeend_2755_initialized = true;
            images_levellavacascadeend_2755_0_0[0] = get_internal_image(6940);
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
FrameObject * create_levellavacascadeend_2755(int x, int y)
{
    return new (Active::pool.create()) LevelLavaCascadeEnd_2755(x, y);
}
static Image* images_playerblocker_2756_0_0[1];
static Direction direction_playerblocker_2756_0_0 = {0, 50, 50, 0, 1, images_playerblocker_2756_0_0, 1};
static Animation anim_playerblocker_2756_0 = {&direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, NULL, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0, &direction_playerblocker_2756_0_0};
static Animation * anim_array_playerblocker_2756[1] = {&anim_playerblocker_2756_0};
static Animations anim_playerblocker_2756 = {1, &anim_array_playerblocker_2756[0]};
static bool anim_playerblocker_2756_initialized;
class PlayerBlocker_2756 : public Active
{
public:
    PlayerBlocker_2756(int x, int y) : Active(x, y, PlayerBlocker_2756_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("PlayerBlocker", 13);
#endif
        set_visible(false);
        this->animations = &anim_playerblocker_2756;
        if (!anim_playerblocker_2756_initialized) {
            anim_playerblocker_2756_initialized = true;
            images_playerblocker_2756_0_0[0] = get_internal_image(6268);
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
FrameObject * create_playerblocker_2756(int x, int y)
{
    return new (Active::pool.create()) PlayerBlocker_2756(x, y);
}
static Image* images_levelheatsky_2757_0_0[1];
static Direction direction_levelheatsky_2757_0_0 = {0, 50, 50, 0, 1, images_levelheatsky_2757_0_0, 1};
static Animation anim_levelheatsky_2757_0 = {&direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, NULL, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0, &direction_levelheatsky_2757_0_0};
static Animation * anim_array_levelheatsky_2757[1] = {&anim_levelheatsky_2757_0};
static Animations anim_levelheatsky_2757 = {1, &anim_array_levelheatsky_2757[0]};
static bool anim_levelheatsky_2757_initialized;
class LevelHeatSky_2757 : public Active
{
public:
    LevelHeatSky_2757(int x, int y) : Active(x, y, LevelHeatSky_2757_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HeatSky", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelheatsky_2757;
        if (!anim_levelheatsky_2757_initialized) {
            anim_levelheatsky_2757_initialized = true;
            images_levelheatsky_2757_0_0[0] = get_internal_image(6214);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_levelheatsky_2757(int x, int y)
{
    return new (Active::pool.create()) LevelHeatSky_2757(x, y);
}
class LevelParallaxPiece1_2758 : public SystemBox
{
public:
    LevelParallaxPiece1_2758(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2758_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 64;
        height = 1280;
        type = PATTERN_IMAGE;
        image = get_internal_image(6222);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2758(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2758(x, y);
}
class LevelParallaxPiece2_2759 : public SystemBox
{
public:
    LevelParallaxPiece2_2759(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2759_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 1280;
        type = PATTERN_IMAGE;
        image = get_internal_image(6227);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2759(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2759(x, y);
}
class LevelParallaxPiece3_2760 : public SystemBox
{
public:
    LevelParallaxPiece3_2760(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_2760_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 1920;
        type = PATTERN_IMAGE;
        image = get_internal_image(2733);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_2760(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_2760(x, y);
}
static Image* images_enemysaucerdebris_2761_0_0[3];
static Direction direction_enemysaucerdebris_2761_0_0 = {0, 0, 0, 0, 1, images_enemysaucerdebris_2761_0_0, 3};
static Animation anim_enemysaucerdebris_2761_0 = {&direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, NULL, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0, &direction_enemysaucerdebris_2761_0_0};
static Animation * anim_array_enemysaucerdebris_2761[1] = {&anim_enemysaucerdebris_2761_0};
static Animations anim_enemysaucerdebris_2761 = {1, &anim_array_enemysaucerdebris_2761[0]};
static bool anim_enemysaucerdebris_2761_initialized;
class EnemySaucerDebris_2761 : public Active
{
public:
    EnemySaucerDebris_2761(int x, int y) : Active(x, y, EnemySaucerDebris_2761_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_SaucerDebris", 18);
#endif
        this->animations = &anim_enemysaucerdebris_2761;
        if (!anim_enemysaucerdebris_2761_initialized) {
            anim_enemysaucerdebris_2761_initialized = true;
            images_enemysaucerdebris_2761_0_0[0] = get_internal_image(2500);
            images_enemysaucerdebris_2761_0_0[1] = get_internal_image(832);
            images_enemysaucerdebris_2761_0_0[2] = get_internal_image(2491);
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
FrameObject * create_enemysaucerdebris_2761(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerDebris_2761(x, y);
}
static Image* images_tubebubble_2762_0_0[4];
static Direction direction_tubebubble_2762_0_0 = {0, 0, 0, 3, 1, images_tubebubble_2762_0_0, 4};
static Animation anim_tubebubble_2762_0 = {&direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, NULL, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0, &direction_tubebubble_2762_0_0};
static Animation * anim_array_tubebubble_2762[1] = {&anim_tubebubble_2762_0};
static Animations anim_tubebubble_2762 = {1, &anim_array_tubebubble_2762[0]};
static bool anim_tubebubble_2762_initialized;
class TubeBubble_2762 : public Active
{
public:
    TubeBubble_2762(int x, int y) : Active(x, y, TubeBubble_2762_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TubeBubble", 10);
#endif
        this->animations = &anim_tubebubble_2762;
        if (!anim_tubebubble_2762_initialized) {
            anim_tubebubble_2762_initialized = true;
            images_tubebubble_2762_0_0[0] = get_internal_image(1517);
            images_tubebubble_2762_0_0[1] = get_internal_image(3628);
            images_tubebubble_2762_0_0[2] = get_internal_image(1770);
            images_tubebubble_2762_0_0[3] = get_internal_image(947);
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
FrameObject * create_tubebubble_2762(int x, int y)
{
    return new (Active::pool.create()) TubeBubble_2762(x, y);
}
static Image* images_enemytankbotdebris_2763_0_0[1];
static Direction direction_enemytankbotdebris_2763_0_0 = {0, 50, 50, 0, -1, images_enemytankbotdebris_2763_0_0, 1};
static Image* images_enemytankbotdebris_2763_0_16[1];
static Direction direction_enemytankbotdebris_2763_0_16 = {16, 50, 50, 0, -1, images_enemytankbotdebris_2763_0_16, 1};
static Animation anim_enemytankbotdebris_2763_0 = {&direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, NULL, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, &direction_enemytankbotdebris_2763_0_16, NULL, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0, &direction_enemytankbotdebris_2763_0_0};
static Animation * anim_array_enemytankbotdebris_2763[1] = {&anim_enemytankbotdebris_2763_0};
static Animations anim_enemytankbotdebris_2763 = {1, &anim_array_enemytankbotdebris_2763[0]};
static bool anim_enemytankbotdebris_2763_initialized;
class EnemyTankbotDebris_2763 : public Active
{
public:
    EnemyTankbotDebris_2763(int x, int y) : Active(x, y, EnemyTankbotDebris_2763_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TankbotDebris", 19);
#endif
        this->animations = &anim_enemytankbotdebris_2763;
        if (!anim_enemytankbotdebris_2763_initialized) {
            anim_enemytankbotdebris_2763_initialized = true;
            images_enemytankbotdebris_2763_0_0[0] = get_internal_image(12350);
            images_enemytankbotdebris_2763_0_16[0] = get_internal_image(12349);
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
FrameObject * create_enemytankbotdebris_2763(int x, int y)
{
    return new (Active::pool.create()) EnemyTankbotDebris_2763(x, y);
}
class TBHugeTube2_2764 : public Backdrop
{
public:
    TBHugeTube2_2764(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_HugeTube 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2838);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbhugetube2_2764(int x, int y)
{
    return new (Backdrop::pool.create()) TBHugeTube2_2764(x, y);
}
static Image* images_tubebubblespawner_2765_0_0[1];
static Direction direction_tubebubblespawner_2765_0_0 = {0, 50, 50, 0, 1, images_tubebubblespawner_2765_0_0, 1};
static Animation anim_tubebubblespawner_2765_0 = {&direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, NULL, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0, &direction_tubebubblespawner_2765_0_0};
static Animation * anim_array_tubebubblespawner_2765[1] = {&anim_tubebubblespawner_2765_0};
static Animations anim_tubebubblespawner_2765 = {1, &anim_array_tubebubblespawner_2765[0]};
static bool anim_tubebubblespawner_2765_initialized;
class TubeBubbleSpawner_2765 : public Active
{
public:
    TubeBubbleSpawner_2765(int x, int y) : Active(x, y, TubeBubbleSpawner_2765_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TubeBubbleSpawner", 17);
#endif
        set_visible(false);
        this->animations = &anim_tubebubblespawner_2765;
        if (!anim_tubebubblespawner_2765_initialized) {
            anim_tubebubblespawner_2765_initialized = true;
            images_tubebubblespawner_2765_0_0[0] = get_internal_image(2094);
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
FrameObject * create_tubebubblespawner_2765(int x, int y)
{
    return new (Active::pool.create()) TubeBubbleSpawner_2765(x, y);
}
class TBBlueWall1_2766 : public Backdrop
{
public:
    TBBlueWall1_2766(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8018);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbbluewall1_2766(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall1_2766(x, y);
}
class TBBluePiping1_2767 : public Backdrop
{
public:
    TBBluePiping1_2767(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3327);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping1_2767(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping1_2767(x, y);
}
class TBBluePiping2_2768 : public Backdrop
{
public:
    TBBluePiping2_2768(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3323);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping2_2768(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping2_2768(x, y);
}
class TBHugeTube1_2769 : public Backdrop
{
public:
    TBHugeTube1_2769(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_HugeTube 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3007);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbhugetube1_2769(int x, int y)
{
    return new (Backdrop::pool.create()) TBHugeTube1_2769(x, y);
}
class TBTunnelTop2_2770 : public Backdrop
{
public:
    TBTunnelTop2_2770(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12420);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop2_2770(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop2_2770(x, y);
}
class TBTunnelBottom2_2771 : public Backdrop
{
public:
    TBTunnelBottom2_2771(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1967);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom2_2771(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom2_2771(x, y);
}
static Image* images_gimmickcrankplatformmid2_2772_0_0[1];
static Direction direction_gimmickcrankplatformmid2_2772_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformmid2_2772_0_0, 1};
static Animation anim_gimmickcrankplatformmid2_2772_0 = {&direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, NULL, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0, &direction_gimmickcrankplatformmid2_2772_0_0};
static Animation * anim_array_gimmickcrankplatformmid2_2772[1] = {&anim_gimmickcrankplatformmid2_2772_0};
static Animations anim_gimmickcrankplatformmid2_2772 = {1, &anim_array_gimmickcrankplatformmid2_2772[0]};
static bool anim_gimmickcrankplatformmid2_2772_initialized;
class GimmickCrankPlatformMid2_2772 : public Active
{
public:
    GimmickCrankPlatformMid2_2772(int x, int y) : Active(x, y, GimmickCrankPlatformMid2_2772_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformMid 2", 26);
#endif
        this->animations = &anim_gimmickcrankplatformmid2_2772;
        if (!anim_gimmickcrankplatformmid2_2772_initialized) {
            anim_gimmickcrankplatformmid2_2772_initialized = true;
            images_gimmickcrankplatformmid2_2772_0_0[0] = get_internal_image(6120);
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
FrameObject * create_gimmickcrankplatformmid2_2772(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformMid2_2772(x, y);
}
static Image* images_gimmickcrankplatformbase2_2773_0_0[1];
static Direction direction_gimmickcrankplatformbase2_2773_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformbase2_2773_0_0, 1};
static Animation anim_gimmickcrankplatformbase2_2773_0 = {&direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, NULL, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0, &direction_gimmickcrankplatformbase2_2773_0_0};
static Animation * anim_array_gimmickcrankplatformbase2_2773[1] = {&anim_gimmickcrankplatformbase2_2773_0};
static Animations anim_gimmickcrankplatformbase2_2773 = {1, &anim_array_gimmickcrankplatformbase2_2773[0]};
static bool anim_gimmickcrankplatformbase2_2773_initialized;
class GimmickCrankPlatformBase2_2773 : public Active
{
public:
    GimmickCrankPlatformBase2_2773(int x, int y) : Active(x, y, GimmickCrankPlatformBase2_2773_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformBase 2", 27);
#endif
        this->animations = &anim_gimmickcrankplatformbase2_2773;
        if (!anim_gimmickcrankplatformbase2_2773_initialized) {
            anim_gimmickcrankplatformbase2_2773_initialized = true;
            images_gimmickcrankplatformbase2_2773_0_0[0] = get_internal_image(6121);
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
FrameObject * create_gimmickcrankplatformbase2_2773(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformBase2_2773(x, y);
}
static Image* images_gimmickcrankplatformarm2_2774_0_0[1];
static Direction direction_gimmickcrankplatformarm2_2774_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformarm2_2774_0_0, 1};
static Animation anim_gimmickcrankplatformarm2_2774_0 = {&direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, NULL, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0, &direction_gimmickcrankplatformarm2_2774_0_0};
static Animation * anim_array_gimmickcrankplatformarm2_2774[1] = {&anim_gimmickcrankplatformarm2_2774_0};
static Animations anim_gimmickcrankplatformarm2_2774 = {1, &anim_array_gimmickcrankplatformarm2_2774[0]};
static bool anim_gimmickcrankplatformarm2_2774_initialized;
class GimmickCrankPlatformArm2_2774 : public Active
{
public:
    GimmickCrankPlatformArm2_2774(int x, int y) : Active(x, y, GimmickCrankPlatformArm2_2774_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformArm 2", 26);
#endif
        this->animations = &anim_gimmickcrankplatformarm2_2774;
        if (!anim_gimmickcrankplatformarm2_2774_initialized) {
            anim_gimmickcrankplatformarm2_2774_initialized = true;
            images_gimmickcrankplatformarm2_2774_0_0[0] = get_internal_image(6121);
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
FrameObject * create_gimmickcrankplatformarm2_2774(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformArm2_2774(x, y);
}
static Image* images_gimmickcrankplatformmid1_2775_0_0[1];
static Direction direction_gimmickcrankplatformmid1_2775_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformmid1_2775_0_0, 1};
static Animation anim_gimmickcrankplatformmid1_2775_0 = {&direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, NULL, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0, &direction_gimmickcrankplatformmid1_2775_0_0};
static Animation * anim_array_gimmickcrankplatformmid1_2775[1] = {&anim_gimmickcrankplatformmid1_2775_0};
static Animations anim_gimmickcrankplatformmid1_2775 = {1, &anim_array_gimmickcrankplatformmid1_2775[0]};
static bool anim_gimmickcrankplatformmid1_2775_initialized;
class GimmickCrankPlatformMid1_2775 : public Active
{
public:
    GimmickCrankPlatformMid1_2775(int x, int y) : Active(x, y, GimmickCrankPlatformMid1_2775_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformMid 1", 26);
#endif
        this->animations = &anim_gimmickcrankplatformmid1_2775;
        if (!anim_gimmickcrankplatformmid1_2775_initialized) {
            anim_gimmickcrankplatformmid1_2775_initialized = true;
            images_gimmickcrankplatformmid1_2775_0_0[0] = get_internal_image(6120);
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
FrameObject * create_gimmickcrankplatformmid1_2775(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformMid1_2775(x, y);
}
static Image* images_gimmickcrankplatformbase1_2776_0_0[1];
static Direction direction_gimmickcrankplatformbase1_2776_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformbase1_2776_0_0, 1};
static Animation anim_gimmickcrankplatformbase1_2776_0 = {&direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, NULL, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0, &direction_gimmickcrankplatformbase1_2776_0_0};
static Animation * anim_array_gimmickcrankplatformbase1_2776[1] = {&anim_gimmickcrankplatformbase1_2776_0};
static Animations anim_gimmickcrankplatformbase1_2776 = {1, &anim_array_gimmickcrankplatformbase1_2776[0]};
static bool anim_gimmickcrankplatformbase1_2776_initialized;
class GimmickCrankPlatformBase1_2776 : public Active
{
public:
    GimmickCrankPlatformBase1_2776(int x, int y) : Active(x, y, GimmickCrankPlatformBase1_2776_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformBase 1", 27);
#endif
        this->animations = &anim_gimmickcrankplatformbase1_2776;
        if (!anim_gimmickcrankplatformbase1_2776_initialized) {
            anim_gimmickcrankplatformbase1_2776_initialized = true;
            images_gimmickcrankplatformbase1_2776_0_0[0] = get_internal_image(6121);
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
FrameObject * create_gimmickcrankplatformbase1_2776(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformBase1_2776(x, y);
}
static Image* images_gimmickcrankplatformarm1_2777_0_0[1];
static Direction direction_gimmickcrankplatformarm1_2777_0_0 = {0, 50, 50, 0, 1, images_gimmickcrankplatformarm1_2777_0_0, 1};
static Animation anim_gimmickcrankplatformarm1_2777_0 = {&direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, NULL, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0, &direction_gimmickcrankplatformarm1_2777_0_0};
static Animation * anim_array_gimmickcrankplatformarm1_2777[1] = {&anim_gimmickcrankplatformarm1_2777_0};
static Animations anim_gimmickcrankplatformarm1_2777 = {1, &anim_array_gimmickcrankplatformarm1_2777[0]};
static bool anim_gimmickcrankplatformarm1_2777_initialized;
class GimmickCrankPlatformArm1_2777 : public Active
{
public:
    GimmickCrankPlatformArm1_2777(int x, int y) : Active(x, y, GimmickCrankPlatformArm1_2777_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformArm 1", 26);
#endif
        this->animations = &anim_gimmickcrankplatformarm1_2777;
        if (!anim_gimmickcrankplatformarm1_2777_initialized) {
            anim_gimmickcrankplatformarm1_2777_initialized = true;
            images_gimmickcrankplatformarm1_2777_0_0[0] = get_internal_image(6121);
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
FrameObject * create_gimmickcrankplatformarm1_2777(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformArm1_2777(x, y);
}
static Image* images_waterfallback_2778_0_0[5];
static Direction direction_waterfallback_2778_0_0 = {0, 50, 50, 0, -1, images_waterfallback_2778_0_0, 5};
static Animation anim_waterfallback_2778_0 = {&direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, NULL, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0, &direction_waterfallback_2778_0_0};
static Animation * anim_array_waterfallback_2778[1] = {&anim_waterfallback_2778_0};
static Animations anim_waterfallback_2778 = {1, &anim_array_waterfallback_2778[0]};
static bool anim_waterfallback_2778_initialized;
class WaterfallBack_2778 : public Active
{
public:
    WaterfallBack_2778(int x, int y) : Active(x, y, WaterfallBack_2778_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterfallBack", 13);
#endif
        this->animations = &anim_waterfallback_2778;
        if (!anim_waterfallback_2778_initialized) {
            anim_waterfallback_2778_initialized = true;
            images_waterfallback_2778_0_0[0] = get_internal_image(1398);
            images_waterfallback_2778_0_0[1] = get_internal_image(1401);
            images_waterfallback_2778_0_0[2] = get_internal_image(1411);
            images_waterfallback_2778_0_0[3] = get_internal_image(1405);
            images_waterfallback_2778_0_0[4] = get_internal_image(1404);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 192);
        create_alterables();
    }
};
FrameObject * create_waterfallback_2778(int x, int y)
{
    return new (Active::pool.create()) WaterfallBack_2778(x, y);
}
class TBInvertedLoop3_2779 : public Backdrop
{
public:
    TBInvertedLoop3_2779(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_InvertedLoop 3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3500);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbinvertedloop3_2779(int x, int y)
{
    return new (Backdrop::pool.create()) TBInvertedLoop3_2779(x, y);
}
class TBInvertedLoop4_2780 : public Backdrop
{
public:
    TBInvertedLoop4_2780(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_InvertedLoop 4", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3801);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbinvertedloop4_2780(int x, int y)
{
    return new (Backdrop::pool.create()) TBInvertedLoop4_2780(x, y);
}
class TBInvertedLoop1_2781 : public Backdrop
{
public:
    TBInvertedLoop1_2781(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_InvertedLoop 1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3027);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbinvertedloop1_2781(int x, int y)
{
    return new (Backdrop::pool.create()) TBInvertedLoop1_2781(x, y);
}
class TBBlueWall2_2782 : public Backdrop
{
public:
    TBBlueWall2_2782(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4643);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall2_2782(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall2_2782(x, y);
}
class TBBlueWall4_2783 : public Backdrop
{
public:
    TBBlueWall4_2783(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4644);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall4_2783(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall4_2783(x, y);
}
class TBBlueWall6_2784 : public Backdrop
{
public:
    TBBlueWall6_2784(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5690);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall6_2784(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall6_2784(x, y);
}
class TBBlueWall8_2785 : public Backdrop
{
public:
    TBBlueWall8_2785(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5696);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall8_2785(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall8_2785(x, y);
}
class TBBlueWall3_2786 : public Backdrop
{
public:
    TBBlueWall3_2786(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5799);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall3_2786(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall3_2786(x, y);
}
class TBBlueWall5_2787 : public Backdrop
{
public:
    TBBlueWall5_2787(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6137);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall5_2787(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall5_2787(x, y);
}
class TBBlueWall7_2788 : public Backdrop
{
public:
    TBBlueWall7_2788(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5700);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall7_2788(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall7_2788(x, y);
}
class TBBlueWall9_2789 : public Backdrop
{
public:
    TBBlueWall9_2789(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6348);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall9_2789(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall9_2789(x, y);
}
class TBBlueWall10_2790 : public Backdrop
{
public:
    TBBlueWall10_2790(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6558);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall10_2790(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall10_2790(x, y);
}
class TBBlueWall11_2791 : public Backdrop
{
public:
    TBBlueWall11_2791(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6559);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall11_2791(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall11_2791(x, y);
}
class TBBlueWall12_2792 : public Backdrop
{
public:
    TBBlueWall12_2792(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6555);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall12_2792(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall12_2792(x, y);
}
class TBBlueWall13_2793 : public Backdrop
{
public:
    TBBlueWall13_2793(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6560);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall13_2793(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall13_2793(x, y);
}
class TBBlueWall14_2794 : public Backdrop
{
public:
    TBBlueWall14_2794(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueWall 14", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11687);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluewall14_2794(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueWall14_2794(x, y);
}
class TBInvertedLoop2_2795 : public Backdrop
{
public:
    TBInvertedLoop2_2795(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_InvertedLoop 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3477);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbinvertedloop2_2795(int x, int y)
{
    return new (Backdrop::pool.create()) TBInvertedLoop2_2795(x, y);
}
class TBBlueTube1_2796 : public Backdrop
{
public:
    TBBlueTube1_2796(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueTube 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4188);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluetube1_2796(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueTube1_2796(x, y);
}
class TBBlueTube3_2797 : public Backdrop
{
public:
    TBBlueTube3_2797(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueTube 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4189);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluetube3_2797(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueTube3_2797(x, y);
}
class TBBlueTube2_2798 : public Backdrop
{
public:
    TBBlueTube2_2798(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueTube 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4192);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluetube2_2798(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueTube2_2798(x, y);
}
class TBBackEye_2799 : public Backdrop
{
public:
    TBBackEye_2799(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BackEye", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2403);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbbackeye_2799(int x, int y)
{
    return new (Backdrop::pool.create()) TBBackEye_2799(x, y);
}
class TBBlueTube4_2800 : public Backdrop
{
public:
    TBBlueTube4_2800(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BlueTube 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4185);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluetube4_2800(int x, int y)
{
    return new (Backdrop::pool.create()) TBBlueTube4_2800(x, y);
}
static Image* images_gimmickcrankplatformtop1_2801_0_0[1];
static Direction direction_gimmickcrankplatformtop1_2801_0_0 = {0, 0, 0, 0, 1, images_gimmickcrankplatformtop1_2801_0_0, 1};
static Animation anim_gimmickcrankplatformtop1_2801_0 = {&direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, NULL, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0, &direction_gimmickcrankplatformtop1_2801_0_0};
static Animation * anim_array_gimmickcrankplatformtop1_2801[1] = {&anim_gimmickcrankplatformtop1_2801_0};
static Animations anim_gimmickcrankplatformtop1_2801 = {1, &anim_array_gimmickcrankplatformtop1_2801[0]};
static bool anim_gimmickcrankplatformtop1_2801_initialized;
class GimmickCrankPlatformTop1_2801 : public Active
{
public:
    GimmickCrankPlatformTop1_2801(int x, int y) : Active(x, y, GimmickCrankPlatformTop1_2801_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformTop 1", 26);
#endif
        this->animations = &anim_gimmickcrankplatformtop1_2801;
        if (!anim_gimmickcrankplatformtop1_2801_initialized) {
            anim_gimmickcrankplatformtop1_2801_initialized = true;
            images_gimmickcrankplatformtop1_2801_0_0[0] = get_internal_image(6212);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 2);
        alterables->values.set(7, 2);
    }
};
FrameObject * create_gimmickcrankplatformtop1_2801(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformTop1_2801(x, y);
}
static Image* images_gimmickcrankplatformtop2_2802_0_0[1];
static Direction direction_gimmickcrankplatformtop2_2802_0_0 = {0, 0, 0, 0, 1, images_gimmickcrankplatformtop2_2802_0_0, 1};
static Animation anim_gimmickcrankplatformtop2_2802_0 = {&direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, NULL, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0, &direction_gimmickcrankplatformtop2_2802_0_0};
static Animation * anim_array_gimmickcrankplatformtop2_2802[1] = {&anim_gimmickcrankplatformtop2_2802_0};
static Animations anim_gimmickcrankplatformtop2_2802 = {1, &anim_array_gimmickcrankplatformtop2_2802[0]};
static bool anim_gimmickcrankplatformtop2_2802_initialized;
class GimmickCrankPlatformTop2_2802 : public Active
{
public:
    GimmickCrankPlatformTop2_2802(int x, int y) : Active(x, y, GimmickCrankPlatformTop2_2802_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_CrankPlatformTop 2", 26);
#endif
        this->animations = &anim_gimmickcrankplatformtop2_2802;
        if (!anim_gimmickcrankplatformtop2_2802_initialized) {
            anim_gimmickcrankplatformtop2_2802_initialized = true;
            images_gimmickcrankplatformtop2_2802_0_0[0] = get_internal_image(6212);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 2);
        alterables->values.set(7, 2);
    }
};
FrameObject * create_gimmickcrankplatformtop2_2802(int x, int y)
{
    return new (Active::pool.create()) GimmickCrankPlatformTop2_2802(x, y);
}
static Image* images_tbpipeloop1_2803_0_0[1];
static Direction direction_tbpipeloop1_2803_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop1_2803_0_0, 1};
static Animation anim_tbpipeloop1_2803_0 = {&direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, NULL, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0, &direction_tbpipeloop1_2803_0_0};
static Animation * anim_array_tbpipeloop1_2803[1] = {&anim_tbpipeloop1_2803_0};
static Animations anim_tbpipeloop1_2803 = {1, &anim_array_tbpipeloop1_2803[0]};
static bool anim_tbpipeloop1_2803_initialized;
class TBPipeLoop1_2803 : public Active
{
public:
    TBPipeLoop1_2803(int x, int y) : Active(x, y, TBPipeLoop1_2803_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 1", 13);
#endif
        this->animations = &anim_tbpipeloop1_2803;
        if (!anim_tbpipeloop1_2803_initialized) {
            anim_tbpipeloop1_2803_initialized = true;
            images_tbpipeloop1_2803_0_0[0] = get_internal_image(3027);
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
FrameObject * create_tbpipeloop1_2803(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop1_2803(x, y);
}
static Image* images_tbpipeloop2_2804_0_0[1];
static Direction direction_tbpipeloop2_2804_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop2_2804_0_0, 1};
static Animation anim_tbpipeloop2_2804_0 = {&direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, NULL, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0, &direction_tbpipeloop2_2804_0_0};
static Animation * anim_array_tbpipeloop2_2804[1] = {&anim_tbpipeloop2_2804_0};
static Animations anim_tbpipeloop2_2804 = {1, &anim_array_tbpipeloop2_2804[0]};
static bool anim_tbpipeloop2_2804_initialized;
class TBPipeLoop2_2804 : public Active
{
public:
    TBPipeLoop2_2804(int x, int y) : Active(x, y, TBPipeLoop2_2804_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 2", 13);
#endif
        this->animations = &anim_tbpipeloop2_2804;
        if (!anim_tbpipeloop2_2804_initialized) {
            anim_tbpipeloop2_2804_initialized = true;
            images_tbpipeloop2_2804_0_0[0] = get_internal_image(3801);
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
FrameObject * create_tbpipeloop2_2804(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop2_2804(x, y);
}
static Image* images_tbpipeloop5_2805_0_0[1];
static Direction direction_tbpipeloop5_2805_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop5_2805_0_0, 1};
static Animation anim_tbpipeloop5_2805_0 = {&direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, NULL, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0, &direction_tbpipeloop5_2805_0_0};
static Animation * anim_array_tbpipeloop5_2805[1] = {&anim_tbpipeloop5_2805_0};
static Animations anim_tbpipeloop5_2805 = {1, &anim_array_tbpipeloop5_2805[0]};
static bool anim_tbpipeloop5_2805_initialized;
class TBPipeLoop5_2805 : public Active
{
public:
    TBPipeLoop5_2805(int x, int y) : Active(x, y, TBPipeLoop5_2805_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 5", 13);
#endif
        this->animations = &anim_tbpipeloop5_2805;
        if (!anim_tbpipeloop5_2805_initialized) {
            anim_tbpipeloop5_2805_initialized = true;
            images_tbpipeloop5_2805_0_0[0] = get_internal_image(4185);
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
FrameObject * create_tbpipeloop5_2805(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop5_2805(x, y);
}
static Image* images_tbpipeloop7_2806_0_0[1];
static Direction direction_tbpipeloop7_2806_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop7_2806_0_0, 1};
static Animation anim_tbpipeloop7_2806_0 = {&direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, NULL, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0, &direction_tbpipeloop7_2806_0_0};
static Animation * anim_array_tbpipeloop7_2806[1] = {&anim_tbpipeloop7_2806_0};
static Animations anim_tbpipeloop7_2806 = {1, &anim_array_tbpipeloop7_2806[0]};
static bool anim_tbpipeloop7_2806_initialized;
class TBPipeLoop7_2806 : public Active
{
public:
    TBPipeLoop7_2806(int x, int y) : Active(x, y, TBPipeLoop7_2806_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 7", 13);
#endif
        this->animations = &anim_tbpipeloop7_2806;
        if (!anim_tbpipeloop7_2806_initialized) {
            anim_tbpipeloop7_2806_initialized = true;
            images_tbpipeloop7_2806_0_0[0] = get_internal_image(3477);
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
FrameObject * create_tbpipeloop7_2806(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop7_2806(x, y);
}
static Image* images_tbpipeloop3_2807_0_0[1];
static Direction direction_tbpipeloop3_2807_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop3_2807_0_0, 1};
static Animation anim_tbpipeloop3_2807_0 = {&direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, NULL, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0, &direction_tbpipeloop3_2807_0_0};
static Animation * anim_array_tbpipeloop3_2807[1] = {&anim_tbpipeloop3_2807_0};
static Animations anim_tbpipeloop3_2807 = {1, &anim_array_tbpipeloop3_2807[0]};
static bool anim_tbpipeloop3_2807_initialized;
class TBPipeLoop3_2807 : public Active
{
public:
    TBPipeLoop3_2807(int x, int y) : Active(x, y, TBPipeLoop3_2807_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 3", 13);
#endif
        this->animations = &anim_tbpipeloop3_2807;
        if (!anim_tbpipeloop3_2807_initialized) {
            anim_tbpipeloop3_2807_initialized = true;
            images_tbpipeloop3_2807_0_0[0] = get_internal_image(3500);
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
FrameObject * create_tbpipeloop3_2807(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop3_2807(x, y);
}
static Image* images_tbpipeloop4_2808_0_0[1];
static Direction direction_tbpipeloop4_2808_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop4_2808_0_0, 1};
static Animation anim_tbpipeloop4_2808_0 = {&direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, NULL, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0, &direction_tbpipeloop4_2808_0_0};
static Animation * anim_array_tbpipeloop4_2808[1] = {&anim_tbpipeloop4_2808_0};
static Animations anim_tbpipeloop4_2808 = {1, &anim_array_tbpipeloop4_2808[0]};
static bool anim_tbpipeloop4_2808_initialized;
class TBPipeLoop4_2808 : public Active
{
public:
    TBPipeLoop4_2808(int x, int y) : Active(x, y, TBPipeLoop4_2808_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 4", 13);
#endif
        this->animations = &anim_tbpipeloop4_2808;
        if (!anim_tbpipeloop4_2808_initialized) {
            anim_tbpipeloop4_2808_initialized = true;
            images_tbpipeloop4_2808_0_0[0] = get_internal_image(3801);
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
FrameObject * create_tbpipeloop4_2808(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop4_2808(x, y);
}
static Image* images_tbpipeloop6_2809_0_0[1];
static Direction direction_tbpipeloop6_2809_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop6_2809_0_0, 1};
static Animation anim_tbpipeloop6_2809_0 = {&direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, NULL, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0, &direction_tbpipeloop6_2809_0_0};
static Animation * anim_array_tbpipeloop6_2809[1] = {&anim_tbpipeloop6_2809_0};
static Animations anim_tbpipeloop6_2809 = {1, &anim_array_tbpipeloop6_2809[0]};
static bool anim_tbpipeloop6_2809_initialized;
class TBPipeLoop6_2809 : public Active
{
public:
    TBPipeLoop6_2809(int x, int y) : Active(x, y, TBPipeLoop6_2809_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 6", 13);
#endif
        this->animations = &anim_tbpipeloop6_2809;
        if (!anim_tbpipeloop6_2809_initialized) {
            anim_tbpipeloop6_2809_initialized = true;
            images_tbpipeloop6_2809_0_0[0] = get_internal_image(3027);
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
FrameObject * create_tbpipeloop6_2809(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop6_2809(x, y);
}
static Image* images_enemysaucerleg4_2810_0_0[1];
static Direction direction_enemysaucerleg4_2810_0_0 = {0, 50, 50, 0, 1, images_enemysaucerleg4_2810_0_0, 1};
static Animation anim_enemysaucerleg4_2810_0 = {&direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, NULL, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0, &direction_enemysaucerleg4_2810_0_0};
static Animation * anim_array_enemysaucerleg4_2810[1] = {&anim_enemysaucerleg4_2810_0};
static Animations anim_enemysaucerleg4_2810 = {1, &anim_array_enemysaucerleg4_2810[0]};
static bool anim_enemysaucerleg4_2810_initialized;
class EnemySaucerLeg4_2810 : public Active
{
public:
    EnemySaucerLeg4_2810(int x, int y) : Active(x, y, EnemySaucerLeg4_2810_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SaucerLeg 4", 17);
#endif
        this->animations = &anim_enemysaucerleg4_2810;
        if (!anim_enemysaucerleg4_2810_initialized) {
            anim_enemysaucerleg4_2810_initialized = true;
            images_enemysaucerleg4_2810_0_0[0] = get_internal_image(832);
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
FrameObject * create_enemysaucerleg4_2810(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerLeg4_2810(x, y);
}
static Image* images_enemysaucerleg1_2811_0_0[1];
static Direction direction_enemysaucerleg1_2811_0_0 = {0, 50, 50, 0, 1, images_enemysaucerleg1_2811_0_0, 1};
static Animation anim_enemysaucerleg1_2811_0 = {&direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, NULL, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0, &direction_enemysaucerleg1_2811_0_0};
static Animation * anim_array_enemysaucerleg1_2811[1] = {&anim_enemysaucerleg1_2811_0};
static Animations anim_enemysaucerleg1_2811 = {1, &anim_array_enemysaucerleg1_2811[0]};
static bool anim_enemysaucerleg1_2811_initialized;
class EnemySaucerLeg1_2811 : public Active
{
public:
    EnemySaucerLeg1_2811(int x, int y) : Active(x, y, EnemySaucerLeg1_2811_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SaucerLeg 1", 17);
#endif
        this->animations = &anim_enemysaucerleg1_2811;
        if (!anim_enemysaucerleg1_2811_initialized) {
            anim_enemysaucerleg1_2811_initialized = true;
            images_enemysaucerleg1_2811_0_0[0] = get_internal_image(832);
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
FrameObject * create_enemysaucerleg1_2811(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerLeg1_2811(x, y);
}
static Image* images_enemysaucer_2812_0_0[1];
static Direction direction_enemysaucer_2812_0_0 = {0, 50, 50, 0, 1, images_enemysaucer_2812_0_0, 1};
static Image* images_enemysaucer_2812_0_1[2];
static Direction direction_enemysaucer_2812_0_1 = {1, 50, 50, 0, -1, images_enemysaucer_2812_0_1, 2};
static Image* images_enemysaucer_2812_0_8[1];
static Direction direction_enemysaucer_2812_0_8 = {8, 50, 50, 0, 1, images_enemysaucer_2812_0_8, 1};
static Animation anim_enemysaucer_2812_0 = {&direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_1, &direction_enemysaucer_2812_0_1, &direction_enemysaucer_2812_0_1, &direction_enemysaucer_2812_0_1, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, &direction_enemysaucer_2812_0_8, NULL, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0, &direction_enemysaucer_2812_0_0};
static Animation * anim_array_enemysaucer_2812[1] = {&anim_enemysaucer_2812_0};
static Animations anim_enemysaucer_2812 = {1, &anim_array_enemysaucer_2812[0]};
static bool anim_enemysaucer_2812_initialized;
class EnemySaucer_2812 : public Active
{
public:
    EnemySaucer_2812(int x, int y) : Active(x, y, EnemySaucer_2812_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Saucer", 12);
#endif
        this->animations = &anim_enemysaucer_2812;
        if (!anim_enemysaucer_2812_initialized) {
            anim_enemysaucer_2812_initialized = true;
            images_enemysaucer_2812_0_0[0] = get_internal_image(834);
            images_enemysaucer_2812_0_1[0] = get_internal_image(1230);
            images_enemysaucer_2812_0_1[1] = get_internal_image(834);
            images_enemysaucer_2812_0_8[0] = get_internal_image(2302);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 22);
        alterables->values.set(7, 32);
        alterables->values.set(8, 1);
        alterables->values.set(9, 180);
    }
};
FrameObject * create_enemysaucer_2812(int x, int y)
{
    return new (Active::pool.create()) EnemySaucer_2812(x, y);
}
