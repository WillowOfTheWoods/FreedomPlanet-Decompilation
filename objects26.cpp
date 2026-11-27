#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_levellightningbolt_2512_0_0[1];
static Direction direction_levellightningbolt_2512_0_0 = {0, 50, 50, 0, 1, images_levellightningbolt_2512_0_0, 1};
static Image* images_levellightningbolt_2512_0_16[1];
static Direction direction_levellightningbolt_2512_0_16 = {16, 50, 50, 0, 1, images_levellightningbolt_2512_0_16, 1};
static Animation anim_levellightningbolt_2512_0 = {&direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, NULL, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, &direction_levellightningbolt_2512_0_16, NULL, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0, &direction_levellightningbolt_2512_0_0};
static Animation * anim_array_levellightningbolt_2512[1] = {&anim_levellightningbolt_2512_0};
static Animations anim_levellightningbolt_2512 = {1, &anim_array_levellightningbolt_2512[0]};
static bool anim_levellightningbolt_2512_initialized;
class LevelLightningBolt_2512 : public Active
{
public:
    LevelLightningBolt_2512(int x, int y) : Active(x, y, LevelLightningBolt_2512_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_LightningBolt", 19);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levellightningbolt_2512;
        if (!anim_levellightningbolt_2512_initialized) {
            anim_levellightningbolt_2512_initialized = true;
            images_levellightningbolt_2512_0_0[0] = get_internal_image(6127);
            images_levellightningbolt_2512_0_16[0] = get_internal_image(11612);
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
FrameObject * create_levellightningbolt_2512(int x, int y)
{
    return new (Active::pool.create()) LevelLightningBolt_2512(x, y);
}
static Image* images_brevonmechbackground_2513_0_0[4];
static Direction direction_brevonmechbackground_2513_0_0 = {0, 100, 100, 0, -1, images_brevonmechbackground_2513_0_0, 4};
static Image* images_brevonmechbackground_2513_0_16[4];
static Direction direction_brevonmechbackground_2513_0_16 = {16, 100, 100, 0, -1, images_brevonmechbackground_2513_0_16, 4};
static Animation anim_brevonmechbackground_2513_0 = {&direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, NULL, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, &direction_brevonmechbackground_2513_0_16, NULL, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0, &direction_brevonmechbackground_2513_0_0};
static Animation * anim_array_brevonmechbackground_2513[1] = {&anim_brevonmechbackground_2513_0};
static Animations anim_brevonmechbackground_2513 = {1, &anim_array_brevonmechbackground_2513[0]};
static bool anim_brevonmechbackground_2513_initialized;
class BrevonMechBackground_2513 : public Active
{
public:
    BrevonMechBackground_2513(int x, int y) : Active(x, y, BrevonMechBackground_2513_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Background", 21);
#endif
        set_visible(false);
        this->animations = &anim_brevonmechbackground_2513;
        if (!anim_brevonmechbackground_2513_initialized) {
            anim_brevonmechbackground_2513_initialized = true;
            images_brevonmechbackground_2513_0_0[0] = get_internal_image(13654);
            images_brevonmechbackground_2513_0_0[1] = get_internal_image(11709);
            images_brevonmechbackground_2513_0_0[2] = get_internal_image(11712);
            images_brevonmechbackground_2513_0_0[3] = get_internal_image(11720);
            images_brevonmechbackground_2513_0_16[0] = get_internal_image(11722);
            images_brevonmechbackground_2513_0_16[1] = get_internal_image(13551);
            images_brevonmechbackground_2513_0_16[2] = get_internal_image(13605);
            images_brevonmechbackground_2513_0_16[3] = get_internal_image(13646);
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
FrameObject * create_brevonmechbackground_2513(int x, int y)
{
    return new (Active::pool.create()) BrevonMechBackground_2513(x, y);
}
static Image* images_brevonmechbackshoulder_2514_0_0[1];
static Direction direction_brevonmechbackshoulder_2514_0_0 = {0, 0, 0, 0, 1, images_brevonmechbackshoulder_2514_0_0, 1};
static Image* images_brevonmechbackshoulder_2514_0_16[1];
static Direction direction_brevonmechbackshoulder_2514_0_16 = {16, 50, 50, 0, 1, images_brevonmechbackshoulder_2514_0_16, 1};
static Animation anim_brevonmechbackshoulder_2514_0 = {&direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, NULL, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, &direction_brevonmechbackshoulder_2514_0_16, NULL, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0, &direction_brevonmechbackshoulder_2514_0_0};
static Animation * anim_array_brevonmechbackshoulder_2514[1] = {&anim_brevonmechbackshoulder_2514_0};
static Animations anim_brevonmechbackshoulder_2514 = {1, &anim_array_brevonmechbackshoulder_2514[0]};
static bool anim_brevonmechbackshoulder_2514_initialized;
class BrevonMechBackShoulder_2514 : public Active
{
public:
    BrevonMechBackShoulder_2514(int x, int y) : Active(x, y, BrevonMechBackShoulder_2514_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_BackShoulder", 23);
#endif
        this->animations = &anim_brevonmechbackshoulder_2514;
        if (!anim_brevonmechbackshoulder_2514_initialized) {
            anim_brevonmechbackshoulder_2514_initialized = true;
            images_brevonmechbackshoulder_2514_0_0[0] = get_internal_image(14597);
            images_brevonmechbackshoulder_2514_0_16[0] = get_internal_image(14598);
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
FrameObject * create_brevonmechbackshoulder_2514(int x, int y)
{
    return new (Active::pool.create()) BrevonMechBackShoulder_2514(x, y);
}
static Image* images_brevonmechbackclaw_2515_0_0[1];
static Direction direction_brevonmechbackclaw_2515_0_0 = {0, 0, 0, 0, 1, images_brevonmechbackclaw_2515_0_0, 1};
static Image* images_brevonmechbackclaw_2515_0_16[1];
static Direction direction_brevonmechbackclaw_2515_0_16 = {16, 0, 0, 0, 1, images_brevonmechbackclaw_2515_0_16, 1};
static Animation anim_brevonmechbackclaw_2515_0 = {&direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, NULL, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, &direction_brevonmechbackclaw_2515_0_16, NULL, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0, &direction_brevonmechbackclaw_2515_0_0};
static Animation * anim_array_brevonmechbackclaw_2515[1] = {&anim_brevonmechbackclaw_2515_0};
static Animations anim_brevonmechbackclaw_2515 = {1, &anim_array_brevonmechbackclaw_2515[0]};
static bool anim_brevonmechbackclaw_2515_initialized;
class BrevonMechBackClaw_2515 : public Active
{
public:
    BrevonMechBackClaw_2515(int x, int y) : Active(x, y, BrevonMechBackClaw_2515_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_BackClaw", 19);
#endif
        this->animations = &anim_brevonmechbackclaw_2515;
        if (!anim_brevonmechbackclaw_2515_initialized) {
            anim_brevonmechbackclaw_2515_initialized = true;
            images_brevonmechbackclaw_2515_0_0[0] = get_internal_image(5980);
            images_brevonmechbackclaw_2515_0_16[0] = get_internal_image(10765);
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
FrameObject * create_brevonmechbackclaw_2515(int x, int y)
{
    return new (Active::pool.create()) BrevonMechBackClaw_2515(x, y);
}
static Image* images_brevonmechbackarm_2516_0_0[1];
static Direction direction_brevonmechbackarm_2516_0_0 = {0, 0, 0, 0, 1, images_brevonmechbackarm_2516_0_0, 1};
static Image* images_brevonmechbackarm_2516_0_16[1];
static Direction direction_brevonmechbackarm_2516_0_16 = {16, 50, 50, 0, 1, images_brevonmechbackarm_2516_0_16, 1};
static Animation anim_brevonmechbackarm_2516_0 = {&direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, NULL, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, &direction_brevonmechbackarm_2516_0_16, NULL, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0, &direction_brevonmechbackarm_2516_0_0};
static Animation * anim_array_brevonmechbackarm_2516[1] = {&anim_brevonmechbackarm_2516_0};
static Animations anim_brevonmechbackarm_2516 = {1, &anim_array_brevonmechbackarm_2516[0]};
static bool anim_brevonmechbackarm_2516_initialized;
class BrevonMechBackArm_2516 : public Active
{
public:
    BrevonMechBackArm_2516(int x, int y) : Active(x, y, BrevonMechBackArm_2516_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_BackArm", 18);
#endif
        this->animations = &anim_brevonmechbackarm_2516;
        if (!anim_brevonmechbackarm_2516_initialized) {
            anim_brevonmechbackarm_2516_initialized = true;
            images_brevonmechbackarm_2516_0_0[0] = get_internal_image(14587);
            images_brevonmechbackarm_2516_0_16[0] = get_internal_image(14589);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 230);
    }
};
FrameObject * create_brevonmechbackarm_2516(int x, int y)
{
    return new (Active::pool.create()) BrevonMechBackArm_2516(x, y);
}
static Image* images_npcsyntaxleftarm_2517_0_0[2];
static Direction direction_npcsyntaxleftarm_2517_0_0 = {0, 0, 0, 0, 1, images_npcsyntaxleftarm_2517_0_0, 2};
static Image* images_npcsyntaxleftarm_2517_0_16[2];
static Direction direction_npcsyntaxleftarm_2517_0_16 = {16, 0, 0, 0, 1, images_npcsyntaxleftarm_2517_0_16, 2};
static Animation anim_npcsyntaxleftarm_2517_0 = {&direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, NULL, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, &direction_npcsyntaxleftarm_2517_0_16, NULL, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0, &direction_npcsyntaxleftarm_2517_0_0};
static Animation * anim_array_npcsyntaxleftarm_2517[1] = {&anim_npcsyntaxleftarm_2517_0};
static Animations anim_npcsyntaxleftarm_2517 = {1, &anim_array_npcsyntaxleftarm_2517[0]};
static bool anim_npcsyntaxleftarm_2517_initialized;
class NPCSyntaxLeftArm_2517 : public Active
{
public:
    NPCSyntaxLeftArm_2517(int x, int y) : Active(x, y, NPCSyntaxLeftArm_2517_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_SyntaxLeftArm", 17);
#endif
        this->animations = &anim_npcsyntaxleftarm_2517;
        if (!anim_npcsyntaxleftarm_2517_initialized) {
            anim_npcsyntaxleftarm_2517_initialized = true;
            images_npcsyntaxleftarm_2517_0_0[0] = get_internal_image(11742);
            images_npcsyntaxleftarm_2517_0_0[1] = get_internal_image(11743);
            images_npcsyntaxleftarm_2517_0_16[0] = get_internal_image(11744);
            images_npcsyntaxleftarm_2517_0_16[1] = get_internal_image(11743);
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
FrameObject * create_npcsyntaxleftarm_2517(int x, int y)
{
    return new (Active::pool.create()) NPCSyntaxLeftArm_2517(x, y);
}
static Image* images_npcsyntaxrightarm_2518_0_0[2];
static Direction direction_npcsyntaxrightarm_2518_0_0 = {0, 0, 0, 0, 1, images_npcsyntaxrightarm_2518_0_0, 2};
static Image* images_npcsyntaxrightarm_2518_0_16[2];
static Direction direction_npcsyntaxrightarm_2518_0_16 = {16, 0, 0, 0, 1, images_npcsyntaxrightarm_2518_0_16, 2};
static Animation anim_npcsyntaxrightarm_2518_0 = {&direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, NULL, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, &direction_npcsyntaxrightarm_2518_0_16, NULL, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0, &direction_npcsyntaxrightarm_2518_0_0};
static Animation * anim_array_npcsyntaxrightarm_2518[1] = {&anim_npcsyntaxrightarm_2518_0};
static Animations anim_npcsyntaxrightarm_2518 = {1, &anim_array_npcsyntaxrightarm_2518[0]};
static bool anim_npcsyntaxrightarm_2518_initialized;
class NPCSyntaxRightArm_2518 : public Active
{
public:
    NPCSyntaxRightArm_2518(int x, int y) : Active(x, y, NPCSyntaxRightArm_2518_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_SyntaxRightArm", 18);
#endif
        this->animations = &anim_npcsyntaxrightarm_2518;
        if (!anim_npcsyntaxrightarm_2518_initialized) {
            anim_npcsyntaxrightarm_2518_initialized = true;
            images_npcsyntaxrightarm_2518_0_0[0] = get_internal_image(11744);
            images_npcsyntaxrightarm_2518_0_0[1] = get_internal_image(11745);
            images_npcsyntaxrightarm_2518_0_16[0] = get_internal_image(11742);
            images_npcsyntaxrightarm_2518_0_16[1] = get_internal_image(11745);
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
FrameObject * create_npcsyntaxrightarm_2518(int x, int y)
{
    return new (Active::pool.create()) NPCSyntaxRightArm_2518(x, y);
}
static Image* images_npcsyntax_2519_0_0[2];
static Direction direction_npcsyntax_2519_0_0 = {0, 40, 40, 0, -1, images_npcsyntax_2519_0_0, 2};
static Image* images_npcsyntax_2519_0_16[2];
static Direction direction_npcsyntax_2519_0_16 = {16, 40, 40, 0, -1, images_npcsyntax_2519_0_16, 2};
static Image* images_npcsyntax_2519_0_24[2];
static Direction direction_npcsyntax_2519_0_24 = {24, 40, 40, 0, -1, images_npcsyntax_2519_0_24, 2};
static Animation anim_npcsyntax_2519_0 = {&direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, NULL, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, &direction_npcsyntax_2519_0_16, NULL, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, &direction_npcsyntax_2519_0_24, NULL, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0, &direction_npcsyntax_2519_0_0};
static Image* images_npcsyntax_2519_7_0[18];
static Direction direction_npcsyntax_2519_7_0 = {0, 70, 70, 0, 1, images_npcsyntax_2519_7_0, 18};
static Image* images_npcsyntax_2519_7_16[18];
static Direction direction_npcsyntax_2519_7_16 = {16, 70, 70, 0, 1, images_npcsyntax_2519_7_16, 18};
static Animation anim_npcsyntax_2519_7 = {&direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, NULL, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, &direction_npcsyntax_2519_7_16, NULL, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0, &direction_npcsyntax_2519_7_0};
static Animation * anim_array_npcsyntax_2519[8] = {&anim_npcsyntax_2519_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_npcsyntax_2519_7};
static Animations anim_npcsyntax_2519 = {8, &anim_array_npcsyntax_2519[0]};
static bool anim_npcsyntax_2519_initialized;
class NPCSyntax_2519 : public Active
{
public:
    NPCSyntax_2519(int x, int y) : Active(x, y, NPCSyntax_2519_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Syntax", 10);
#endif
        this->animations = &anim_npcsyntax_2519;
        if (!anim_npcsyntax_2519_initialized) {
            anim_npcsyntax_2519_initialized = true;
            images_npcsyntax_2519_0_0[0] = get_internal_image(6928);
            images_npcsyntax_2519_0_0[1] = get_internal_image(6930);
            images_npcsyntax_2519_0_16[0] = get_internal_image(11747);
            images_npcsyntax_2519_0_16[1] = get_internal_image(11748);
            images_npcsyntax_2519_0_24[0] = get_internal_image(753);
            images_npcsyntax_2519_0_24[1] = get_internal_image(752);
            images_npcsyntax_2519_7_0[0] = get_internal_image(6942);
            images_npcsyntax_2519_7_0[1] = get_internal_image(7113);
            images_npcsyntax_2519_7_0[2] = get_internal_image(7179);
            images_npcsyntax_2519_7_0[3] = get_internal_image(7311);
            images_npcsyntax_2519_7_0[4] = get_internal_image(8627);
            images_npcsyntax_2519_7_0[5] = get_internal_image(7179);
            images_npcsyntax_2519_7_0[6] = get_internal_image(7396);
            images_npcsyntax_2519_7_0[7] = get_internal_image(6942);
            images_npcsyntax_2519_7_0[8] = get_internal_image(7113);
            images_npcsyntax_2519_7_0[9] = get_internal_image(7179);
            images_npcsyntax_2519_7_0[10] = get_internal_image(7311);
            images_npcsyntax_2519_7_0[11] = get_internal_image(8627);
            images_npcsyntax_2519_7_0[12] = get_internal_image(7179);
            images_npcsyntax_2519_7_0[13] = get_internal_image(7396);
            images_npcsyntax_2519_7_0[14] = get_internal_image(8633);
            images_npcsyntax_2519_7_0[15] = get_internal_image(6928);
            images_npcsyntax_2519_7_0[16] = get_internal_image(11673);
            images_npcsyntax_2519_7_0[17] = get_internal_image(6928);
            images_npcsyntax_2519_7_16[0] = get_internal_image(4041);
            images_npcsyntax_2519_7_16[1] = get_internal_image(11655);
            images_npcsyntax_2519_7_16[2] = get_internal_image(11662);
            images_npcsyntax_2519_7_16[3] = get_internal_image(11663);
            images_npcsyntax_2519_7_16[4] = get_internal_image(11666);
            images_npcsyntax_2519_7_16[5] = get_internal_image(11662);
            images_npcsyntax_2519_7_16[6] = get_internal_image(11668);
            images_npcsyntax_2519_7_16[7] = get_internal_image(4041);
            images_npcsyntax_2519_7_16[8] = get_internal_image(11655);
            images_npcsyntax_2519_7_16[9] = get_internal_image(11662);
            images_npcsyntax_2519_7_16[10] = get_internal_image(11663);
            images_npcsyntax_2519_7_16[11] = get_internal_image(11666);
            images_npcsyntax_2519_7_16[12] = get_internal_image(11662);
            images_npcsyntax_2519_7_16[13] = get_internal_image(11668);
            images_npcsyntax_2519_7_16[14] = get_internal_image(11669);
            images_npcsyntax_2519_7_16[15] = get_internal_image(11747);
            images_npcsyntax_2519_7_16[16] = get_internal_image(11671);
            images_npcsyntax_2519_7_16[17] = get_internal_image(11747);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 130);
        alterables->values.set(5, 50);
        alterables->values.set(6, 30);
        alterables->values.set(7, 30);
        alterables->values.set(8, 180);
        alterables->values.set(9, 315);
        alterables->values.set(11, 1);
        alterables->values.set(14, -1);
    }
};
FrameObject * create_npcsyntax_2519(int x, int y)
{
    return new (Active::pool.create()) NPCSyntax_2519(x, y);
}
static Image* images_npchostagetorque_2520_0_0[1];
static Direction direction_npchostagetorque_2520_0_0 = {0, 50, 50, 0, 1, images_npchostagetorque_2520_0_0, 1};
static Image* images_npchostagetorque_2520_0_16[1];
static Direction direction_npchostagetorque_2520_0_16 = {16, 50, 50, 0, 1, images_npchostagetorque_2520_0_16, 1};
static Animation anim_npchostagetorque_2520_0 = {&direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, NULL, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, &direction_npchostagetorque_2520_0_16, NULL, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0, &direction_npchostagetorque_2520_0_0};
static Animation * anim_array_npchostagetorque_2520[1] = {&anim_npchostagetorque_2520_0};
static Animations anim_npchostagetorque_2520 = {1, &anim_array_npchostagetorque_2520[0]};
static bool anim_npchostagetorque_2520_initialized;
class NPCHostageTorque_2520 : public Active
{
public:
    NPCHostageTorque_2520(int x, int y) : Active(x, y, NPCHostageTorque_2520_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_HostageTorque", 17);
#endif
        this->animations = &anim_npchostagetorque_2520;
        if (!anim_npchostagetorque_2520_initialized) {
            anim_npchostagetorque_2520_initialized = true;
            images_npchostagetorque_2520_0_0[0] = get_internal_image(4669);
            images_npchostagetorque_2520_0_16[0] = get_internal_image(4760);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
    }
};
FrameObject * create_npchostagetorque_2520(int x, int y)
{
    return new (Active::pool.create()) NPCHostageTorque_2520(x, y);
}
static Image* images_bossgunshipplatform_2521_0_0[1];
static Direction direction_bossgunshipplatform_2521_0_0 = {0, 50, 50, 0, 1, images_bossgunshipplatform_2521_0_0, 1};
static Animation anim_bossgunshipplatform_2521_0 = {&direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, NULL, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0, &direction_bossgunshipplatform_2521_0_0};
static Animation * anim_array_bossgunshipplatform_2521[1] = {&anim_bossgunshipplatform_2521_0};
static Animations anim_bossgunshipplatform_2521 = {1, &anim_array_bossgunshipplatform_2521[0]};
static bool anim_bossgunshipplatform_2521_initialized;
class BossGunshipPlatform_2521 : public Active
{
public:
    BossGunshipPlatform_2521(int x, int y) : Active(x, y, BossGunshipPlatform_2521_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipPlatform", 20);
#endif
        this->animations = &anim_bossgunshipplatform_2521;
        if (!anim_bossgunshipplatform_2521_initialized) {
            anim_bossgunshipplatform_2521_initialized = true;
            images_bossgunshipplatform_2521_0_0[0] = get_internal_image(12443);
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
FrameObject * create_bossgunshipplatform_2521(int x, int y)
{
    return new (Active::pool.create()) BossGunshipPlatform_2521(x, y);
}
static Image* images_bossgunshiptrooper_2522_0_0[1];
static Direction direction_bossgunshiptrooper_2522_0_0 = {0, 50, 50, 0, 1, images_bossgunshiptrooper_2522_0_0, 1};
static Image* images_bossgunshiptrooper_2522_0_16[1];
static Direction direction_bossgunshiptrooper_2522_0_16 = {16, 50, 50, 0, 1, images_bossgunshiptrooper_2522_0_16, 1};
static Animation anim_bossgunshiptrooper_2522_0 = {&direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, NULL, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, &direction_bossgunshiptrooper_2522_0_16, NULL, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0, &direction_bossgunshiptrooper_2522_0_0};
static Animation * anim_array_bossgunshiptrooper_2522[1] = {&anim_bossgunshiptrooper_2522_0};
static Animations anim_bossgunshiptrooper_2522 = {1, &anim_array_bossgunshiptrooper_2522[0]};
static bool anim_bossgunshiptrooper_2522_initialized;
class BossGunshipTrooper_2522 : public Active
{
public:
    BossGunshipTrooper_2522(int x, int y) : Active(x, y, BossGunshipTrooper_2522_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipTrooper", 19);
#endif
        set_visible(false);
        this->animations = &anim_bossgunshiptrooper_2522;
        if (!anim_bossgunshiptrooper_2522_initialized) {
            anim_bossgunshiptrooper_2522_initialized = true;
            images_bossgunshiptrooper_2522_0_0[0] = get_internal_image(750);
            images_bossgunshiptrooper_2522_0_16[0] = get_internal_image(754);
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
FrameObject * create_bossgunshiptrooper_2522(int x, int y)
{
    return new (Active::pool.create()) BossGunshipTrooper_2522(x, y);
}
static Image* images_bossgunshipmissilerackleft_2523_0_0[6];
static Direction direction_bossgunshipmissilerackleft_2523_0_0 = {0, 0, 0, 0, 1, images_bossgunshipmissilerackleft_2523_0_0, 6};
static Animation anim_bossgunshipmissilerackleft_2523_0 = {&direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, NULL, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0, &direction_bossgunshipmissilerackleft_2523_0_0};
static Animation * anim_array_bossgunshipmissilerackleft_2523[1] = {&anim_bossgunshipmissilerackleft_2523_0};
static Animations anim_bossgunshipmissilerackleft_2523 = {1, &anim_array_bossgunshipmissilerackleft_2523[0]};
static bool anim_bossgunshipmissilerackleft_2523_initialized;
class BossGunshipMissileRackLeft_2523 : public Active
{
public:
    BossGunshipMissileRackLeft_2523(int x, int y) : Active(x, y, BossGunshipMissileRackLeft_2523_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipMissileRackLeft", 27);
#endif
        this->animations = &anim_bossgunshipmissilerackleft_2523;
        if (!anim_bossgunshipmissilerackleft_2523_initialized) {
            anim_bossgunshipmissilerackleft_2523_initialized = true;
            images_bossgunshipmissilerackleft_2523_0_0[0] = get_internal_image(12444);
            images_bossgunshipmissilerackleft_2523_0_0[1] = get_internal_image(12445);
            images_bossgunshipmissilerackleft_2523_0_0[2] = get_internal_image(12452);
            images_bossgunshipmissilerackleft_2523_0_0[3] = get_internal_image(12453);
            images_bossgunshipmissilerackleft_2523_0_0[4] = get_internal_image(12454);
            images_bossgunshipmissilerackleft_2523_0_0[5] = get_internal_image(12455);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -8);
    }
};
FrameObject * create_bossgunshipmissilerackleft_2523(int x, int y)
{
    return new (Active::pool.create()) BossGunshipMissileRackLeft_2523(x, y);
}
static Image* images_bossgunshipmissilerackright_2524_0_0[6];
static Direction direction_bossgunshipmissilerackright_2524_0_0 = {0, 0, 0, 0, 1, images_bossgunshipmissilerackright_2524_0_0, 6};
static Animation anim_bossgunshipmissilerackright_2524_0 = {&direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, NULL, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0, &direction_bossgunshipmissilerackright_2524_0_0};
static Animation * anim_array_bossgunshipmissilerackright_2524[1] = {&anim_bossgunshipmissilerackright_2524_0};
static Animations anim_bossgunshipmissilerackright_2524 = {1, &anim_array_bossgunshipmissilerackright_2524[0]};
static bool anim_bossgunshipmissilerackright_2524_initialized;
class BossGunshipMissileRackRight_2524 : public Active
{
public:
    BossGunshipMissileRackRight_2524(int x, int y) : Active(x, y, BossGunshipMissileRackRight_2524_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipMissileRackRight", 28);
#endif
        this->animations = &anim_bossgunshipmissilerackright_2524;
        if (!anim_bossgunshipmissilerackright_2524_initialized) {
            anim_bossgunshipmissilerackright_2524_initialized = true;
            images_bossgunshipmissilerackright_2524_0_0[0] = get_internal_image(12464);
            images_bossgunshipmissilerackright_2524_0_0[1] = get_internal_image(12461);
            images_bossgunshipmissilerackright_2524_0_0[2] = get_internal_image(12456);
            images_bossgunshipmissilerackright_2524_0_0[3] = get_internal_image(12460);
            images_bossgunshipmissilerackright_2524_0_0[4] = get_internal_image(12463);
            images_bossgunshipmissilerackright_2524_0_0[5] = get_internal_image(12462);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -8);
    }
};
FrameObject * create_bossgunshipmissilerackright_2524(int x, int y)
{
    return new (Active::pool.create()) BossGunshipMissileRackRight_2524(x, y);
}
static Image* images_bossgunshipbladeleft_2525_0_0[1];
static Direction direction_bossgunshipbladeleft_2525_0_0 = {0, 50, 50, 0, 1, images_bossgunshipbladeleft_2525_0_0, 1};
static Animation anim_bossgunshipbladeleft_2525_0 = {&direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, NULL, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0, &direction_bossgunshipbladeleft_2525_0_0};
static Animation * anim_array_bossgunshipbladeleft_2525[1] = {&anim_bossgunshipbladeleft_2525_0};
static Animations anim_bossgunshipbladeleft_2525 = {1, &anim_array_bossgunshipbladeleft_2525[0]};
static bool anim_bossgunshipbladeleft_2525_initialized;
class BossGunshipBladeLeft_2525 : public Active
{
public:
    BossGunshipBladeLeft_2525(int x, int y) : Active(x, y, BossGunshipBladeLeft_2525_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipBladeLeft", 21);
#endif
        this->animations = &anim_bossgunshipbladeleft_2525;
        if (!anim_bossgunshipbladeleft_2525_initialized) {
            anim_bossgunshipbladeleft_2525_initialized = true;
            images_bossgunshipbladeleft_2525_0_0[0] = get_internal_image(12437);
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
FrameObject * create_bossgunshipbladeleft_2525(int x, int y)
{
    return new (Active::pool.create()) BossGunshipBladeLeft_2525(x, y);
}
static Image* images_bossgunshipbladeright_2526_0_0[1];
static Direction direction_bossgunshipbladeright_2526_0_0 = {0, 50, 50, 0, 1, images_bossgunshipbladeright_2526_0_0, 1};
static Animation anim_bossgunshipbladeright_2526_0 = {&direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, NULL, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0, &direction_bossgunshipbladeright_2526_0_0};
static Animation * anim_array_bossgunshipbladeright_2526[1] = {&anim_bossgunshipbladeright_2526_0};
static Animations anim_bossgunshipbladeright_2526 = {1, &anim_array_bossgunshipbladeright_2526[0]};
static bool anim_bossgunshipbladeright_2526_initialized;
class BossGunshipBladeRight_2526 : public Active
{
public:
    BossGunshipBladeRight_2526(int x, int y) : Active(x, y, BossGunshipBladeRight_2526_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipBladeRight", 22);
#endif
        this->animations = &anim_bossgunshipbladeright_2526;
        if (!anim_bossgunshipbladeright_2526_initialized) {
            anim_bossgunshipbladeright_2526_initialized = true;
            images_bossgunshipbladeright_2526_0_0[0] = get_internal_image(12438);
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
FrameObject * create_bossgunshipbladeright_2526(int x, int y)
{
    return new (Active::pool.create()) BossGunshipBladeRight_2526(x, y);
}
static Image* images_bossgunship_2527_0_0[1];
static Direction direction_bossgunship_2527_0_0 = {0, 50, 50, 0, 1, images_bossgunship_2527_0_0, 1};
static Animation anim_bossgunship_2527_0 = {&direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, NULL, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0, &direction_bossgunship_2527_0_0};
static Animation * anim_array_bossgunship_2527[1] = {&anim_bossgunship_2527_0};
static Animations anim_bossgunship_2527 = {1, &anim_array_bossgunship_2527[0]};
static bool anim_bossgunship_2527_initialized;
class BossGunship_2527 : public Active
{
public:
    BossGunship_2527(int x, int y) : Active(x, y, BossGunship_2527_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Gunship", 12);
#endif
        this->animations = &anim_bossgunship_2527;
        if (!anim_bossgunship_2527_initialized) {
            anim_bossgunship_2527_initialized = true;
            images_bossgunship_2527_0_0[0] = get_internal_image(2225);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(6, 40);
        alterables->values.set(7, 20);
        alterables->values.set(14, -1);
    }
};
FrameObject * create_bossgunship_2527(int x, int y)
{
    return new (Active::pool.create()) BossGunship_2527(x, y);
}
static Image* images_bossgunshipturbineleft_2528_0_0[1];
static Direction direction_bossgunshipturbineleft_2528_0_0 = {0, 50, 50, 0, 1, images_bossgunshipturbineleft_2528_0_0, 1};
static Image* images_bossgunshipturbineleft_2528_0_8[1];
static Direction direction_bossgunshipturbineleft_2528_0_8 = {8, 50, 50, 0, 1, images_bossgunshipturbineleft_2528_0_8, 1};
static Animation anim_bossgunshipturbineleft_2528_0 = {&direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, NULL, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, &direction_bossgunshipturbineleft_2528_0_8, NULL, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0, &direction_bossgunshipturbineleft_2528_0_0};
static Animation * anim_array_bossgunshipturbineleft_2528[1] = {&anim_bossgunshipturbineleft_2528_0};
static Animations anim_bossgunshipturbineleft_2528 = {1, &anim_array_bossgunshipturbineleft_2528[0]};
static bool anim_bossgunshipturbineleft_2528_initialized;
class BossGunshipTurbineLeft_2528 : public Active
{
public:
    BossGunshipTurbineLeft_2528(int x, int y) : Active(x, y, BossGunshipTurbineLeft_2528_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipTurbineLeft", 23);
#endif
        this->animations = &anim_bossgunshipturbineleft_2528;
        if (!anim_bossgunshipturbineleft_2528_initialized) {
            anim_bossgunshipturbineleft_2528_initialized = true;
            images_bossgunshipturbineleft_2528_0_0[0] = get_internal_image(12434);
            images_bossgunshipturbineleft_2528_0_8[0] = get_internal_image(2856);
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
FrameObject * create_bossgunshipturbineleft_2528(int x, int y)
{
    return new (Active::pool.create()) BossGunshipTurbineLeft_2528(x, y);
}
static Image* images_bossgunshipturbineright_2529_0_0[1];
static Direction direction_bossgunshipturbineright_2529_0_0 = {0, 50, 50, 0, 1, images_bossgunshipturbineright_2529_0_0, 1};
static Animation anim_bossgunshipturbineright_2529_0 = {&direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, NULL, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0, &direction_bossgunshipturbineright_2529_0_0};
static Animation * anim_array_bossgunshipturbineright_2529[1] = {&anim_bossgunshipturbineright_2529_0};
static Animations anim_bossgunshipturbineright_2529 = {1, &anim_array_bossgunshipturbineright_2529[0]};
static bool anim_bossgunshipturbineright_2529_initialized;
class BossGunshipTurbineRight_2529 : public Active
{
public:
    BossGunshipTurbineRight_2529(int x, int y) : Active(x, y, BossGunshipTurbineRight_2529_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipTurbineRight", 24);
#endif
        this->animations = &anim_bossgunshipturbineright_2529;
        if (!anim_bossgunshipturbineright_2529_initialized) {
            anim_bossgunshipturbineright_2529_initialized = true;
            images_bossgunshipturbineright_2529_0_0[0] = get_internal_image(12436);
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
FrameObject * create_bossgunshipturbineright_2529(int x, int y)
{
    return new (Active::pool.create()) BossGunshipTurbineRight_2529(x, y);
}
static Image* images_bossgunshiplight_2530_0_0[1];
static Direction direction_bossgunshiplight_2530_0_0 = {0, 50, 50, 0, 1, images_bossgunshiplight_2530_0_0, 1};
static Animation anim_bossgunshiplight_2530_0 = {&direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, NULL, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0, &direction_bossgunshiplight_2530_0_0};
static Animation * anim_array_bossgunshiplight_2530[1] = {&anim_bossgunshiplight_2530_0};
static Animations anim_bossgunshiplight_2530 = {1, &anim_array_bossgunshiplight_2530[0]};
static bool anim_bossgunshiplight_2530_initialized;
class BossGunshipLight_2530 : public Active
{
public:
    BossGunshipLight_2530(int x, int y) : Active(x, y, BossGunshipLight_2530_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipLight", 17);
#endif
        this->animations = &anim_bossgunshiplight_2530;
        if (!anim_bossgunshiplight_2530_initialized) {
            anim_bossgunshiplight_2530_initialized = true;
            images_bossgunshiplight_2530_0_0[0] = get_internal_image(12442);
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
FrameObject * create_bossgunshiplight_2530(int x, int y)
{
    return new (Active::pool.create()) BossGunshipLight_2530(x, y);
}
static Image* images_bossgunshiplightleft_2531_0_0[1];
static Direction direction_bossgunshiplightleft_2531_0_0 = {0, 50, 50, 0, 1, images_bossgunshiplightleft_2531_0_0, 1};
static Image* images_bossgunshiplightleft_2531_0_1[3];
static Direction direction_bossgunshiplightleft_2531_0_1 = {1, 50, 50, 0, -1, images_bossgunshiplightleft_2531_0_1, 3};
static Animation anim_bossgunshiplightleft_2531_0 = {&direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_1, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0, &direction_bossgunshiplightleft_2531_0_0};
static Animation * anim_array_bossgunshiplightleft_2531[1] = {&anim_bossgunshiplightleft_2531_0};
static Animations anim_bossgunshiplightleft_2531 = {1, &anim_array_bossgunshiplightleft_2531[0]};
static bool anim_bossgunshiplightleft_2531_initialized;
class BossGunshipLightLeft_2531 : public Active
{
public:
    BossGunshipLightLeft_2531(int x, int y) : Active(x, y, BossGunshipLightLeft_2531_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipLightLeft", 21);
#endif
        this->animations = &anim_bossgunshiplightleft_2531;
        if (!anim_bossgunshiplightleft_2531_initialized) {
            anim_bossgunshiplightleft_2531_initialized = true;
            images_bossgunshiplightleft_2531_0_0[0] = get_internal_image(3871);
            images_bossgunshiplightleft_2531_0_1[0] = get_internal_image(3892);
            images_bossgunshiplightleft_2531_0_1[1] = get_internal_image(3916);
            images_bossgunshiplightleft_2531_0_1[2] = get_internal_image(3917);
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
FrameObject * create_bossgunshiplightleft_2531(int x, int y)
{
    return new (Active::pool.create()) BossGunshipLightLeft_2531(x, y);
}
static Image* images_bossgunshiplightright_2532_0_0[1];
static Direction direction_bossgunshiplightright_2532_0_0 = {0, 50, 50, 0, 1, images_bossgunshiplightright_2532_0_0, 1};
static Image* images_bossgunshiplightright_2532_0_1[3];
static Direction direction_bossgunshiplightright_2532_0_1 = {1, 50, 50, 0, -1, images_bossgunshiplightright_2532_0_1, 3};
static Animation anim_bossgunshiplightright_2532_0 = {&direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_1, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0, &direction_bossgunshiplightright_2532_0_0};
static Animation * anim_array_bossgunshiplightright_2532[1] = {&anim_bossgunshiplightright_2532_0};
static Animations anim_bossgunshiplightright_2532 = {1, &anim_array_bossgunshiplightright_2532[0]};
static bool anim_bossgunshiplightright_2532_initialized;
class BossGunshipLightRight_2532 : public Active
{
public:
    BossGunshipLightRight_2532(int x, int y) : Active(x, y, BossGunshipLightRight_2532_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipLightRight", 22);
#endif
        this->animations = &anim_bossgunshiplightright_2532;
        if (!anim_bossgunshiplightright_2532_initialized) {
            anim_bossgunshiplightright_2532_initialized = true;
            images_bossgunshiplightright_2532_0_0[0] = get_internal_image(3918);
            images_bossgunshiplightright_2532_0_1[0] = get_internal_image(3919);
            images_bossgunshiplightright_2532_0_1[1] = get_internal_image(3954);
            images_bossgunshiplightright_2532_0_1[2] = get_internal_image(3963);
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
FrameObject * create_bossgunshiplightright_2532(int x, int y)
{
    return new (Active::pool.create()) BossGunshipLightRight_2532(x, y);
}
static Image* images_bossgunshipcannonleft_2533_0_0[1];
static Direction direction_bossgunshipcannonleft_2533_0_0 = {0, 50, 50, 0, 1, images_bossgunshipcannonleft_2533_0_0, 1};
static Animation anim_bossgunshipcannonleft_2533_0 = {&direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, NULL, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0, &direction_bossgunshipcannonleft_2533_0_0};
static Image* images_bossgunshipcannonleft_2533_7_0[6];
static Direction direction_bossgunshipcannonleft_2533_7_0 = {0, 50, 50, 0, 1, images_bossgunshipcannonleft_2533_7_0, 6};
static Animation anim_bossgunshipcannonleft_2533_7 = {&direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, NULL, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0, &direction_bossgunshipcannonleft_2533_7_0};
static Animation * anim_array_bossgunshipcannonleft_2533[8] = {&anim_bossgunshipcannonleft_2533_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgunshipcannonleft_2533_7};
static Animations anim_bossgunshipcannonleft_2533 = {8, &anim_array_bossgunshipcannonleft_2533[0]};
static bool anim_bossgunshipcannonleft_2533_initialized;
class BossGunshipCannonLeft_2533 : public Active
{
public:
    BossGunshipCannonLeft_2533(int x, int y) : Active(x, y, BossGunshipCannonLeft_2533_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipCannonLeft", 22);
#endif
        set_visible(false);
        this->animations = &anim_bossgunshipcannonleft_2533;
        if (!anim_bossgunshipcannonleft_2533_initialized) {
            anim_bossgunshipcannonleft_2533_initialized = true;
            images_bossgunshipcannonleft_2533_0_0[0] = get_internal_image(12439);
            images_bossgunshipcannonleft_2533_7_0[0] = get_internal_image(5063);
            images_bossgunshipcannonleft_2533_7_0[1] = get_internal_image(5094);
            images_bossgunshipcannonleft_2533_7_0[2] = get_internal_image(5096);
            images_bossgunshipcannonleft_2533_7_0[3] = get_internal_image(5246);
            images_bossgunshipcannonleft_2533_7_0[4] = get_internal_image(5290);
            images_bossgunshipcannonleft_2533_7_0[5] = get_internal_image(5441);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -48);
        alterables->values.set(4, 40);
    }
};
FrameObject * create_bossgunshipcannonleft_2533(int x, int y)
{
    return new (Active::pool.create()) BossGunshipCannonLeft_2533(x, y);
}
static Image* images_bossgunshipcannonright_2534_0_0[1];
static Direction direction_bossgunshipcannonright_2534_0_0 = {0, 50, 50, 0, 1, images_bossgunshipcannonright_2534_0_0, 1};
static Animation anim_bossgunshipcannonright_2534_0 = {&direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, NULL, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0, &direction_bossgunshipcannonright_2534_0_0};
static Image* images_bossgunshipcannonright_2534_7_0[6];
static Direction direction_bossgunshipcannonright_2534_7_0 = {0, 50, 50, 0, 1, images_bossgunshipcannonright_2534_7_0, 6};
static Animation anim_bossgunshipcannonright_2534_7 = {&direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, NULL, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0, &direction_bossgunshipcannonright_2534_7_0};
static Animation * anim_array_bossgunshipcannonright_2534[8] = {&anim_bossgunshipcannonright_2534_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgunshipcannonright_2534_7};
static Animations anim_bossgunshipcannonright_2534 = {8, &anim_array_bossgunshipcannonright_2534[0]};
static bool anim_bossgunshipcannonright_2534_initialized;
class BossGunshipCannonRight_2534 : public Active
{
public:
    BossGunshipCannonRight_2534(int x, int y) : Active(x, y, BossGunshipCannonRight_2534_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipCannonRight", 23);
#endif
        set_visible(false);
        this->animations = &anim_bossgunshipcannonright_2534;
        if (!anim_bossgunshipcannonright_2534_initialized) {
            anim_bossgunshipcannonright_2534_initialized = true;
            images_bossgunshipcannonright_2534_0_0[0] = get_internal_image(12441);
            images_bossgunshipcannonright_2534_7_0[0] = get_internal_image(5461);
            images_bossgunshipcannonright_2534_7_0[1] = get_internal_image(5732);
            images_bossgunshipcannonright_2534_7_0[2] = get_internal_image(5733);
            images_bossgunshipcannonright_2534_7_0[3] = get_internal_image(5735);
            images_bossgunshipcannonright_2534_7_0[4] = get_internal_image(5739);
            images_bossgunshipcannonright_2534_7_0[5] = get_internal_image(5779);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 48);
        alterables->values.set(4, 40);
    }
};
FrameObject * create_bossgunshipcannonright_2534(int x, int y)
{
    return new (Active::pool.create()) BossGunshipCannonRight_2534(x, y);
}
static Image* images_bossgunshippilot_2535_0_0[2];
static Direction direction_bossgunshippilot_2535_0_0 = {0, 0, 0, 0, 1, images_bossgunshippilot_2535_0_0, 2};
static Animation anim_bossgunshippilot_2535_0 = {&direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, NULL, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0, &direction_bossgunshippilot_2535_0_0};
static Image* images_bossgunshippilot_2535_5_0[2];
static Direction direction_bossgunshippilot_2535_5_0 = {0, 0, 0, 0, -1, images_bossgunshippilot_2535_5_0, 2};
static Animation anim_bossgunshippilot_2535_5 = {&direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, NULL, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0, &direction_bossgunshippilot_2535_5_0};
static Animation * anim_array_bossgunshippilot_2535[6] = {&anim_bossgunshippilot_2535_0, NULL, NULL, NULL, NULL, &anim_bossgunshippilot_2535_5};
static Animations anim_bossgunshippilot_2535 = {6, &anim_array_bossgunshippilot_2535[0]};
static bool anim_bossgunshippilot_2535_initialized;
class BossGunshipPilot_2535 : public Active
{
public:
    BossGunshipPilot_2535(int x, int y) : Active(x, y, BossGunshipPilot_2535_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipPilot", 17);
#endif
        this->animations = &anim_bossgunshippilot_2535;
        if (!anim_bossgunshippilot_2535_initialized) {
            anim_bossgunshippilot_2535_initialized = true;
            images_bossgunshippilot_2535_0_0[0] = get_internal_image(15501);
            images_bossgunshippilot_2535_0_0[1] = get_internal_image(15502);
            images_bossgunshippilot_2535_5_0[0] = get_internal_image(15503);
            images_bossgunshippilot_2535_5_0[1] = get_internal_image(15504);
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
FrameObject * create_bossgunshippilot_2535(int x, int y)
{
    return new (Active::pool.create()) BossGunshipPilot_2535(x, y);
}
static Image* images_bossgunshiphitbox_2536_0_0[4];
static Direction direction_bossgunshiphitbox_2536_0_0 = {0, 0, 0, 0, 1, images_bossgunshiphitbox_2536_0_0, 4};
static Image* images_bossgunshiphitbox_2536_0_8[1];
static Direction direction_bossgunshiphitbox_2536_0_8 = {8, 0, 0, 0, 1, images_bossgunshiphitbox_2536_0_8, 1};
static Animation anim_bossgunshiphitbox_2536_0 = {&direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, NULL, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, &direction_bossgunshiphitbox_2536_0_8, NULL, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0, &direction_bossgunshiphitbox_2536_0_0};
static Animation * anim_array_bossgunshiphitbox_2536[1] = {&anim_bossgunshiphitbox_2536_0};
static Animations anim_bossgunshiphitbox_2536 = {1, &anim_array_bossgunshiphitbox_2536[0]};
static bool anim_bossgunshiphitbox_2536_initialized;
class BossGunshipHitbox_2536 : public Active
{
public:
    BossGunshipHitbox_2536(int x, int y) : Active(x, y, BossGunshipHitbox_2536_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_GunshipHitbox", 18);
#endif
        this->animations = &anim_bossgunshiphitbox_2536;
        if (!anim_bossgunshiphitbox_2536_initialized) {
            anim_bossgunshiphitbox_2536_initialized = true;
            images_bossgunshiphitbox_2536_0_0[0] = get_internal_image(5955);
            images_bossgunshiphitbox_2536_0_0[1] = get_internal_image(5936);
            images_bossgunshiphitbox_2536_0_0[2] = get_internal_image(5971);
            images_bossgunshiphitbox_2536_0_0[3] = get_internal_image(6027);
            images_bossgunshiphitbox_2536_0_8[0] = get_internal_image(6028);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(0, 300);
        alterables->values.set(3, 2);
    }
};
FrameObject * create_bossgunshiphitbox_2536(int x, int y)
{
    return new (Active::pool.create()) BossGunshipHitbox_2536(x, y);
}
static Image* images_playerassistlilachair_2537_0_0[12];
static Direction direction_playerassistlilachair_2537_0_0 = {0, 14, 14, 6, -1, images_playerassistlilachair_2537_0_0, 12};
static Image* images_playerassistlilachair_2537_0_1[10];
static Direction direction_playerassistlilachair_2537_0_1 = {1, 14, 14, 0, -1, images_playerassistlilachair_2537_0_1, 10};
static Image* images_playerassistlilachair_2537_0_2[16];
static Direction direction_playerassistlilachair_2537_0_2 = {2, 14, 14, 0, -1, images_playerassistlilachair_2537_0_2, 16};
static Image* images_playerassistlilachair_2537_0_3[10];
static Direction direction_playerassistlilachair_2537_0_3 = {3, 10, 10, 0, -1, images_playerassistlilachair_2537_0_3, 10};
static Image* images_playerassistlilachair_2537_0_4[17];
static Direction direction_playerassistlilachair_2537_0_4 = {4, 10, 10, 0, -1, images_playerassistlilachair_2537_0_4, 17};
static Image* images_playerassistlilachair_2537_0_16[12];
static Direction direction_playerassistlilachair_2537_0_16 = {16, 14, 14, 6, -1, images_playerassistlilachair_2537_0_16, 12};
static Image* images_playerassistlilachair_2537_0_17[10];
static Direction direction_playerassistlilachair_2537_0_17 = {17, 14, 14, 0, -1, images_playerassistlilachair_2537_0_17, 10};
static Image* images_playerassistlilachair_2537_0_18[16];
static Direction direction_playerassistlilachair_2537_0_18 = {18, 14, 14, 0, -1, images_playerassistlilachair_2537_0_18, 16};
static Image* images_playerassistlilachair_2537_0_19[10];
static Direction direction_playerassistlilachair_2537_0_19 = {19, 10, 10, 0, -1, images_playerassistlilachair_2537_0_19, 10};
static Image* images_playerassistlilachair_2537_0_20[17];
static Direction direction_playerassistlilachair_2537_0_20 = {20, 10, 10, 0, -1, images_playerassistlilachair_2537_0_20, 17};
static Animation anim_playerassistlilachair_2537_0 = {&direction_playerassistlilachair_2537_0_0, &direction_playerassistlilachair_2537_0_1, &direction_playerassistlilachair_2537_0_2, &direction_playerassistlilachair_2537_0_3, &direction_playerassistlilachair_2537_0_4, &direction_playerassistlilachair_2537_0_4, &direction_playerassistlilachair_2537_0_4, &direction_playerassistlilachair_2537_0_4, &direction_playerassistlilachair_2537_0_4, &direction_playerassistlilachair_2537_0_4, NULL, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_16, &direction_playerassistlilachair_2537_0_17, &direction_playerassistlilachair_2537_0_18, &direction_playerassistlilachair_2537_0_19, &direction_playerassistlilachair_2537_0_20, &direction_playerassistlilachair_2537_0_20, &direction_playerassistlilachair_2537_0_20, &direction_playerassistlilachair_2537_0_20, &direction_playerassistlilachair_2537_0_20, &direction_playerassistlilachair_2537_0_20, NULL, &direction_playerassistlilachair_2537_0_0, &direction_playerassistlilachair_2537_0_0, &direction_playerassistlilachair_2537_0_0, &direction_playerassistlilachair_2537_0_0, &direction_playerassistlilachair_2537_0_0};
static Image* images_playerassistlilachair_2537_1_0[10];
static Direction direction_playerassistlilachair_2537_1_0 = {0, 18, 18, 0, -1, images_playerassistlilachair_2537_1_0, 10};
static Image* images_playerassistlilachair_2537_1_16[10];
static Direction direction_playerassistlilachair_2537_1_16 = {16, 18, 18, 0, -1, images_playerassistlilachair_2537_1_16, 10};
static Animation anim_playerassistlilachair_2537_1 = {&direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, NULL, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, &direction_playerassistlilachair_2537_1_16, NULL, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0, &direction_playerassistlilachair_2537_1_0};
static Image* images_playerassistlilachair_2537_2_0[10];
static Direction direction_playerassistlilachair_2537_2_0 = {0, 18, 18, 0, -1, images_playerassistlilachair_2537_2_0, 10};
static Image* images_playerassistlilachair_2537_2_16[10];
static Direction direction_playerassistlilachair_2537_2_16 = {16, 18, 18, 0, -1, images_playerassistlilachair_2537_2_16, 10};
static Animation anim_playerassistlilachair_2537_2 = {&direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, NULL, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, &direction_playerassistlilachair_2537_2_16, NULL, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0, &direction_playerassistlilachair_2537_2_0};
static Image* images_playerassistlilachair_2537_8_0[1];
static Direction direction_playerassistlilachair_2537_8_0 = {0, 9, 9, 0, -1, images_playerassistlilachair_2537_8_0, 1};
static Image* images_playerassistlilachair_2537_8_16[1];
static Direction direction_playerassistlilachair_2537_8_16 = {16, 9, 9, 0, -1, images_playerassistlilachair_2537_8_16, 1};
static Animation anim_playerassistlilachair_2537_8 = {&direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, NULL, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, &direction_playerassistlilachair_2537_8_16, NULL, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0, &direction_playerassistlilachair_2537_8_0};
static Image* images_playerassistlilachair_2537_10_0[5];
static Direction direction_playerassistlilachair_2537_10_0 = {0, 14, 14, 4, -1, images_playerassistlilachair_2537_10_0, 5};
static Image* images_playerassistlilachair_2537_10_16[5];
static Direction direction_playerassistlilachair_2537_10_16 = {16, 14, 14, 4, -1, images_playerassistlilachair_2537_10_16, 5};
static Animation anim_playerassistlilachair_2537_10 = {&direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, NULL, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, &direction_playerassistlilachair_2537_10_16, NULL, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0, &direction_playerassistlilachair_2537_10_0};
static Image* images_playerassistlilachair_2537_13_0[5];
static Direction direction_playerassistlilachair_2537_13_0 = {0, 50, 50, 0, -1, images_playerassistlilachair_2537_13_0, 5};
static Image* images_playerassistlilachair_2537_13_16[5];
static Direction direction_playerassistlilachair_2537_13_16 = {16, 50, 50, 0, -1, images_playerassistlilachair_2537_13_16, 5};
static Animation anim_playerassistlilachair_2537_13 = {&direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, NULL, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, &direction_playerassistlilachair_2537_13_16, NULL, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0, &direction_playerassistlilachair_2537_13_0};
static Image* images_playerassistlilachair_2537_16_0[3];
static Direction direction_playerassistlilachair_2537_16_0 = {0, 32, 32, 0, -1, images_playerassistlilachair_2537_16_0, 3};
static Image* images_playerassistlilachair_2537_16_16[3];
static Direction direction_playerassistlilachair_2537_16_16 = {16, 32, 32, 0, -1, images_playerassistlilachair_2537_16_16, 3};
static Animation anim_playerassistlilachair_2537_16 = {&direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, NULL, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, &direction_playerassistlilachair_2537_16_16, NULL, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0, &direction_playerassistlilachair_2537_16_0};
static Image* images_playerassistlilachair_2537_18_0[6];
static Direction direction_playerassistlilachair_2537_18_0 = {0, 90, 90, 0, -1, images_playerassistlilachair_2537_18_0, 6};
static Image* images_playerassistlilachair_2537_18_8[6];
static Direction direction_playerassistlilachair_2537_18_8 = {8, 16, 16, 2, -1, images_playerassistlilachair_2537_18_8, 6};
static Image* images_playerassistlilachair_2537_18_16[6];
static Direction direction_playerassistlilachair_2537_18_16 = {16, 90, 90, 0, -1, images_playerassistlilachair_2537_18_16, 6};
static Animation anim_playerassistlilachair_2537_18 = {&direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, NULL, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, &direction_playerassistlilachair_2537_18_8, NULL, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, &direction_playerassistlilachair_2537_18_16, NULL, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0, &direction_playerassistlilachair_2537_18_0};
static Image* images_playerassistlilachair_2537_22_0[5];
static Direction direction_playerassistlilachair_2537_22_0 = {0, 50, 50, 0, -1, images_playerassistlilachair_2537_22_0, 5};
static Image* images_playerassistlilachair_2537_22_16[5];
static Direction direction_playerassistlilachair_2537_22_16 = {16, 50, 50, 0, -1, images_playerassistlilachair_2537_22_16, 5};
static Animation anim_playerassistlilachair_2537_22 = {&direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, NULL, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, &direction_playerassistlilachair_2537_22_16, NULL, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0, &direction_playerassistlilachair_2537_22_0};
static Image* images_playerassistlilachair_2537_23_0[5];
static Direction direction_playerassistlilachair_2537_23_0 = {0, 50, 50, 0, -1, images_playerassistlilachair_2537_23_0, 5};
static Image* images_playerassistlilachair_2537_23_16[5];
static Direction direction_playerassistlilachair_2537_23_16 = {16, 50, 50, 0, -1, images_playerassistlilachair_2537_23_16, 5};
static Animation anim_playerassistlilachair_2537_23 = {&direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, NULL, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, &direction_playerassistlilachair_2537_23_16, NULL, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0, &direction_playerassistlilachair_2537_23_0};
static Image* images_playerassistlilachair_2537_24_0[14];
static Direction direction_playerassistlilachair_2537_24_0 = {0, 20, 20, 10, -1, images_playerassistlilachair_2537_24_0, 14};
static Image* images_playerassistlilachair_2537_24_16[14];
static Direction direction_playerassistlilachair_2537_24_16 = {16, 20, 20, 10, -1, images_playerassistlilachair_2537_24_16, 14};
static Animation anim_playerassistlilachair_2537_24 = {&direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, NULL, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, &direction_playerassistlilachair_2537_24_16, NULL, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0, &direction_playerassistlilachair_2537_24_0};
static Image* images_playerassistlilachair_2537_25_0[7];
static Direction direction_playerassistlilachair_2537_25_0 = {0, 50, 50, 0, 1, images_playerassistlilachair_2537_25_0, 7};
static Animation anim_playerassistlilachair_2537_25 = {&direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, NULL, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0, &direction_playerassistlilachair_2537_25_0};
static Image* images_playerassistlilachair_2537_26_0[7];
static Direction direction_playerassistlilachair_2537_26_0 = {0, 50, 50, 0, 1, images_playerassistlilachair_2537_26_0, 7};
static Animation anim_playerassistlilachair_2537_26 = {&direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, NULL, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0, &direction_playerassistlilachair_2537_26_0};
static Image* images_playerassistlilachair_2537_27_0[1];
static Direction direction_playerassistlilachair_2537_27_0 = {0, 9, 9, 0, -1, images_playerassistlilachair_2537_27_0, 1};
static Image* images_playerassistlilachair_2537_27_16[1];
static Direction direction_playerassistlilachair_2537_27_16 = {16, 9, 9, 0, -1, images_playerassistlilachair_2537_27_16, 1};
static Animation anim_playerassistlilachair_2537_27 = {&direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, NULL, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, &direction_playerassistlilachair_2537_27_16, NULL, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0, &direction_playerassistlilachair_2537_27_0};
static Image* images_playerassistlilachair_2537_28_0[7];
static Direction direction_playerassistlilachair_2537_28_0 = {0, 25, 25, 0, 1, images_playerassistlilachair_2537_28_0, 7};
static Animation anim_playerassistlilachair_2537_28 = {&direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, NULL, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0, &direction_playerassistlilachair_2537_28_0};
static Image* images_playerassistlilachair_2537_29_0[7];
static Direction direction_playerassistlilachair_2537_29_0 = {0, 50, 50, 0, 1, images_playerassistlilachair_2537_29_0, 7};
static Animation anim_playerassistlilachair_2537_29 = {&direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, NULL, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0, &direction_playerassistlilachair_2537_29_0};
static Image* images_playerassistlilachair_2537_30_0[5];
static Direction direction_playerassistlilachair_2537_30_0 = {0, 25, 25, 0, 1, images_playerassistlilachair_2537_30_0, 5};
static Image* images_playerassistlilachair_2537_30_16[5];
static Direction direction_playerassistlilachair_2537_30_16 = {16, 25, 25, 0, 1, images_playerassistlilachair_2537_30_16, 5};
static Animation anim_playerassistlilachair_2537_30 = {&direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, NULL, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, &direction_playerassistlilachair_2537_30_16, NULL, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0, &direction_playerassistlilachair_2537_30_0};
static Image* images_playerassistlilachair_2537_37_0[1];
static Direction direction_playerassistlilachair_2537_37_0 = {0, 18, 18, 0, 1, images_playerassistlilachair_2537_37_0, 1};
static Animation anim_playerassistlilachair_2537_37 = {&direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, NULL, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0, &direction_playerassistlilachair_2537_37_0};
static Image* images_playerassistlilachair_2537_38_0[2];
static Direction direction_playerassistlilachair_2537_38_0 = {0, 15, 15, 1, -1, images_playerassistlilachair_2537_38_0, 2};
static Image* images_playerassistlilachair_2537_38_16[2];
static Direction direction_playerassistlilachair_2537_38_16 = {16, 15, 15, 1, -1, images_playerassistlilachair_2537_38_16, 2};
static Animation anim_playerassistlilachair_2537_38 = {&direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, NULL, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, &direction_playerassistlilachair_2537_38_16, NULL, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0, &direction_playerassistlilachair_2537_38_0};
static Image* images_playerassistlilachair_2537_42_0[1];
static Direction direction_playerassistlilachair_2537_42_0 = {0, 50, 50, 0, -1, images_playerassistlilachair_2537_42_0, 1};
static Animation anim_playerassistlilachair_2537_42 = {&direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, NULL, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0, &direction_playerassistlilachair_2537_42_0};
static Animation * anim_array_playerassistlilachair_2537[43] = {&anim_playerassistlilachair_2537_0, &anim_playerassistlilachair_2537_1, &anim_playerassistlilachair_2537_2, NULL, NULL, NULL, NULL, NULL, &anim_playerassistlilachair_2537_8, NULL, &anim_playerassistlilachair_2537_10, NULL, NULL, &anim_playerassistlilachair_2537_13, NULL, NULL, &anim_playerassistlilachair_2537_16, NULL, &anim_playerassistlilachair_2537_18, NULL, NULL, NULL, &anim_playerassistlilachair_2537_22, &anim_playerassistlilachair_2537_23, &anim_playerassistlilachair_2537_24, &anim_playerassistlilachair_2537_25, &anim_playerassistlilachair_2537_26, &anim_playerassistlilachair_2537_27, &anim_playerassistlilachair_2537_28, &anim_playerassistlilachair_2537_29, &anim_playerassistlilachair_2537_30, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistlilachair_2537_37, &anim_playerassistlilachair_2537_38, NULL, NULL, NULL, &anim_playerassistlilachair_2537_42};
static Animations anim_playerassistlilachair_2537 = {43, &anim_array_playerassistlilachair_2537[0]};
static bool anim_playerassistlilachair_2537_initialized;
class PlayerAssistLilacHair_2537 : public Active
{
public:
    PlayerAssistLilacHair_2537(int x, int y) : Active(x, y, PlayerAssistLilacHair_2537_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Player_Assist_LilacHair", 23);
#endif
        set_visible(false);
        this->animations = &anim_playerassistlilachair_2537;
        if (!anim_playerassistlilachair_2537_initialized) {
            anim_playerassistlilachair_2537_initialized = true;
            images_playerassistlilachair_2537_0_0[0] = get_internal_image(10326);
            images_playerassistlilachair_2537_0_0[1] = get_internal_image(10327);
            images_playerassistlilachair_2537_0_0[2] = get_internal_image(10329);
            images_playerassistlilachair_2537_0_0[3] = get_internal_image(10330);
            images_playerassistlilachair_2537_0_0[4] = get_internal_image(10331);
            images_playerassistlilachair_2537_0_0[5] = get_internal_image(10328);
            images_playerassistlilachair_2537_0_0[6] = get_internal_image(10332);
            images_playerassistlilachair_2537_0_0[7] = get_internal_image(10334);
            images_playerassistlilachair_2537_0_0[8] = get_internal_image(10333);
            images_playerassistlilachair_2537_0_0[9] = get_internal_image(10330);
            images_playerassistlilachair_2537_0_0[10] = get_internal_image(10331);
            images_playerassistlilachair_2537_0_0[11] = get_internal_image(10335);
            images_playerassistlilachair_2537_0_1[0] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_1[1] = get_internal_image(10336);
            images_playerassistlilachair_2537_0_1[2] = get_internal_image(10305);
            images_playerassistlilachair_2537_0_1[3] = get_internal_image(10308);
            images_playerassistlilachair_2537_0_1[4] = get_internal_image(10307);
            images_playerassistlilachair_2537_0_1[5] = get_internal_image(10309);
            images_playerassistlilachair_2537_0_1[6] = get_internal_image(10306);
            images_playerassistlilachair_2537_0_1[7] = get_internal_image(10312);
            images_playerassistlilachair_2537_0_1[8] = get_internal_image(10313);
            images_playerassistlilachair_2537_0_1[9] = get_internal_image(10311);
            images_playerassistlilachair_2537_0_2[0] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_2[1] = get_internal_image(10310);
            images_playerassistlilachair_2537_0_2[2] = get_internal_image(10314);
            images_playerassistlilachair_2537_0_2[3] = get_internal_image(10304);
            images_playerassistlilachair_2537_0_2[4] = get_internal_image(10318);
            images_playerassistlilachair_2537_0_2[5] = get_internal_image(10316);
            images_playerassistlilachair_2537_0_2[6] = get_internal_image(10319);
            images_playerassistlilachair_2537_0_2[7] = get_internal_image(10320);
            images_playerassistlilachair_2537_0_2[8] = get_internal_image(10319);
            images_playerassistlilachair_2537_0_2[9] = get_internal_image(10320);
            images_playerassistlilachair_2537_0_2[10] = get_internal_image(10319);
            images_playerassistlilachair_2537_0_2[11] = get_internal_image(10315);
            images_playerassistlilachair_2537_0_2[12] = get_internal_image(10317);
            images_playerassistlilachair_2537_0_2[13] = get_internal_image(10321);
            images_playerassistlilachair_2537_0_2[14] = get_internal_image(10322);
            images_playerassistlilachair_2537_0_2[15] = get_internal_image(10324);
            images_playerassistlilachair_2537_0_3[0] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_3[1] = get_internal_image(10345);
            images_playerassistlilachair_2537_0_3[2] = get_internal_image(10338);
            images_playerassistlilachair_2537_0_3[3] = get_internal_image(10323);
            images_playerassistlilachair_2537_0_3[4] = get_internal_image(10339);
            images_playerassistlilachair_2537_0_3[5] = get_internal_image(10340);
            images_playerassistlilachair_2537_0_3[6] = get_internal_image(10341);
            images_playerassistlilachair_2537_0_3[7] = get_internal_image(10325);
            images_playerassistlilachair_2537_0_3[8] = get_internal_image(10343);
            images_playerassistlilachair_2537_0_3[9] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_4[0] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_4[1] = get_internal_image(10345);
            images_playerassistlilachair_2537_0_4[2] = get_internal_image(10338);
            images_playerassistlilachair_2537_0_4[3] = get_internal_image(10323);
            images_playerassistlilachair_2537_0_4[4] = get_internal_image(10339);
            images_playerassistlilachair_2537_0_4[5] = get_internal_image(10340);
            images_playerassistlilachair_2537_0_4[6] = get_internal_image(10341);
            images_playerassistlilachair_2537_0_4[7] = get_internal_image(10325);
            images_playerassistlilachair_2537_0_4[8] = get_internal_image(10338);
            images_playerassistlilachair_2537_0_4[9] = get_internal_image(10323);
            images_playerassistlilachair_2537_0_4[10] = get_internal_image(10339);
            images_playerassistlilachair_2537_0_4[11] = get_internal_image(10340);
            images_playerassistlilachair_2537_0_4[12] = get_internal_image(10341);
            images_playerassistlilachair_2537_0_4[13] = get_internal_image(10325);
            images_playerassistlilachair_2537_0_4[14] = get_internal_image(10338);
            images_playerassistlilachair_2537_0_4[15] = get_internal_image(10343);
            images_playerassistlilachair_2537_0_4[16] = get_internal_image(10337);
            images_playerassistlilachair_2537_0_16[0] = get_internal_image(10295);
            images_playerassistlilachair_2537_0_16[1] = get_internal_image(10296);
            images_playerassistlilachair_2537_0_16[2] = get_internal_image(10297);
            images_playerassistlilachair_2537_0_16[3] = get_internal_image(10298);
            images_playerassistlilachair_2537_0_16[4] = get_internal_image(10299);
            images_playerassistlilachair_2537_0_16[5] = get_internal_image(10300);
            images_playerassistlilachair_2537_0_16[6] = get_internal_image(10301);
            images_playerassistlilachair_2537_0_16[7] = get_internal_image(10302);
            images_playerassistlilachair_2537_0_16[8] = get_internal_image(10303);
            images_playerassistlilachair_2537_0_16[9] = get_internal_image(10298);
            images_playerassistlilachair_2537_0_16[10] = get_internal_image(10299);
            images_playerassistlilachair_2537_0_16[11] = get_internal_image(10374);
            images_playerassistlilachair_2537_0_17[0] = get_internal_image(10342);
            images_playerassistlilachair_2537_0_17[1] = get_internal_image(10365);
            images_playerassistlilachair_2537_0_17[2] = get_internal_image(10366);
            images_playerassistlilachair_2537_0_17[3] = get_internal_image(10367);
            images_playerassistlilachair_2537_0_17[4] = get_internal_image(10368);
            images_playerassistlilachair_2537_0_17[5] = get_internal_image(10369);
            images_playerassistlilachair_2537_0_17[6] = get_internal_image(10370);
            images_playerassistlilachair_2537_0_17[7] = get_internal_image(10371);
            images_playerassistlilachair_2537_0_17[8] = get_internal_image(10372);
            images_playerassistlilachair_2537_0_17[9] = get_internal_image(10373);
            images_playerassistlilachair_2537_0_18[0] = get_internal_image(10342);
            images_playerassistlilachair_2537_0_18[1] = get_internal_image(10353);
            images_playerassistlilachair_2537_0_18[2] = get_internal_image(10354);
            images_playerassistlilachair_2537_0_18[3] = get_internal_image(10355);
            images_playerassistlilachair_2537_0_18[4] = get_internal_image(10356);
            images_playerassistlilachair_2537_0_18[5] = get_internal_image(10357);
            images_playerassistlilachair_2537_0_18[6] = get_internal_image(10358);
            images_playerassistlilachair_2537_0_18[7] = get_internal_image(10359);
            images_playerassistlilachair_2537_0_18[8] = get_internal_image(10358);
            images_playerassistlilachair_2537_0_18[9] = get_internal_image(10359);
            images_playerassistlilachair_2537_0_18[10] = get_internal_image(10358);
            images_playerassistlilachair_2537_0_18[11] = get_internal_image(10360);
            images_playerassistlilachair_2537_0_18[12] = get_internal_image(10361);
            images_playerassistlilachair_2537_0_18[13] = get_internal_image(10362);
            images_playerassistlilachair_2537_0_18[14] = get_internal_image(10363);
            images_playerassistlilachair_2537_0_18[15] = get_internal_image(10364);
            images_playerassistlilachair_2537_0_19[0] = get_internal_image(10342);
            images_playerassistlilachair_2537_0_19[1] = get_internal_image(10344);
            images_playerassistlilachair_2537_0_19[2] = get_internal_image(10346);
            images_playerassistlilachair_2537_0_19[3] = get_internal_image(10347);
            images_playerassistlilachair_2537_0_19[4] = get_internal_image(10348);
            images_playerassistlilachair_2537_0_19[5] = get_internal_image(10349);
            images_playerassistlilachair_2537_0_19[6] = get_internal_image(10350);
            images_playerassistlilachair_2537_0_19[7] = get_internal_image(10351);
            images_playerassistlilachair_2537_0_19[8] = get_internal_image(10352);
            images_playerassistlilachair_2537_0_19[9] = get_internal_image(10342);
            images_playerassistlilachair_2537_0_20[0] = get_internal_image(10342);
            images_playerassistlilachair_2537_0_20[1] = get_internal_image(10344);
            images_playerassistlilachair_2537_0_20[2] = get_internal_image(10346);
            images_playerassistlilachair_2537_0_20[3] = get_internal_image(10347);
            images_playerassistlilachair_2537_0_20[4] = get_internal_image(10348);
            images_playerassistlilachair_2537_0_20[5] = get_internal_image(10349);
            images_playerassistlilachair_2537_0_20[6] = get_internal_image(10350);
            images_playerassistlilachair_2537_0_20[7] = get_internal_image(10351);
            images_playerassistlilachair_2537_0_20[8] = get_internal_image(10346);
            images_playerassistlilachair_2537_0_20[9] = get_internal_image(10347);
            images_playerassistlilachair_2537_0_20[10] = get_internal_image(10348);
            images_playerassistlilachair_2537_0_20[11] = get_internal_image(10349);
            images_playerassistlilachair_2537_0_20[12] = get_internal_image(10350);
            images_playerassistlilachair_2537_0_20[13] = get_internal_image(10351);
            images_playerassistlilachair_2537_0_20[14] = get_internal_image(10346);
            images_playerassistlilachair_2537_0_20[15] = get_internal_image(10352);
            images_playerassistlilachair_2537_0_20[16] = get_internal_image(10342);
            images_playerassistlilachair_2537_1_0[0] = get_internal_image(10385);
            images_playerassistlilachair_2537_1_0[1] = get_internal_image(10376);
            images_playerassistlilachair_2537_1_0[2] = get_internal_image(10375);
            images_playerassistlilachair_2537_1_0[3] = get_internal_image(10378);
            images_playerassistlilachair_2537_1_0[4] = get_internal_image(10377);
            images_playerassistlilachair_2537_1_0[5] = get_internal_image(10379);
            images_playerassistlilachair_2537_1_0[6] = get_internal_image(10380);
            images_playerassistlilachair_2537_1_0[7] = get_internal_image(10383);
            images_playerassistlilachair_2537_1_0[8] = get_internal_image(10382);
            images_playerassistlilachair_2537_1_0[9] = get_internal_image(10384);
            images_playerassistlilachair_2537_1_16[0] = get_internal_image(10381);
            images_playerassistlilachair_2537_1_16[1] = get_internal_image(10386);
            images_playerassistlilachair_2537_1_16[2] = get_internal_image(10387);
            images_playerassistlilachair_2537_1_16[3] = get_internal_image(10388);
            images_playerassistlilachair_2537_1_16[4] = get_internal_image(10389);
            images_playerassistlilachair_2537_1_16[5] = get_internal_image(10390);
            images_playerassistlilachair_2537_1_16[6] = get_internal_image(10391);
            images_playerassistlilachair_2537_1_16[7] = get_internal_image(10392);
            images_playerassistlilachair_2537_1_16[8] = get_internal_image(10393);
            images_playerassistlilachair_2537_1_16[9] = get_internal_image(10394);
            images_playerassistlilachair_2537_2_0[0] = get_internal_image(10395);
            images_playerassistlilachair_2537_2_0[1] = get_internal_image(10396);
            images_playerassistlilachair_2537_2_0[2] = get_internal_image(10397);
            images_playerassistlilachair_2537_2_0[3] = get_internal_image(10398);
            images_playerassistlilachair_2537_2_0[4] = get_internal_image(10399);
            images_playerassistlilachair_2537_2_0[5] = get_internal_image(10400);
            images_playerassistlilachair_2537_2_0[6] = get_internal_image(10401);
            images_playerassistlilachair_2537_2_0[7] = get_internal_image(10402);
            images_playerassistlilachair_2537_2_0[8] = get_internal_image(10403);
            images_playerassistlilachair_2537_2_0[9] = get_internal_image(10404);
            images_playerassistlilachair_2537_2_16[0] = get_internal_image(10405);
            images_playerassistlilachair_2537_2_16[1] = get_internal_image(10406);
            images_playerassistlilachair_2537_2_16[2] = get_internal_image(10407);
            images_playerassistlilachair_2537_2_16[3] = get_internal_image(10408);
            images_playerassistlilachair_2537_2_16[4] = get_internal_image(10409);
            images_playerassistlilachair_2537_2_16[5] = get_internal_image(10410);
            images_playerassistlilachair_2537_2_16[6] = get_internal_image(10411);
            images_playerassistlilachair_2537_2_16[7] = get_internal_image(10412);
            images_playerassistlilachair_2537_2_16[8] = get_internal_image(10413);
            images_playerassistlilachair_2537_2_16[9] = get_internal_image(10414);
            images_playerassistlilachair_2537_8_0[0] = get_internal_image(10416);
            images_playerassistlilachair_2537_8_16[0] = get_internal_image(10415);
            images_playerassistlilachair_2537_10_0[0] = get_internal_image(10419);
            images_playerassistlilachair_2537_10_0[1] = get_internal_image(10417);
            images_playerassistlilachair_2537_10_0[2] = get_internal_image(10418);
            images_playerassistlilachair_2537_10_0[3] = get_internal_image(10420);
            images_playerassistlilachair_2537_10_0[4] = get_internal_image(10421);
            images_playerassistlilachair_2537_10_16[0] = get_internal_image(10422);
            images_playerassistlilachair_2537_10_16[1] = get_internal_image(10423);
            images_playerassistlilachair_2537_10_16[2] = get_internal_image(10424);
            images_playerassistlilachair_2537_10_16[3] = get_internal_image(10425);
            images_playerassistlilachair_2537_10_16[4] = get_internal_image(10426);
            images_playerassistlilachair_2537_13_0[0] = get_internal_image(10460);
            images_playerassistlilachair_2537_13_0[1] = get_internal_image(10455);
            images_playerassistlilachair_2537_13_0[2] = get_internal_image(10456);
            images_playerassistlilachair_2537_13_0[3] = get_internal_image(10457);
            images_playerassistlilachair_2537_13_0[4] = get_internal_image(10459);
            images_playerassistlilachair_2537_13_16[0] = get_internal_image(10607);
            images_playerassistlilachair_2537_13_16[1] = get_internal_image(10612);
            images_playerassistlilachair_2537_13_16[2] = get_internal_image(10613);
            images_playerassistlilachair_2537_13_16[3] = get_internal_image(10614);
            images_playerassistlilachair_2537_13_16[4] = get_internal_image(10615);
            images_playerassistlilachair_2537_16_0[0] = get_internal_image(10485);
            images_playerassistlilachair_2537_16_0[1] = get_internal_image(10486);
            images_playerassistlilachair_2537_16_0[2] = get_internal_image(10487);
            images_playerassistlilachair_2537_16_16[0] = get_internal_image(10488);
            images_playerassistlilachair_2537_16_16[1] = get_internal_image(10489);
            images_playerassistlilachair_2537_16_16[2] = get_internal_image(10490);
            images_playerassistlilachair_2537_18_0[0] = get_internal_image(10494);
            images_playerassistlilachair_2537_18_0[1] = get_internal_image(10491);
            images_playerassistlilachair_2537_18_0[2] = get_internal_image(10493);
            images_playerassistlilachair_2537_18_0[3] = get_internal_image(10495);
            images_playerassistlilachair_2537_18_0[4] = get_internal_image(10492);
            images_playerassistlilachair_2537_18_0[5] = get_internal_image(10496);
            images_playerassistlilachair_2537_18_8[0] = get_internal_image(6320);
            images_playerassistlilachair_2537_18_8[1] = get_internal_image(6313);
            images_playerassistlilachair_2537_18_8[2] = get_internal_image(6318);
            images_playerassistlilachair_2537_18_8[3] = get_internal_image(6319);
            images_playerassistlilachair_2537_18_8[4] = get_internal_image(6321);
            images_playerassistlilachair_2537_18_8[5] = get_internal_image(6317);
            images_playerassistlilachair_2537_18_16[0] = get_internal_image(10494);
            images_playerassistlilachair_2537_18_16[1] = get_internal_image(10491);
            images_playerassistlilachair_2537_18_16[2] = get_internal_image(10493);
            images_playerassistlilachair_2537_18_16[3] = get_internal_image(10495);
            images_playerassistlilachair_2537_18_16[4] = get_internal_image(10492);
            images_playerassistlilachair_2537_18_16[5] = get_internal_image(10496);
            images_playerassistlilachair_2537_22_0[0] = get_internal_image(10500);
            images_playerassistlilachair_2537_22_0[1] = get_internal_image(10497);
            images_playerassistlilachair_2537_22_0[2] = get_internal_image(10499);
            images_playerassistlilachair_2537_22_0[3] = get_internal_image(10498);
            images_playerassistlilachair_2537_22_0[4] = get_internal_image(10502);
            images_playerassistlilachair_2537_22_16[0] = get_internal_image(10501);
            images_playerassistlilachair_2537_22_16[1] = get_internal_image(10503);
            images_playerassistlilachair_2537_22_16[2] = get_internal_image(10504);
            images_playerassistlilachair_2537_22_16[3] = get_internal_image(10505);
            images_playerassistlilachair_2537_22_16[4] = get_internal_image(10506);
            images_playerassistlilachair_2537_23_0[0] = get_internal_image(10500);
            images_playerassistlilachair_2537_23_0[1] = get_internal_image(10497);
            images_playerassistlilachair_2537_23_0[2] = get_internal_image(10499);
            images_playerassistlilachair_2537_23_0[3] = get_internal_image(10498);
            images_playerassistlilachair_2537_23_0[4] = get_internal_image(10502);
            images_playerassistlilachair_2537_23_16[0] = get_internal_image(10501);
            images_playerassistlilachair_2537_23_16[1] = get_internal_image(10503);
            images_playerassistlilachair_2537_23_16[2] = get_internal_image(10504);
            images_playerassistlilachair_2537_23_16[3] = get_internal_image(10505);
            images_playerassistlilachair_2537_23_16[4] = get_internal_image(10506);
            images_playerassistlilachair_2537_24_0[0] = get_internal_image(10508);
            images_playerassistlilachair_2537_24_0[1] = get_internal_image(10508);
            images_playerassistlilachair_2537_24_0[2] = get_internal_image(10508);
            images_playerassistlilachair_2537_24_0[3] = get_internal_image(10508);
            images_playerassistlilachair_2537_24_0[4] = get_internal_image(10508);
            images_playerassistlilachair_2537_24_0[5] = get_internal_image(10511);
            images_playerassistlilachair_2537_24_0[6] = get_internal_image(10509);
            images_playerassistlilachair_2537_24_0[7] = get_internal_image(10510);
            images_playerassistlilachair_2537_24_0[8] = get_internal_image(10507);
            images_playerassistlilachair_2537_24_0[9] = get_internal_image(10517);
            images_playerassistlilachair_2537_24_0[10] = get_internal_image(10514);
            images_playerassistlilachair_2537_24_0[11] = get_internal_image(10515);
            images_playerassistlilachair_2537_24_0[12] = get_internal_image(10516);
            images_playerassistlilachair_2537_24_0[13] = get_internal_image(10513);
            images_playerassistlilachair_2537_24_16[0] = get_internal_image(10512);
            images_playerassistlilachair_2537_24_16[1] = get_internal_image(10512);
            images_playerassistlilachair_2537_24_16[2] = get_internal_image(10512);
            images_playerassistlilachair_2537_24_16[3] = get_internal_image(10512);
            images_playerassistlilachair_2537_24_16[4] = get_internal_image(10512);
            images_playerassistlilachair_2537_24_16[5] = get_internal_image(10518);
            images_playerassistlilachair_2537_24_16[6] = get_internal_image(10519);
            images_playerassistlilachair_2537_24_16[7] = get_internal_image(10520);
            images_playerassistlilachair_2537_24_16[8] = get_internal_image(10521);
            images_playerassistlilachair_2537_24_16[9] = get_internal_image(10522);
            images_playerassistlilachair_2537_24_16[10] = get_internal_image(10523);
            images_playerassistlilachair_2537_24_16[11] = get_internal_image(10524);
            images_playerassistlilachair_2537_24_16[12] = get_internal_image(10525);
            images_playerassistlilachair_2537_24_16[13] = get_internal_image(10526);
            images_playerassistlilachair_2537_25_0[0] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[1] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[2] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[3] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[4] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[5] = get_internal_image(695);
            images_playerassistlilachair_2537_25_0[6] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[0] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[1] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[2] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[3] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[4] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[5] = get_internal_image(695);
            images_playerassistlilachair_2537_26_0[6] = get_internal_image(695);
            images_playerassistlilachair_2537_27_0[0] = get_internal_image(10416);
            images_playerassistlilachair_2537_27_16[0] = get_internal_image(10415);
            images_playerassistlilachair_2537_28_0[0] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[1] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[2] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[3] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[4] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[5] = get_internal_image(695);
            images_playerassistlilachair_2537_28_0[6] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[0] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[1] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[2] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[3] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[4] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[5] = get_internal_image(695);
            images_playerassistlilachair_2537_29_0[6] = get_internal_image(695);
            images_playerassistlilachair_2537_30_0[0] = get_internal_image(10527);
            images_playerassistlilachair_2537_30_0[1] = get_internal_image(10528);
            images_playerassistlilachair_2537_30_0[2] = get_internal_image(10529);
            images_playerassistlilachair_2537_30_0[3] = get_internal_image(10530);
            images_playerassistlilachair_2537_30_0[4] = get_internal_image(10531);
            images_playerassistlilachair_2537_30_16[0] = get_internal_image(10532);
            images_playerassistlilachair_2537_30_16[1] = get_internal_image(10533);
            images_playerassistlilachair_2537_30_16[2] = get_internal_image(10534);
            images_playerassistlilachair_2537_30_16[3] = get_internal_image(10535);
            images_playerassistlilachair_2537_30_16[4] = get_internal_image(10536);
            images_playerassistlilachair_2537_37_0[0] = get_internal_image(695);
            images_playerassistlilachair_2537_38_0[0] = get_internal_image(10416);
            images_playerassistlilachair_2537_38_0[1] = get_internal_image(5020);
            images_playerassistlilachair_2537_38_16[0] = get_internal_image(10415);
            images_playerassistlilachair_2537_38_16[1] = get_internal_image(5192);
            images_playerassistlilachair_2537_42_0[0] = get_internal_image(695);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_688_player_assist_lilachair.value;
        if (!global_data_688_player_assist_lilachair.init) {
            global_data_688_player_assist_lilachair.init = true;
        }
    }
};
FrameObject * create_playerassistlilachair_2537(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistLilacHair_2537(x, y);
}
static Image* images_brevonmechbackwing_2538_0_0[1];
static Direction direction_brevonmechbackwing_2538_0_0 = {0, 50, 50, 0, 1, images_brevonmechbackwing_2538_0_0, 1};
static Image* images_brevonmechbackwing_2538_0_16[1];
static Direction direction_brevonmechbackwing_2538_0_16 = {16, 50, 50, 0, 1, images_brevonmechbackwing_2538_0_16, 1};
static Animation anim_brevonmechbackwing_2538_0 = {&direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, NULL, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, &direction_brevonmechbackwing_2538_0_16, NULL, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0, &direction_brevonmechbackwing_2538_0_0};
static Animation * anim_array_brevonmechbackwing_2538[1] = {&anim_brevonmechbackwing_2538_0};
static Animations anim_brevonmechbackwing_2538 = {1, &anim_array_brevonmechbackwing_2538[0]};
static bool anim_brevonmechbackwing_2538_initialized;
class BrevonMechBackWing_2538 : public Active
{
public:
    BrevonMechBackWing_2538(int x, int y) : Active(x, y, BrevonMechBackWing_2538_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_BackWing", 19);
#endif
        this->animations = &anim_brevonmechbackwing_2538;
        if (!anim_brevonmechbackwing_2538_initialized) {
            anim_brevonmechbackwing_2538_initialized = true;
            images_brevonmechbackwing_2538_0_0[0] = get_internal_image(14591);
            images_brevonmechbackwing_2538_0_16[0] = get_internal_image(14593);
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
FrameObject * create_brevonmechbackwing_2538(int x, int y)
{
    return new (Active::pool.create()) BrevonMechBackWing_2538(x, y);
}
static Image* images_brevonmechfrontleg_2539_0_0[1];
static Direction direction_brevonmechfrontleg_2539_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontleg_2539_0_0, 1};
static Image* images_brevonmechfrontleg_2539_0_16[1];
static Direction direction_brevonmechfrontleg_2539_0_16 = {16, 50, 50, 0, 1, images_brevonmechfrontleg_2539_0_16, 1};
static Animation anim_brevonmechfrontleg_2539_0 = {&direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, NULL, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, &direction_brevonmechfrontleg_2539_0_16, NULL, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0, &direction_brevonmechfrontleg_2539_0_0};
static Animation * anim_array_brevonmechfrontleg_2539[1] = {&anim_brevonmechfrontleg_2539_0};
static Animations anim_brevonmechfrontleg_2539 = {1, &anim_array_brevonmechfrontleg_2539[0]};
static bool anim_brevonmechfrontleg_2539_initialized;
class BrevonMechFrontLeg_2539 : public Active
{
public:
    BrevonMechFrontLeg_2539(int x, int y) : Active(x, y, BrevonMechFrontLeg_2539_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontLeg", 19);
#endif
        this->animations = &anim_brevonmechfrontleg_2539;
        if (!anim_brevonmechfrontleg_2539_initialized) {
            anim_brevonmechfrontleg_2539_initialized = true;
            images_brevonmechfrontleg_2539_0_0[0] = get_internal_image(14560);
            images_brevonmechfrontleg_2539_0_16[0] = get_internal_image(14588);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 300);
    }
};
FrameObject * create_brevonmechfrontleg_2539(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontLeg_2539(x, y);
}
static Image* images_brevonmechabdomen_2540_0_0[1];
static Direction direction_brevonmechabdomen_2540_0_0 = {0, 0, 0, 0, 1, images_brevonmechabdomen_2540_0_0, 1};
static Image* images_brevonmechabdomen_2540_0_16[1];
static Direction direction_brevonmechabdomen_2540_0_16 = {16, 50, 50, 0, 1, images_brevonmechabdomen_2540_0_16, 1};
static Animation anim_brevonmechabdomen_2540_0 = {&direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, NULL, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, &direction_brevonmechabdomen_2540_0_16, NULL, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0, &direction_brevonmechabdomen_2540_0_0};
static Animation * anim_array_brevonmechabdomen_2540[1] = {&anim_brevonmechabdomen_2540_0};
static Animations anim_brevonmechabdomen_2540 = {1, &anim_array_brevonmechabdomen_2540[0]};
static bool anim_brevonmechabdomen_2540_initialized;
class BrevonMechAbdomen_2540 : public Active
{
public:
    BrevonMechAbdomen_2540(int x, int y) : Active(x, y, BrevonMechAbdomen_2540_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_Abdomen", 18);
#endif
        this->animations = &anim_brevonmechabdomen_2540;
        if (!anim_brevonmechabdomen_2540_initialized) {
            anim_brevonmechabdomen_2540_initialized = true;
            images_brevonmechabdomen_2540_0_0[0] = get_internal_image(14595);
            images_brevonmechabdomen_2540_0_16[0] = get_internal_image(14596);
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
FrameObject * create_brevonmechabdomen_2540(int x, int y)
{
    return new (Active::pool.create()) BrevonMechAbdomen_2540(x, y);
}
static Image* images_brevonmechfrontleg2_2541_0_0[1];
static Direction direction_brevonmechfrontleg2_2541_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontleg2_2541_0_0, 1};
static Image* images_brevonmechfrontleg2_2541_0_16[1];
static Direction direction_brevonmechfrontleg2_2541_0_16 = {16, 0, 0, 0, 1, images_brevonmechfrontleg2_2541_0_16, 1};
static Animation anim_brevonmechfrontleg2_2541_0 = {&direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, NULL, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, &direction_brevonmechfrontleg2_2541_0_16, NULL, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0, &direction_brevonmechfrontleg2_2541_0_0};
static Animation * anim_array_brevonmechfrontleg2_2541[1] = {&anim_brevonmechfrontleg2_2541_0};
static Animations anim_brevonmechfrontleg2_2541 = {1, &anim_array_brevonmechfrontleg2_2541[0]};
static bool anim_brevonmechfrontleg2_2541_initialized;
class BrevonMechFrontLeg2_2541 : public Active
{
public:
    BrevonMechFrontLeg2_2541(int x, int y) : Active(x, y, BrevonMechFrontLeg2_2541_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontLeg2", 20);
#endif
        this->animations = &anim_brevonmechfrontleg2_2541;
        if (!anim_brevonmechfrontleg2_2541_initialized) {
            anim_brevonmechfrontleg2_2541_initialized = true;
            images_brevonmechfrontleg2_2541_0_0[0] = get_internal_image(14554);
            images_brevonmechfrontleg2_2541_0_16[0] = get_internal_image(14561);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 74);
    }
};
FrameObject * create_brevonmechfrontleg2_2541(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontLeg2_2541(x, y);
}
static Image* images_brevonmechfrontknee_2542_0_0[1];
static Direction direction_brevonmechfrontknee_2542_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontknee_2542_0_0, 1};
static Image* images_brevonmechfrontknee_2542_0_16[1];
static Direction direction_brevonmechfrontknee_2542_0_16 = {16, 50, 50, 0, 1, images_brevonmechfrontknee_2542_0_16, 1};
static Animation anim_brevonmechfrontknee_2542_0 = {&direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, NULL, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, &direction_brevonmechfrontknee_2542_0_16, NULL, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0, &direction_brevonmechfrontknee_2542_0_0};
static Animation * anim_array_brevonmechfrontknee_2542[1] = {&anim_brevonmechfrontknee_2542_0};
static Animations anim_brevonmechfrontknee_2542 = {1, &anim_array_brevonmechfrontknee_2542[0]};
static bool anim_brevonmechfrontknee_2542_initialized;
class BrevonMechFrontKnee_2542 : public Active
{
public:
    BrevonMechFrontKnee_2542(int x, int y) : Active(x, y, BrevonMechFrontKnee_2542_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontKnee", 20);
#endif
        this->animations = &anim_brevonmechfrontknee_2542;
        if (!anim_brevonmechfrontknee_2542_initialized) {
            anim_brevonmechfrontknee_2542_initialized = true;
            images_brevonmechfrontknee_2542_0_0[0] = get_internal_image(14556);
            images_brevonmechfrontknee_2542_0_16[0] = get_internal_image(14559);
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
FrameObject * create_brevonmechfrontknee_2542(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontKnee_2542(x, y);
}
static Image* images_brevonmechtorso_2543_0_0[1];
static Direction direction_brevonmechtorso_2543_0_0 = {0, 0, 0, 0, 1, images_brevonmechtorso_2543_0_0, 1};
static Image* images_brevonmechtorso_2543_0_16[1];
static Direction direction_brevonmechtorso_2543_0_16 = {16, 50, 50, 0, 1, images_brevonmechtorso_2543_0_16, 1};
static Animation anim_brevonmechtorso_2543_0 = {&direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, NULL, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, &direction_brevonmechtorso_2543_0_16, NULL, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0, &direction_brevonmechtorso_2543_0_0};
static Animation * anim_array_brevonmechtorso_2543[1] = {&anim_brevonmechtorso_2543_0};
static Animations anim_brevonmechtorso_2543 = {1, &anim_array_brevonmechtorso_2543[0]};
static bool anim_brevonmechtorso_2543_initialized;
class BrevonMechTorso_2543 : public Active
{
public:
    BrevonMechTorso_2543(int x, int y) : Active(x, y, BrevonMechTorso_2543_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_Torso", 16);
#endif
        this->animations = &anim_brevonmechtorso_2543;
        if (!anim_brevonmechtorso_2543_initialized) {
            anim_brevonmechtorso_2543_initialized = true;
            images_brevonmechtorso_2543_0_0[0] = get_internal_image(14620);
            images_brevonmechtorso_2543_0_16[0] = get_internal_image(14621);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(9, 384);
        alterables->values.set(10, 3328);
        alterables->values.set(11, 560);
        alterables->values.set(12, 3152);
    }
};
FrameObject * create_brevonmechtorso_2543(int x, int y)
{
    return new (Active::pool.create()) BrevonMechTorso_2543(x, y);
}
static Image* images_brevonmechhead_2544_0_0[4];
static Direction direction_brevonmechhead_2544_0_0 = {0, 0, 0, 0, 1, images_brevonmechhead_2544_0_0, 4};
static Image* images_brevonmechhead_2544_0_1[4];
static Direction direction_brevonmechhead_2544_0_1 = {1, 0, 0, 0, 1, images_brevonmechhead_2544_0_1, 4};
static Image* images_brevonmechhead_2544_0_8[2];
static Direction direction_brevonmechhead_2544_0_8 = {8, 50, 50, 0, 1, images_brevonmechhead_2544_0_8, 2};
static Image* images_brevonmechhead_2544_0_16[4];
static Direction direction_brevonmechhead_2544_0_16 = {16, 0, 0, 0, 1, images_brevonmechhead_2544_0_16, 4};
static Image* images_brevonmechhead_2544_0_17[4];
static Direction direction_brevonmechhead_2544_0_17 = {17, 0, 0, 0, 1, images_brevonmechhead_2544_0_17, 4};
static Animation anim_brevonmechhead_2544_0 = {&direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_1, &direction_brevonmechhead_2544_0_1, &direction_brevonmechhead_2544_0_1, &direction_brevonmechhead_2544_0_1, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, &direction_brevonmechhead_2544_0_8, NULL, &direction_brevonmechhead_2544_0_16, &direction_brevonmechhead_2544_0_16, &direction_brevonmechhead_2544_0_16, &direction_brevonmechhead_2544_0_16, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_17, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0, &direction_brevonmechhead_2544_0_0};
static Image* images_brevonmechhead_2544_10_0[1];
static Direction direction_brevonmechhead_2544_10_0 = {0, 0, 0, 0, -1, images_brevonmechhead_2544_10_0, 1};
static Image* images_brevonmechhead_2544_10_16[1];
static Direction direction_brevonmechhead_2544_10_16 = {16, 0, 0, 0, -1, images_brevonmechhead_2544_10_16, 1};
static Animation anim_brevonmechhead_2544_10 = {&direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, NULL, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, &direction_brevonmechhead_2544_10_16, NULL, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0, &direction_brevonmechhead_2544_10_0};
static Animation * anim_array_brevonmechhead_2544[11] = {&anim_brevonmechhead_2544_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_brevonmechhead_2544_10};
static Animations anim_brevonmechhead_2544 = {11, &anim_array_brevonmechhead_2544[0]};
static bool anim_brevonmechhead_2544_initialized;
class BrevonMechHead_2544 : public Active
{
public:
    BrevonMechHead_2544(int x, int y) : Active(x, y, BrevonMechHead_2544_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_Head", 15);
#endif
        this->animations = &anim_brevonmechhead_2544;
        if (!anim_brevonmechhead_2544_initialized) {
            anim_brevonmechhead_2544_initialized = true;
            images_brevonmechhead_2544_0_0[0] = get_internal_image(14602);
            images_brevonmechhead_2544_0_0[1] = get_internal_image(14605);
            images_brevonmechhead_2544_0_0[2] = get_internal_image(14601);
            images_brevonmechhead_2544_0_0[3] = get_internal_image(14603);
            images_brevonmechhead_2544_0_1[0] = get_internal_image(14606);
            images_brevonmechhead_2544_0_1[1] = get_internal_image(14607);
            images_brevonmechhead_2544_0_1[2] = get_internal_image(14608);
            images_brevonmechhead_2544_0_1[3] = get_internal_image(14609);
            images_brevonmechhead_2544_0_8[0] = get_internal_image(13618);
            images_brevonmechhead_2544_0_8[1] = get_internal_image(13620);
            images_brevonmechhead_2544_0_16[0] = get_internal_image(14604);
            images_brevonmechhead_2544_0_16[1] = get_internal_image(14610);
            images_brevonmechhead_2544_0_16[2] = get_internal_image(14611);
            images_brevonmechhead_2544_0_16[3] = get_internal_image(14612);
            images_brevonmechhead_2544_0_17[0] = get_internal_image(14613);
            images_brevonmechhead_2544_0_17[1] = get_internal_image(14614);
            images_brevonmechhead_2544_0_17[2] = get_internal_image(14615);
            images_brevonmechhead_2544_0_17[3] = get_internal_image(14616);
            images_brevonmechhead_2544_10_0[0] = get_internal_image(14617);
            images_brevonmechhead_2544_10_16[0] = get_internal_image(14619);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_brevonmechhead_2544(int x, int y)
{
    return new (Active::pool.create()) BrevonMechHead_2544(x, y);
}
static Image* images_brevonmechfrontfoot_2545_0_0[1];
static Direction direction_brevonmechfrontfoot_2545_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontfoot_2545_0_0, 1};
static Image* images_brevonmechfrontfoot_2545_0_16[1];
static Direction direction_brevonmechfrontfoot_2545_0_16 = {16, 0, 0, 0, 1, images_brevonmechfrontfoot_2545_0_16, 1};
static Animation anim_brevonmechfrontfoot_2545_0 = {&direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, NULL, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, &direction_brevonmechfrontfoot_2545_0_16, NULL, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0, &direction_brevonmechfrontfoot_2545_0_0};
static Animation * anim_array_brevonmechfrontfoot_2545[1] = {&anim_brevonmechfrontfoot_2545_0};
static Animations anim_brevonmechfrontfoot_2545 = {1, &anim_array_brevonmechfrontfoot_2545[0]};
static bool anim_brevonmechfrontfoot_2545_initialized;
class BrevonMechFrontFoot_2545 : public Active
{
public:
    BrevonMechFrontFoot_2545(int x, int y) : Active(x, y, BrevonMechFrontFoot_2545_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontFoot", 20);
#endif
        this->animations = &anim_brevonmechfrontfoot_2545;
        if (!anim_brevonmechfrontfoot_2545_initialized) {
            anim_brevonmechfrontfoot_2545_initialized = true;
            images_brevonmechfrontfoot_2545_0_0[0] = get_internal_image(1264);
            images_brevonmechfrontfoot_2545_0_16[0] = get_internal_image(2721);
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
FrameObject * create_brevonmechfrontfoot_2545(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontFoot_2545(x, y);
}
static Image* images_brevonmechfrontwing_2546_0_0[1];
static Direction direction_brevonmechfrontwing_2546_0_0 = {0, 50, 50, 0, 1, images_brevonmechfrontwing_2546_0_0, 1};
static Image* images_brevonmechfrontwing_2546_0_16[1];
static Direction direction_brevonmechfrontwing_2546_0_16 = {16, 50, 50, 0, 1, images_brevonmechfrontwing_2546_0_16, 1};
static Animation anim_brevonmechfrontwing_2546_0 = {&direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, NULL, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, &direction_brevonmechfrontwing_2546_0_16, NULL, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0, &direction_brevonmechfrontwing_2546_0_0};
static Animation * anim_array_brevonmechfrontwing_2546[1] = {&anim_brevonmechfrontwing_2546_0};
static Animations anim_brevonmechfrontwing_2546 = {1, &anim_array_brevonmechfrontwing_2546[0]};
static bool anim_brevonmechfrontwing_2546_initialized;
class BrevonMechFrontWing_2546 : public Active
{
public:
    BrevonMechFrontWing_2546(int x, int y) : Active(x, y, BrevonMechFrontWing_2546_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontWing", 20);
#endif
        this->animations = &anim_brevonmechfrontwing_2546;
        if (!anim_brevonmechfrontwing_2546_initialized) {
            anim_brevonmechfrontwing_2546_initialized = true;
            images_brevonmechfrontwing_2546_0_0[0] = get_internal_image(14591);
            images_brevonmechfrontwing_2546_0_16[0] = get_internal_image(14593);
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
FrameObject * create_brevonmechfrontwing_2546(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontWing_2546(x, y);
}
static Image* images_brevonmechfrontshoulder_2547_0_0[1];
static Direction direction_brevonmechfrontshoulder_2547_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontshoulder_2547_0_0, 1};
static Image* images_brevonmechfrontshoulder_2547_0_16[1];
static Direction direction_brevonmechfrontshoulder_2547_0_16 = {16, 50, 50, 0, 1, images_brevonmechfrontshoulder_2547_0_16, 1};
static Animation anim_brevonmechfrontshoulder_2547_0 = {&direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, NULL, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, &direction_brevonmechfrontshoulder_2547_0_16, NULL, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0, &direction_brevonmechfrontshoulder_2547_0_0};
static Animation * anim_array_brevonmechfrontshoulder_2547[1] = {&anim_brevonmechfrontshoulder_2547_0};
static Animations anim_brevonmechfrontshoulder_2547 = {1, &anim_array_brevonmechfrontshoulder_2547[0]};
static bool anim_brevonmechfrontshoulder_2547_initialized;
class BrevonMechFrontShoulder_2547 : public Active
{
public:
    BrevonMechFrontShoulder_2547(int x, int y) : Active(x, y, BrevonMechFrontShoulder_2547_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontShoulder", 24);
#endif
        this->animations = &anim_brevonmechfrontshoulder_2547;
        if (!anim_brevonmechfrontshoulder_2547_initialized) {
            anim_brevonmechfrontshoulder_2547_initialized = true;
            images_brevonmechfrontshoulder_2547_0_0[0] = get_internal_image(14599);
            images_brevonmechfrontshoulder_2547_0_16[0] = get_internal_image(14600);
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
FrameObject * create_brevonmechfrontshoulder_2547(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontShoulder_2547(x, y);
}
static Image* images_brevonmechfrontarm_2548_0_0[1];
static Direction direction_brevonmechfrontarm_2548_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontarm_2548_0_0, 1};
static Image* images_brevonmechfrontarm_2548_0_16[1];
static Direction direction_brevonmechfrontarm_2548_0_16 = {16, 50, 50, 0, 1, images_brevonmechfrontarm_2548_0_16, 1};
static Animation anim_brevonmechfrontarm_2548_0 = {&direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, NULL, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, &direction_brevonmechfrontarm_2548_0_16, NULL, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0, &direction_brevonmechfrontarm_2548_0_0};
static Animation * anim_array_brevonmechfrontarm_2548[1] = {&anim_brevonmechfrontarm_2548_0};
static Animations anim_brevonmechfrontarm_2548 = {1, &anim_array_brevonmechfrontarm_2548[0]};
static bool anim_brevonmechfrontarm_2548_initialized;
class BrevonMechFrontArm_2548 : public Active
{
public:
    BrevonMechFrontArm_2548(int x, int y) : Active(x, y, BrevonMechFrontArm_2548_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontArm", 19);
#endif
        this->animations = &anim_brevonmechfrontarm_2548;
        if (!anim_brevonmechfrontarm_2548_initialized) {
            anim_brevonmechfrontarm_2548_initialized = true;
            images_brevonmechfrontarm_2548_0_0[0] = get_internal_image(14590);
            images_brevonmechfrontarm_2548_0_16[0] = get_internal_image(14592);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 323);
    }
};
FrameObject * create_brevonmechfrontarm_2548(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontArm_2548(x, y);
}
static Image* images_brevonmechfrontclaw_2549_0_0[1];
static Direction direction_brevonmechfrontclaw_2549_0_0 = {0, 0, 0, 0, 1, images_brevonmechfrontclaw_2549_0_0, 1};
static Image* images_brevonmechfrontclaw_2549_0_16[1];
static Direction direction_brevonmechfrontclaw_2549_0_16 = {16, 0, 0, 0, 1, images_brevonmechfrontclaw_2549_0_16, 1};
static Animation anim_brevonmechfrontclaw_2549_0 = {&direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, NULL, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, &direction_brevonmechfrontclaw_2549_0_16, NULL, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0, &direction_brevonmechfrontclaw_2549_0_0};
static Animation * anim_array_brevonmechfrontclaw_2549[1] = {&anim_brevonmechfrontclaw_2549_0};
static Animations anim_brevonmechfrontclaw_2549 = {1, &anim_array_brevonmechfrontclaw_2549[0]};
static bool anim_brevonmechfrontclaw_2549_initialized;
class BrevonMechFrontClaw_2549 : public Active
{
public:
    BrevonMechFrontClaw_2549(int x, int y) : Active(x, y, BrevonMechFrontClaw_2549_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_FrontClaw", 20);
#endif
        this->animations = &anim_brevonmechfrontclaw_2549;
        if (!anim_brevonmechfrontclaw_2549_initialized) {
            anim_brevonmechfrontclaw_2549_initialized = true;
            images_brevonmechfrontclaw_2549_0_0[0] = get_internal_image(5917);
            images_brevonmechfrontclaw_2549_0_16[0] = get_internal_image(6103);
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
FrameObject * create_brevonmechfrontclaw_2549(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFrontClaw_2549(x, y);
}
static Image* images_brevonmechaxle_2550_0_0[1];
static Direction direction_brevonmechaxle_2550_0_0 = {0, 0, 0, 0, 1, images_brevonmechaxle_2550_0_0, 1};
static Image* images_brevonmechaxle_2550_0_16[1];
static Direction direction_brevonmechaxle_2550_0_16 = {16, 0, 0, 0, 1, images_brevonmechaxle_2550_0_16, 1};
static Animation anim_brevonmechaxle_2550_0 = {&direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, NULL, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, &direction_brevonmechaxle_2550_0_16, NULL, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0, &direction_brevonmechaxle_2550_0_0};
static Animation * anim_array_brevonmechaxle_2550[1] = {&anim_brevonmechaxle_2550_0};
static Animations anim_brevonmechaxle_2550 = {1, &anim_array_brevonmechaxle_2550[0]};
static bool anim_brevonmechaxle_2550_initialized;
class BrevonMechAxle_2550 : public Active
{
public:
    BrevonMechAxle_2550(int x, int y) : Active(x, y, BrevonMechAxle_2550_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("BrevonMech_Axle", 15);
#endif
        set_visible(false);
        this->animations = &anim_brevonmechaxle_2550;
        if (!anim_brevonmechaxle_2550_initialized) {
            anim_brevonmechaxle_2550_initialized = true;
            images_brevonmechaxle_2550_0_0[0] = get_internal_image(14545);
            images_brevonmechaxle_2550_0_16[0] = get_internal_image(14555);
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
FrameObject * create_brevonmechaxle_2550(int x, int y)
{
    return new (Active::pool.create()) BrevonMechAxle_2550(x, y);
}
static Image* images_brevonmechanimations_2551_0_0[1];
static Direction direction_brevonmechanimations_2551_0_0 = {0, 50, 50, 0, 1, images_brevonmechanimations_2551_0_0, 1};
static Animation anim_brevonmechanimations_2551_0 = {&direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, NULL, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0, &direction_brevonmechanimations_2551_0_0};
static Animation * anim_array_brevonmechanimations_2551[1] = {&anim_brevonmechanimations_2551_0};
static Animations anim_brevonmechanimations_2551 = {1, &anim_array_brevonmechanimations_2551[0]};
static bool anim_brevonmechanimations_2551_initialized;
class BrevonMechAnimations_2551 : public Active
{
public:
    BrevonMechAnimations_2551(int x, int y) : Active(x, y, BrevonMechAnimations_2551_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Animations", 21);
#endif
        this->animations = &anim_brevonmechanimations_2551;
        if (!anim_brevonmechanimations_2551_initialized) {
            anim_brevonmechanimations_2551_initialized = true;
            images_brevonmechanimations_2551_0_0[0] = get_internal_image(371);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 1);
    }
};
FrameObject * create_brevonmechanimations_2551(int x, int y)
{
    return new (Active::pool.create()) BrevonMechAnimations_2551(x, y);
}
static Image* images_bossserphitbox_2552_0_0[1];
static Direction direction_bossserphitbox_2552_0_0 = {0, 50, 50, 0, 1, images_bossserphitbox_2552_0_0, 1};
static Animation anim_bossserphitbox_2552_0 = {&direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, NULL, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0, &direction_bossserphitbox_2552_0_0};
static Animation * anim_array_bossserphitbox_2552[1] = {&anim_bossserphitbox_2552_0};
static Animations anim_bossserphitbox_2552 = {1, &anim_array_bossserphitbox_2552[0]};
static bool anim_bossserphitbox_2552_initialized;
class BossSerpHitbox_2552 : public Active
{
public:
    BossSerpHitbox_2552(int x, int y) : Active(x, y, BossSerpHitbox_2552_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_SerpHitbox", 15);
#endif
        set_visible(false);
        this->animations = &anim_bossserphitbox_2552;
        if (!anim_bossserphitbox_2552_initialized) {
            anim_bossserphitbox_2552_initialized = true;
            images_bossserphitbox_2552_0_0[0] = get_internal_image(7764);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
        alterables->values.set(3, 6);
    }
};
FrameObject * create_bossserphitbox_2552(int x, int y)
{
    return new (Active::pool.create()) BossSerpHitbox_2552(x, y);
}
static Image* images_playerassistcaroltail_2553_0_0[12];
static Direction direction_playerassistcaroltail_2553_0_0 = {0, 18, 18, 0, -1, images_playerassistcaroltail_2553_0_0, 12};
static Image* images_playerassistcaroltail_2553_0_16[12];
static Direction direction_playerassistcaroltail_2553_0_16 = {16, 18, 18, 0, -1, images_playerassistcaroltail_2553_0_16, 12};
static Animation anim_playerassistcaroltail_2553_0 = {&direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, NULL, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, &direction_playerassistcaroltail_2553_0_16, NULL, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0, &direction_playerassistcaroltail_2553_0_0};
static Image* images_playerassistcaroltail_2553_1_0[7];
static Direction direction_playerassistcaroltail_2553_1_0 = {0, 20, 20, 0, -1, images_playerassistcaroltail_2553_1_0, 7};
static Image* images_playerassistcaroltail_2553_1_16[7];
static Direction direction_playerassistcaroltail_2553_1_16 = {16, 20, 20, 0, -1, images_playerassistcaroltail_2553_1_16, 7};
static Animation anim_playerassistcaroltail_2553_1 = {&direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, NULL, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, &direction_playerassistcaroltail_2553_1_16, NULL, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0, &direction_playerassistcaroltail_2553_1_0};
static Image* images_playerassistcaroltail_2553_2_0[7];
static Direction direction_playerassistcaroltail_2553_2_0 = {0, 20, 20, 0, -1, images_playerassistcaroltail_2553_2_0, 7};
static Image* images_playerassistcaroltail_2553_2_16[7];
static Direction direction_playerassistcaroltail_2553_2_16 = {16, 20, 20, 0, -1, images_playerassistcaroltail_2553_2_16, 7};
static Animation anim_playerassistcaroltail_2553_2 = {&direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, NULL, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, &direction_playerassistcaroltail_2553_2_16, NULL, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0, &direction_playerassistcaroltail_2553_2_0};
static Image* images_playerassistcaroltail_2553_8_0[9];
static Direction direction_playerassistcaroltail_2553_8_0 = {0, 50, 50, 8, 3, images_playerassistcaroltail_2553_8_0, 9};
static Image* images_playerassistcaroltail_2553_8_16[9];
static Direction direction_playerassistcaroltail_2553_8_16 = {16, 50, 50, 8, 3, images_playerassistcaroltail_2553_8_16, 9};
static Animation anim_playerassistcaroltail_2553_8 = {&direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, NULL, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, &direction_playerassistcaroltail_2553_8_16, NULL, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0, &direction_playerassistcaroltail_2553_8_0};
static Image* images_playerassistcaroltail_2553_10_0[12];
static Direction direction_playerassistcaroltail_2553_10_0 = {0, 20, 20, 0, -1, images_playerassistcaroltail_2553_10_0, 12};
static Image* images_playerassistcaroltail_2553_10_16[12];
static Direction direction_playerassistcaroltail_2553_10_16 = {16, 20, 20, 0, -1, images_playerassistcaroltail_2553_10_16, 12};
static Animation anim_playerassistcaroltail_2553_10 = {&direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, NULL, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, &direction_playerassistcaroltail_2553_10_16, NULL, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0, &direction_playerassistcaroltail_2553_10_0};
static Image* images_playerassistcaroltail_2553_13_0[12];
static Direction direction_playerassistcaroltail_2553_13_0 = {0, 30, 30, 0, -1, images_playerassistcaroltail_2553_13_0, 12};
static Image* images_playerassistcaroltail_2553_13_16[12];
static Direction direction_playerassistcaroltail_2553_13_16 = {16, 30, 30, 0, -1, images_playerassistcaroltail_2553_13_16, 12};
static Animation anim_playerassistcaroltail_2553_13 = {&direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, NULL, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, &direction_playerassistcaroltail_2553_13_16, NULL, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0, &direction_playerassistcaroltail_2553_13_0};
static Image* images_playerassistcaroltail_2553_16_0[7];
static Direction direction_playerassistcaroltail_2553_16_0 = {0, 50, 50, 0, -1, images_playerassistcaroltail_2553_16_0, 7};
static Image* images_playerassistcaroltail_2553_16_16[7];
static Direction direction_playerassistcaroltail_2553_16_16 = {16, 50, 50, 0, -1, images_playerassistcaroltail_2553_16_16, 7};
static Animation anim_playerassistcaroltail_2553_16 = {&direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, NULL, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, &direction_playerassistcaroltail_2553_16_16, NULL, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0, &direction_playerassistcaroltail_2553_16_0};
static Image* images_playerassistcaroltail_2553_21_0[12];
static Direction direction_playerassistcaroltail_2553_21_0 = {0, 50, 50, 0, -1, images_playerassistcaroltail_2553_21_0, 12};
static Image* images_playerassistcaroltail_2553_21_16[12];
static Direction direction_playerassistcaroltail_2553_21_16 = {16, 50, 50, 0, -1, images_playerassistcaroltail_2553_21_16, 12};
static Animation anim_playerassistcaroltail_2553_21 = {&direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, NULL, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, &direction_playerassistcaroltail_2553_21_16, NULL, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0, &direction_playerassistcaroltail_2553_21_0};
static Image* images_playerassistcaroltail_2553_24_0[9];
static Direction direction_playerassistcaroltail_2553_24_0 = {0, 20, 20, 8, -1, images_playerassistcaroltail_2553_24_0, 9};
static Image* images_playerassistcaroltail_2553_24_16[9];
static Direction direction_playerassistcaroltail_2553_24_16 = {16, 20, 20, 8, -1, images_playerassistcaroltail_2553_24_16, 9};
static Animation anim_playerassistcaroltail_2553_24 = {&direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, NULL, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, &direction_playerassistcaroltail_2553_24_16, NULL, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0, &direction_playerassistcaroltail_2553_24_0};
static Image* images_playerassistcaroltail_2553_25_0[1];
static Direction direction_playerassistcaroltail_2553_25_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_25_0, 1};
static Animation anim_playerassistcaroltail_2553_25 = {&direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, NULL, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0, &direction_playerassistcaroltail_2553_25_0};
static Image* images_playerassistcaroltail_2553_26_0[1];
static Direction direction_playerassistcaroltail_2553_26_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_26_0, 1};
static Animation anim_playerassistcaroltail_2553_26 = {&direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, NULL, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0, &direction_playerassistcaroltail_2553_26_0};
static Image* images_playerassistcaroltail_2553_27_0[4];
static Direction direction_playerassistcaroltail_2553_27_0 = {0, 50, 50, 3, -1, images_playerassistcaroltail_2553_27_0, 4};
static Image* images_playerassistcaroltail_2553_27_16[4];
static Direction direction_playerassistcaroltail_2553_27_16 = {16, 50, 50, 3, -1, images_playerassistcaroltail_2553_27_16, 4};
static Animation anim_playerassistcaroltail_2553_27 = {&direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, NULL, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, &direction_playerassistcaroltail_2553_27_16, NULL, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0, &direction_playerassistcaroltail_2553_27_0};
static Image* images_playerassistcaroltail_2553_28_0[12];
static Direction direction_playerassistcaroltail_2553_28_0 = {0, 30, 30, 0, -1, images_playerassistcaroltail_2553_28_0, 12};
static Image* images_playerassistcaroltail_2553_28_16[12];
static Direction direction_playerassistcaroltail_2553_28_16 = {16, 30, 30, 0, -1, images_playerassistcaroltail_2553_28_16, 12};
static Animation anim_playerassistcaroltail_2553_28 = {&direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, NULL, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, &direction_playerassistcaroltail_2553_28_16, NULL, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0, &direction_playerassistcaroltail_2553_28_0};
static Image* images_playerassistcaroltail_2553_29_0[1];
static Direction direction_playerassistcaroltail_2553_29_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_29_0, 1};
static Animation anim_playerassistcaroltail_2553_29 = {&direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, NULL, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0, &direction_playerassistcaroltail_2553_29_0};
static Image* images_playerassistcaroltail_2553_37_0[1];
static Direction direction_playerassistcaroltail_2553_37_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_37_0, 1};
static Image* images_playerassistcaroltail_2553_37_1[12];
static Direction direction_playerassistcaroltail_2553_37_1 = {1, 18, 18, 0, -1, images_playerassistcaroltail_2553_37_1, 12};
static Image* images_playerassistcaroltail_2553_37_16[1];
static Direction direction_playerassistcaroltail_2553_37_16 = {16, 70, 70, 0, -1, images_playerassistcaroltail_2553_37_16, 1};
static Image* images_playerassistcaroltail_2553_37_17[12];
static Direction direction_playerassistcaroltail_2553_37_17 = {17, 18, 18, 0, -1, images_playerassistcaroltail_2553_37_17, 12};
static Animation anim_playerassistcaroltail_2553_37 = {&direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_1, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_16, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_17, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0, &direction_playerassistcaroltail_2553_37_0};
static Image* images_playerassistcaroltail_2553_38_0[1];
static Direction direction_playerassistcaroltail_2553_38_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_38_0, 1};
static Animation anim_playerassistcaroltail_2553_38 = {&direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, NULL, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0, &direction_playerassistcaroltail_2553_38_0};
static Image* images_playerassistcaroltail_2553_41_0[1];
static Direction direction_playerassistcaroltail_2553_41_0 = {0, 70, 70, 0, -1, images_playerassistcaroltail_2553_41_0, 1};
static Animation anim_playerassistcaroltail_2553_41 = {&direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, NULL, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0, &direction_playerassistcaroltail_2553_41_0};
static Animation * anim_array_playerassistcaroltail_2553[42] = {&anim_playerassistcaroltail_2553_0, &anim_playerassistcaroltail_2553_1, &anim_playerassistcaroltail_2553_2, NULL, NULL, NULL, NULL, NULL, &anim_playerassistcaroltail_2553_8, NULL, &anim_playerassistcaroltail_2553_10, NULL, NULL, &anim_playerassistcaroltail_2553_13, NULL, NULL, &anim_playerassistcaroltail_2553_16, NULL, NULL, NULL, NULL, &anim_playerassistcaroltail_2553_21, NULL, NULL, &anim_playerassistcaroltail_2553_24, &anim_playerassistcaroltail_2553_25, &anim_playerassistcaroltail_2553_26, &anim_playerassistcaroltail_2553_27, &anim_playerassistcaroltail_2553_28, &anim_playerassistcaroltail_2553_29, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistcaroltail_2553_37, &anim_playerassistcaroltail_2553_38, NULL, NULL, &anim_playerassistcaroltail_2553_41};
static Animations anim_playerassistcaroltail_2553 = {42, &anim_array_playerassistcaroltail_2553[0]};
static bool anim_playerassistcaroltail_2553_initialized;
class PlayerAssistCarolTail_2553 : public Active
{
public:
    PlayerAssistCarolTail_2553(int x, int y) : Active(x, y, PlayerAssistCarolTail_2553_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Player_Assist_CarolTail", 23);
#endif
        this->animations = &anim_playerassistcaroltail_2553;
        if (!anim_playerassistcaroltail_2553_initialized) {
            anim_playerassistcaroltail_2553_initialized = true;
            images_playerassistcaroltail_2553_0_0[0] = get_internal_image(1704);
            images_playerassistcaroltail_2553_0_0[1] = get_internal_image(1705);
            images_playerassistcaroltail_2553_0_0[2] = get_internal_image(1708);
            images_playerassistcaroltail_2553_0_0[3] = get_internal_image(1712);
            images_playerassistcaroltail_2553_0_0[4] = get_internal_image(1713);
            images_playerassistcaroltail_2553_0_0[5] = get_internal_image(1715);
            images_playerassistcaroltail_2553_0_0[6] = get_internal_image(1716);
            images_playerassistcaroltail_2553_0_0[7] = get_internal_image(1883);
            images_playerassistcaroltail_2553_0_0[8] = get_internal_image(2520);
            images_playerassistcaroltail_2553_0_0[9] = get_internal_image(2531);
            images_playerassistcaroltail_2553_0_0[10] = get_internal_image(2532);
            images_playerassistcaroltail_2553_0_0[11] = get_internal_image(2534);
            images_playerassistcaroltail_2553_0_16[0] = get_internal_image(2552);
            images_playerassistcaroltail_2553_0_16[1] = get_internal_image(2809);
            images_playerassistcaroltail_2553_0_16[2] = get_internal_image(3602);
            images_playerassistcaroltail_2553_0_16[3] = get_internal_image(3604);
            images_playerassistcaroltail_2553_0_16[4] = get_internal_image(3641);
            images_playerassistcaroltail_2553_0_16[5] = get_internal_image(3645);
            images_playerassistcaroltail_2553_0_16[6] = get_internal_image(3646);
            images_playerassistcaroltail_2553_0_16[7] = get_internal_image(3649);
            images_playerassistcaroltail_2553_0_16[8] = get_internal_image(3666);
            images_playerassistcaroltail_2553_0_16[9] = get_internal_image(3870);
            images_playerassistcaroltail_2553_0_16[10] = get_internal_image(3874);
            images_playerassistcaroltail_2553_0_16[11] = get_internal_image(3927);
            images_playerassistcaroltail_2553_1_0[0] = get_internal_image(9658);
            images_playerassistcaroltail_2553_1_0[1] = get_internal_image(9659);
            images_playerassistcaroltail_2553_1_0[2] = get_internal_image(9656);
            images_playerassistcaroltail_2553_1_0[3] = get_internal_image(9660);
            images_playerassistcaroltail_2553_1_0[4] = get_internal_image(9661);
            images_playerassistcaroltail_2553_1_0[5] = get_internal_image(9663);
            images_playerassistcaroltail_2553_1_0[6] = get_internal_image(9662);
            images_playerassistcaroltail_2553_1_16[0] = get_internal_image(9664);
            images_playerassistcaroltail_2553_1_16[1] = get_internal_image(9665);
            images_playerassistcaroltail_2553_1_16[2] = get_internal_image(9666);
            images_playerassistcaroltail_2553_1_16[3] = get_internal_image(9667);
            images_playerassistcaroltail_2553_1_16[4] = get_internal_image(9668);
            images_playerassistcaroltail_2553_1_16[5] = get_internal_image(9669);
            images_playerassistcaroltail_2553_1_16[6] = get_internal_image(9670);
            images_playerassistcaroltail_2553_2_0[0] = get_internal_image(9658);
            images_playerassistcaroltail_2553_2_0[1] = get_internal_image(9659);
            images_playerassistcaroltail_2553_2_0[2] = get_internal_image(9656);
            images_playerassistcaroltail_2553_2_0[3] = get_internal_image(9660);
            images_playerassistcaroltail_2553_2_0[4] = get_internal_image(9661);
            images_playerassistcaroltail_2553_2_0[5] = get_internal_image(9663);
            images_playerassistcaroltail_2553_2_0[6] = get_internal_image(9662);
            images_playerassistcaroltail_2553_2_16[0] = get_internal_image(9664);
            images_playerassistcaroltail_2553_2_16[1] = get_internal_image(9665);
            images_playerassistcaroltail_2553_2_16[2] = get_internal_image(9666);
            images_playerassistcaroltail_2553_2_16[3] = get_internal_image(9667);
            images_playerassistcaroltail_2553_2_16[4] = get_internal_image(9668);
            images_playerassistcaroltail_2553_2_16[5] = get_internal_image(9669);
            images_playerassistcaroltail_2553_2_16[6] = get_internal_image(9670);
            images_playerassistcaroltail_2553_8_0[0] = get_internal_image(3498);
            images_playerassistcaroltail_2553_8_0[1] = get_internal_image(9657);
            images_playerassistcaroltail_2553_8_0[2] = get_internal_image(3497);
            images_playerassistcaroltail_2553_8_0[3] = get_internal_image(9657);
            images_playerassistcaroltail_2553_8_0[4] = get_internal_image(3498);
            images_playerassistcaroltail_2553_8_0[5] = get_internal_image(9657);
            images_playerassistcaroltail_2553_8_0[6] = get_internal_image(3497);
            images_playerassistcaroltail_2553_8_0[7] = get_internal_image(9657);
            images_playerassistcaroltail_2553_8_0[8] = get_internal_image(9657);
            images_playerassistcaroltail_2553_8_16[0] = get_internal_image(3515);
            images_playerassistcaroltail_2553_8_16[1] = get_internal_image(4674);
            images_playerassistcaroltail_2553_8_16[2] = get_internal_image(3599);
            images_playerassistcaroltail_2553_8_16[3] = get_internal_image(4674);
            images_playerassistcaroltail_2553_8_16[4] = get_internal_image(3515);
            images_playerassistcaroltail_2553_8_16[5] = get_internal_image(4674);
            images_playerassistcaroltail_2553_8_16[6] = get_internal_image(3599);
            images_playerassistcaroltail_2553_8_16[7] = get_internal_image(4674);
            images_playerassistcaroltail_2553_8_16[8] = get_internal_image(4674);
            images_playerassistcaroltail_2553_10_0[0] = get_internal_image(3931);
            images_playerassistcaroltail_2553_10_0[1] = get_internal_image(3932);
            images_playerassistcaroltail_2553_10_0[2] = get_internal_image(3934);
            images_playerassistcaroltail_2553_10_0[3] = get_internal_image(4024);
            images_playerassistcaroltail_2553_10_0[4] = get_internal_image(4364);
            images_playerassistcaroltail_2553_10_0[5] = get_internal_image(4435);
            images_playerassistcaroltail_2553_10_0[6] = get_internal_image(4519);
            images_playerassistcaroltail_2553_10_0[7] = get_internal_image(4559);
            images_playerassistcaroltail_2553_10_0[8] = get_internal_image(4566);
            images_playerassistcaroltail_2553_10_0[9] = get_internal_image(8963);
            images_playerassistcaroltail_2553_10_0[10] = get_internal_image(9465);
            images_playerassistcaroltail_2553_10_0[11] = get_internal_image(9473);
            images_playerassistcaroltail_2553_10_16[0] = get_internal_image(9477);
            images_playerassistcaroltail_2553_10_16[1] = get_internal_image(9478);
            images_playerassistcaroltail_2553_10_16[2] = get_internal_image(9479);
            images_playerassistcaroltail_2553_10_16[3] = get_internal_image(9480);
            images_playerassistcaroltail_2553_10_16[4] = get_internal_image(9482);
            images_playerassistcaroltail_2553_10_16[5] = get_internal_image(9484);
            images_playerassistcaroltail_2553_10_16[6] = get_internal_image(9486);
            images_playerassistcaroltail_2553_10_16[7] = get_internal_image(9487);
            images_playerassistcaroltail_2553_10_16[8] = get_internal_image(9488);
            images_playerassistcaroltail_2553_10_16[9] = get_internal_image(9489);
            images_playerassistcaroltail_2553_10_16[10] = get_internal_image(9490);
            images_playerassistcaroltail_2553_10_16[11] = get_internal_image(9491);
            images_playerassistcaroltail_2553_13_0[0] = get_internal_image(9508);
            images_playerassistcaroltail_2553_13_0[1] = get_internal_image(9509);
            images_playerassistcaroltail_2553_13_0[2] = get_internal_image(9510);
            images_playerassistcaroltail_2553_13_0[3] = get_internal_image(9511);
            images_playerassistcaroltail_2553_13_0[4] = get_internal_image(9512);
            images_playerassistcaroltail_2553_13_0[5] = get_internal_image(9513);
            images_playerassistcaroltail_2553_13_0[6] = get_internal_image(9514);
            images_playerassistcaroltail_2553_13_0[7] = get_internal_image(9515);
            images_playerassistcaroltail_2553_13_0[8] = get_internal_image(9516);
            images_playerassistcaroltail_2553_13_0[9] = get_internal_image(9517);
            images_playerassistcaroltail_2553_13_0[10] = get_internal_image(9518);
            images_playerassistcaroltail_2553_13_0[11] = get_internal_image(9519);
            images_playerassistcaroltail_2553_13_16[0] = get_internal_image(9520);
            images_playerassistcaroltail_2553_13_16[1] = get_internal_image(9521);
            images_playerassistcaroltail_2553_13_16[2] = get_internal_image(9522);
            images_playerassistcaroltail_2553_13_16[3] = get_internal_image(9523);
            images_playerassistcaroltail_2553_13_16[4] = get_internal_image(9524);
            images_playerassistcaroltail_2553_13_16[5] = get_internal_image(9525);
            images_playerassistcaroltail_2553_13_16[6] = get_internal_image(9526);
            images_playerassistcaroltail_2553_13_16[7] = get_internal_image(9527);
            images_playerassistcaroltail_2553_13_16[8] = get_internal_image(9528);
            images_playerassistcaroltail_2553_13_16[9] = get_internal_image(9529);
            images_playerassistcaroltail_2553_13_16[10] = get_internal_image(9530);
            images_playerassistcaroltail_2553_13_16[11] = get_internal_image(9531);
            images_playerassistcaroltail_2553_16_0[0] = get_internal_image(9586);
            images_playerassistcaroltail_2553_16_0[1] = get_internal_image(9588);
            images_playerassistcaroltail_2553_16_0[2] = get_internal_image(9589);
            images_playerassistcaroltail_2553_16_0[3] = get_internal_image(9590);
            images_playerassistcaroltail_2553_16_0[4] = get_internal_image(9591);
            images_playerassistcaroltail_2553_16_0[5] = get_internal_image(9592);
            images_playerassistcaroltail_2553_16_0[6] = get_internal_image(9593);
            images_playerassistcaroltail_2553_16_16[0] = get_internal_image(9587);
            images_playerassistcaroltail_2553_16_16[1] = get_internal_image(9580);
            images_playerassistcaroltail_2553_16_16[2] = get_internal_image(9582);
            images_playerassistcaroltail_2553_16_16[3] = get_internal_image(9584);
            images_playerassistcaroltail_2553_16_16[4] = get_internal_image(9583);
            images_playerassistcaroltail_2553_16_16[5] = get_internal_image(9581);
            images_playerassistcaroltail_2553_16_16[6] = get_internal_image(9585);
            images_playerassistcaroltail_2553_21_0[0] = get_internal_image(9595);
            images_playerassistcaroltail_2553_21_0[1] = get_internal_image(9596);
            images_playerassistcaroltail_2553_21_0[2] = get_internal_image(9597);
            images_playerassistcaroltail_2553_21_0[3] = get_internal_image(9598);
            images_playerassistcaroltail_2553_21_0[4] = get_internal_image(9599);
            images_playerassistcaroltail_2553_21_0[5] = get_internal_image(9600);
            images_playerassistcaroltail_2553_21_0[6] = get_internal_image(9601);
            images_playerassistcaroltail_2553_21_0[7] = get_internal_image(9602);
            images_playerassistcaroltail_2553_21_0[8] = get_internal_image(9603);
            images_playerassistcaroltail_2553_21_0[9] = get_internal_image(9604);
            images_playerassistcaroltail_2553_21_0[10] = get_internal_image(9605);
            images_playerassistcaroltail_2553_21_0[11] = get_internal_image(9606);
            images_playerassistcaroltail_2553_21_16[0] = get_internal_image(9607);
            images_playerassistcaroltail_2553_21_16[1] = get_internal_image(9608);
            images_playerassistcaroltail_2553_21_16[2] = get_internal_image(9609);
            images_playerassistcaroltail_2553_21_16[3] = get_internal_image(9610);
            images_playerassistcaroltail_2553_21_16[4] = get_internal_image(9611);
            images_playerassistcaroltail_2553_21_16[5] = get_internal_image(9612);
            images_playerassistcaroltail_2553_21_16[6] = get_internal_image(9613);
            images_playerassistcaroltail_2553_21_16[7] = get_internal_image(9614);
            images_playerassistcaroltail_2553_21_16[8] = get_internal_image(9615);
            images_playerassistcaroltail_2553_21_16[9] = get_internal_image(9616);
            images_playerassistcaroltail_2553_21_16[10] = get_internal_image(9617);
            images_playerassistcaroltail_2553_21_16[11] = get_internal_image(9618);
            images_playerassistcaroltail_2553_24_0[0] = get_internal_image(9619);
            images_playerassistcaroltail_2553_24_0[1] = get_internal_image(9619);
            images_playerassistcaroltail_2553_24_0[2] = get_internal_image(9619);
            images_playerassistcaroltail_2553_24_0[3] = get_internal_image(9619);
            images_playerassistcaroltail_2553_24_0[4] = get_internal_image(9621);
            images_playerassistcaroltail_2553_24_0[5] = get_internal_image(9624);
            images_playerassistcaroltail_2553_24_0[6] = get_internal_image(9620);
            images_playerassistcaroltail_2553_24_0[7] = get_internal_image(9623);
            images_playerassistcaroltail_2553_24_0[8] = get_internal_image(9625);
            images_playerassistcaroltail_2553_24_16[0] = get_internal_image(9622);
            images_playerassistcaroltail_2553_24_16[1] = get_internal_image(9622);
            images_playerassistcaroltail_2553_24_16[2] = get_internal_image(9622);
            images_playerassistcaroltail_2553_24_16[3] = get_internal_image(9622);
            images_playerassistcaroltail_2553_24_16[4] = get_internal_image(9626);
            images_playerassistcaroltail_2553_24_16[5] = get_internal_image(9627);
            images_playerassistcaroltail_2553_24_16[6] = get_internal_image(9628);
            images_playerassistcaroltail_2553_24_16[7] = get_internal_image(9629);
            images_playerassistcaroltail_2553_24_16[8] = get_internal_image(9630);
            images_playerassistcaroltail_2553_25_0[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_26_0[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_27_0[0] = get_internal_image(9657);
            images_playerassistcaroltail_2553_27_0[1] = get_internal_image(9657);
            images_playerassistcaroltail_2553_27_0[2] = get_internal_image(9657);
            images_playerassistcaroltail_2553_27_0[3] = get_internal_image(9657);
            images_playerassistcaroltail_2553_27_16[0] = get_internal_image(9631);
            images_playerassistcaroltail_2553_27_16[1] = get_internal_image(9631);
            images_playerassistcaroltail_2553_27_16[2] = get_internal_image(9631);
            images_playerassistcaroltail_2553_27_16[3] = get_internal_image(9631);
            images_playerassistcaroltail_2553_28_0[0] = get_internal_image(10198);
            images_playerassistcaroltail_2553_28_0[1] = get_internal_image(10200);
            images_playerassistcaroltail_2553_28_0[2] = get_internal_image(10185);
            images_playerassistcaroltail_2553_28_0[3] = get_internal_image(10189);
            images_playerassistcaroltail_2553_28_0[4] = get_internal_image(10190);
            images_playerassistcaroltail_2553_28_0[5] = get_internal_image(10191);
            images_playerassistcaroltail_2553_28_0[6] = get_internal_image(10192);
            images_playerassistcaroltail_2553_28_0[7] = get_internal_image(10193);
            images_playerassistcaroltail_2553_28_0[8] = get_internal_image(10194);
            images_playerassistcaroltail_2553_28_0[9] = get_internal_image(10195);
            images_playerassistcaroltail_2553_28_0[10] = get_internal_image(10196);
            images_playerassistcaroltail_2553_28_0[11] = get_internal_image(10197);
            images_playerassistcaroltail_2553_28_16[0] = get_internal_image(10199);
            images_playerassistcaroltail_2553_28_16[1] = get_internal_image(10201);
            images_playerassistcaroltail_2553_28_16[2] = get_internal_image(10202);
            images_playerassistcaroltail_2553_28_16[3] = get_internal_image(10203);
            images_playerassistcaroltail_2553_28_16[4] = get_internal_image(10204);
            images_playerassistcaroltail_2553_28_16[5] = get_internal_image(10205);
            images_playerassistcaroltail_2553_28_16[6] = get_internal_image(10206);
            images_playerassistcaroltail_2553_28_16[7] = get_internal_image(10207);
            images_playerassistcaroltail_2553_28_16[8] = get_internal_image(10208);
            images_playerassistcaroltail_2553_28_16[9] = get_internal_image(10209);
            images_playerassistcaroltail_2553_28_16[10] = get_internal_image(10210);
            images_playerassistcaroltail_2553_28_16[11] = get_internal_image(10211);
            images_playerassistcaroltail_2553_29_0[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_37_0[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_37_1[0] = get_internal_image(1704);
            images_playerassistcaroltail_2553_37_1[1] = get_internal_image(1705);
            images_playerassistcaroltail_2553_37_1[2] = get_internal_image(1708);
            images_playerassistcaroltail_2553_37_1[3] = get_internal_image(1712);
            images_playerassistcaroltail_2553_37_1[4] = get_internal_image(1713);
            images_playerassistcaroltail_2553_37_1[5] = get_internal_image(1715);
            images_playerassistcaroltail_2553_37_1[6] = get_internal_image(1716);
            images_playerassistcaroltail_2553_37_1[7] = get_internal_image(1883);
            images_playerassistcaroltail_2553_37_1[8] = get_internal_image(2520);
            images_playerassistcaroltail_2553_37_1[9] = get_internal_image(2531);
            images_playerassistcaroltail_2553_37_1[10] = get_internal_image(2532);
            images_playerassistcaroltail_2553_37_1[11] = get_internal_image(2534);
            images_playerassistcaroltail_2553_37_16[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_37_17[0] = get_internal_image(2552);
            images_playerassistcaroltail_2553_37_17[1] = get_internal_image(2809);
            images_playerassistcaroltail_2553_37_17[2] = get_internal_image(3602);
            images_playerassistcaroltail_2553_37_17[3] = get_internal_image(3604);
            images_playerassistcaroltail_2553_37_17[4] = get_internal_image(3641);
            images_playerassistcaroltail_2553_37_17[5] = get_internal_image(3645);
            images_playerassistcaroltail_2553_37_17[6] = get_internal_image(3646);
            images_playerassistcaroltail_2553_37_17[7] = get_internal_image(3649);
            images_playerassistcaroltail_2553_37_17[8] = get_internal_image(3666);
            images_playerassistcaroltail_2553_37_17[9] = get_internal_image(3870);
            images_playerassistcaroltail_2553_37_17[10] = get_internal_image(3874);
            images_playerassistcaroltail_2553_37_17[11] = get_internal_image(3927);
            images_playerassistcaroltail_2553_38_0[0] = get_internal_image(3775);
            images_playerassistcaroltail_2553_41_0[0] = get_internal_image(3775);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_689_player_assist_caroltail.value;
        if (!global_data_689_player_assist_caroltail.init) {
            alterables->values.set(4, 3);
            global_data_689_player_assist_caroltail.init = true;
        }
    }
};
FrameObject * create_playerassistcaroltail_2553(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistCarolTail_2553(x, y);
}
static Image* images_playerassistmillatail_2554_0_0[8];
static Direction direction_playerassistmillatail_2554_0_0 = {0, 10, 10, 0, -1, images_playerassistmillatail_2554_0_0, 8};
static Image* images_playerassistmillatail_2554_0_16[8];
static Direction direction_playerassistmillatail_2554_0_16 = {16, 10, 10, 0, -1, images_playerassistmillatail_2554_0_16, 8};
static Animation anim_playerassistmillatail_2554_0 = {&direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, NULL, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, &direction_playerassistmillatail_2554_0_16, NULL, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0, &direction_playerassistmillatail_2554_0_0};
static Image* images_playerassistmillatail_2554_1_0[1];
static Direction direction_playerassistmillatail_2554_1_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_1_0, 1};
static Animation anim_playerassistmillatail_2554_1 = {&direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, NULL, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0, &direction_playerassistmillatail_2554_1_0};
static Image* images_playerassistmillatail_2554_2_0[1];
static Direction direction_playerassistmillatail_2554_2_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_2_0, 1};
static Animation anim_playerassistmillatail_2554_2 = {&direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, NULL, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0, &direction_playerassistmillatail_2554_2_0};
static Image* images_playerassistmillatail_2554_8_0[1];
static Direction direction_playerassistmillatail_2554_8_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_8_0, 1};
static Animation anim_playerassistmillatail_2554_8 = {&direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, NULL, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0, &direction_playerassistmillatail_2554_8_0};
static Image* images_playerassistmillatail_2554_9_0[1];
static Direction direction_playerassistmillatail_2554_9_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_9_0, 1};
static Animation anim_playerassistmillatail_2554_9 = {&direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, NULL, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0, &direction_playerassistmillatail_2554_9_0};
static Image* images_playerassistmillatail_2554_10_0[1];
static Direction direction_playerassistmillatail_2554_10_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_10_0, 1};
static Animation anim_playerassistmillatail_2554_10 = {&direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, NULL, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0, &direction_playerassistmillatail_2554_10_0};
static Image* images_playerassistmillatail_2554_11_0[8];
static Direction direction_playerassistmillatail_2554_11_0 = {0, 20, 20, 0, -1, images_playerassistmillatail_2554_11_0, 8};
static Image* images_playerassistmillatail_2554_11_16[8];
static Direction direction_playerassistmillatail_2554_11_16 = {16, 20, 20, 0, -1, images_playerassistmillatail_2554_11_16, 8};
static Animation anim_playerassistmillatail_2554_11 = {&direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, NULL, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, &direction_playerassistmillatail_2554_11_16, NULL, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0, &direction_playerassistmillatail_2554_11_0};
static Image* images_playerassistmillatail_2554_16_0[1];
static Direction direction_playerassistmillatail_2554_16_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_16_0, 1};
static Animation anim_playerassistmillatail_2554_16 = {&direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, NULL, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0, &direction_playerassistmillatail_2554_16_0};
static Image* images_playerassistmillatail_2554_18_0[1];
static Direction direction_playerassistmillatail_2554_18_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_18_0, 1};
static Animation anim_playerassistmillatail_2554_18 = {&direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, NULL, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0, &direction_playerassistmillatail_2554_18_0};
static Image* images_playerassistmillatail_2554_23_0[1];
static Direction direction_playerassistmillatail_2554_23_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_23_0, 1};
static Animation anim_playerassistmillatail_2554_23 = {&direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, NULL, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0, &direction_playerassistmillatail_2554_23_0};
static Image* images_playerassistmillatail_2554_24_0[1];
static Direction direction_playerassistmillatail_2554_24_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_24_0, 1};
static Animation anim_playerassistmillatail_2554_24 = {&direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, NULL, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0, &direction_playerassistmillatail_2554_24_0};
static Image* images_playerassistmillatail_2554_25_0[8];
static Direction direction_playerassistmillatail_2554_25_0 = {0, 20, 20, 0, -1, images_playerassistmillatail_2554_25_0, 8};
static Image* images_playerassistmillatail_2554_25_16[8];
static Direction direction_playerassistmillatail_2554_25_16 = {16, 20, 20, 0, -1, images_playerassistmillatail_2554_25_16, 8};
static Animation anim_playerassistmillatail_2554_25 = {&direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, NULL, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, &direction_playerassistmillatail_2554_25_16, NULL, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0, &direction_playerassistmillatail_2554_25_0};
static Image* images_playerassistmillatail_2554_26_0[1];
static Direction direction_playerassistmillatail_2554_26_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_26_0, 1};
static Animation anim_playerassistmillatail_2554_26 = {&direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, NULL, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0, &direction_playerassistmillatail_2554_26_0};
static Image* images_playerassistmillatail_2554_27_0[1];
static Direction direction_playerassistmillatail_2554_27_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_27_0, 1};
static Animation anim_playerassistmillatail_2554_27 = {&direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, NULL, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0, &direction_playerassistmillatail_2554_27_0};
static Image* images_playerassistmillatail_2554_37_0[15];
static Direction direction_playerassistmillatail_2554_37_0 = {0, 20, 20, 7, -1, images_playerassistmillatail_2554_37_0, 15};
static Image* images_playerassistmillatail_2554_37_16[15];
static Direction direction_playerassistmillatail_2554_37_16 = {16, 20, 20, 7, -1, images_playerassistmillatail_2554_37_16, 15};
static Animation anim_playerassistmillatail_2554_37 = {&direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, NULL, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, &direction_playerassistmillatail_2554_37_16, NULL, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0, &direction_playerassistmillatail_2554_37_0};
static Image* images_playerassistmillatail_2554_38_0[1];
static Direction direction_playerassistmillatail_2554_38_0 = {0, 50, 50, 0, -1, images_playerassistmillatail_2554_38_0, 1};
static Animation anim_playerassistmillatail_2554_38 = {&direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, NULL, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0, &direction_playerassistmillatail_2554_38_0};
static Image* images_playerassistmillatail_2554_41_0[1];
static Direction direction_playerassistmillatail_2554_41_0 = {0, 20, 20, 0, -1, images_playerassistmillatail_2554_41_0, 1};
static Animation anim_playerassistmillatail_2554_41 = {&direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, NULL, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0, &direction_playerassistmillatail_2554_41_0};
static Animation * anim_array_playerassistmillatail_2554[42] = {&anim_playerassistmillatail_2554_0, &anim_playerassistmillatail_2554_1, &anim_playerassistmillatail_2554_2, NULL, NULL, NULL, NULL, NULL, &anim_playerassistmillatail_2554_8, &anim_playerassistmillatail_2554_9, &anim_playerassistmillatail_2554_10, &anim_playerassistmillatail_2554_11, NULL, NULL, NULL, NULL, &anim_playerassistmillatail_2554_16, NULL, &anim_playerassistmillatail_2554_18, NULL, NULL, NULL, NULL, &anim_playerassistmillatail_2554_23, &anim_playerassistmillatail_2554_24, &anim_playerassistmillatail_2554_25, &anim_playerassistmillatail_2554_26, &anim_playerassistmillatail_2554_27, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistmillatail_2554_37, &anim_playerassistmillatail_2554_38, NULL, NULL, &anim_playerassistmillatail_2554_41};
static Animations anim_playerassistmillatail_2554 = {42, &anim_array_playerassistmillatail_2554[0]};
static bool anim_playerassistmillatail_2554_initialized;
class PlayerAssistMillaTail_2554 : public Active
{
public:
    PlayerAssistMillaTail_2554(int x, int y) : Active(x, y, PlayerAssistMillaTail_2554_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Player_Assist_MillaTail", 23);
#endif
        this->animations = &anim_playerassistmillatail_2554;
        if (!anim_playerassistmillatail_2554_initialized) {
            anim_playerassistmillatail_2554_initialized = true;
            images_playerassistmillatail_2554_0_0[0] = get_internal_image(7452);
            images_playerassistmillatail_2554_0_0[1] = get_internal_image(7456);
            images_playerassistmillatail_2554_0_0[2] = get_internal_image(7458);
            images_playerassistmillatail_2554_0_0[3] = get_internal_image(7457);
            images_playerassistmillatail_2554_0_0[4] = get_internal_image(7459);
            images_playerassistmillatail_2554_0_0[5] = get_internal_image(7460);
            images_playerassistmillatail_2554_0_0[6] = get_internal_image(7462);
            images_playerassistmillatail_2554_0_0[7] = get_internal_image(7463);
            images_playerassistmillatail_2554_0_16[0] = get_internal_image(7461);
            images_playerassistmillatail_2554_0_16[1] = get_internal_image(7464);
            images_playerassistmillatail_2554_0_16[2] = get_internal_image(7465);
            images_playerassistmillatail_2554_0_16[3] = get_internal_image(7466);
            images_playerassistmillatail_2554_0_16[4] = get_internal_image(7467);
            images_playerassistmillatail_2554_0_16[5] = get_internal_image(7468);
            images_playerassistmillatail_2554_0_16[6] = get_internal_image(7469);
            images_playerassistmillatail_2554_0_16[7] = get_internal_image(7470);
            images_playerassistmillatail_2554_1_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_2_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_8_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_9_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_10_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_11_0[0] = get_internal_image(7506);
            images_playerassistmillatail_2554_11_0[1] = get_internal_image(7507);
            images_playerassistmillatail_2554_11_0[2] = get_internal_image(7508);
            images_playerassistmillatail_2554_11_0[3] = get_internal_image(7509);
            images_playerassistmillatail_2554_11_0[4] = get_internal_image(7510);
            images_playerassistmillatail_2554_11_0[5] = get_internal_image(7511);
            images_playerassistmillatail_2554_11_0[6] = get_internal_image(7512);
            images_playerassistmillatail_2554_11_0[7] = get_internal_image(7513);
            images_playerassistmillatail_2554_11_16[0] = get_internal_image(7505);
            images_playerassistmillatail_2554_11_16[1] = get_internal_image(7498);
            images_playerassistmillatail_2554_11_16[2] = get_internal_image(7499);
            images_playerassistmillatail_2554_11_16[3] = get_internal_image(7500);
            images_playerassistmillatail_2554_11_16[4] = get_internal_image(7501);
            images_playerassistmillatail_2554_11_16[5] = get_internal_image(7502);
            images_playerassistmillatail_2554_11_16[6] = get_internal_image(7503);
            images_playerassistmillatail_2554_11_16[7] = get_internal_image(7504);
            images_playerassistmillatail_2554_16_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_18_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_23_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_24_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_25_0[0] = get_internal_image(5586);
            images_playerassistmillatail_2554_25_0[1] = get_internal_image(5588);
            images_playerassistmillatail_2554_25_0[2] = get_internal_image(5589);
            images_playerassistmillatail_2554_25_0[3] = get_internal_image(6794);
            images_playerassistmillatail_2554_25_0[4] = get_internal_image(5582);
            images_playerassistmillatail_2554_25_0[5] = get_internal_image(5583);
            images_playerassistmillatail_2554_25_0[6] = get_internal_image(5584);
            images_playerassistmillatail_2554_25_0[7] = get_internal_image(5585);
            images_playerassistmillatail_2554_25_16[0] = get_internal_image(5587);
            images_playerassistmillatail_2554_25_16[1] = get_internal_image(6795);
            images_playerassistmillatail_2554_25_16[2] = get_internal_image(6796);
            images_playerassistmillatail_2554_25_16[3] = get_internal_image(6797);
            images_playerassistmillatail_2554_25_16[4] = get_internal_image(6798);
            images_playerassistmillatail_2554_25_16[5] = get_internal_image(6799);
            images_playerassistmillatail_2554_25_16[6] = get_internal_image(6800);
            images_playerassistmillatail_2554_25_16[7] = get_internal_image(6801);
            images_playerassistmillatail_2554_26_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_27_0[0] = get_internal_image(2873);
            images_playerassistmillatail_2554_37_0[0] = get_internal_image(8413);
            images_playerassistmillatail_2554_37_0[1] = get_internal_image(8415);
            images_playerassistmillatail_2554_37_0[2] = get_internal_image(8416);
            images_playerassistmillatail_2554_37_0[3] = get_internal_image(8416);
            images_playerassistmillatail_2554_37_0[4] = get_internal_image(8417);
            images_playerassistmillatail_2554_37_0[5] = get_internal_image(8418);
            images_playerassistmillatail_2554_37_0[6] = get_internal_image(8413);
            images_playerassistmillatail_2554_37_0[7] = get_internal_image(7452);
            images_playerassistmillatail_2554_37_0[8] = get_internal_image(7456);
            images_playerassistmillatail_2554_37_0[9] = get_internal_image(7458);
            images_playerassistmillatail_2554_37_0[10] = get_internal_image(7457);
            images_playerassistmillatail_2554_37_0[11] = get_internal_image(7459);
            images_playerassistmillatail_2554_37_0[12] = get_internal_image(7460);
            images_playerassistmillatail_2554_37_0[13] = get_internal_image(7462);
            images_playerassistmillatail_2554_37_0[14] = get_internal_image(7463);
            images_playerassistmillatail_2554_37_16[0] = get_internal_image(8413);
            images_playerassistmillatail_2554_37_16[1] = get_internal_image(8415);
            images_playerassistmillatail_2554_37_16[2] = get_internal_image(8416);
            images_playerassistmillatail_2554_37_16[3] = get_internal_image(8416);
            images_playerassistmillatail_2554_37_16[4] = get_internal_image(8417);
            images_playerassistmillatail_2554_37_16[5] = get_internal_image(8418);
            images_playerassistmillatail_2554_37_16[6] = get_internal_image(8413);
            images_playerassistmillatail_2554_37_16[7] = get_internal_image(7461);
            images_playerassistmillatail_2554_37_16[8] = get_internal_image(7464);
            images_playerassistmillatail_2554_37_16[9] = get_internal_image(7465);
            images_playerassistmillatail_2554_37_16[10] = get_internal_image(7466);
            images_playerassistmillatail_2554_37_16[11] = get_internal_image(7467);
            images_playerassistmillatail_2554_37_16[12] = get_internal_image(7468);
            images_playerassistmillatail_2554_37_16[13] = get_internal_image(7469);
            images_playerassistmillatail_2554_37_16[14] = get_internal_image(7470);
            images_playerassistmillatail_2554_38_0[0] = get_internal_image(8414);
            images_playerassistmillatail_2554_41_0[0] = get_internal_image(7452);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_690_player_assist_millatail.value;
        if (!global_data_690_player_assist_millatail.init) {
            global_data_690_player_assist_millatail.init = true;
        }
    }
};
FrameObject * create_playerassistmillatail_2554(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistMillaTail_2554(x, y);
}
static Image* images_playerassistlilacmask_2555_0_0[1];
static Direction direction_playerassistlilacmask_2555_0_0 = {0, 50, 50, 0, 1, images_playerassistlilacmask_2555_0_0, 1};
static Animation anim_playerassistlilacmask_2555_0 = {&direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, NULL, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0, &direction_playerassistlilacmask_2555_0_0};
static Animation * anim_array_playerassistlilacmask_2555[1] = {&anim_playerassistlilacmask_2555_0};
static Animations anim_playerassistlilacmask_2555 = {1, &anim_array_playerassistlilacmask_2555[0]};
static bool anim_playerassistlilacmask_2555_initialized;
class PlayerAssistLilacMask_2555 : public Active
{
public:
    PlayerAssistLilacMask_2555(int x, int y) : Active(x, y, PlayerAssistLilacMask_2555_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_LilacMask", 23);
#endif
        set_visible(false);
        this->animations = &anim_playerassistlilacmask_2555;
        if (!anim_playerassistlilacmask_2555_initialized) {
            anim_playerassistlilacmask_2555_initialized = true;
            images_playerassistlilacmask_2555_0_0[0] = get_internal_image(5943);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(7, 1);
    }
};
FrameObject * create_playerassistlilacmask_2555(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistLilacMask_2555(x, y);
}
static Image* images_playerassistcarolmask_2556_0_0[1];
static Direction direction_playerassistcarolmask_2556_0_0 = {0, 50, 50, 0, 1, images_playerassistcarolmask_2556_0_0, 1};
static Animation anim_playerassistcarolmask_2556_0 = {&direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, NULL, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0, &direction_playerassistcarolmask_2556_0_0};
static Animation * anim_array_playerassistcarolmask_2556[1] = {&anim_playerassistcarolmask_2556_0};
static Animations anim_playerassistcarolmask_2556 = {1, &anim_array_playerassistcarolmask_2556[0]};
static bool anim_playerassistcarolmask_2556_initialized;
class PlayerAssistCarolMask_2556 : public Active
{
public:
    PlayerAssistCarolMask_2556(int x, int y) : Active(x, y, PlayerAssistCarolMask_2556_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_CarolMask", 23);
#endif
        set_visible(false);
        this->animations = &anim_playerassistcarolmask_2556;
        if (!anim_playerassistcarolmask_2556_initialized) {
            anim_playerassistcarolmask_2556_initialized = true;
            images_playerassistcarolmask_2556_0_0[0] = get_internal_image(5944);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(7, 1);
    }
};
FrameObject * create_playerassistcarolmask_2556(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistCarolMask_2556(x, y);
}
static Image* images_playerassistmillamask_2557_0_0[1];
static Direction direction_playerassistmillamask_2557_0_0 = {0, 50, 50, 0, 1, images_playerassistmillamask_2557_0_0, 1};
static Animation anim_playerassistmillamask_2557_0 = {&direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, NULL, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0, &direction_playerassistmillamask_2557_0_0};
static Animation * anim_array_playerassistmillamask_2557[1] = {&anim_playerassistmillamask_2557_0};
static Animations anim_playerassistmillamask_2557 = {1, &anim_array_playerassistmillamask_2557[0]};
static bool anim_playerassistmillamask_2557_initialized;
class PlayerAssistMillaMask_2557 : public Active
{
public:
    PlayerAssistMillaMask_2557(int x, int y) : Active(x, y, PlayerAssistMillaMask_2557_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_MillaMask", 23);
#endif
        set_visible(false);
        this->animations = &anim_playerassistmillamask_2557;
        if (!anim_playerassistmillamask_2557_initialized) {
            anim_playerassistmillamask_2557_initialized = true;
            images_playerassistmillamask_2557_0_0[0] = get_internal_image(5949);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(7, 1);
    }
};
FrameObject * create_playerassistmillamask_2557(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistMillaMask_2557(x, y);
}
static Image* images_playerassistmilla_2558_0_0[16];
static Direction direction_playerassistmilla_2558_0_0 = {0, 20, 20, 0, -1, images_playerassistmilla_2558_0_0, 16};
static Image* images_playerassistmilla_2558_0_15[16];
static Direction direction_playerassistmilla_2558_0_15 = {15, 20, 20, 0, -1, images_playerassistmilla_2558_0_15, 16};
static Image* images_playerassistmilla_2558_0_16[16];
static Direction direction_playerassistmilla_2558_0_16 = {16, 20, 20, 0, -1, images_playerassistmilla_2558_0_16, 16};
static Image* images_playerassistmilla_2558_0_31[16];
static Direction direction_playerassistmilla_2558_0_31 = {31, 20, 20, 0, -1, images_playerassistmilla_2558_0_31, 16};
static Animation anim_playerassistmilla_2558_0 = {&direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_0, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_15, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_16, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31, &direction_playerassistmilla_2558_0_31};
static Image* images_playerassistmilla_2558_1_0[10];
static Direction direction_playerassistmilla_2558_1_0 = {0, 50, 50, 0, -1, images_playerassistmilla_2558_1_0, 10};
static Image* images_playerassistmilla_2558_1_15[10];
static Direction direction_playerassistmilla_2558_1_15 = {15, 50, 50, 0, -1, images_playerassistmilla_2558_1_15, 10};
static Image* images_playerassistmilla_2558_1_16[10];
static Direction direction_playerassistmilla_2558_1_16 = {16, 50, 50, 0, -1, images_playerassistmilla_2558_1_16, 10};
static Image* images_playerassistmilla_2558_1_31[10];
static Direction direction_playerassistmilla_2558_1_31 = {31, 50, 50, 0, -1, images_playerassistmilla_2558_1_31, 10};
static Animation anim_playerassistmilla_2558_1 = {&direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_0, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_15, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_16, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31, &direction_playerassistmilla_2558_1_31};
static Image* images_playerassistmilla_2558_2_0[8];
static Direction direction_playerassistmilla_2558_2_0 = {0, 50, 50, 2, -1, images_playerassistmilla_2558_2_0, 8};
static Image* images_playerassistmilla_2558_2_15[10];
static Direction direction_playerassistmilla_2558_2_15 = {15, 50, 50, 0, -1, images_playerassistmilla_2558_2_15, 10};
static Image* images_playerassistmilla_2558_2_16[8];
static Direction direction_playerassistmilla_2558_2_16 = {16, 50, 50, 2, -1, images_playerassistmilla_2558_2_16, 8};
static Image* images_playerassistmilla_2558_2_31[10];
static Direction direction_playerassistmilla_2558_2_31 = {31, 50, 50, 0, -1, images_playerassistmilla_2558_2_31, 10};
static Animation anim_playerassistmilla_2558_2 = {&direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_0, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_15, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_16, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31, &direction_playerassistmilla_2558_2_31};
static Image* images_playerassistmilla_2558_8_0[9];
static Direction direction_playerassistmilla_2558_8_0 = {0, 50, 50, 8, 3, images_playerassistmilla_2558_8_0, 9};
static Image* images_playerassistmilla_2558_8_8[2];
static Direction direction_playerassistmilla_2558_8_8 = {8, 50, 50, 0, 1, images_playerassistmilla_2558_8_8, 2};
static Image* images_playerassistmilla_2558_8_16[9];
static Direction direction_playerassistmilla_2558_8_16 = {16, 50, 50, 8, 3, images_playerassistmilla_2558_8_16, 9};
static Animation anim_playerassistmilla_2558_8 = {&direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, NULL, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, &direction_playerassistmilla_2558_8_8, NULL, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, &direction_playerassistmilla_2558_8_16, NULL, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0, &direction_playerassistmilla_2558_8_0};
static Image* images_playerassistmilla_2558_10_0[7];
static Direction direction_playerassistmilla_2558_10_0 = {0, 12, 12, 2, -1, images_playerassistmilla_2558_10_0, 7};
static Image* images_playerassistmilla_2558_10_16[7];
static Direction direction_playerassistmilla_2558_10_16 = {16, 12, 12, 2, -1, images_playerassistmilla_2558_10_16, 7};
static Animation anim_playerassistmilla_2558_10 = {&direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, NULL, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, &direction_playerassistmilla_2558_10_16, NULL, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0, &direction_playerassistmilla_2558_10_0};
static Image* images_playerassistmilla_2558_14_0[7];
static Direction direction_playerassistmilla_2558_14_0 = {0, 50, 50, 0, -1, images_playerassistmilla_2558_14_0, 7};
static Image* images_playerassistmilla_2558_14_8[7];
static Direction direction_playerassistmilla_2558_14_8 = {8, 50, 50, 0, -1, images_playerassistmilla_2558_14_8, 7};
static Image* images_playerassistmilla_2558_14_16[7];
static Direction direction_playerassistmilla_2558_14_16 = {16, 50, 50, 0, -1, images_playerassistmilla_2558_14_16, 7};
static Animation anim_playerassistmilla_2558_14 = {&direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, NULL, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, &direction_playerassistmilla_2558_14_8, NULL, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, &direction_playerassistmilla_2558_14_16, NULL, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0, &direction_playerassistmilla_2558_14_0};
static Image* images_playerassistmilla_2558_16_0[2];
static Direction direction_playerassistmilla_2558_16_0 = {0, 14, 14, 0, -1, images_playerassistmilla_2558_16_0, 2};
static Image* images_playerassistmilla_2558_16_15[10];
static Direction direction_playerassistmilla_2558_16_15 = {15, 100, 100, 0, -1, images_playerassistmilla_2558_16_15, 10};
static Image* images_playerassistmilla_2558_16_16[2];
static Direction direction_playerassistmilla_2558_16_16 = {16, 14, 14, 0, -1, images_playerassistmilla_2558_16_16, 2};
static Image* images_playerassistmilla_2558_16_31[10];
static Direction direction_playerassistmilla_2558_16_31 = {31, 100, 100, 0, -1, images_playerassistmilla_2558_16_31, 10};
static Animation anim_playerassistmilla_2558_16 = {&direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_0, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_15, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_16, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31, &direction_playerassistmilla_2558_16_31};
static Image* images_playerassistmilla_2558_18_0[5];
static Direction direction_playerassistmilla_2558_18_0 = {0, 70, 70, 0, -1, images_playerassistmilla_2558_18_0, 5};
static Image* images_playerassistmilla_2558_18_8[4];
static Direction direction_playerassistmilla_2558_18_8 = {8, 50, 50, 0, 1, images_playerassistmilla_2558_18_8, 4};
static Image* images_playerassistmilla_2558_18_16[5];
static Direction direction_playerassistmilla_2558_18_16 = {16, 70, 70, 0, -1, images_playerassistmilla_2558_18_16, 5};
static Animation anim_playerassistmilla_2558_18 = {&direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, NULL, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, &direction_playerassistmilla_2558_18_8, NULL, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, &direction_playerassistmilla_2558_18_16, NULL, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0, &direction_playerassistmilla_2558_18_0};
static Image* images_playerassistmilla_2558_23_0[6];
static Direction direction_playerassistmilla_2558_23_0 = {0, 100, 100, 0, -1, images_playerassistmilla_2558_23_0, 6};
static Image* images_playerassistmilla_2558_23_15[10];
static Direction direction_playerassistmilla_2558_23_15 = {15, 100, 100, 0, -1, images_playerassistmilla_2558_23_15, 10};
static Image* images_playerassistmilla_2558_23_16[6];
static Direction direction_playerassistmilla_2558_23_16 = {16, 100, 100, 0, -1, images_playerassistmilla_2558_23_16, 6};
static Image* images_playerassistmilla_2558_23_31[10];
static Direction direction_playerassistmilla_2558_23_31 = {31, 100, 100, 0, -1, images_playerassistmilla_2558_23_31, 10};
static Animation anim_playerassistmilla_2558_23 = {&direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_0, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_15, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_16, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31, &direction_playerassistmilla_2558_23_31};
static Image* images_playerassistmilla_2558_24_0[13];
static Direction direction_playerassistmilla_2558_24_0 = {0, 20, 20, 10, -1, images_playerassistmilla_2558_24_0, 13};
static Image* images_playerassistmilla_2558_24_15[13];
static Direction direction_playerassistmilla_2558_24_15 = {15, 20, 20, 10, -1, images_playerassistmilla_2558_24_15, 13};
static Image* images_playerassistmilla_2558_24_16[13];
static Direction direction_playerassistmilla_2558_24_16 = {16, 20, 20, 10, -1, images_playerassistmilla_2558_24_16, 13};
static Image* images_playerassistmilla_2558_24_31[13];
static Direction direction_playerassistmilla_2558_24_31 = {31, 20, 20, 10, -1, images_playerassistmilla_2558_24_31, 13};
static Animation anim_playerassistmilla_2558_24 = {&direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_0, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_15, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_16, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31, &direction_playerassistmilla_2558_24_31};
static Image* images_playerassistmilla_2558_25_0[7];
static Direction direction_playerassistmilla_2558_25_0 = {0, 0, 0, 0, -1, images_playerassistmilla_2558_25_0, 7};
static Image* images_playerassistmilla_2558_25_16[7];
static Direction direction_playerassistmilla_2558_25_16 = {16, 0, 0, 0, -1, images_playerassistmilla_2558_25_16, 7};
static Animation anim_playerassistmilla_2558_25 = {&direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, NULL, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, &direction_playerassistmilla_2558_25_16, NULL, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0, &direction_playerassistmilla_2558_25_0};
static Image* images_playerassistmilla_2558_27_0[9];
static Direction direction_playerassistmilla_2558_27_0 = {0, 50, 50, 8, 3, images_playerassistmilla_2558_27_0, 9};
static Image* images_playerassistmilla_2558_27_16[9];
static Direction direction_playerassistmilla_2558_27_16 = {16, 50, 50, 8, 3, images_playerassistmilla_2558_27_16, 9};
static Animation anim_playerassistmilla_2558_27 = {&direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, NULL, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, &direction_playerassistmilla_2558_27_16, NULL, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0, &direction_playerassistmilla_2558_27_0};
static Image* images_playerassistmilla_2558_37_0[13];
static Direction direction_playerassistmilla_2558_37_0 = {0, 16, 16, 12, -1, images_playerassistmilla_2558_37_0, 13};
static Image* images_playerassistmilla_2558_37_8[4];
static Direction direction_playerassistmilla_2558_37_8 = {8, 50, 50, 0, 1, images_playerassistmilla_2558_37_8, 4};
static Image* images_playerassistmilla_2558_37_16[13];
static Direction direction_playerassistmilla_2558_37_16 = {16, 16, 16, 12, -1, images_playerassistmilla_2558_37_16, 13};
static Animation anim_playerassistmilla_2558_37 = {&direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, NULL, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, &direction_playerassistmilla_2558_37_8, NULL, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, &direction_playerassistmilla_2558_37_16, NULL, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0, &direction_playerassistmilla_2558_37_0};
static Image* images_playerassistmilla_2558_38_0[4];
static Direction direction_playerassistmilla_2558_38_0 = {0, 18, 18, 3, -1, images_playerassistmilla_2558_38_0, 4};
static Image* images_playerassistmilla_2558_38_16[4];
static Direction direction_playerassistmilla_2558_38_16 = {16, 18, 18, 3, -1, images_playerassistmilla_2558_38_16, 4};
static Animation anim_playerassistmilla_2558_38 = {&direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, NULL, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, &direction_playerassistmilla_2558_38_16, NULL, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0, &direction_playerassistmilla_2558_38_0};
static Image* images_playerassistmilla_2558_41_0[1];
static Direction direction_playerassistmilla_2558_41_0 = {0, 50, 50, 0, 1, images_playerassistmilla_2558_41_0, 1};
static Animation anim_playerassistmilla_2558_41 = {&direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, NULL, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0, &direction_playerassistmilla_2558_41_0};
static Animation * anim_array_playerassistmilla_2558[42] = {&anim_playerassistmilla_2558_0, &anim_playerassistmilla_2558_1, &anim_playerassistmilla_2558_2, NULL, NULL, NULL, NULL, NULL, &anim_playerassistmilla_2558_8, NULL, &anim_playerassistmilla_2558_10, NULL, NULL, NULL, &anim_playerassistmilla_2558_14, NULL, &anim_playerassistmilla_2558_16, NULL, &anim_playerassistmilla_2558_18, NULL, NULL, NULL, NULL, &anim_playerassistmilla_2558_23, &anim_playerassistmilla_2558_24, &anim_playerassistmilla_2558_25, NULL, &anim_playerassistmilla_2558_27, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistmilla_2558_37, &anim_playerassistmilla_2558_38, NULL, NULL, &anim_playerassistmilla_2558_41};
static Animations anim_playerassistmilla_2558 = {42, &anim_array_playerassistmilla_2558[0]};
static bool anim_playerassistmilla_2558_initialized;
class PlayerAssistMilla_2558 : public Active
{
public:
    PlayerAssistMilla_2558(int x, int y) : Active(x, y, PlayerAssistMilla_2558_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Player_Assist_Milla", 19);
#endif
        this->animations = &anim_playerassistmilla_2558;
        if (!anim_playerassistmilla_2558_initialized) {
            anim_playerassistmilla_2558_initialized = true;
            images_playerassistmilla_2558_0_0[0] = get_internal_image(10799);
            images_playerassistmilla_2558_0_0[1] = get_internal_image(10799);
            images_playerassistmilla_2558_0_0[2] = get_internal_image(10795);
            images_playerassistmilla_2558_0_0[3] = get_internal_image(10795);
            images_playerassistmilla_2558_0_0[4] = get_internal_image(10801);
            images_playerassistmilla_2558_0_0[5] = get_internal_image(10801);
            images_playerassistmilla_2558_0_0[6] = get_internal_image(10806);
            images_playerassistmilla_2558_0_0[7] = get_internal_image(10806);
            images_playerassistmilla_2558_0_0[8] = get_internal_image(10799);
            images_playerassistmilla_2558_0_0[9] = get_internal_image(10799);
            images_playerassistmilla_2558_0_0[10] = get_internal_image(10797);
            images_playerassistmilla_2558_0_0[11] = get_internal_image(10798);
            images_playerassistmilla_2558_0_0[12] = get_internal_image(10801);
            images_playerassistmilla_2558_0_0[13] = get_internal_image(10801);
            images_playerassistmilla_2558_0_0[14] = get_internal_image(10806);
            images_playerassistmilla_2558_0_0[15] = get_internal_image(10806);
            images_playerassistmilla_2558_0_15[0] = get_internal_image(10817);
            images_playerassistmilla_2558_0_15[1] = get_internal_image(10817);
            images_playerassistmilla_2558_0_15[2] = get_internal_image(10818);
            images_playerassistmilla_2558_0_15[3] = get_internal_image(10818);
            images_playerassistmilla_2558_0_15[4] = get_internal_image(10819);
            images_playerassistmilla_2558_0_15[5] = get_internal_image(10819);
            images_playerassistmilla_2558_0_15[6] = get_internal_image(10820);
            images_playerassistmilla_2558_0_15[7] = get_internal_image(10820);
            images_playerassistmilla_2558_0_15[8] = get_internal_image(10817);
            images_playerassistmilla_2558_0_15[9] = get_internal_image(10817);
            images_playerassistmilla_2558_0_15[10] = get_internal_image(10818);
            images_playerassistmilla_2558_0_15[11] = get_internal_image(10818);
            images_playerassistmilla_2558_0_15[12] = get_internal_image(10819);
            images_playerassistmilla_2558_0_15[13] = get_internal_image(10819);
            images_playerassistmilla_2558_0_15[14] = get_internal_image(10820);
            images_playerassistmilla_2558_0_15[15] = get_internal_image(10820);
            images_playerassistmilla_2558_0_16[0] = get_internal_image(10796);
            images_playerassistmilla_2558_0_16[1] = get_internal_image(10796);
            images_playerassistmilla_2558_0_16[2] = get_internal_image(10800);
            images_playerassistmilla_2558_0_16[3] = get_internal_image(10800);
            images_playerassistmilla_2558_0_16[4] = get_internal_image(10802);
            images_playerassistmilla_2558_0_16[5] = get_internal_image(10802);
            images_playerassistmilla_2558_0_16[6] = get_internal_image(10807);
            images_playerassistmilla_2558_0_16[7] = get_internal_image(10807);
            images_playerassistmilla_2558_0_16[8] = get_internal_image(10796);
            images_playerassistmilla_2558_0_16[9] = get_internal_image(10796);
            images_playerassistmilla_2558_0_16[10] = get_internal_image(10804);
            images_playerassistmilla_2558_0_16[11] = get_internal_image(10805);
            images_playerassistmilla_2558_0_16[12] = get_internal_image(10802);
            images_playerassistmilla_2558_0_16[13] = get_internal_image(10802);
            images_playerassistmilla_2558_0_16[14] = get_internal_image(10807);
            images_playerassistmilla_2558_0_16[15] = get_internal_image(10807);
            images_playerassistmilla_2558_0_31[0] = get_internal_image(10814);
            images_playerassistmilla_2558_0_31[1] = get_internal_image(10814);
            images_playerassistmilla_2558_0_31[2] = get_internal_image(10811);
            images_playerassistmilla_2558_0_31[3] = get_internal_image(10811);
            images_playerassistmilla_2558_0_31[4] = get_internal_image(10815);
            images_playerassistmilla_2558_0_31[5] = get_internal_image(10815);
            images_playerassistmilla_2558_0_31[6] = get_internal_image(10816);
            images_playerassistmilla_2558_0_31[7] = get_internal_image(10816);
            images_playerassistmilla_2558_0_31[8] = get_internal_image(10814);
            images_playerassistmilla_2558_0_31[9] = get_internal_image(10814);
            images_playerassistmilla_2558_0_31[10] = get_internal_image(10811);
            images_playerassistmilla_2558_0_31[11] = get_internal_image(10811);
            images_playerassistmilla_2558_0_31[12] = get_internal_image(10815);
            images_playerassistmilla_2558_0_31[13] = get_internal_image(10815);
            images_playerassistmilla_2558_0_31[14] = get_internal_image(10816);
            images_playerassistmilla_2558_0_31[15] = get_internal_image(10816);
            images_playerassistmilla_2558_1_0[0] = get_internal_image(4633);
            images_playerassistmilla_2558_1_0[1] = get_internal_image(4801);
            images_playerassistmilla_2558_1_0[2] = get_internal_image(3983);
            images_playerassistmilla_2558_1_0[3] = get_internal_image(4804);
            images_playerassistmilla_2558_1_0[4] = get_internal_image(4803);
            images_playerassistmilla_2558_1_0[5] = get_internal_image(4802);
            images_playerassistmilla_2558_1_0[6] = get_internal_image(4807);
            images_playerassistmilla_2558_1_0[7] = get_internal_image(4806);
            images_playerassistmilla_2558_1_0[8] = get_internal_image(4805);
            images_playerassistmilla_2558_1_0[9] = get_internal_image(4808);
            images_playerassistmilla_2558_1_15[0] = get_internal_image(6539);
            images_playerassistmilla_2558_1_15[1] = get_internal_image(6557);
            images_playerassistmilla_2558_1_15[2] = get_internal_image(6590);
            images_playerassistmilla_2558_1_15[3] = get_internal_image(6648);
            images_playerassistmilla_2558_1_15[4] = get_internal_image(6733);
            images_playerassistmilla_2558_1_15[5] = get_internal_image(6738);
            images_playerassistmilla_2558_1_15[6] = get_internal_image(6951);
            images_playerassistmilla_2558_1_15[7] = get_internal_image(7474);
            images_playerassistmilla_2558_1_15[8] = get_internal_image(7475);
            images_playerassistmilla_2558_1_15[9] = get_internal_image(7477);
            images_playerassistmilla_2558_1_16[0] = get_internal_image(4809);
            images_playerassistmilla_2558_1_16[1] = get_internal_image(4810);
            images_playerassistmilla_2558_1_16[2] = get_internal_image(4814);
            images_playerassistmilla_2558_1_16[3] = get_internal_image(4824);
            images_playerassistmilla_2558_1_16[4] = get_internal_image(4826);
            images_playerassistmilla_2558_1_16[5] = get_internal_image(4875);
            images_playerassistmilla_2558_1_16[6] = get_internal_image(4876);
            images_playerassistmilla_2558_1_16[7] = get_internal_image(4882);
            images_playerassistmilla_2558_1_16[8] = get_internal_image(4912);
            images_playerassistmilla_2558_1_16[9] = get_internal_image(4913);
            images_playerassistmilla_2558_1_31[0] = get_internal_image(4074);
            images_playerassistmilla_2558_1_31[1] = get_internal_image(4700);
            images_playerassistmilla_2558_1_31[2] = get_internal_image(4701);
            images_playerassistmilla_2558_1_31[3] = get_internal_image(4702);
            images_playerassistmilla_2558_1_31[4] = get_internal_image(4705);
            images_playerassistmilla_2558_1_31[5] = get_internal_image(4706);
            images_playerassistmilla_2558_1_31[6] = get_internal_image(4796);
            images_playerassistmilla_2558_1_31[7] = get_internal_image(4799);
            images_playerassistmilla_2558_1_31[8] = get_internal_image(6242);
            images_playerassistmilla_2558_1_31[9] = get_internal_image(5466);
            images_playerassistmilla_2558_2_0[0] = get_internal_image(4679);
            images_playerassistmilla_2558_2_0[1] = get_internal_image(4679);
            images_playerassistmilla_2558_2_0[2] = get_internal_image(4682);
            images_playerassistmilla_2558_2_0[3] = get_internal_image(8951);
            images_playerassistmilla_2558_2_0[4] = get_internal_image(4685);
            images_playerassistmilla_2558_2_0[5] = get_internal_image(6819);
            images_playerassistmilla_2558_2_0[6] = get_internal_image(4683);
            images_playerassistmilla_2558_2_0[7] = get_internal_image(8952);
            images_playerassistmilla_2558_2_15[0] = get_internal_image(6539);
            images_playerassistmilla_2558_2_15[1] = get_internal_image(6557);
            images_playerassistmilla_2558_2_15[2] = get_internal_image(6590);
            images_playerassistmilla_2558_2_15[3] = get_internal_image(6648);
            images_playerassistmilla_2558_2_15[4] = get_internal_image(6733);
            images_playerassistmilla_2558_2_15[5] = get_internal_image(6738);
            images_playerassistmilla_2558_2_15[6] = get_internal_image(6951);
            images_playerassistmilla_2558_2_15[7] = get_internal_image(7474);
            images_playerassistmilla_2558_2_15[8] = get_internal_image(7475);
            images_playerassistmilla_2558_2_15[9] = get_internal_image(7477);
            images_playerassistmilla_2558_2_16[0] = get_internal_image(4681);
            images_playerassistmilla_2558_2_16[1] = get_internal_image(4681);
            images_playerassistmilla_2558_2_16[2] = get_internal_image(8953);
            images_playerassistmilla_2558_2_16[3] = get_internal_image(8954);
            images_playerassistmilla_2558_2_16[4] = get_internal_image(8955);
            images_playerassistmilla_2558_2_16[5] = get_internal_image(8956);
            images_playerassistmilla_2558_2_16[6] = get_internal_image(8957);
            images_playerassistmilla_2558_2_16[7] = get_internal_image(9271);
            images_playerassistmilla_2558_2_31[0] = get_internal_image(4074);
            images_playerassistmilla_2558_2_31[1] = get_internal_image(4700);
            images_playerassistmilla_2558_2_31[2] = get_internal_image(4701);
            images_playerassistmilla_2558_2_31[3] = get_internal_image(4702);
            images_playerassistmilla_2558_2_31[4] = get_internal_image(4705);
            images_playerassistmilla_2558_2_31[5] = get_internal_image(4706);
            images_playerassistmilla_2558_2_31[6] = get_internal_image(4796);
            images_playerassistmilla_2558_2_31[7] = get_internal_image(4799);
            images_playerassistmilla_2558_2_31[8] = get_internal_image(6242);
            images_playerassistmilla_2558_2_31[9] = get_internal_image(5466);
            images_playerassistmilla_2558_8_0[0] = get_internal_image(3843);
            images_playerassistmilla_2558_8_0[1] = get_internal_image(11169);
            images_playerassistmilla_2558_8_0[2] = get_internal_image(3845);
            images_playerassistmilla_2558_8_0[3] = get_internal_image(11168);
            images_playerassistmilla_2558_8_0[4] = get_internal_image(3844);
            images_playerassistmilla_2558_8_0[5] = get_internal_image(11168);
            images_playerassistmilla_2558_8_0[6] = get_internal_image(4547);
            images_playerassistmilla_2558_8_0[7] = get_internal_image(11168);
            images_playerassistmilla_2558_8_0[8] = get_internal_image(11169);
            images_playerassistmilla_2558_8_8[0] = get_internal_image(1213);
            images_playerassistmilla_2558_8_8[1] = get_internal_image(1216);
            images_playerassistmilla_2558_8_16[0] = get_internal_image(6156);
            images_playerassistmilla_2558_8_16[1] = get_internal_image(11170);
            images_playerassistmilla_2558_8_16[2] = get_internal_image(6421);
            images_playerassistmilla_2558_8_16[3] = get_internal_image(11171);
            images_playerassistmilla_2558_8_16[4] = get_internal_image(6517);
            images_playerassistmilla_2558_8_16[5] = get_internal_image(11171);
            images_playerassistmilla_2558_8_16[6] = get_internal_image(6542);
            images_playerassistmilla_2558_8_16[7] = get_internal_image(11171);
            images_playerassistmilla_2558_8_16[8] = get_internal_image(11170);
            images_playerassistmilla_2558_10_0[0] = get_internal_image(11153);
            images_playerassistmilla_2558_10_0[1] = get_internal_image(438);
            images_playerassistmilla_2558_10_0[2] = get_internal_image(5042);
            images_playerassistmilla_2558_10_0[3] = get_internal_image(5046);
            images_playerassistmilla_2558_10_0[4] = get_internal_image(392);
            images_playerassistmilla_2558_10_0[5] = get_internal_image(5293);
            images_playerassistmilla_2558_10_0[6] = get_internal_image(8979);
            images_playerassistmilla_2558_10_16[0] = get_internal_image(11154);
            images_playerassistmilla_2558_10_16[1] = get_internal_image(11155);
            images_playerassistmilla_2558_10_16[2] = get_internal_image(11156);
            images_playerassistmilla_2558_10_16[3] = get_internal_image(11157);
            images_playerassistmilla_2558_10_16[4] = get_internal_image(11158);
            images_playerassistmilla_2558_10_16[5] = get_internal_image(11159);
            images_playerassistmilla_2558_10_16[6] = get_internal_image(11160);
            images_playerassistmilla_2558_14_0[0] = get_internal_image(7431);
            images_playerassistmilla_2558_14_0[1] = get_internal_image(7430);
            images_playerassistmilla_2558_14_0[2] = get_internal_image(6910);
            images_playerassistmilla_2558_14_0[3] = get_internal_image(6905);
            images_playerassistmilla_2558_14_0[4] = get_internal_image(6906);
            images_playerassistmilla_2558_14_0[5] = get_internal_image(7432);
            images_playerassistmilla_2558_14_0[6] = get_internal_image(7672);
            images_playerassistmilla_2558_14_8[0] = get_internal_image(7169);
            images_playerassistmilla_2558_14_8[1] = get_internal_image(7159);
            images_playerassistmilla_2558_14_8[2] = get_internal_image(7170);
            images_playerassistmilla_2558_14_8[3] = get_internal_image(7165);
            images_playerassistmilla_2558_14_8[4] = get_internal_image(7163);
            images_playerassistmilla_2558_14_8[5] = get_internal_image(7168);
            images_playerassistmilla_2558_14_8[6] = get_internal_image(7166);
            images_playerassistmilla_2558_14_16[0] = get_internal_image(7476);
            images_playerassistmilla_2558_14_16[1] = get_internal_image(7673);
            images_playerassistmilla_2558_14_16[2] = get_internal_image(7663);
            images_playerassistmilla_2558_14_16[3] = get_internal_image(7668);
            images_playerassistmilla_2558_14_16[4] = get_internal_image(7669);
            images_playerassistmilla_2558_14_16[5] = get_internal_image(7674);
            images_playerassistmilla_2558_14_16[6] = get_internal_image(7675);
            images_playerassistmilla_2558_16_0[0] = get_internal_image(1872);
            images_playerassistmilla_2558_16_0[1] = get_internal_image(1870);
            images_playerassistmilla_2558_16_15[0] = get_internal_image(6539);
            images_playerassistmilla_2558_16_15[1] = get_internal_image(6557);
            images_playerassistmilla_2558_16_15[2] = get_internal_image(6590);
            images_playerassistmilla_2558_16_15[3] = get_internal_image(6648);
            images_playerassistmilla_2558_16_15[4] = get_internal_image(6733);
            images_playerassistmilla_2558_16_15[5] = get_internal_image(6738);
            images_playerassistmilla_2558_16_15[6] = get_internal_image(6951);
            images_playerassistmilla_2558_16_15[7] = get_internal_image(7474);
            images_playerassistmilla_2558_16_15[8] = get_internal_image(7475);
            images_playerassistmilla_2558_16_15[9] = get_internal_image(7477);
            images_playerassistmilla_2558_16_16[0] = get_internal_image(910);
            images_playerassistmilla_2558_16_16[1] = get_internal_image(3296);
            images_playerassistmilla_2558_16_31[0] = get_internal_image(4074);
            images_playerassistmilla_2558_16_31[1] = get_internal_image(4700);
            images_playerassistmilla_2558_16_31[2] = get_internal_image(4701);
            images_playerassistmilla_2558_16_31[3] = get_internal_image(4702);
            images_playerassistmilla_2558_16_31[4] = get_internal_image(4705);
            images_playerassistmilla_2558_16_31[5] = get_internal_image(4706);
            images_playerassistmilla_2558_16_31[6] = get_internal_image(4796);
            images_playerassistmilla_2558_16_31[7] = get_internal_image(4799);
            images_playerassistmilla_2558_16_31[8] = get_internal_image(6242);
            images_playerassistmilla_2558_16_31[9] = get_internal_image(5466);
            images_playerassistmilla_2558_18_0[0] = get_internal_image(8361);
            images_playerassistmilla_2558_18_0[1] = get_internal_image(8355);
            images_playerassistmilla_2558_18_0[2] = get_internal_image(8363);
            images_playerassistmilla_2558_18_0[3] = get_internal_image(8362);
            images_playerassistmilla_2558_18_0[4] = get_internal_image(8579);
            images_playerassistmilla_2558_18_8[0] = get_internal_image(6418);
            images_playerassistmilla_2558_18_8[1] = get_internal_image(6810);
            images_playerassistmilla_2558_18_8[2] = get_internal_image(6813);
            images_playerassistmilla_2558_18_8[3] = get_internal_image(6697);
            images_playerassistmilla_2558_18_16[0] = get_internal_image(8364);
            images_playerassistmilla_2558_18_16[1] = get_internal_image(8591);
            images_playerassistmilla_2558_18_16[2] = get_internal_image(8592);
            images_playerassistmilla_2558_18_16[3] = get_internal_image(8593);
            images_playerassistmilla_2558_18_16[4] = get_internal_image(8594);
            images_playerassistmilla_2558_23_0[0] = get_internal_image(4682);
            images_playerassistmilla_2558_23_0[1] = get_internal_image(8951);
            images_playerassistmilla_2558_23_0[2] = get_internal_image(4685);
            images_playerassistmilla_2558_23_0[3] = get_internal_image(6819);
            images_playerassistmilla_2558_23_0[4] = get_internal_image(4683);
            images_playerassistmilla_2558_23_0[5] = get_internal_image(8952);
            images_playerassistmilla_2558_23_15[0] = get_internal_image(6539);
            images_playerassistmilla_2558_23_15[1] = get_internal_image(6557);
            images_playerassistmilla_2558_23_15[2] = get_internal_image(6590);
            images_playerassistmilla_2558_23_15[3] = get_internal_image(6648);
            images_playerassistmilla_2558_23_15[4] = get_internal_image(6733);
            images_playerassistmilla_2558_23_15[5] = get_internal_image(6738);
            images_playerassistmilla_2558_23_15[6] = get_internal_image(6951);
            images_playerassistmilla_2558_23_15[7] = get_internal_image(7474);
            images_playerassistmilla_2558_23_15[8] = get_internal_image(7475);
            images_playerassistmilla_2558_23_15[9] = get_internal_image(7477);
            images_playerassistmilla_2558_23_16[0] = get_internal_image(8953);
            images_playerassistmilla_2558_23_16[1] = get_internal_image(8954);
            images_playerassistmilla_2558_23_16[2] = get_internal_image(8955);
            images_playerassistmilla_2558_23_16[3] = get_internal_image(8956);
            images_playerassistmilla_2558_23_16[4] = get_internal_image(8957);
            images_playerassistmilla_2558_23_16[5] = get_internal_image(9271);
            images_playerassistmilla_2558_23_31[0] = get_internal_image(4074);
            images_playerassistmilla_2558_23_31[1] = get_internal_image(4700);
            images_playerassistmilla_2558_23_31[2] = get_internal_image(4701);
            images_playerassistmilla_2558_23_31[3] = get_internal_image(4702);
            images_playerassistmilla_2558_23_31[4] = get_internal_image(4705);
            images_playerassistmilla_2558_23_31[5] = get_internal_image(4706);
            images_playerassistmilla_2558_23_31[6] = get_internal_image(4796);
            images_playerassistmilla_2558_23_31[7] = get_internal_image(4799);
            images_playerassistmilla_2558_23_31[8] = get_internal_image(6242);
            images_playerassistmilla_2558_23_31[9] = get_internal_image(5466);
            images_playerassistmilla_2558_24_0[0] = get_internal_image(11216);
            images_playerassistmilla_2558_24_0[1] = get_internal_image(11216);
            images_playerassistmilla_2558_24_0[2] = get_internal_image(11216);
            images_playerassistmilla_2558_24_0[3] = get_internal_image(11216);
            images_playerassistmilla_2558_24_0[4] = get_internal_image(11216);
            images_playerassistmilla_2558_24_0[5] = get_internal_image(6650);
            images_playerassistmilla_2558_24_0[6] = get_internal_image(6395);
            images_playerassistmilla_2558_24_0[7] = get_internal_image(6381);
            images_playerassistmilla_2558_24_0[8] = get_internal_image(6334);
            images_playerassistmilla_2558_24_0[9] = get_internal_image(6326);
            images_playerassistmilla_2558_24_0[10] = get_internal_image(1311);
            images_playerassistmilla_2558_24_0[11] = get_internal_image(918);
            images_playerassistmilla_2558_24_0[12] = get_internal_image(1697);
            images_playerassistmilla_2558_24_15[0] = get_internal_image(6651);
            images_playerassistmilla_2558_24_15[1] = get_internal_image(6651);
            images_playerassistmilla_2558_24_15[2] = get_internal_image(6651);
            images_playerassistmilla_2558_24_15[3] = get_internal_image(6651);
            images_playerassistmilla_2558_24_15[4] = get_internal_image(6651);
            images_playerassistmilla_2558_24_15[5] = get_internal_image(6652);
            images_playerassistmilla_2558_24_15[6] = get_internal_image(7109);
            images_playerassistmilla_2558_24_15[7] = get_internal_image(7115);
            images_playerassistmilla_2558_24_15[8] = get_internal_image(7118);
            images_playerassistmilla_2558_24_15[9] = get_internal_image(7119);
            images_playerassistmilla_2558_24_15[10] = get_internal_image(7120);
            images_playerassistmilla_2558_24_15[11] = get_internal_image(7121);
            images_playerassistmilla_2558_24_15[12] = get_internal_image(7123);
            images_playerassistmilla_2558_24_16[0] = get_internal_image(11217);
            images_playerassistmilla_2558_24_16[1] = get_internal_image(11217);
            images_playerassistmilla_2558_24_16[2] = get_internal_image(11217);
            images_playerassistmilla_2558_24_16[3] = get_internal_image(11217);
            images_playerassistmilla_2558_24_16[4] = get_internal_image(11217);
            images_playerassistmilla_2558_24_16[5] = get_internal_image(6642);
            images_playerassistmilla_2558_24_16[6] = get_internal_image(7131);
            images_playerassistmilla_2558_24_16[7] = get_internal_image(7133);
            images_playerassistmilla_2558_24_16[8] = get_internal_image(7134);
            images_playerassistmilla_2558_24_16[9] = get_internal_image(7426);
            images_playerassistmilla_2558_24_16[10] = get_internal_image(7427);
            images_playerassistmilla_2558_24_16[11] = get_internal_image(7428);
            images_playerassistmilla_2558_24_16[12] = get_internal_image(7429);
            images_playerassistmilla_2558_24_31[0] = get_internal_image(6332);
            images_playerassistmilla_2558_24_31[1] = get_internal_image(6332);
            images_playerassistmilla_2558_24_31[2] = get_internal_image(6332);
            images_playerassistmilla_2558_24_31[3] = get_internal_image(6332);
            images_playerassistmilla_2558_24_31[4] = get_internal_image(6332);
            images_playerassistmilla_2558_24_31[5] = get_internal_image(6378);
            images_playerassistmilla_2558_24_31[6] = get_internal_image(7105);
            images_playerassistmilla_2558_24_31[7] = get_internal_image(6299);
            images_playerassistmilla_2558_24_31[8] = get_internal_image(7039);
            images_playerassistmilla_2558_24_31[9] = get_internal_image(7079);
            images_playerassistmilla_2558_24_31[10] = get_internal_image(7084);
            images_playerassistmilla_2558_24_31[11] = get_internal_image(7086);
            images_playerassistmilla_2558_24_31[12] = get_internal_image(7090);
            images_playerassistmilla_2558_25_0[0] = get_internal_image(5218);
            images_playerassistmilla_2558_25_0[1] = get_internal_image(2978);
            images_playerassistmilla_2558_25_0[2] = get_internal_image(11186);
            images_playerassistmilla_2558_25_0[3] = get_internal_image(11381);
            images_playerassistmilla_2558_25_0[4] = get_internal_image(11195);
            images_playerassistmilla_2558_25_0[5] = get_internal_image(11192);
            images_playerassistmilla_2558_25_0[6] = get_internal_image(11193);
            images_playerassistmilla_2558_25_16[0] = get_internal_image(2112);
            images_playerassistmilla_2558_25_16[1] = get_internal_image(6572);
            images_playerassistmilla_2558_25_16[2] = get_internal_image(6475);
            images_playerassistmilla_2558_25_16[3] = get_internal_image(11376);
            images_playerassistmilla_2558_25_16[4] = get_internal_image(11194);
            images_playerassistmilla_2558_25_16[5] = get_internal_image(11196);
            images_playerassistmilla_2558_25_16[6] = get_internal_image(11197);
            images_playerassistmilla_2558_27_0[0] = get_internal_image(11169);
            images_playerassistmilla_2558_27_0[1] = get_internal_image(11169);
            images_playerassistmilla_2558_27_0[2] = get_internal_image(11169);
            images_playerassistmilla_2558_27_0[3] = get_internal_image(11168);
            images_playerassistmilla_2558_27_0[4] = get_internal_image(11168);
            images_playerassistmilla_2558_27_0[5] = get_internal_image(11168);
            images_playerassistmilla_2558_27_0[6] = get_internal_image(11168);
            images_playerassistmilla_2558_27_0[7] = get_internal_image(11168);
            images_playerassistmilla_2558_27_0[8] = get_internal_image(11169);
            images_playerassistmilla_2558_27_16[0] = get_internal_image(11170);
            images_playerassistmilla_2558_27_16[1] = get_internal_image(11170);
            images_playerassistmilla_2558_27_16[2] = get_internal_image(11170);
            images_playerassistmilla_2558_27_16[3] = get_internal_image(11171);
            images_playerassistmilla_2558_27_16[4] = get_internal_image(11171);
            images_playerassistmilla_2558_27_16[5] = get_internal_image(11171);
            images_playerassistmilla_2558_27_16[6] = get_internal_image(11171);
            images_playerassistmilla_2558_27_16[7] = get_internal_image(11171);
            images_playerassistmilla_2558_27_16[8] = get_internal_image(11170);
            images_playerassistmilla_2558_37_0[0] = get_internal_image(10799);
            images_playerassistmilla_2558_37_0[1] = get_internal_image(8906);
            images_playerassistmilla_2558_37_0[2] = get_internal_image(8909);
            images_playerassistmilla_2558_37_0[3] = get_internal_image(841);
            images_playerassistmilla_2558_37_0[4] = get_internal_image(857);
            images_playerassistmilla_2558_37_0[5] = get_internal_image(5082);
            images_playerassistmilla_2558_37_0[6] = get_internal_image(4106);
            images_playerassistmilla_2558_37_0[7] = get_internal_image(8902);
            images_playerassistmilla_2558_37_0[8] = get_internal_image(8908);
            images_playerassistmilla_2558_37_0[9] = get_internal_image(8907);
            images_playerassistmilla_2558_37_0[10] = get_internal_image(8904);
            images_playerassistmilla_2558_37_0[11] = get_internal_image(8903);
            images_playerassistmilla_2558_37_0[12] = get_internal_image(8923);
            images_playerassistmilla_2558_37_8[0] = get_internal_image(845);
            images_playerassistmilla_2558_37_8[1] = get_internal_image(8911);
            images_playerassistmilla_2558_37_8[2] = get_internal_image(8912);
            images_playerassistmilla_2558_37_8[3] = get_internal_image(858);
            images_playerassistmilla_2558_37_16[0] = get_internal_image(10796);
            images_playerassistmilla_2558_37_16[1] = get_internal_image(8899);
            images_playerassistmilla_2558_37_16[2] = get_internal_image(8926);
            images_playerassistmilla_2558_37_16[3] = get_internal_image(8928);
            images_playerassistmilla_2558_37_16[4] = get_internal_image(8929);
            images_playerassistmilla_2558_37_16[5] = get_internal_image(8930);
            images_playerassistmilla_2558_37_16[6] = get_internal_image(8931);
            images_playerassistmilla_2558_37_16[7] = get_internal_image(8932);
            images_playerassistmilla_2558_37_16[8] = get_internal_image(8933);
            images_playerassistmilla_2558_37_16[9] = get_internal_image(8934);
            images_playerassistmilla_2558_37_16[10] = get_internal_image(8935);
            images_playerassistmilla_2558_37_16[11] = get_internal_image(8967);
            images_playerassistmilla_2558_37_16[12] = get_internal_image(8969);
            images_playerassistmilla_2558_38_0[0] = get_internal_image(8884);
            images_playerassistmilla_2558_38_0[1] = get_internal_image(7171);
            images_playerassistmilla_2558_38_0[2] = get_internal_image(7174);
            images_playerassistmilla_2558_38_0[3] = get_internal_image(8887);
            images_playerassistmilla_2558_38_16[0] = get_internal_image(8898);
            images_playerassistmilla_2558_38_16[1] = get_internal_image(8900);
            images_playerassistmilla_2558_38_16[2] = get_internal_image(8910);
            images_playerassistmilla_2558_38_16[3] = get_internal_image(8922);
            images_playerassistmilla_2558_41_0[0] = get_internal_image(11000);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_691_player_assist_milla.value;
        if (!global_data_691_player_assist_milla.init) {
            global_data_691_player_assist_milla.init = true;
        }
    }
};
FrameObject * create_playerassistmilla_2558(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistMilla_2558(x, y);
}
static Image* images_playerassistcarol_2559_0_0[12];
static Direction direction_playerassistcarol_2559_0_0 = {0, 18, 18, 0, -1, images_playerassistcarol_2559_0_0, 12};
static Image* images_playerassistcarol_2559_0_16[12];
static Direction direction_playerassistcarol_2559_0_16 = {16, 18, 18, 0, -1, images_playerassistcarol_2559_0_16, 12};
static Animation anim_playerassistcarol_2559_0 = {&direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, NULL, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, &direction_playerassistcarol_2559_0_16, NULL, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0, &direction_playerassistcarol_2559_0_0};
static Image* images_playerassistcarol_2559_1_0[12];
static Direction direction_playerassistcarol_2559_1_0 = {0, 50, 50, 0, -1, images_playerassistcarol_2559_1_0, 12};
static Image* images_playerassistcarol_2559_1_16[12];
static Direction direction_playerassistcarol_2559_1_16 = {16, 50, 50, 0, -1, images_playerassistcarol_2559_1_16, 12};
static Animation anim_playerassistcarol_2559_1 = {&direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, NULL, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, &direction_playerassistcarol_2559_1_16, NULL, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0, &direction_playerassistcarol_2559_1_0};
static Image* images_playerassistcarol_2559_2_0[8];
static Direction direction_playerassistcarol_2559_2_0 = {0, 10, 10, 0, -1, images_playerassistcarol_2559_2_0, 8};
static Image* images_playerassistcarol_2559_2_16[8];
static Direction direction_playerassistcarol_2559_2_16 = {16, 10, 10, 0, -1, images_playerassistcarol_2559_2_16, 8};
static Animation anim_playerassistcarol_2559_2 = {&direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, NULL, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, &direction_playerassistcarol_2559_2_16, NULL, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0, &direction_playerassistcarol_2559_2_0};
static Image* images_playerassistcarol_2559_8_0[9];
static Direction direction_playerassistcarol_2559_8_0 = {0, 50, 50, 8, 3, images_playerassistcarol_2559_8_0, 9};
static Image* images_playerassistcarol_2559_8_16[9];
static Direction direction_playerassistcarol_2559_8_16 = {16, 50, 50, 8, 3, images_playerassistcarol_2559_8_16, 9};
static Animation anim_playerassistcarol_2559_8 = {&direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, NULL, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, &direction_playerassistcarol_2559_8_16, NULL, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0, &direction_playerassistcarol_2559_8_0};
static Image* images_playerassistcarol_2559_10_0[7];
static Direction direction_playerassistcarol_2559_10_0 = {0, 18, 18, 1, -1, images_playerassistcarol_2559_10_0, 7};
static Image* images_playerassistcarol_2559_10_16[7];
static Direction direction_playerassistcarol_2559_10_16 = {16, 18, 18, 1, -1, images_playerassistcarol_2559_10_16, 7};
static Animation anim_playerassistcarol_2559_10 = {&direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, NULL, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, &direction_playerassistcarol_2559_10_16, NULL, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0, &direction_playerassistcarol_2559_10_0};
static Image* images_playerassistcarol_2559_13_0[4];
static Direction direction_playerassistcarol_2559_13_0 = {0, 25, 25, 3, -1, images_playerassistcarol_2559_13_0, 4};
static Image* images_playerassistcarol_2559_13_16[4];
static Direction direction_playerassistcarol_2559_13_16 = {16, 25, 25, 3, -1, images_playerassistcarol_2559_13_16, 4};
static Animation anim_playerassistcarol_2559_13 = {&direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, NULL, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, &direction_playerassistcarol_2559_13_16, NULL, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0, &direction_playerassistcarol_2559_13_0};
static Image* images_playerassistcarol_2559_16_0[2];
static Direction direction_playerassistcarol_2559_16_0 = {0, 14, 14, 0, -1, images_playerassistcarol_2559_16_0, 2};
static Image* images_playerassistcarol_2559_16_16[2];
static Direction direction_playerassistcarol_2559_16_16 = {16, 14, 14, 0, -1, images_playerassistcarol_2559_16_16, 2};
static Animation anim_playerassistcarol_2559_16 = {&direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, NULL, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, &direction_playerassistcarol_2559_16_16, NULL, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0, &direction_playerassistcarol_2559_16_0};
static Image* images_playerassistcarol_2559_21_0[9];
static Direction direction_playerassistcarol_2559_21_0 = {0, 50, 50, 1, -1, images_playerassistcarol_2559_21_0, 9};
static Image* images_playerassistcarol_2559_21_1[9];
static Direction direction_playerassistcarol_2559_21_1 = {1, 50, 50, 1, -1, images_playerassistcarol_2559_21_1, 9};
static Image* images_playerassistcarol_2559_21_16[9];
static Direction direction_playerassistcarol_2559_21_16 = {16, 50, 50, 1, -1, images_playerassistcarol_2559_21_16, 9};
static Image* images_playerassistcarol_2559_21_17[9];
static Direction direction_playerassistcarol_2559_21_17 = {17, 50, 50, 1, -1, images_playerassistcarol_2559_21_17, 9};
static Animation anim_playerassistcarol_2559_21 = {&direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_1, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_16, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_17, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0, &direction_playerassistcarol_2559_21_0};
static Image* images_playerassistcarol_2559_24_0[9];
static Direction direction_playerassistcarol_2559_24_0 = {0, 20, 20, 8, -1, images_playerassistcarol_2559_24_0, 9};
static Image* images_playerassistcarol_2559_24_16[9];
static Direction direction_playerassistcarol_2559_24_16 = {16, 20, 20, 8, -1, images_playerassistcarol_2559_24_16, 9};
static Animation anim_playerassistcarol_2559_24 = {&direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, NULL, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, &direction_playerassistcarol_2559_24_16, NULL, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0, &direction_playerassistcarol_2559_24_0};
static Image* images_playerassistcarol_2559_25_0[6];
static Direction direction_playerassistcarol_2559_25_0 = {0, 35, 35, 5, -1, images_playerassistcarol_2559_25_0, 6};
static Image* images_playerassistcarol_2559_25_16[6];
static Direction direction_playerassistcarol_2559_25_16 = {16, 35, 35, 5, -1, images_playerassistcarol_2559_25_16, 6};
static Animation anim_playerassistcarol_2559_25 = {&direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, NULL, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, &direction_playerassistcarol_2559_25_16, NULL, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0, &direction_playerassistcarol_2559_25_0};
static Image* images_playerassistcarol_2559_26_0[6];
static Direction direction_playerassistcarol_2559_26_0 = {0, 35, 35, 5, -1, images_playerassistcarol_2559_26_0, 6};
static Image* images_playerassistcarol_2559_26_16[6];
static Direction direction_playerassistcarol_2559_26_16 = {16, 35, 35, 5, -1, images_playerassistcarol_2559_26_16, 6};
static Animation anim_playerassistcarol_2559_26 = {&direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, NULL, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, &direction_playerassistcarol_2559_26_16, NULL, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0, &direction_playerassistcarol_2559_26_0};
static Image* images_playerassistcarol_2559_27_0[9];
static Direction direction_playerassistcarol_2559_27_0 = {0, 50, 50, 8, 3, images_playerassistcarol_2559_27_0, 9};
static Image* images_playerassistcarol_2559_27_16[9];
static Direction direction_playerassistcarol_2559_27_16 = {16, 50, 50, 8, 3, images_playerassistcarol_2559_27_16, 9};
static Animation anim_playerassistcarol_2559_27 = {&direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, NULL, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, &direction_playerassistcarol_2559_27_16, NULL, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0, &direction_playerassistcarol_2559_27_0};
static Image* images_playerassistcarol_2559_28_0[3];
static Direction direction_playerassistcarol_2559_28_0 = {0, 25, 25, 2, -1, images_playerassistcarol_2559_28_0, 3};
static Image* images_playerassistcarol_2559_28_16[3];
static Direction direction_playerassistcarol_2559_28_16 = {16, 25, 25, 2, -1, images_playerassistcarol_2559_28_16, 3};
static Animation anim_playerassistcarol_2559_28 = {&direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, NULL, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, &direction_playerassistcarol_2559_28_16, NULL, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0, &direction_playerassistcarol_2559_28_0};
static Image* images_playerassistcarol_2559_29_0[6];
static Direction direction_playerassistcarol_2559_29_0 = {0, 35, 35, 5, -1, images_playerassistcarol_2559_29_0, 6};
static Image* images_playerassistcarol_2559_29_16[6];
static Direction direction_playerassistcarol_2559_29_16 = {16, 35, 35, 5, -1, images_playerassistcarol_2559_29_16, 6};
static Animation anim_playerassistcarol_2559_29 = {&direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, NULL, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, &direction_playerassistcarol_2559_29_16, NULL, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0, &direction_playerassistcarol_2559_29_0};
static Image* images_playerassistcarol_2559_37_0[15];
static Direction direction_playerassistcarol_2559_37_0 = {0, 18, 18, 14, -1, images_playerassistcarol_2559_37_0, 15};
static Image* images_playerassistcarol_2559_37_1[8];
static Direction direction_playerassistcarol_2559_37_1 = {1, 18, 18, 7, -1, images_playerassistcarol_2559_37_1, 8};
static Image* images_playerassistcarol_2559_37_16[15];
static Direction direction_playerassistcarol_2559_37_16 = {16, 18, 18, 14, -1, images_playerassistcarol_2559_37_16, 15};
static Image* images_playerassistcarol_2559_37_17[8];
static Direction direction_playerassistcarol_2559_37_17 = {17, 18, 18, 7, -1, images_playerassistcarol_2559_37_17, 8};
static Animation anim_playerassistcarol_2559_37 = {&direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_1, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_16, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_17, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0, &direction_playerassistcarol_2559_37_0};
static Image* images_playerassistcarol_2559_38_0[7];
static Direction direction_playerassistcarol_2559_38_0 = {0, 15, 15, 6, -1, images_playerassistcarol_2559_38_0, 7};
static Image* images_playerassistcarol_2559_38_16[7];
static Direction direction_playerassistcarol_2559_38_16 = {16, 15, 15, 6, -1, images_playerassistcarol_2559_38_16, 7};
static Animation anim_playerassistcarol_2559_38 = {&direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, NULL, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, &direction_playerassistcarol_2559_38_16, NULL, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0, &direction_playerassistcarol_2559_38_0};
static Image* images_playerassistcarol_2559_41_0[1];
static Direction direction_playerassistcarol_2559_41_0 = {0, 50, 50, 0, 1, images_playerassistcarol_2559_41_0, 1};
static Animation anim_playerassistcarol_2559_41 = {&direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, NULL, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0, &direction_playerassistcarol_2559_41_0};
static Animation * anim_array_playerassistcarol_2559[42] = {&anim_playerassistcarol_2559_0, &anim_playerassistcarol_2559_1, &anim_playerassistcarol_2559_2, NULL, NULL, NULL, NULL, NULL, &anim_playerassistcarol_2559_8, NULL, &anim_playerassistcarol_2559_10, NULL, NULL, &anim_playerassistcarol_2559_13, NULL, NULL, &anim_playerassistcarol_2559_16, NULL, NULL, NULL, NULL, &anim_playerassistcarol_2559_21, NULL, NULL, &anim_playerassistcarol_2559_24, &anim_playerassistcarol_2559_25, &anim_playerassistcarol_2559_26, &anim_playerassistcarol_2559_27, &anim_playerassistcarol_2559_28, &anim_playerassistcarol_2559_29, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistcarol_2559_37, &anim_playerassistcarol_2559_38, NULL, NULL, &anim_playerassistcarol_2559_41};
static Animations anim_playerassistcarol_2559 = {42, &anim_array_playerassistcarol_2559[0]};
static bool anim_playerassistcarol_2559_initialized;
class PlayerAssistCarol_2559 : public Active
{
public:
    PlayerAssistCarol_2559(int x, int y) : Active(x, y, PlayerAssistCarol_2559_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Player_Assist_Carol", 19);
#endif
        this->animations = &anim_playerassistcarol_2559;
        if (!anim_playerassistcarol_2559_initialized) {
            anim_playerassistcarol_2559_initialized = true;
            images_playerassistcarol_2559_0_0[0] = get_internal_image(9713);
            images_playerassistcarol_2559_0_0[1] = get_internal_image(9715);
            images_playerassistcarol_2559_0_0[2] = get_internal_image(9716);
            images_playerassistcarol_2559_0_0[3] = get_internal_image(10213);
            images_playerassistcarol_2559_0_0[4] = get_internal_image(9714);
            images_playerassistcarol_2559_0_0[5] = get_internal_image(9718);
            images_playerassistcarol_2559_0_0[6] = get_internal_image(9719);
            images_playerassistcarol_2559_0_0[7] = get_internal_image(9715);
            images_playerassistcarol_2559_0_0[8] = get_internal_image(9723);
            images_playerassistcarol_2559_0_0[9] = get_internal_image(10212);
            images_playerassistcarol_2559_0_0[10] = get_internal_image(9722);
            images_playerassistcarol_2559_0_0[11] = get_internal_image(9721);
            images_playerassistcarol_2559_0_16[0] = get_internal_image(9724);
            images_playerassistcarol_2559_0_16[1] = get_internal_image(9725);
            images_playerassistcarol_2559_0_16[2] = get_internal_image(9726);
            images_playerassistcarol_2559_0_16[3] = get_internal_image(10214);
            images_playerassistcarol_2559_0_16[4] = get_internal_image(9728);
            images_playerassistcarol_2559_0_16[5] = get_internal_image(9729);
            images_playerassistcarol_2559_0_16[6] = get_internal_image(9730);
            images_playerassistcarol_2559_0_16[7] = get_internal_image(9725);
            images_playerassistcarol_2559_0_16[8] = get_internal_image(9731);
            images_playerassistcarol_2559_0_16[9] = get_internal_image(10215);
            images_playerassistcarol_2559_0_16[10] = get_internal_image(9733);
            images_playerassistcarol_2559_0_16[11] = get_internal_image(9734);
            images_playerassistcarol_2559_1_0[0] = get_internal_image(9810);
            images_playerassistcarol_2559_1_0[1] = get_internal_image(9815);
            images_playerassistcarol_2559_1_0[2] = get_internal_image(9811);
            images_playerassistcarol_2559_1_0[3] = get_internal_image(9812);
            images_playerassistcarol_2559_1_0[4] = get_internal_image(9813);
            images_playerassistcarol_2559_1_0[5] = get_internal_image(9814);
            images_playerassistcarol_2559_1_0[6] = get_internal_image(9820);
            images_playerassistcarol_2559_1_0[7] = get_internal_image(9816);
            images_playerassistcarol_2559_1_0[8] = get_internal_image(9817);
            images_playerassistcarol_2559_1_0[9] = get_internal_image(9818);
            images_playerassistcarol_2559_1_0[10] = get_internal_image(9819);
            images_playerassistcarol_2559_1_0[11] = get_internal_image(9821);
            images_playerassistcarol_2559_1_16[0] = get_internal_image(9809);
            images_playerassistcarol_2559_1_16[1] = get_internal_image(9822);
            images_playerassistcarol_2559_1_16[2] = get_internal_image(9823);
            images_playerassistcarol_2559_1_16[3] = get_internal_image(9824);
            images_playerassistcarol_2559_1_16[4] = get_internal_image(9825);
            images_playerassistcarol_2559_1_16[5] = get_internal_image(9826);
            images_playerassistcarol_2559_1_16[6] = get_internal_image(9827);
            images_playerassistcarol_2559_1_16[7] = get_internal_image(9828);
            images_playerassistcarol_2559_1_16[8] = get_internal_image(9829);
            images_playerassistcarol_2559_1_16[9] = get_internal_image(9830);
            images_playerassistcarol_2559_1_16[10] = get_internal_image(9831);
            images_playerassistcarol_2559_1_16[11] = get_internal_image(9832);
            images_playerassistcarol_2559_2_0[0] = get_internal_image(9834);
            images_playerassistcarol_2559_2_0[1] = get_internal_image(9835);
            images_playerassistcarol_2559_2_0[2] = get_internal_image(9836);
            images_playerassistcarol_2559_2_0[3] = get_internal_image(9837);
            images_playerassistcarol_2559_2_0[4] = get_internal_image(9838);
            images_playerassistcarol_2559_2_0[5] = get_internal_image(9833);
            images_playerassistcarol_2559_2_0[6] = get_internal_image(9839);
            images_playerassistcarol_2559_2_0[7] = get_internal_image(9841);
            images_playerassistcarol_2559_2_16[0] = get_internal_image(9840);
            images_playerassistcarol_2559_2_16[1] = get_internal_image(9842);
            images_playerassistcarol_2559_2_16[2] = get_internal_image(9843);
            images_playerassistcarol_2559_2_16[3] = get_internal_image(9844);
            images_playerassistcarol_2559_2_16[4] = get_internal_image(9845);
            images_playerassistcarol_2559_2_16[5] = get_internal_image(9846);
            images_playerassistcarol_2559_2_16[6] = get_internal_image(9847);
            images_playerassistcarol_2559_2_16[7] = get_internal_image(9848);
            images_playerassistcarol_2559_8_0[0] = get_internal_image(4267);
            images_playerassistcarol_2559_8_0[1] = get_internal_image(10006);
            images_playerassistcarol_2559_8_0[2] = get_internal_image(4269);
            images_playerassistcarol_2559_8_0[3] = get_internal_image(10007);
            images_playerassistcarol_2559_8_0[4] = get_internal_image(4270);
            images_playerassistcarol_2559_8_0[5] = get_internal_image(10007);
            images_playerassistcarol_2559_8_0[6] = get_internal_image(4268);
            images_playerassistcarol_2559_8_0[7] = get_internal_image(10007);
            images_playerassistcarol_2559_8_0[8] = get_internal_image(10006);
            images_playerassistcarol_2559_8_16[0] = get_internal_image(4271);
            images_playerassistcarol_2559_8_16[1] = get_internal_image(10008);
            images_playerassistcarol_2559_8_16[2] = get_internal_image(4272);
            images_playerassistcarol_2559_8_16[3] = get_internal_image(10009);
            images_playerassistcarol_2559_8_16[4] = get_internal_image(4273);
            images_playerassistcarol_2559_8_16[5] = get_internal_image(10009);
            images_playerassistcarol_2559_8_16[6] = get_internal_image(4274);
            images_playerassistcarol_2559_8_16[7] = get_internal_image(10009);
            images_playerassistcarol_2559_8_16[8] = get_internal_image(10008);
            images_playerassistcarol_2559_10_0[0] = get_internal_image(9874);
            images_playerassistcarol_2559_10_0[1] = get_internal_image(9887);
            images_playerassistcarol_2559_10_0[2] = get_internal_image(9882);
            images_playerassistcarol_2559_10_0[3] = get_internal_image(9883);
            images_playerassistcarol_2559_10_0[4] = get_internal_image(9884);
            images_playerassistcarol_2559_10_0[5] = get_internal_image(9885);
            images_playerassistcarol_2559_10_0[6] = get_internal_image(9886);
            images_playerassistcarol_2559_10_16[0] = get_internal_image(9888);
            images_playerassistcarol_2559_10_16[1] = get_internal_image(9889);
            images_playerassistcarol_2559_10_16[2] = get_internal_image(9890);
            images_playerassistcarol_2559_10_16[3] = get_internal_image(9891);
            images_playerassistcarol_2559_10_16[4] = get_internal_image(9892);
            images_playerassistcarol_2559_10_16[5] = get_internal_image(9893);
            images_playerassistcarol_2559_10_16[6] = get_internal_image(9894);
            images_playerassistcarol_2559_13_0[0] = get_internal_image(2916);
            images_playerassistcarol_2559_13_0[1] = get_internal_image(2918);
            images_playerassistcarol_2559_13_0[2] = get_internal_image(2919);
            images_playerassistcarol_2559_13_0[3] = get_internal_image(2919);
            images_playerassistcarol_2559_13_16[0] = get_internal_image(2917);
            images_playerassistcarol_2559_13_16[1] = get_internal_image(2922);
            images_playerassistcarol_2559_13_16[2] = get_internal_image(2923);
            images_playerassistcarol_2559_13_16[3] = get_internal_image(2923);
            images_playerassistcarol_2559_16_0[0] = get_internal_image(9928);
            images_playerassistcarol_2559_16_0[1] = get_internal_image(9929);
            images_playerassistcarol_2559_16_16[0] = get_internal_image(9927);
            images_playerassistcarol_2559_16_16[1] = get_internal_image(9930);
            images_playerassistcarol_2559_21_0[0] = get_internal_image(9945);
            images_playerassistcarol_2559_21_0[1] = get_internal_image(9950);
            images_playerassistcarol_2559_21_0[2] = get_internal_image(9947);
            images_playerassistcarol_2559_21_0[3] = get_internal_image(9948);
            images_playerassistcarol_2559_21_0[4] = get_internal_image(9949);
            images_playerassistcarol_2559_21_0[5] = get_internal_image(9952);
            images_playerassistcarol_2559_21_0[6] = get_internal_image(9951);
            images_playerassistcarol_2559_21_0[7] = get_internal_image(9944);
            images_playerassistcarol_2559_21_0[8] = get_internal_image(9953);
            images_playerassistcarol_2559_21_1[0] = get_internal_image(9955);
            images_playerassistcarol_2559_21_1[1] = get_internal_image(9946);
            images_playerassistcarol_2559_21_1[2] = get_internal_image(9956);
            images_playerassistcarol_2559_21_1[3] = get_internal_image(9954);
            images_playerassistcarol_2559_21_1[4] = get_internal_image(9961);
            images_playerassistcarol_2559_21_1[5] = get_internal_image(9959);
            images_playerassistcarol_2559_21_1[6] = get_internal_image(9958);
            images_playerassistcarol_2559_21_1[7] = get_internal_image(9960);
            images_playerassistcarol_2559_21_1[8] = get_internal_image(9962);
            images_playerassistcarol_2559_21_16[0] = get_internal_image(9957);
            images_playerassistcarol_2559_21_16[1] = get_internal_image(9963);
            images_playerassistcarol_2559_21_16[2] = get_internal_image(9964);
            images_playerassistcarol_2559_21_16[3] = get_internal_image(9965);
            images_playerassistcarol_2559_21_16[4] = get_internal_image(9966);
            images_playerassistcarol_2559_21_16[5] = get_internal_image(9967);
            images_playerassistcarol_2559_21_16[6] = get_internal_image(9968);
            images_playerassistcarol_2559_21_16[7] = get_internal_image(9969);
            images_playerassistcarol_2559_21_16[8] = get_internal_image(9970);
            images_playerassistcarol_2559_21_17[0] = get_internal_image(9971);
            images_playerassistcarol_2559_21_17[1] = get_internal_image(9972);
            images_playerassistcarol_2559_21_17[2] = get_internal_image(9973);
            images_playerassistcarol_2559_21_17[3] = get_internal_image(9974);
            images_playerassistcarol_2559_21_17[4] = get_internal_image(9975);
            images_playerassistcarol_2559_21_17[5] = get_internal_image(9976);
            images_playerassistcarol_2559_21_17[6] = get_internal_image(9977);
            images_playerassistcarol_2559_21_17[7] = get_internal_image(9978);
            images_playerassistcarol_2559_21_17[8] = get_internal_image(9979);
            images_playerassistcarol_2559_24_0[0] = get_internal_image(9981);
            images_playerassistcarol_2559_24_0[1] = get_internal_image(9981);
            images_playerassistcarol_2559_24_0[2] = get_internal_image(9981);
            images_playerassistcarol_2559_24_0[3] = get_internal_image(9981);
            images_playerassistcarol_2559_24_0[4] = get_internal_image(9981);
            images_playerassistcarol_2559_24_0[5] = get_internal_image(9983);
            images_playerassistcarol_2559_24_0[6] = get_internal_image(9982);
            images_playerassistcarol_2559_24_0[7] = get_internal_image(9980);
            images_playerassistcarol_2559_24_0[8] = get_internal_image(9985);
            images_playerassistcarol_2559_24_16[0] = get_internal_image(9984);
            images_playerassistcarol_2559_24_16[1] = get_internal_image(9984);
            images_playerassistcarol_2559_24_16[2] = get_internal_image(9984);
            images_playerassistcarol_2559_24_16[3] = get_internal_image(9984);
            images_playerassistcarol_2559_24_16[4] = get_internal_image(9984);
            images_playerassistcarol_2559_24_16[5] = get_internal_image(9986);
            images_playerassistcarol_2559_24_16[6] = get_internal_image(9987);
            images_playerassistcarol_2559_24_16[7] = get_internal_image(9988);
            images_playerassistcarol_2559_24_16[8] = get_internal_image(9989);
            images_playerassistcarol_2559_25_0[0] = get_internal_image(9991);
            images_playerassistcarol_2559_25_0[1] = get_internal_image(9991);
            images_playerassistcarol_2559_25_0[2] = get_internal_image(9992);
            images_playerassistcarol_2559_25_0[3] = get_internal_image(9994);
            images_playerassistcarol_2559_25_0[4] = get_internal_image(9993);
            images_playerassistcarol_2559_25_0[5] = get_internal_image(9993);
            images_playerassistcarol_2559_25_16[0] = get_internal_image(9990);
            images_playerassistcarol_2559_25_16[1] = get_internal_image(9990);
            images_playerassistcarol_2559_25_16[2] = get_internal_image(9995);
            images_playerassistcarol_2559_25_16[3] = get_internal_image(9996);
            images_playerassistcarol_2559_25_16[4] = get_internal_image(9997);
            images_playerassistcarol_2559_25_16[5] = get_internal_image(9997);
            images_playerassistcarol_2559_26_0[0] = get_internal_image(9999);
            images_playerassistcarol_2559_26_0[1] = get_internal_image(9999);
            images_playerassistcarol_2559_26_0[2] = get_internal_image(9998);
            images_playerassistcarol_2559_26_0[3] = get_internal_image(10002);
            images_playerassistcarol_2559_26_0[4] = get_internal_image(10001);
            images_playerassistcarol_2559_26_0[5] = get_internal_image(10001);
            images_playerassistcarol_2559_26_16[0] = get_internal_image(10000);
            images_playerassistcarol_2559_26_16[1] = get_internal_image(10000);
            images_playerassistcarol_2559_26_16[2] = get_internal_image(10003);
            images_playerassistcarol_2559_26_16[3] = get_internal_image(10004);
            images_playerassistcarol_2559_26_16[4] = get_internal_image(10005);
            images_playerassistcarol_2559_26_16[5] = get_internal_image(10005);
            images_playerassistcarol_2559_27_0[0] = get_internal_image(10006);
            images_playerassistcarol_2559_27_0[1] = get_internal_image(10006);
            images_playerassistcarol_2559_27_0[2] = get_internal_image(10006);
            images_playerassistcarol_2559_27_0[3] = get_internal_image(10007);
            images_playerassistcarol_2559_27_0[4] = get_internal_image(10007);
            images_playerassistcarol_2559_27_0[5] = get_internal_image(10007);
            images_playerassistcarol_2559_27_0[6] = get_internal_image(10007);
            images_playerassistcarol_2559_27_0[7] = get_internal_image(10007);
            images_playerassistcarol_2559_27_0[8] = get_internal_image(10006);
            images_playerassistcarol_2559_27_16[0] = get_internal_image(10008);
            images_playerassistcarol_2559_27_16[1] = get_internal_image(10008);
            images_playerassistcarol_2559_27_16[2] = get_internal_image(10008);
            images_playerassistcarol_2559_27_16[3] = get_internal_image(10009);
            images_playerassistcarol_2559_27_16[4] = get_internal_image(10009);
            images_playerassistcarol_2559_27_16[5] = get_internal_image(10009);
            images_playerassistcarol_2559_27_16[6] = get_internal_image(10009);
            images_playerassistcarol_2559_27_16[7] = get_internal_image(10009);
            images_playerassistcarol_2559_27_16[8] = get_internal_image(10008);
            images_playerassistcarol_2559_28_0[0] = get_internal_image(10011);
            images_playerassistcarol_2559_28_0[1] = get_internal_image(10012);
            images_playerassistcarol_2559_28_0[2] = get_internal_image(10013);
            images_playerassistcarol_2559_28_16[0] = get_internal_image(10010);
            images_playerassistcarol_2559_28_16[1] = get_internal_image(10014);
            images_playerassistcarol_2559_28_16[2] = get_internal_image(10015);
            images_playerassistcarol_2559_29_0[0] = get_internal_image(10017);
            images_playerassistcarol_2559_29_0[1] = get_internal_image(10017);
            images_playerassistcarol_2559_29_0[2] = get_internal_image(10019);
            images_playerassistcarol_2559_29_0[3] = get_internal_image(10018);
            images_playerassistcarol_2559_29_0[4] = get_internal_image(10020);
            images_playerassistcarol_2559_29_0[5] = get_internal_image(10020);
            images_playerassistcarol_2559_29_16[0] = get_internal_image(10016);
            images_playerassistcarol_2559_29_16[1] = get_internal_image(10016);
            images_playerassistcarol_2559_29_16[2] = get_internal_image(10021);
            images_playerassistcarol_2559_29_16[3] = get_internal_image(10022);
            images_playerassistcarol_2559_29_16[4] = get_internal_image(10023);
            images_playerassistcarol_2559_29_16[5] = get_internal_image(10023);
            images_playerassistcarol_2559_37_0[0] = get_internal_image(1304);
            images_playerassistcarol_2559_37_0[1] = get_internal_image(1918);
            images_playerassistcarol_2559_37_0[2] = get_internal_image(1920);
            images_playerassistcarol_2559_37_0[3] = get_internal_image(2377);
            images_playerassistcarol_2559_37_0[4] = get_internal_image(2603);
            images_playerassistcarol_2559_37_0[5] = get_internal_image(2586);
            images_playerassistcarol_2559_37_0[6] = get_internal_image(1920);
            images_playerassistcarol_2559_37_0[7] = get_internal_image(2377);
            images_playerassistcarol_2559_37_0[8] = get_internal_image(2603);
            images_playerassistcarol_2559_37_0[9] = get_internal_image(2586);
            images_playerassistcarol_2559_37_0[10] = get_internal_image(2794);
            images_playerassistcarol_2559_37_0[11] = get_internal_image(2805);
            images_playerassistcarol_2559_37_0[12] = get_internal_image(2803);
            images_playerassistcarol_2559_37_0[13] = get_internal_image(2807);
            images_playerassistcarol_2559_37_0[14] = get_internal_image(2808);
            images_playerassistcarol_2559_37_1[0] = get_internal_image(9743);
            images_playerassistcarol_2559_37_1[1] = get_internal_image(11755);
            images_playerassistcarol_2559_37_1[2] = get_internal_image(11754);
            images_playerassistcarol_2559_37_1[3] = get_internal_image(11760);
            images_playerassistcarol_2559_37_1[4] = get_internal_image(11759);
            images_playerassistcarol_2559_37_1[5] = get_internal_image(11761);
            images_playerassistcarol_2559_37_1[6] = get_internal_image(11757);
            images_playerassistcarol_2559_37_1[7] = get_internal_image(11758);
            images_playerassistcarol_2559_37_16[0] = get_internal_image(1919);
            images_playerassistcarol_2559_37_16[1] = get_internal_image(2810);
            images_playerassistcarol_2559_37_16[2] = get_internal_image(2812);
            images_playerassistcarol_2559_37_16[3] = get_internal_image(2813);
            images_playerassistcarol_2559_37_16[4] = get_internal_image(2814);
            images_playerassistcarol_2559_37_16[5] = get_internal_image(2879);
            images_playerassistcarol_2559_37_16[6] = get_internal_image(2812);
            images_playerassistcarol_2559_37_16[7] = get_internal_image(2813);
            images_playerassistcarol_2559_37_16[8] = get_internal_image(2814);
            images_playerassistcarol_2559_37_16[9] = get_internal_image(2879);
            images_playerassistcarol_2559_37_16[10] = get_internal_image(2895);
            images_playerassistcarol_2559_37_16[11] = get_internal_image(2906);
            images_playerassistcarol_2559_37_16[12] = get_internal_image(2909);
            images_playerassistcarol_2559_37_16[13] = get_internal_image(2910);
            images_playerassistcarol_2559_37_16[14] = get_internal_image(2911);
            images_playerassistcarol_2559_37_17[0] = get_internal_image(9737);
            images_playerassistcarol_2559_37_17[1] = get_internal_image(11756);
            images_playerassistcarol_2559_37_17[2] = get_internal_image(11762);
            images_playerassistcarol_2559_37_17[3] = get_internal_image(11763);
            images_playerassistcarol_2559_37_17[4] = get_internal_image(11764);
            images_playerassistcarol_2559_37_17[5] = get_internal_image(11765);
            images_playerassistcarol_2559_37_17[6] = get_internal_image(11766);
            images_playerassistcarol_2559_37_17[7] = get_internal_image(11767);
            images_playerassistcarol_2559_38_0[0] = get_internal_image(10058);
            images_playerassistcarol_2559_38_0[1] = get_internal_image(10057);
            images_playerassistcarol_2559_38_0[2] = get_internal_image(10060);
            images_playerassistcarol_2559_38_0[3] = get_internal_image(10061);
            images_playerassistcarol_2559_38_0[4] = get_internal_image(10062);
            images_playerassistcarol_2559_38_0[5] = get_internal_image(10063);
            images_playerassistcarol_2559_38_0[6] = get_internal_image(10064);
            images_playerassistcarol_2559_38_16[0] = get_internal_image(10059);
            images_playerassistcarol_2559_38_16[1] = get_internal_image(10065);
            images_playerassistcarol_2559_38_16[2] = get_internal_image(10066);
            images_playerassistcarol_2559_38_16[3] = get_internal_image(10067);
            images_playerassistcarol_2559_38_16[4] = get_internal_image(10068);
            images_playerassistcarol_2559_38_16[5] = get_internal_image(10069);
            images_playerassistcarol_2559_38_16[6] = get_internal_image(10070);
            images_playerassistcarol_2559_41_0[0] = get_internal_image(9743);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_692_player_assist_carol.value;
        if (!global_data_692_player_assist_carol.init) {
            global_data_692_player_assist_carol.init = true;
        }
    }
};
FrameObject * create_playerassistcarol_2559(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistCarol_2559(x, y);
}
static Image* images_playerassistmillaradar_2560_0_0[1];
static Direction direction_playerassistmillaradar_2560_0_0 = {0, 50, 50, 0, 1, images_playerassistmillaradar_2560_0_0, 1};
static Animation anim_playerassistmillaradar_2560_0 = {&direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, NULL, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0, &direction_playerassistmillaradar_2560_0_0};
static Animation * anim_array_playerassistmillaradar_2560[1] = {&anim_playerassistmillaradar_2560_0};
static Animations anim_playerassistmillaradar_2560 = {1, &anim_array_playerassistmillaradar_2560[0]};
static bool anim_playerassistmillaradar_2560_initialized;
class PlayerAssistMillaRadar_2560 : public Active
{
public:
    PlayerAssistMillaRadar_2560(int x, int y) : Active(x, y, PlayerAssistMillaRadar_2560_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_MillaRadar", 24);
#endif
        set_visible(false);
        this->animations = &anim_playerassistmillaradar_2560;
        if (!anim_playerassistmillaradar_2560_initialized) {
            anim_playerassistmillaradar_2560_initialized = true;
            images_playerassistmillaradar_2560_0_0[0] = get_internal_image(5950);
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
FrameObject * create_playerassistmillaradar_2560(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistMillaRadar_2560(x, y);
}
static Image* images_playerassistfinisher_2561_0_0[4];
static Direction direction_playerassistfinisher_2561_0_0 = {0, 90, 90, 0, -1, images_playerassistfinisher_2561_0_0, 4};
static Image* images_playerassistfinisher_2561_0_1[9];
static Direction direction_playerassistfinisher_2561_0_1 = {1, 50, 50, 1, -1, images_playerassistfinisher_2561_0_1, 9};
static Animation anim_playerassistfinisher_2561_0 = {&direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_1, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0, &direction_playerassistfinisher_2561_0_0};
static Animation * anim_array_playerassistfinisher_2561[1] = {&anim_playerassistfinisher_2561_0};
static Animations anim_playerassistfinisher_2561 = {1, &anim_array_playerassistfinisher_2561[0]};
static bool anim_playerassistfinisher_2561_initialized;
class PlayerAssistFinisher_2561 : public Active
{
public:
    PlayerAssistFinisher_2561(int x, int y) : Active(x, y, PlayerAssistFinisher_2561_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Finisher", 22);
#endif
        this->animations = &anim_playerassistfinisher_2561;
        if (!anim_playerassistfinisher_2561_initialized) {
            anim_playerassistfinisher_2561_initialized = true;
            images_playerassistfinisher_2561_0_0[0] = get_internal_image(5901);
            images_playerassistfinisher_2561_0_0[1] = get_internal_image(5862);
            images_playerassistfinisher_2561_0_0[2] = get_internal_image(5898);
            images_playerassistfinisher_2561_0_0[3] = get_internal_image(5899);
            images_playerassistfinisher_2561_0_1[0] = get_internal_image(1131);
            images_playerassistfinisher_2561_0_1[1] = get_internal_image(1175);
            images_playerassistfinisher_2561_0_1[2] = get_internal_image(1197);
            images_playerassistfinisher_2561_0_1[3] = get_internal_image(1199);
            images_playerassistfinisher_2561_0_1[4] = get_internal_image(1198);
            images_playerassistfinisher_2561_0_1[5] = get_internal_image(1200);
            images_playerassistfinisher_2561_0_1[6] = get_internal_image(441);
            images_playerassistfinisher_2561_0_1[7] = get_internal_image(1201);
            images_playerassistfinisher_2561_0_1[8] = get_internal_image(1202);
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
FrameObject * create_playerassistfinisher_2561(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistFinisher_2561(x, y);
}
class DialogData_2562 : public Text
{
public:
    DialogData_2562(int x, int y) : Text(x, y, DialogData_2562_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("03 24 mi_16_01 What do we do\?", 29));
        add_line(std::string("03 24 mi_16_02 Lilac\?", 21));
        add_line(std::string("01 66 li_26_02 I don't know!", 28));
        add_line(std::string("01 39 li_26_03 I don't know...", 30));
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
FrameObject * create_dialogdata_2562(int x, int y)
{
    return new (Text::pool.create()) DialogData_2562(x, y);
}
class LevelParallaxPiece0_2563 : public SystemBox
{
public:
    LevelParallaxPiece0_2563(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_2563_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 256;
        type = PATTERN_IMAGE;
        image = get_internal_image(6781);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_2563(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_2563(x, y);
}
class LevelParallaxPiece1_2564 : public SystemBox
{
public:
    LevelParallaxPiece1_2564(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2564_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(4680);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2564(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2564(x, y);
}
class LevelParallaxPiece2_2565 : public SystemBox
{
public:
    LevelParallaxPiece2_2565(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2565_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 96;
        type = PATTERN_IMAGE;
        image = get_internal_image(6112);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2565(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2565(x, y);
}
class LevelParallaxPiece5_2566 : public SystemBox
{
public:
    LevelParallaxPiece5_2566(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_2566_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(6354);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_2566(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_2566(x, y);
}
class LevelParallaxPiece6_2567 : public SystemBox
{
public:
    LevelParallaxPiece6_2567(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_2567_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 416;
        type = PATTERN_IMAGE;
        image = get_internal_image(9328);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_2567(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_2567(x, y);
}
static Image* images_enemyhomingbullet_2568_0_0[2];
static Direction direction_enemyhomingbullet_2568_0_0 = {0, 16, 16, 0, -1, images_enemyhomingbullet_2568_0_0, 2};
static Animation anim_enemyhomingbullet_2568_0 = {&direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, NULL, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0, &direction_enemyhomingbullet_2568_0_0};
static Animation * anim_array_enemyhomingbullet_2568[1] = {&anim_enemyhomingbullet_2568_0};
static Animations anim_enemyhomingbullet_2568 = {1, &anim_array_enemyhomingbullet_2568[0]};
static bool anim_enemyhomingbullet_2568_initialized;
class EnemyHomingBullet_2568 : public Active
{
public:
    EnemyHomingBullet_2568(int x, int y) : Active(x, y, EnemyHomingBullet_2568_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_HomingBullet", 18);
#endif
        this->animations = &anim_enemyhomingbullet_2568;
        if (!anim_enemyhomingbullet_2568_initialized) {
            anim_enemyhomingbullet_2568_initialized = true;
            images_enemyhomingbullet_2568_0_0[0] = get_internal_image(5650);
            images_enemyhomingbullet_2568_0_0[1] = get_internal_image(11358);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(30);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemyhomingbullet_2568(int x, int y)
{
    return new (Active::pool.create()) EnemyHomingBullet_2568(x, y);
}
static Image* images_enemypushupdebris_2569_0_0[5];
static Direction direction_enemypushupdebris_2569_0_0 = {0, 50, 50, 0, 1, images_enemypushupdebris_2569_0_0, 5};
static Animation anim_enemypushupdebris_2569_0 = {&direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, NULL, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0, &direction_enemypushupdebris_2569_0_0};
static Animation * anim_array_enemypushupdebris_2569[1] = {&anim_enemypushupdebris_2569_0};
static Animations anim_enemypushupdebris_2569 = {1, &anim_array_enemypushupdebris_2569[0]};
static bool anim_enemypushupdebris_2569_initialized;
class EnemyPushupDebris_2569 : public Active
{
public:
    EnemyPushupDebris_2569(int x, int y) : Active(x, y, EnemyPushupDebris_2569_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PushupDebris", 18);
#endif
        this->animations = &anim_enemypushupdebris_2569;
        if (!anim_enemypushupdebris_2569_initialized) {
            anim_enemypushupdebris_2569_initialized = true;
            images_enemypushupdebris_2569_0_0[0] = get_internal_image(8628);
            images_enemypushupdebris_2569_0_0[1] = get_internal_image(10927);
            images_enemypushupdebris_2569_0_0[2] = get_internal_image(6742);
            images_enemypushupdebris_2569_0_0[3] = get_internal_image(11239);
            images_enemypushupdebris_2569_0_0[4] = get_internal_image(6742);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(13, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14));
        set_direction(pick_random(13, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(50);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemypushupdebris_2569(int x, int y)
{
    return new (Active::pool.create()) EnemyPushupDebris_2569(x, y);
}
static Image* images_enemypushuplaser_2570_0_0[1];
static Direction direction_enemypushuplaser_2570_0_0 = {0, 50, 50, 0, 1, images_enemypushuplaser_2570_0_0, 1};
static Animation anim_enemypushuplaser_2570_0 = {&direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, NULL, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0, &direction_enemypushuplaser_2570_0_0};
static Animation * anim_array_enemypushuplaser_2570[1] = {&anim_enemypushuplaser_2570_0};
static Animations anim_enemypushuplaser_2570 = {1, &anim_array_enemypushuplaser_2570[0]};
static bool anim_enemypushuplaser_2570_initialized;
class EnemyPushupLaser_2570 : public Active
{
public:
    EnemyPushupLaser_2570(int x, int y) : Active(x, y, EnemyPushupLaser_2570_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PushupLaser", 17);
#endif
        this->animations = &anim_enemypushuplaser_2570;
        if (!anim_enemypushuplaser_2570_initialized) {
            anim_enemypushuplaser_2570_initialized = true;
            images_enemypushuplaser_2570_0_0[0] = get_internal_image(5205);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(2, 8, 24));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(60);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemypushuplaser_2570(int x, int y)
{
    return new (Active::pool.create()) EnemyPushupLaser_2570(x, y);
}
static Image* images_enemypushuplaser2_2571_0_0[1];
static Direction direction_enemypushuplaser2_2571_0_0 = {0, 50, 50, 0, 1, images_enemypushuplaser2_2571_0_0, 1};
static Animation anim_enemypushuplaser2_2571_0 = {&direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, NULL, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0, &direction_enemypushuplaser2_2571_0_0};
static Animation * anim_array_enemypushuplaser2_2571[1] = {&anim_enemypushuplaser2_2571_0};
static Animations anim_enemypushuplaser2_2571 = {1, &anim_array_enemypushuplaser2_2571[0]};
static bool anim_enemypushuplaser2_2571_initialized;
class EnemyPushupLaser2_2571 : public Active
{
public:
    EnemyPushupLaser2_2571(int x, int y) : Active(x, y, EnemyPushupLaser2_2571_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PushupLaser 2", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemypushuplaser2_2571;
        if (!anim_enemypushuplaser2_2571_initialized) {
            anim_enemypushuplaser2_2571_initialized = true;
            images_enemypushuplaser2_2571_0_0[0] = get_internal_image(4868);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(2, 0, 16));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(40);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemypushuplaser2_2571(int x, int y)
{
    return new (Active::pool.create()) EnemyPushupLaser2_2571(x, y);
}
static Image* images_enemypushuplaser3_2572_4_0[6];
static Direction direction_enemypushuplaser3_2572_4_0 = {0, 50, 50, 0, 1, images_enemypushuplaser3_2572_4_0, 6};
static Animation anim_enemypushuplaser3_2572_4 = {&direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, NULL, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0, &direction_enemypushuplaser3_2572_4_0};
static Animation * anim_array_enemypushuplaser3_2572[5] = {NULL, NULL, NULL, NULL, &anim_enemypushuplaser3_2572_4};
static Animations anim_enemypushuplaser3_2572 = {5, &anim_array_enemypushuplaser3_2572[0]};
static bool anim_enemypushuplaser3_2572_initialized;
class EnemyPushupLaser3_2572 : public Active
{
public:
    EnemyPushupLaser3_2572(int x, int y) : Active(x, y, EnemyPushupLaser3_2572_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PushupLaser 3", 19);
#endif
        this->animations = &anim_enemypushuplaser3_2572;
        if (!anim_enemypushuplaser3_2572_initialized) {
            anim_enemypushuplaser3_2572_initialized = true;
            images_enemypushuplaser3_2572_4_0[0] = get_internal_image(4869);
            images_enemypushuplaser3_2572_4_0[1] = get_internal_image(6552);
            images_enemypushuplaser3_2572_4_0[2] = get_internal_image(11295);
            images_enemypushuplaser3_2572_4_0[3] = get_internal_image(11297);
            images_enemypushuplaser3_2572_4_0[4] = get_internal_image(11298);
            images_enemypushuplaser3_2572_4_0[5] = get_internal_image(11303);
        }
        collision_box = true;
        auto_rotate = true;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_enemypushuplaser3_2572(int x, int y)
{
    return new (Active::pool.create()) EnemyPushupLaser3_2572(x, y);
}
class TBWall3_2573 : public Backdrop
{
public:
    TBWall3_2573(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10933);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall3_2573(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall3_2573(x, y);
}
class TBWall4_2574 : public Backdrop
{
public:
    TBWall4_2574(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(570);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall4_2574(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall4_2574(x, y);
}
class TBWall1_2575 : public Backdrop
{
public:
    TBWall1_2575(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10960);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall1_2575(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall1_2575(x, y);
}
class TBTunnelBottom1_2576 : public Backdrop
{
public:
    TBTunnelBottom1_2576(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11068);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom1_2576(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom1_2576(x, y);
}
class TBTunnelTop1_2577 : public Backdrop
{
public:
    TBTunnelTop1_2577(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11064);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop1_2577(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop1_2577(x, y);
}
class TBTunnelWall_2578 : public Backdrop
{
public:
    TBTunnelWall_2578(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelWall", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11061);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelwall_2578(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelWall_2578(x, y);
}
class TBTunnelTop6_2579 : public Backdrop
{
public:
    TBTunnelTop6_2579(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11353);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop6_2579(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop6_2579(x, y);
}
class TBWall2_2580 : public Backdrop
{
public:
    TBWall2_2580(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10979);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall2_2580(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall2_2580(x, y);
}
class TBWallEdge1_2581 : public Backdrop
{
public:
    TBWallEdge1_2581(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallEdge 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11083);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalledge1_2581(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallEdge1_2581(x, y);
}
class TBWallLight_2582 : public Backdrop
{
public:
    TBWallLight_2582(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallLight", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11081);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalllight_2582(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallLight_2582(x, y);
}
class TBTunnelTop4_2583 : public Backdrop
{
public:
    TBTunnelTop4_2583(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7588);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop4_2583(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop4_2583(x, y);
}
class TBTunnelBottom4_2584 : public Backdrop
{
public:
    TBTunnelBottom4_2584(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7586);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom4_2584(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom4_2584(x, y);
}
class TBTunnelTop3_2585 : public Backdrop
{
public:
    TBTunnelTop3_2585(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11355);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop3_2585(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop3_2585(x, y);
}
class TBTunnelBottom3_2586 : public Backdrop
{
public:
    TBTunnelBottom3_2586(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11354);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom3_2586(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom3_2586(x, y);
}
class TBTunnelTop2_2587 : public Backdrop
{
public:
    TBTunnelTop2_2587(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11063);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop2_2587(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop2_2587(x, y);
}
class TBTunnelBottom2_2588 : public Backdrop
{
public:
    TBTunnelBottom2_2588(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6868);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom2_2588(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom2_2588(x, y);
}
class TBTunnelTop5_2589 : public Backdrop
{
public:
    TBTunnelTop5_2589(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6114);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop5_2589(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop5_2589(x, y);
}
class TBTunnelBottom5_2590 : public Backdrop
{
public:
    TBTunnelBottom5_2590(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom5", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6860);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom5_2590(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom5_2590(x, y);
}
class TBTunnelBottom6_2591 : public Backdrop
{
public:
    TBTunnelBottom6_2591(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom6", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11352);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom6_2591(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom6_2591(x, y);
}
class TBTunnelTop7_2592 : public Backdrop
{
public:
    TBTunnelTop7_2592(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelTop7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8948);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunneltop7_2592(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelTop7_2592(x, y);
}
class TBTunnelBottom7_2593 : public Backdrop
{
public:
    TBTunnelBottom7_2593(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_TunnelBottom7", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10769);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbtunnelbottom7_2593(int x, int y)
{
    return new (Backdrop::pool.create()) TBTunnelBottom7_2593(x, y);
}
class TBWallEdge2_2594 : public Backdrop
{
public:
    TBWallEdge2_2594(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallEdge 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11082);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalledge2_2594(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallEdge2_2594(x, y);
}
class TBWallLight3_2595 : public Backdrop
{
public:
    TBWallLight3_2595(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallLight 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11102);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalllight3_2595(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallLight3_2595(x, y);
}
class TBWall5_2596 : public Backdrop
{
public:
    TBWall5_2596(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6428);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall5_2596(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall5_2596(x, y);
}
class TBLiftBack_2597 : public Backdrop
{
public:
    TBLiftBack_2597(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_LiftBack", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11060);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbliftback_2597(int x, int y)
{
    return new (Backdrop::pool.create()) TBLiftBack_2597(x, y);
}
class TBWallShadow_2598 : public Backdrop
{
public:
    TBWallShadow_2598(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallShadow", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11018);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwallshadow_2598(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallShadow_2598(x, y);
}
class TBWallEdge4_2599 : public Backdrop
{
public:
    TBWallEdge4_2599(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallEdge 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6573);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalledge4_2599(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallEdge4_2599(x, y);
}
class TBWallEdge3_2600 : public Backdrop
{
public:
    TBWallEdge3_2600(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WallEdge 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6410);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwalledge3_2600(int x, int y)
{
    return new (Backdrop::pool.create()) TBWallEdge3_2600(x, y);
}
class Backdrop36_2601 : public Backdrop
{
public:
    Backdrop36_2601(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 36", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11059);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop36_2601(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop36_2601(x, y);
}
class TBSyntaxPanel1_2602 : public Backdrop
{
public:
    TBSyntaxPanel1_2602(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SyntaxPanel 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6933);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbsyntaxpanel1_2602(int x, int y)
{
    return new (Backdrop::pool.create()) TBSyntaxPanel1_2602(x, y);
}
static Image* images_tbwalllightanim_2603_0_0[12];
static Direction direction_tbwalllightanim_2603_0_0 = {0, 0, 0, 0, -1, images_tbwalllightanim_2603_0_0, 12};
static Animation anim_tbwalllightanim_2603_0 = {&direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, NULL, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0, &direction_tbwalllightanim_2603_0_0};
static Animation * anim_array_tbwalllightanim_2603[1] = {&anim_tbwalllightanim_2603_0};
static Animations anim_tbwalllightanim_2603 = {1, &anim_array_tbwalllightanim_2603[0]};
static bool anim_tbwalllightanim_2603_initialized;
class TBWallLightAnim_2603 : public Active
{
public:
    TBWallLightAnim_2603(int x, int y) : Active(x, y, TBWallLightAnim_2603_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TB_WallLightAnim", 16);
#endif
        this->animations = &anim_tbwalllightanim_2603;
        if (!anim_tbwalllightanim_2603_initialized) {
            anim_tbwalllightanim_2603_initialized = true;
            images_tbwalllightanim_2603_0_0[0] = get_internal_image(11119);
            images_tbwalllightanim_2603_0_0[1] = get_internal_image(11120);
            images_tbwalllightanim_2603_0_0[2] = get_internal_image(11121);
            images_tbwalllightanim_2603_0_0[3] = get_internal_image(11122);
            images_tbwalllightanim_2603_0_0[4] = get_internal_image(11123);
            images_tbwalllightanim_2603_0_0[5] = get_internal_image(11124);
            images_tbwalllightanim_2603_0_0[6] = get_internal_image(11125);
            images_tbwalllightanim_2603_0_0[7] = get_internal_image(11126);
            images_tbwalllightanim_2603_0_0[8] = get_internal_image(11127);
            images_tbwalllightanim_2603_0_0[9] = get_internal_image(11128);
            images_tbwalllightanim_2603_0_0[10] = get_internal_image(11129);
            images_tbwalllightanim_2603_0_0[11] = get_internal_image(11130);
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
FrameObject * create_tbwalllightanim_2603(int x, int y)
{
    return new (Active::pool.create()) TBWallLightAnim_2603(x, y);
}
static Image* images_metaldoorback_2604_0_0[10];
static Direction direction_metaldoorback_2604_0_0 = {0, 0, 0, 0, 1, images_metaldoorback_2604_0_0, 10};
static Animation anim_metaldoorback_2604_0 = {&direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, NULL, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0, &direction_metaldoorback_2604_0_0};
static Animation * anim_array_metaldoorback_2604[1] = {&anim_metaldoorback_2604_0};
static Animations anim_metaldoorback_2604 = {1, &anim_array_metaldoorback_2604[0]};
static bool anim_metaldoorback_2604_initialized;
class MetalDoorBack_2604 : public Active
{
public:
    MetalDoorBack_2604(int x, int y) : Active(x, y, MetalDoorBack_2604_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MetalDoor_back", 14);
#endif
        this->animations = &anim_metaldoorback_2604;
        if (!anim_metaldoorback_2604_initialized) {
            anim_metaldoorback_2604_initialized = true;
            images_metaldoorback_2604_0_0[0] = get_internal_image(13245);
            images_metaldoorback_2604_0_0[1] = get_internal_image(13248);
            images_metaldoorback_2604_0_0[2] = get_internal_image(13245);
            images_metaldoorback_2604_0_0[3] = get_internal_image(13252);
            images_metaldoorback_2604_0_0[4] = get_internal_image(13249);
            images_metaldoorback_2604_0_0[5] = get_internal_image(13250);
            images_metaldoorback_2604_0_0[6] = get_internal_image(13251);
            images_metaldoorback_2604_0_0[7] = get_internal_image(13247);
            images_metaldoorback_2604_0_0[8] = get_internal_image(13246);
            images_metaldoorback_2604_0_0[9] = get_internal_image(13247);
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
FrameObject * create_metaldoorback_2604(int x, int y)
{
    return new (Active::pool.create()) MetalDoorBack_2604(x, y);
}
static Image* images_lockeddoorback_2605_0_0[10];
static Direction direction_lockeddoorback_2605_0_0 = {0, 0, 0, 0, 1, images_lockeddoorback_2605_0_0, 10};
static Animation anim_lockeddoorback_2605_0 = {&direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, NULL, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0, &direction_lockeddoorback_2605_0_0};
static Animation * anim_array_lockeddoorback_2605[1] = {&anim_lockeddoorback_2605_0};
static Animations anim_lockeddoorback_2605 = {1, &anim_array_lockeddoorback_2605[0]};
static bool anim_lockeddoorback_2605_initialized;
class LockedDoorBack_2605 : public Active
{
public:
    LockedDoorBack_2605(int x, int y) : Active(x, y, LockedDoorBack_2605_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedDoor_back", 15);
#endif
        this->animations = &anim_lockeddoorback_2605;
        if (!anim_lockeddoorback_2605_initialized) {
            anim_lockeddoorback_2605_initialized = true;
            images_lockeddoorback_2605_0_0[0] = get_internal_image(13265);
            images_lockeddoorback_2605_0_0[1] = get_internal_image(13269);
            images_lockeddoorback_2605_0_0[2] = get_internal_image(13265);
            images_lockeddoorback_2605_0_0[3] = get_internal_image(13270);
            images_lockeddoorback_2605_0_0[4] = get_internal_image(13249);
            images_lockeddoorback_2605_0_0[5] = get_internal_image(13250);
            images_lockeddoorback_2605_0_0[6] = get_internal_image(13251);
            images_lockeddoorback_2605_0_0[7] = get_internal_image(13247);
            images_lockeddoorback_2605_0_0[8] = get_internal_image(13246);
            images_lockeddoorback_2605_0_0[9] = get_internal_image(13247);
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
FrameObject * create_lockeddoorback_2605(int x, int y)
{
    return new (Active::pool.create()) LockedDoorBack_2605(x, y);
}
static Image* images_lockeddoorterminal_2606_0_0[2];
static Direction direction_lockeddoorterminal_2606_0_0 = {0, 20, 20, 0, -1, images_lockeddoorterminal_2606_0_0, 2};
static Image* images_lockeddoorterminal_2606_0_1[2];
static Direction direction_lockeddoorterminal_2606_0_1 = {1, 20, 20, 0, -1, images_lockeddoorterminal_2606_0_1, 2};
static Animation anim_lockeddoorterminal_2606_0 = {&direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_1, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0, &direction_lockeddoorterminal_2606_0_0};
static Image* images_lockeddoorterminal_2606_7_0[2];
static Direction direction_lockeddoorterminal_2606_7_0 = {0, 20, 20, 0, -1, images_lockeddoorterminal_2606_7_0, 2};
static Animation anim_lockeddoorterminal_2606_7 = {&direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, NULL, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0, &direction_lockeddoorterminal_2606_7_0};
static Animation * anim_array_lockeddoorterminal_2606[8] = {&anim_lockeddoorterminal_2606_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_lockeddoorterminal_2606_7};
static Animations anim_lockeddoorterminal_2606 = {8, &anim_array_lockeddoorterminal_2606[0]};
static bool anim_lockeddoorterminal_2606_initialized;
class LockedDoorTerminal_2606 : public Active
{
public:
    LockedDoorTerminal_2606(int x, int y) : Active(x, y, LockedDoorTerminal_2606_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedDoor_terminal", 19);
#endif
        this->animations = &anim_lockeddoorterminal_2606;
        if (!anim_lockeddoorterminal_2606_initialized) {
            anim_lockeddoorterminal_2606_initialized = true;
            images_lockeddoorterminal_2606_0_0[0] = get_internal_image(8501);
            images_lockeddoorterminal_2606_0_0[1] = get_internal_image(8444);
            images_lockeddoorterminal_2606_0_1[0] = get_internal_image(11311);
            images_lockeddoorterminal_2606_0_1[1] = get_internal_image(11314);
            images_lockeddoorterminal_2606_7_0[0] = get_internal_image(11319);
            images_lockeddoorterminal_2606_7_0[1] = get_internal_image(11321);
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
FrameObject * create_lockeddoorterminal_2606(int x, int y)
{
    return new (Active::pool.create()) LockedDoorTerminal_2606(x, y);
}
static Image* images_levelscrollingplatformmask1_2607_0_0[1];
static Direction direction_levelscrollingplatformmask1_2607_0_0 = {0, 50, 50, 0, 1, images_levelscrollingplatformmask1_2607_0_0, 1};
static Animation anim_levelscrollingplatformmask1_2607_0 = {&direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, NULL, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0, &direction_levelscrollingplatformmask1_2607_0_0};
static Animation * anim_array_levelscrollingplatformmask1_2607[1] = {&anim_levelscrollingplatformmask1_2607_0};
static Animations anim_levelscrollingplatformmask1_2607 = {1, &anim_array_levelscrollingplatformmask1_2607[0]};
static bool anim_levelscrollingplatformmask1_2607_initialized;
class LevelScrollingPlatformMask1_2607 : public Active
{
public:
    LevelScrollingPlatformMask1_2607(int x, int y) : Active(x, y, LevelScrollingPlatformMask1_2607_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformMask 1", 29);
#endif
        this->animations = &anim_levelscrollingplatformmask1_2607;
        if (!anim_levelscrollingplatformmask1_2607_initialized) {
            anim_levelscrollingplatformmask1_2607_initialized = true;
            images_levelscrollingplatformmask1_2607_0_0[0] = get_internal_image(11178);
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
FrameObject * create_levelscrollingplatformmask1_2607(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformMask1_2607(x, y);
}
static Image* images_levelscrollingplatformmask2_2608_0_0[1];
static Direction direction_levelscrollingplatformmask2_2608_0_0 = {0, 50, 50, 0, 1, images_levelscrollingplatformmask2_2608_0_0, 1};
static Animation anim_levelscrollingplatformmask2_2608_0 = {&direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, NULL, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0, &direction_levelscrollingplatformmask2_2608_0_0};
static Animation * anim_array_levelscrollingplatformmask2_2608[1] = {&anim_levelscrollingplatformmask2_2608_0};
static Animations anim_levelscrollingplatformmask2_2608 = {1, &anim_array_levelscrollingplatformmask2_2608[0]};
static bool anim_levelscrollingplatformmask2_2608_initialized;
class LevelScrollingPlatformMask2_2608 : public Active
{
public:
    LevelScrollingPlatformMask2_2608(int x, int y) : Active(x, y, LevelScrollingPlatformMask2_2608_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformMask 2", 29);
#endif
        this->animations = &anim_levelscrollingplatformmask2_2608;
        if (!anim_levelscrollingplatformmask2_2608_initialized) {
            anim_levelscrollingplatformmask2_2608_initialized = true;
            images_levelscrollingplatformmask2_2608_0_0[0] = get_internal_image(2501);
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
FrameObject * create_levelscrollingplatformmask2_2608(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformMask2_2608(x, y);
}
static Image* images_npcsyntaxeye_2609_0_0[2];
static Direction direction_npcsyntaxeye_2609_0_0 = {0, 40, 40, 0, -1, images_npcsyntaxeye_2609_0_0, 2};
static Animation anim_npcsyntaxeye_2609_0 = {&direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, NULL, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0, &direction_npcsyntaxeye_2609_0_0};
static Image* images_npcsyntaxeye_2609_7_0[18];
static Direction direction_npcsyntaxeye_2609_7_0 = {0, 70, 70, 0, 1, images_npcsyntaxeye_2609_7_0, 18};
static Animation anim_npcsyntaxeye_2609_7 = {&direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, NULL, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0, &direction_npcsyntaxeye_2609_7_0};
static Animation * anim_array_npcsyntaxeye_2609[8] = {&anim_npcsyntaxeye_2609_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_npcsyntaxeye_2609_7};
static Animations anim_npcsyntaxeye_2609 = {8, &anim_array_npcsyntaxeye_2609[0]};
static bool anim_npcsyntaxeye_2609_initialized;
class NPCSyntaxEye_2609 : public Active
{
public:
    NPCSyntaxEye_2609(int x, int y) : Active(x, y, NPCSyntaxEye_2609_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_SyntaxEye", 13);
#endif
        set_visible(false);
        this->animations = &anim_npcsyntaxeye_2609;
        if (!anim_npcsyntaxeye_2609_initialized) {
            anim_npcsyntaxeye_2609_initialized = true;
            images_npcsyntaxeye_2609_0_0[0] = get_internal_image(6932);
            images_npcsyntaxeye_2609_0_0[1] = get_internal_image(8623);
            images_npcsyntaxeye_2609_7_0[0] = get_internal_image(6942);
            images_npcsyntaxeye_2609_7_0[1] = get_internal_image(7113);
            images_npcsyntaxeye_2609_7_0[2] = get_internal_image(7179);
            images_npcsyntaxeye_2609_7_0[3] = get_internal_image(7311);
            images_npcsyntaxeye_2609_7_0[4] = get_internal_image(8627);
            images_npcsyntaxeye_2609_7_0[5] = get_internal_image(7179);
            images_npcsyntaxeye_2609_7_0[6] = get_internal_image(7396);
            images_npcsyntaxeye_2609_7_0[7] = get_internal_image(6942);
            images_npcsyntaxeye_2609_7_0[8] = get_internal_image(7113);
            images_npcsyntaxeye_2609_7_0[9] = get_internal_image(7179);
            images_npcsyntaxeye_2609_7_0[10] = get_internal_image(7311);
            images_npcsyntaxeye_2609_7_0[11] = get_internal_image(8627);
            images_npcsyntaxeye_2609_7_0[12] = get_internal_image(7179);
            images_npcsyntaxeye_2609_7_0[13] = get_internal_image(7396);
            images_npcsyntaxeye_2609_7_0[14] = get_internal_image(8633);
            images_npcsyntaxeye_2609_7_0[15] = get_internal_image(6941);
            images_npcsyntaxeye_2609_7_0[16] = get_internal_image(8632);
            images_npcsyntaxeye_2609_7_0[17] = get_internal_image(6941);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(4, 130);
        alterables->values.set(5, 50);
        alterables->values.set(6, 30);
        alterables->values.set(7, 30);
        alterables->values.set(8, 180);
        alterables->values.set(9, 315);
    }
};
FrameObject * create_npcsyntaxeye_2609(int x, int y)
{
    return new (Active::pool.create()) NPCSyntaxEye_2609(x, y);
}
class TBWall8_2610 : public Backdrop
{
public:
    TBWall8_2610(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11256);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall8_2610(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall8_2610(x, y);
}
class TBWall6_2611 : public Backdrop
{
public:
    TBWall6_2611(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8925);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall6_2611(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall6_2611(x, y);
}
