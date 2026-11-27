#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_bosschopperbars_2212_0_0[1];
static Direction direction_bosschopperbars_2212_0_0 = {0, 50, 50, 0, 1, images_bosschopperbars_2212_0_0, 1};
static Image* images_bosschopperbars_2212_0_8[1];
static Direction direction_bosschopperbars_2212_0_8 = {8, 50, 50, 0, 1, images_bosschopperbars_2212_0_8, 1};
static Image* images_bosschopperbars_2212_0_16[1];
static Direction direction_bosschopperbars_2212_0_16 = {16, 50, 50, 0, 1, images_bosschopperbars_2212_0_16, 1};
static Animation anim_bosschopperbars_2212_0 = {&direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, NULL, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, &direction_bosschopperbars_2212_0_8, NULL, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, &direction_bosschopperbars_2212_0_16, NULL, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0, &direction_bosschopperbars_2212_0_0};
static Animation * anim_array_bosschopperbars_2212[1] = {&anim_bosschopperbars_2212_0};
static Animations anim_bosschopperbars_2212 = {1, &anim_array_bosschopperbars_2212[0]};
static bool anim_bosschopperbars_2212_initialized;
class BossChopperBars_2212 : public Active
{
public:
    BossChopperBars_2212(int x, int y) : Active(x, y, BossChopperBars_2212_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperBars", 16);
#endif
        this->animations = &anim_bosschopperbars_2212;
        if (!anim_bosschopperbars_2212_initialized) {
            anim_bosschopperbars_2212_initialized = true;
            images_bosschopperbars_2212_0_0[0] = get_internal_image(12458);
            images_bosschopperbars_2212_0_8[0] = get_internal_image(1331);
            images_bosschopperbars_2212_0_16[0] = get_internal_image(12466);
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
FrameObject * create_bosschopperbars_2212(int x, int y)
{
    return new (Active::pool.create()) BossChopperBars_2212(x, y);
}
static Image* images_bosschopperbars2_2213_0_0[1];
static Direction direction_bosschopperbars2_2213_0_0 = {0, 50, 50, 0, 1, images_bosschopperbars2_2213_0_0, 1};
static Image* images_bosschopperbars2_2213_0_16[1];
static Direction direction_bosschopperbars2_2213_0_16 = {16, 50, 50, 0, 1, images_bosschopperbars2_2213_0_16, 1};
static Animation anim_bosschopperbars2_2213_0 = {&direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, NULL, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, &direction_bosschopperbars2_2213_0_16, NULL, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0, &direction_bosschopperbars2_2213_0_0};
static Animation * anim_array_bosschopperbars2_2213[1] = {&anim_bosschopperbars2_2213_0};
static Animations anim_bosschopperbars2_2213 = {1, &anim_array_bosschopperbars2_2213[0]};
static bool anim_bosschopperbars2_2213_initialized;
class BossChopperBars2_2213 : public Active
{
public:
    BossChopperBars2_2213(int x, int y) : Active(x, y, BossChopperBars2_2213_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperBars 2", 18);
#endif
        this->animations = &anim_bosschopperbars2_2213;
        if (!anim_bosschopperbars2_2213_initialized) {
            anim_bosschopperbars2_2213_initialized = true;
            images_bosschopperbars2_2213_0_0[0] = get_internal_image(12465);
            images_bosschopperbars2_2213_0_16[0] = get_internal_image(12468);
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
FrameObject * create_bosschopperbars2_2213(int x, int y)
{
    return new (Active::pool.create()) BossChopperBars2_2213(x, y);
}
static Image* images_bosschoppertailblade2_2214_0_0[4];
static Direction direction_bosschoppertailblade2_2214_0_0 = {0, 100, 100, 0, -1, images_bosschoppertailblade2_2214_0_0, 4};
static Image* images_bosschoppertailblade2_2214_0_16[4];
static Direction direction_bosschoppertailblade2_2214_0_16 = {16, 100, 100, 0, -1, images_bosschoppertailblade2_2214_0_16, 4};
static Animation anim_bosschoppertailblade2_2214_0 = {&direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, NULL, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, &direction_bosschoppertailblade2_2214_0_16, NULL, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0, &direction_bosschoppertailblade2_2214_0_0};
static Animation * anim_array_bosschoppertailblade2_2214[1] = {&anim_bosschoppertailblade2_2214_0};
static Animations anim_bosschoppertailblade2_2214 = {1, &anim_array_bosschoppertailblade2_2214[0]};
static bool anim_bosschoppertailblade2_2214_initialized;
class BossChopperTailblade2_2214 : public Active
{
public:
    BossChopperTailblade2_2214(int x, int y) : Active(x, y, BossChopperTailblade2_2214_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperTailblade 2", 23);
#endif
        this->animations = &anim_bosschoppertailblade2_2214;
        if (!anim_bosschoppertailblade2_2214_initialized) {
            anim_bosschoppertailblade2_2214_initialized = true;
            images_bosschoppertailblade2_2214_0_0[0] = get_internal_image(1344);
            images_bosschoppertailblade2_2214_0_0[1] = get_internal_image(1345);
            images_bosschoppertailblade2_2214_0_0[2] = get_internal_image(1346);
            images_bosschoppertailblade2_2214_0_0[3] = get_internal_image(1348);
            images_bosschoppertailblade2_2214_0_16[0] = get_internal_image(1353);
            images_bosschoppertailblade2_2214_0_16[1] = get_internal_image(1359);
            images_bosschoppertailblade2_2214_0_16[2] = get_internal_image(1360);
            images_bosschoppertailblade2_2214_0_16[3] = get_internal_image(1361);
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
FrameObject * create_bosschoppertailblade2_2214(int x, int y)
{
    return new (Active::pool.create()) BossChopperTailblade2_2214(x, y);
}
static Image* images_bosschoppertail_2215_0_0[1];
static Direction direction_bosschoppertail_2215_0_0 = {0, 50, 50, 0, 1, images_bosschoppertail_2215_0_0, 1};
static Image* images_bosschoppertail_2215_0_16[1];
static Direction direction_bosschoppertail_2215_0_16 = {16, 50, 50, 0, 1, images_bosschoppertail_2215_0_16, 1};
static Animation anim_bosschoppertail_2215_0 = {&direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, NULL, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, &direction_bosschoppertail_2215_0_16, NULL, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0, &direction_bosschoppertail_2215_0_0};
static Animation * anim_array_bosschoppertail_2215[1] = {&anim_bosschoppertail_2215_0};
static Animations anim_bosschoppertail_2215 = {1, &anim_array_bosschoppertail_2215[0]};
static bool anim_bosschoppertail_2215_initialized;
class BossChopperTail_2215 : public Active
{
public:
    BossChopperTail_2215(int x, int y) : Active(x, y, BossChopperTail_2215_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperTail", 16);
#endif
        this->animations = &anim_bosschoppertail_2215;
        if (!anim_bosschoppertail_2215_initialized) {
            anim_bosschoppertail_2215_initialized = true;
            images_bosschoppertail_2215_0_0[0] = get_internal_image(12467);
            images_bosschoppertail_2215_0_16[0] = get_internal_image(12472);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -32);
        alterables->values.set(2, -24);
    }
};
FrameObject * create_bosschoppertail_2215(int x, int y)
{
    return new (Active::pool.create()) BossChopperTail_2215(x, y);
}
static Image* images_bosschopper_2216_0_0[1];
static Direction direction_bosschopper_2216_0_0 = {0, 50, 50, 0, 1, images_bosschopper_2216_0_0, 1};
static Image* images_bosschopper_2216_0_8[4];
static Direction direction_bosschopper_2216_0_8 = {8, 50, 50, 0, 1, images_bosschopper_2216_0_8, 4};
static Image* images_bosschopper_2216_0_16[1];
static Direction direction_bosschopper_2216_0_16 = {16, 50, 50, 0, 1, images_bosschopper_2216_0_16, 1};
static Animation anim_bosschopper_2216_0 = {&direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, NULL, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, &direction_bosschopper_2216_0_8, NULL, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, &direction_bosschopper_2216_0_16, NULL, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0, &direction_bosschopper_2216_0_0};
static Image* images_bosschopper_2216_8_0[2];
static Direction direction_bosschopper_2216_8_0 = {0, 50, 50, 0, -1, images_bosschopper_2216_8_0, 2};
static Image* images_bosschopper_2216_8_16[2];
static Direction direction_bosschopper_2216_8_16 = {16, 50, 50, 0, -1, images_bosschopper_2216_8_16, 2};
static Animation anim_bosschopper_2216_8 = {&direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, NULL, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, &direction_bosschopper_2216_8_16, NULL, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0, &direction_bosschopper_2216_8_0};
static Image* images_bosschopper_2216_9_0[1];
static Direction direction_bosschopper_2216_9_0 = {0, 50, 50, 0, -1, images_bosschopper_2216_9_0, 1};
static Image* images_bosschopper_2216_9_16[1];
static Direction direction_bosschopper_2216_9_16 = {16, 50, 50, 0, -1, images_bosschopper_2216_9_16, 1};
static Animation anim_bosschopper_2216_9 = {&direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, NULL, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, &direction_bosschopper_2216_9_16, NULL, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0, &direction_bosschopper_2216_9_0};
static Animation * anim_array_bosschopper_2216[10] = {&anim_bosschopper_2216_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosschopper_2216_8, &anim_bosschopper_2216_9};
static Animations anim_bosschopper_2216 = {10, &anim_array_bosschopper_2216[0]};
static bool anim_bosschopper_2216_initialized;
class BossChopper_2216 : public Active
{
public:
    BossChopper_2216(int x, int y) : Active(x, y, BossChopper_2216_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Chopper", 12);
#endif
        this->animations = &anim_bosschopper_2216;
        if (!anim_bosschopper_2216_initialized) {
            anim_bosschopper_2216_initialized = true;
            images_bosschopper_2216_0_0[0] = get_internal_image(12469);
            images_bosschopper_2216_0_8[0] = get_internal_image(1365);
            images_bosschopper_2216_0_8[1] = get_internal_image(1366);
            images_bosschopper_2216_0_8[2] = get_internal_image(1367);
            images_bosschopper_2216_0_8[3] = get_internal_image(1368);
            images_bosschopper_2216_0_16[0] = get_internal_image(12471);
            images_bosschopper_2216_8_0[0] = get_internal_image(1370);
            images_bosschopper_2216_8_0[1] = get_internal_image(1373);
            images_bosschopper_2216_8_16[0] = get_internal_image(1384);
            images_bosschopper_2216_8_16[1] = get_internal_image(1388);
            images_bosschopper_2216_9_0[0] = get_internal_image(11731);
            images_bosschopper_2216_9_16[0] = get_internal_image(14375);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 70);
        alterables->values.set(3, -3);
        alterables->values.set(11, 8);
        alterables->values.set(12, -1);
    }
};
FrameObject * create_bosschopper_2216(int x, int y)
{
    return new (Active::pool.create()) BossChopper_2216(x, y);
}
static Image* images_bosschoppertailblade_2217_0_0[4];
static Direction direction_bosschoppertailblade_2217_0_0 = {0, 100, 100, 0, -1, images_bosschoppertailblade_2217_0_0, 4};
static Image* images_bosschoppertailblade_2217_0_16[4];
static Direction direction_bosschoppertailblade_2217_0_16 = {16, 100, 100, 0, -1, images_bosschoppertailblade_2217_0_16, 4};
static Animation anim_bosschoppertailblade_2217_0 = {&direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, NULL, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, &direction_bosschoppertailblade_2217_0_16, NULL, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0, &direction_bosschoppertailblade_2217_0_0};
static Animation * anim_array_bosschoppertailblade_2217[1] = {&anim_bosschoppertailblade_2217_0};
static Animations anim_bosschoppertailblade_2217 = {1, &anim_array_bosschoppertailblade_2217[0]};
static bool anim_bosschoppertailblade_2217_initialized;
class BossChopperTailblade_2217 : public Active
{
public:
    BossChopperTailblade_2217(int x, int y) : Active(x, y, BossChopperTailblade_2217_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperTailblade", 21);
#endif
        this->animations = &anim_bosschoppertailblade_2217;
        if (!anim_bosschoppertailblade_2217_initialized) {
            anim_bosschoppertailblade_2217_initialized = true;
            images_bosschoppertailblade_2217_0_0[0] = get_internal_image(1424);
            images_bosschoppertailblade_2217_0_0[1] = get_internal_image(1425);
            images_bosschoppertailblade_2217_0_0[2] = get_internal_image(1426);
            images_bosschoppertailblade_2217_0_0[3] = get_internal_image(1427);
            images_bosschoppertailblade_2217_0_16[0] = get_internal_image(1428);
            images_bosschoppertailblade_2217_0_16[1] = get_internal_image(1429);
            images_bosschoppertailblade_2217_0_16[2] = get_internal_image(1437);
            images_bosschoppertailblade_2217_0_16[3] = get_internal_image(1442);
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
FrameObject * create_bosschoppertailblade_2217(int x, int y)
{
    return new (Active::pool.create()) BossChopperTailblade_2217(x, y);
}
static Image* images_bosschopperblade_2218_0_0[4];
static Direction direction_bosschopperblade_2218_0_0 = {0, 100, 100, 0, -1, images_bosschopperblade_2218_0_0, 4};
static Image* images_bosschopperblade_2218_0_8[4];
static Direction direction_bosschopperblade_2218_0_8 = {8, 50, 50, 0, 1, images_bosschopperblade_2218_0_8, 4};
static Image* images_bosschopperblade_2218_0_16[4];
static Direction direction_bosschopperblade_2218_0_16 = {16, 100, 100, 0, -1, images_bosschopperblade_2218_0_16, 4};
static Animation anim_bosschopperblade_2218_0 = {&direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, NULL, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, &direction_bosschopperblade_2218_0_8, NULL, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, &direction_bosschopperblade_2218_0_16, NULL, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0, &direction_bosschopperblade_2218_0_0};
static Animation * anim_array_bosschopperblade_2218[1] = {&anim_bosschopperblade_2218_0};
static Animations anim_bosschopperblade_2218 = {1, &anim_array_bosschopperblade_2218[0]};
static bool anim_bosschopperblade_2218_initialized;
class BossChopperBlade_2218 : public Active
{
public:
    BossChopperBlade_2218(int x, int y) : Active(x, y, BossChopperBlade_2218_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChopperBlade", 17);
#endif
        this->animations = &anim_bosschopperblade_2218;
        if (!anim_bosschopperblade_2218_initialized) {
            anim_bosschopperblade_2218_initialized = true;
            images_bosschopperblade_2218_0_0[0] = get_internal_image(1389);
            images_bosschopperblade_2218_0_0[1] = get_internal_image(1390);
            images_bosschopperblade_2218_0_0[2] = get_internal_image(1392);
            images_bosschopperblade_2218_0_0[3] = get_internal_image(1393);
            images_bosschopperblade_2218_0_8[0] = get_internal_image(1402);
            images_bosschopperblade_2218_0_8[1] = get_internal_image(1406);
            images_bosschopperblade_2218_0_8[2] = get_internal_image(1407);
            images_bosschopperblade_2218_0_8[3] = get_internal_image(1419);
            images_bosschopperblade_2218_0_16[0] = get_internal_image(1420);
            images_bosschopperblade_2218_0_16[1] = get_internal_image(1421);
            images_bosschopperblade_2218_0_16[2] = get_internal_image(1422);
            images_bosschopperblade_2218_0_16[3] = get_internal_image(1423);
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
FrameObject * create_bosschopperblade_2218(int x, int y)
{
    return new (Active::pool.create()) BossChopperBlade_2218(x, y);
}
static Image* images_playerassistcopilot_2219_0_0[5];
static Direction direction_playerassistcopilot_2219_0_0 = {0, 50, 50, 0, -1, images_playerassistcopilot_2219_0_0, 5};
static Image* images_playerassistcopilot_2219_0_2[5];
static Direction direction_playerassistcopilot_2219_0_2 = {2, 50, 50, 0, -1, images_playerassistcopilot_2219_0_2, 5};
static Image* images_playerassistcopilot_2219_0_3[5];
static Direction direction_playerassistcopilot_2219_0_3 = {3, 50, 50, 0, -1, images_playerassistcopilot_2219_0_3, 5};
static Image* images_playerassistcopilot_2219_0_4[5];
static Direction direction_playerassistcopilot_2219_0_4 = {4, 50, 50, 0, -1, images_playerassistcopilot_2219_0_4, 5};
static Image* images_playerassistcopilot_2219_0_5[1];
static Direction direction_playerassistcopilot_2219_0_5 = {5, 50, 50, 0, 1, images_playerassistcopilot_2219_0_5, 1};
static Image* images_playerassistcopilot_2219_0_20[5];
static Direction direction_playerassistcopilot_2219_0_20 = {20, 50, 50, 0, -1, images_playerassistcopilot_2219_0_20, 5};
static Image* images_playerassistcopilot_2219_0_31[1];
static Direction direction_playerassistcopilot_2219_0_31 = {31, 50, 50, 0, 1, images_playerassistcopilot_2219_0_31, 1};
static Animation anim_playerassistcopilot_2219_0 = {&direction_playerassistcopilot_2219_0_0, NULL, &direction_playerassistcopilot_2219_0_2, &direction_playerassistcopilot_2219_0_3, &direction_playerassistcopilot_2219_0_4, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_5, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_20, &direction_playerassistcopilot_2219_0_31, &direction_playerassistcopilot_2219_0_31, &direction_playerassistcopilot_2219_0_31, &direction_playerassistcopilot_2219_0_31, &direction_playerassistcopilot_2219_0_31, &direction_playerassistcopilot_2219_0_31};
static Image* images_playerassistcopilot_2219_10_0[3];
static Direction direction_playerassistcopilot_2219_10_0 = {0, 0, 0, 0, -1, images_playerassistcopilot_2219_10_0, 3};
static Image* images_playerassistcopilot_2219_10_2[3];
static Direction direction_playerassistcopilot_2219_10_2 = {2, 0, 0, 0, -1, images_playerassistcopilot_2219_10_2, 3};
static Image* images_playerassistcopilot_2219_10_3[3];
static Direction direction_playerassistcopilot_2219_10_3 = {3, 0, 0, 0, -1, images_playerassistcopilot_2219_10_3, 3};
static Image* images_playerassistcopilot_2219_10_4[3];
static Direction direction_playerassistcopilot_2219_10_4 = {4, 0, 0, 0, -1, images_playerassistcopilot_2219_10_4, 3};
static Image* images_playerassistcopilot_2219_10_5[1];
static Direction direction_playerassistcopilot_2219_10_5 = {5, 50, 50, 0, 1, images_playerassistcopilot_2219_10_5, 1};
static Animation anim_playerassistcopilot_2219_10 = {&direction_playerassistcopilot_2219_10_0, NULL, &direction_playerassistcopilot_2219_10_2, &direction_playerassistcopilot_2219_10_3, &direction_playerassistcopilot_2219_10_4, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_5, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0, &direction_playerassistcopilot_2219_10_0};
static Animation * anim_array_playerassistcopilot_2219[11] = {&anim_playerassistcopilot_2219_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerassistcopilot_2219_10};
static Animations anim_playerassistcopilot_2219 = {11, &anim_array_playerassistcopilot_2219[0]};
static bool anim_playerassistcopilot_2219_initialized;
class PlayerAssistCopilot_2219 : public Active
{
public:
    PlayerAssistCopilot_2219(int x, int y) : Active(x, y, PlayerAssistCopilot_2219_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Assist_Copilot", 21);
#endif
        set_visible(false);
        this->animations = &anim_playerassistcopilot_2219;
        if (!anim_playerassistcopilot_2219_initialized) {
            anim_playerassistcopilot_2219_initialized = true;
            images_playerassistcopilot_2219_0_0[0] = get_internal_image(1503);
            images_playerassistcopilot_2219_0_0[1] = get_internal_image(1530);
            images_playerassistcopilot_2219_0_0[2] = get_internal_image(1548);
            images_playerassistcopilot_2219_0_0[3] = get_internal_image(1551);
            images_playerassistcopilot_2219_0_0[4] = get_internal_image(1554);
            images_playerassistcopilot_2219_0_2[0] = get_internal_image(1477);
            images_playerassistcopilot_2219_0_2[1] = get_internal_image(1472);
            images_playerassistcopilot_2219_0_2[2] = get_internal_image(1496);
            images_playerassistcopilot_2219_0_2[3] = get_internal_image(1501);
            images_playerassistcopilot_2219_0_2[4] = get_internal_image(1502);
            images_playerassistcopilot_2219_0_3[0] = get_internal_image(1477);
            images_playerassistcopilot_2219_0_3[1] = get_internal_image(1472);
            images_playerassistcopilot_2219_0_3[2] = get_internal_image(1496);
            images_playerassistcopilot_2219_0_3[3] = get_internal_image(1501);
            images_playerassistcopilot_2219_0_3[4] = get_internal_image(1502);
            images_playerassistcopilot_2219_0_4[0] = get_internal_image(852);
            images_playerassistcopilot_2219_0_4[1] = get_internal_image(848);
            images_playerassistcopilot_2219_0_4[2] = get_internal_image(851);
            images_playerassistcopilot_2219_0_4[3] = get_internal_image(847);
            images_playerassistcopilot_2219_0_4[4] = get_internal_image(849);
            images_playerassistcopilot_2219_0_5[0] = get_internal_image(14618);
            images_playerassistcopilot_2219_0_20[0] = get_internal_image(2719);
            images_playerassistcopilot_2219_0_20[1] = get_internal_image(3774);
            images_playerassistcopilot_2219_0_20[2] = get_internal_image(3778);
            images_playerassistcopilot_2219_0_20[3] = get_internal_image(3791);
            images_playerassistcopilot_2219_0_20[4] = get_internal_image(3792);
            images_playerassistcopilot_2219_0_31[0] = get_internal_image(1475);
            images_playerassistcopilot_2219_10_0[0] = get_internal_image(6237);
            images_playerassistcopilot_2219_10_0[1] = get_internal_image(13682);
            images_playerassistcopilot_2219_10_0[2] = get_internal_image(13689);
            images_playerassistcopilot_2219_10_2[0] = get_internal_image(1477);
            images_playerassistcopilot_2219_10_2[1] = get_internal_image(13690);
            images_playerassistcopilot_2219_10_2[2] = get_internal_image(13715);
            images_playerassistcopilot_2219_10_3[0] = get_internal_image(1477);
            images_playerassistcopilot_2219_10_3[1] = get_internal_image(13690);
            images_playerassistcopilot_2219_10_3[2] = get_internal_image(13715);
            images_playerassistcopilot_2219_10_4[0] = get_internal_image(13630);
            images_playerassistcopilot_2219_10_4[1] = get_internal_image(13680);
            images_playerassistcopilot_2219_10_4[2] = get_internal_image(13678);
            images_playerassistcopilot_2219_10_5[0] = get_internal_image(14618);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_586_player_assist_copilot.value;
        if (!global_data_586_player_assist_copilot.init) {
            global_data_586_player_assist_copilot.init = true;
        }
    }
};
FrameObject * create_playerassistcopilot_2219(int x, int y)
{
    return new (Active::pool.create()) PlayerAssistCopilot_2219(x, y);
}
static Image* images_gimmickfan_2220_0_0[6];
static Direction direction_gimmickfan_2220_0_0 = {0, 100, 100, 0, -1, images_gimmickfan_2220_0_0, 6};
static Animation anim_gimmickfan_2220_0 = {&direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, NULL, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0, &direction_gimmickfan_2220_0_0};
static Animation * anim_array_gimmickfan_2220[1] = {&anim_gimmickfan_2220_0};
static Animations anim_gimmickfan_2220 = {1, &anim_array_gimmickfan_2220[0]};
static bool anim_gimmickfan_2220_initialized;
class GimmickFan_2220 : public Active
{
public:
    GimmickFan_2220(int x, int y) : Active(x, y, GimmickFan_2220_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Fan", 11);
#endif
        this->animations = &anim_gimmickfan_2220;
        if (!anim_gimmickfan_2220_initialized) {
            anim_gimmickfan_2220_initialized = true;
            images_gimmickfan_2220_0_0[0] = get_internal_image(10636);
            images_gimmickfan_2220_0_0[1] = get_internal_image(10628);
            images_gimmickfan_2220_0_0[2] = get_internal_image(10632);
            images_gimmickfan_2220_0_0[3] = get_internal_image(10633);
            images_gimmickfan_2220_0_0[4] = get_internal_image(10634);
            images_gimmickfan_2220_0_0[5] = get_internal_image(10635);
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
FrameObject * create_gimmickfan_2220(int x, int y)
{
    return new (Active::pool.create()) GimmickFan_2220(x, y);
}
static Image* images_gimmickfanside_2221_0_0[6];
static Direction direction_gimmickfanside_2221_0_0 = {0, 100, 100, 0, -1, images_gimmickfanside_2221_0_0, 6};
static Animation anim_gimmickfanside_2221_0 = {&direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, NULL, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0, &direction_gimmickfanside_2221_0_0};
static Animation * anim_array_gimmickfanside_2221[1] = {&anim_gimmickfanside_2221_0};
static Animations anim_gimmickfanside_2221 = {1, &anim_array_gimmickfanside_2221[0]};
static bool anim_gimmickfanside_2221_initialized;
class GimmickFanSide_2221 : public Active
{
public:
    GimmickFanSide_2221(int x, int y) : Active(x, y, GimmickFanSide_2221_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FanSide", 15);
#endif
        this->animations = &anim_gimmickfanside_2221;
        if (!anim_gimmickfanside_2221_initialized) {
            anim_gimmickfanside_2221_initialized = true;
            images_gimmickfanside_2221_0_0[0] = get_internal_image(1162);
            images_gimmickfanside_2221_0_0[1] = get_internal_image(1226);
            images_gimmickfanside_2221_0_0[2] = get_internal_image(1228);
            images_gimmickfanside_2221_0_0[3] = get_internal_image(1309);
            images_gimmickfanside_2221_0_0[4] = get_internal_image(1972);
            images_gimmickfanside_2221_0_0[5] = get_internal_image(1974);
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
FrameObject * create_gimmickfanside_2221(int x, int y)
{
    return new (Active::pool.create()) GimmickFanSide_2221(x, y);
}
static Image* images_enemydrone_2222_0_0[16];
static Direction direction_enemydrone_2222_0_0 = {0, 0, 0, 0, -1, images_enemydrone_2222_0_0, 16};
static Image* images_enemydrone_2222_0_16[16];
static Direction direction_enemydrone_2222_0_16 = {16, 0, 0, 0, -1, images_enemydrone_2222_0_16, 16};
static Animation anim_enemydrone_2222_0 = {&direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, NULL, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, &direction_enemydrone_2222_0_16, NULL, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0, &direction_enemydrone_2222_0_0};
static Image* images_enemydrone_2222_7_0[1];
static Direction direction_enemydrone_2222_7_0 = {0, 50, 50, 0, -1, images_enemydrone_2222_7_0, 1};
static Image* images_enemydrone_2222_7_16[1];
static Direction direction_enemydrone_2222_7_16 = {16, 50, 50, 0, -1, images_enemydrone_2222_7_16, 1};
static Animation anim_enemydrone_2222_7 = {&direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, NULL, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, &direction_enemydrone_2222_7_16, NULL, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0, &direction_enemydrone_2222_7_0};
static Image* images_enemydrone_2222_8_0[1];
static Direction direction_enemydrone_2222_8_0 = {0, 50, 50, 0, -1, images_enemydrone_2222_8_0, 1};
static Image* images_enemydrone_2222_8_16[1];
static Direction direction_enemydrone_2222_8_16 = {16, 50, 50, 0, -1, images_enemydrone_2222_8_16, 1};
static Animation anim_enemydrone_2222_8 = {&direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, NULL, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, &direction_enemydrone_2222_8_16, NULL, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0, &direction_enemydrone_2222_8_0};
static Animation * anim_array_enemydrone_2222[9] = {&anim_enemydrone_2222_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemydrone_2222_7, &anim_enemydrone_2222_8};
static Animations anim_enemydrone_2222 = {9, &anim_array_enemydrone_2222[0]};
static bool anim_enemydrone_2222_initialized;
class EnemyDrone_2222 : public Active
{
public:
    EnemyDrone_2222(int x, int y) : Active(x, y, EnemyDrone_2222_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Drone", 11);
#endif
        this->animations = &anim_enemydrone_2222;
        if (!anim_enemydrone_2222_initialized) {
            anim_enemydrone_2222_initialized = true;
            images_enemydrone_2222_0_0[0] = get_internal_image(9146);
            images_enemydrone_2222_0_0[1] = get_internal_image(9148);
            images_enemydrone_2222_0_0[2] = get_internal_image(9151);
            images_enemydrone_2222_0_0[3] = get_internal_image(9150);
            images_enemydrone_2222_0_0[4] = get_internal_image(9149);
            images_enemydrone_2222_0_0[5] = get_internal_image(9152);
            images_enemydrone_2222_0_0[6] = get_internal_image(9147);
            images_enemydrone_2222_0_0[7] = get_internal_image(9153);
            images_enemydrone_2222_0_0[8] = get_internal_image(9154);
            images_enemydrone_2222_0_0[9] = get_internal_image(9156);
            images_enemydrone_2222_0_0[10] = get_internal_image(9155);
            images_enemydrone_2222_0_0[11] = get_internal_image(9157);
            images_enemydrone_2222_0_0[12] = get_internal_image(9159);
            images_enemydrone_2222_0_0[13] = get_internal_image(9160);
            images_enemydrone_2222_0_0[14] = get_internal_image(9161);
            images_enemydrone_2222_0_0[15] = get_internal_image(9158);
            images_enemydrone_2222_0_16[0] = get_internal_image(9162);
            images_enemydrone_2222_0_16[1] = get_internal_image(9163);
            images_enemydrone_2222_0_16[2] = get_internal_image(9164);
            images_enemydrone_2222_0_16[3] = get_internal_image(9165);
            images_enemydrone_2222_0_16[4] = get_internal_image(9166);
            images_enemydrone_2222_0_16[5] = get_internal_image(9167);
            images_enemydrone_2222_0_16[6] = get_internal_image(9168);
            images_enemydrone_2222_0_16[7] = get_internal_image(9169);
            images_enemydrone_2222_0_16[8] = get_internal_image(9170);
            images_enemydrone_2222_0_16[9] = get_internal_image(9171);
            images_enemydrone_2222_0_16[10] = get_internal_image(9172);
            images_enemydrone_2222_0_16[11] = get_internal_image(9173);
            images_enemydrone_2222_0_16[12] = get_internal_image(9174);
            images_enemydrone_2222_0_16[13] = get_internal_image(9175);
            images_enemydrone_2222_0_16[14] = get_internal_image(9176);
            images_enemydrone_2222_0_16[15] = get_internal_image(9177);
            images_enemydrone_2222_7_0[0] = get_internal_image(9146);
            images_enemydrone_2222_7_16[0] = get_internal_image(9162);
            images_enemydrone_2222_8_0[0] = get_internal_image(9006);
            images_enemydrone_2222_8_16[0] = get_internal_image(9009);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(8, 1);
    }
};
FrameObject * create_enemydrone_2222(int x, int y)
{
    return new (Active::pool.create()) EnemyDrone_2222(x, y);
}
static Image* images_sbloop5_2223_0_0[1];
static Direction direction_sbloop5_2223_0_0 = {0, 50, 50, 0, 1, images_sbloop5_2223_0_0, 1};
static Animation anim_sbloop5_2223_0 = {&direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, NULL, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0, &direction_sbloop5_2223_0_0};
static Animation * anim_array_sbloop5_2223[1] = {&anim_sbloop5_2223_0};
static Animations anim_sbloop5_2223 = {1, &anim_array_sbloop5_2223[0]};
static bool anim_sbloop5_2223_initialized;
class SBLoop5_2223 : public Active
{
public:
    SBLoop5_2223(int x, int y) : Active(x, y, SBLoop5_2223_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("SB_Loop 5", 9);
#endif
        this->animations = &anim_sbloop5_2223;
        if (!anim_sbloop5_2223_initialized) {
            anim_sbloop5_2223_initialized = true;
            images_sbloop5_2223_0_0[0] = get_internal_image(1758);
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
FrameObject * create_sbloop5_2223(int x, int y)
{
    return new (Active::pool.create()) SBLoop5_2223(x, y);
}
static Image* images_sbloop4_2224_0_0[1];
static Direction direction_sbloop4_2224_0_0 = {0, 50, 50, 0, 1, images_sbloop4_2224_0_0, 1};
static Animation anim_sbloop4_2224_0 = {&direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, NULL, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0, &direction_sbloop4_2224_0_0};
static Animation * anim_array_sbloop4_2224[1] = {&anim_sbloop4_2224_0};
static Animations anim_sbloop4_2224 = {1, &anim_array_sbloop4_2224[0]};
static bool anim_sbloop4_2224_initialized;
class SBLoop4_2224 : public Active
{
public:
    SBLoop4_2224(int x, int y) : Active(x, y, SBLoop4_2224_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("SB_Loop 4", 9);
#endif
        this->animations = &anim_sbloop4_2224;
        if (!anim_sbloop4_2224_initialized) {
            anim_sbloop4_2224_initialized = true;
            images_sbloop4_2224_0_0[0] = get_internal_image(4849);
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
FrameObject * create_sbloop4_2224(int x, int y)
{
    return new (Active::pool.create()) SBLoop4_2224(x, y);
}
static Image* images_sbloop6_2225_0_0[1];
static Direction direction_sbloop6_2225_0_0 = {0, 50, 50, 0, 1, images_sbloop6_2225_0_0, 1};
static Animation anim_sbloop6_2225_0 = {&direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, NULL, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0, &direction_sbloop6_2225_0_0};
static Animation * anim_array_sbloop6_2225[1] = {&anim_sbloop6_2225_0};
static Animations anim_sbloop6_2225 = {1, &anim_array_sbloop6_2225[0]};
static bool anim_sbloop6_2225_initialized;
class SBLoop6_2225 : public Active
{
public:
    SBLoop6_2225(int x, int y) : Active(x, y, SBLoop6_2225_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("SB_Loop 6", 9);
#endif
        this->animations = &anim_sbloop6_2225;
        if (!anim_sbloop6_2225_initialized) {
            anim_sbloop6_2225_initialized = true;
            images_sbloop6_2225_0_0[0] = get_internal_image(4865);
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
FrameObject * create_sbloop6_2225(int x, int y)
{
    return new (Active::pool.create()) SBLoop6_2225(x, y);
}
static Image* images_hazardfireup_2226_0_0[5];
static Direction direction_hazardfireup_2226_0_0 = {0, 50, 50, 0, -1, images_hazardfireup_2226_0_0, 5};
static Image* images_hazardfireup_2226_0_1[3];
static Direction direction_hazardfireup_2226_0_1 = {1, 50, 50, 0, -1, images_hazardfireup_2226_0_1, 3};
static Animation anim_hazardfireup_2226_0 = {&direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_1, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0, &direction_hazardfireup_2226_0_0};
static Animation * anim_array_hazardfireup_2226[1] = {&anim_hazardfireup_2226_0};
static Animations anim_hazardfireup_2226 = {1, &anim_array_hazardfireup_2226[0]};
static bool anim_hazardfireup_2226_initialized;
class HazardFireUp_2226 : public Active
{
public:
    HazardFireUp_2226(int x, int y) : Active(x, y, HazardFireUp_2226_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_FireUp", 13);
#endif
        this->animations = &anim_hazardfireup_2226;
        if (!anim_hazardfireup_2226_initialized) {
            anim_hazardfireup_2226_initialized = true;
            images_hazardfireup_2226_0_0[0] = get_internal_image(5517);
            images_hazardfireup_2226_0_0[1] = get_internal_image(5515);
            images_hazardfireup_2226_0_0[2] = get_internal_image(5508);
            images_hazardfireup_2226_0_0[3] = get_internal_image(5516);
            images_hazardfireup_2226_0_0[4] = get_internal_image(5438);
            images_hazardfireup_2226_0_1[0] = get_internal_image(5506);
            images_hazardfireup_2226_0_1[1] = get_internal_image(5507);
            images_hazardfireup_2226_0_1[2] = get_internal_image(5503);
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
FrameObject * create_hazardfireup_2226(int x, int y)
{
    return new (Active::pool.create()) HazardFireUp_2226(x, y);
}
static Image* images_hazardfiredown_2227_0_0[5];
static Direction direction_hazardfiredown_2227_0_0 = {0, 50, 50, 0, -1, images_hazardfiredown_2227_0_0, 5};
static Image* images_hazardfiredown_2227_0_1[3];
static Direction direction_hazardfiredown_2227_0_1 = {1, 50, 50, 0, -1, images_hazardfiredown_2227_0_1, 3};
static Animation anim_hazardfiredown_2227_0 = {&direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_1, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0, &direction_hazardfiredown_2227_0_0};
static Animation * anim_array_hazardfiredown_2227[1] = {&anim_hazardfiredown_2227_0};
static Animations anim_hazardfiredown_2227 = {1, &anim_array_hazardfiredown_2227[0]};
static bool anim_hazardfiredown_2227_initialized;
class HazardFireDown_2227 : public Active
{
public:
    HazardFireDown_2227(int x, int y) : Active(x, y, HazardFireDown_2227_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_FireDown", 15);
#endif
        this->animations = &anim_hazardfiredown_2227;
        if (!anim_hazardfiredown_2227_initialized) {
            anim_hazardfiredown_2227_initialized = true;
            images_hazardfiredown_2227_0_0[0] = get_internal_image(5518);
            images_hazardfiredown_2227_0_0[1] = get_internal_image(5519);
            images_hazardfiredown_2227_0_0[2] = get_internal_image(5520);
            images_hazardfiredown_2227_0_0[3] = get_internal_image(5521);
            images_hazardfiredown_2227_0_0[4] = get_internal_image(5405);
            images_hazardfiredown_2227_0_1[0] = get_internal_image(5522);
            images_hazardfiredown_2227_0_1[1] = get_internal_image(5701);
            images_hazardfiredown_2227_0_1[2] = get_internal_image(5716);
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
FrameObject * create_hazardfiredown_2227(int x, int y)
{
    return new (Active::pool.create()) HazardFireDown_2227(x, y);
}
static Image* images_hazardfireright_2228_0_0[5];
static Direction direction_hazardfireright_2228_0_0 = {0, 50, 50, 0, -1, images_hazardfireright_2228_0_0, 5};
static Image* images_hazardfireright_2228_0_1[3];
static Direction direction_hazardfireright_2228_0_1 = {1, 50, 50, 0, -1, images_hazardfireright_2228_0_1, 3};
static Animation anim_hazardfireright_2228_0 = {&direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_1, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0, &direction_hazardfireright_2228_0_0};
static Animation * anim_array_hazardfireright_2228[1] = {&anim_hazardfireright_2228_0};
static Animations anim_hazardfireright_2228 = {1, &anim_array_hazardfireright_2228[0]};
static bool anim_hazardfireright_2228_initialized;
class HazardFireRight_2228 : public Active
{
public:
    HazardFireRight_2228(int x, int y) : Active(x, y, HazardFireRight_2228_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_FireRight", 16);
#endif
        this->animations = &anim_hazardfireright_2228;
        if (!anim_hazardfireright_2228_initialized) {
            anim_hazardfireright_2228_initialized = true;
            images_hazardfireright_2228_0_0[0] = get_internal_image(5815);
            images_hazardfireright_2228_0_0[1] = get_internal_image(5719);
            images_hazardfireright_2228_0_0[2] = get_internal_image(5722);
            images_hazardfireright_2228_0_0[3] = get_internal_image(5737);
            images_hazardfireright_2228_0_0[4] = get_internal_image(5837);
            images_hazardfireright_2228_0_1[0] = get_internal_image(5743);
            images_hazardfireright_2228_0_1[1] = get_internal_image(5744);
            images_hazardfireright_2228_0_1[2] = get_internal_image(5800);
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
FrameObject * create_hazardfireright_2228(int x, int y)
{
    return new (Active::pool.create()) HazardFireRight_2228(x, y);
}
static Image* images_hazardfireleft_2229_0_0[5];
static Direction direction_hazardfireleft_2229_0_0 = {0, 50, 50, 0, -1, images_hazardfireleft_2229_0_0, 5};
static Image* images_hazardfireleft_2229_0_1[3];
static Direction direction_hazardfireleft_2229_0_1 = {1, 50, 50, 0, -1, images_hazardfireleft_2229_0_1, 3};
static Animation anim_hazardfireleft_2229_0 = {&direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_1, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0, &direction_hazardfireleft_2229_0_0};
static Animation * anim_array_hazardfireleft_2229[1] = {&anim_hazardfireleft_2229_0};
static Animations anim_hazardfireleft_2229 = {1, &anim_array_hazardfireleft_2229[0]};
static bool anim_hazardfireleft_2229_initialized;
class HazardFireLeft_2229 : public Active
{
public:
    HazardFireLeft_2229(int x, int y) : Active(x, y, HazardFireLeft_2229_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_FireLeft", 15);
#endif
        this->animations = &anim_hazardfireleft_2229;
        if (!anim_hazardfireleft_2229_initialized) {
            anim_hazardfireleft_2229_initialized = true;
            images_hazardfireleft_2229_0_0[0] = get_internal_image(5448);
            images_hazardfireleft_2229_0_0[1] = get_internal_image(5806);
            images_hazardfireleft_2229_0_0[2] = get_internal_image(5817);
            images_hazardfireleft_2229_0_0[3] = get_internal_image(5818);
            images_hazardfireleft_2229_0_0[4] = get_internal_image(5864);
            images_hazardfireleft_2229_0_1[0] = get_internal_image(5819);
            images_hazardfireleft_2229_0_1[1] = get_internal_image(5822);
            images_hazardfireleft_2229_0_1[2] = get_internal_image(5823);
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
FrameObject * create_hazardfireleft_2229(int x, int y)
{
    return new (Active::pool.create()) HazardFireLeft_2229(x, y);
}
static Image* images_guicompass_2230_0_0[1];
static Direction direction_guicompass_2230_0_0 = {0, 50, 50, 0, 1, images_guicompass_2230_0_0, 1};
static Animation anim_guicompass_2230_0 = {&direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, NULL, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0, &direction_guicompass_2230_0_0};
static Animation * anim_array_guicompass_2230[1] = {&anim_guicompass_2230_0};
static Animations anim_guicompass_2230 = {1, &anim_array_guicompass_2230[0]};
static bool anim_guicompass_2230_initialized;
class GUICompass_2230 : public Active
{
public:
    GUICompass_2230(int x, int y) : Active(x, y, GUICompass_2230_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Compass", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_guicompass_2230;
        if (!anim_guicompass_2230_initialized) {
            anim_guicompass_2230_initialized = true;
            images_guicompass_2230_0_0[0] = get_internal_image(6812);
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
FrameObject * create_guicompass_2230(int x, int y)
{
    return new (Active::pool.create()) GUICompass_2230(x, y);
}
static Image* images_bossspademask_2231_0_0[1];
static Direction direction_bossspademask_2231_0_0 = {0, 50, 50, 0, 1, images_bossspademask_2231_0_0, 1};
static Animation anim_bossspademask_2231_0 = {&direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, NULL, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0, &direction_bossspademask_2231_0_0};
static Animation * anim_array_bossspademask_2231[1] = {&anim_bossspademask_2231_0};
static Animations anim_bossspademask_2231 = {1, &anim_array_bossspademask_2231[0]};
static bool anim_bossspademask_2231_initialized;
class BossSpadeMask_2231 : public Active
{
public:
    BossSpadeMask_2231(int x, int y) : Active(x, y, BossSpadeMask_2231_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SpadeMask", 14);
#endif
        set_visible(false);
        this->animations = &anim_bossspademask_2231;
        if (!anim_bossspademask_2231_initialized) {
            anim_bossspademask_2231_initialized = true;
            images_bossspademask_2231_0_0[0] = get_internal_image(6736);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, -1);
        alterables->values.set(7, -1);
        alterables->values.set(12, 3);
    }
};
FrameObject * create_bossspademask_2231(int x, int y)
{
    return new (Active::pool.create()) BossSpadeMask_2231(x, y);
}
static Image* images_bossspadehitbox_2232_0_0[1];
static Direction direction_bossspadehitbox_2232_0_0 = {0, 50, 50, 0, 1, images_bossspadehitbox_2232_0_0, 1};
static Animation anim_bossspadehitbox_2232_0 = {&direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, NULL, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0, &direction_bossspadehitbox_2232_0_0};
static Animation * anim_array_bossspadehitbox_2232[1] = {&anim_bossspadehitbox_2232_0};
static Animations anim_bossspadehitbox_2232 = {1, &anim_array_bossspadehitbox_2232[0]};
static bool anim_bossspadehitbox_2232_initialized;
class BossSpadeHitbox_2232 : public Active
{
public:
    BossSpadeHitbox_2232(int x, int y) : Active(x, y, BossSpadeHitbox_2232_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_SpadeHitbox", 16);
#endif
        set_visible(false);
        this->animations = &anim_bossspadehitbox_2232;
        if (!anim_bossspadehitbox_2232_initialized) {
            anim_bossspadehitbox_2232_initialized = true;
            images_bossspadehitbox_2232_0_0[0] = get_internal_image(6986);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 60);
        alterables->values.set(3, 3);
    }
};
FrameObject * create_bossspadehitbox_2232(int x, int y)
{
    return new (Active::pool.create()) BossSpadeHitbox_2232(x, y);
}
class SBInnerCurve2_2233 : public Backdrop
{
public:
    SBInnerCurve2_2233(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_InnerCurve 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4959);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbinnercurve2_2233(int x, int y)
{
    return new (Backdrop::pool.create()) SBInnerCurve2_2233(x, y);
}
static Image* images_levelbackgroundplane2_2234_0_0[4];
static Direction direction_levelbackgroundplane2_2234_0_0 = {0, 100, 100, 0, -1, images_levelbackgroundplane2_2234_0_0, 4};
static Image* images_levelbackgroundplane2_2234_0_4[4];
static Direction direction_levelbackgroundplane2_2234_0_4 = {4, 100, 100, 0, -1, images_levelbackgroundplane2_2234_0_4, 4};
static Animation anim_levelbackgroundplane2_2234_0 = {&direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, NULL, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, &direction_levelbackgroundplane2_2234_0_4, NULL, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0, &direction_levelbackgroundplane2_2234_0_0};
static Animation * anim_array_levelbackgroundplane2_2234[1] = {&anim_levelbackgroundplane2_2234_0};
static Animations anim_levelbackgroundplane2_2234 = {1, &anim_array_levelbackgroundplane2_2234[0]};
static bool anim_levelbackgroundplane2_2234_initialized;
class LevelBackgroundPlane2_2234 : public Active
{
public:
    LevelBackgroundPlane2_2234(int x, int y) : Active(x, y, LevelBackgroundPlane2_2234_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BackgroundPlane 2", 23);
#endif
        this->animations = &anim_levelbackgroundplane2_2234;
        if (!anim_levelbackgroundplane2_2234_initialized) {
            anim_levelbackgroundplane2_2234_initialized = true;
            images_levelbackgroundplane2_2234_0_0[0] = get_internal_image(2747);
            images_levelbackgroundplane2_2234_0_0[1] = get_internal_image(2971);
            images_levelbackgroundplane2_2234_0_0[2] = get_internal_image(6408);
            images_levelbackgroundplane2_2234_0_0[3] = get_internal_image(6412);
            images_levelbackgroundplane2_2234_0_4[0] = get_internal_image(513);
            images_levelbackgroundplane2_2234_0_4[1] = get_internal_image(588);
            images_levelbackgroundplane2_2234_0_4[2] = get_internal_image(720);
            images_levelbackgroundplane2_2234_0_4[3] = get_internal_image(1165);
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
FrameObject * create_levelbackgroundplane2_2234(int x, int y)
{
    return new (Active::pool.create()) LevelBackgroundPlane2_2234(x, y);
}
class DialogData_2235 : public Text
{
public:
    DialogData_2235(int x, int y) : Text(x, y, DialogData_2235_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("04 00 sp_03_01 You just don't know when to fold, do you\?", 56));
        add_line(std::string("01 09 li_17_01 Don't you get it\?! Lord Brevon's the murderer!", 61));
        add_line(std::string("04 18 sp_03_02 Thanks for the tip. Now get off our ship before I throw you overboard!", 85));
        add_line(std::string("01 12 li_17_02 Like that'll happen!", 35));
        add_line(std::string("04 18 sp_03_03 Oh well. Don't say I didn't warn you!", 52));
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
FrameObject * create_dialogdata_2235(int x, int y)
{
    return new (Text::pool.create()) DialogData_2235(x, y);
}
static Image* images_enemydnalaser_2236_0_0[12];
static Direction direction_enemydnalaser_2236_0_0 = {0, 100, 100, 0, -1, images_enemydnalaser_2236_0_0, 12};
static Animation anim_enemydnalaser_2236_0 = {&direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, NULL, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0, &direction_enemydnalaser_2236_0_0};
static Animation * anim_array_enemydnalaser_2236[1] = {&anim_enemydnalaser_2236_0};
static Animations anim_enemydnalaser_2236 = {1, &anim_array_enemydnalaser_2236[0]};
static bool anim_enemydnalaser_2236_initialized;
class EnemyDNALaser_2236 : public Active
{
public:
    EnemyDNALaser_2236(int x, int y) : Active(x, y, EnemyDNALaser_2236_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DNALaser", 14);
#endif
        this->animations = &anim_enemydnalaser_2236;
        if (!anim_enemydnalaser_2236_initialized) {
            anim_enemydnalaser_2236_initialized = true;
            images_enemydnalaser_2236_0_0[0] = get_internal_image(1105);
            images_enemydnalaser_2236_0_0[1] = get_internal_image(2880);
            images_enemydnalaser_2236_0_0[2] = get_internal_image(4506);
            images_enemydnalaser_2236_0_0[3] = get_internal_image(5078);
            images_enemydnalaser_2236_0_0[4] = get_internal_image(5336);
            images_enemydnalaser_2236_0_0[5] = get_internal_image(5364);
            images_enemydnalaser_2236_0_0[6] = get_internal_image(5368);
            images_enemydnalaser_2236_0_0[7] = get_internal_image(5364);
            images_enemydnalaser_2236_0_0[8] = get_internal_image(5336);
            images_enemydnalaser_2236_0_0[9] = get_internal_image(5078);
            images_enemydnalaser_2236_0_0[10] = get_internal_image(4506);
            images_enemydnalaser_2236_0_0[11] = get_internal_image(2880);
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
FrameObject * create_enemydnalaser_2236(int x, int y)
{
    return new (Active::pool.create()) EnemyDNALaser_2236(x, y);
}
class SBBlueShipBG_2237 : public QuickBackdrop
{
public:
    SBBlueShipBG_2237(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BlueShipBG", 13);
#endif
        flags |= BACKGROUND;
        width = 1280;
        height = 800;
        image = get_internal_image(12231);
        outline = 0;
    }
};
FrameObject * create_sbblueshipbg_2237(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBBlueShipBG_2237(x, y);
}
class SBRedShipBG2_2238 : public QuickBackdrop
{
public:
    SBRedShipBG2_2238(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedShipBG 2", 14);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 800;
        image = get_internal_image(498);
        outline = 0;
    }
};
FrameObject * create_sbredshipbg2_2238(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBRedShipBG2_2238(x, y);
}
class SBRedShipBG3_2239 : public QuickBackdrop
{
public:
    SBRedShipBG3_2239(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_RedShipBG 3", 14);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 800;
        image = get_internal_image(12232);
        outline = 0;
    }
};
FrameObject * create_sbredshipbg3_2239(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBRedShipBG3_2239(x, y);
}
static Image* images_levelfanblade_2240_0_0[1];
static Direction direction_levelfanblade_2240_0_0 = {0, 50, 50, 0, 1, images_levelfanblade_2240_0_0, 1};
static Animation anim_levelfanblade_2240_0 = {&direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, NULL, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0, &direction_levelfanblade_2240_0_0};
static Animation * anim_array_levelfanblade_2240[1] = {&anim_levelfanblade_2240_0};
static Animations anim_levelfanblade_2240 = {1, &anim_array_levelfanblade_2240[0]};
static bool anim_levelfanblade_2240_initialized;
class LevelFanBlade_2240 : public Active
{
public:
    LevelFanBlade_2240(int x, int y) : Active(x, y, LevelFanBlade_2240_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FanBlade", 14);
#endif
        this->animations = &anim_levelfanblade_2240;
        if (!anim_levelfanblade_2240_initialized) {
            anim_levelfanblade_2240_initialized = true;
            images_levelfanblade_2240_0_0[0] = get_internal_image(11866);
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
FrameObject * create_levelfanblade_2240(int x, int y)
{
    return new (Active::pool.create()) LevelFanBlade_2240(x, y);
}
static Image* images_sbbackeye_2241_0_0[1];
static Direction direction_sbbackeye_2241_0_0 = {0, 50, 50, 0, 1, images_sbbackeye_2241_0_0, 1};
static Animation anim_sbbackeye_2241_0 = {&direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, NULL, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0, &direction_sbbackeye_2241_0_0};
static Animation * anim_array_sbbackeye_2241[1] = {&anim_sbbackeye_2241_0};
static Animations anim_sbbackeye_2241 = {1, &anim_array_sbbackeye_2241[0]};
static bool anim_sbbackeye_2241_initialized;
class SBBackEye_2241 : public Active
{
public:
    SBBackEye_2241(int x, int y) : Active(x, y, SBBackEye_2241_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SB_BackEye", 10);
#endif
        this->animations = &anim_sbbackeye_2241;
        if (!anim_sbbackeye_2241_initialized) {
            anim_sbbackeye_2241_initialized = true;
            images_sbbackeye_2241_0_0[0] = get_internal_image(2403);
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
FrameObject * create_sbbackeye_2241(int x, int y)
{
    return new (Active::pool.create()) SBBackEye_2241(x, y);
}
static Image* images_sbbackeye2_2242_0_0[1];
static Direction direction_sbbackeye2_2242_0_0 = {0, 50, 50, 0, 1, images_sbbackeye2_2242_0_0, 1};
static Animation anim_sbbackeye2_2242_0 = {&direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, NULL, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0, &direction_sbbackeye2_2242_0_0};
static Animation * anim_array_sbbackeye2_2242[1] = {&anim_sbbackeye2_2242_0};
static Animations anim_sbbackeye2_2242 = {1, &anim_array_sbbackeye2_2242[0]};
static bool anim_sbbackeye2_2242_initialized;
class SBBackEye2_2242 : public Active
{
public:
    SBBackEye2_2242(int x, int y) : Active(x, y, SBBackEye2_2242_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SB_BackEye 2", 12);
#endif
        this->animations = &anim_sbbackeye2_2242;
        if (!anim_sbbackeye2_2242_initialized) {
            anim_sbbackeye2_2242_initialized = true;
            images_sbbackeye2_2242_0_0[0] = get_internal_image(2401);
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
FrameObject * create_sbbackeye2_2242(int x, int y)
{
    return new (Active::pool.create()) SBBackEye2_2242(x, y);
}
class SBBlueColumn_2243 : public Backdrop
{
public:
    SBBlueColumn_2243(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BlueColumn", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11981);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbbluecolumn_2243(int x, int y)
{
    return new (Backdrop::pool.create()) SBBlueColumn_2243(x, y);
}
class SBBlueSupportBeam1_2244 : public Backdrop
{
public:
    SBBlueSupportBeam1_2244(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BlueSupportBeam 1", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12256);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbbluesupportbeam1_2244(int x, int y)
{
    return new (Backdrop::pool.create()) SBBlueSupportBeam1_2244(x, y);
}
class SBBlueSupportBeam2_2245 : public Backdrop
{
public:
    SBBlueSupportBeam2_2245(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BlueSupportBeam 2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12255);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbbluesupportbeam2_2245(int x, int y)
{
    return new (Backdrop::pool.create()) SBBlueSupportBeam2_2245(x, y);
}
static Image* images_bosssatellitetop_2246_0_0[1];
static Direction direction_bosssatellitetop_2246_0_0 = {0, 50, 50, 0, 1, images_bosssatellitetop_2246_0_0, 1};
static Animation anim_bosssatellitetop_2246_0 = {&direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, NULL, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0, &direction_bosssatellitetop_2246_0_0};
static Animation * anim_array_bosssatellitetop_2246[1] = {&anim_bosssatellitetop_2246_0};
static Animations anim_bosssatellitetop_2246 = {1, &anim_array_bosssatellitetop_2246[0]};
static bool anim_bosssatellitetop_2246_initialized;
class BossSatelliteTop_2246 : public Active
{
public:
    BossSatelliteTop_2246(int x, int y) : Active(x, y, BossSatelliteTop_2246_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SatelliteTop", 17);
#endif
        this->animations = &anim_bosssatellitetop_2246;
        if (!anim_bosssatellitetop_2246_initialized) {
            anim_bosssatellitetop_2246_initialized = true;
            images_bosssatellitetop_2246_0_0[0] = get_internal_image(10970);
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
FrameObject * create_bosssatellitetop_2246(int x, int y)
{
    return new (Active::pool.create()) BossSatelliteTop_2246(x, y);
}
static Image* images_hazardlightningradial2_2247_0_0[6];
static Direction direction_hazardlightningradial2_2247_0_0 = {0, 90, 90, 0, -1, images_hazardlightningradial2_2247_0_0, 6};
static Animation anim_hazardlightningradial2_2247_0 = {&direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, NULL, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0, &direction_hazardlightningradial2_2247_0_0};
static Animation * anim_array_hazardlightningradial2_2247[1] = {&anim_hazardlightningradial2_2247_0};
static Animations anim_hazardlightningradial2_2247 = {1, &anim_array_hazardlightningradial2_2247[0]};
static bool anim_hazardlightningradial2_2247_initialized;
class HazardLightningRadial2_2247 : public Active
{
public:
    HazardLightningRadial2_2247(int x, int y) : Active(x, y, HazardLightningRadial2_2247_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LightningRadial 2", 24);
#endif
        this->animations = &anim_hazardlightningradial2_2247;
        if (!anim_hazardlightningradial2_2247_initialized) {
            anim_hazardlightningradial2_2247_initialized = true;
            images_hazardlightningradial2_2247_0_0[0] = get_internal_image(5005);
            images_hazardlightningradial2_2247_0_0[1] = get_internal_image(5024);
            images_hazardlightningradial2_2247_0_0[2] = get_internal_image(4889);
            images_hazardlightningradial2_2247_0_0[3] = get_internal_image(5482);
            images_hazardlightningradial2_2247_0_0[4] = get_internal_image(5484);
            images_hazardlightningradial2_2247_0_0[5] = get_internal_image(5481);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 3);
    }
};
FrameObject * create_hazardlightningradial2_2247(int x, int y)
{
    return new (Active::pool.create()) HazardLightningRadial2_2247(x, y);
}
static Image* images_levelcrystalspike_2248_0_0[1];
static Direction direction_levelcrystalspike_2248_0_0 = {0, 50, 50, 0, 1, images_levelcrystalspike_2248_0_0, 1};
static Animation anim_levelcrystalspike_2248_0 = {&direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, NULL, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0, &direction_levelcrystalspike_2248_0_0};
static Animation * anim_array_levelcrystalspike_2248[1] = {&anim_levelcrystalspike_2248_0};
static Animations anim_levelcrystalspike_2248 = {1, &anim_array_levelcrystalspike_2248[0]};
static bool anim_levelcrystalspike_2248_initialized;
class LevelCrystalSpike_2248 : public Active
{
public:
    LevelCrystalSpike_2248(int x, int y) : Active(x, y, LevelCrystalSpike_2248_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_CrystalSpike", 18);
#endif
        this->animations = &anim_levelcrystalspike_2248;
        if (!anim_levelcrystalspike_2248_initialized) {
            anim_levelcrystalspike_2248_initialized = true;
            images_levelcrystalspike_2248_0_0[0] = get_internal_image(490);
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
FrameObject * create_levelcrystalspike_2248(int x, int y)
{
    return new (Active::pool.create()) LevelCrystalSpike_2248(x, y);
}
static Image* images_gimmickspincup_2249_0_0[1];
static Direction direction_gimmickspincup_2249_0_0 = {0, 50, 50, 0, 1, images_gimmickspincup_2249_0_0, 1};
static Animation anim_gimmickspincup_2249_0 = {&direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, NULL, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0, &direction_gimmickspincup_2249_0_0};
static Animation * anim_array_gimmickspincup_2249[1] = {&anim_gimmickspincup_2249_0};
static Animations anim_gimmickspincup_2249 = {1, &anim_array_gimmickspincup_2249[0]};
static bool anim_gimmickspincup_2249_initialized;
class GimmickSpinCup_2249 : public Active
{
public:
    GimmickSpinCup_2249(int x, int y) : Active(x, y, GimmickSpinCup_2249_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinCup", 15);
#endif
        this->animations = &anim_gimmickspincup_2249;
        if (!anim_gimmickspincup_2249_initialized) {
            anim_gimmickspincup_2249_initialized = true;
            images_gimmickspincup_2249_0_0[0] = get_internal_image(11982);
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
FrameObject * create_gimmickspincup_2249(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinCup_2249(x, y);
}
static Image* images_bosssatellitethrusters_2250_0_0[4];
static Direction direction_bosssatellitethrusters_2250_0_0 = {0, 50, 50, 0, -1, images_bosssatellitethrusters_2250_0_0, 4};
static Animation anim_bosssatellitethrusters_2250_0 = {&direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, NULL, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0, &direction_bosssatellitethrusters_2250_0_0};
static Animation * anim_array_bosssatellitethrusters_2250[1] = {&anim_bosssatellitethrusters_2250_0};
static Animations anim_bosssatellitethrusters_2250 = {1, &anim_array_bosssatellitethrusters_2250[0]};
static bool anim_bosssatellitethrusters_2250_initialized;
class BossSatelliteThrusters_2250 : public Active
{
public:
    BossSatelliteThrusters_2250(int x, int y) : Active(x, y, BossSatelliteThrusters_2250_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SatelliteThrusters", 23);
#endif
        this->animations = &anim_bosssatellitethrusters_2250;
        if (!anim_bosssatellitethrusters_2250_initialized) {
            anim_bosssatellitethrusters_2250_initialized = true;
            images_bosssatellitethrusters_2250_0_0[0] = get_internal_image(5572);
            images_bosssatellitethrusters_2250_0_0[1] = get_internal_image(514);
            images_bosssatellitethrusters_2250_0_0[2] = get_internal_image(5573);
            images_bosssatellitethrusters_2250_0_0[3] = get_internal_image(5574);
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
FrameObject * create_bosssatellitethrusters_2250(int x, int y)
{
    return new (Active::pool.create()) BossSatelliteThrusters_2250(x, y);
}
static Image* images_bosssatellite_2251_0_0[1];
static Direction direction_bosssatellite_2251_0_0 = {0, 50, 50, 0, 1, images_bosssatellite_2251_0_0, 1};
static Animation anim_bosssatellite_2251_0 = {&direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, NULL, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0, &direction_bosssatellite_2251_0_0};
static Image* images_bosssatellite_2251_7_0[2];
static Direction direction_bosssatellite_2251_7_0 = {0, 25, 25, 0, -1, images_bosssatellite_2251_7_0, 2};
static Animation anim_bosssatellite_2251_7 = {&direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, NULL, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0, &direction_bosssatellite_2251_7_0};
static Image* images_bosssatellite_2251_8_0[1];
static Direction direction_bosssatellite_2251_8_0 = {0, 50, 50, 0, -1, images_bosssatellite_2251_8_0, 1};
static Animation anim_bosssatellite_2251_8 = {&direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, NULL, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0, &direction_bosssatellite_2251_8_0};
static Image* images_bosssatellite_2251_10_0[2];
static Direction direction_bosssatellite_2251_10_0 = {0, 50, 50, 0, -1, images_bosssatellite_2251_10_0, 2};
static Animation anim_bosssatellite_2251_10 = {&direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, NULL, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0, &direction_bosssatellite_2251_10_0};
static Animation * anim_array_bosssatellite_2251[11] = {&anim_bosssatellite_2251_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssatellite_2251_7, &anim_bosssatellite_2251_8, NULL, &anim_bosssatellite_2251_10};
static Animations anim_bosssatellite_2251 = {11, &anim_array_bosssatellite_2251[0]};
static bool anim_bosssatellite_2251_initialized;
class BossSatellite_2251 : public Active
{
public:
    BossSatellite_2251(int x, int y) : Active(x, y, BossSatellite_2251_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Satellite", 14);
#endif
        this->animations = &anim_bosssatellite_2251;
        if (!anim_bosssatellite_2251_initialized) {
            anim_bosssatellite_2251_initialized = true;
            images_bosssatellite_2251_0_0[0] = get_internal_image(12473);
            images_bosssatellite_2251_7_0[0] = get_internal_image(12474);
            images_bosssatellite_2251_7_0[1] = get_internal_image(12473);
            images_bosssatellite_2251_8_0[0] = get_internal_image(12470);
            images_bosssatellite_2251_10_0[0] = get_internal_image(12475);
            images_bosssatellite_2251_10_0[1] = get_internal_image(12476);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 80);
        alterables->values.set(3, -2);
        alterables->values.set(4, -7);
        alterables->values.set(9, 1);
        alterables->values.set(11, 200);
    }
};
FrameObject * create_bosssatellite_2251(int x, int y)
{
    return new (Active::pool.create()) BossSatellite_2251(x, y);
}
static Image* images_bosssatellitearm_2252_0_0[1];
static Direction direction_bosssatellitearm_2252_0_0 = {0, 50, 50, 0, 1, images_bosssatellitearm_2252_0_0, 1};
static Animation anim_bosssatellitearm_2252_0 = {&direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, NULL, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0, &direction_bosssatellitearm_2252_0_0};
static Image* images_bosssatellitearm_2252_7_0[2];
static Direction direction_bosssatellitearm_2252_7_0 = {0, 25, 25, 0, -1, images_bosssatellitearm_2252_7_0, 2};
static Animation anim_bosssatellitearm_2252_7 = {&direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, NULL, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0, &direction_bosssatellitearm_2252_7_0};
static Image* images_bosssatellitearm_2252_8_0[1];
static Direction direction_bosssatellitearm_2252_8_0 = {0, 25, 25, 0, -1, images_bosssatellitearm_2252_8_0, 1};
static Animation anim_bosssatellitearm_2252_8 = {&direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, NULL, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0, &direction_bosssatellitearm_2252_8_0};
static Image* images_bosssatellitearm_2252_10_0[2];
static Direction direction_bosssatellitearm_2252_10_0 = {0, 25, 25, 0, -1, images_bosssatellitearm_2252_10_0, 2};
static Animation anim_bosssatellitearm_2252_10 = {&direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, NULL, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0, &direction_bosssatellitearm_2252_10_0};
static Animation * anim_array_bosssatellitearm_2252[11] = {&anim_bosssatellitearm_2252_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssatellitearm_2252_7, &anim_bosssatellitearm_2252_8, NULL, &anim_bosssatellitearm_2252_10};
static Animations anim_bosssatellitearm_2252 = {11, &anim_array_bosssatellitearm_2252[0]};
static bool anim_bosssatellitearm_2252_initialized;
class BossSatelliteArm_2252 : public Active
{
public:
    BossSatelliteArm_2252(int x, int y) : Active(x, y, BossSatelliteArm_2252_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SatelliteArm", 17);
#endif
        this->animations = &anim_bosssatellitearm_2252;
        if (!anim_bosssatellitearm_2252_initialized) {
            anim_bosssatellitearm_2252_initialized = true;
            images_bosssatellitearm_2252_0_0[0] = get_internal_image(12478);
            images_bosssatellitearm_2252_7_0[0] = get_internal_image(12480);
            images_bosssatellitearm_2252_7_0[1] = get_internal_image(12479);
            images_bosssatellitearm_2252_8_0[0] = get_internal_image(12477);
            images_bosssatellitearm_2252_10_0[0] = get_internal_image(12483);
            images_bosssatellitearm_2252_10_0[1] = get_internal_image(12481);
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
FrameObject * create_bosssatellitearm_2252(int x, int y)
{
    return new (Active::pool.create()) BossSatelliteArm_2252(x, y);
}
static Image* images_minibossufobeam2_2253_0_0[2];
static Direction direction_minibossufobeam2_2253_0_0 = {0, 75, 75, 0, -1, images_minibossufobeam2_2253_0_0, 2};
static Animation anim_minibossufobeam2_2253_0 = {&direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, NULL, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0, &direction_minibossufobeam2_2253_0_0};
static Animation * anim_array_minibossufobeam2_2253[1] = {&anim_minibossufobeam2_2253_0};
static Animations anim_minibossufobeam2_2253 = {1, &anim_array_minibossufobeam2_2253[0]};
static bool anim_minibossufobeam2_2253_initialized;
class MinibossUFOBeam2_2253 : public Active
{
public:
    MinibossUFOBeam2_2253(int x, int y) : Active(x, y, MinibossUFOBeam2_2253_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFOBeam 2", 18);
#endif
        set_visible(false);
        this->animations = &anim_minibossufobeam2_2253;
        if (!anim_minibossufobeam2_2253_initialized) {
            anim_minibossufobeam2_2253_initialized = true;
            images_minibossufobeam2_2253_0_0[0] = get_internal_image(5298);
            images_minibossufobeam2_2253_0_0[1] = get_internal_image(5361);
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
FrameObject * create_minibossufobeam2_2253(int x, int y)
{
    return new (Active::pool.create()) MinibossUFOBeam2_2253(x, y);
}
class ShipFront1_2254 : public Backdrop
{
public:
    ShipFront1_2254(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ship front 1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2610);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shipfront1_2254(int x, int y)
{
    return new (Backdrop::pool.create()) ShipFront1_2254(x, y);
}
class SBOuterCurve1_2255 : public Backdrop
{
public:
    SBOuterCurve1_2255(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_OuterCurve 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4815);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sboutercurve1_2255(int x, int y)
{
    return new (Backdrop::pool.create()) SBOuterCurve1_2255(x, y);
}
class SBOuterCurve2_2256 : public Backdrop
{
public:
    SBOuterCurve2_2256(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_OuterCurve 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3626);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sboutercurve2_2256(int x, int y)
{
    return new (Backdrop::pool.create()) SBOuterCurve2_2256(x, y);
}
class SBOuterCurve3_2257 : public Backdrop
{
public:
    SBOuterCurve3_2257(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_OuterCurve 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4816);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sboutercurve3_2257(int x, int y)
{
    return new (Backdrop::pool.create()) SBOuterCurve3_2257(x, y);
}
class SBBigWallTunnel_2258 : public Backdrop
{
public:
    SBBigWallTunnel_2258(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BigWallTunnel", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3533);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbbigwalltunnel_2258(int x, int y)
{
    return new (Backdrop::pool.create()) SBBigWallTunnel_2258(x, y);
}
class SBBigWallTunnel2_2259 : public Backdrop
{
public:
    SBBigWallTunnel2_2259(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_BigWallTunnel 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4961);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbbigwalltunnel2_2259(int x, int y)
{
    return new (Backdrop::pool.create()) SBBigWallTunnel2_2259(x, y);
}
class SBDeck12_2260 : public Backdrop
{
public:
    SBDeck12_2260(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_Deck12", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5961);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_sbdeck12_2260(int x, int y)
{
    return new (Backdrop::pool.create()) SBDeck12_2260(x, y);
}
class SBHangingBar_2261 : public Backdrop
{
public:
    SBHangingBar_2261(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_HangingBar", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3672);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbhangingbar_2261(int x, int y)
{
    return new (Backdrop::pool.create()) SBHangingBar_2261(x, y);
}
static Image* images_enemydnacannonbase_2262_0_0[1];
static Direction direction_enemydnacannonbase_2262_0_0 = {0, 50, 50, 0, 1, images_enemydnacannonbase_2262_0_0, 1};
static Image* images_enemydnacannonbase_2262_0_16[1];
static Direction direction_enemydnacannonbase_2262_0_16 = {16, 50, 50, 0, 1, images_enemydnacannonbase_2262_0_16, 1};
static Animation anim_enemydnacannonbase_2262_0 = {&direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, NULL, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, &direction_enemydnacannonbase_2262_0_16, NULL, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0, &direction_enemydnacannonbase_2262_0_0};
static Animation * anim_array_enemydnacannonbase_2262[1] = {&anim_enemydnacannonbase_2262_0};
static Animations anim_enemydnacannonbase_2262 = {1, &anim_array_enemydnacannonbase_2262[0]};
static bool anim_enemydnacannonbase_2262_initialized;
class EnemyDNACannonBase_2262 : public Active
{
public:
    EnemyDNACannonBase_2262(int x, int y) : Active(x, y, EnemyDNACannonBase_2262_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DNACannonBase", 19);
#endif
        this->animations = &anim_enemydnacannonbase_2262;
        if (!anim_enemydnacannonbase_2262_initialized) {
            anim_enemydnacannonbase_2262_initialized = true;
            images_enemydnacannonbase_2262_0_0[0] = get_internal_image(2402);
            images_enemydnacannonbase_2262_0_16[0] = get_internal_image(2448);
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
FrameObject * create_enemydnacannonbase_2262(int x, int y)
{
    return new (Active::pool.create()) EnemyDNACannonBase_2262(x, y);
}
static Image* images_hazardlightningradial_2263_0_0[1];
static Direction direction_hazardlightningradial_2263_0_0 = {0, 90, 90, 0, -1, images_hazardlightningradial_2263_0_0, 1};
static Animation anim_hazardlightningradial_2263_0 = {&direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, NULL, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0, &direction_hazardlightningradial_2263_0_0};
static Animation * anim_array_hazardlightningradial_2263[1] = {&anim_hazardlightningradial_2263_0};
static Animations anim_hazardlightningradial_2263 = {1, &anim_array_hazardlightningradial_2263[0]};
static bool anim_hazardlightningradial_2263_initialized;
class HazardLightningRadial_2263 : public Active
{
public:
    HazardLightningRadial_2263(int x, int y) : Active(x, y, HazardLightningRadial_2263_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LightningRadial", 22);
#endif
        set_visible(false);
        this->animations = &anim_hazardlightningradial_2263;
        if (!anim_hazardlightningradial_2263_initialized) {
            anim_hazardlightningradial_2263_initialized = true;
            images_hazardlightningradial_2263_0_0[0] = get_internal_image(4960);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 3);
    }
};
FrameObject * create_hazardlightningradial_2263(int x, int y)
{
    return new (Active::pool.create()) HazardLightningRadial_2263(x, y);
}
static Image* images_enemydnacannon_2264_0_0[2];
static Direction direction_enemydnacannon_2264_0_0 = {0, 25, 25, 0, -1, images_enemydnacannon_2264_0_0, 2};
static Image* images_enemydnacannon_2264_0_16[2];
static Direction direction_enemydnacannon_2264_0_16 = {16, 25, 25, 0, -1, images_enemydnacannon_2264_0_16, 2};
static Animation anim_enemydnacannon_2264_0 = {&direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, NULL, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, &direction_enemydnacannon_2264_0_16, NULL, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0, &direction_enemydnacannon_2264_0_0};
static Image* images_enemydnacannon_2264_8_0[2];
static Direction direction_enemydnacannon_2264_8_0 = {0, 50, 50, 0, -1, images_enemydnacannon_2264_8_0, 2};
static Image* images_enemydnacannon_2264_8_16[2];
static Direction direction_enemydnacannon_2264_8_16 = {16, 50, 50, 0, -1, images_enemydnacannon_2264_8_16, 2};
static Animation anim_enemydnacannon_2264_8 = {&direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, NULL, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, &direction_enemydnacannon_2264_8_16, NULL, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0, &direction_enemydnacannon_2264_8_0};
static Image* images_enemydnacannon_2264_10_0[2];
static Direction direction_enemydnacannon_2264_10_0 = {0, 70, 100, 0, -1, images_enemydnacannon_2264_10_0, 2};
static Image* images_enemydnacannon_2264_10_16[2];
static Direction direction_enemydnacannon_2264_10_16 = {16, 70, 100, 0, -1, images_enemydnacannon_2264_10_16, 2};
static Animation anim_enemydnacannon_2264_10 = {&direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, NULL, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, &direction_enemydnacannon_2264_10_16, NULL, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0, &direction_enemydnacannon_2264_10_0};
static Image* images_enemydnacannon_2264_11_0[2];
static Direction direction_enemydnacannon_2264_11_0 = {0, 40, 40, 0, -1, images_enemydnacannon_2264_11_0, 2};
static Image* images_enemydnacannon_2264_11_16[2];
static Direction direction_enemydnacannon_2264_11_16 = {16, 40, 40, 0, -1, images_enemydnacannon_2264_11_16, 2};
static Animation anim_enemydnacannon_2264_11 = {&direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, NULL, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, &direction_enemydnacannon_2264_11_16, NULL, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0, &direction_enemydnacannon_2264_11_0};
static Animation * anim_array_enemydnacannon_2264[12] = {&anim_enemydnacannon_2264_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemydnacannon_2264_8, NULL, &anim_enemydnacannon_2264_10, &anim_enemydnacannon_2264_11};
static Animations anim_enemydnacannon_2264 = {12, &anim_array_enemydnacannon_2264[0]};
static bool anim_enemydnacannon_2264_initialized;
class EnemyDNACannon_2264 : public Active
{
public:
    EnemyDNACannon_2264(int x, int y) : Active(x, y, EnemyDNACannon_2264_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_DNACannon", 15);
#endif
        this->animations = &anim_enemydnacannon_2264;
        if (!anim_enemydnacannon_2264_initialized) {
            anim_enemydnacannon_2264_initialized = true;
            images_enemydnacannon_2264_0_0[0] = get_internal_image(4984);
            images_enemydnacannon_2264_0_0[1] = get_internal_image(1035);
            images_enemydnacannon_2264_0_16[0] = get_internal_image(4887);
            images_enemydnacannon_2264_0_16[1] = get_internal_image(4886);
            images_enemydnacannon_2264_8_0[0] = get_internal_image(5478);
            images_enemydnacannon_2264_8_0[1] = get_internal_image(5462);
            images_enemydnacannon_2264_8_16[0] = get_internal_image(5003);
            images_enemydnacannon_2264_8_16[1] = get_internal_image(5464);
            images_enemydnacannon_2264_10_0[0] = get_internal_image(5479);
            images_enemydnacannon_2264_10_0[1] = get_internal_image(4984);
            images_enemydnacannon_2264_10_16[0] = get_internal_image(5406);
            images_enemydnacannon_2264_10_16[1] = get_internal_image(4887);
            images_enemydnacannon_2264_11_0[0] = get_internal_image(4983);
            images_enemydnacannon_2264_11_0[1] = get_internal_image(5462);
            images_enemydnacannon_2264_11_16[0] = get_internal_image(5463);
            images_enemydnacannon_2264_11_16[1] = get_internal_image(5464);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(5, 20);
        alterables->values.set(6, 1);
    }
};
FrameObject * create_enemydnacannon_2264(int x, int y)
{
    return new (Active::pool.create()) EnemyDNACannon_2264(x, y);
}
static Image* images_levelballtunnel2_2265_0_0[1];
static Direction direction_levelballtunnel2_2265_0_0 = {0, 50, 50, 0, 1, images_levelballtunnel2_2265_0_0, 1};
static Animation anim_levelballtunnel2_2265_0 = {&direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, NULL, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0, &direction_levelballtunnel2_2265_0_0};
static Animation * anim_array_levelballtunnel2_2265[1] = {&anim_levelballtunnel2_2265_0};
static Animations anim_levelballtunnel2_2265 = {1, &anim_array_levelballtunnel2_2265[0]};
static bool anim_levelballtunnel2_2265_initialized;
class LevelBallTunnel2_2265 : public Active
{
public:
    LevelBallTunnel2_2265(int x, int y) : Active(x, y, LevelBallTunnel2_2265_type)
    {
        // qualifiers: 14, 98
#ifndef NDEBUG
        name = std::string("Level_BallTunnel2", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelballtunnel2_2265;
        if (!anim_levelballtunnel2_2265_initialized) {
            anim_levelballtunnel2_2265_initialized = true;
            images_levelballtunnel2_2265_0_0[0] = get_internal_image(679);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 97);
        create_alterables();
    }
};
FrameObject * create_levelballtunnel2_2265(int x, int y)
{
    return new (Active::pool.create()) LevelBallTunnel2_2265(x, y);
}
static Image* images_levelballtunnel3_2266_0_0[1];
static Direction direction_levelballtunnel3_2266_0_0 = {0, 50, 50, 0, 1, images_levelballtunnel3_2266_0_0, 1};
static Animation anim_levelballtunnel3_2266_0 = {&direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, NULL, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0, &direction_levelballtunnel3_2266_0_0};
static Animation * anim_array_levelballtunnel3_2266[1] = {&anim_levelballtunnel3_2266_0};
static Animations anim_levelballtunnel3_2266 = {1, &anim_array_levelballtunnel3_2266[0]};
static bool anim_levelballtunnel3_2266_initialized;
class LevelBallTunnel3_2266 : public Active
{
public:
    LevelBallTunnel3_2266(int x, int y) : Active(x, y, LevelBallTunnel3_2266_type)
    {
        // qualifiers: 14, 98
#ifndef NDEBUG
        name = std::string("Level_BallTunnel3", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelballtunnel3_2266;
        if (!anim_levelballtunnel3_2266_initialized) {
            anim_levelballtunnel3_2266_initialized = true;
            images_levelballtunnel3_2266_0_0[0] = get_internal_image(1754);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 97);
        create_alterables();
    }
};
FrameObject * create_levelballtunnel3_2266(int x, int y)
{
    return new (Active::pool.create()) LevelBallTunnel3_2266(x, y);
}
static Image* images_gimmickspincuplandpoint_2267_0_0[1];
static Direction direction_gimmickspincuplandpoint_2267_0_0 = {0, 50, 50, 0, 1, images_gimmickspincuplandpoint_2267_0_0, 1};
static Animation anim_gimmickspincuplandpoint_2267_0 = {&direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, NULL, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0, &direction_gimmickspincuplandpoint_2267_0_0};
static Animation * anim_array_gimmickspincuplandpoint_2267[1] = {&anim_gimmickspincuplandpoint_2267_0};
static Animations anim_gimmickspincuplandpoint_2267 = {1, &anim_array_gimmickspincuplandpoint_2267[0]};
static bool anim_gimmickspincuplandpoint_2267_initialized;
class GimmickSpinCupLandPoint_2267 : public Active
{
public:
    GimmickSpinCupLandPoint_2267(int x, int y) : Active(x, y, GimmickSpinCupLandPoint_2267_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinCupLandPoint", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickspincuplandpoint_2267;
        if (!anim_gimmickspincuplandpoint_2267_initialized) {
            anim_gimmickspincuplandpoint_2267_initialized = true;
            images_gimmickspincuplandpoint_2267_0_0[0] = get_internal_image(125);
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
FrameObject * create_gimmickspincuplandpoint_2267(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinCupLandPoint_2267(x, y);
}
static Image* images_gimmickspincupstartpoint_2268_0_0[1];
static Direction direction_gimmickspincupstartpoint_2268_0_0 = {0, 50, 50, 0, 1, images_gimmickspincupstartpoint_2268_0_0, 1};
static Animation anim_gimmickspincupstartpoint_2268_0 = {&direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, NULL, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0, &direction_gimmickspincupstartpoint_2268_0_0};
static Animation * anim_array_gimmickspincupstartpoint_2268[1] = {&anim_gimmickspincupstartpoint_2268_0};
static Animations anim_gimmickspincupstartpoint_2268 = {1, &anim_array_gimmickspincupstartpoint_2268[0]};
static bool anim_gimmickspincupstartpoint_2268_initialized;
class GimmickSpinCupStartPoint_2268 : public Active
{
public:
    GimmickSpinCupStartPoint_2268(int x, int y) : Active(x, y, GimmickSpinCupStartPoint_2268_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinCupStartPoint", 25);
#endif
        set_visible(false);
        this->animations = &anim_gimmickspincupstartpoint_2268;
        if (!anim_gimmickspincupstartpoint_2268_initialized) {
            anim_gimmickspincupstartpoint_2268_initialized = true;
            images_gimmickspincupstartpoint_2268_0_0[0] = get_internal_image(644);
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
FrameObject * create_gimmickspincupstartpoint_2268(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinCupStartPoint_2268(x, y);
}
static Image* images_pushableblock4_2269_0_0[1];
static Direction direction_pushableblock4_2269_0_0 = {0, 100, 100, 0, 1, images_pushableblock4_2269_0_0, 1};
static Image* images_pushableblock4_2269_0_8[1];
static Direction direction_pushableblock4_2269_0_8 = {8, 50, 50, 0, 1, images_pushableblock4_2269_0_8, 1};
static Animation anim_pushableblock4_2269_0 = {&direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, NULL, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, &direction_pushableblock4_2269_0_8, NULL, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0, &direction_pushableblock4_2269_0_0};
static Animation * anim_array_pushableblock4_2269[1] = {&anim_pushableblock4_2269_0};
static Animations anim_pushableblock4_2269 = {1, &anim_array_pushableblock4_2269[0]};
static bool anim_pushableblock4_2269_initialized;
class PushableBlock4_2269 : public Active
{
public:
    PushableBlock4_2269(int x, int y) : Active(x, y, PushableBlock4_2269_type)
    {
        // qualifiers: 14, 16, 21
#ifndef NDEBUG
        name = std::string("PushableBlock 4", 15);
#endif
        this->animations = &anim_pushableblock4_2269;
        if (!anim_pushableblock4_2269_initialized) {
            anim_pushableblock4_2269_initialized = true;
            images_pushableblock4_2269_0_0[0] = get_internal_image(5867);
            images_pushableblock4_2269_0_8[0] = get_internal_image(347);
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
FrameObject * create_pushableblock4_2269(int x, int y)
{
    return new (Active::pool.create()) PushableBlock4_2269(x, y);
}
static Image* images_active_2270_0_0[1];
static Direction direction_active_2270_0_0 = {0, 50, 50, 0, 1, images_active_2270_0_0, 1};
static Animation anim_active_2270_0 = {&direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, NULL, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0, &direction_active_2270_0_0};
static Animation * anim_array_active_2270[1] = {&anim_active_2270_0};
static Animations anim_active_2270 = {1, &anim_array_active_2270[0]};
static bool anim_active_2270_initialized;
class Active_2270 : public Active
{
public:
    Active_2270(int x, int y) : Active(x, y, Active_2270_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_2270;
        if (!anim_active_2270_initialized) {
            anim_active_2270_initialized = true;
            images_active_2270_0_0[0] = get_internal_image(2742);
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
FrameObject * create_active_2270(int x, int y)
{
    return new (Active::pool.create()) Active_2270(x, y);
}
static Image* images_active2_2271_0_0[1];
static Direction direction_active2_2271_0_0 = {0, 50, 50, 0, 1, images_active2_2271_0_0, 1};
static Animation anim_active2_2271_0 = {&direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, NULL, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0, &direction_active2_2271_0_0};
static Animation * anim_array_active2_2271[1] = {&anim_active2_2271_0};
static Animations anim_active2_2271 = {1, &anim_array_active2_2271[0]};
static bool anim_active2_2271_initialized;
class Active2_2271 : public Active
{
public:
    Active2_2271(int x, int y) : Active(x, y, Active2_2271_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_2271;
        if (!anim_active2_2271_initialized) {
            anim_active2_2271_initialized = true;
            images_active2_2271_0_0[0] = get_internal_image(1183);
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
FrameObject * create_active2_2271(int x, int y)
{
    return new (Active::pool.create()) Active2_2271(x, y);
}
static Image* images_active3_2272_0_0[1];
static Direction direction_active3_2272_0_0 = {0, 50, 50, 0, 1, images_active3_2272_0_0, 1};
static Animation anim_active3_2272_0 = {&direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, NULL, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0, &direction_active3_2272_0_0};
static Animation * anim_array_active3_2272[1] = {&anim_active3_2272_0};
static Animations anim_active3_2272 = {1, &anim_array_active3_2272[0]};
static bool anim_active3_2272_initialized;
class Active3_2272 : public Active
{
public:
    Active3_2272(int x, int y) : Active(x, y, Active3_2272_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_2272;
        if (!anim_active3_2272_initialized) {
            anim_active3_2272_initialized = true;
            images_active3_2272_0_0[0] = get_internal_image(4133);
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
FrameObject * create_active3_2272(int x, int y)
{
    return new (Active::pool.create()) Active3_2272(x, y);
}
static Image* images_active4_2273_0_0[1];
static Direction direction_active4_2273_0_0 = {0, 50, 50, 0, 1, images_active4_2273_0_0, 1};
static Animation anim_active4_2273_0 = {&direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, NULL, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0, &direction_active4_2273_0_0};
static Animation * anim_array_active4_2273[1] = {&anim_active4_2273_0};
static Animations anim_active4_2273 = {1, &anim_array_active4_2273[0]};
static bool anim_active4_2273_initialized;
class Active4_2273 : public Active
{
public:
    Active4_2273(int x, int y) : Active(x, y, Active4_2273_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Active 4", 8);
#endif
        this->animations = &anim_active4_2273;
        if (!anim_active4_2273_initialized) {
            anim_active4_2273_initialized = true;
            images_active4_2273_0_0[0] = get_internal_image(5140);
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
FrameObject * create_active4_2273(int x, int y)
{
    return new (Active::pool.create()) Active4_2273(x, y);
}
static Image* images_sbloop7_2274_0_0[1];
static Direction direction_sbloop7_2274_0_0 = {0, 50, 50, 0, 1, images_sbloop7_2274_0_0, 1};
static Animation anim_sbloop7_2274_0 = {&direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, NULL, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0, &direction_sbloop7_2274_0_0};
static Animation * anim_array_sbloop7_2274[1] = {&anim_sbloop7_2274_0};
static Animations anim_sbloop7_2274 = {1, &anim_array_sbloop7_2274[0]};
static bool anim_sbloop7_2274_initialized;
class SBLoop7_2274 : public Active
{
public:
    SBLoop7_2274(int x, int y) : Active(x, y, SBLoop7_2274_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("SB_Loop 7", 9);
#endif
        this->animations = &anim_sbloop7_2274;
        if (!anim_sbloop7_2274_initialized) {
            anim_sbloop7_2274_initialized = true;
            images_sbloop7_2274_0_0[0] = get_internal_image(4865);
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
FrameObject * create_sbloop7_2274(int x, int y)
{
    return new (Active::pool.create()) SBLoop7_2274(x, y);
}
static Image* images_gimmickswingbase_2275_0_0[1];
static Direction direction_gimmickswingbase_2275_0_0 = {0, 50, 50, 0, 1, images_gimmickswingbase_2275_0_0, 1};
static Animation anim_gimmickswingbase_2275_0 = {&direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, NULL, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0, &direction_gimmickswingbase_2275_0_0};
static Animation * anim_array_gimmickswingbase_2275[1] = {&anim_gimmickswingbase_2275_0};
static Animations anim_gimmickswingbase_2275 = {1, &anim_array_gimmickswingbase_2275[0]};
static bool anim_gimmickswingbase_2275_initialized;
class GimmickSwingBase_2275 : public Active
{
public:
    GimmickSwingBase_2275(int x, int y) : Active(x, y, GimmickSwingBase_2275_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Base", 18);
#endif
        this->animations = &anim_gimmickswingbase_2275;
        if (!anim_gimmickswingbase_2275_initialized) {
            anim_gimmickswingbase_2275_initialized = true;
            images_gimmickswingbase_2275_0_0[0] = get_internal_image(5486);
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
FrameObject * create_gimmickswingbase_2275(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingBase_2275(x, y);
}
static Image* images_gimmickswingchain_2276_0_0[1];
static Direction direction_gimmickswingchain_2276_0_0 = {0, 50, 50, 0, 1, images_gimmickswingchain_2276_0_0, 1};
static Animation anim_gimmickswingchain_2276_0 = {&direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, NULL, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0, &direction_gimmickswingchain_2276_0_0};
static Animation * anim_array_gimmickswingchain_2276[1] = {&anim_gimmickswingchain_2276_0};
static Animations anim_gimmickswingchain_2276 = {1, &anim_array_gimmickswingchain_2276[0]};
static bool anim_gimmickswingchain_2276_initialized;
class GimmickSwingChain_2276 : public Active
{
public:
    GimmickSwingChain_2276(int x, int y) : Active(x, y, GimmickSwingChain_2276_type)
    {
        // qualifiers: 41
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Chain", 19);
#endif
        this->animations = &anim_gimmickswingchain_2276;
        if (!anim_gimmickswingchain_2276_initialized) {
            anim_gimmickswingchain_2276_initialized = true;
            images_gimmickswingchain_2276_0_0[0] = get_internal_image(5016);
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
FrameObject * create_gimmickswingchain_2276(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingChain_2276(x, y);
}
static Image* images_gimmickswingplatform_2277_0_0[1];
static Direction direction_gimmickswingplatform_2277_0_0 = {0, 50, 50, 0, 1, images_gimmickswingplatform_2277_0_0, 1};
static Animation anim_gimmickswingplatform_2277_0 = {&direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, NULL, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0, &direction_gimmickswingplatform_2277_0_0};
static Animation * anim_array_gimmickswingplatform_2277[1] = {&anim_gimmickswingplatform_2277_0};
static Animations anim_gimmickswingplatform_2277 = {1, &anim_array_gimmickswingplatform_2277[0]};
static bool anim_gimmickswingplatform_2277_initialized;
class GimmickSwingPlatform_2277 : public Active
{
public:
    GimmickSwingPlatform_2277(int x, int y) : Active(x, y, GimmickSwingPlatform_2277_type)
    {
        // qualifiers: 15, 16, 41, 42
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Platform", 22);
#endif
        this->animations = &anim_gimmickswingplatform_2277;
        if (!anim_gimmickswingplatform_2277_initialized) {
            anim_gimmickswingplatform_2277_initialized = true;
            images_gimmickswingplatform_2277_0_0[0] = get_internal_image(560);
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
FrameObject * create_gimmickswingplatform_2277(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingPlatform_2277(x, y);
}
static Image* images_bosshomingspark_2278_0_24[6];
static Direction direction_bosshomingspark_2278_0_24 = {24, 100, 100, 0, -1, images_bosshomingspark_2278_0_24, 6};
static Animation anim_bosshomingspark_2278_0 = {&direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, NULL, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24, &direction_bosshomingspark_2278_0_24};
static Animation * anim_array_bosshomingspark_2278[1] = {&anim_bosshomingspark_2278_0};
static Animations anim_bosshomingspark_2278 = {1, &anim_array_bosshomingspark_2278[0]};
static bool anim_bosshomingspark_2278_initialized;
class BossHomingSpark_2278 : public Active
{
public:
    BossHomingSpark_2278(int x, int y) : Active(x, y, BossHomingSpark_2278_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HomingSpark", 16);
#endif
        this->animations = &anim_bosshomingspark_2278;
        if (!anim_bosshomingspark_2278_initialized) {
            anim_bosshomingspark_2278_initialized = true;
            images_bosshomingspark_2278_0_24[0] = get_internal_image(3176);
            images_bosshomingspark_2278_0_24[1] = get_internal_image(3179);
            images_bosshomingspark_2278_0_24[2] = get_internal_image(3178);
            images_bosshomingspark_2278_0_24[3] = get_internal_image(3193);
            images_bosshomingspark_2278_0_24[4] = get_internal_image(3177);
            images_bosshomingspark_2278_0_24[5] = get_internal_image(3192);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_bosshomingspark_2278(int x, int y)
{
    return new (Active::pool.create()) BossHomingSpark_2278(x, y);
}
static Image* images_bosscrystalspike_2279_0_0[10];
static Direction direction_bosscrystalspike_2279_0_0 = {0, 50, 50, 9, 5, images_bosscrystalspike_2279_0_0, 10};
static Image* images_bosscrystalspike_2279_0_16[10];
static Direction direction_bosscrystalspike_2279_0_16 = {16, 50, 50, 9, 5, images_bosscrystalspike_2279_0_16, 10};
static Animation anim_bosscrystalspike_2279_0 = {&direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, NULL, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, &direction_bosscrystalspike_2279_0_16, NULL, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0, &direction_bosscrystalspike_2279_0_0};
static Animation * anim_array_bosscrystalspike_2279[1] = {&anim_bosscrystalspike_2279_0};
static Animations anim_bosscrystalspike_2279 = {1, &anim_array_bosscrystalspike_2279[0]};
static bool anim_bosscrystalspike_2279_initialized;
class BossCrystalSpike_2279 : public Active
{
public:
    BossCrystalSpike_2279(int x, int y) : Active(x, y, BossCrystalSpike_2279_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpike", 17);
#endif
        this->animations = &anim_bosscrystalspike_2279;
        if (!anim_bosscrystalspike_2279_initialized) {
            anim_bosscrystalspike_2279_initialized = true;
            images_bosscrystalspike_2279_0_0[0] = get_internal_image(574);
            images_bosscrystalspike_2279_0_0[1] = get_internal_image(905);
            images_bosscrystalspike_2279_0_0[2] = get_internal_image(1093);
            images_bosscrystalspike_2279_0_0[3] = get_internal_image(1094);
            images_bosscrystalspike_2279_0_0[4] = get_internal_image(1314);
            images_bosscrystalspike_2279_0_0[5] = get_internal_image(1642);
            images_bosscrystalspike_2279_0_0[6] = get_internal_image(3343);
            images_bosscrystalspike_2279_0_0[7] = get_internal_image(1642);
            images_bosscrystalspike_2279_0_0[8] = get_internal_image(3343);
            images_bosscrystalspike_2279_0_0[9] = get_internal_image(1642);
            images_bosscrystalspike_2279_0_16[0] = get_internal_image(4029);
            images_bosscrystalspike_2279_0_16[1] = get_internal_image(4758);
            images_bosscrystalspike_2279_0_16[2] = get_internal_image(4761);
            images_bosscrystalspike_2279_0_16[3] = get_internal_image(4764);
            images_bosscrystalspike_2279_0_16[4] = get_internal_image(5429);
            images_bosscrystalspike_2279_0_16[5] = get_internal_image(5430);
            images_bosscrystalspike_2279_0_16[6] = get_internal_image(5923);
            images_bosscrystalspike_2279_0_16[7] = get_internal_image(5430);
            images_bosscrystalspike_2279_0_16[8] = get_internal_image(5923);
            images_bosscrystalspike_2279_0_16[9] = get_internal_image(5430);
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
FrameObject * create_bosscrystalspike_2279(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpike_2279(x, y);
}
class SBGreenShipBG_2280 : public QuickBackdrop
{
public:
    SBGreenShipBG_2280(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GreenShipBG", 14);
#endif
        flags |= BACKGROUND;
        width = 1280;
        height = 960;
        image = get_internal_image(11811);
        outline = 0;
    }
};
FrameObject * create_sbgreenshipbg_2280(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBGreenShipBG_2280(x, y);
}
class SBGreenShipBG2_2281 : public QuickBackdrop
{
public:
    SBGreenShipBG2_2281(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GreenShipBG 2", 16);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 960;
        image = get_internal_image(3205);
        outline = 0;
    }
};
FrameObject * create_sbgreenshipbg2_2281(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBGreenShipBG2_2281(x, y);
}
class SBGreenShipBG3_2282 : public QuickBackdrop
{
public:
    SBGreenShipBG3_2282(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GreenShipBG 3", 16);
#endif
        flags |= BACKGROUND;
        width = 32;
        height = 960;
        image = get_internal_image(11812);
        outline = 0;
    }
};
FrameObject * create_sbgreenshipbg3_2282(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBGreenShipBG3_2282(x, y);
}
static Image* images_levelfanblade_2283_0_0[1];
static Direction direction_levelfanblade_2283_0_0 = {0, 50, 50, 0, 1, images_levelfanblade_2283_0_0, 1};
static Animation anim_levelfanblade_2283_0 = {&direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, NULL, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0, &direction_levelfanblade_2283_0_0};
static Animation * anim_array_levelfanblade_2283[1] = {&anim_levelfanblade_2283_0};
static Animations anim_levelfanblade_2283 = {1, &anim_array_levelfanblade_2283[0]};
static bool anim_levelfanblade_2283_initialized;
class LevelFanBlade_2283 : public Active
{
public:
    LevelFanBlade_2283(int x, int y) : Active(x, y, LevelFanBlade_2283_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FanBlade", 14);
#endif
        this->animations = &anim_levelfanblade_2283;
        if (!anim_levelfanblade_2283_initialized) {
            anim_levelfanblade_2283_initialized = true;
            images_levelfanblade_2283_0_0[0] = get_internal_image(11864);
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
FrameObject * create_levelfanblade_2283(int x, int y)
{
    return new (Active::pool.create()) LevelFanBlade_2283(x, y);
}
class SBGreenSupportBeam1_2284 : public Backdrop
{
public:
    SBGreenSupportBeam1_2284(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GreenSupportBeam 1", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12260);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbgreensupportbeam1_2284(int x, int y)
{
    return new (Backdrop::pool.create()) SBGreenSupportBeam1_2284(x, y);
}
class SBIronWall2_2285 : public QuickBackdrop
{
public:
    SBIronWall2_2285(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_IronWall 2", 13);
#endif
        flags |= BACKGROUND;
        width = 192;
        height = 128;
        image = get_internal_image(2842);
        outline = 0;
    }
};
FrameObject * create_sbironwall2_2285(int x, int y)
{
    return new (QuickBackdrop::pool.create()) SBIronWall2_2285(x, y);
}
class SBHangingWheel2_2286 : public Backdrop
{
public:
    SBHangingWheel2_2286(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_HangingWheel 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5892);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbhangingwheel2_2286(int x, int y)
{
    return new (Backdrop::pool.create()) SBHangingWheel2_2286(x, y);
}
class SBGrapplerRope_2287 : public Backdrop
{
public:
    SBGrapplerRope_2287(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GrapplerRope", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1400);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbgrapplerrope_2287(int x, int y)
{
    return new (Backdrop::pool.create()) SBGrapplerRope_2287(x, y);
}
static Image* images_levelscrollingchainup_2288_0_0[1];
static Direction direction_levelscrollingchainup_2288_0_0 = {0, 50, 50, 0, 1, images_levelscrollingchainup_2288_0_0, 1};
static Animation anim_levelscrollingchainup_2288_0 = {&direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, NULL, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0, &direction_levelscrollingchainup_2288_0_0};
static Animation * anim_array_levelscrollingchainup_2288[1] = {&anim_levelscrollingchainup_2288_0};
static Animations anim_levelscrollingchainup_2288 = {1, &anim_array_levelscrollingchainup_2288[0]};
static bool anim_levelscrollingchainup_2288_initialized;
class LevelScrollingChainUp_2288 : public Active
{
public:
    LevelScrollingChainUp_2288(int x, int y) : Active(x, y, LevelScrollingChainUp_2288_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingChainUp", 22);
#endif
        this->animations = &anim_levelscrollingchainup_2288;
        if (!anim_levelscrollingchainup_2288_initialized) {
            anim_levelscrollingchainup_2288_initialized = true;
            images_levelscrollingchainup_2288_0_0[0] = get_internal_image(5089);
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
FrameObject * create_levelscrollingchainup_2288(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingChainUp_2288(x, y);
}
static Image* images_levelscrollingchaindown_2289_0_0[1];
static Direction direction_levelscrollingchaindown_2289_0_0 = {0, 50, 50, 0, 1, images_levelscrollingchaindown_2289_0_0, 1};
static Animation anim_levelscrollingchaindown_2289_0 = {&direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, NULL, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0, &direction_levelscrollingchaindown_2289_0_0};
static Animation * anim_array_levelscrollingchaindown_2289[1] = {&anim_levelscrollingchaindown_2289_0};
static Animations anim_levelscrollingchaindown_2289 = {1, &anim_array_levelscrollingchaindown_2289[0]};
static bool anim_levelscrollingchaindown_2289_initialized;
class LevelScrollingChainDown_2289 : public Active
{
public:
    LevelScrollingChainDown_2289(int x, int y) : Active(x, y, LevelScrollingChainDown_2289_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingChainDown", 24);
#endif
        this->animations = &anim_levelscrollingchaindown_2289;
        if (!anim_levelscrollingchaindown_2289_initialized) {
            anim_levelscrollingchaindown_2289_initialized = true;
            images_levelscrollingchaindown_2289_0_0[0] = get_internal_image(5089);
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
FrameObject * create_levelscrollingchaindown_2289(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingChainDown_2289(x, y);
}
static Image* images_gimmickcrusherchain_2290_0_0[1];
static Direction direction_gimmickcrusherchain_2290_0_0 = {0, 50, 50, 0, 1, images_gimmickcrusherchain_2290_0_0, 1};
static Animation anim_gimmickcrusherchain_2290_0 = {&direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, NULL, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0, &direction_gimmickcrusherchain_2290_0_0};
static Animation * anim_array_gimmickcrusherchain_2290[1] = {&anim_gimmickcrusherchain_2290_0};
static Animations anim_gimmickcrusherchain_2290 = {1, &anim_array_gimmickcrusherchain_2290[0]};
static bool anim_gimmickcrusherchain_2290_initialized;
class GimmickCrusherChain_2290 : public Active
{
public:
    GimmickCrusherChain_2290(int x, int y) : Active(x, y, GimmickCrusherChain_2290_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_CrusherChain", 20);
#endif
        this->animations = &anim_gimmickcrusherchain_2290;
        if (!anim_gimmickcrusherchain_2290_initialized) {
            anim_gimmickcrusherchain_2290_initialized = true;
            images_gimmickcrusherchain_2290_0_0[0] = get_internal_image(5437);
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
FrameObject * create_gimmickcrusherchain_2290(int x, int y)
{
    return new (Active::pool.create()) GimmickCrusherChain_2290(x, y);
}
static Image* images_gimmickchainwallup_2291_0_0[1];
static Direction direction_gimmickchainwallup_2291_0_0 = {0, 50, 50, 0, 1, images_gimmickchainwallup_2291_0_0, 1};
static Animation anim_gimmickchainwallup_2291_0 = {&direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, NULL, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0, &direction_gimmickchainwallup_2291_0_0};
static Animation * anim_array_gimmickchainwallup_2291[1] = {&anim_gimmickchainwallup_2291_0};
static Animations anim_gimmickchainwallup_2291 = {1, &anim_array_gimmickchainwallup_2291[0]};
static bool anim_gimmickchainwallup_2291_initialized;
class GimmickChainWallUp_2291 : public Active
{
public:
    GimmickChainWallUp_2291(int x, int y) : Active(x, y, GimmickChainWallUp_2291_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_ChainWallUp", 19);
#endif
        this->animations = &anim_gimmickchainwallup_2291;
        if (!anim_gimmickchainwallup_2291_initialized) {
            anim_gimmickchainwallup_2291_initialized = true;
            images_gimmickchainwallup_2291_0_0[0] = get_internal_image(5863);
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
FrameObject * create_gimmickchainwallup_2291(int x, int y)
{
    return new (Active::pool.create()) GimmickChainWallUp_2291(x, y);
}
static Image* images_gimmickchainwalldown_2292_0_0[1];
static Direction direction_gimmickchainwalldown_2292_0_0 = {0, 50, 50, 0, 1, images_gimmickchainwalldown_2292_0_0, 1};
static Animation anim_gimmickchainwalldown_2292_0 = {&direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, NULL, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0, &direction_gimmickchainwalldown_2292_0_0};
static Animation * anim_array_gimmickchainwalldown_2292[1] = {&anim_gimmickchainwalldown_2292_0};
static Animations anim_gimmickchainwalldown_2292 = {1, &anim_array_gimmickchainwalldown_2292[0]};
static bool anim_gimmickchainwalldown_2292_initialized;
class GimmickChainWallDown_2292 : public Active
{
public:
    GimmickChainWallDown_2292(int x, int y) : Active(x, y, GimmickChainWallDown_2292_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_ChainWallDown", 21);
#endif
        this->animations = &anim_gimmickchainwalldown_2292;
        if (!anim_gimmickchainwalldown_2292_initialized) {
            anim_gimmickchainwalldown_2292_initialized = true;
            images_gimmickchainwalldown_2292_0_0[0] = get_internal_image(3300);
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
FrameObject * create_gimmickchainwalldown_2292(int x, int y)
{
    return new (Active::pool.create()) GimmickChainWallDown_2292(x, y);
}
static Image* images_bosscrystalspire_2293_0_0[1];
static Direction direction_bosscrystalspire_2293_0_0 = {0, 50, 50, 0, 1, images_bosscrystalspire_2293_0_0, 1};
static Animation anim_bosscrystalspire_2293_0 = {&direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, NULL, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0, &direction_bosscrystalspire_2293_0_0};
static Animation * anim_array_bosscrystalspire_2293[1] = {&anim_bosscrystalspire_2293_0};
static Animations anim_bosscrystalspire_2293 = {1, &anim_array_bosscrystalspire_2293[0]};
static bool anim_bosscrystalspire_2293_initialized;
class BossCrystalSpire_2293 : public Active
{
public:
    BossCrystalSpire_2293(int x, int y) : Active(x, y, BossCrystalSpire_2293_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpire", 17);
#endif
        this->animations = &anim_bosscrystalspire_2293;
        if (!anim_bosscrystalspire_2293_initialized) {
            anim_bosscrystalspire_2293_initialized = true;
            images_bosscrystalspire_2293_0_0[0] = get_internal_image(3129);
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
FrameObject * create_bosscrystalspire_2293(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpire_2293(x, y);
}
static Image* images_bosscrystalspikespawner1_2294_0_0[1];
static Direction direction_bosscrystalspikespawner1_2294_0_0 = {0, 50, 50, 0, 1, images_bosscrystalspikespawner1_2294_0_0, 1};
static Animation anim_bosscrystalspikespawner1_2294_0 = {&direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, NULL, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0, &direction_bosscrystalspikespawner1_2294_0_0};
static Animation * anim_array_bosscrystalspikespawner1_2294[1] = {&anim_bosscrystalspikespawner1_2294_0};
static Animations anim_bosscrystalspikespawner1_2294 = {1, &anim_array_bosscrystalspikespawner1_2294[0]};
static bool anim_bosscrystalspikespawner1_2294_initialized;
class BossCrystalSpikeSpawner1_2294 : public Active
{
public:
    BossCrystalSpikeSpawner1_2294(int x, int y) : Active(x, y, BossCrystalSpikeSpawner1_2294_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpikeSpawner 1", 26);
#endif
        set_visible(false);
        this->animations = &anim_bosscrystalspikespawner1_2294;
        if (!anim_bosscrystalspikespawner1_2294_initialized) {
            anim_bosscrystalspikespawner1_2294_initialized = true;
            images_bosscrystalspikespawner1_2294_0_0[0] = get_internal_image(5927);
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
FrameObject * create_bosscrystalspikespawner1_2294(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpikeSpawner1_2294(x, y);
}
static Image* images_bosscrystalspikespawner2_2295_0_0[1];
static Direction direction_bosscrystalspikespawner2_2295_0_0 = {0, 50, 50, 0, 1, images_bosscrystalspikespawner2_2295_0_0, 1};
static Animation anim_bosscrystalspikespawner2_2295_0 = {&direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, NULL, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0, &direction_bosscrystalspikespawner2_2295_0_0};
static Animation * anim_array_bosscrystalspikespawner2_2295[1] = {&anim_bosscrystalspikespawner2_2295_0};
static Animations anim_bosscrystalspikespawner2_2295 = {1, &anim_array_bosscrystalspikespawner2_2295[0]};
static bool anim_bosscrystalspikespawner2_2295_initialized;
class BossCrystalSpikeSpawner2_2295 : public Active
{
public:
    BossCrystalSpikeSpawner2_2295(int x, int y) : Active(x, y, BossCrystalSpikeSpawner2_2295_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CrystalSpikeSpawner 2", 26);
#endif
        set_visible(false);
        this->animations = &anim_bosscrystalspikespawner2_2295;
        if (!anim_bosscrystalspikespawner2_2295_initialized) {
            anim_bosscrystalspikespawner2_2295_initialized = true;
            images_bosscrystalspikespawner2_2295_0_0[0] = get_internal_image(5935);
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
FrameObject * create_bosscrystalspikespawner2_2295(int x, int y)
{
    return new (Active::pool.create()) BossCrystalSpikeSpawner2_2295(x, y);
}
class SBGreenSupportBeam2_2296 : public Backdrop
{
public:
    SBGreenSupportBeam2_2296(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_GreenSupportBeam 2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12259);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbgreensupportbeam2_2296(int x, int y)
{
    return new (Backdrop::pool.create()) SBGreenSupportBeam2_2296(x, y);
}
class SBHangingWheel1_2297 : public Backdrop
{
public:
    SBHangingWheel1_2297(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SB_HangingWheel 1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2714);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sbhangingwheel1_2297(int x, int y)
{
    return new (Backdrop::pool.create()) SBHangingWheel1_2297(x, y);
}
static Image* images_enemymagnetizerhand_2298_0_0[6];
static Direction direction_enemymagnetizerhand_2298_0_0 = {0, 30, 30, 0, -1, images_enemymagnetizerhand_2298_0_0, 6};
static Animation anim_enemymagnetizerhand_2298_0 = {&direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, NULL, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0, &direction_enemymagnetizerhand_2298_0_0};
static Image* images_enemymagnetizerhand_2298_7_0[2];
static Direction direction_enemymagnetizerhand_2298_7_0 = {0, 50, 50, 0, -1, images_enemymagnetizerhand_2298_7_0, 2};
static Animation anim_enemymagnetizerhand_2298_7 = {&direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, NULL, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0, &direction_enemymagnetizerhand_2298_7_0};
static Image* images_enemymagnetizerhand_2298_8_0[3];
static Direction direction_enemymagnetizerhand_2298_8_0 = {0, 50, 50, 0, -1, images_enemymagnetizerhand_2298_8_0, 3};
static Animation anim_enemymagnetizerhand_2298_8 = {&direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, NULL, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0, &direction_enemymagnetizerhand_2298_8_0};
static Animation * anim_array_enemymagnetizerhand_2298[9] = {&anim_enemymagnetizerhand_2298_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemymagnetizerhand_2298_7, &anim_enemymagnetizerhand_2298_8};
static Animations anim_enemymagnetizerhand_2298 = {9, &anim_array_enemymagnetizerhand_2298[0]};
static bool anim_enemymagnetizerhand_2298_initialized;
class EnemyMagnetizerHand_2298 : public Active
{
public:
    EnemyMagnetizerHand_2298(int x, int y) : Active(x, y, EnemyMagnetizerHand_2298_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_MagnetizerHand", 20);
#endif
        this->animations = &anim_enemymagnetizerhand_2298;
        if (!anim_enemymagnetizerhand_2298_initialized) {
            anim_enemymagnetizerhand_2298_initialized = true;
            images_enemymagnetizerhand_2298_0_0[0] = get_internal_image(4123);
            images_enemymagnetizerhand_2298_0_0[1] = get_internal_image(4123);
            images_enemymagnetizerhand_2298_0_0[2] = get_internal_image(4124);
            images_enemymagnetizerhand_2298_0_0[3] = get_internal_image(4127);
            images_enemymagnetizerhand_2298_0_0[4] = get_internal_image(4127);
            images_enemymagnetizerhand_2298_0_0[5] = get_internal_image(4124);
            images_enemymagnetizerhand_2298_7_0[0] = get_internal_image(4124);
            images_enemymagnetizerhand_2298_7_0[1] = get_internal_image(4128);
            images_enemymagnetizerhand_2298_8_0[0] = get_internal_image(4129);
            images_enemymagnetizerhand_2298_8_0[1] = get_internal_image(4132);
            images_enemymagnetizerhand_2298_8_0[2] = get_internal_image(5053);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 3);
    }
};
FrameObject * create_enemymagnetizerhand_2298(int x, int y)
{
    return new (Active::pool.create()) EnemyMagnetizerHand_2298(x, y);
}
static Image* images_enemymagnetizerline_2299_0_0[1];
static Direction direction_enemymagnetizerline_2299_0_0 = {0, 100, 100, 0, 1, images_enemymagnetizerline_2299_0_0, 1};
static Animation anim_enemymagnetizerline_2299_0 = {&direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, NULL, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0, &direction_enemymagnetizerline_2299_0_0};
static Image* images_enemymagnetizerline_2299_8_0[3];
static Direction direction_enemymagnetizerline_2299_8_0 = {0, 50, 50, 0, -1, images_enemymagnetizerline_2299_8_0, 3};
static Animation anim_enemymagnetizerline_2299_8 = {&direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, NULL, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0, &direction_enemymagnetizerline_2299_8_0};
static Animation * anim_array_enemymagnetizerline_2299[9] = {&anim_enemymagnetizerline_2299_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemymagnetizerline_2299_8};
static Animations anim_enemymagnetizerline_2299 = {9, &anim_array_enemymagnetizerline_2299[0]};
static bool anim_enemymagnetizerline_2299_initialized;
class EnemyMagnetizerLine_2299 : public Active
{
public:
    EnemyMagnetizerLine_2299(int x, int y) : Active(x, y, EnemyMagnetizerLine_2299_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_MagnetizerLine", 20);
#endif
        this->animations = &anim_enemymagnetizerline_2299;
        if (!anim_enemymagnetizerline_2299_initialized) {
            anim_enemymagnetizerline_2299_initialized = true;
            images_enemymagnetizerline_2299_0_0[0] = get_internal_image(5054);
            images_enemymagnetizerline_2299_8_0[0] = get_internal_image(5057);
            images_enemymagnetizerline_2299_8_0[1] = get_internal_image(5058);
            images_enemymagnetizerline_2299_8_0[2] = get_internal_image(5059);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 3);
    }
};
FrameObject * create_enemymagnetizerline_2299(int x, int y)
{
    return new (Active::pool.create()) EnemyMagnetizerLine_2299(x, y);
}
static Image* images_enemymagnetizer_2300_0_0[4];
static Direction direction_enemymagnetizer_2300_0_0 = {0, 90, 90, 0, -1, images_enemymagnetizer_2300_0_0, 4};
static Animation anim_enemymagnetizer_2300_0 = {&direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, NULL, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0, &direction_enemymagnetizer_2300_0_0};
static Image* images_enemymagnetizer_2300_7_0[8];
static Direction direction_enemymagnetizer_2300_7_0 = {0, 90, 90, 0, -1, images_enemymagnetizer_2300_7_0, 8};
static Animation anim_enemymagnetizer_2300_7 = {&direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, NULL, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0, &direction_enemymagnetizer_2300_7_0};
static Animation * anim_array_enemymagnetizer_2300[8] = {&anim_enemymagnetizer_2300_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemymagnetizer_2300_7};
static Animations anim_enemymagnetizer_2300 = {8, &anim_array_enemymagnetizer_2300[0]};
static bool anim_enemymagnetizer_2300_initialized;
class EnemyMagnetizer_2300 : public Active
{
public:
    EnemyMagnetizer_2300(int x, int y) : Active(x, y, EnemyMagnetizer_2300_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Magnetizer", 16);
#endif
        this->animations = &anim_enemymagnetizer_2300;
        if (!anim_enemymagnetizer_2300_initialized) {
            anim_enemymagnetizer_2300_initialized = true;
            images_enemymagnetizer_2300_0_0[0] = get_internal_image(9031);
            images_enemymagnetizer_2300_0_0[1] = get_internal_image(8960);
            images_enemymagnetizer_2300_0_0[2] = get_internal_image(9032);
            images_enemymagnetizer_2300_0_0[3] = get_internal_image(9030);
            images_enemymagnetizer_2300_7_0[0] = get_internal_image(5103);
            images_enemymagnetizer_2300_7_0[1] = get_internal_image(5106);
            images_enemymagnetizer_2300_7_0[2] = get_internal_image(5421);
            images_enemymagnetizer_2300_7_0[3] = get_internal_image(5423);
            images_enemymagnetizer_2300_7_0[4] = get_internal_image(5424);
            images_enemymagnetizer_2300_7_0[5] = get_internal_image(5425);
            images_enemymagnetizer_2300_7_0[6] = get_internal_image(5426);
            images_enemymagnetizer_2300_7_0[7] = get_internal_image(5427);
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
        alterables->values.set(6, 192);
    }
};
FrameObject * create_enemymagnetizer_2300(int x, int y)
{
    return new (Active::pool.create()) EnemyMagnetizer_2300(x, y);
}
static Image* images_enemymagnetizercrate_2301_0_0[1];
static Direction direction_enemymagnetizercrate_2301_0_0 = {0, 100, 100, 0, 1, images_enemymagnetizercrate_2301_0_0, 1};
static Animation anim_enemymagnetizercrate_2301_0 = {&direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, NULL, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0, &direction_enemymagnetizercrate_2301_0_0};
static Animation * anim_array_enemymagnetizercrate_2301[1] = {&anim_enemymagnetizercrate_2301_0};
static Animations anim_enemymagnetizercrate_2301 = {1, &anim_array_enemymagnetizercrate_2301[0]};
static bool anim_enemymagnetizercrate_2301_initialized;
class EnemyMagnetizerCrate_2301 : public Active
{
public:
    EnemyMagnetizerCrate_2301(int x, int y) : Active(x, y, EnemyMagnetizerCrate_2301_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Enemy_MagnetizerCrate", 21);
#endif
        this->animations = &anim_enemymagnetizercrate_2301;
        if (!anim_enemymagnetizercrate_2301_initialized) {
            anim_enemymagnetizercrate_2301_initialized = true;
            images_enemymagnetizercrate_2301_0_0[0] = get_internal_image(5865);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(7, 3);
    }
};
FrameObject * create_enemymagnetizercrate_2301(int x, int y)
{
    return new (Active::pool.create()) EnemyMagnetizerCrate_2301(x, y);
}
static Image* images_breakablefloor1_2302_0_0[1];
static Direction direction_breakablefloor1_2302_0_0 = {0, 50, 50, 0, 1, images_breakablefloor1_2302_0_0, 1};
static Animation anim_breakablefloor1_2302_0 = {&direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, NULL, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0, &direction_breakablefloor1_2302_0_0};
static Animation * anim_array_breakablefloor1_2302[1] = {&anim_breakablefloor1_2302_0};
static Animations anim_breakablefloor1_2302 = {1, &anim_array_breakablefloor1_2302[0]};
static bool anim_breakablefloor1_2302_initialized;
class BreakableFloor1_2302 : public Active
{
public:
    BreakableFloor1_2302(int x, int y) : Active(x, y, BreakableFloor1_2302_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 1", 16);
#endif
        this->animations = &anim_breakablefloor1_2302;
        if (!anim_breakablefloor1_2302_initialized) {
            anim_breakablefloor1_2302_initialized = true;
            images_breakablefloor1_2302_0_0[0] = get_internal_image(5113);
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
FrameObject * create_breakablefloor1_2302(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor1_2302(x, y);
}
static Image* images_breakablefloor2_2303_0_0[1];
static Direction direction_breakablefloor2_2303_0_0 = {0, 50, 50, 0, 1, images_breakablefloor2_2303_0_0, 1};
static Animation anim_breakablefloor2_2303_0 = {&direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, NULL, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0, &direction_breakablefloor2_2303_0_0};
static Animation * anim_array_breakablefloor2_2303[1] = {&anim_breakablefloor2_2303_0};
static Animations anim_breakablefloor2_2303 = {1, &anim_array_breakablefloor2_2303[0]};
static bool anim_breakablefloor2_2303_initialized;
class BreakableFloor2_2303 : public Active
{
public:
    BreakableFloor2_2303(int x, int y) : Active(x, y, BreakableFloor2_2303_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 2", 16);
#endif
        this->animations = &anim_breakablefloor2_2303;
        if (!anim_breakablefloor2_2303_initialized) {
            anim_breakablefloor2_2303_initialized = true;
            images_breakablefloor2_2303_0_0[0] = get_internal_image(4130);
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
FrameObject * create_breakablefloor2_2303(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor2_2303(x, y);
}
static Image* images_enemypelletizer_2304_0_0[4];
static Direction direction_enemypelletizer_2304_0_0 = {0, 90, 90, 0, -1, images_enemypelletizer_2304_0_0, 4};
static Image* images_enemypelletizer_2304_0_1[4];
static Direction direction_enemypelletizer_2304_0_1 = {1, 90, 90, 0, -1, images_enemypelletizer_2304_0_1, 4};
static Image* images_enemypelletizer_2304_0_2[4];
static Direction direction_enemypelletizer_2304_0_2 = {2, 90, 90, 0, -1, images_enemypelletizer_2304_0_2, 4};
static Animation anim_enemypelletizer_2304_0 = {&direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_1, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, &direction_enemypelletizer_2304_0_2, NULL, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0, &direction_enemypelletizer_2304_0_0};
static Animation * anim_array_enemypelletizer_2304[1] = {&anim_enemypelletizer_2304_0};
static Animations anim_enemypelletizer_2304 = {1, &anim_array_enemypelletizer_2304[0]};
static bool anim_enemypelletizer_2304_initialized;
class EnemyPelletizer_2304 : public Active
{
public:
    EnemyPelletizer_2304(int x, int y) : Active(x, y, EnemyPelletizer_2304_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Pelletizer", 16);
#endif
        this->animations = &anim_enemypelletizer_2304;
        if (!anim_enemypelletizer_2304_initialized) {
            anim_enemypelletizer_2304_initialized = true;
            images_enemypelletizer_2304_0_0[0] = get_internal_image(5413);
            images_enemypelletizer_2304_0_0[1] = get_internal_image(5407);
            images_enemypelletizer_2304_0_0[2] = get_internal_image(5411);
            images_enemypelletizer_2304_0_0[3] = get_internal_image(5509);
            images_enemypelletizer_2304_0_1[0] = get_internal_image(5510);
            images_enemypelletizer_2304_0_1[1] = get_internal_image(5511);
            images_enemypelletizer_2304_0_1[2] = get_internal_image(5513);
            images_enemypelletizer_2304_0_1[3] = get_internal_image(5514);
            images_enemypelletizer_2304_0_2[0] = get_internal_image(3598);
            images_enemypelletizer_2304_0_2[1] = get_internal_image(5420);
            images_enemypelletizer_2304_0_2[2] = get_internal_image(5402);
            images_enemypelletizer_2304_0_2[3] = get_internal_image(5386);
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
FrameObject * create_enemypelletizer_2304(int x, int y)
{
    return new (Active::pool.create()) EnemyPelletizer_2304(x, y);
}
static Image* images_gimmickchainwallmaskdown_2305_0_0[1];
static Direction direction_gimmickchainwallmaskdown_2305_0_0 = {0, 50, 50, 0, 1, images_gimmickchainwallmaskdown_2305_0_0, 1};
static Animation anim_gimmickchainwallmaskdown_2305_0 = {&direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, NULL, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0, &direction_gimmickchainwallmaskdown_2305_0_0};
static Animation * anim_array_gimmickchainwallmaskdown_2305[1] = {&anim_gimmickchainwallmaskdown_2305_0};
static Animations anim_gimmickchainwallmaskdown_2305 = {1, &anim_array_gimmickchainwallmaskdown_2305[0]};
static bool anim_gimmickchainwallmaskdown_2305_initialized;
class GimmickChainWallMaskDown_2305 : public Active
{
public:
    GimmickChainWallMaskDown_2305(int x, int y) : Active(x, y, GimmickChainWallMaskDown_2305_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_ChainWallMaskDown", 25);
#endif
        set_visible(false);
        this->animations = &anim_gimmickchainwallmaskdown_2305;
        if (!anim_gimmickchainwallmaskdown_2305_initialized) {
            anim_gimmickchainwallmaskdown_2305_initialized = true;
            images_gimmickchainwallmaskdown_2305_0_0[0] = get_internal_image(5014);
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
FrameObject * create_gimmickchainwallmaskdown_2305(int x, int y)
{
    return new (Active::pool.create()) GimmickChainWallMaskDown_2305(x, y);
}
static Image* images_gimmickcrusherplatform_2306_0_0[8];
static Direction direction_gimmickcrusherplatform_2306_0_0 = {0, 0, 0, 0, -1, images_gimmickcrusherplatform_2306_0_0, 8};
static Animation anim_gimmickcrusherplatform_2306_0 = {&direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, NULL, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0, &direction_gimmickcrusherplatform_2306_0_0};
static Animation * anim_array_gimmickcrusherplatform_2306[1] = {&anim_gimmickcrusherplatform_2306_0};
static Animations anim_gimmickcrusherplatform_2306 = {1, &anim_array_gimmickcrusherplatform_2306[0]};
static bool anim_gimmickcrusherplatform_2306_initialized;
class GimmickCrusherPlatform_2306 : public Active
{
public:
    GimmickCrusherPlatform_2306(int x, int y) : Active(x, y, GimmickCrusherPlatform_2306_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_CrusherPlatform", 23);
#endif
        this->animations = &anim_gimmickcrusherplatform_2306;
        if (!anim_gimmickcrusherplatform_2306_initialized) {
            anim_gimmickcrusherplatform_2306_initialized = true;
            images_gimmickcrusherplatform_2306_0_0[0] = get_internal_image(5502);
            images_gimmickcrusherplatform_2306_0_0[1] = get_internal_image(5502);
            images_gimmickcrusherplatform_2306_0_0[2] = get_internal_image(5502);
            images_gimmickcrusherplatform_2306_0_0[3] = get_internal_image(5505);
            images_gimmickcrusherplatform_2306_0_0[4] = get_internal_image(5504);
            images_gimmickcrusherplatform_2306_0_0[5] = get_internal_image(5504);
            images_gimmickcrusherplatform_2306_0_0[6] = get_internal_image(5504);
            images_gimmickcrusherplatform_2306_0_0[7] = get_internal_image(5505);
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
FrameObject * create_gimmickcrusherplatform_2306(int x, int y)
{
    return new (Active::pool.create()) GimmickCrusherPlatform_2306(x, y);
}
static Image* images_gimmickchainwallmaskup_2307_0_0[1];
static Direction direction_gimmickchainwallmaskup_2307_0_0 = {0, 50, 50, 0, 1, images_gimmickchainwallmaskup_2307_0_0, 1};
static Animation anim_gimmickchainwallmaskup_2307_0 = {&direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, NULL, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0, &direction_gimmickchainwallmaskup_2307_0_0};
static Animation * anim_array_gimmickchainwallmaskup_2307[1] = {&anim_gimmickchainwallmaskup_2307_0};
static Animations anim_gimmickchainwallmaskup_2307 = {1, &anim_array_gimmickchainwallmaskup_2307[0]};
static bool anim_gimmickchainwallmaskup_2307_initialized;
class GimmickChainWallMaskUp_2307 : public Active
{
public:
    GimmickChainWallMaskUp_2307(int x, int y) : Active(x, y, GimmickChainWallMaskUp_2307_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_ChainWallMaskUp", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickchainwallmaskup_2307;
        if (!anim_gimmickchainwallmaskup_2307_initialized) {
            anim_gimmickchainwallmaskup_2307_initialized = true;
            images_gimmickchainwallmaskup_2307_0_0[0] = get_internal_image(5440);
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
FrameObject * create_gimmickchainwallmaskup_2307(int x, int y)
{
    return new (Active::pool.create()) GimmickChainWallMaskUp_2307(x, y);
}
static Image* images_gimmicksbbar_2308_0_0[4];
static Direction direction_gimmicksbbar_2308_0_0 = {0, 50, 50, 0, -1, images_gimmicksbbar_2308_0_0, 4};
static Animation anim_gimmicksbbar_2308_0 = {&direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, NULL, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0, &direction_gimmicksbbar_2308_0_0};
static Animation * anim_array_gimmicksbbar_2308[1] = {&anim_gimmicksbbar_2308_0};
static Animations anim_gimmicksbbar_2308 = {1, &anim_array_gimmicksbbar_2308[0]};
static bool anim_gimmicksbbar_2308_initialized;
class GimmickSBBar_2308 : public Active
{
public:
    GimmickSBBar_2308(int x, int y) : Active(x, y, GimmickSBBar_2308_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_SB_Bar", 14);
#endif
        this->animations = &anim_gimmicksbbar_2308;
        if (!anim_gimmicksbbar_2308_initialized) {
            anim_gimmicksbbar_2308_initialized = true;
            images_gimmicksbbar_2308_0_0[0] = get_internal_image(13185);
            images_gimmicksbbar_2308_0_0[1] = get_internal_image(13186);
            images_gimmicksbbar_2308_0_0[2] = get_internal_image(13187);
            images_gimmicksbbar_2308_0_0[3] = get_internal_image(13188);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 168);
    }
};
FrameObject * create_gimmicksbbar_2308(int x, int y)
{
    return new (Active::pool.create()) GimmickSBBar_2308(x, y);
}
static Image* images_gimmicksbbarmask_2309_0_0[1];
static Direction direction_gimmicksbbarmask_2309_0_0 = {0, 50, 50, 0, 1, images_gimmicksbbarmask_2309_0_0, 1};
static Animation anim_gimmicksbbarmask_2309_0 = {&direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, NULL, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0, &direction_gimmicksbbarmask_2309_0_0};
static Animation * anim_array_gimmicksbbarmask_2309[1] = {&anim_gimmicksbbarmask_2309_0};
static Animations anim_gimmicksbbarmask_2309 = {1, &anim_array_gimmicksbbarmask_2309[0]};
static bool anim_gimmicksbbarmask_2309_initialized;
class GimmickSBBarMask_2309 : public Active
{
public:
    GimmickSBBarMask_2309(int x, int y) : Active(x, y, GimmickSBBarMask_2309_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_SB_BarMask", 18);
#endif
        set_visible(false);
        this->animations = &anim_gimmicksbbarmask_2309;
        if (!anim_gimmicksbbarmask_2309_initialized) {
            anim_gimmicksbbarmask_2309_initialized = true;
            images_gimmicksbbarmask_2309_0_0[0] = get_internal_image(5874);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 168);
    }
};
FrameObject * create_gimmicksbbarmask_2309(int x, int y)
{
    return new (Active::pool.create()) GimmickSBBarMask_2309(x, y);
}
static Image* images_levelsbmovingblock1_2310_0_0[1];
static Direction direction_levelsbmovingblock1_2310_0_0 = {0, 50, 50, 0, 1, images_levelsbmovingblock1_2310_0_0, 1};
static Animation anim_levelsbmovingblock1_2310_0 = {&direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, NULL, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0, &direction_levelsbmovingblock1_2310_0_0};
static Animation * anim_array_levelsbmovingblock1_2310[1] = {&anim_levelsbmovingblock1_2310_0};
static Animations anim_levelsbmovingblock1_2310 = {1, &anim_array_levelsbmovingblock1_2310[0]};
static bool anim_levelsbmovingblock1_2310_initialized;
class LevelSBMovingBlock1_2310 : public Active
{
public:
    LevelSBMovingBlock1_2310(int x, int y) : Active(x, y, LevelSBMovingBlock1_2310_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_SBMovingBlock 1", 21);
#endif
        this->animations = &anim_levelsbmovingblock1_2310;
        if (!anim_levelsbmovingblock1_2310_initialized) {
            anim_levelsbmovingblock1_2310_initialized = true;
            images_levelsbmovingblock1_2310_0_0[0] = get_internal_image(11654);
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
FrameObject * create_levelsbmovingblock1_2310(int x, int y)
{
    return new (Active::pool.create()) LevelSBMovingBlock1_2310(x, y);
}
static Image* images_gimmickswingspawner2_2311_0_0[1];
static Direction direction_gimmickswingspawner2_2311_0_0 = {0, 50, 50, 0, 1, images_gimmickswingspawner2_2311_0_0, 1};
static Animation anim_gimmickswingspawner2_2311_0 = {&direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, NULL, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0, &direction_gimmickswingspawner2_2311_0_0};
static Animation * anim_array_gimmickswingspawner2_2311[1] = {&anim_gimmickswingspawner2_2311_0};
static Animations anim_gimmickswingspawner2_2311 = {1, &anim_array_gimmickswingspawner2_2311[0]};
static bool anim_gimmickswingspawner2_2311_initialized;
class GimmickSwingSpawner2_2311 : public Active
{
public:
    GimmickSwingSpawner2_2311(int x, int y) : Active(x, y, GimmickSwingSpawner2_2311_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Spawner 2", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickswingspawner2_2311;
        if (!anim_gimmickswingspawner2_2311_initialized) {
            anim_gimmickswingspawner2_2311_initialized = true;
            images_gimmickswingspawner2_2311_0_0[0] = get_internal_image(7992);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_gimmickswingspawner2_2311(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingSpawner2_2311(x, y);
}
