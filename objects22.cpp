#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_bosskujackerpilot_2112_0_0[1];
static Direction direction_bosskujackerpilot_2112_0_0 = {0, 0, 0, 0, 1, images_bosskujackerpilot_2112_0_0, 1};
static Animation anim_bosskujackerpilot_2112_0 = {&direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, NULL, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0, &direction_bosskujackerpilot_2112_0_0};
static Image* images_bosskujackerpilot_2112_7_0[1];
static Direction direction_bosskujackerpilot_2112_7_0 = {0, 50, 50, 0, -1, images_bosskujackerpilot_2112_7_0, 1};
static Image* images_bosskujackerpilot_2112_7_16[1];
static Direction direction_bosskujackerpilot_2112_7_16 = {16, 50, 50, 0, -1, images_bosskujackerpilot_2112_7_16, 1};
static Animation anim_bosskujackerpilot_2112_7 = {&direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, NULL, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, &direction_bosskujackerpilot_2112_7_16, NULL, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0, &direction_bosskujackerpilot_2112_7_0};
static Animation * anim_array_bosskujackerpilot_2112[8] = {&anim_bosskujackerpilot_2112_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerpilot_2112_7};
static Animations anim_bosskujackerpilot_2112 = {8, &anim_array_bosskujackerpilot_2112[0]};
static bool anim_bosskujackerpilot_2112_initialized;
class BossKujackerPilot_2112 : public Active
{
public:
    BossKujackerPilot_2112(int x, int y) : Active(x, y, BossKujackerPilot_2112_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_KujackerPilot", 18);
#endif
        this->animations = &anim_bosskujackerpilot_2112;
        if (!anim_bosskujackerpilot_2112_initialized) {
            anim_bosskujackerpilot_2112_initialized = true;
            images_bosskujackerpilot_2112_0_0[0] = get_internal_image(4963);
            images_bosskujackerpilot_2112_7_0[0] = get_internal_image(6056);
            images_bosskujackerpilot_2112_7_16[0] = get_internal_image(6057);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 60);
    }
};
FrameObject * create_bosskujackerpilot_2112(int x, int y)
{
    return new (Active::pool.create()) BossKujackerPilot_2112(x, y);
}
static Image* images_bosskujackerhead_2113_0_0[1];
static Direction direction_bosskujackerhead_2113_0_0 = {0, 50, 50, 0, 1, images_bosskujackerhead_2113_0_0, 1};
static Image* images_bosskujackerhead_2113_0_16[1];
static Direction direction_bosskujackerhead_2113_0_16 = {16, 50, 50, 0, 1, images_bosskujackerhead_2113_0_16, 1};
static Image* images_bosskujackerhead_2113_0_24[1];
static Direction direction_bosskujackerhead_2113_0_24 = {24, 50, 50, 0, 1, images_bosskujackerhead_2113_0_24, 1};
static Animation anim_bosskujackerhead_2113_0 = {&direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, NULL, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, &direction_bosskujackerhead_2113_0_16, NULL, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, &direction_bosskujackerhead_2113_0_24, NULL, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0, &direction_bosskujackerhead_2113_0_0};
static Image* images_bosskujackerhead_2113_7_0[2];
static Direction direction_bosskujackerhead_2113_7_0 = {0, 50, 50, 1, -1, images_bosskujackerhead_2113_7_0, 2};
static Image* images_bosskujackerhead_2113_7_16[2];
static Direction direction_bosskujackerhead_2113_7_16 = {16, 50, 50, 1, -1, images_bosskujackerhead_2113_7_16, 2};
static Animation anim_bosskujackerhead_2113_7 = {&direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, NULL, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, &direction_bosskujackerhead_2113_7_16, NULL, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0, &direction_bosskujackerhead_2113_7_0};
static Image* images_bosskujackerhead_2113_8_0[2];
static Direction direction_bosskujackerhead_2113_8_0 = {0, 50, 50, 0, -1, images_bosskujackerhead_2113_8_0, 2};
static Animation anim_bosskujackerhead_2113_8 = {&direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, NULL, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0, &direction_bosskujackerhead_2113_8_0};
static Image* images_bosskujackerhead_2113_9_0[1];
static Direction direction_bosskujackerhead_2113_9_0 = {0, 50, 50, 0, -1, images_bosskujackerhead_2113_9_0, 1};
static Animation anim_bosskujackerhead_2113_9 = {&direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, NULL, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0, &direction_bosskujackerhead_2113_9_0};
static Image* images_bosskujackerhead_2113_10_0[1];
static Direction direction_bosskujackerhead_2113_10_0 = {0, 50, 50, 0, -1, images_bosskujackerhead_2113_10_0, 1};
static Animation anim_bosskujackerhead_2113_10 = {&direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, NULL, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0, &direction_bosskujackerhead_2113_10_0};
static Image* images_bosskujackerhead_2113_11_24[4];
static Direction direction_bosskujackerhead_2113_11_24 = {24, 0, 0, 0, -1, images_bosskujackerhead_2113_11_24, 4};
static Animation anim_bosskujackerhead_2113_11 = {&direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, NULL, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24, &direction_bosskujackerhead_2113_11_24};
static Animation * anim_array_bosskujackerhead_2113[12] = {&anim_bosskujackerhead_2113_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosskujackerhead_2113_7, &anim_bosskujackerhead_2113_8, &anim_bosskujackerhead_2113_9, &anim_bosskujackerhead_2113_10, &anim_bosskujackerhead_2113_11};
static Animations anim_bosskujackerhead_2113 = {12, &anim_array_bosskujackerhead_2113[0]};
static bool anim_bosskujackerhead_2113_initialized;
class BossKujackerHead_2113 : public Active
{
public:
    BossKujackerHead_2113(int x, int y) : Active(x, y, BossKujackerHead_2113_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_KujackerHead", 17);
#endif
        this->animations = &anim_bosskujackerhead_2113;
        if (!anim_bosskujackerhead_2113_initialized) {
            anim_bosskujackerhead_2113_initialized = true;
            images_bosskujackerhead_2113_0_0[0] = get_internal_image(12234);
            images_bosskujackerhead_2113_0_16[0] = get_internal_image(12233);
            images_bosskujackerhead_2113_0_24[0] = get_internal_image(11937);
            images_bosskujackerhead_2113_7_0[0] = get_internal_image(11938);
            images_bosskujackerhead_2113_7_0[1] = get_internal_image(11939);
            images_bosskujackerhead_2113_7_16[0] = get_internal_image(11927);
            images_bosskujackerhead_2113_7_16[1] = get_internal_image(11936);
            images_bosskujackerhead_2113_8_0[0] = get_internal_image(11967);
            images_bosskujackerhead_2113_8_0[1] = get_internal_image(11937);
            images_bosskujackerhead_2113_9_0[0] = get_internal_image(11943);
            images_bosskujackerhead_2113_10_0[0] = get_internal_image(12236);
            images_bosskujackerhead_2113_11_24[0] = get_internal_image(11937);
            images_bosskujackerhead_2113_11_24[1] = get_internal_image(11942);
            images_bosskujackerhead_2113_11_24[2] = get_internal_image(12235);
            images_bosskujackerhead_2113_11_24[3] = get_internal_image(12236);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_bosskujackerhead_2113(int x, int y)
{
    return new (Active::pool.create()) BossKujackerHead_2113(x, y);
}
static Image* images_bosstornado_2114_0_0[1];
static Direction direction_bosstornado_2114_0_0 = {0, 50, 50, 0, 1, images_bosstornado_2114_0_0, 1};
static Animation anim_bosstornado_2114_0 = {&direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, NULL, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0, &direction_bosstornado_2114_0_0};
static Animation * anim_array_bosstornado_2114[1] = {&anim_bosstornado_2114_0};
static Animations anim_bosstornado_2114 = {1, &anim_array_bosstornado_2114[0]};
static bool anim_bosstornado_2114_initialized;
class BossTornado_2114 : public Active
{
public:
    BossTornado_2114(int x, int y) : Active(x, y, BossTornado_2114_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Tornado", 12);
#endif
        set_visible(false);
        this->animations = &anim_bosstornado_2114;
        if (!anim_bosstornado_2114_initialized) {
            anim_bosstornado_2114_initialized = true;
            images_bosstornado_2114_0_0[0] = get_internal_image(6124);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 128);
    }
};
FrameObject * create_bosstornado_2114(int x, int y)
{
    return new (Active::pool.create()) BossTornado_2114(x, y);
}
static Image* images_themagister_2115_0_0[1];
static Direction direction_themagister_2115_0_0 = {0, 50, 50, 0, 1, images_themagister_2115_0_0, 1};
static Image* images_themagister_2115_0_16[1];
static Direction direction_themagister_2115_0_16 = {16, 50, 50, 0, 1, images_themagister_2115_0_16, 1};
static Animation anim_themagister_2115_0 = {&direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, NULL, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, &direction_themagister_2115_0_16, NULL, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0, &direction_themagister_2115_0_0};
static Image* images_themagister_2115_5_0[8];
static Direction direction_themagister_2115_5_0 = {0, 0, 0, 0, 1, images_themagister_2115_5_0, 8};
static Image* images_themagister_2115_5_16[8];
static Direction direction_themagister_2115_5_16 = {16, 0, 0, 0, 1, images_themagister_2115_5_16, 8};
static Animation anim_themagister_2115_5 = {&direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, NULL, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, &direction_themagister_2115_5_16, NULL, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0, &direction_themagister_2115_5_0};
static Animation * anim_array_themagister_2115[6] = {&anim_themagister_2115_0, NULL, NULL, NULL, NULL, &anim_themagister_2115_5};
static Animations anim_themagister_2115 = {6, &anim_array_themagister_2115[0]};
static bool anim_themagister_2115_initialized;
class TheMagister_2115 : public Active
{
public:
    TheMagister_2115(int x, int y) : Active(x, y, TheMagister_2115_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("The Magister", 12);
#endif
        this->animations = &anim_themagister_2115;
        if (!anim_themagister_2115_initialized) {
            anim_themagister_2115_initialized = true;
            images_themagister_2115_0_0[0] = get_internal_image(9376);
            images_themagister_2115_0_16[0] = get_internal_image(9378);
            images_themagister_2115_5_0[0] = get_internal_image(9376);
            images_themagister_2115_5_0[1] = get_internal_image(9370);
            images_themagister_2115_5_0[2] = get_internal_image(9380);
            images_themagister_2115_5_0[3] = get_internal_image(9381);
            images_themagister_2115_5_0[4] = get_internal_image(9382);
            images_themagister_2115_5_0[5] = get_internal_image(9379);
            images_themagister_2115_5_0[6] = get_internal_image(9112);
            images_themagister_2115_5_0[7] = get_internal_image(9113);
            images_themagister_2115_5_16[0] = get_internal_image(9378);
            images_themagister_2115_5_16[1] = get_internal_image(9377);
            images_themagister_2115_5_16[2] = get_internal_image(10852);
            images_themagister_2115_5_16[3] = get_internal_image(10853);
            images_themagister_2115_5_16[4] = get_internal_image(10854);
            images_themagister_2115_5_16[5] = get_internal_image(11690);
            images_themagister_2115_5_16[6] = get_internal_image(9109);
            images_themagister_2115_5_16[7] = get_internal_image(9367);
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
FrameObject * create_themagister_2115(int x, int y)
{
    return new (Active::pool.create()) TheMagister_2115(x, y);
}
static Image* images_hazardspikesup_2116_0_0[1];
static Direction direction_hazardspikesup_2116_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_2116_0_0, 1};
static Animation anim_hazardspikesup_2116_0 = {&direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, NULL, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0, &direction_hazardspikesup_2116_0_0};
static Animation * anim_array_hazardspikesup_2116[1] = {&anim_hazardspikesup_2116_0};
static Animations anim_hazardspikesup_2116 = {1, &anim_array_hazardspikesup_2116[0]};
static bool anim_hazardspikesup_2116_initialized;
class HazardSpikesUp_2116 : public Active
{
public:
    HazardSpikesUp_2116(int x, int y) : Active(x, y, HazardSpikesUp_2116_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_2116;
        if (!anim_hazardspikesup_2116_initialized) {
            anim_hazardspikesup_2116_initialized = true;
            images_hazardspikesup_2116_0_0[0] = get_internal_image(10963);
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
FrameObject * create_hazardspikesup_2116(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_2116(x, y);
}
static Image* images_hazardspikesdown_2117_0_0[1];
static Direction direction_hazardspikesdown_2117_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_2117_0_0, 1};
static Animation anim_hazardspikesdown_2117_0 = {&direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, NULL, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0, &direction_hazardspikesdown_2117_0_0};
static Animation * anim_array_hazardspikesdown_2117[1] = {&anim_hazardspikesdown_2117_0};
static Animations anim_hazardspikesdown_2117 = {1, &anim_array_hazardspikesdown_2117[0]};
static bool anim_hazardspikesdown_2117_initialized;
class HazardSpikesDown_2117 : public Active
{
public:
    HazardSpikesDown_2117(int x, int y) : Active(x, y, HazardSpikesDown_2117_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_2117;
        if (!anim_hazardspikesdown_2117_initialized) {
            anim_hazardspikesdown_2117_initialized = true;
            images_hazardspikesdown_2117_0_0[0] = get_internal_image(11259);
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
FrameObject * create_hazardspikesdown_2117(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_2117(x, y);
}
static Image* images_hazardspikesleft_2118_0_0[1];
static Direction direction_hazardspikesleft_2118_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_2118_0_0, 1};
static Animation anim_hazardspikesleft_2118_0 = {&direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, NULL, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0, &direction_hazardspikesleft_2118_0_0};
static Animation * anim_array_hazardspikesleft_2118[1] = {&anim_hazardspikesleft_2118_0};
static Animations anim_hazardspikesleft_2118 = {1, &anim_array_hazardspikesleft_2118[0]};
static bool anim_hazardspikesleft_2118_initialized;
class HazardSpikesLeft_2118 : public Active
{
public:
    HazardSpikesLeft_2118(int x, int y) : Active(x, y, HazardSpikesLeft_2118_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_2118;
        if (!anim_hazardspikesleft_2118_initialized) {
            anim_hazardspikesleft_2118_initialized = true;
            images_hazardspikesleft_2118_0_0[0] = get_internal_image(10969);
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
FrameObject * create_hazardspikesleft_2118(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_2118(x, y);
}
static Image* images_hazardspikesright_2119_0_0[1];
static Direction direction_hazardspikesright_2119_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_2119_0_0, 1};
static Animation anim_hazardspikesright_2119_0 = {&direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, NULL, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0, &direction_hazardspikesright_2119_0_0};
static Animation * anim_array_hazardspikesright_2119[1] = {&anim_hazardspikesright_2119_0};
static Animations anim_hazardspikesright_2119 = {1, &anim_array_hazardspikesright_2119[0]};
static bool anim_hazardspikesright_2119_initialized;
class HazardSpikesRight_2119 : public Active
{
public:
    HazardSpikesRight_2119(int x, int y) : Active(x, y, HazardSpikesRight_2119_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_2119;
        if (!anim_hazardspikesright_2119_initialized) {
            anim_hazardspikesright_2119_initialized = true;
            images_hazardspikesright_2119_0_0[0] = get_internal_image(12485);
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
FrameObject * create_hazardspikesright_2119(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_2119(x, y);
}
class DialogData_2120 : public Text
{
public:
    DialogData_2120(int x, int y) : Text(x, y, DialogData_2120_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 00 to_10_01 I gotta admit, your planet looks pretty cool.", 60));
        add_line(std::string("02 00 ca_15_01 Thanks, I guess.", 31));
        add_line(std::string("02 00 ca_15_02 What's your planet like\?", 39));
        add_line(std::string("05 00 to_10_02 Well, there's a lot of water. Over 80% of my world is covered in it.", 83));
        add_line(std::string("02 00 ca_15_03 Does it have sharks\?", 35));
        add_line(std::string("05 00 to_10_03 What\?", 20));
        add_line(std::string("02 00 ca_15_04 Y'know, sharks. Big fish with lots of teeth.", 59));
        add_line(std::string("05 00 to_10_04 Oh, yeah, quite a lot.", 37));
        add_line(std::string("02 00 ca_15_05 What about ninjas\?", 33));
        add_line(std::string("05 00 to_10_05 That's a weird name for a fish.", 46));
        add_line(std::string("02 00 ca_15_06 You got a lot to learn about this planet.", 56));
        add_line(std::string("01 69 li_15_01 Just imagine it, Carol. There are other worlds out there, just like ours...", 90));
        add_line(std::string("02 48 ca_15_07 We should go on a space adventure someday! Don't you think that'd be SO cool\?\?", 93));
        add_line(std::string("01 78 li_15_02 Are you kidding\? It'd be the coolest thing ever!", 63));
        add_line(std::string("05 00 to_10_06 I remember saying almost exactly the same thing.", 63));
        add_line(std::string("01 72 li_15_03 Did you have a change of heart\?", 46));
        add_line(std::string("05 00 to_10_07 Not really, no. I guess I just wasn't prepared for the sacrifices I had to make...", 97));
        add_line(std::string("05 09 to_10_08 Just gotta keep moving forward with the mission I guess. No point thinking about a past that can't be changed.", 125));
        add_line(std::string("01 60 li_15_04 You're right.", 28));
        add_line(std::string("05 00 to_10_09 How's the other girl doing\?", 42));
        add_line(std::string("01 60 li_15_05 Milla\? I'm not sure. Can you go check on her, Carol\?", 67));
        add_line(std::string("02 42 ca_15_08 Okie dokie.", 26));
        add_line(std::string("01 00 li_15_06 I'm gonna get some sleep.", 40));
        add_line(std::string("05 00 to_10_10 I'm fine. You go on ahead.", 41));
        add_line(std::string("02 00 ca_15_09 Hey there.", 25));
        add_line(std::string("03 00 mi_11_01 Hi...", 20));
        add_line(std::string("02 21 ca_15_10 How's it goin'\?", 30));
        add_line(std::string("03 00 mi_11_02 I'm... I'm making a wish.", 40));
        add_line(std::string("02 24 ca_15_11 Oh... What kind of wish\?", 39));
        add_line(std::string("03 24 mi_11_03 Well...... I really wanna see my mommy and daddy again!", 70));
        add_line(std::string("02 00 ca_15_13 Sounds like a good thing to wish for.", 52));
        add_line(std::string("02 00 ca_15_14 We're gonna be going inside soon. You wanna come\?", 64));
        add_line(std::string("03 03 mi_11_04 Okay!", 20));
        add_line(std::string("05 00 to_11_02 Shoot! We've gotta disable those ships or we're toast!", 69));
        add_line(std::string("01 00 li_16_01 Torque, are you thinking what I'm thinking\?", 58));
        add_line(std::string("05 00 to_11_03 I think it's crazy enough to work!", 49));
        add_line(std::string("01 00 li_16_02 Alright girls, here's the plan. We're gonna run to the other ships and kung-fu their cannons.", 108));
        add_line(std::string("02 00 ca_16_04 Let's do it!", 27));
        add_line(std::string("03 00 mi_12_02 It's time to be brave!", 37));
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
FrameObject * create_dialogdata_2120(int x, int y)
{
    return new (Text::pool.create()) DialogData_2120(x, y);
}
class LevelParallaxZaoShip_2121 : public SystemBox
{
public:
    LevelParallaxZaoShip_2121(int x, int y) : SystemBox(x, y, LevelParallaxZaoShip_2121_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_ZaoShip", 22);
#endif
        flags |= BACKGROUND;
        width = 507;
        height = 323;
        type = PATTERN_IMAGE;
        image = get_internal_image(305);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxzaoship_2121(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxZaoShip_2121(x, y);
}
static Image* images_bossmissile_2122_0_0[4];
static Direction direction_bossmissile_2122_0_0 = {0, 50, 50, 0, -1, images_bossmissile_2122_0_0, 4};
static Image* images_bossmissile_2122_0_16[4];
static Direction direction_bossmissile_2122_0_16 = {16, 50, 50, 0, -1, images_bossmissile_2122_0_16, 4};
static Animation anim_bossmissile_2122_0 = {&direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, NULL, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, &direction_bossmissile_2122_0_16, NULL, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0, &direction_bossmissile_2122_0_0};
static Image* images_bossmissile_2122_8_0[1];
static Direction direction_bossmissile_2122_8_0 = {0, 50, 50, 0, -1, images_bossmissile_2122_8_0, 1};
static Animation anim_bossmissile_2122_8 = {&direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, NULL, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0, &direction_bossmissile_2122_8_0};
static Animation * anim_array_bossmissile_2122[9] = {&anim_bossmissile_2122_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmissile_2122_8};
static Animations anim_bossmissile_2122 = {9, &anim_array_bossmissile_2122[0]};
static bool anim_bossmissile_2122_initialized;
class BossMissile_2122 : public Active
{
public:
    BossMissile_2122(int x, int y) : Active(x, y, BossMissile_2122_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Missile", 12);
#endif
        this->animations = &anim_bossmissile_2122;
        if (!anim_bossmissile_2122_initialized) {
            anim_bossmissile_2122_initialized = true;
            images_bossmissile_2122_0_0[0] = get_internal_image(7236);
            images_bossmissile_2122_0_0[1] = get_internal_image(7237);
            images_bossmissile_2122_0_0[2] = get_internal_image(7238);
            images_bossmissile_2122_0_0[3] = get_internal_image(7239);
            images_bossmissile_2122_0_16[0] = get_internal_image(7240);
            images_bossmissile_2122_0_16[1] = get_internal_image(7241);
            images_bossmissile_2122_0_16[2] = get_internal_image(7242);
            images_bossmissile_2122_0_16[3] = get_internal_image(7243);
            images_bossmissile_2122_8_0[0] = get_internal_image(3049);
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
        ((BallMovement*)movements[0])->set_max_speed(60);
        ((BallMovement*)movements[0])->set_deceleration(25);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_bossmissile_2122(int x, int y)
{
    return new (Active::pool.create()) BossMissile_2122(x, y);
}
static Image* images_breakablespike2_2123_0_0[1];
static Direction direction_breakablespike2_2123_0_0 = {0, 100, 100, 0, 1, images_breakablespike2_2123_0_0, 1};
static Animation anim_breakablespike2_2123_0 = {&direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, NULL, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0, &direction_breakablespike2_2123_0_0};
static Animation * anim_array_breakablespike2_2123[1] = {&anim_breakablespike2_2123_0};
static Animations anim_breakablespike2_2123 = {1, &anim_array_breakablespike2_2123[0]};
static bool anim_breakablespike2_2123_initialized;
class BreakableSpike2_2123 : public Active
{
public:
    BreakableSpike2_2123(int x, int y) : Active(x, y, BreakableSpike2_2123_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableSpike 2", 16);
#endif
        this->animations = &anim_breakablespike2_2123;
        if (!anim_breakablespike2_2123_initialized) {
            anim_breakablespike2_2123_initialized = true;
            images_breakablespike2_2123_0_0[0] = get_internal_image(10968);
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
FrameObject * create_breakablespike2_2123(int x, int y)
{
    return new (Active::pool.create()) BreakableSpike2_2123(x, y);
}
static Image* images_breakablefloorpiece2_2124_0_0[1];
static Direction direction_breakablefloorpiece2_2124_0_0 = {0, 50, 50, 0, 1, images_breakablefloorpiece2_2124_0_0, 1};
static Animation anim_breakablefloorpiece2_2124_0 = {&direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, NULL, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0, &direction_breakablefloorpiece2_2124_0_0};
static Animation * anim_array_breakablefloorpiece2_2124[1] = {&anim_breakablefloorpiece2_2124_0};
static Animations anim_breakablefloorpiece2_2124 = {1, &anim_array_breakablefloorpiece2_2124[0]};
static bool anim_breakablefloorpiece2_2124_initialized;
class BreakableFloorPiece2_2124 : public Active
{
public:
    BreakableFloorPiece2_2124(int x, int y) : Active(x, y, BreakableFloorPiece2_2124_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableFloor_piece 2", 22);
#endif
        this->animations = &anim_breakablefloorpiece2_2124;
        if (!anim_breakablefloorpiece2_2124_initialized) {
            anim_breakablefloorpiece2_2124_initialized = true;
            images_breakablefloorpiece2_2124_0_0[0] = get_internal_image(927);
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
FrameObject * create_breakablefloorpiece2_2124(int x, int y)
{
    return new (Active::pool.create()) BreakableFloorPiece2_2124(x, y);
}
static Image* images_gimmickfandebris_2125_0_0[1];
static Direction direction_gimmickfandebris_2125_0_0 = {0, 50, 50, 0, 1, images_gimmickfandebris_2125_0_0, 1};
static Animation anim_gimmickfandebris_2125_0 = {&direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, NULL, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0, &direction_gimmickfandebris_2125_0_0};
static Animation * anim_array_gimmickfandebris_2125[1] = {&anim_gimmickfandebris_2125_0};
static Animations anim_gimmickfandebris_2125 = {1, &anim_array_gimmickfandebris_2125[0]};
static bool anim_gimmickfandebris_2125_initialized;
class GimmickFanDebris_2125 : public Active
{
public:
    GimmickFanDebris_2125(int x, int y) : Active(x, y, GimmickFanDebris_2125_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FanDebris", 17);
#endif
        this->animations = &anim_gimmickfandebris_2125;
        if (!anim_gimmickfandebris_2125_initialized) {
            anim_gimmickfandebris_2125_initialized = true;
            images_gimmickfandebris_2125_0_0[0] = get_internal_image(937);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(60);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_gimmickfandebris_2125(int x, int y)
{
    return new (Active::pool.create()) GimmickFanDebris_2125(x, y);
}
static Image* images_enemyrotorbladedeath_2126_0_0[1];
static Direction direction_enemyrotorbladedeath_2126_0_0 = {0, 30, 30, 0, -1, images_enemyrotorbladedeath_2126_0_0, 1};
static Animation anim_enemyrotorbladedeath_2126_0 = {&direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, NULL, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0, &direction_enemyrotorbladedeath_2126_0_0};
static Animation * anim_array_enemyrotorbladedeath_2126[1] = {&anim_enemyrotorbladedeath_2126_0};
static Animations anim_enemyrotorbladedeath_2126 = {1, &anim_array_enemyrotorbladedeath_2126[0]};
static bool anim_enemyrotorbladedeath_2126_initialized;
class EnemyRotorbladeDeath_2126 : public Active
{
public:
    EnemyRotorbladeDeath_2126(int x, int y) : Active(x, y, EnemyRotorbladeDeath_2126_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_RotorbladeDeath", 21);
#endif
        this->animations = &anim_enemyrotorbladedeath_2126;
        if (!anim_enemyrotorbladedeath_2126_initialized) {
            anim_enemyrotorbladedeath_2126_initialized = true;
            images_enemyrotorbladedeath_2126_0_0[0] = get_internal_image(5370);
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
FrameObject * create_enemyrotorbladedeath_2126(int x, int y)
{
    return new (Active::pool.create()) EnemyRotorbladeDeath_2126(x, y);
}
static Image* images_enemydronelaser_2127_0_0[6];
static Direction direction_enemydronelaser_2127_0_0 = {0, 50, 50, 5, 10, images_enemydronelaser_2127_0_0, 6};
static Animation anim_enemydronelaser_2127_0 = {&direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, NULL, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0, &direction_enemydronelaser_2127_0_0};
static Image* images_enemydronelaser_2127_4_0[6];
static Direction direction_enemydronelaser_2127_4_0 = {0, 50, 50, 0, 1, images_enemydronelaser_2127_4_0, 6};
static Animation anim_enemydronelaser_2127_4 = {&direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, NULL, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0, &direction_enemydronelaser_2127_4_0};
static Animation * anim_array_enemydronelaser_2127[5] = {&anim_enemydronelaser_2127_0, NULL, NULL, NULL, &anim_enemydronelaser_2127_4};
static Animations anim_enemydronelaser_2127 = {5, &anim_array_enemydronelaser_2127[0]};
static bool anim_enemydronelaser_2127_initialized;
class EnemyDroneLaser_2127 : public Active
{
public:
    EnemyDroneLaser_2127(int x, int y) : Active(x, y, EnemyDroneLaser_2127_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DroneLaser", 16);
#endif
        this->animations = &anim_enemydronelaser_2127;
        if (!anim_enemydronelaser_2127_initialized) {
            anim_enemydronelaser_2127_initialized = true;
            images_enemydronelaser_2127_0_0[0] = get_internal_image(5383);
            images_enemydronelaser_2127_0_0[1] = get_internal_image(5385);
            images_enemydronelaser_2127_0_0[2] = get_internal_image(5384);
            images_enemydronelaser_2127_0_0[3] = get_internal_image(5382);
            images_enemydronelaser_2127_0_0[4] = get_internal_image(5381);
            images_enemydronelaser_2127_0_0[5] = get_internal_image(3746);
            images_enemydronelaser_2127_4_0[0] = get_internal_image(3746);
            images_enemydronelaser_2127_4_0[1] = get_internal_image(5381);
            images_enemydronelaser_2127_4_0[2] = get_internal_image(5382);
            images_enemydronelaser_2127_4_0[3] = get_internal_image(5384);
            images_enemydronelaser_2127_4_0[4] = get_internal_image(5385);
            images_enemydronelaser_2127_4_0[5] = get_internal_image(5383);
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
FrameObject * create_enemydronelaser_2127(int x, int y)
{
    return new (Active::pool.create()) EnemyDroneLaser_2127(x, y);
}
static Image* images_bossspadecard_2128_0_0[12];
static Direction direction_bossspadecard_2128_0_0 = {0, 100, 100, 1, -1, images_bossspadecard_2128_0_0, 12};
static Animation anim_bossspadecard_2128_0 = {&direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, NULL, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0, &direction_bossspadecard_2128_0_0};
static Image* images_bossspadecard_2128_7_0[1];
static Direction direction_bossspadecard_2128_7_0 = {0, 100, 100, 0, -1, images_bossspadecard_2128_7_0, 1};
static Animation anim_bossspadecard_2128_7 = {&direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, NULL, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0, &direction_bossspadecard_2128_7_0};
static Animation * anim_array_bossspadecard_2128[8] = {&anim_bossspadecard_2128_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossspadecard_2128_7};
static Animations anim_bossspadecard_2128 = {8, &anim_array_bossspadecard_2128[0]};
static bool anim_bossspadecard_2128_initialized;
class BossSpadeCard_2128 : public Active
{
public:
    BossSpadeCard_2128(int x, int y) : Active(x, y, BossSpadeCard_2128_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SpadeCard", 14);
#endif
        this->animations = &anim_bossspadecard_2128;
        if (!anim_bossspadecard_2128_initialized) {
            anim_bossspadecard_2128_initialized = true;
            images_bossspadecard_2128_0_0[0] = get_internal_image(1455);
            images_bossspadecard_2128_0_0[1] = get_internal_image(1468);
            images_bossspadecard_2128_0_0[2] = get_internal_image(1440);
            images_bossspadecard_2128_0_0[3] = get_internal_image(1771);
            images_bossspadecard_2128_0_0[4] = get_internal_image(1882);
            images_bossspadecard_2128_0_0[5] = get_internal_image(1880);
            images_bossspadecard_2128_0_0[6] = get_internal_image(1881);
            images_bossspadecard_2128_0_0[7] = get_internal_image(1885);
            images_bossspadecard_2128_0_0[8] = get_internal_image(1886);
            images_bossspadecard_2128_0_0[9] = get_internal_image(1887);
            images_bossspadecard_2128_0_0[10] = get_internal_image(1888);
            images_bossspadecard_2128_0_0[11] = get_internal_image(1889);
            images_bossspadecard_2128_7_0[0] = get_internal_image(5247);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_534_boss_spadecard.value;
        if (!global_data_534_boss_spadecard.init) {
            alterables->values.set(8, 3);
            alterables->values.set(12, 1);
            global_data_534_boss_spadecard.init = true;
        }
    }
};
FrameObject * create_bossspadecard_2128(int x, int y)
{
    return new (Active::pool.create()) BossSpadeCard_2128(x, y);
}
static Image* images_zaoshipfalling_2129_0_0[1];
static Direction direction_zaoshipfalling_2129_0_0 = {0, 50, 50, 0, 1, images_zaoshipfalling_2129_0_0, 1};
static Animation anim_zaoshipfalling_2129_0 = {&direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, NULL, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0, &direction_zaoshipfalling_2129_0_0};
static Animation * anim_array_zaoshipfalling_2129[1] = {&anim_zaoshipfalling_2129_0};
static Animations anim_zaoshipfalling_2129 = {1, &anim_array_zaoshipfalling_2129[0]};
static bool anim_zaoshipfalling_2129_initialized;
class ZaoShipFalling_2129 : public Active
{
public:
    ZaoShipFalling_2129(int x, int y) : Active(x, y, ZaoShipFalling_2129_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ZaoShip_Falling", 15);
#endif
        set_visible(false);
        this->animations = &anim_zaoshipfalling_2129;
        if (!anim_zaoshipfalling_2129_initialized) {
            anim_zaoshipfalling_2129_initialized = true;
            images_zaoshipfalling_2129_0_0[0] = get_internal_image(5389);
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
FrameObject * create_zaoshipfalling_2129(int x, int y)
{
    return new (Active::pool.create()) ZaoShipFalling_2129(x, y);
}
class SBRedShipBG_2130 : public QuickBackdrop
{
public:
    SBRedShipBG_2130(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedShipBG", 12);
#endif
        flags |= BACKGROUND;
        width = 1280;
        height = 800;
        image = get_internal_image(2395);
        outline = 0;
    }
};
FrameObject * create_sbredshipbg_2130(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBRedShipBG_2130(x, y);
}
class SBRedShipBG2_2131 : public QuickBackdrop
{
public:
    SBRedShipBG2_2131(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedShipBG 2", 14);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 800;
        image = get_internal_image(2399);
        outline = 0;
    }
};
FrameObject * create_sbredshipbg2_2131(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBRedShipBG2_2131(x, y);
}
class SBRedShipBG3_2132 : public QuickBackdrop
{
public:
    SBRedShipBG3_2132(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedShipBG 3", 14);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 800;
        image = get_internal_image(2398);
        outline = 0;
    }
};
FrameObject * create_sbredshipbg3_2132(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBRedShipBG3_2132(x, y);
}
static Image* images_levelfanblade_2133_0_0[1];
static Direction direction_levelfanblade_2133_0_0 = {0, 50, 50, 0, 1, images_levelfanblade_2133_0_0, 1};
static Animation anim_levelfanblade_2133_0 = {&direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, NULL, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0, &direction_levelfanblade_2133_0_0};
static Animation * anim_array_levelfanblade_2133[1] = {&anim_levelfanblade_2133_0};
static Animations anim_levelfanblade_2133 = {1, &anim_array_levelfanblade_2133[0]};
static bool anim_levelfanblade_2133_initialized;
class LevelFanBlade_2133 : public Active
{
public:
    LevelFanBlade_2133(int x, int y) : Active(x, y, LevelFanBlade_2133_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FanBlade", 14);
#endif
        this->animations = &anim_levelfanblade_2133;
        if (!anim_levelfanblade_2133_initialized) {
            anim_levelfanblade_2133_initialized = true;
            images_levelfanblade_2133_0_0[0] = get_internal_image(11865);
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
FrameObject * create_levelfanblade_2133(int x, int y)
{
    return new (Active::pool.create()) LevelFanBlade_2133(x, y);
}
static Image* images_levelsbbgplatform_2134_0_0[3];
static Direction direction_levelsbbgplatform_2134_0_0 = {0, 50, 50, 0, -1, images_levelsbbgplatform_2134_0_0, 3};
static Animation anim_levelsbbgplatform_2134_0 = {&direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, NULL, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0, &direction_levelsbbgplatform_2134_0_0};
static Animation * anim_array_levelsbbgplatform_2134[1] = {&anim_levelsbbgplatform_2134_0};
static Animations anim_levelsbbgplatform_2134 = {1, &anim_array_levelsbbgplatform_2134[0]};
static bool anim_levelsbbgplatform_2134_initialized;
class LevelSBBgplatform_2134 : public Active
{
public:
    LevelSBBgplatform_2134(int x, int y) : Active(x, y, LevelSBBgplatform_2134_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_SB_bgplatform", 19);
#endif
        set_visible(false);
        this->animations = &anim_levelsbbgplatform_2134;
        if (!anim_levelsbbgplatform_2134_initialized) {
            anim_levelsbbgplatform_2134_initialized = true;
            images_levelsbbgplatform_2134_0_0[0] = get_internal_image(5978);
            images_levelsbbgplatform_2134_0_0[1] = get_internal_image(3142);
            images_levelsbbgplatform_2134_0_0[2] = get_internal_image(5998);
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
FrameObject * create_levelsbbgplatform_2134(int x, int y)
{
    return new (Active::pool.create()) LevelSBBgplatform_2134(x, y);
}
class BlimpCable2_2135 : public Backdrop
{
public:
    BlimpCable2_2135(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("blimp cable 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2137);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_blimpcable2_2135(int x, int y)
{
    return new (Backdrop::pool.create()) BlimpCable2_2135(x, y);
}
class SBInnerCurve5_2136 : public Backdrop
{
public:
    SBInnerCurve5_2136(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(898);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbinnercurve5_2136(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve5_2136(x, y);
}
class SBInnerCurve6_2137 : public Backdrop
{
public:
    SBInnerCurve6_2137(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1108);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbinnercurve6_2137(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve6_2137(x, y);
}
class SBIronWall_2138 : public QuickBackdrop
{
public:
    SBIronWall_2138(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_IronWall", 11);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 160;
        image = get_internal_image(5879);
        outline = 0;
    }
};
FrameObject * create_sbironwall_2138(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBIronWall_2138(x, y);
}
class SBRedSupportBeam2_2139 : public Backdrop
{
public:
    SBRedSupportBeam2_2139(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedSupportBeam 2", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12254);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbredsupportbeam2_2139(int x, int y)
{
    return new (Backdrop::pool.create()) SBRedSupportBeam2_2139(x, y);
}
class SBRedSupportBeam1_2140 : public Backdrop
{
public:
    SBRedSupportBeam1_2140(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedSupportBeam 1", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12253);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbredsupportbeam1_2140(int x, int y)
{
    return new (Backdrop::pool.create()) SBRedSupportBeam1_2140(x, y);
}
class SBChain_2141 : public Backdrop
{
public:
    SBChain_2141(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Chain", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5089);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbchain_2141(int x, int y)
{
    return new (Backdrop::pool.create()) SBChain_2141(x, y);
}
class SBWallShadow_2142 : public Backdrop
{
public:
    SBWallShadow_2142(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallShadow", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5880);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbwallshadow_2142(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallShadow_2142(x, y);
}
class BlimpCable3_2143 : public Backdrop
{
public:
    BlimpCable3_2143(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("blimp cable 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11863);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_blimpcable3_2143(int x, int y)
{
    return new (Backdrop::pool.create()) BlimpCable3_2143(x, y);
}
class SBSmallWall_2144 : public Backdrop
{
public:
    SBSmallWall_2144(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_SmallWall", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(439);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbsmallwall_2144(int x, int y)
{
    return new (Backdrop::pool.create()) SBSmallWall_2144(x, y);
}
class SBBigWall2_2145 : public Backdrop
{
public:
    SBBigWall2_2145(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BigWall 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1372);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbbigwall2_2145(int x, int y)
{
    return new (Backdrop::pool.create()) SBBigWall2_2145(x, y);
}
class SBWall_2146 : public Backdrop
{
public:
    SBWall_2146(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Wall", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1371);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbwall_2146(int x, int y)
{
    return new (Backdrop::pool.create()) SBWall_2146(x, y);
}
class SBBigWall_2147 : public Backdrop
{
public:
    SBBigWall_2147(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BigWall", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6307);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbbigwall_2147(int x, int y)
{
    return new (Backdrop::pool.create()) SBBigWall_2147(x, y);
}
class SBDeck1_2148 : public Backdrop
{
public:
    SBDeck1_2148(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5963);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbdeck1_2148(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck1_2148(x, y);
}
class SBCeiling2_2149 : public Backdrop
{
public:
    SBCeiling2_2149(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Ceiling2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1100);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbceiling2_2149(int x, int y)
{
    return new (Backdrop::pool.create()) SBCeiling2_2149(x, y);
}
class SBBrokenFloor_2150 : public Backdrop
{
public:
    SBBrokenFloor_2150(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BrokenFloor", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1470);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbbrokenfloor_2150(int x, int y)
{
    return new (Backdrop::pool.create()) SBBrokenFloor_2150(x, y);
}
class SBDeck6_2151 : public Backdrop
{
public:
    SBDeck6_2151(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck6", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5941);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbdeck6_2151(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck6_2151(x, y);
}
class SBShipFront_2152 : public Backdrop
{
public:
    SBShipFront_2152(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_ShipFront", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2590);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbshipfront_2152(int x, int y)
{
    return new (Backdrop::pool.create()) SBShipFront_2152(x, y);
}
class Ship32_2153 : public Backdrop
{
public:
    Ship32_2153(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 32", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1157);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship32_2153(int x, int y)
{
    return new (Backdrop::pool.create()) Ship32_2153(x, y);
}
class Ship34_2154 : public Backdrop
{
public:
    Ship34_2154(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 34", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11858);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship34_2154(int x, int y)
{
    return new (Backdrop::pool.create()) Ship34_2154(x, y);
}
class Ship35_2155 : public Backdrop
{
public:
    Ship35_2155(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 35", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1112);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship35_2155(int x, int y)
{
    return new (Backdrop::pool.create()) Ship35_2155(x, y);
}
class Ship36_2156 : public Backdrop
{
public:
    Ship36_2156(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 36", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1114);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship36_2156(int x, int y)
{
    return new (Backdrop::pool.create()) Ship36_2156(x, y);
}
class Ship33_2157 : public Backdrop
{
public:
    Ship33_2157(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 33", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11857);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship33_2157(int x, int y)
{
    return new (Backdrop::pool.create()) Ship33_2157(x, y);
}
class Ship37_2158 : public Backdrop
{
public:
    Ship37_2158(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 37", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11859);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship37_2158(int x, int y)
{
    return new (Backdrop::pool.create()) Ship37_2158(x, y);
}
class QuickBackdrop7_2159 : public QuickBackdrop
{
public:
    QuickBackdrop7_2159(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 7", 16);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 160;
        image = get_internal_image(1102);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop7_2159(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop7_2159(x, y);
}
class QuickBackdrop8_2160 : public QuickBackdrop
{
public:
    QuickBackdrop8_2160(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 8", 16);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 160;
        image = get_internal_image(1107);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop8_2160(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop8_2160(x, y);
}
class SBDeck3_2161 : public Backdrop
{
public:
    SBDeck3_2161(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck3", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5962);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck3_2161(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck3_2161(x, y);
}
class SBDeck5_2162 : public Backdrop
{
public:
    SBDeck5_2162(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck5", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5965);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck5_2162(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck5_2162(x, y);
}
class SBDeck2_2163 : public Backdrop
{
public:
    SBDeck2_2163(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5966);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck2_2163(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck2_2163(x, y);
}
class SBWallSlope3_2164 : public Backdrop
{
public:
    SBWallSlope3_2164(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5232);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope3_2164(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope3_2164(x, y);
}
class SBWallSlope6_2165 : public Backdrop
{
public:
    SBWallSlope6_2165(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4996);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope6_2165(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope6_2165(x, y);
}
class SBWallSlope5_2166 : public Backdrop
{
public:
    SBWallSlope5_2166(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5378);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope5_2166(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope5_2166(x, y);
}
class SBDeck7walkthru_2167 : public Backdrop
{
public:
    SBDeck7walkthru_2167(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck7walkthru", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5954);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbdeck7walkthru_2167(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck7walkthru_2167(x, y);
}
class SBDeck8walkthru_2168 : public Backdrop
{
public:
    SBDeck8walkthru_2168(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck8walkthru", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5958);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbdeck8walkthru_2168(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck8walkthru_2168(x, y);
}
class SBWallRight_2169 : public Backdrop
{
public:
    SBWallRight_2169(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallRight", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1394);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbwallright_2169(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallRight_2169(x, y);
}
class SBDeck1walkthru_2170 : public Backdrop
{
public:
    SBDeck1walkthru_2170(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck1walkthru", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5963);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbdeck1walkthru_2170(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck1walkthru_2170(x, y);
}
class SBDeck8_2171 : public Backdrop
{
public:
    SBDeck8_2171(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck8", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5958);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbdeck8_2171(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck8_2171(x, y);
}
class SBWallLeft_2172 : public Backdrop
{
public:
    SBWallLeft_2172(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallLeft", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1940);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbwallleft_2172(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallLeft_2172(x, y);
}
class SBWallSlope1_2173 : public Backdrop
{
public:
    SBWallSlope1_2173(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5098);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope1_2173(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope1_2173(x, y);
}
class SBDeck9_2174 : public Backdrop
{
public:
    SBDeck9_2174(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck9", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5968);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck9_2174(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck9_2174(x, y);
}
class Ship23_2175 : public Backdrop
{
public:
    Ship23_2175(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship 23", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(717);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ship23_2175(int x, int y)
{
    return new (Backdrop::pool.create()) Ship23_2175(x, y);
}
class SBDeck7_2176 : public Backdrop
{
public:
    SBDeck7_2176(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck7", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5954);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbdeck7_2176(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck7_2176(x, y);
}
class SBLadder_2177 : public Backdrop
{
public:
    SBLadder_2177(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1707);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_sbladder_2177(int x, int y)
{
    return new (Backdrop::pool.create()) SBLadder_2177(x, y);
}
class SBRotorbladeTunnel_2178 : public Backdrop
{
public:
    SBRotorbladeTunnel_2178(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RotorbladeTunnel", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13813);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbrotorbladetunnel_2178(int x, int y)
{
    return new (Backdrop::pool.create()) SBRotorbladeTunnel_2178(x, y);
}
class SBOuterCurve4_2179 : public Backdrop
{
public:
    SBOuterCurve4_2179(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_OuterCurve 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4813);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sboutercurve4_2179(int x, int y)
{
    return new (Backdrop::pool.create()) SBOuterCurve4_2179(x, y);
}
class SBInnerCurve1_2180 : public Backdrop
{
public:
    SBInnerCurve1_2180(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4864);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbinnercurve1_2180(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve1_2180(x, y);
}
class SBCeiling1_2181 : public Backdrop
{
public:
    SBCeiling1_2181(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Ceiling1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1103);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbceiling1_2181(int x, int y)
{
    return new (Backdrop::pool.create()) SBCeiling1_2181(x, y);
}
class SBWallSlope2_2182 : public Backdrop
{
public:
    SBWallSlope2_2182(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5097);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope2_2182(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope2_2182(x, y);
}
class SBDeck10_2183 : public Backdrop
{
public:
    SBDeck10_2183(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck10", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5969);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck10_2183(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck10_2183(x, y);
}
class SBInnerCurve4_2184 : public Backdrop
{
public:
    SBInnerCurve4_2184(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4865);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbinnercurve4_2184(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve4_2184(x, y);
}
class SBDeck11_2185 : public Backdrop
{
public:
    SBDeck11_2185(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck11", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5960);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck11_2185(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck11_2185(x, y);
}
class SBSignUp_2186 : public Backdrop
{
public:
    SBSignUp_2186(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_SignUp", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(77);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbsignup_2186(int x, int y)
{
    return new (Backdrop::pool.create()) SBSignUp_2186(x, y);
}
class SBWallSlope4_2187 : public Backdrop
{
public:
    SBWallSlope4_2187(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_WallSlope4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4994);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbwallslope4_2187(int x, int y)
{
    return new (Backdrop::pool.create()) SBWallSlope4_2187(x, y);
}
class SBDeck4_2188 : public Backdrop
{
public:
    SBDeck4_2188(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck4", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5964);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck4_2188(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck4_2188(x, y);
}
class SBInnerCurve3_2189 : public Backdrop
{
public:
    SBInnerCurve3_2189(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4863);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbinnercurve3_2189(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve3_2189(x, y);
}
class SBMetalTube1_2190 : public Backdrop
{
public:
    SBMetalTube1_2190(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_MetalTube 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6269);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbmetaltube1_2190(int x, int y)
{
    return new (Backdrop::pool.create()) SBMetalTube1_2190(x, y);
}
class SBMetalTube2_2191 : public Backdrop
{
public:
    SBMetalTube2_2191(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_MetalTube 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6260);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbmetaltube2_2191(int x, int y)
{
    return new (Backdrop::pool.create()) SBMetalTube2_2191(x, y);
}
class SBMetalTube3_2192 : public Backdrop
{
public:
    SBMetalTube3_2192(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_MetalTube 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6372);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbmetaltube3_2192(int x, int y)
{
    return new (Backdrop::pool.create()) SBMetalTube3_2192(x, y);
}
class SBMetalTube4_2193 : public Backdrop
{
public:
    SBMetalTube4_2193(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_MetalTube 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5092);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_sbmetaltube4_2193(int x, int y)
{
    return new (Backdrop::pool.create()) SBMetalTube4_2193(x, y);
}
static Image* images_bossspade_2194_0_0[12];
static Direction direction_bossspade_2194_0_0 = {0, 14, 14, 0, -1, images_bossspade_2194_0_0, 12};
static Image* images_bossspade_2194_0_16[12];
static Direction direction_bossspade_2194_0_16 = {16, 14, 14, 0, -1, images_bossspade_2194_0_16, 12};
static Animation anim_bossspade_2194_0 = {&direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, NULL, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, &direction_bossspade_2194_0_16, NULL, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0, &direction_bossspade_2194_0_0};
static Image* images_bossspade_2194_1_0[12];
static Direction direction_bossspade_2194_1_0 = {0, 50, 50, 0, -1, images_bossspade_2194_1_0, 12};
static Image* images_bossspade_2194_1_16[12];
static Direction direction_bossspade_2194_1_16 = {16, 50, 50, 0, -1, images_bossspade_2194_1_16, 12};
static Animation anim_bossspade_2194_1 = {&direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, NULL, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, &direction_bossspade_2194_1_16, NULL, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0, &direction_bossspade_2194_1_0};
static Image* images_bossspade_2194_2_0[10];
static Direction direction_bossspade_2194_2_0 = {0, 90, 90, 0, -1, images_bossspade_2194_2_0, 10};
static Image* images_bossspade_2194_2_16[10];
static Direction direction_bossspade_2194_2_16 = {16, 90, 90, 0, -1, images_bossspade_2194_2_16, 10};
static Animation anim_bossspade_2194_2 = {&direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, NULL, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, &direction_bossspade_2194_2_16, NULL, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0, &direction_bossspade_2194_2_0};
static Image* images_bossspade_2194_7_0[8];
static Direction direction_bossspade_2194_7_0 = {0, 50, 50, 0, -1, images_bossspade_2194_7_0, 8};
static Image* images_bossspade_2194_7_16[8];
static Direction direction_bossspade_2194_7_16 = {16, 50, 50, 0, -1, images_bossspade_2194_7_16, 8};
static Animation anim_bossspade_2194_7 = {&direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, NULL, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, &direction_bossspade_2194_7_16, NULL, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0, &direction_bossspade_2194_7_0};
static Image* images_bossspade_2194_8_0[9];
static Direction direction_bossspade_2194_8_0 = {0, 50, 50, 8, 3, images_bossspade_2194_8_0, 9};
static Image* images_bossspade_2194_8_16[9];
static Direction direction_bossspade_2194_8_16 = {16, 50, 50, 8, 3, images_bossspade_2194_8_16, 9};
static Animation anim_bossspade_2194_8 = {&direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, NULL, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, &direction_bossspade_2194_8_16, NULL, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0, &direction_bossspade_2194_8_0};
static Image* images_bossspade_2194_10_0[2];
static Direction direction_bossspade_2194_10_0 = {0, 25, 25, 1, -1, images_bossspade_2194_10_0, 2};
static Image* images_bossspade_2194_10_16[2];
static Direction direction_bossspade_2194_10_16 = {16, 25, 25, 1, -1, images_bossspade_2194_10_16, 2};
static Animation anim_bossspade_2194_10 = {&direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, NULL, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, &direction_bossspade_2194_10_16, NULL, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0, &direction_bossspade_2194_10_0};
static Image* images_bossspade_2194_14_0[7];
static Direction direction_bossspade_2194_14_0 = {0, 50, 50, 0, -1, images_bossspade_2194_14_0, 7};
static Animation anim_bossspade_2194_14 = {&direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, NULL, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0, &direction_bossspade_2194_14_0};
static Image* images_bossspade_2194_15_0[5];
static Direction direction_bossspade_2194_15_0 = {0, 12, 12, 0, -1, images_bossspade_2194_15_0, 5};
static Image* images_bossspade_2194_15_16[5];
static Direction direction_bossspade_2194_15_16 = {16, 12, 12, 0, -1, images_bossspade_2194_15_16, 5};
static Animation anim_bossspade_2194_15 = {&direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, NULL, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, &direction_bossspade_2194_15_16, NULL, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0, &direction_bossspade_2194_15_0};
static Image* images_bossspade_2194_16_0[2];
static Direction direction_bossspade_2194_16_0 = {0, 14, 14, 0, -1, images_bossspade_2194_16_0, 2};
static Image* images_bossspade_2194_16_16[2];
static Direction direction_bossspade_2194_16_16 = {16, 14, 14, 0, -1, images_bossspade_2194_16_16, 2};
static Animation anim_bossspade_2194_16 = {&direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, NULL, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, &direction_bossspade_2194_16_16, NULL, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0, &direction_bossspade_2194_16_0};
static Image* images_bossspade_2194_20_0[5];
static Direction direction_bossspade_2194_20_0 = {0, 20, 20, 4, 1, images_bossspade_2194_20_0, 5};
static Image* images_bossspade_2194_20_16[5];
static Direction direction_bossspade_2194_20_16 = {16, 20, 20, 4, 1, images_bossspade_2194_20_16, 5};
static Animation anim_bossspade_2194_20 = {&direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, NULL, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, &direction_bossspade_2194_20_16, NULL, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0, &direction_bossspade_2194_20_0};
static Image* images_bossspade_2194_21_0[8];
static Direction direction_bossspade_2194_21_0 = {0, 50, 50, 0, -1, images_bossspade_2194_21_0, 8};
static Image* images_bossspade_2194_21_16[8];
static Direction direction_bossspade_2194_21_16 = {16, 50, 50, 0, -1, images_bossspade_2194_21_16, 8};
static Animation anim_bossspade_2194_21 = {&direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, NULL, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, &direction_bossspade_2194_21_16, NULL, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0, &direction_bossspade_2194_21_0};
static Image* images_bossspade_2194_23_0[10];
static Direction direction_bossspade_2194_23_0 = {0, 100, 100, 0, -1, images_bossspade_2194_23_0, 10};
static Image* images_bossspade_2194_23_16[10];
static Direction direction_bossspade_2194_23_16 = {16, 100, 100, 0, -1, images_bossspade_2194_23_16, 10};
static Animation anim_bossspade_2194_23 = {&direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, NULL, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, &direction_bossspade_2194_23_16, NULL, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0, &direction_bossspade_2194_23_0};
static Image* images_bossspade_2194_24_0[9];
static Direction direction_bossspade_2194_24_0 = {0, 20, 20, 8, -1, images_bossspade_2194_24_0, 9};
static Image* images_bossspade_2194_24_16[9];
static Direction direction_bossspade_2194_24_16 = {16, 20, 20, 8, -1, images_bossspade_2194_24_16, 9};
static Animation anim_bossspade_2194_24 = {&direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, NULL, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, &direction_bossspade_2194_24_16, NULL, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0, &direction_bossspade_2194_24_0};
static Image* images_bossspade_2194_25_0[5];
static Direction direction_bossspade_2194_25_0 = {0, 50, 50, 4, 5, images_bossspade_2194_25_0, 5};
static Image* images_bossspade_2194_25_16[5];
static Direction direction_bossspade_2194_25_16 = {16, 50, 50, 4, 5, images_bossspade_2194_25_16, 5};
static Animation anim_bossspade_2194_25 = {&direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, NULL, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, &direction_bossspade_2194_25_16, NULL, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0, &direction_bossspade_2194_25_0};
static Image* images_bossspade_2194_26_0[5];
static Direction direction_bossspade_2194_26_0 = {0, 50, 50, 4, 5, images_bossspade_2194_26_0, 5};
static Image* images_bossspade_2194_26_16[5];
static Direction direction_bossspade_2194_26_16 = {16, 50, 50, 4, 5, images_bossspade_2194_26_16, 5};
static Animation anim_bossspade_2194_26 = {&direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, NULL, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, &direction_bossspade_2194_26_16, NULL, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0, &direction_bossspade_2194_26_0};
static Image* images_bossspade_2194_27_0[9];
static Direction direction_bossspade_2194_27_0 = {0, 50, 50, 8, 3, images_bossspade_2194_27_0, 9};
static Image* images_bossspade_2194_27_16[9];
static Direction direction_bossspade_2194_27_16 = {16, 50, 50, 8, 3, images_bossspade_2194_27_16, 9};
static Animation anim_bossspade_2194_27 = {&direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, NULL, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, &direction_bossspade_2194_27_16, NULL, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0, &direction_bossspade_2194_27_0};
static Image* images_bossspade_2194_28_0[5];
static Direction direction_bossspade_2194_28_0 = {0, 40, 40, 4, 5, images_bossspade_2194_28_0, 5};
static Image* images_bossspade_2194_28_16[5];
static Direction direction_bossspade_2194_28_16 = {16, 40, 40, 4, 5, images_bossspade_2194_28_16, 5};
static Animation anim_bossspade_2194_28 = {&direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, NULL, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, &direction_bossspade_2194_28_16, NULL, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0, &direction_bossspade_2194_28_0};
static Image* images_bossspade_2194_29_0[1];
static Direction direction_bossspade_2194_29_0 = {0, 50, 50, 0, -1, images_bossspade_2194_29_0, 1};
static Image* images_bossspade_2194_29_1[1];
static Direction direction_bossspade_2194_29_1 = {1, 50, 50, 0, -1, images_bossspade_2194_29_1, 1};
static Image* images_bossspade_2194_29_16[1];
static Direction direction_bossspade_2194_29_16 = {16, 50, 50, 0, -1, images_bossspade_2194_29_16, 1};
static Image* images_bossspade_2194_29_17[1];
static Direction direction_bossspade_2194_29_17 = {17, 50, 50, 0, -1, images_bossspade_2194_29_17, 1};
static Animation anim_bossspade_2194_29 = {&direction_bossspade_2194_29_0, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_1, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_16, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_17, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0, &direction_bossspade_2194_29_0};
static Image* images_bossspade_2194_37_1[8];
static Direction direction_bossspade_2194_37_1 = {1, 20, 20, 7, -1, images_bossspade_2194_37_1, 8};
static Image* images_bossspade_2194_37_17[8];
static Direction direction_bossspade_2194_37_17 = {17, 20, 20, 7, -1, images_bossspade_2194_37_17, 8};
static Animation anim_bossspade_2194_37 = {&direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, NULL, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, &direction_bossspade_2194_37_17, NULL, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1, &direction_bossspade_2194_37_1};
static Image* images_bossspade_2194_38_0[5];
static Direction direction_bossspade_2194_38_0 = {0, 20, 20, 0, 1, images_bossspade_2194_38_0, 5};
static Image* images_bossspade_2194_38_16[5];
static Direction direction_bossspade_2194_38_16 = {16, 20, 20, 0, 1, images_bossspade_2194_38_16, 5};
static Animation anim_bossspade_2194_38 = {&direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, NULL, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, &direction_bossspade_2194_38_16, NULL, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0, &direction_bossspade_2194_38_0};
static Image* images_bossspade_2194_40_0[24];
static Direction direction_bossspade_2194_40_0 = {0, 50, 50, 0, -1, images_bossspade_2194_40_0, 24};
static Image* images_bossspade_2194_40_16[24];
static Direction direction_bossspade_2194_40_16 = {16, 50, 50, 0, -1, images_bossspade_2194_40_16, 24};
static Animation anim_bossspade_2194_40 = {&direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, NULL, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, &direction_bossspade_2194_40_16, NULL, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0, &direction_bossspade_2194_40_0};
static Animation * anim_array_bossspade_2194[41] = {&anim_bossspade_2194_0, &anim_bossspade_2194_1, &anim_bossspade_2194_2, NULL, NULL, NULL, NULL, &anim_bossspade_2194_7, &anim_bossspade_2194_8, NULL, &anim_bossspade_2194_10, NULL, NULL, NULL, &anim_bossspade_2194_14, &anim_bossspade_2194_15, &anim_bossspade_2194_16, NULL, NULL, NULL, &anim_bossspade_2194_20, &anim_bossspade_2194_21, NULL, &anim_bossspade_2194_23, &anim_bossspade_2194_24, &anim_bossspade_2194_25, &anim_bossspade_2194_26, &anim_bossspade_2194_27, &anim_bossspade_2194_28, &anim_bossspade_2194_29, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossspade_2194_37, &anim_bossspade_2194_38, NULL, &anim_bossspade_2194_40};
static Animations anim_bossspade_2194 = {41, &anim_array_bossspade_2194[0]};
static bool anim_bossspade_2194_initialized;
class BossSpade_2194 : public Active
{
public:
    BossSpade_2194(int x, int y) : Active(x, y, BossSpade_2194_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Boss_Spade", 10);
#endif
        this->animations = &anim_bossspade_2194;
        if (!anim_bossspade_2194_initialized) {
            anim_bossspade_2194_initialized = true;
            images_bossspade_2194_0_0[0] = get_internal_image(15991);
            images_bossspade_2194_0_0[1] = get_internal_image(14230);
            images_bossspade_2194_0_0[2] = get_internal_image(14231);
            images_bossspade_2194_0_0[3] = get_internal_image(14233);
            images_bossspade_2194_0_0[4] = get_internal_image(15999);
            images_bossspade_2194_0_0[5] = get_internal_image(14207);
            images_bossspade_2194_0_0[6] = get_internal_image(15991);
            images_bossspade_2194_0_0[7] = get_internal_image(14230);
            images_bossspade_2194_0_0[8] = get_internal_image(14234);
            images_bossspade_2194_0_0[9] = get_internal_image(14236);
            images_bossspade_2194_0_0[10] = get_internal_image(15999);
            images_bossspade_2194_0_0[11] = get_internal_image(14207);
            images_bossspade_2194_0_16[0] = get_internal_image(16000);
            images_bossspade_2194_0_16[1] = get_internal_image(14197);
            images_bossspade_2194_0_16[2] = get_internal_image(14204);
            images_bossspade_2194_0_16[3] = get_internal_image(14205);
            images_bossspade_2194_0_16[4] = get_internal_image(16001);
            images_bossspade_2194_0_16[5] = get_internal_image(14210);
            images_bossspade_2194_0_16[6] = get_internal_image(16000);
            images_bossspade_2194_0_16[7] = get_internal_image(14197);
            images_bossspade_2194_0_16[8] = get_internal_image(14211);
            images_bossspade_2194_0_16[9] = get_internal_image(14224);
            images_bossspade_2194_0_16[10] = get_internal_image(16001);
            images_bossspade_2194_0_16[11] = get_internal_image(14210);
            images_bossspade_2194_1_0[0] = get_internal_image(3423);
            images_bossspade_2194_1_0[1] = get_internal_image(3524);
            images_bossspade_2194_1_0[2] = get_internal_image(5111);
            images_bossspade_2194_1_0[3] = get_internal_image(5989);
            images_bossspade_2194_1_0[4] = get_internal_image(6863);
            images_bossspade_2194_1_0[5] = get_internal_image(15926);
            images_bossspade_2194_1_0[6] = get_internal_image(15929);
            images_bossspade_2194_1_0[7] = get_internal_image(15927);
            images_bossspade_2194_1_0[8] = get_internal_image(15928);
            images_bossspade_2194_1_0[9] = get_internal_image(15930);
            images_bossspade_2194_1_0[10] = get_internal_image(15932);
            images_bossspade_2194_1_0[11] = get_internal_image(15931);
            images_bossspade_2194_1_16[0] = get_internal_image(14400);
            images_bossspade_2194_1_16[1] = get_internal_image(15933);
            images_bossspade_2194_1_16[2] = get_internal_image(15934);
            images_bossspade_2194_1_16[3] = get_internal_image(15935);
            images_bossspade_2194_1_16[4] = get_internal_image(15936);
            images_bossspade_2194_1_16[5] = get_internal_image(15937);
            images_bossspade_2194_1_16[6] = get_internal_image(15938);
            images_bossspade_2194_1_16[7] = get_internal_image(15939);
            images_bossspade_2194_1_16[8] = get_internal_image(15940);
            images_bossspade_2194_1_16[9] = get_internal_image(15941);
            images_bossspade_2194_1_16[10] = get_internal_image(15942);
            images_bossspade_2194_1_16[11] = get_internal_image(15943);
            images_bossspade_2194_2_0[0] = get_internal_image(14659);
            images_bossspade_2194_2_0[1] = get_internal_image(14662);
            images_bossspade_2194_2_0[2] = get_internal_image(14661);
            images_bossspade_2194_2_0[3] = get_internal_image(14665);
            images_bossspade_2194_2_0[4] = get_internal_image(14663);
            images_bossspade_2194_2_0[5] = get_internal_image(14664);
            images_bossspade_2194_2_0[6] = get_internal_image(14668);
            images_bossspade_2194_2_0[7] = get_internal_image(14666);
            images_bossspade_2194_2_0[8] = get_internal_image(14667);
            images_bossspade_2194_2_0[9] = get_internal_image(14669);
            images_bossspade_2194_2_16[0] = get_internal_image(14660);
            images_bossspade_2194_2_16[1] = get_internal_image(14670);
            images_bossspade_2194_2_16[2] = get_internal_image(14671);
            images_bossspade_2194_2_16[3] = get_internal_image(14672);
            images_bossspade_2194_2_16[4] = get_internal_image(14673);
            images_bossspade_2194_2_16[5] = get_internal_image(14674);
            images_bossspade_2194_2_16[6] = get_internal_image(14675);
            images_bossspade_2194_2_16[7] = get_internal_image(14676);
            images_bossspade_2194_2_16[8] = get_internal_image(14677);
            images_bossspade_2194_2_16[9] = get_internal_image(14678);
            images_bossspade_2194_7_0[0] = get_internal_image(9095);
            images_bossspade_2194_7_0[1] = get_internal_image(9102);
            images_bossspade_2194_7_0[2] = get_internal_image(9098);
            images_bossspade_2194_7_0[3] = get_internal_image(9105);
            images_bossspade_2194_7_0[4] = get_internal_image(9099);
            images_bossspade_2194_7_0[5] = get_internal_image(9101);
            images_bossspade_2194_7_0[6] = get_internal_image(9100);
            images_bossspade_2194_7_0[7] = get_internal_image(9103);
            images_bossspade_2194_7_16[0] = get_internal_image(5715);
            images_bossspade_2194_7_16[1] = get_internal_image(5727);
            images_bossspade_2194_7_16[2] = get_internal_image(5728);
            images_bossspade_2194_7_16[3] = get_internal_image(5787);
            images_bossspade_2194_7_16[4] = get_internal_image(5797);
            images_bossspade_2194_7_16[5] = get_internal_image(6011);
            images_bossspade_2194_7_16[6] = get_internal_image(6398);
            images_bossspade_2194_7_16[7] = get_internal_image(6537);
            images_bossspade_2194_8_0[0] = get_internal_image(5052);
            images_bossspade_2194_8_0[1] = get_internal_image(14699);
            images_bossspade_2194_8_0[2] = get_internal_image(5710);
            images_bossspade_2194_8_0[3] = get_internal_image(14679);
            images_bossspade_2194_8_0[4] = get_internal_image(7497);
            images_bossspade_2194_8_0[5] = get_internal_image(14679);
            images_bossspade_2194_8_0[6] = get_internal_image(7496);
            images_bossspade_2194_8_0[7] = get_internal_image(14679);
            images_bossspade_2194_8_0[8] = get_internal_image(14699);
            images_bossspade_2194_8_16[0] = get_internal_image(5047);
            images_bossspade_2194_8_16[1] = get_internal_image(14700);
            images_bossspade_2194_8_16[2] = get_internal_image(7530);
            images_bossspade_2194_8_16[3] = get_internal_image(14684);
            images_bossspade_2194_8_16[4] = get_internal_image(7531);
            images_bossspade_2194_8_16[5] = get_internal_image(14684);
            images_bossspade_2194_8_16[6] = get_internal_image(7532);
            images_bossspade_2194_8_16[7] = get_internal_image(14684);
            images_bossspade_2194_8_16[8] = get_internal_image(14700);
            images_bossspade_2194_10_0[0] = get_internal_image(14264);
            images_bossspade_2194_10_0[1] = get_internal_image(14266);
            images_bossspade_2194_10_16[0] = get_internal_image(14265);
            images_bossspade_2194_10_16[1] = get_internal_image(14267);
            images_bossspade_2194_14_0[0] = get_internal_image(9293);
            images_bossspade_2194_14_0[1] = get_internal_image(9291);
            images_bossspade_2194_14_0[2] = get_internal_image(9287);
            images_bossspade_2194_14_0[3] = get_internal_image(9292);
            images_bossspade_2194_14_0[4] = get_internal_image(9290);
            images_bossspade_2194_14_0[5] = get_internal_image(9288);
            images_bossspade_2194_14_0[6] = get_internal_image(9289);
            images_bossspade_2194_15_0[0] = get_internal_image(14690);
            images_bossspade_2194_15_0[1] = get_internal_image(14694);
            images_bossspade_2194_15_0[2] = get_internal_image(14689);
            images_bossspade_2194_15_0[3] = get_internal_image(14692);
            images_bossspade_2194_15_0[4] = get_internal_image(14693);
            images_bossspade_2194_15_16[0] = get_internal_image(14691);
            images_bossspade_2194_15_16[1] = get_internal_image(14695);
            images_bossspade_2194_15_16[2] = get_internal_image(14696);
            images_bossspade_2194_15_16[3] = get_internal_image(14697);
            images_bossspade_2194_15_16[4] = get_internal_image(14698);
            images_bossspade_2194_16_0[0] = get_internal_image(5746);
            images_bossspade_2194_16_0[1] = get_internal_image(5742);
            images_bossspade_2194_16_16[0] = get_internal_image(5745);
            images_bossspade_2194_16_16[1] = get_internal_image(5747);
            images_bossspade_2194_20_0[0] = get_internal_image(9337);
            images_bossspade_2194_20_0[1] = get_internal_image(9316);
            images_bossspade_2194_20_0[2] = get_internal_image(9315);
            images_bossspade_2194_20_0[3] = get_internal_image(9313);
            images_bossspade_2194_20_0[4] = get_internal_image(9314);
            images_bossspade_2194_20_16[0] = get_internal_image(9310);
            images_bossspade_2194_20_16[1] = get_internal_image(9317);
            images_bossspade_2194_20_16[2] = get_internal_image(9319);
            images_bossspade_2194_20_16[3] = get_internal_image(9320);
            images_bossspade_2194_20_16[4] = get_internal_image(9321);
            images_bossspade_2194_21_0[0] = get_internal_image(13622);
            images_bossspade_2194_21_0[1] = get_internal_image(13622);
            images_bossspade_2194_21_0[2] = get_internal_image(13633);
            images_bossspade_2194_21_0[3] = get_internal_image(14653);
            images_bossspade_2194_21_0[4] = get_internal_image(13717);
            images_bossspade_2194_21_0[5] = get_internal_image(13717);
            images_bossspade_2194_21_0[6] = get_internal_image(14630);
            images_bossspade_2194_21_0[7] = get_internal_image(14652);
            images_bossspade_2194_21_16[0] = get_internal_image(13621);
            images_bossspade_2194_21_16[1] = get_internal_image(13621);
            images_bossspade_2194_21_16[2] = get_internal_image(14654);
            images_bossspade_2194_21_16[3] = get_internal_image(14655);
            images_bossspade_2194_21_16[4] = get_internal_image(14656);
            images_bossspade_2194_21_16[5] = get_internal_image(14656);
            images_bossspade_2194_21_16[6] = get_internal_image(14657);
            images_bossspade_2194_21_16[7] = get_internal_image(14658);
            images_bossspade_2194_23_0[0] = get_internal_image(8615);
            images_bossspade_2194_23_0[1] = get_internal_image(9097);
            images_bossspade_2194_23_0[2] = get_internal_image(9096);
            images_bossspade_2194_23_0[3] = get_internal_image(8616);
            images_bossspade_2194_23_0[4] = get_internal_image(8614);
            images_bossspade_2194_23_0[5] = get_internal_image(9086);
            images_bossspade_2194_23_0[6] = get_internal_image(8961);
            images_bossspade_2194_23_0[7] = get_internal_image(9093);
            images_bossspade_2194_23_0[8] = get_internal_image(9092);
            images_bossspade_2194_23_0[9] = get_internal_image(9094);
            images_bossspade_2194_23_16[0] = get_internal_image(639);
            images_bossspade_2194_23_16[1] = get_internal_image(1184);
            images_bossspade_2194_23_16[2] = get_internal_image(2854);
            images_bossspade_2194_23_16[3] = get_internal_image(3819);
            images_bossspade_2194_23_16[4] = get_internal_image(3920);
            images_bossspade_2194_23_16[5] = get_internal_image(3955);
            images_bossspade_2194_23_16[6] = get_internal_image(3956);
            images_bossspade_2194_23_16[7] = get_internal_image(3957);
            images_bossspade_2194_23_16[8] = get_internal_image(3959);
            images_bossspade_2194_23_16[9] = get_internal_image(3960);
            images_bossspade_2194_24_0[0] = get_internal_image(14257);
            images_bossspade_2194_24_0[1] = get_internal_image(14257);
            images_bossspade_2194_24_0[2] = get_internal_image(14257);
            images_bossspade_2194_24_0[3] = get_internal_image(14257);
            images_bossspade_2194_24_0[4] = get_internal_image(14257);
            images_bossspade_2194_24_0[5] = get_internal_image(14256);
            images_bossspade_2194_24_0[6] = get_internal_image(14258);
            images_bossspade_2194_24_0[7] = get_internal_image(14259);
            images_bossspade_2194_24_0[8] = get_internal_image(14259);
            images_bossspade_2194_24_16[0] = get_internal_image(14260);
            images_bossspade_2194_24_16[1] = get_internal_image(14260);
            images_bossspade_2194_24_16[2] = get_internal_image(14260);
            images_bossspade_2194_24_16[3] = get_internal_image(14260);
            images_bossspade_2194_24_16[4] = get_internal_image(14260);
            images_bossspade_2194_24_16[5] = get_internal_image(14261);
            images_bossspade_2194_24_16[6] = get_internal_image(14262);
            images_bossspade_2194_24_16[7] = get_internal_image(14263);
            images_bossspade_2194_24_16[8] = get_internal_image(14263);
            images_bossspade_2194_25_0[0] = get_internal_image(15432);
            images_bossspade_2194_25_0[1] = get_internal_image(15432);
            images_bossspade_2194_25_0[2] = get_internal_image(15431);
            images_bossspade_2194_25_0[3] = get_internal_image(15434);
            images_bossspade_2194_25_0[4] = get_internal_image(15435);
            images_bossspade_2194_25_16[0] = get_internal_image(15433);
            images_bossspade_2194_25_16[1] = get_internal_image(15433);
            images_bossspade_2194_25_16[2] = get_internal_image(15436);
            images_bossspade_2194_25_16[3] = get_internal_image(15437);
            images_bossspade_2194_25_16[4] = get_internal_image(15438);
            images_bossspade_2194_26_0[0] = get_internal_image(15945);
            images_bossspade_2194_26_0[1] = get_internal_image(15945);
            images_bossspade_2194_26_0[2] = get_internal_image(15946);
            images_bossspade_2194_26_0[3] = get_internal_image(15948);
            images_bossspade_2194_26_0[4] = get_internal_image(15947);
            images_bossspade_2194_26_16[0] = get_internal_image(15944);
            images_bossspade_2194_26_16[1] = get_internal_image(15944);
            images_bossspade_2194_26_16[2] = get_internal_image(15949);
            images_bossspade_2194_26_16[3] = get_internal_image(15950);
            images_bossspade_2194_26_16[4] = get_internal_image(15951);
            images_bossspade_2194_27_0[0] = get_internal_image(14699);
            images_bossspade_2194_27_0[1] = get_internal_image(14699);
            images_bossspade_2194_27_0[2] = get_internal_image(14699);
            images_bossspade_2194_27_0[3] = get_internal_image(14679);
            images_bossspade_2194_27_0[4] = get_internal_image(14679);
            images_bossspade_2194_27_0[5] = get_internal_image(14679);
            images_bossspade_2194_27_0[6] = get_internal_image(14679);
            images_bossspade_2194_27_0[7] = get_internal_image(14679);
            images_bossspade_2194_27_0[8] = get_internal_image(14699);
            images_bossspade_2194_27_16[0] = get_internal_image(14700);
            images_bossspade_2194_27_16[1] = get_internal_image(14700);
            images_bossspade_2194_27_16[2] = get_internal_image(14700);
            images_bossspade_2194_27_16[3] = get_internal_image(14684);
            images_bossspade_2194_27_16[4] = get_internal_image(14684);
            images_bossspade_2194_27_16[5] = get_internal_image(14684);
            images_bossspade_2194_27_16[6] = get_internal_image(14684);
            images_bossspade_2194_27_16[7] = get_internal_image(14684);
            images_bossspade_2194_27_16[8] = get_internal_image(14700);
            images_bossspade_2194_28_0[0] = get_internal_image(9354);
            images_bossspade_2194_28_0[1] = get_internal_image(9354);
            images_bossspade_2194_28_0[2] = get_internal_image(9356);
            images_bossspade_2194_28_0[3] = get_internal_image(9355);
            images_bossspade_2194_28_0[4] = get_internal_image(9357);
            images_bossspade_2194_28_16[0] = get_internal_image(9358);
            images_bossspade_2194_28_16[1] = get_internal_image(9358);
            images_bossspade_2194_28_16[2] = get_internal_image(9359);
            images_bossspade_2194_28_16[3] = get_internal_image(9360);
            images_bossspade_2194_28_16[4] = get_internal_image(9361);
            images_bossspade_2194_29_0[0] = get_internal_image(9334);
            images_bossspade_2194_29_1[0] = get_internal_image(6704);
            images_bossspade_2194_29_16[0] = get_internal_image(9336);
            images_bossspade_2194_29_17[0] = get_internal_image(6700);
            images_bossspade_2194_37_1[0] = get_internal_image(5012);
            images_bossspade_2194_37_1[1] = get_internal_image(2031);
            images_bossspade_2194_37_1[2] = get_internal_image(2271);
            images_bossspade_2194_37_1[3] = get_internal_image(2506);
            images_bossspade_2194_37_1[4] = get_internal_image(2030);
            images_bossspade_2194_37_1[5] = get_internal_image(4259);
            images_bossspade_2194_37_1[6] = get_internal_image(4260);
            images_bossspade_2194_37_1[7] = get_internal_image(4416);
            images_bossspade_2194_37_17[0] = get_internal_image(5040);
            images_bossspade_2194_37_17[1] = get_internal_image(4423);
            images_bossspade_2194_37_17[2] = get_internal_image(4424);
            images_bossspade_2194_37_17[3] = get_internal_image(4768);
            images_bossspade_2194_37_17[4] = get_internal_image(5010);
            images_bossspade_2194_37_17[5] = get_internal_image(5015);
            images_bossspade_2194_37_17[6] = get_internal_image(5017);
            images_bossspade_2194_37_17[7] = get_internal_image(5018);
            images_bossspade_2194_38_0[0] = get_internal_image(14679);
            images_bossspade_2194_38_0[1] = get_internal_image(14680);
            images_bossspade_2194_38_0[2] = get_internal_image(14681);
            images_bossspade_2194_38_0[3] = get_internal_image(14682);
            images_bossspade_2194_38_0[4] = get_internal_image(14683);
            images_bossspade_2194_38_16[0] = get_internal_image(14684);
            images_bossspade_2194_38_16[1] = get_internal_image(14685);
            images_bossspade_2194_38_16[2] = get_internal_image(14686);
            images_bossspade_2194_38_16[3] = get_internal_image(14687);
            images_bossspade_2194_38_16[4] = get_internal_image(14688);
            images_bossspade_2194_40_0[0] = get_internal_image(14270);
            images_bossspade_2194_40_0[1] = get_internal_image(14271);
            images_bossspade_2194_40_0[2] = get_internal_image(14272);
            images_bossspade_2194_40_0[3] = get_internal_image(14273);
            images_bossspade_2194_40_0[4] = get_internal_image(14268);
            images_bossspade_2194_40_0[5] = get_internal_image(14278);
            images_bossspade_2194_40_0[6] = get_internal_image(14274);
            images_bossspade_2194_40_0[7] = get_internal_image(14275);
            images_bossspade_2194_40_0[8] = get_internal_image(14277);
            images_bossspade_2194_40_0[9] = get_internal_image(14279);
            images_bossspade_2194_40_0[10] = get_internal_image(14280);
            images_bossspade_2194_40_0[11] = get_internal_image(14283);
            images_bossspade_2194_40_0[12] = get_internal_image(14281);
            images_bossspade_2194_40_0[13] = get_internal_image(14282);
            images_bossspade_2194_40_0[14] = get_internal_image(14276);
            images_bossspade_2194_40_0[15] = get_internal_image(6255);
            images_bossspade_2194_40_0[16] = get_internal_image(6759);
            images_bossspade_2194_40_0[17] = get_internal_image(6760);
            images_bossspade_2194_40_0[18] = get_internal_image(7033);
            images_bossspade_2194_40_0[19] = get_internal_image(7339);
            images_bossspade_2194_40_0[20] = get_internal_image(8081);
            images_bossspade_2194_40_0[21] = get_internal_image(402);
            images_bossspade_2194_40_0[22] = get_internal_image(3422);
            images_bossspade_2194_40_0[23] = get_internal_image(3418);
            images_bossspade_2194_40_16[0] = get_internal_image(14269);
            images_bossspade_2194_40_16[1] = get_internal_image(14284);
            images_bossspade_2194_40_16[2] = get_internal_image(14285);
            images_bossspade_2194_40_16[3] = get_internal_image(14286);
            images_bossspade_2194_40_16[4] = get_internal_image(14287);
            images_bossspade_2194_40_16[5] = get_internal_image(14288);
            images_bossspade_2194_40_16[6] = get_internal_image(14289);
            images_bossspade_2194_40_16[7] = get_internal_image(14290);
            images_bossspade_2194_40_16[8] = get_internal_image(14291);
            images_bossspade_2194_40_16[9] = get_internal_image(14292);
            images_bossspade_2194_40_16[10] = get_internal_image(14293);
            images_bossspade_2194_40_16[11] = get_internal_image(14294);
            images_bossspade_2194_40_16[12] = get_internal_image(14295);
            images_bossspade_2194_40_16[13] = get_internal_image(14296);
            images_bossspade_2194_40_16[14] = get_internal_image(14297);
            images_bossspade_2194_40_16[15] = get_internal_image(5740);
            images_bossspade_2194_40_16[16] = get_internal_image(4653);
            images_bossspade_2194_40_16[17] = get_internal_image(5741);
            images_bossspade_2194_40_16[18] = get_internal_image(6724);
            images_bossspade_2194_40_16[19] = get_internal_image(5748);
            images_bossspade_2194_40_16[20] = get_internal_image(5749);
            images_bossspade_2194_40_16[21] = get_internal_image(1291);
            images_bossspade_2194_40_16[22] = get_internal_image(3425);
            images_bossspade_2194_40_16[23] = get_internal_image(3426);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_bossspade_2194(int x, int y)
{
    return new (Active::pool.create()) BossSpade_2194(x, y);
}
static Image* images_enemyspawntube_2195_0_0[1];
static Direction direction_enemyspawntube_2195_0_0 = {0, 50, 50, 0, 1, images_enemyspawntube_2195_0_0, 1};
static Animation anim_enemyspawntube_2195_0 = {&direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, NULL, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0, &direction_enemyspawntube_2195_0_0};
static Animation * anim_array_enemyspawntube_2195[1] = {&anim_enemyspawntube_2195_0};
static Animations anim_enemyspawntube_2195 = {1, &anim_array_enemyspawntube_2195[0]};
static bool anim_enemyspawntube_2195_initialized;
class EnemySpawntube_2195 : public Active
{
public:
    EnemySpawntube_2195(int x, int y) : Active(x, y, EnemySpawntube_2195_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Spawntube", 15);
#endif
        this->animations = &anim_enemyspawntube_2195;
        if (!anim_enemyspawntube_2195_initialized) {
            anim_enemyspawntube_2195_initialized = true;
            images_enemyspawntube_2195_0_0[0] = get_internal_image(13821);
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
FrameObject * create_enemyspawntube_2195(int x, int y)
{
    return new (Active::pool.create()) EnemySpawntube_2195(x, y);
}
static Image* images_gimmickflamethrower_2196_0_0[4];
static Direction direction_gimmickflamethrower_2196_0_0 = {0, 25, 25, 0, -1, images_gimmickflamethrower_2196_0_0, 4};
static Animation anim_gimmickflamethrower_2196_0 = {&direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, NULL, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0, &direction_gimmickflamethrower_2196_0_0};
static Animation * anim_array_gimmickflamethrower_2196[1] = {&anim_gimmickflamethrower_2196_0};
static Animations anim_gimmickflamethrower_2196 = {1, &anim_array_gimmickflamethrower_2196[0]};
static bool anim_gimmickflamethrower_2196_initialized;
class GimmickFlamethrower_2196 : public Active
{
public:
    GimmickFlamethrower_2196(int x, int y) : Active(x, y, GimmickFlamethrower_2196_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Flamethrower", 20);
#endif
        this->animations = &anim_gimmickflamethrower_2196;
        if (!anim_gimmickflamethrower_2196_initialized) {
            anim_gimmickflamethrower_2196_initialized = true;
            images_gimmickflamethrower_2196_0_0[0] = get_internal_image(4978);
            images_gimmickflamethrower_2196_0_0[1] = get_internal_image(4980);
            images_gimmickflamethrower_2196_0_0[2] = get_internal_image(4979);
            images_gimmickflamethrower_2196_0_0[3] = get_internal_image(4980);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 90);
        alterables->values.set(3, 60);
        alterables->values.set(4, 2);
    }
};
FrameObject * create_gimmickflamethrower_2196(int x, int y)
{
    return new (Active::pool.create()) GimmickFlamethrower_2196(x, y);
}
static Image* images_levelsbplatform3_2197_0_0[8];
static Direction direction_levelsbplatform3_2197_0_0 = {0, 50, 50, 0, -1, images_levelsbplatform3_2197_0_0, 8};
static Animation anim_levelsbplatform3_2197_0 = {&direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, NULL, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0, &direction_levelsbplatform3_2197_0_0};
static Animation * anim_array_levelsbplatform3_2197[1] = {&anim_levelsbplatform3_2197_0};
static Animations anim_levelsbplatform3_2197 = {1, &anim_array_levelsbplatform3_2197[0]};
static bool anim_levelsbplatform3_2197_initialized;
class LevelSBPlatform3_2197 : public Active
{
public:
    LevelSBPlatform3_2197(int x, int y) : Active(x, y, LevelSBPlatform3_2197_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_SBPlatform3", 17);
#endif
        this->animations = &anim_levelsbplatform3_2197;
        if (!anim_levelsbplatform3_2197_initialized) {
            anim_levelsbplatform3_2197_initialized = true;
            images_levelsbplatform3_2197_0_0[0] = get_internal_image(12111);
            images_levelsbplatform3_2197_0_0[1] = get_internal_image(12113);
            images_levelsbplatform3_2197_0_0[2] = get_internal_image(12110);
            images_levelsbplatform3_2197_0_0[3] = get_internal_image(11611);
            images_levelsbplatform3_2197_0_0[4] = get_internal_image(12116);
            images_levelsbplatform3_2197_0_0[5] = get_internal_image(12112);
            images_levelsbplatform3_2197_0_0[6] = get_internal_image(12114);
            images_levelsbplatform3_2197_0_0[7] = get_internal_image(12078);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 2);
        alterables->values.set(2, 128);
    }
};
FrameObject * create_levelsbplatform3_2197(int x, int y)
{
    return new (Active::pool.create()) LevelSBPlatform3_2197(x, y);
}
static Image* images_gimmickcannonbase_2198_0_0[1];
static Direction direction_gimmickcannonbase_2198_0_0 = {0, 50, 50, 0, 1, images_gimmickcannonbase_2198_0_0, 1};
static Animation anim_gimmickcannonbase_2198_0 = {&direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, NULL, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0, &direction_gimmickcannonbase_2198_0_0};
static Image* images_gimmickcannonbase_2198_8_0[2];
static Direction direction_gimmickcannonbase_2198_8_0 = {0, 50, 50, 0, -1, images_gimmickcannonbase_2198_8_0, 2};
static Animation anim_gimmickcannonbase_2198_8 = {&direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, NULL, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0, &direction_gimmickcannonbase_2198_8_0};
static Animation * anim_array_gimmickcannonbase_2198[9] = {&anim_gimmickcannonbase_2198_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickcannonbase_2198_8};
static Animations anim_gimmickcannonbase_2198 = {9, &anim_array_gimmickcannonbase_2198[0]};
static bool anim_gimmickcannonbase_2198_initialized;
class GimmickCannonBase_2198 : public Active
{
public:
    GimmickCannonBase_2198(int x, int y) : Active(x, y, GimmickCannonBase_2198_type)
    {
        // qualifiers: 14, 97
#ifndef NDEBUG
        name = std::string("Gimmick_CannonBase", 18);
#endif
        this->animations = &anim_gimmickcannonbase_2198;
        if (!anim_gimmickcannonbase_2198_initialized) {
            anim_gimmickcannonbase_2198_initialized = true;
            images_gimmickcannonbase_2198_0_0[0] = get_internal_image(6866);
            images_gimmickcannonbase_2198_8_0[0] = get_internal_image(1469);
            images_gimmickcannonbase_2198_8_0[1] = get_internal_image(9396);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_gimmickcannonbase_2198(int x, int y)
{
    return new (Active::pool.create()) GimmickCannonBase_2198(x, y);
}
static Image* images_gimmickcannon_2199_0_0[1];
static Direction direction_gimmickcannon_2199_0_0 = {0, 50, 50, 0, 1, images_gimmickcannon_2199_0_0, 1};
static Animation anim_gimmickcannon_2199_0 = {&direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, NULL, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0, &direction_gimmickcannon_2199_0_0};
static Image* images_gimmickcannon_2199_7_0[7];
static Direction direction_gimmickcannon_2199_7_0 = {0, 50, 50, 0, 1, images_gimmickcannon_2199_7_0, 7};
static Animation anim_gimmickcannon_2199_7 = {&direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, NULL, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0, &direction_gimmickcannon_2199_7_0};
static Animation * anim_array_gimmickcannon_2199[8] = {&anim_gimmickcannon_2199_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickcannon_2199_7};
static Animations anim_gimmickcannon_2199 = {8, &anim_array_gimmickcannon_2199[0]};
static bool anim_gimmickcannon_2199_initialized;
class GimmickCannon_2199 : public Active
{
public:
    GimmickCannon_2199(int x, int y) : Active(x, y, GimmickCannon_2199_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Cannon", 14);
#endif
        this->animations = &anim_gimmickcannon_2199;
        if (!anim_gimmickcannon_2199_initialized) {
            anim_gimmickcannon_2199_initialized = true;
            images_gimmickcannon_2199_0_0[0] = get_internal_image(10995);
            images_gimmickcannon_2199_7_0[0] = get_internal_image(9391);
            images_gimmickcannon_2199_7_0[1] = get_internal_image(9402);
            images_gimmickcannon_2199_7_0[2] = get_internal_image(9403);
            images_gimmickcannon_2199_7_0[3] = get_internal_image(9397);
            images_gimmickcannon_2199_7_0[4] = get_internal_image(9398);
            images_gimmickcannon_2199_7_0[5] = get_internal_image(9399);
            images_gimmickcannon_2199_7_0[6] = get_internal_image(9400);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(1, 30);
        alterables->values.set(2, 20);
    }
};
FrameObject * create_gimmickcannon_2199(int x, int y)
{
    return new (Active::pool.create()) GimmickCannon_2199(x, y);
}
static Image* images_enemyhoppermkii_2200_0_0[1];
static Direction direction_enemyhoppermkii_2200_0_0 = {0, 50, 50, 0, 1, images_enemyhoppermkii_2200_0_0, 1};
static Image* images_enemyhoppermkii_2200_0_8[1];
static Direction direction_enemyhoppermkii_2200_0_8 = {8, 50, 50, 0, 1, images_enemyhoppermkii_2200_0_8, 1};
static Image* images_enemyhoppermkii_2200_0_16[1];
static Direction direction_enemyhoppermkii_2200_0_16 = {16, 50, 50, 0, 1, images_enemyhoppermkii_2200_0_16, 1};
static Animation anim_enemyhoppermkii_2200_0 = {&direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, NULL, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, &direction_enemyhoppermkii_2200_0_8, NULL, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, &direction_enemyhoppermkii_2200_0_16, NULL, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0, &direction_enemyhoppermkii_2200_0_0};
static Image* images_enemyhoppermkii_2200_5_0[1];
static Direction direction_enemyhoppermkii_2200_5_0 = {0, 50, 50, 0, -1, images_enemyhoppermkii_2200_5_0, 1};
static Image* images_enemyhoppermkii_2200_5_16[1];
static Direction direction_enemyhoppermkii_2200_5_16 = {16, 50, 50, 0, -1, images_enemyhoppermkii_2200_5_16, 1};
static Animation anim_enemyhoppermkii_2200_5 = {&direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, NULL, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, &direction_enemyhoppermkii_2200_5_16, NULL, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0, &direction_enemyhoppermkii_2200_5_0};
static Image* images_enemyhoppermkii_2200_7_0[7];
static Direction direction_enemyhoppermkii_2200_7_0 = {0, 30, 30, 6, -1, images_enemyhoppermkii_2200_7_0, 7};
static Image* images_enemyhoppermkii_2200_7_8[7];
static Direction direction_enemyhoppermkii_2200_7_8 = {8, 50, 50, 0, 1, images_enemyhoppermkii_2200_7_8, 7};
static Image* images_enemyhoppermkii_2200_7_16[7];
static Direction direction_enemyhoppermkii_2200_7_16 = {16, 30, 30, 6, -1, images_enemyhoppermkii_2200_7_16, 7};
static Animation anim_enemyhoppermkii_2200_7 = {&direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, NULL, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, &direction_enemyhoppermkii_2200_7_8, NULL, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, &direction_enemyhoppermkii_2200_7_16, NULL, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0, &direction_enemyhoppermkii_2200_7_0};
static Image* images_enemyhoppermkii_2200_8_0[1];
static Direction direction_enemyhoppermkii_2200_8_0 = {0, 50, 50, 0, -1, images_enemyhoppermkii_2200_8_0, 1};
static Image* images_enemyhoppermkii_2200_8_16[1];
static Direction direction_enemyhoppermkii_2200_8_16 = {16, 50, 50, 0, -1, images_enemyhoppermkii_2200_8_16, 1};
static Animation anim_enemyhoppermkii_2200_8 = {&direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, NULL, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, &direction_enemyhoppermkii_2200_8_16, NULL, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0, &direction_enemyhoppermkii_2200_8_0};
static Image* images_enemyhoppermkii_2200_10_0[19];
static Direction direction_enemyhoppermkii_2200_10_0 = {0, 40, 40, 5, 1, images_enemyhoppermkii_2200_10_0, 19};
static Image* images_enemyhoppermkii_2200_10_8[19];
static Direction direction_enemyhoppermkii_2200_10_8 = {8, 50, 50, 0, 1, images_enemyhoppermkii_2200_10_8, 19};
static Image* images_enemyhoppermkii_2200_10_16[19];
static Direction direction_enemyhoppermkii_2200_10_16 = {16, 40, 40, 5, 1, images_enemyhoppermkii_2200_10_16, 19};
static Animation anim_enemyhoppermkii_2200_10 = {&direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, NULL, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, &direction_enemyhoppermkii_2200_10_8, NULL, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, &direction_enemyhoppermkii_2200_10_16, NULL, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0, &direction_enemyhoppermkii_2200_10_0};
static Image* images_enemyhoppermkii_2200_11_0[6];
static Direction direction_enemyhoppermkii_2200_11_0 = {0, 30, 30, 0, 1, images_enemyhoppermkii_2200_11_0, 6};
static Image* images_enemyhoppermkii_2200_11_8[6];
static Direction direction_enemyhoppermkii_2200_11_8 = {8, 50, 50, 0, 1, images_enemyhoppermkii_2200_11_8, 6};
static Image* images_enemyhoppermkii_2200_11_16[6];
static Direction direction_enemyhoppermkii_2200_11_16 = {16, 30, 30, 0, 1, images_enemyhoppermkii_2200_11_16, 6};
static Animation anim_enemyhoppermkii_2200_11 = {&direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, NULL, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, &direction_enemyhoppermkii_2200_11_8, NULL, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, &direction_enemyhoppermkii_2200_11_16, NULL, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0, &direction_enemyhoppermkii_2200_11_0};
static Animation * anim_array_enemyhoppermkii_2200[12] = {&anim_enemyhoppermkii_2200_0, NULL, NULL, NULL, NULL, &anim_enemyhoppermkii_2200_5, NULL, &anim_enemyhoppermkii_2200_7, &anim_enemyhoppermkii_2200_8, NULL, &anim_enemyhoppermkii_2200_10, &anim_enemyhoppermkii_2200_11};
static Animations anim_enemyhoppermkii_2200 = {12, &anim_array_enemyhoppermkii_2200[0]};
static bool anim_enemyhoppermkii_2200_initialized;
class EnemyHopperMkII_2200 : public Active
{
public:
    EnemyHopperMkII_2200(int x, int y) : Active(x, y, EnemyHopperMkII_2200_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Hopper_mkII", 17);
#endif
        this->animations = &anim_enemyhoppermkii_2200;
        if (!anim_enemyhoppermkii_2200_initialized) {
            anim_enemyhoppermkii_2200_initialized = true;
            images_enemyhoppermkii_2200_0_0[0] = get_internal_image(7080);
            images_enemyhoppermkii_2200_0_8[0] = get_internal_image(180);
            images_enemyhoppermkii_2200_0_16[0] = get_internal_image(968);
            images_enemyhoppermkii_2200_5_0[0] = get_internal_image(725);
            images_enemyhoppermkii_2200_5_16[0] = get_internal_image(338);
            images_enemyhoppermkii_2200_7_0[0] = get_internal_image(7080);
            images_enemyhoppermkii_2200_7_0[1] = get_internal_image(7081);
            images_enemyhoppermkii_2200_7_0[2] = get_internal_image(7085);
            images_enemyhoppermkii_2200_7_0[3] = get_internal_image(7087);
            images_enemyhoppermkii_2200_7_0[4] = get_internal_image(7088);
            images_enemyhoppermkii_2200_7_0[5] = get_internal_image(7087);
            images_enemyhoppermkii_2200_7_0[6] = get_internal_image(7091);
            images_enemyhoppermkii_2200_7_8[0] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[1] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[2] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[3] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[4] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[5] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_8[6] = get_internal_image(180);
            images_enemyhoppermkii_2200_7_16[0] = get_internal_image(11648);
            images_enemyhoppermkii_2200_7_16[1] = get_internal_image(11649);
            images_enemyhoppermkii_2200_7_16[2] = get_internal_image(11651);
            images_enemyhoppermkii_2200_7_16[3] = get_internal_image(11652);
            images_enemyhoppermkii_2200_7_16[4] = get_internal_image(12189);
            images_enemyhoppermkii_2200_7_16[5] = get_internal_image(11652);
            images_enemyhoppermkii_2200_7_16[6] = get_internal_image(14907);
            images_enemyhoppermkii_2200_8_0[0] = get_internal_image(14909);
            images_enemyhoppermkii_2200_8_16[0] = get_internal_image(14908);
            images_enemyhoppermkii_2200_10_0[0] = get_internal_image(7080);
            images_enemyhoppermkii_2200_10_0[1] = get_internal_image(7081);
            images_enemyhoppermkii_2200_10_0[2] = get_internal_image(7085);
            images_enemyhoppermkii_2200_10_0[3] = get_internal_image(7087);
            images_enemyhoppermkii_2200_10_0[4] = get_internal_image(7088);
            images_enemyhoppermkii_2200_10_0[5] = get_internal_image(7087);
            images_enemyhoppermkii_2200_10_0[6] = get_internal_image(7092);
            images_enemyhoppermkii_2200_10_0[7] = get_internal_image(8542);
            images_enemyhoppermkii_2200_10_0[8] = get_internal_image(9076);
            images_enemyhoppermkii_2200_10_0[9] = get_internal_image(10647);
            images_enemyhoppermkii_2200_10_0[10] = get_internal_image(11628);
            images_enemyhoppermkii_2200_10_0[11] = get_internal_image(11627);
            images_enemyhoppermkii_2200_10_0[12] = get_internal_image(11627);
            images_enemyhoppermkii_2200_10_0[13] = get_internal_image(11629);
            images_enemyhoppermkii_2200_10_0[14] = get_internal_image(8542);
            images_enemyhoppermkii_2200_10_0[15] = get_internal_image(7092);
            images_enemyhoppermkii_2200_10_0[16] = get_internal_image(7085);
            images_enemyhoppermkii_2200_10_0[17] = get_internal_image(7081);
            images_enemyhoppermkii_2200_10_0[18] = get_internal_image(7080);
            images_enemyhoppermkii_2200_10_8[0] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[1] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[2] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[3] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[4] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[5] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[6] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[7] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[8] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[9] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[10] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[11] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[12] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[13] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[14] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[15] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[16] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[17] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_8[18] = get_internal_image(180);
            images_enemyhoppermkii_2200_10_16[0] = get_internal_image(11648);
            images_enemyhoppermkii_2200_10_16[1] = get_internal_image(11649);
            images_enemyhoppermkii_2200_10_16[2] = get_internal_image(11651);
            images_enemyhoppermkii_2200_10_16[3] = get_internal_image(11652);
            images_enemyhoppermkii_2200_10_16[4] = get_internal_image(12189);
            images_enemyhoppermkii_2200_10_16[5] = get_internal_image(11652);
            images_enemyhoppermkii_2200_10_16[6] = get_internal_image(14308);
            images_enemyhoppermkii_2200_10_16[7] = get_internal_image(14310);
            images_enemyhoppermkii_2200_10_16[8] = get_internal_image(14503);
            images_enemyhoppermkii_2200_10_16[9] = get_internal_image(14903);
            images_enemyhoppermkii_2200_10_16[10] = get_internal_image(14904);
            images_enemyhoppermkii_2200_10_16[11] = get_internal_image(14905);
            images_enemyhoppermkii_2200_10_16[12] = get_internal_image(14905);
            images_enemyhoppermkii_2200_10_16[13] = get_internal_image(14906);
            images_enemyhoppermkii_2200_10_16[14] = get_internal_image(14310);
            images_enemyhoppermkii_2200_10_16[15] = get_internal_image(14308);
            images_enemyhoppermkii_2200_10_16[16] = get_internal_image(11651);
            images_enemyhoppermkii_2200_10_16[17] = get_internal_image(11649);
            images_enemyhoppermkii_2200_10_16[18] = get_internal_image(11648);
            images_enemyhoppermkii_2200_11_0[0] = get_internal_image(7087);
            images_enemyhoppermkii_2200_11_0[1] = get_internal_image(7088);
            images_enemyhoppermkii_2200_11_0[2] = get_internal_image(7087);
            images_enemyhoppermkii_2200_11_0[3] = get_internal_image(7085);
            images_enemyhoppermkii_2200_11_0[4] = get_internal_image(7081);
            images_enemyhoppermkii_2200_11_0[5] = get_internal_image(7080);
            images_enemyhoppermkii_2200_11_8[0] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_8[1] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_8[2] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_8[3] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_8[4] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_8[5] = get_internal_image(180);
            images_enemyhoppermkii_2200_11_16[0] = get_internal_image(11652);
            images_enemyhoppermkii_2200_11_16[1] = get_internal_image(12189);
            images_enemyhoppermkii_2200_11_16[2] = get_internal_image(11652);
            images_enemyhoppermkii_2200_11_16[3] = get_internal_image(11651);
            images_enemyhoppermkii_2200_11_16[4] = get_internal_image(11649);
            images_enemyhoppermkii_2200_11_16[5] = get_internal_image(11648);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(7, -1);
        alterables->values.set(8, 2);
    }
};
FrameObject * create_enemyhoppermkii_2200(int x, int y)
{
    return new (Active::pool.create()) EnemyHopperMkII_2200(x, y);
}
static Image* images_enemyaxleturret_2201_0_0[1];
static Direction direction_enemyaxleturret_2201_0_0 = {0, 90, 90, 0, -1, images_enemyaxleturret_2201_0_0, 1};
static Animation anim_enemyaxleturret_2201_0 = {&direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, NULL, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0, &direction_enemyaxleturret_2201_0_0};
static Image* images_enemyaxleturret_2201_8_0[1];
static Direction direction_enemyaxleturret_2201_8_0 = {0, 50, 50, 0, -1, images_enemyaxleturret_2201_8_0, 1};
static Animation anim_enemyaxleturret_2201_8 = {&direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, NULL, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0, &direction_enemyaxleturret_2201_8_0};
static Image* images_enemyaxleturret_2201_10_0[11];
static Direction direction_enemyaxleturret_2201_10_0 = {0, 25, 25, 0, 1, images_enemyaxleturret_2201_10_0, 11};
static Animation anim_enemyaxleturret_2201_10 = {&direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, NULL, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0, &direction_enemyaxleturret_2201_10_0};
static Animation * anim_array_enemyaxleturret_2201[11] = {&anim_enemyaxleturret_2201_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyaxleturret_2201_8, NULL, &anim_enemyaxleturret_2201_10};
static Animations anim_enemyaxleturret_2201 = {11, &anim_array_enemyaxleturret_2201[0]};
static bool anim_enemyaxleturret_2201_initialized;
class EnemyAxleTurret_2201 : public Active
{
public:
    EnemyAxleTurret_2201(int x, int y) : Active(x, y, EnemyAxleTurret_2201_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_AxleTurret", 16);
#endif
        this->animations = &anim_enemyaxleturret_2201;
        if (!anim_enemyaxleturret_2201_initialized) {
            anim_enemyaxleturret_2201_initialized = true;
            images_enemyaxleturret_2201_0_0[0] = get_internal_image(9256);
            images_enemyaxleturret_2201_8_0[0] = get_internal_image(9262);
            images_enemyaxleturret_2201_10_0[0] = get_internal_image(9256);
            images_enemyaxleturret_2201_10_0[1] = get_internal_image(9245);
            images_enemyaxleturret_2201_10_0[2] = get_internal_image(9268);
            images_enemyaxleturret_2201_10_0[3] = get_internal_image(9245);
            images_enemyaxleturret_2201_10_0[4] = get_internal_image(9268);
            images_enemyaxleturret_2201_10_0[5] = get_internal_image(9245);
            images_enemyaxleturret_2201_10_0[6] = get_internal_image(9268);
            images_enemyaxleturret_2201_10_0[7] = get_internal_image(9245);
            images_enemyaxleturret_2201_10_0[8] = get_internal_image(9266);
            images_enemyaxleturret_2201_10_0[9] = get_internal_image(9266);
            images_enemyaxleturret_2201_10_0[10] = get_internal_image(9266);
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
FrameObject * create_enemyaxleturret_2201(int x, int y)
{
    return new (Active::pool.create()) EnemyAxleTurret_2201(x, y);
}
static Image* images_enemyaxleturret2_2202_0_0[1];
static Direction direction_enemyaxleturret2_2202_0_0 = {0, 90, 90, 0, -1, images_enemyaxleturret2_2202_0_0, 1};
static Animation anim_enemyaxleturret2_2202_0 = {&direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, NULL, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0, &direction_enemyaxleturret2_2202_0_0};
static Image* images_enemyaxleturret2_2202_8_0[1];
static Direction direction_enemyaxleturret2_2202_8_0 = {0, 50, 50, 0, -1, images_enemyaxleturret2_2202_8_0, 1};
static Animation anim_enemyaxleturret2_2202_8 = {&direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, NULL, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0, &direction_enemyaxleturret2_2202_8_0};
static Animation * anim_array_enemyaxleturret2_2202[9] = {&anim_enemyaxleturret2_2202_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyaxleturret2_2202_8};
static Animations anim_enemyaxleturret2_2202 = {9, &anim_array_enemyaxleturret2_2202[0]};
static bool anim_enemyaxleturret2_2202_initialized;
class EnemyAxleTurret2_2202 : public Active
{
public:
    EnemyAxleTurret2_2202(int x, int y) : Active(x, y, EnemyAxleTurret2_2202_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_AxleTurret 2", 18);
#endif
        this->animations = &anim_enemyaxleturret2_2202;
        if (!anim_enemyaxleturret2_2202_initialized) {
            anim_enemyaxleturret2_2202_initialized = true;
            images_enemyaxleturret2_2202_0_0[0] = get_internal_image(2749);
            images_enemyaxleturret2_2202_8_0[0] = get_internal_image(9261);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 999);
    }
};
FrameObject * create_enemyaxleturret2_2202(int x, int y)
{
    return new (Active::pool.create()) EnemyAxleTurret2_2202(x, y);
}
static Image* images_gimmickcannonbase2_2203_0_0[1];
static Direction direction_gimmickcannonbase2_2203_0_0 = {0, 50, 50, 0, 1, images_gimmickcannonbase2_2203_0_0, 1};
static Animation anim_gimmickcannonbase2_2203_0 = {&direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, NULL, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0, &direction_gimmickcannonbase2_2203_0_0};
static Animation * anim_array_gimmickcannonbase2_2203[1] = {&anim_gimmickcannonbase2_2203_0};
static Animations anim_gimmickcannonbase2_2203 = {1, &anim_array_gimmickcannonbase2_2203[0]};
static bool anim_gimmickcannonbase2_2203_initialized;
class GimmickCannonBase2_2203 : public Active
{
public:
    GimmickCannonBase2_2203(int x, int y) : Active(x, y, GimmickCannonBase2_2203_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CannonBase 2", 20);
#endif
        this->animations = &anim_gimmickcannonbase2_2203;
        if (!anim_gimmickcannonbase2_2203_initialized) {
            anim_gimmickcannonbase2_2203_initialized = true;
            images_gimmickcannonbase2_2203_0_0[0] = get_internal_image(11001);
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
FrameObject * create_gimmickcannonbase2_2203(int x, int y)
{
    return new (Active::pool.create()) GimmickCannonBase2_2203(x, y);
}
static Image* images_enemyrotorbladespikes_2204_0_0[1];
static Direction direction_enemyrotorbladespikes_2204_0_0 = {0, 100, 100, 0, 1, images_enemyrotorbladespikes_2204_0_0, 1};
static Image* images_enemyrotorbladespikes_2204_0_16[1];
static Direction direction_enemyrotorbladespikes_2204_0_16 = {16, 50, 50, 0, 1, images_enemyrotorbladespikes_2204_0_16, 1};
static Animation anim_enemyrotorbladespikes_2204_0 = {&direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, NULL, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, &direction_enemyrotorbladespikes_2204_0_16, NULL, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0, &direction_enemyrotorbladespikes_2204_0_0};
static Animation * anim_array_enemyrotorbladespikes_2204[1] = {&anim_enemyrotorbladespikes_2204_0};
static Animations anim_enemyrotorbladespikes_2204 = {1, &anim_array_enemyrotorbladespikes_2204[0]};
static bool anim_enemyrotorbladespikes_2204_initialized;
class EnemyRotorbladeSpikes_2204 : public Active
{
public:
    EnemyRotorbladeSpikes_2204(int x, int y) : Active(x, y, EnemyRotorbladeSpikes_2204_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_RotorbladeSpikes", 22);
#endif
        this->animations = &anim_enemyrotorbladespikes_2204;
        if (!anim_enemyrotorbladespikes_2204_initialized) {
            anim_enemyrotorbladespikes_2204_initialized = true;
            images_enemyrotorbladespikes_2204_0_0[0] = get_internal_image(2723);
            images_enemyrotorbladespikes_2204_0_16[0] = get_internal_image(4494);
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
FrameObject * create_enemyrotorbladespikes_2204(int x, int y)
{
    return new (Active::pool.create()) EnemyRotorbladeSpikes_2204(x, y);
}
static Image* images_enemyrotorblade_2205_0_0[10];
static Direction direction_enemyrotorblade_2205_0_0 = {0, 30, 30, 0, -1, images_enemyrotorblade_2205_0_0, 10};
static Image* images_enemyrotorblade_2205_0_1[10];
static Direction direction_enemyrotorblade_2205_0_1 = {1, 30, 30, 0, -1, images_enemyrotorblade_2205_0_1, 10};
static Animation anim_enemyrotorblade_2205_0 = {&direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_1, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0, &direction_enemyrotorblade_2205_0_0};
static Animation * anim_array_enemyrotorblade_2205[1] = {&anim_enemyrotorblade_2205_0};
static Animations anim_enemyrotorblade_2205 = {1, &anim_array_enemyrotorblade_2205[0]};
static bool anim_enemyrotorblade_2205_initialized;
class EnemyRotorblade_2205 : public Active
{
public:
    EnemyRotorblade_2205(int x, int y) : Active(x, y, EnemyRotorblade_2205_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Rotorblade", 16);
#endif
        this->animations = &anim_enemyrotorblade_2205;
        if (!anim_enemyrotorblade_2205_initialized) {
            anim_enemyrotorblade_2205_initialized = true;
            images_enemyrotorblade_2205_0_0[0] = get_internal_image(5030);
            images_enemyrotorblade_2205_0_0[1] = get_internal_image(5031);
            images_enemyrotorblade_2205_0_0[2] = get_internal_image(5032);
            images_enemyrotorblade_2205_0_0[3] = get_internal_image(5043);
            images_enemyrotorblade_2205_0_0[4] = get_internal_image(5044);
            images_enemyrotorblade_2205_0_0[5] = get_internal_image(5045);
            images_enemyrotorblade_2205_0_0[6] = get_internal_image(5060);
            images_enemyrotorblade_2205_0_0[7] = get_internal_image(5061);
            images_enemyrotorblade_2205_0_0[8] = get_internal_image(5065);
            images_enemyrotorblade_2205_0_0[9] = get_internal_image(5066);
            images_enemyrotorblade_2205_0_1[0] = get_internal_image(5109);
            images_enemyrotorblade_2205_0_1[1] = get_internal_image(5121);
            images_enemyrotorblade_2205_0_1[2] = get_internal_image(5122);
            images_enemyrotorblade_2205_0_1[3] = get_internal_image(5123);
            images_enemyrotorblade_2205_0_1[4] = get_internal_image(5124);
            images_enemyrotorblade_2205_0_1[5] = get_internal_image(5125);
            images_enemyrotorblade_2205_0_1[6] = get_internal_image(5126);
            images_enemyrotorblade_2205_0_1[7] = get_internal_image(5127);
            images_enemyrotorblade_2205_0_1[8] = get_internal_image(5128);
            images_enemyrotorblade_2205_0_1[9] = get_internal_image(5129);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(10, -1);
        alterables->values.set(11, 10);
    }
};
FrameObject * create_enemyrotorblade_2205(int x, int y)
{
    return new (Active::pool.create()) EnemyRotorblade_2205(x, y);
}
static Image* images_breakablefloor1_2206_0_0[1];
static Direction direction_breakablefloor1_2206_0_0 = {0, 50, 50, 0, 1, images_breakablefloor1_2206_0_0, 1};
static Animation anim_breakablefloor1_2206_0 = {&direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, NULL, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0, &direction_breakablefloor1_2206_0_0};
static Animation * anim_array_breakablefloor1_2206[1] = {&anim_breakablefloor1_2206_0};
static Animations anim_breakablefloor1_2206 = {1, &anim_array_breakablefloor1_2206[0]};
static bool anim_breakablefloor1_2206_initialized;
class BreakableFloor1_2206 : public Active
{
public:
    BreakableFloor1_2206(int x, int y) : Active(x, y, BreakableFloor1_2206_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 1", 16);
#endif
        this->animations = &anim_breakablefloor1_2206;
        if (!anim_breakablefloor1_2206_initialized) {
            anim_breakablefloor1_2206_initialized = true;
            images_breakablefloor1_2206_0_0[0] = get_internal_image(5137);
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
FrameObject * create_breakablefloor1_2206(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor1_2206(x, y);
}
static Image* images_breakablefloor2_2207_0_0[1];
static Direction direction_breakablefloor2_2207_0_0 = {0, 50, 50, 0, 1, images_breakablefloor2_2207_0_0, 1};
static Animation anim_breakablefloor2_2207_0 = {&direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, NULL, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0, &direction_breakablefloor2_2207_0_0};
static Animation * anim_array_breakablefloor2_2207[1] = {&anim_breakablefloor2_2207_0};
static Animations anim_breakablefloor2_2207 = {1, &anim_array_breakablefloor2_2207[0]};
static bool anim_breakablefloor2_2207_initialized;
class BreakableFloor2_2207 : public Active
{
public:
    BreakableFloor2_2207(int x, int y) : Active(x, y, BreakableFloor2_2207_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 2", 16);
#endif
        this->animations = &anim_breakablefloor2_2207;
        if (!anim_breakablefloor2_2207_initialized) {
            anim_breakablefloor2_2207_initialized = true;
            images_breakablefloor2_2207_0_0[0] = get_internal_image(5229);
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
FrameObject * create_breakablefloor2_2207(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor2_2207(x, y);
}
static Image* images_enemymagmeon_2208_0_0[6];
static Direction direction_enemymagmeon_2208_0_0 = {0, 25, 25, 0, -1, images_enemymagmeon_2208_0_0, 6};
static Image* images_enemymagmeon_2208_0_16[6];
static Direction direction_enemymagmeon_2208_0_16 = {16, 25, 25, 0, -1, images_enemymagmeon_2208_0_16, 6};
static Image* images_enemymagmeon_2208_0_24[1];
static Direction direction_enemymagmeon_2208_0_24 = {24, 50, 50, 0, 1, images_enemymagmeon_2208_0_24, 1};
static Animation anim_enemymagmeon_2208_0 = {&direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, NULL, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, &direction_enemymagmeon_2208_0_16, NULL, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, &direction_enemymagmeon_2208_0_24, NULL, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0, &direction_enemymagmeon_2208_0_0};
static Image* images_enemymagmeon_2208_1_0[6];
static Direction direction_enemymagmeon_2208_1_0 = {0, 25, 25, 0, -1, images_enemymagmeon_2208_1_0, 6};
static Image* images_enemymagmeon_2208_1_16[6];
static Direction direction_enemymagmeon_2208_1_16 = {16, 25, 25, 0, -1, images_enemymagmeon_2208_1_16, 6};
static Image* images_enemymagmeon_2208_1_24[6];
static Direction direction_enemymagmeon_2208_1_24 = {24, 50, 50, 0, 1, images_enemymagmeon_2208_1_24, 6};
static Animation anim_enemymagmeon_2208_1 = {&direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, NULL, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, &direction_enemymagmeon_2208_1_16, NULL, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, &direction_enemymagmeon_2208_1_24, NULL, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0, &direction_enemymagmeon_2208_1_0};
static Image* images_enemymagmeon_2208_7_0[13];
static Direction direction_enemymagmeon_2208_7_0 = {0, 35, 35, 7, -1, images_enemymagmeon_2208_7_0, 13};
static Image* images_enemymagmeon_2208_7_16[13];
static Direction direction_enemymagmeon_2208_7_16 = {16, 35, 35, 7, -1, images_enemymagmeon_2208_7_16, 13};
static Image* images_enemymagmeon_2208_7_24[13];
static Direction direction_enemymagmeon_2208_7_24 = {24, 50, 50, 0, 1, images_enemymagmeon_2208_7_24, 13};
static Animation anim_enemymagmeon_2208_7 = {&direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, NULL, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, &direction_enemymagmeon_2208_7_16, NULL, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, &direction_enemymagmeon_2208_7_24, NULL, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0, &direction_enemymagmeon_2208_7_0};
static Image* images_enemymagmeon_2208_8_0[1];
static Direction direction_enemymagmeon_2208_8_0 = {0, 50, 50, 0, -1, images_enemymagmeon_2208_8_0, 1};
static Image* images_enemymagmeon_2208_8_16[1];
static Direction direction_enemymagmeon_2208_8_16 = {16, 50, 50, 0, -1, images_enemymagmeon_2208_8_16, 1};
static Animation anim_enemymagmeon_2208_8 = {&direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, NULL, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, &direction_enemymagmeon_2208_8_16, NULL, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0, &direction_enemymagmeon_2208_8_0};
static Image* images_enemymagmeon_2208_10_0[5];
static Direction direction_enemymagmeon_2208_10_0 = {0, 35, 35, 4, 1, images_enemymagmeon_2208_10_0, 5};
static Image* images_enemymagmeon_2208_10_16[5];
static Direction direction_enemymagmeon_2208_10_16 = {16, 35, 35, 4, 1, images_enemymagmeon_2208_10_16, 5};
static Image* images_enemymagmeon_2208_10_24[5];
static Direction direction_enemymagmeon_2208_10_24 = {24, 50, 50, 0, 1, images_enemymagmeon_2208_10_24, 5};
static Animation anim_enemymagmeon_2208_10 = {&direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, NULL, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, &direction_enemymagmeon_2208_10_16, NULL, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, &direction_enemymagmeon_2208_10_24, NULL, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0, &direction_enemymagmeon_2208_10_0};
static Animation * anim_array_enemymagmeon_2208[11] = {&anim_enemymagmeon_2208_0, &anim_enemymagmeon_2208_1, NULL, NULL, NULL, NULL, NULL, &anim_enemymagmeon_2208_7, &anim_enemymagmeon_2208_8, NULL, &anim_enemymagmeon_2208_10};
static Animations anim_enemymagmeon_2208 = {11, &anim_array_enemymagmeon_2208[0]};
static bool anim_enemymagmeon_2208_initialized;
class EnemyMagmeon_2208 : public Active
{
public:
    EnemyMagmeon_2208(int x, int y) : Active(x, y, EnemyMagmeon_2208_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_Magmeon", 13);
#endif
        this->animations = &anim_enemymagmeon_2208;
        if (!anim_enemymagmeon_2208_initialized) {
            anim_enemymagmeon_2208_initialized = true;
            images_enemymagmeon_2208_0_0[0] = get_internal_image(2064);
            images_enemymagmeon_2208_0_0[1] = get_internal_image(2062);
            images_enemymagmeon_2208_0_0[2] = get_internal_image(2066);
            images_enemymagmeon_2208_0_0[3] = get_internal_image(2065);
            images_enemymagmeon_2208_0_0[4] = get_internal_image(2067);
            images_enemymagmeon_2208_0_0[5] = get_internal_image(2239);
            images_enemymagmeon_2208_0_16[0] = get_internal_image(2287);
            images_enemymagmeon_2208_0_16[1] = get_internal_image(2288);
            images_enemymagmeon_2208_0_16[2] = get_internal_image(2289);
            images_enemymagmeon_2208_0_16[3] = get_internal_image(2404);
            images_enemymagmeon_2208_0_16[4] = get_internal_image(2406);
            images_enemymagmeon_2208_0_16[5] = get_internal_image(2516);
            images_enemymagmeon_2208_0_24[0] = get_internal_image(1396);
            images_enemymagmeon_2208_1_0[0] = get_internal_image(2068);
            images_enemymagmeon_2208_1_0[1] = get_internal_image(2263);
            images_enemymagmeon_2208_1_0[2] = get_internal_image(2240);
            images_enemymagmeon_2208_1_0[3] = get_internal_image(2245);
            images_enemymagmeon_2208_1_0[4] = get_internal_image(2254);
            images_enemymagmeon_2208_1_0[5] = get_internal_image(2241);
            images_enemymagmeon_2208_1_16[0] = get_internal_image(2255);
            images_enemymagmeon_2208_1_16[1] = get_internal_image(2257);
            images_enemymagmeon_2208_1_16[2] = get_internal_image(2269);
            images_enemymagmeon_2208_1_16[3] = get_internal_image(2275);
            images_enemymagmeon_2208_1_16[4] = get_internal_image(2278);
            images_enemymagmeon_2208_1_16[5] = get_internal_image(2281);
            images_enemymagmeon_2208_1_24[0] = get_internal_image(1396);
            images_enemymagmeon_2208_1_24[1] = get_internal_image(1396);
            images_enemymagmeon_2208_1_24[2] = get_internal_image(1396);
            images_enemymagmeon_2208_1_24[3] = get_internal_image(1396);
            images_enemymagmeon_2208_1_24[4] = get_internal_image(1396);
            images_enemymagmeon_2208_1_24[5] = get_internal_image(1396);
            images_enemymagmeon_2208_7_0[0] = get_internal_image(2064);
            images_enemymagmeon_2208_7_0[1] = get_internal_image(2601);
            images_enemymagmeon_2208_7_0[2] = get_internal_image(2559);
            images_enemymagmeon_2208_7_0[3] = get_internal_image(2604);
            images_enemymagmeon_2208_7_0[4] = get_internal_image(2725);
            images_enemymagmeon_2208_7_0[5] = get_internal_image(2600);
            images_enemymagmeon_2208_7_0[6] = get_internal_image(2848);
            images_enemymagmeon_2208_7_0[7] = get_internal_image(2739);
            images_enemymagmeon_2208_7_0[8] = get_internal_image(2757);
            images_enemymagmeon_2208_7_0[9] = get_internal_image(2758);
            images_enemymagmeon_2208_7_0[10] = get_internal_image(2745);
            images_enemymagmeon_2208_7_0[11] = get_internal_image(2759);
            images_enemymagmeon_2208_7_0[12] = get_internal_image(2760);
            images_enemymagmeon_2208_7_16[0] = get_internal_image(2287);
            images_enemymagmeon_2208_7_16[1] = get_internal_image(2740);
            images_enemymagmeon_2208_7_16[2] = get_internal_image(2849);
            images_enemymagmeon_2208_7_16[3] = get_internal_image(2860);
            images_enemymagmeon_2208_7_16[4] = get_internal_image(2872);
            images_enemymagmeon_2208_7_16[5] = get_internal_image(2926);
            images_enemymagmeon_2208_7_16[6] = get_internal_image(3072);
            images_enemymagmeon_2208_7_16[7] = get_internal_image(3079);
            images_enemymagmeon_2208_7_16[8] = get_internal_image(3080);
            images_enemymagmeon_2208_7_16[9] = get_internal_image(3081);
            images_enemymagmeon_2208_7_16[10] = get_internal_image(3082);
            images_enemymagmeon_2208_7_16[11] = get_internal_image(3083);
            images_enemymagmeon_2208_7_16[12] = get_internal_image(3138);
            images_enemymagmeon_2208_7_24[0] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[1] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[2] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[3] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[4] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[5] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[6] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[7] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[8] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[9] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[10] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[11] = get_internal_image(1396);
            images_enemymagmeon_2208_7_24[12] = get_internal_image(1396);
            images_enemymagmeon_2208_8_0[0] = get_internal_image(3198);
            images_enemymagmeon_2208_8_16[0] = get_internal_image(3141);
            images_enemymagmeon_2208_10_0[0] = get_internal_image(2725);
            images_enemymagmeon_2208_10_0[1] = get_internal_image(2604);
            images_enemymagmeon_2208_10_0[2] = get_internal_image(2559);
            images_enemymagmeon_2208_10_0[3] = get_internal_image(2601);
            images_enemymagmeon_2208_10_0[4] = get_internal_image(2064);
            images_enemymagmeon_2208_10_16[0] = get_internal_image(2872);
            images_enemymagmeon_2208_10_16[1] = get_internal_image(2860);
            images_enemymagmeon_2208_10_16[2] = get_internal_image(2849);
            images_enemymagmeon_2208_10_16[3] = get_internal_image(2740);
            images_enemymagmeon_2208_10_16[4] = get_internal_image(2287);
            images_enemymagmeon_2208_10_24[0] = get_internal_image(1396);
            images_enemymagmeon_2208_10_24[1] = get_internal_image(1396);
            images_enemymagmeon_2208_10_24[2] = get_internal_image(1396);
            images_enemymagmeon_2208_10_24[3] = get_internal_image(1396);
            images_enemymagmeon_2208_10_24[4] = get_internal_image(1396);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
    }
};
FrameObject * create_enemymagmeon_2208(int x, int y)
{
    return new (Active::pool.create()) EnemyMagmeon_2208(x, y);
}
static Image* images_sbloop1_2209_0_0[1];
static Direction direction_sbloop1_2209_0_0 = {0, 50, 50, 0, 1, images_sbloop1_2209_0_0, 1};
static Animation anim_sbloop1_2209_0 = {&direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, NULL, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0, &direction_sbloop1_2209_0_0};
static Animation * anim_array_sbloop1_2209[1] = {&anim_sbloop1_2209_0};
static Animations anim_sbloop1_2209 = {1, &anim_array_sbloop1_2209[0]};
static bool anim_sbloop1_2209_initialized;
class SBLoop1_2209 : public Active
{
public:
    SBLoop1_2209(int x, int y) : Active(x, y, SBLoop1_2209_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("SB_Loop 1", 9);
#endif
        this->animations = &anim_sbloop1_2209;
        if (!anim_sbloop1_2209_initialized) {
            anim_sbloop1_2209_initialized = true;
            images_sbloop1_2209_0_0[0] = get_internal_image(4863);
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
FrameObject * create_sbloop1_2209(int x, int y)
{
    return new (Active::pool.create()) SBLoop1_2209(x, y);
}
static Image* images_sbloop2_2210_0_0[1];
static Direction direction_sbloop2_2210_0_0 = {0, 50, 50, 0, 1, images_sbloop2_2210_0_0, 1};
static Animation anim_sbloop2_2210_0 = {&direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, NULL, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0, &direction_sbloop2_2210_0_0};
static Animation * anim_array_sbloop2_2210[1] = {&anim_sbloop2_2210_0};
static Animations anim_sbloop2_2210 = {1, &anim_array_sbloop2_2210[0]};
static bool anim_sbloop2_2210_initialized;
class SBLoop2_2210 : public Active
{
public:
    SBLoop2_2210(int x, int y) : Active(x, y, SBLoop2_2210_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("SB_Loop 2", 9);
#endif
        this->animations = &anim_sbloop2_2210;
        if (!anim_sbloop2_2210_initialized) {
            anim_sbloop2_2210_initialized = true;
            images_sbloop2_2210_0_0[0] = get_internal_image(4959);
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
FrameObject * create_sbloop2_2210(int x, int y)
{
    return new (Active::pool.create()) SBLoop2_2210(x, y);
}
static Image* images_sbloop3_2211_0_0[1];
static Direction direction_sbloop3_2211_0_0 = {0, 50, 50, 0, 1, images_sbloop3_2211_0_0, 1};
static Animation anim_sbloop3_2211_0 = {&direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, NULL, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0, &direction_sbloop3_2211_0_0};
static Animation * anim_array_sbloop3_2211[1] = {&anim_sbloop3_2211_0};
static Animations anim_sbloop3_2211 = {1, &anim_array_sbloop3_2211[0]};
static bool anim_sbloop3_2211_initialized;
class SBLoop3_2211 : public Active
{
public:
    SBLoop3_2211(int x, int y) : Active(x, y, SBLoop3_2211_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("SB_Loop 3", 9);
#endif
        this->animations = &anim_sbloop3_2211;
        if (!anim_sbloop3_2211_initialized) {
            anim_sbloop3_2211_initialized = true;
            images_sbloop3_2211_0_0[0] = get_internal_image(1940);
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
FrameObject * create_sbloop3_2211(int x, int y)
{
    return new (Active::pool.create()) SBLoop3_2211(x, y);
}
