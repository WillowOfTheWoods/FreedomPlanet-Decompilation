#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_effectsshield_306_0_0[3];
static Direction direction_effectsshield_306_0_0 = {0, 0, 0, 0, 1, images_effectsshield_306_0_0, 3};
static Animation anim_effectsshield_306_0 = {&direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, NULL, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0, &direction_effectsshield_306_0_0};
static Animation * anim_array_effectsshield_306[1] = {&anim_effectsshield_306_0};
static Animations anim_effectsshield_306 = {1, &anim_array_effectsshield_306[0]};
static bool anim_effectsshield_306_initialized;
class EffectsShield_306 : public Active
{
public:
    EffectsShield_306(int x, int y) : Active(x, y, EffectsShield_306_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Shield", 14);
#endif
        this->animations = &anim_effectsshield_306;
        if (!anim_effectsshield_306_initialized) {
            anim_effectsshield_306_initialized = true;
            images_effectsshield_306_0_0[0] = get_internal_image(67);
            images_effectsshield_306_0_0[1] = get_internal_image(48);
            images_effectsshield_306_0_0[2] = get_internal_image(474);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(20);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectsshield_306(int x, int y)
{
    return new (Active::pool.create()) EffectsShield_306(x, y);
}
static Image* images_effectsheart_307_0_0[1];
static Direction direction_effectsheart_307_0_0 = {0, 40, 40, 0, 1, images_effectsheart_307_0_0, 1};
static Animation anim_effectsheart_307_0 = {&direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, NULL, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0, &direction_effectsheart_307_0_0};
static Image* images_effectsheart_307_4_0[4];
static Direction direction_effectsheart_307_4_0 = {0, 50, 50, 0, 1, images_effectsheart_307_4_0, 4};
static Animation anim_effectsheart_307_4 = {&direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, NULL, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0, &direction_effectsheart_307_4_0};
static Image* images_effectsheart_307_7_0[3];
static Direction direction_effectsheart_307_7_0 = {0, 0, 0, 0, -1, images_effectsheart_307_7_0, 3};
static Animation anim_effectsheart_307_7 = {&direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, NULL, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0, &direction_effectsheart_307_7_0};
static Animation * anim_array_effectsheart_307[8] = {&anim_effectsheart_307_0, NULL, NULL, NULL, &anim_effectsheart_307_4, NULL, NULL, &anim_effectsheart_307_7};
static Animations anim_effectsheart_307 = {8, &anim_array_effectsheart_307[0]};
static bool anim_effectsheart_307_initialized;
class EffectsHeart_307 : public Active
{
public:
    EffectsHeart_307(int x, int y) : Active(x, y, EffectsHeart_307_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Heart", 13);
#endif
        this->animations = &anim_effectsheart_307;
        if (!anim_effectsheart_307_initialized) {
            anim_effectsheart_307_initialized = true;
            images_effectsheart_307_0_0[0] = get_internal_image(144);
            images_effectsheart_307_4_0[0] = get_internal_image(151);
            images_effectsheart_307_4_0[1] = get_internal_image(2310);
            images_effectsheart_307_4_0[2] = get_internal_image(152);
            images_effectsheart_307_4_0[3] = get_internal_image(306);
            images_effectsheart_307_7_0[0] = get_internal_image(8730);
            images_effectsheart_307_7_0[1] = get_internal_image(8729);
            images_effectsheart_307_7_0[2] = get_internal_image(8732);
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
FrameObject * create_effectsheart_307(int x, int y)
{
    return new (Active::pool.create()) EffectsHeart_307(x, y);
}
static Image* images_effectscolordot_308_0_0[1];
static Direction direction_effectscolordot_308_0_0 = {0, 40, 40, 0, -1, images_effectscolordot_308_0_0, 1};
static Image* images_effectscolordot_308_0_1[1];
static Direction direction_effectscolordot_308_0_1 = {1, 40, 40, 0, 1, images_effectscolordot_308_0_1, 1};
static Image* images_effectscolordot_308_0_2[1];
static Direction direction_effectscolordot_308_0_2 = {2, 40, 40, 0, 1, images_effectscolordot_308_0_2, 1};
static Image* images_effectscolordot_308_0_3[1];
static Direction direction_effectscolordot_308_0_3 = {3, 40, 40, 0, 1, images_effectscolordot_308_0_3, 1};
static Image* images_effectscolordot_308_0_4[1];
static Direction direction_effectscolordot_308_0_4 = {4, 40, 40, 0, 1, images_effectscolordot_308_0_4, 1};
static Image* images_effectscolordot_308_0_8[1];
static Direction direction_effectscolordot_308_0_8 = {8, 40, 40, 0, 1, images_effectscolordot_308_0_8, 1};
static Image* images_effectscolordot_308_0_31[2];
static Direction direction_effectscolordot_308_0_31 = {31, 50, 50, 0, 1, images_effectscolordot_308_0_31, 2};
static Animation anim_effectscolordot_308_0 = {&direction_effectscolordot_308_0_0, &direction_effectscolordot_308_0_1, &direction_effectscolordot_308_0_2, &direction_effectscolordot_308_0_3, &direction_effectscolordot_308_0_4, &direction_effectscolordot_308_0_4, NULL, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_8, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31, &direction_effectscolordot_308_0_31};
static Animation * anim_array_effectscolordot_308[1] = {&anim_effectscolordot_308_0};
static Animations anim_effectscolordot_308 = {1, &anim_array_effectscolordot_308[0]};
static bool anim_effectscolordot_308_initialized;
class EffectsColorDot_308 : public Active
{
public:
    EffectsColorDot_308(int x, int y) : Active(x, y, EffectsColorDot_308_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_ColorDot", 16);
#endif
        this->animations = &anim_effectscolordot_308;
        if (!anim_effectscolordot_308_initialized) {
            anim_effectscolordot_308_initialized = true;
            images_effectscolordot_308_0_0[0] = get_internal_image(12776);
            images_effectscolordot_308_0_1[0] = get_internal_image(3206);
            images_effectscolordot_308_0_2[0] = get_internal_image(3211);
            images_effectscolordot_308_0_3[0] = get_internal_image(3209);
            images_effectscolordot_308_0_4[0] = get_internal_image(3216);
            images_effectscolordot_308_0_8[0] = get_internal_image(3197);
            images_effectscolordot_308_0_31[0] = get_internal_image(12763);
            images_effectscolordot_308_0_31[1] = get_internal_image(12761);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        flags |= GLOBAL;
        alterables = &global_data_21_effects_colordot.value;
        if (!global_data_21_effects_colordot.init) {
            alterables->values.set(2, -3);
            global_data_21_effects_colordot.init = true;
        }
    }
};
FrameObject * create_effectscolordot_308(int x, int y)
{
    return new (Active::pool.create()) EffectsColorDot_308(x, y);
}
static Image* images_effectsexplosion01_309_4_0[11];
static Direction direction_effectsexplosion01_309_4_0 = {0, 40, 40, 0, 1, images_effectsexplosion01_309_4_0, 11};
static Animation anim_effectsexplosion01_309_4 = {&direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, NULL, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0, &direction_effectsexplosion01_309_4_0};
static Animation * anim_array_effectsexplosion01_309[5] = {NULL, NULL, NULL, NULL, &anim_effectsexplosion01_309_4};
static Animations anim_effectsexplosion01_309 = {5, &anim_array_effectsexplosion01_309[0]};
static bool anim_effectsexplosion01_309_initialized;
class EffectsExplosion01_309 : public Active
{
public:
    EffectsExplosion01_309(int x, int y) : Active(x, y, EffectsExplosion01_309_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effects_Explosion01", 19);
#endif
        this->animations = &anim_effectsexplosion01_309;
        if (!anim_effectsexplosion01_309_initialized) {
            anim_effectsexplosion01_309_initialized = true;
            images_effectsexplosion01_309_4_0[0] = get_internal_image(458);
            images_effectsexplosion01_309_4_0[1] = get_internal_image(459);
            images_effectsexplosion01_309_4_0[2] = get_internal_image(460);
            images_effectsexplosion01_309_4_0[3] = get_internal_image(461);
            images_effectsexplosion01_309_4_0[4] = get_internal_image(463);
            images_effectsexplosion01_309_4_0[5] = get_internal_image(464);
            images_effectsexplosion01_309_4_0[6] = get_internal_image(465);
            images_effectsexplosion01_309_4_0[7] = get_internal_image(466);
            images_effectsexplosion01_309_4_0[8] = get_internal_image(467);
            images_effectsexplosion01_309_4_0[9] = get_internal_image(468);
            images_effectsexplosion01_309_4_0[10] = get_internal_image(468);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_effectsexplosion01_309(int x, int y)
{
    return new (Active::pool.create()) EffectsExplosion01_309(x, y);
}
static Image* images_effectsplayersplode_310_0_0[5];
static Direction direction_effectsplayersplode_310_0_0 = {0, 0, 0, 0, 1, images_effectsplayersplode_310_0_0, 5};
static Animation anim_effectsplayersplode_310_0 = {&direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, NULL, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0, &direction_effectsplayersplode_310_0_0};
static Animation * anim_array_effectsplayersplode_310[1] = {&anim_effectsplayersplode_310_0};
static Animations anim_effectsplayersplode_310 = {1, &anim_array_effectsplayersplode_310[0]};
static bool anim_effectsplayersplode_310_initialized;
class EffectsPlayerSplode_310 : public Active
{
public:
    EffectsPlayerSplode_310(int x, int y) : Active(x, y, EffectsPlayerSplode_310_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_PlayerSplode", 20);
#endif
        this->animations = &anim_effectsplayersplode_310;
        if (!anim_effectsplayersplode_310_initialized) {
            anim_effectsplayersplode_310_initialized = true;
            images_effectsplayersplode_310_0_0[0] = get_internal_image(4923);
            images_effectsplayersplode_310_0_0[1] = get_internal_image(2728);
            images_effectsplayersplode_310_0_0[2] = get_internal_image(495);
            images_effectsplayersplode_310_0_0[3] = get_internal_image(495);
            images_effectsplayersplode_310_0_0[4] = get_internal_image(7158);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        set_direction(randrange(32));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(20);
        ((PinballMovement*)movement)->set_gravity(15);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectsplayersplode_310(int x, int y)
{
    return new (Active::pool.create()) EffectsPlayerSplode_310(x, y);
}
static Image* images_objectkeystone_311_0_0[6];
static Direction direction_objectkeystone_311_0_0 = {0, 25, 25, 0, -1, images_objectkeystone_311_0_0, 6};
static Image* images_objectkeystone_311_0_1[6];
static Direction direction_objectkeystone_311_0_1 = {1, 25, 25, 0, -1, images_objectkeystone_311_0_1, 6};
static Image* images_objectkeystone_311_0_2[6];
static Direction direction_objectkeystone_311_0_2 = {2, 25, 25, 0, -1, images_objectkeystone_311_0_2, 6};
static Image* images_objectkeystone_311_0_3[6];
static Direction direction_objectkeystone_311_0_3 = {3, 25, 25, 0, -1, images_objectkeystone_311_0_3, 6};
static Image* images_objectkeystone_311_0_4[6];
static Direction direction_objectkeystone_311_0_4 = {4, 25, 25, 0, -1, images_objectkeystone_311_0_4, 6};
static Image* images_objectkeystone_311_0_8[6];
static Direction direction_objectkeystone_311_0_8 = {8, 25, 25, 0, -1, images_objectkeystone_311_0_8, 6};
static Animation anim_objectkeystone_311_0 = {&direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_1, &direction_objectkeystone_311_0_2, &direction_objectkeystone_311_0_3, &direction_objectkeystone_311_0_4, &direction_objectkeystone_311_0_4, NULL, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, &direction_objectkeystone_311_0_8, NULL, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0, &direction_objectkeystone_311_0_0};
static Image* images_objectkeystone_311_7_0[1];
static Direction direction_objectkeystone_311_7_0 = {0, 40, 40, 0, -1, images_objectkeystone_311_7_0, 1};
static Animation anim_objectkeystone_311_7 = {&direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, NULL, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0, &direction_objectkeystone_311_7_0};
static Animation * anim_array_objectkeystone_311[8] = {&anim_objectkeystone_311_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectkeystone_311_7};
static Animations anim_objectkeystone_311 = {8, &anim_array_objectkeystone_311[0]};
static bool anim_objectkeystone_311_initialized;
class ObjectKeystone_311 : public Active
{
public:
    ObjectKeystone_311(int x, int y) : Active(x, y, ObjectKeystone_311_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_Keystone", 15);
#endif
        this->animations = &anim_objectkeystone_311;
        if (!anim_objectkeystone_311_initialized) {
            anim_objectkeystone_311_initialized = true;
            images_objectkeystone_311_0_0[0] = get_internal_image(135);
            images_objectkeystone_311_0_0[1] = get_internal_image(121);
            images_objectkeystone_311_0_0[2] = get_internal_image(203);
            images_objectkeystone_311_0_0[3] = get_internal_image(204);
            images_objectkeystone_311_0_0[4] = get_internal_image(205);
            images_objectkeystone_311_0_0[5] = get_internal_image(318);
            images_objectkeystone_311_0_1[0] = get_internal_image(544);
            images_objectkeystone_311_0_1[1] = get_internal_image(1487);
            images_objectkeystone_311_0_1[2] = get_internal_image(1535);
            images_objectkeystone_311_0_1[3] = get_internal_image(1537);
            images_objectkeystone_311_0_1[4] = get_internal_image(1538);
            images_objectkeystone_311_0_1[5] = get_internal_image(1539);
            images_objectkeystone_311_0_2[0] = get_internal_image(4938);
            images_objectkeystone_311_0_2[1] = get_internal_image(4941);
            images_objectkeystone_311_0_2[2] = get_internal_image(4942);
            images_objectkeystone_311_0_2[3] = get_internal_image(4943);
            images_objectkeystone_311_0_2[4] = get_internal_image(4944);
            images_objectkeystone_311_0_2[5] = get_internal_image(4950);
            images_objectkeystone_311_0_3[0] = get_internal_image(1750);
            images_objectkeystone_311_0_3[1] = get_internal_image(1752);
            images_objectkeystone_311_0_3[2] = get_internal_image(1753);
            images_objectkeystone_311_0_3[3] = get_internal_image(1762);
            images_objectkeystone_311_0_3[4] = get_internal_image(1763);
            images_objectkeystone_311_0_3[5] = get_internal_image(1766);
            images_objectkeystone_311_0_4[0] = get_internal_image(1768);
            images_objectkeystone_311_0_4[1] = get_internal_image(1772);
            images_objectkeystone_311_0_4[2] = get_internal_image(1773);
            images_objectkeystone_311_0_4[3] = get_internal_image(1774);
            images_objectkeystone_311_0_4[4] = get_internal_image(1775);
            images_objectkeystone_311_0_4[5] = get_internal_image(1776);
            images_objectkeystone_311_0_8[0] = get_internal_image(7950);
            images_objectkeystone_311_0_8[1] = get_internal_image(7947);
            images_objectkeystone_311_0_8[2] = get_internal_image(7951);
            images_objectkeystone_311_0_8[3] = get_internal_image(7952);
            images_objectkeystone_311_0_8[4] = get_internal_image(7954);
            images_objectkeystone_311_0_8[5] = get_internal_image(7955);
            images_objectkeystone_311_7_0[0] = get_internal_image(5332);
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
FrameObject * create_objectkeystone_311(int x, int y)
{
    return new (Active::pool.create()) ObjectKeystone_311(x, y);
}
static Image* images_effectsexplosion06_312_4_0[7];
static Direction direction_effectsexplosion06_312_4_0 = {0, 20, 20, 0, 1, images_effectsexplosion06_312_4_0, 7};
static Animation anim_effectsexplosion06_312_4 = {&direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, NULL, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0, &direction_effectsexplosion06_312_4_0};
static Animation * anim_array_effectsexplosion06_312[5] = {NULL, NULL, NULL, NULL, &anim_effectsexplosion06_312_4};
static Animations anim_effectsexplosion06_312 = {5, &anim_array_effectsexplosion06_312[0]};
static bool anim_effectsexplosion06_312_initialized;
class EffectsExplosion06_312 : public Active
{
public:
    EffectsExplosion06_312(int x, int y) : Active(x, y, EffectsExplosion06_312_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effects_Explosion06", 19);
#endif
        this->animations = &anim_effectsexplosion06_312;
        if (!anim_effectsexplosion06_312_initialized) {
            anim_effectsexplosion06_312_initialized = true;
            images_effectsexplosion06_312_4_0[0] = get_internal_image(3251);
            images_effectsexplosion06_312_4_0[1] = get_internal_image(3260);
            images_effectsexplosion06_312_4_0[2] = get_internal_image(3252);
            images_effectsexplosion06_312_4_0[3] = get_internal_image(3257);
            images_effectsexplosion06_312_4_0[4] = get_internal_image(3253);
            images_effectsexplosion06_312_4_0[5] = get_internal_image(3258);
            images_effectsexplosion06_312_4_0[6] = get_internal_image(3259);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_effectsexplosion06_312(int x, int y)
{
    return new (Active::pool.create()) EffectsExplosion06_312(x, y);
}
static Image* images_shieldwood_313_0_0[11];
static Direction direction_shieldwood_313_0_0 = {0, 20, 20, 0, -1, images_shieldwood_313_0_0, 11};
static Animation anim_shieldwood_313_0 = {&direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, NULL, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0, &direction_shieldwood_313_0_0};
static Image* images_shieldwood_313_4_0[7];
static Direction direction_shieldwood_313_4_0 = {0, 100, 100, 0, 1, images_shieldwood_313_4_0, 7};
static Animation anim_shieldwood_313_4 = {&direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, NULL, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0, &direction_shieldwood_313_4_0};
static Image* images_shieldwood_313_7_0[7];
static Direction direction_shieldwood_313_7_0 = {0, 100, 100, 0, 1, images_shieldwood_313_7_0, 7};
static Animation anim_shieldwood_313_7 = {&direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, NULL, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0, &direction_shieldwood_313_7_0};
static Image* images_shieldwood_313_8_0[7];
static Direction direction_shieldwood_313_8_0 = {0, 100, 100, 0, 1, images_shieldwood_313_8_0, 7};
static Animation anim_shieldwood_313_8 = {&direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, NULL, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0, &direction_shieldwood_313_8_0};
static Animation * anim_array_shieldwood_313[9] = {&anim_shieldwood_313_0, NULL, NULL, NULL, &anim_shieldwood_313_4, NULL, NULL, &anim_shieldwood_313_7, &anim_shieldwood_313_8};
static Animations anim_shieldwood_313 = {9, &anim_array_shieldwood_313[0]};
static bool anim_shieldwood_313_initialized;
class ShieldWood_313 : public Active
{
public:
    ShieldWood_313(int x, int y) : Active(x, y, ShieldWood_313_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Wood", 11);
#endif
        this->animations = &anim_shieldwood_313;
        if (!anim_shieldwood_313_initialized) {
            anim_shieldwood_313_initialized = true;
            images_shieldwood_313_0_0[0] = get_internal_image(569);
            images_shieldwood_313_0_0[1] = get_internal_image(572);
            images_shieldwood_313_0_0[2] = get_internal_image(2256);
            images_shieldwood_313_0_0[3] = get_internal_image(2236);
            images_shieldwood_313_0_0[4] = get_internal_image(2258);
            images_shieldwood_313_0_0[5] = get_internal_image(2259);
            images_shieldwood_313_0_0[6] = get_internal_image(2261);
            images_shieldwood_313_0_0[7] = get_internal_image(2260);
            images_shieldwood_313_0_0[8] = get_internal_image(2262);
            images_shieldwood_313_0_0[9] = get_internal_image(2264);
            images_shieldwood_313_0_0[10] = get_internal_image(2265);
            images_shieldwood_313_4_0[0] = get_internal_image(456);
            images_shieldwood_313_4_0[1] = get_internal_image(2767);
            images_shieldwood_313_4_0[2] = get_internal_image(2768);
            images_shieldwood_313_4_0[3] = get_internal_image(2769);
            images_shieldwood_313_4_0[4] = get_internal_image(2770);
            images_shieldwood_313_4_0[5] = get_internal_image(2771);
            images_shieldwood_313_4_0[6] = get_internal_image(2792);
            images_shieldwood_313_7_0[0] = get_internal_image(565);
            images_shieldwood_313_7_0[1] = get_internal_image(1241);
            images_shieldwood_313_7_0[2] = get_internal_image(1242);
            images_shieldwood_313_7_0[3] = get_internal_image(1244);
            images_shieldwood_313_7_0[4] = get_internal_image(2131);
            images_shieldwood_313_7_0[5] = get_internal_image(2232);
            images_shieldwood_313_7_0[6] = get_internal_image(456);
            images_shieldwood_313_8_0[0] = get_internal_image(456);
            images_shieldwood_313_8_0[1] = get_internal_image(2767);
            images_shieldwood_313_8_0[2] = get_internal_image(2768);
            images_shieldwood_313_8_0[3] = get_internal_image(2769);
            images_shieldwood_313_8_0[4] = get_internal_image(2770);
            images_shieldwood_313_8_0[5] = get_internal_image(2771);
            images_shieldwood_313_8_0[6] = get_internal_image(2792);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_shieldwood_313(int x, int y)
{
    return new (Active::pool.create()) ShieldWood_313(x, y);
}
static Image* images_shieldearth_314_0_0[9];
static Direction direction_shieldearth_314_0_0 = {0, 16, 16, 0, -1, images_shieldearth_314_0_0, 9};
static Animation anim_shieldearth_314_0 = {&direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, NULL, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0, &direction_shieldearth_314_0_0};
static Image* images_shieldearth_314_4_0[7];
static Direction direction_shieldearth_314_4_0 = {0, 100, 100, 0, 1, images_shieldearth_314_4_0, 7};
static Animation anim_shieldearth_314_4 = {&direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, NULL, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0, &direction_shieldearth_314_4_0};
static Image* images_shieldearth_314_7_0[7];
static Direction direction_shieldearth_314_7_0 = {0, 100, 100, 0, 1, images_shieldearth_314_7_0, 7};
static Animation anim_shieldearth_314_7 = {&direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, NULL, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0, &direction_shieldearth_314_7_0};
static Image* images_shieldearth_314_8_0[7];
static Direction direction_shieldearth_314_8_0 = {0, 100, 100, 0, 1, images_shieldearth_314_8_0, 7};
static Animation anim_shieldearth_314_8 = {&direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, NULL, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0, &direction_shieldearth_314_8_0};
static Animation * anim_array_shieldearth_314[9] = {&anim_shieldearth_314_0, NULL, NULL, NULL, &anim_shieldearth_314_4, NULL, NULL, &anim_shieldearth_314_7, &anim_shieldearth_314_8};
static Animations anim_shieldearth_314 = {9, &anim_array_shieldearth_314[0]};
static bool anim_shieldearth_314_initialized;
class ShieldEarth_314 : public Active
{
public:
    ShieldEarth_314(int x, int y) : Active(x, y, ShieldEarth_314_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Earth", 12);
#endif
        this->animations = &anim_shieldearth_314;
        if (!anim_shieldearth_314_initialized) {
            anim_shieldearth_314_initialized = true;
            images_shieldearth_314_0_0[0] = get_internal_image(30);
            images_shieldearth_314_0_0[1] = get_internal_image(34);
            images_shieldearth_314_0_0[2] = get_internal_image(40);
            images_shieldearth_314_0_0[3] = get_internal_image(44);
            images_shieldearth_314_0_0[4] = get_internal_image(54);
            images_shieldearth_314_0_0[5] = get_internal_image(5);
            images_shieldearth_314_0_0[6] = get_internal_image(18);
            images_shieldearth_314_0_0[7] = get_internal_image(19);
            images_shieldearth_314_0_0[8] = get_internal_image(20);
            images_shieldearth_314_4_0[0] = get_internal_image(456);
            images_shieldearth_314_4_0[1] = get_internal_image(2767);
            images_shieldearth_314_4_0[2] = get_internal_image(2768);
            images_shieldearth_314_4_0[3] = get_internal_image(2769);
            images_shieldearth_314_4_0[4] = get_internal_image(2770);
            images_shieldearth_314_4_0[5] = get_internal_image(2771);
            images_shieldearth_314_4_0[6] = get_internal_image(2792);
            images_shieldearth_314_7_0[0] = get_internal_image(565);
            images_shieldearth_314_7_0[1] = get_internal_image(1241);
            images_shieldearth_314_7_0[2] = get_internal_image(1242);
            images_shieldearth_314_7_0[3] = get_internal_image(1244);
            images_shieldearth_314_7_0[4] = get_internal_image(2131);
            images_shieldearth_314_7_0[5] = get_internal_image(2232);
            images_shieldearth_314_7_0[6] = get_internal_image(456);
            images_shieldearth_314_8_0[0] = get_internal_image(456);
            images_shieldearth_314_8_0[1] = get_internal_image(2767);
            images_shieldearth_314_8_0[2] = get_internal_image(2768);
            images_shieldearth_314_8_0[3] = get_internal_image(2769);
            images_shieldearth_314_8_0[4] = get_internal_image(2770);
            images_shieldearth_314_8_0[5] = get_internal_image(2771);
            images_shieldearth_314_8_0[6] = get_internal_image(2792);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 5);
    }
};
FrameObject * create_shieldearth_314(int x, int y)
{
    return new (Active::pool.create()) ShieldEarth_314(x, y);
}
static Image* images_shieldflameback_315_0_0[9];
static Direction direction_shieldflameback_315_0_0 = {0, 40, 40, 0, -1, images_shieldflameback_315_0_0, 9};
static Animation anim_shieldflameback_315_0 = {&direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, NULL, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0, &direction_shieldflameback_315_0_0};
static Image* images_shieldflameback_315_8_0[1];
static Direction direction_shieldflameback_315_8_0 = {0, 100, 100, 0, 1, images_shieldflameback_315_8_0, 1};
static Animation anim_shieldflameback_315_8 = {&direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, NULL, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0, &direction_shieldflameback_315_8_0};
static Animation * anim_array_shieldflameback_315[9] = {&anim_shieldflameback_315_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_shieldflameback_315_8};
static Animations anim_shieldflameback_315 = {9, &anim_array_shieldflameback_315[0]};
static bool anim_shieldflameback_315_initialized;
class ShieldFlameBack_315 : public Active
{
public:
    ShieldFlameBack_315(int x, int y) : Active(x, y, ShieldFlameBack_315_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Flame_Back", 17);
#endif
        this->animations = &anim_shieldflameback_315;
        if (!anim_shieldflameback_315_initialized) {
            anim_shieldflameback_315_initialized = true;
            images_shieldflameback_315_0_0[0] = get_internal_image(56);
            images_shieldflameback_315_0_0[1] = get_internal_image(33);
            images_shieldflameback_315_0_0[2] = get_internal_image(229);
            images_shieldflameback_315_0_0[3] = get_internal_image(228);
            images_shieldflameback_315_0_0[4] = get_internal_image(222);
            images_shieldflameback_315_0_0[5] = get_internal_image(221);
            images_shieldflameback_315_0_0[6] = get_internal_image(211);
            images_shieldflameback_315_0_0[7] = get_internal_image(177);
            images_shieldflameback_315_0_0[8] = get_internal_image(65);
            images_shieldflameback_315_8_0[0] = get_internal_image(456);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 2);
    }
};
FrameObject * create_shieldflameback_315(int x, int y)
{
    return new (Active::pool.create()) ShieldFlameBack_315(x, y);
}
static Image* images_shieldflamefront_316_0_0[9];
static Direction direction_shieldflamefront_316_0_0 = {0, 20, 20, 0, -1, images_shieldflamefront_316_0_0, 9};
static Animation anim_shieldflamefront_316_0 = {&direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, NULL, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0, &direction_shieldflamefront_316_0_0};
static Image* images_shieldflamefront_316_4_0[7];
static Direction direction_shieldflamefront_316_4_0 = {0, 100, 100, 0, 1, images_shieldflamefront_316_4_0, 7};
static Animation anim_shieldflamefront_316_4 = {&direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, NULL, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0, &direction_shieldflamefront_316_4_0};
static Image* images_shieldflamefront_316_7_0[7];
static Direction direction_shieldflamefront_316_7_0 = {0, 100, 100, 0, 1, images_shieldflamefront_316_7_0, 7};
static Animation anim_shieldflamefront_316_7 = {&direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, NULL, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0, &direction_shieldflamefront_316_7_0};
static Image* images_shieldflamefront_316_8_0[7];
static Direction direction_shieldflamefront_316_8_0 = {0, 100, 100, 0, 1, images_shieldflamefront_316_8_0, 7};
static Animation anim_shieldflamefront_316_8 = {&direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, NULL, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0, &direction_shieldflamefront_316_8_0};
static Animation * anim_array_shieldflamefront_316[9] = {&anim_shieldflamefront_316_0, NULL, NULL, NULL, &anim_shieldflamefront_316_4, NULL, NULL, &anim_shieldflamefront_316_7, &anim_shieldflamefront_316_8};
static Animations anim_shieldflamefront_316 = {9, &anim_array_shieldflamefront_316[0]};
static bool anim_shieldflamefront_316_initialized;
class ShieldFlameFront_316 : public Active
{
public:
    ShieldFlameFront_316(int x, int y) : Active(x, y, ShieldFlameFront_316_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Flame_Front", 18);
#endif
        this->animations = &anim_shieldflamefront_316;
        if (!anim_shieldflamefront_316_initialized) {
            anim_shieldflamefront_316_initialized = true;
            images_shieldflamefront_316_0_0[0] = get_internal_image(227);
            images_shieldflamefront_316_0_0[1] = get_internal_image(1349);
            images_shieldflamefront_316_0_0[2] = get_internal_image(1409);
            images_shieldflamefront_316_0_0[3] = get_internal_image(1355);
            images_shieldflamefront_316_0_0[4] = get_internal_image(1355);
            images_shieldflamefront_316_0_0[5] = get_internal_image(1355);
            images_shieldflamefront_316_0_0[6] = get_internal_image(1409);
            images_shieldflamefront_316_0_0[7] = get_internal_image(1349);
            images_shieldflamefront_316_0_0[8] = get_internal_image(227);
            images_shieldflamefront_316_4_0[0] = get_internal_image(456);
            images_shieldflamefront_316_4_0[1] = get_internal_image(2767);
            images_shieldflamefront_316_4_0[2] = get_internal_image(2768);
            images_shieldflamefront_316_4_0[3] = get_internal_image(2769);
            images_shieldflamefront_316_4_0[4] = get_internal_image(2770);
            images_shieldflamefront_316_4_0[5] = get_internal_image(2771);
            images_shieldflamefront_316_4_0[6] = get_internal_image(2792);
            images_shieldflamefront_316_7_0[0] = get_internal_image(565);
            images_shieldflamefront_316_7_0[1] = get_internal_image(1241);
            images_shieldflamefront_316_7_0[2] = get_internal_image(1242);
            images_shieldflamefront_316_7_0[3] = get_internal_image(1244);
            images_shieldflamefront_316_7_0[4] = get_internal_image(2131);
            images_shieldflamefront_316_7_0[5] = get_internal_image(2232);
            images_shieldflamefront_316_7_0[6] = get_internal_image(456);
            images_shieldflamefront_316_8_0[0] = get_internal_image(456);
            images_shieldflamefront_316_8_0[1] = get_internal_image(2767);
            images_shieldflamefront_316_8_0[2] = get_internal_image(2768);
            images_shieldflamefront_316_8_0[3] = get_internal_image(2769);
            images_shieldflamefront_316_8_0[4] = get_internal_image(2770);
            images_shieldflamefront_316_8_0[5] = get_internal_image(2771);
            images_shieldflamefront_316_8_0[6] = get_internal_image(2792);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 2);
    }
};
FrameObject * create_shieldflamefront_316(int x, int y)
{
    return new (Active::pool.create()) ShieldFlameFront_316(x, y);
}
static Image* images_shieldmagnetic_317_0_0[18];
static Direction direction_shieldmagnetic_317_0_0 = {0, 100, 100, 0, -1, images_shieldmagnetic_317_0_0, 18};
static Animation anim_shieldmagnetic_317_0 = {&direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, NULL, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0, &direction_shieldmagnetic_317_0_0};
static Image* images_shieldmagnetic_317_4_0[7];
static Direction direction_shieldmagnetic_317_4_0 = {0, 100, 100, 0, 1, images_shieldmagnetic_317_4_0, 7};
static Animation anim_shieldmagnetic_317_4 = {&direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, NULL, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0, &direction_shieldmagnetic_317_4_0};
static Image* images_shieldmagnetic_317_7_0[7];
static Direction direction_shieldmagnetic_317_7_0 = {0, 100, 100, 0, 1, images_shieldmagnetic_317_7_0, 7};
static Animation anim_shieldmagnetic_317_7 = {&direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, NULL, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0, &direction_shieldmagnetic_317_7_0};
static Image* images_shieldmagnetic_317_8_0[7];
static Direction direction_shieldmagnetic_317_8_0 = {0, 100, 100, 0, 1, images_shieldmagnetic_317_8_0, 7};
static Animation anim_shieldmagnetic_317_8 = {&direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, NULL, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0, &direction_shieldmagnetic_317_8_0};
static Animation * anim_array_shieldmagnetic_317[9] = {&anim_shieldmagnetic_317_0, NULL, NULL, NULL, &anim_shieldmagnetic_317_4, NULL, NULL, &anim_shieldmagnetic_317_7, &anim_shieldmagnetic_317_8};
static Animations anim_shieldmagnetic_317 = {9, &anim_array_shieldmagnetic_317[0]};
static bool anim_shieldmagnetic_317_initialized;
class ShieldMagnetic_317 : public Active
{
public:
    ShieldMagnetic_317(int x, int y) : Active(x, y, ShieldMagnetic_317_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Magnetic", 15);
#endif
        this->animations = &anim_shieldmagnetic_317;
        if (!anim_shieldmagnetic_317_initialized) {
            anim_shieldmagnetic_317_initialized = true;
            images_shieldmagnetic_317_0_0[0] = get_internal_image(430);
            images_shieldmagnetic_317_0_0[1] = get_internal_image(297);
            images_shieldmagnetic_317_0_0[2] = get_internal_image(455);
            images_shieldmagnetic_317_0_0[3] = get_internal_image(454);
            images_shieldmagnetic_317_0_0[4] = get_internal_image(298);
            images_shieldmagnetic_317_0_0[5] = get_internal_image(278);
            images_shieldmagnetic_317_0_0[6] = get_internal_image(293);
            images_shieldmagnetic_317_0_0[7] = get_internal_image(294);
            images_shieldmagnetic_317_0_0[8] = get_internal_image(296);
            images_shieldmagnetic_317_0_0[9] = get_internal_image(292);
            images_shieldmagnetic_317_0_0[10] = get_internal_image(230);
            images_shieldmagnetic_317_0_0[11] = get_internal_image(263);
            images_shieldmagnetic_317_0_0[12] = get_internal_image(452);
            images_shieldmagnetic_317_0_0[13] = get_internal_image(453);
            images_shieldmagnetic_317_0_0[14] = get_internal_image(52);
            images_shieldmagnetic_317_0_0[15] = get_internal_image(291);
            images_shieldmagnetic_317_0_0[16] = get_internal_image(276);
            images_shieldmagnetic_317_0_0[17] = get_internal_image(295);
            images_shieldmagnetic_317_4_0[0] = get_internal_image(456);
            images_shieldmagnetic_317_4_0[1] = get_internal_image(2767);
            images_shieldmagnetic_317_4_0[2] = get_internal_image(2768);
            images_shieldmagnetic_317_4_0[3] = get_internal_image(2769);
            images_shieldmagnetic_317_4_0[4] = get_internal_image(2770);
            images_shieldmagnetic_317_4_0[5] = get_internal_image(2771);
            images_shieldmagnetic_317_4_0[6] = get_internal_image(2792);
            images_shieldmagnetic_317_7_0[0] = get_internal_image(565);
            images_shieldmagnetic_317_7_0[1] = get_internal_image(1241);
            images_shieldmagnetic_317_7_0[2] = get_internal_image(1242);
            images_shieldmagnetic_317_7_0[3] = get_internal_image(1244);
            images_shieldmagnetic_317_7_0[4] = get_internal_image(2131);
            images_shieldmagnetic_317_7_0[5] = get_internal_image(2232);
            images_shieldmagnetic_317_7_0[6] = get_internal_image(456);
            images_shieldmagnetic_317_8_0[0] = get_internal_image(456);
            images_shieldmagnetic_317_8_0[1] = get_internal_image(2767);
            images_shieldmagnetic_317_8_0[2] = get_internal_image(2768);
            images_shieldmagnetic_317_8_0[3] = get_internal_image(2769);
            images_shieldmagnetic_317_8_0[4] = get_internal_image(2770);
            images_shieldmagnetic_317_8_0[5] = get_internal_image(2771);
            images_shieldmagnetic_317_8_0[6] = get_internal_image(2792);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 3);
    }
};
FrameObject * create_shieldmagnetic_317(int x, int y)
{
    return new (Active::pool.create()) ShieldMagnetic_317(x, y);
}
static Image* images_shieldwater_318_0_0[8];
static Direction direction_shieldwater_318_0_0 = {0, 16, 16, 0, -1, images_shieldwater_318_0_0, 8};
static Animation anim_shieldwater_318_0 = {&direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, NULL, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0, &direction_shieldwater_318_0_0};
static Image* images_shieldwater_318_4_0[7];
static Direction direction_shieldwater_318_4_0 = {0, 100, 100, 0, 1, images_shieldwater_318_4_0, 7};
static Animation anim_shieldwater_318_4 = {&direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, NULL, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0, &direction_shieldwater_318_4_0};
static Image* images_shieldwater_318_7_0[7];
static Direction direction_shieldwater_318_7_0 = {0, 100, 100, 0, 1, images_shieldwater_318_7_0, 7};
static Animation anim_shieldwater_318_7 = {&direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, NULL, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0, &direction_shieldwater_318_7_0};
static Image* images_shieldwater_318_8_0[7];
static Direction direction_shieldwater_318_8_0 = {0, 100, 100, 0, 1, images_shieldwater_318_8_0, 7};
static Animation anim_shieldwater_318_8 = {&direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, NULL, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0, &direction_shieldwater_318_8_0};
static Animation * anim_array_shieldwater_318[9] = {&anim_shieldwater_318_0, NULL, NULL, NULL, &anim_shieldwater_318_4, NULL, NULL, &anim_shieldwater_318_7, &anim_shieldwater_318_8};
static Animations anim_shieldwater_318 = {9, &anim_array_shieldwater_318[0]};
static bool anim_shieldwater_318_initialized;
class ShieldWater_318 : public Active
{
public:
    ShieldWater_318(int x, int y) : Active(x, y, ShieldWater_318_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Shield_Water", 12);
#endif
        this->animations = &anim_shieldwater_318;
        if (!anim_shieldwater_318_initialized) {
            anim_shieldwater_318_initialized = true;
            images_shieldwater_318_0_0[0] = get_internal_image(277);
            images_shieldwater_318_0_0[1] = get_internal_image(277);
            images_shieldwater_318_0_0[2] = get_internal_image(956);
            images_shieldwater_318_0_0[3] = get_internal_image(979);
            images_shieldwater_318_0_0[4] = get_internal_image(1005);
            images_shieldwater_318_0_0[5] = get_internal_image(1005);
            images_shieldwater_318_0_0[6] = get_internal_image(979);
            images_shieldwater_318_0_0[7] = get_internal_image(956);
            images_shieldwater_318_4_0[0] = get_internal_image(456);
            images_shieldwater_318_4_0[1] = get_internal_image(2767);
            images_shieldwater_318_4_0[2] = get_internal_image(2768);
            images_shieldwater_318_4_0[3] = get_internal_image(2769);
            images_shieldwater_318_4_0[4] = get_internal_image(2770);
            images_shieldwater_318_4_0[5] = get_internal_image(2771);
            images_shieldwater_318_4_0[6] = get_internal_image(2792);
            images_shieldwater_318_7_0[0] = get_internal_image(565);
            images_shieldwater_318_7_0[1] = get_internal_image(1241);
            images_shieldwater_318_7_0[2] = get_internal_image(1242);
            images_shieldwater_318_7_0[3] = get_internal_image(1244);
            images_shieldwater_318_7_0[4] = get_internal_image(2131);
            images_shieldwater_318_7_0[5] = get_internal_image(2232);
            images_shieldwater_318_7_0[6] = get_internal_image(456);
            images_shieldwater_318_8_0[0] = get_internal_image(456);
            images_shieldwater_318_8_0[1] = get_internal_image(2767);
            images_shieldwater_318_8_0[2] = get_internal_image(2768);
            images_shieldwater_318_8_0[3] = get_internal_image(2769);
            images_shieldwater_318_8_0[4] = get_internal_image(2770);
            images_shieldwater_318_8_0[5] = get_internal_image(2771);
            images_shieldwater_318_8_0[6] = get_internal_image(2792);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 4);
    }
};
FrameObject * create_shieldwater_318(int x, int y)
{
    return new (Active::pool.create()) ShieldWater_318(x, y);
}
static Image* images_effectsdebris_319_0_0[161];
static Direction direction_effectsdebris_319_0_0 = {0, 0, 0, 0, 1, images_effectsdebris_319_0_0, 161};
static Animation anim_effectsdebris_319_0 = {&direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, NULL, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0, &direction_effectsdebris_319_0_0};
static Image* images_effectsdebris_319_5_0[1];
static Direction direction_effectsdebris_319_5_0 = {0, 0, 0, 0, -1, images_effectsdebris_319_5_0, 1};
static Animation anim_effectsdebris_319_5 = {&direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, NULL, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0, &direction_effectsdebris_319_5_0};
static Animation * anim_array_effectsdebris_319[6] = {&anim_effectsdebris_319_0, NULL, NULL, NULL, NULL, &anim_effectsdebris_319_5};
static Animations anim_effectsdebris_319 = {6, &anim_array_effectsdebris_319[0]};
static bool anim_effectsdebris_319_initialized;
class EffectsDebris_319 : public Active
{
public:
    EffectsDebris_319(int x, int y) : Active(x, y, EffectsDebris_319_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effects_Debris", 14);
#endif
        this->animations = &anim_effectsdebris_319;
        if (!anim_effectsdebris_319_initialized) {
            anim_effectsdebris_319_initialized = true;
            images_effectsdebris_319_0_0[0] = get_internal_image(519);
            images_effectsdebris_319_0_0[1] = get_internal_image(519);
            images_effectsdebris_319_0_0[2] = get_internal_image(893);
            images_effectsdebris_319_0_0[3] = get_internal_image(894);
            images_effectsdebris_319_0_0[4] = get_internal_image(895);
            images_effectsdebris_319_0_0[5] = get_internal_image(896);
            images_effectsdebris_319_0_0[6] = get_internal_image(519);
            images_effectsdebris_319_0_0[7] = get_internal_image(1323);
            images_effectsdebris_319_0_0[8] = get_internal_image(1307);
            images_effectsdebris_319_0_0[9] = get_internal_image(1325);
            images_effectsdebris_319_0_0[10] = get_internal_image(1324);
            images_effectsdebris_319_0_0[11] = get_internal_image(519);
            images_effectsdebris_319_0_0[12] = get_internal_image(897);
            images_effectsdebris_319_0_0[13] = get_internal_image(899);
            images_effectsdebris_319_0_0[14] = get_internal_image(891);
            images_effectsdebris_319_0_0[15] = get_internal_image(990);
            images_effectsdebris_319_0_0[16] = get_internal_image(2193);
            images_effectsdebris_319_0_0[17] = get_internal_image(2150);
            images_effectsdebris_319_0_0[18] = get_internal_image(2147);
            images_effectsdebris_319_0_0[19] = get_internal_image(2194);
            images_effectsdebris_319_0_0[20] = get_internal_image(2197);
            images_effectsdebris_319_0_0[21] = get_internal_image(519);
            images_effectsdebris_319_0_0[22] = get_internal_image(3363);
            images_effectsdebris_319_0_0[23] = get_internal_image(3355);
            images_effectsdebris_319_0_0[24] = get_internal_image(3367);
            images_effectsdebris_319_0_0[25] = get_internal_image(3369);
            images_effectsdebris_319_0_0[26] = get_internal_image(3097);
            images_effectsdebris_319_0_0[27] = get_internal_image(3098);
            images_effectsdebris_319_0_0[28] = get_internal_image(3099);
            images_effectsdebris_319_0_0[29] = get_internal_image(3100);
            images_effectsdebris_319_0_0[30] = get_internal_image(3090);
            images_effectsdebris_319_0_0[31] = get_internal_image(183);
            images_effectsdebris_319_0_0[32] = get_internal_image(126);
            images_effectsdebris_319_0_0[33] = get_internal_image(255);
            images_effectsdebris_319_0_0[34] = get_internal_image(249);
            images_effectsdebris_319_0_0[35] = get_internal_image(249);
            images_effectsdebris_319_0_0[36] = get_internal_image(188);
            images_effectsdebris_319_0_0[37] = get_internal_image(1546);
            images_effectsdebris_319_0_0[38] = get_internal_image(1856);
            images_effectsdebris_319_0_0[39] = get_internal_image(1730);
            images_effectsdebris_319_0_0[40] = get_internal_image(1731);
            images_effectsdebris_319_0_0[41] = get_internal_image(5845);
            images_effectsdebris_319_0_0[42] = get_internal_image(5844);
            images_effectsdebris_319_0_0[43] = get_internal_image(5908);
            images_effectsdebris_319_0_0[44] = get_internal_image(6257);
            images_effectsdebris_319_0_0[45] = get_internal_image(2193);
            images_effectsdebris_319_0_0[46] = get_internal_image(6717);
            images_effectsdebris_319_0_0[47] = get_internal_image(6716);
            images_effectsdebris_319_0_0[48] = get_internal_image(6721);
            images_effectsdebris_319_0_0[49] = get_internal_image(6722);
            images_effectsdebris_319_0_0[50] = get_internal_image(2193);
            images_effectsdebris_319_0_0[51] = get_internal_image(2905);
            images_effectsdebris_319_0_0[52] = get_internal_image(2907);
            images_effectsdebris_319_0_0[53] = get_internal_image(2908);
            images_effectsdebris_319_0_0[54] = get_internal_image(2887);
            images_effectsdebris_319_0_0[55] = get_internal_image(2521);
            images_effectsdebris_319_0_0[56] = get_internal_image(1350);
            images_effectsdebris_319_0_0[57] = get_internal_image(1497);
            images_effectsdebris_319_0_0[58] = get_internal_image(1505);
            images_effectsdebris_319_0_0[59] = get_internal_image(1522);
            images_effectsdebris_319_0_0[60] = get_internal_image(1971);
            images_effectsdebris_319_0_0[61] = get_internal_image(1027);
            images_effectsdebris_319_0_0[62] = get_internal_image(1245);
            images_effectsdebris_319_0_0[63] = get_internal_image(8113);
            images_effectsdebris_319_0_0[64] = get_internal_image(8104);
            images_effectsdebris_319_0_0[65] = get_internal_image(8114);
            images_effectsdebris_319_0_0[66] = get_internal_image(9021);
            images_effectsdebris_319_0_0[67] = get_internal_image(9016);
            images_effectsdebris_319_0_0[68] = get_internal_image(9017);
            images_effectsdebris_319_0_0[69] = get_internal_image(9022);
            images_effectsdebris_319_0_0[70] = get_internal_image(519);
            images_effectsdebris_319_0_0[71] = get_internal_image(5838);
            images_effectsdebris_319_0_0[72] = get_internal_image(5839);
            images_effectsdebris_319_0_0[73] = get_internal_image(5036);
            images_effectsdebris_319_0_0[74] = get_internal_image(5039);
            images_effectsdebris_319_0_0[75] = get_internal_image(519);
            images_effectsdebris_319_0_0[76] = get_internal_image(4507);
            images_effectsdebris_319_0_0[77] = get_internal_image(4916);
            images_effectsdebris_319_0_0[78] = get_internal_image(4918);
            images_effectsdebris_319_0_0[79] = get_internal_image(4981);
            images_effectsdebris_319_0_0[80] = get_internal_image(4986);
            images_effectsdebris_319_0_0[81] = get_internal_image(5410);
            images_effectsdebris_319_0_0[82] = get_internal_image(5459);
            images_effectsdebris_319_0_0[83] = get_internal_image(5454);
            images_effectsdebris_319_0_0[84] = get_internal_image(5458);
            images_effectsdebris_319_0_0[85] = get_internal_image(5451);
            images_effectsdebris_319_0_0[86] = get_internal_image(907);
            images_effectsdebris_319_0_0[87] = get_internal_image(909);
            images_effectsdebris_319_0_0[88] = get_internal_image(908);
            images_effectsdebris_319_0_0[89] = get_internal_image(917);
            images_effectsdebris_319_0_0[90] = get_internal_image(923);
            images_effectsdebris_319_0_0[91] = get_internal_image(1476);
            images_effectsdebris_319_0_0[92] = get_internal_image(1506);
            images_effectsdebris_319_0_0[93] = get_internal_image(1507);
            images_effectsdebris_319_0_0[94] = get_internal_image(1524);
            images_effectsdebris_319_0_0[95] = get_internal_image(1578);
            images_effectsdebris_319_0_0[96] = get_internal_image(519);
            images_effectsdebris_319_0_0[97] = get_internal_image(8783);
            images_effectsdebris_319_0_0[98] = get_internal_image(8604);
            images_effectsdebris_319_0_0[99] = get_internal_image(8968);
            images_effectsdebris_319_0_0[100] = get_internal_image(8975);
            images_effectsdebris_319_0_0[101] = get_internal_image(519);
            images_effectsdebris_319_0_0[102] = get_internal_image(9463);
            images_effectsdebris_319_0_0[103] = get_internal_image(2454);
            images_effectsdebris_319_0_0[104] = get_internal_image(9471);
            images_effectsdebris_319_0_0[105] = get_internal_image(9647);
            images_effectsdebris_319_0_0[106] = get_internal_image(519);
            images_effectsdebris_319_0_0[107] = get_internal_image(10661);
            images_effectsdebris_319_0_0[108] = get_internal_image(10662);
            images_effectsdebris_319_0_0[109] = get_internal_image(10663);
            images_effectsdebris_319_0_0[110] = get_internal_image(10664);
            images_effectsdebris_319_0_0[111] = get_internal_image(117);
            images_effectsdebris_319_0_0[112] = get_internal_image(109);
            images_effectsdebris_319_0_0[113] = get_internal_image(118);
            images_effectsdebris_319_0_0[114] = get_internal_image(141);
            images_effectsdebris_319_0_0[115] = get_internal_image(1142);
            images_effectsdebris_319_0_0[116] = get_internal_image(11057);
            images_effectsdebris_319_0_0[117] = get_internal_image(11058);
            images_effectsdebris_319_0_0[118] = get_internal_image(11062);
            images_effectsdebris_319_0_0[119] = get_internal_image(11065);
            images_effectsdebris_319_0_0[120] = get_internal_image(11067);
            images_effectsdebris_319_0_0[121] = get_internal_image(519);
            images_effectsdebris_319_0_0[122] = get_internal_image(11006);
            images_effectsdebris_319_0_0[123] = get_internal_image(5870);
            images_effectsdebris_319_0_0[124] = get_internal_image(5869);
            images_effectsdebris_319_0_0[125] = get_internal_image(5871);
            images_effectsdebris_319_0_0[126] = get_internal_image(519);
            images_effectsdebris_319_0_0[127] = get_internal_image(11304);
            images_effectsdebris_319_0_0[128] = get_internal_image(11301);
            images_effectsdebris_319_0_0[129] = get_internal_image(11305);
            images_effectsdebris_319_0_0[130] = get_internal_image(11306);
            images_effectsdebris_319_0_0[131] = get_internal_image(6211);
            images_effectsdebris_319_0_0[132] = get_internal_image(11288);
            images_effectsdebris_319_0_0[133] = get_internal_image(7124);
            images_effectsdebris_319_0_0[134] = get_internal_image(10624);
            images_effectsdebris_319_0_0[135] = get_internal_image(11860);
            images_effectsdebris_319_0_0[136] = get_internal_image(519);
            images_effectsdebris_319_0_0[137] = get_internal_image(499);
            images_effectsdebris_319_0_0[138] = get_internal_image(500);
            images_effectsdebris_319_0_0[139] = get_internal_image(434);
            images_effectsdebris_319_0_0[140] = get_internal_image(503);
            images_effectsdebris_319_0_0[141] = get_internal_image(12668);
            images_effectsdebris_319_0_0[142] = get_internal_image(12669);
            images_effectsdebris_319_0_0[143] = get_internal_image(12670);
            images_effectsdebris_319_0_0[144] = get_internal_image(12671);
            images_effectsdebris_319_0_0[145] = get_internal_image(519);
            images_effectsdebris_319_0_0[146] = get_internal_image(12667);
            images_effectsdebris_319_0_0[147] = get_internal_image(12672);
            images_effectsdebris_319_0_0[148] = get_internal_image(12602);
            images_effectsdebris_319_0_0[149] = get_internal_image(12673);
            images_effectsdebris_319_0_0[150] = get_internal_image(12676);
            images_effectsdebris_319_0_0[151] = get_internal_image(13770);
            images_effectsdebris_319_0_0[152] = get_internal_image(13769);
            images_effectsdebris_319_0_0[153] = get_internal_image(13772);
            images_effectsdebris_319_0_0[154] = get_internal_image(13771);
            images_effectsdebris_319_0_0[155] = get_internal_image(13774);
            images_effectsdebris_319_0_0[156] = get_internal_image(3042);
            images_effectsdebris_319_0_0[157] = get_internal_image(212);
            images_effectsdebris_319_0_0[158] = get_internal_image(41);
            images_effectsdebris_319_0_0[159] = get_internal_image(4146);
            images_effectsdebris_319_0_0[160] = get_internal_image(4145);
            images_effectsdebris_319_5_0[0] = get_internal_image(5951);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(5, 6, 7, 8, 9, 10));
        set_direction(pick_random(5, 6, 7, 8, 9, 10));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(60);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(50);
        movement->start();
        flags |= GLOBAL;
        alterables = &global_data_22_effects_debris.value;
        if (!global_data_22_effects_debris.init) {
            global_data_22_effects_debris.init = true;
        }
    }
};
FrameObject * create_effectsdebris_319(int x, int y)
{
    return new (Active::pool.create()) EffectsDebris_319(x, y);
}
static Image* images_playerprojectile_320_0_0[13];
static Direction direction_playerprojectile_320_0_0 = {0, 100, 100, 1, -1, images_playerprojectile_320_0_0, 13};
static Animation anim_playerprojectile_320_0 = {&direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, NULL, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0, &direction_playerprojectile_320_0_0};
static Image* images_playerprojectile_320_7_0[1];
static Direction direction_playerprojectile_320_7_0 = {0, 100, 100, 0, -1, images_playerprojectile_320_7_0, 1};
static Animation anim_playerprojectile_320_7 = {&direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, NULL, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0, &direction_playerprojectile_320_7_0};
static Image* images_playerprojectile_320_8_0[8];
static Direction direction_playerprojectile_320_8_0 = {0, 100, 100, 0, -1, images_playerprojectile_320_8_0, 8};
static Image* images_playerprojectile_320_8_8[4];
static Direction direction_playerprojectile_320_8_8 = {8, 100, 100, 0, -1, images_playerprojectile_320_8_8, 4};
static Animation anim_playerprojectile_320_8 = {&direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, NULL, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, &direction_playerprojectile_320_8_8, NULL, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0, &direction_playerprojectile_320_8_0};
static Image* images_playerprojectile_320_9_0[5];
static Direction direction_playerprojectile_320_9_0 = {0, 0, 0, 0, 1, images_playerprojectile_320_9_0, 5};
static Animation anim_playerprojectile_320_9 = {&direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, NULL, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0, &direction_playerprojectile_320_9_0};
static Image* images_playerprojectile_320_10_0[21];
static Direction direction_playerprojectile_320_10_0 = {0, 0, 0, 0, -1, images_playerprojectile_320_10_0, 21};
static Animation anim_playerprojectile_320_10 = {&direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, NULL, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0, &direction_playerprojectile_320_10_0};
static Animation * anim_array_playerprojectile_320[11] = {&anim_playerprojectile_320_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerprojectile_320_7, &anim_playerprojectile_320_8, &anim_playerprojectile_320_9, &anim_playerprojectile_320_10};
static Animations anim_playerprojectile_320 = {11, &anim_array_playerprojectile_320[0]};
static bool anim_playerprojectile_320_initialized;
class PlayerProjectile_320 : public Active
{
public:
    PlayerProjectile_320(int x, int y) : Active(x, y, PlayerProjectile_320_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Projectile", 17);
#endif
        this->animations = &anim_playerprojectile_320;
        if (!anim_playerprojectile_320_initialized) {
            anim_playerprojectile_320_initialized = true;
            images_playerprojectile_320_0_0[0] = get_internal_image(7568);
            images_playerprojectile_320_0_0[1] = get_internal_image(1455);
            images_playerprojectile_320_0_0[2] = get_internal_image(1468);
            images_playerprojectile_320_0_0[3] = get_internal_image(1440);
            images_playerprojectile_320_0_0[4] = get_internal_image(1771);
            images_playerprojectile_320_0_0[5] = get_internal_image(1882);
            images_playerprojectile_320_0_0[6] = get_internal_image(1880);
            images_playerprojectile_320_0_0[7] = get_internal_image(1881);
            images_playerprojectile_320_0_0[8] = get_internal_image(1885);
            images_playerprojectile_320_0_0[9] = get_internal_image(1886);
            images_playerprojectile_320_0_0[10] = get_internal_image(1887);
            images_playerprojectile_320_0_0[11] = get_internal_image(1888);
            images_playerprojectile_320_0_0[12] = get_internal_image(1889);
            images_playerprojectile_320_7_0[0] = get_internal_image(5247);
            images_playerprojectile_320_8_0[0] = get_internal_image(13896);
            images_playerprojectile_320_8_0[1] = get_internal_image(13900);
            images_playerprojectile_320_8_0[2] = get_internal_image(13901);
            images_playerprojectile_320_8_0[3] = get_internal_image(13897);
            images_playerprojectile_320_8_0[4] = get_internal_image(13902);
            images_playerprojectile_320_8_0[5] = get_internal_image(13603);
            images_playerprojectile_320_8_0[6] = get_internal_image(13030);
            images_playerprojectile_320_8_0[7] = get_internal_image(13898);
            images_playerprojectile_320_8_8[0] = get_internal_image(7584);
            images_playerprojectile_320_8_8[1] = get_internal_image(7583);
            images_playerprojectile_320_8_8[2] = get_internal_image(7582);
            images_playerprojectile_320_8_8[3] = get_internal_image(7581);
            images_playerprojectile_320_9_0[0] = get_internal_image(2748);
            images_playerprojectile_320_9_0[1] = get_internal_image(3151);
            images_playerprojectile_320_9_0[2] = get_internal_image(3152);
            images_playerprojectile_320_9_0[3] = get_internal_image(3153);
            images_playerprojectile_320_9_0[4] = get_internal_image(3561);
            images_playerprojectile_320_10_0[0] = get_internal_image(8304);
            images_playerprojectile_320_10_0[1] = get_internal_image(6761);
            images_playerprojectile_320_10_0[2] = get_internal_image(8110);
            images_playerprojectile_320_10_0[3] = get_internal_image(8106);
            images_playerprojectile_320_10_0[4] = get_internal_image(1951);
            images_playerprojectile_320_10_0[5] = get_internal_image(2045);
            images_playerprojectile_320_10_0[6] = get_internal_image(3445);
            images_playerprojectile_320_10_0[7] = get_internal_image(8111);
            images_playerprojectile_320_10_0[8] = get_internal_image(8107);
            images_playerprojectile_320_10_0[9] = get_internal_image(2041);
            images_playerprojectile_320_10_0[10] = get_internal_image(8133);
            images_playerprojectile_320_10_0[11] = get_internal_image(8142);
            images_playerprojectile_320_10_0[12] = get_internal_image(1930);
            images_playerprojectile_320_10_0[13] = get_internal_image(8245);
            images_playerprojectile_320_10_0[14] = get_internal_image(8246);
            images_playerprojectile_320_10_0[15] = get_internal_image(8243);
            images_playerprojectile_320_10_0[16] = get_internal_image(3446);
            images_playerprojectile_320_10_0[17] = get_internal_image(2046);
            images_playerprojectile_320_10_0[18] = get_internal_image(8248);
            images_playerprojectile_320_10_0[19] = get_internal_image(8249);
            images_playerprojectile_320_10_0[20] = get_internal_image(1947);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_23_player_projectile.value;
        if (!global_data_23_player_projectile.init) {
            alterables->values.set(8, 3);
            alterables->values.set(12, 1);
            global_data_23_player_projectile.init = true;
        }
    }
};
FrameObject * create_playerprojectile_320(int x, int y)
{
    return new (Active::pool.create()) PlayerProjectile_320(x, y);
}
static Image* images_effectsspadeimage_321_0_0[1];
static Direction direction_effectsspadeimage_321_0_0 = {0, 51, 51, 0, -1, images_effectsspadeimage_321_0_0, 1};
static Image* images_effectsspadeimage_321_0_1[1];
static Direction direction_effectsspadeimage_321_0_1 = {1, 50, 50, 0, 1, images_effectsspadeimage_321_0_1, 1};
static Image* images_effectsspadeimage_321_0_2[1];
static Direction direction_effectsspadeimage_321_0_2 = {2, 50, 50, 0, 1, images_effectsspadeimage_321_0_2, 1};
static Image* images_effectsspadeimage_321_0_3[1];
static Direction direction_effectsspadeimage_321_0_3 = {3, 50, 50, 0, 1, images_effectsspadeimage_321_0_3, 1};
static Image* images_effectsspadeimage_321_0_4[1];
static Direction direction_effectsspadeimage_321_0_4 = {4, 50, 50, 0, 1, images_effectsspadeimage_321_0_4, 1};
static Image* images_effectsspadeimage_321_0_5[1];
static Direction direction_effectsspadeimage_321_0_5 = {5, 50, 50, 0, 1, images_effectsspadeimage_321_0_5, 1};
static Image* images_effectsspadeimage_321_0_10[1];
static Direction direction_effectsspadeimage_321_0_10 = {10, 50, 50, 0, 1, images_effectsspadeimage_321_0_10, 1};
static Image* images_effectsspadeimage_321_0_12[1];
static Direction direction_effectsspadeimage_321_0_12 = {12, 50, 50, 0, 1, images_effectsspadeimage_321_0_12, 1};
static Image* images_effectsspadeimage_321_0_15[1];
static Direction direction_effectsspadeimage_321_0_15 = {15, 50, 50, 0, -1, images_effectsspadeimage_321_0_15, 1};
static Image* images_effectsspadeimage_321_0_16[1];
static Direction direction_effectsspadeimage_321_0_16 = {16, 51, 51, 0, -1, images_effectsspadeimage_321_0_16, 1};
static Image* images_effectsspadeimage_321_0_17[1];
static Direction direction_effectsspadeimage_321_0_17 = {17, 50, 50, 0, 1, images_effectsspadeimage_321_0_17, 1};
static Image* images_effectsspadeimage_321_0_26[1];
static Direction direction_effectsspadeimage_321_0_26 = {26, 50, 50, 0, 1, images_effectsspadeimage_321_0_26, 1};
static Image* images_effectsspadeimage_321_0_27[1];
static Direction direction_effectsspadeimage_321_0_27 = {27, 50, 50, 0, 1, images_effectsspadeimage_321_0_27, 1};
static Image* images_effectsspadeimage_321_0_28[1];
static Direction direction_effectsspadeimage_321_0_28 = {28, 50, 50, 0, 1, images_effectsspadeimage_321_0_28, 1};
static Image* images_effectsspadeimage_321_0_31[1];
static Direction direction_effectsspadeimage_321_0_31 = {31, 50, 50, 0, -1, images_effectsspadeimage_321_0_31, 1};
static Animation anim_effectsspadeimage_321_0 = {&direction_effectsspadeimage_321_0_0, &direction_effectsspadeimage_321_0_1, &direction_effectsspadeimage_321_0_2, &direction_effectsspadeimage_321_0_3, &direction_effectsspadeimage_321_0_4, &direction_effectsspadeimage_321_0_5, &direction_effectsspadeimage_321_0_5, &direction_effectsspadeimage_321_0_5, &direction_effectsspadeimage_321_0_10, &direction_effectsspadeimage_321_0_10, &direction_effectsspadeimage_321_0_10, NULL, &direction_effectsspadeimage_321_0_12, &direction_effectsspadeimage_321_0_12, &direction_effectsspadeimage_321_0_15, &direction_effectsspadeimage_321_0_15, &direction_effectsspadeimage_321_0_16, &direction_effectsspadeimage_321_0_17, &direction_effectsspadeimage_321_0_17, &direction_effectsspadeimage_321_0_17, &direction_effectsspadeimage_321_0_17, &direction_effectsspadeimage_321_0_17, &direction_effectsspadeimage_321_0_26, &direction_effectsspadeimage_321_0_26, &direction_effectsspadeimage_321_0_26, &direction_effectsspadeimage_321_0_26, &direction_effectsspadeimage_321_0_26, &direction_effectsspadeimage_321_0_27, &direction_effectsspadeimage_321_0_28, &direction_effectsspadeimage_321_0_28, &direction_effectsspadeimage_321_0_31, &direction_effectsspadeimage_321_0_31};
static Image* images_effectsspadeimage_321_7_0[1];
static Direction direction_effectsspadeimage_321_7_0 = {0, 50, 50, 0, -1, images_effectsspadeimage_321_7_0, 1};
static Image* images_effectsspadeimage_321_7_16[1];
static Direction direction_effectsspadeimage_321_7_16 = {16, 50, 50, 0, -1, images_effectsspadeimage_321_7_16, 1};
static Animation anim_effectsspadeimage_321_7 = {&direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, NULL, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, &direction_effectsspadeimage_321_7_16, NULL, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0, &direction_effectsspadeimage_321_7_0};
static Animation * anim_array_effectsspadeimage_321[8] = {&anim_effectsspadeimage_321_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_effectsspadeimage_321_7};
static Animations anim_effectsspadeimage_321 = {8, &anim_array_effectsspadeimage_321[0]};
static bool anim_effectsspadeimage_321_initialized;
class EffectsSpadeImage_321 : public Active
{
public:
    EffectsSpadeImage_321(int x, int y) : Active(x, y, EffectsSpadeImage_321_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effects_SpadeImage", 18);
#endif
        this->animations = &anim_effectsspadeimage_321;
        if (!anim_effectsspadeimage_321_initialized) {
            anim_effectsspadeimage_321_initialized = true;
            images_effectsspadeimage_321_0_0[0] = get_internal_image(14091);
            images_effectsspadeimage_321_0_1[0] = get_internal_image(14089);
            images_effectsspadeimage_321_0_2[0] = get_internal_image(1298);
            images_effectsspadeimage_321_0_3[0] = get_internal_image(5206);
            images_effectsspadeimage_321_0_4[0] = get_internal_image(1446);
            images_effectsspadeimage_321_0_5[0] = get_internal_image(5225);
            images_effectsspadeimage_321_0_10[0] = get_internal_image(14093);
            images_effectsspadeimage_321_0_12[0] = get_internal_image(13892);
            images_effectsspadeimage_321_0_15[0] = get_internal_image(14991);
            images_effectsspadeimage_321_0_16[0] = get_internal_image(14090);
            images_effectsspadeimage_321_0_17[0] = get_internal_image(14092);
            images_effectsspadeimage_321_0_26[0] = get_internal_image(14096);
            images_effectsspadeimage_321_0_27[0] = get_internal_image(3972);
            images_effectsspadeimage_321_0_28[0] = get_internal_image(13614);
            images_effectsspadeimage_321_0_31[0] = get_internal_image(14999);
            images_effectsspadeimage_321_7_0[0] = get_internal_image(12616);
            images_effectsspadeimage_321_7_16[0] = get_internal_image(12619);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 127);
        flags |= GLOBAL;
        alterables = &global_data_24_effects_spadeimage.value;
        if (!global_data_24_effects_spadeimage.init) {
            global_data_24_effects_spadeimage.init = true;
        }
    }
};
FrameObject * create_effectsspadeimage_321(int x, int y)
{
    return new (Active::pool.create()) EffectsSpadeImage_321(x, y);
}
static Image* images_objectbike_322_0_0[1];
static Direction direction_objectbike_322_0_0 = {0, 50, 50, 0, 1, images_objectbike_322_0_0, 1};
static Image* images_objectbike_322_0_16[1];
static Direction direction_objectbike_322_0_16 = {16, 50, 50, 0, 1, images_objectbike_322_0_16, 1};
static Animation anim_objectbike_322_0 = {&direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, NULL, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, &direction_objectbike_322_0_16, NULL, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0, &direction_objectbike_322_0_0};
static Animation * anim_array_objectbike_322[1] = {&anim_objectbike_322_0};
static Animations anim_objectbike_322 = {1, &anim_array_objectbike_322[0]};
static bool anim_objectbike_322_initialized;
class ObjectBike_322 : public Active
{
public:
    ObjectBike_322(int x, int y) : Active(x, y, ObjectBike_322_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Bike", 11);
#endif
        this->animations = &anim_objectbike_322;
        if (!anim_objectbike_322_initialized) {
            anim_objectbike_322_initialized = true;
            images_objectbike_322_0_0[0] = get_internal_image(1024);
            images_objectbike_322_0_16[0] = get_internal_image(87);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_25_object_bike.value;
        if (!global_data_25_object_bike.init) {
            alterables->values.set(0, 1);
            global_data_25_object_bike.init = true;
        }
    }
};
FrameObject * create_objectbike_322(int x, int y)
{
    return new (Active::pool.create()) ObjectBike_322(x, y);
}
static Image* images_effectscrystalbit_323_4_0[3];
static Direction direction_effectscrystalbit_323_4_0 = {0, 20, 20, 0, 1, images_effectscrystalbit_323_4_0, 3};
static Animation anim_effectscrystalbit_323_4 = {&direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, NULL, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0, &direction_effectscrystalbit_323_4_0};
static Animation * anim_array_effectscrystalbit_323[5] = {NULL, NULL, NULL, NULL, &anim_effectscrystalbit_323_4};
static Animations anim_effectscrystalbit_323 = {5, &anim_array_effectscrystalbit_323[0]};
static bool anim_effectscrystalbit_323_initialized;
class EffectsCrystalBit_323 : public Active
{
public:
    EffectsCrystalBit_323(int x, int y) : Active(x, y, EffectsCrystalBit_323_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_CrystalBit", 18);
#endif
        this->animations = &anim_effectscrystalbit_323;
        if (!anim_effectscrystalbit_323_initialized) {
            anim_effectscrystalbit_323_initialized = true;
            images_effectscrystalbit_323_4_0[0] = get_internal_image(1038);
            images_effectscrystalbit_323_4_0[1] = get_internal_image(1038);
            images_effectscrystalbit_323_4_0[2] = get_internal_image(1038);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_direction(pick_random(17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 24, 25, 26, 27, 28, 29, 30, 31));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(50);
        ((BallMovement*)movement)->set_deceleration(30);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectscrystalbit_323(int x, int y)
{
    return new (Active::pool.create()) EffectsCrystalBit_323(x, y);
}
static Image* images_monitorcrystals_324_0_0[5];
static Direction direction_monitorcrystals_324_0_0 = {0, 15, 15, 0, -1, images_monitorcrystals_324_0_0, 5};
static Animation anim_monitorcrystals_324_0 = {&direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, NULL, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0, &direction_monitorcrystals_324_0_0};
static Animation * anim_array_monitorcrystals_324[1] = {&anim_monitorcrystals_324_0};
static Animations anim_monitorcrystals_324 = {1, &anim_array_monitorcrystals_324[0]};
static bool anim_monitorcrystals_324_initialized;
class MonitorCrystals_324 : public Active
{
public:
    MonitorCrystals_324(int x, int y) : Active(x, y, MonitorCrystals_324_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_Crystals", 16);
#endif
        this->animations = &anim_monitorcrystals_324;
        if (!anim_monitorcrystals_324_initialized) {
            anim_monitorcrystals_324_initialized = true;
            images_monitorcrystals_324_0_0[0] = get_internal_image(8744);
            images_monitorcrystals_324_0_0[1] = get_internal_image(11424);
            images_monitorcrystals_324_0_0[2] = get_internal_image(11425);
            images_monitorcrystals_324_0_0[3] = get_internal_image(11426);
            images_monitorcrystals_324_0_0[4] = get_internal_image(11427);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_26_monitor_crystals.value;
        if (!global_data_26_monitor_crystals.init) {
            alterables->values.set(2, 2);
            alterables->values.set(3, -1);
            global_data_26_monitor_crystals.init = true;
        }
    }
};
FrameObject * create_monitorcrystals_324(int x, int y)
{
    return new (Active::pool.create()) MonitorCrystals_324(x, y);
}
static Image* images_monitorwoodshield_325_0_0[1];
static Direction direction_monitorwoodshield_325_0_0 = {0, 50, 50, 0, 1, images_monitorwoodshield_325_0_0, 1};
static Animation anim_monitorwoodshield_325_0 = {&direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, NULL, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0, &direction_monitorwoodshield_325_0_0};
static Animation * anim_array_monitorwoodshield_325[1] = {&anim_monitorwoodshield_325_0};
static Animations anim_monitorwoodshield_325 = {1, &anim_array_monitorwoodshield_325[0]};
static bool anim_monitorwoodshield_325_initialized;
class MonitorWoodShield_325 : public Active
{
public:
    MonitorWoodShield_325(int x, int y) : Active(x, y, MonitorWoodShield_325_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_WoodShield", 18);
#endif
        this->animations = &anim_monitorwoodshield_325;
        if (!anim_monitorwoodshield_325_initialized) {
            anim_monitorwoodshield_325_initialized = true;
            images_monitorwoodshield_325_0_0[0] = get_internal_image(11819);
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
FrameObject * create_monitorwoodshield_325(int x, int y)
{
    return new (Active::pool.create()) MonitorWoodShield_325(x, y);
}
static Image* images_monitorearthshield_326_0_0[1];
static Direction direction_monitorearthshield_326_0_0 = {0, 50, 50, 0, 1, images_monitorearthshield_326_0_0, 1};
static Animation anim_monitorearthshield_326_0 = {&direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, NULL, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0, &direction_monitorearthshield_326_0_0};
static Animation * anim_array_monitorearthshield_326[1] = {&anim_monitorearthshield_326_0};
static Animations anim_monitorearthshield_326 = {1, &anim_array_monitorearthshield_326[0]};
static bool anim_monitorearthshield_326_initialized;
class MonitorEarthShield_326 : public Active
{
public:
    MonitorEarthShield_326(int x, int y) : Active(x, y, MonitorEarthShield_326_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_EarthShield", 19);
#endif
        this->animations = &anim_monitorearthshield_326;
        if (!anim_monitorearthshield_326_initialized) {
            anim_monitorearthshield_326_initialized = true;
            images_monitorearthshield_326_0_0[0] = get_internal_image(11820);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 11);
    }
};
FrameObject * create_monitorearthshield_326(int x, int y)
{
    return new (Active::pool.create()) MonitorEarthShield_326(x, y);
}
static Image* images_monitorwatershield_327_0_0[1];
static Direction direction_monitorwatershield_327_0_0 = {0, 50, 50, 0, 1, images_monitorwatershield_327_0_0, 1};
static Image* images_monitorwatershield_327_0_8[1];
static Direction direction_monitorwatershield_327_0_8 = {8, 50, 50, 0, 1, images_monitorwatershield_327_0_8, 1};
static Animation anim_monitorwatershield_327_0 = {&direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, NULL, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, &direction_monitorwatershield_327_0_8, NULL, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0, &direction_monitorwatershield_327_0_0};
static Animation * anim_array_monitorwatershield_327[1] = {&anim_monitorwatershield_327_0};
static Animations anim_monitorwatershield_327 = {1, &anim_array_monitorwatershield_327[0]};
static bool anim_monitorwatershield_327_initialized;
class MonitorWaterShield_327 : public Active
{
public:
    MonitorWaterShield_327(int x, int y) : Active(x, y, MonitorWaterShield_327_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_WaterShield", 19);
#endif
        this->animations = &anim_monitorwatershield_327;
        if (!anim_monitorwatershield_327_initialized) {
            anim_monitorwatershield_327_initialized = true;
            images_monitorwatershield_327_0_0[0] = get_internal_image(11828);
            images_monitorwatershield_327_0_8[0] = get_internal_image(2237);
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
FrameObject * create_monitorwatershield_327(int x, int y)
{
    return new (Active::pool.create()) MonitorWaterShield_327(x, y);
}
static Image* images_monitorfireshield_328_0_0[1];
static Direction direction_monitorfireshield_328_0_0 = {0, 50, 50, 0, 1, images_monitorfireshield_328_0_0, 1};
static Animation anim_monitorfireshield_328_0 = {&direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, NULL, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0, &direction_monitorfireshield_328_0_0};
static Animation * anim_array_monitorfireshield_328[1] = {&anim_monitorfireshield_328_0};
static Animations anim_monitorfireshield_328 = {1, &anim_array_monitorfireshield_328[0]};
static bool anim_monitorfireshield_328_initialized;
class MonitorFireShield_328 : public Active
{
public:
    MonitorFireShield_328(int x, int y) : Active(x, y, MonitorFireShield_328_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_FireShield", 18);
#endif
        this->animations = &anim_monitorfireshield_328;
        if (!anim_monitorfireshield_328_initialized) {
            anim_monitorfireshield_328_initialized = true;
            images_monitorfireshield_328_0_0[0] = get_internal_image(11821);
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
FrameObject * create_monitorfireshield_328(int x, int y)
{
    return new (Active::pool.create()) MonitorFireShield_328(x, y);
}
static Image* images_monitormetalshield_329_0_0[1];
static Direction direction_monitormetalshield_329_0_0 = {0, 50, 50, 0, 1, images_monitormetalshield_329_0_0, 1};
static Animation anim_monitormetalshield_329_0 = {&direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, NULL, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0, &direction_monitormetalshield_329_0_0};
static Animation * anim_array_monitormetalshield_329[1] = {&anim_monitormetalshield_329_0};
static Animations anim_monitormetalshield_329 = {1, &anim_array_monitormetalshield_329[0]};
static bool anim_monitormetalshield_329_initialized;
class MonitorMetalShield_329 : public Active
{
public:
    MonitorMetalShield_329(int x, int y) : Active(x, y, MonitorMetalShield_329_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_MetalShield", 19);
#endif
        this->animations = &anim_monitormetalshield_329;
        if (!anim_monitormetalshield_329_initialized) {
            anim_monitormetalshield_329_initialized = true;
            images_monitormetalshield_329_0_0[0] = get_internal_image(3212);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_27_monitor_metalshield.value;
        if (!global_data_27_monitor_metalshield.init) {
            alterables->values.set(2, 4);
            global_data_27_monitor_metalshield.init = true;
        }
    }
};
FrameObject * create_monitormetalshield_329(int x, int y)
{
    return new (Active::pool.create()) MonitorMetalShield_329(x, y);
}
static Image* images_monitorbroken_330_0_0[1];
static Direction direction_monitorbroken_330_0_0 = {0, 50, 50, 0, 1, images_monitorbroken_330_0_0, 1};
static Image* images_monitorbroken_330_0_1[6];
static Direction direction_monitorbroken_330_0_1 = {1, 20, 20, 5, -1, images_monitorbroken_330_0_1, 6};
static Image* images_monitorbroken_330_0_2[4];
static Direction direction_monitorbroken_330_0_2 = {2, 20, 20, 3, -1, images_monitorbroken_330_0_2, 4};
static Image* images_monitorbroken_330_0_3[1];
static Direction direction_monitorbroken_330_0_3 = {3, 50, 50, 0, 1, images_monitorbroken_330_0_3, 1};
static Image* images_monitorbroken_330_0_4[1];
static Direction direction_monitorbroken_330_0_4 = {4, 50, 50, 0, 1, images_monitorbroken_330_0_4, 1};
static Animation anim_monitorbroken_330_0 = {&direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_1, &direction_monitorbroken_330_0_2, &direction_monitorbroken_330_0_3, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, &direction_monitorbroken_330_0_4, NULL, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0, &direction_monitorbroken_330_0_0};
static Image* images_monitorbroken_330_7_8[1];
static Direction direction_monitorbroken_330_7_8 = {8, 50, 50, 0, 1, images_monitorbroken_330_7_8, 1};
static Animation anim_monitorbroken_330_7 = {&direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, NULL, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8, &direction_monitorbroken_330_7_8};
static Animation * anim_array_monitorbroken_330[8] = {&anim_monitorbroken_330_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_monitorbroken_330_7};
static Animations anim_monitorbroken_330 = {8, &anim_array_monitorbroken_330[0]};
static bool anim_monitorbroken_330_initialized;
class MonitorBroken_330 : public Active
{
public:
    MonitorBroken_330(int x, int y) : Active(x, y, MonitorBroken_330_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Monitor_Broken", 14);
#endif
        this->animations = &anim_monitorbroken_330;
        if (!anim_monitorbroken_330_initialized) {
            anim_monitorbroken_330_initialized = true;
            images_monitorbroken_330_0_0[0] = get_internal_image(867);
            images_monitorbroken_330_0_1[0] = get_internal_image(555);
            images_monitorbroken_330_0_1[1] = get_internal_image(556);
            images_monitorbroken_330_0_1[2] = get_internal_image(557);
            images_monitorbroken_330_0_1[3] = get_internal_image(558);
            images_monitorbroken_330_0_1[4] = get_internal_image(694);
            images_monitorbroken_330_0_1[5] = get_internal_image(865);
            images_monitorbroken_330_0_2[0] = get_internal_image(604);
            images_monitorbroken_330_0_2[1] = get_internal_image(578);
            images_monitorbroken_330_0_2[2] = get_internal_image(1544);
            images_monitorbroken_330_0_2[3] = get_internal_image(1543);
            images_monitorbroken_330_0_3[0] = get_internal_image(108);
            images_monitorbroken_330_0_4[0] = get_internal_image(12270);
            images_monitorbroken_330_7_8[0] = get_internal_image(1303);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_28_monitor_broken.value;
        if (!global_data_28_monitor_broken.init) {
            global_data_28_monitor_broken.init = true;
        }
    }
};
FrameObject * create_monitorbroken_330(int x, int y)
{
    return new (Active::pool.create()) MonitorBroken_330(x, y);
}
static Image* images_monitoricon_331_0_0[16];
static Direction direction_monitoricon_331_0_0 = {0, 0, 0, 0, -1, images_monitoricon_331_0_0, 16};
static Animation anim_monitoricon_331_0 = {&direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, NULL, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0, &direction_monitoricon_331_0_0};
static Animation * anim_array_monitoricon_331[1] = {&anim_monitoricon_331_0};
static Animations anim_monitoricon_331 = {1, &anim_array_monitoricon_331[0]};
static bool anim_monitoricon_331_initialized;
class MonitorIcon_331 : public Active
{
public:
    MonitorIcon_331(int x, int y) : Active(x, y, MonitorIcon_331_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MonitorIcon", 11);
#endif
        set_visible(false);
        this->animations = &anim_monitoricon_331;
        if (!anim_monitoricon_331_initialized) {
            anim_monitoricon_331_initialized = true;
            images_monitoricon_331_0_0[0] = get_internal_image(59);
            images_monitoricon_331_0_0[1] = get_internal_image(317);
            images_monitoricon_331_0_0[2] = get_internal_image(59);
            images_monitoricon_331_0_0[3] = get_internal_image(559);
            images_monitoricon_331_0_0[4] = get_internal_image(520);
            images_monitoricon_331_0_0[5] = get_internal_image(521);
            images_monitoricon_331_0_0[6] = get_internal_image(208);
            images_monitoricon_331_0_0[7] = get_internal_image(80);
            images_monitoricon_331_0_0[8] = get_internal_image(175);
            images_monitoricon_331_0_0[9] = get_internal_image(5704);
            images_monitoricon_331_0_0[10] = get_internal_image(3278);
            images_monitoricon_331_0_0[11] = get_internal_image(103);
            images_monitoricon_331_0_0[12] = get_internal_image(1261);
            images_monitoricon_331_0_0[13] = get_internal_image(530);
            images_monitoricon_331_0_0[14] = get_internal_image(530);
            images_monitoricon_331_0_0[15] = get_internal_image(900);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_29_monitoricon.value;
        if (!global_data_29_monitoricon.init) {
            global_data_29_monitoricon.init = true;
        }
    }
};
FrameObject * create_monitoricon_331(int x, int y)
{
    return new (Active::pool.create()) MonitorIcon_331(x, y);
}
static Image* images_effectsdust01_332_4_0[10];
static Direction direction_effectsdust01_332_4_0 = {0, 30, 30, 0, 1, images_effectsdust01_332_4_0, 10};
static Animation anim_effectsdust01_332_4 = {&direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, NULL, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0, &direction_effectsdust01_332_4_0};
static Animation * anim_array_effectsdust01_332[5] = {NULL, NULL, NULL, NULL, &anim_effectsdust01_332_4};
static Animations anim_effectsdust01_332 = {5, &anim_array_effectsdust01_332[0]};
static bool anim_effectsdust01_332_initialized;
class EffectsDust01_332 : public Active
{
public:
    EffectsDust01_332(int x, int y) : Active(x, y, EffectsDust01_332_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Dust01", 14);
#endif
        this->animations = &anim_effectsdust01_332;
        if (!anim_effectsdust01_332_initialized) {
            anim_effectsdust01_332_initialized = true;
            images_effectsdust01_332_4_0[0] = get_internal_image(733);
            images_effectsdust01_332_4_0[1] = get_internal_image(732);
            images_effectsdust01_332_4_0[2] = get_internal_image(731);
            images_effectsdust01_332_4_0[3] = get_internal_image(730);
            images_effectsdust01_332_4_0[4] = get_internal_image(729);
            images_effectsdust01_332_4_0[5] = get_internal_image(728);
            images_effectsdust01_332_4_0[6] = get_internal_image(710);
            images_effectsdust01_332_4_0[7] = get_internal_image(711);
            images_effectsdust01_332_4_0[8] = get_internal_image(726);
            images_effectsdust01_332_4_0[9] = get_internal_image(727);
        }
        collision_box = true;
        auto_rotate = true;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        blend_color = Color(255, 255, 255, 116);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(9);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        flags |= GLOBAL;
        alterables = &global_data_30_effects_dust01.value;
        if (!global_data_30_effects_dust01.init) {
            global_data_30_effects_dust01.init = true;
        }
    }
};
FrameObject * create_effectsdust01_332(int x, int y)
{
    return new (Active::pool.create()) EffectsDust01_332(x, y);
}
static Image* images_sparkle2_333_0_0[14];
static Direction direction_sparkle2_333_0_0 = {0, 100, 100, 0, -1, images_sparkle2_333_0_0, 14};
static Animation anim_sparkle2_333_0 = {&direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, NULL, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0, &direction_sparkle2_333_0_0};
static Animation * anim_array_sparkle2_333[1] = {&anim_sparkle2_333_0};
static Animations anim_sparkle2_333 = {1, &anim_array_sparkle2_333[0]};
static bool anim_sparkle2_333_initialized;
class Sparkle2_333 : public Active
{
public:
    Sparkle2_333(int x, int y) : Active(x, y, Sparkle2_333_type)
    {
        // qualifiers: 30
#ifndef NDEBUG
        name = std::string("Sparkle 2", 9);
#endif
        this->animations = &anim_sparkle2_333;
        if (!anim_sparkle2_333_initialized) {
            anim_sparkle2_333_initialized = true;
            images_sparkle2_333_0_0[0] = get_internal_image(1042);
            images_sparkle2_333_0_0[1] = get_internal_image(1043);
            images_sparkle2_333_0_0[2] = get_internal_image(1044);
            images_sparkle2_333_0_0[3] = get_internal_image(1045);
            images_sparkle2_333_0_0[4] = get_internal_image(1046);
            images_sparkle2_333_0_0[5] = get_internal_image(1047);
            images_sparkle2_333_0_0[6] = get_internal_image(381);
            images_sparkle2_333_0_0[7] = get_internal_image(1048);
            images_sparkle2_333_0_0[8] = get_internal_image(381);
            images_sparkle2_333_0_0[9] = get_internal_image(1047);
            images_sparkle2_333_0_0[10] = get_internal_image(1046);
            images_sparkle2_333_0_0[11] = get_internal_image(1045);
            images_sparkle2_333_0_0[12] = get_internal_image(1044);
            images_sparkle2_333_0_0[13] = get_internal_image(1043);
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
FrameObject * create_sparkle2_333(int x, int y)
{
    return new (Active::pool.create()) Sparkle2_333(x, y);
}
static Image* images_sparkle3_334_0_0[14];
static Direction direction_sparkle3_334_0_0 = {0, 100, 100, 0, -1, images_sparkle3_334_0_0, 14};
static Animation anim_sparkle3_334_0 = {&direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, NULL, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0, &direction_sparkle3_334_0_0};
static Animation * anim_array_sparkle3_334[1] = {&anim_sparkle3_334_0};
static Animations anim_sparkle3_334 = {1, &anim_array_sparkle3_334[0]};
static bool anim_sparkle3_334_initialized;
class Sparkle3_334 : public Active
{
public:
    Sparkle3_334(int x, int y) : Active(x, y, Sparkle3_334_type)
    {
        // qualifiers: 30
#ifndef NDEBUG
        name = std::string("Sparkle 3", 9);
#endif
        this->animations = &anim_sparkle3_334;
        if (!anim_sparkle3_334_initialized) {
            anim_sparkle3_334_initialized = true;
            images_sparkle3_334_0_0[0] = get_internal_image(1042);
            images_sparkle3_334_0_0[1] = get_internal_image(1043);
            images_sparkle3_334_0_0[2] = get_internal_image(1044);
            images_sparkle3_334_0_0[3] = get_internal_image(1045);
            images_sparkle3_334_0_0[4] = get_internal_image(1046);
            images_sparkle3_334_0_0[5] = get_internal_image(1047);
            images_sparkle3_334_0_0[6] = get_internal_image(381);
            images_sparkle3_334_0_0[7] = get_internal_image(1048);
            images_sparkle3_334_0_0[8] = get_internal_image(381);
            images_sparkle3_334_0_0[9] = get_internal_image(1047);
            images_sparkle3_334_0_0[10] = get_internal_image(1046);
            images_sparkle3_334_0_0[11] = get_internal_image(1045);
            images_sparkle3_334_0_0[12] = get_internal_image(1044);
            images_sparkle3_334_0_0[13] = get_internal_image(1043);
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
FrameObject * create_sparkle3_334(int x, int y)
{
    return new (Active::pool.create()) Sparkle3_334(x, y);
}
static Image* images_sparkle4_335_0_0[14];
static Direction direction_sparkle4_335_0_0 = {0, 100, 100, 0, -1, images_sparkle4_335_0_0, 14};
static Animation anim_sparkle4_335_0 = {&direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, NULL, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0, &direction_sparkle4_335_0_0};
static Animation * anim_array_sparkle4_335[1] = {&anim_sparkle4_335_0};
static Animations anim_sparkle4_335 = {1, &anim_array_sparkle4_335[0]};
static bool anim_sparkle4_335_initialized;
class Sparkle4_335 : public Active
{
public:
    Sparkle4_335(int x, int y) : Active(x, y, Sparkle4_335_type)
    {
        // qualifiers: 30
#ifndef NDEBUG
        name = std::string("Sparkle 4", 9);
#endif
        this->animations = &anim_sparkle4_335;
        if (!anim_sparkle4_335_initialized) {
            anim_sparkle4_335_initialized = true;
            images_sparkle4_335_0_0[0] = get_internal_image(1042);
            images_sparkle4_335_0_0[1] = get_internal_image(1043);
            images_sparkle4_335_0_0[2] = get_internal_image(1044);
            images_sparkle4_335_0_0[3] = get_internal_image(1045);
            images_sparkle4_335_0_0[4] = get_internal_image(1046);
            images_sparkle4_335_0_0[5] = get_internal_image(1047);
            images_sparkle4_335_0_0[6] = get_internal_image(381);
            images_sparkle4_335_0_0[7] = get_internal_image(1048);
            images_sparkle4_335_0_0[8] = get_internal_image(381);
            images_sparkle4_335_0_0[9] = get_internal_image(1047);
            images_sparkle4_335_0_0[10] = get_internal_image(1046);
            images_sparkle4_335_0_0[11] = get_internal_image(1045);
            images_sparkle4_335_0_0[12] = get_internal_image(1044);
            images_sparkle4_335_0_0[13] = get_internal_image(1043);
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
FrameObject * create_sparkle4_335(int x, int y)
{
    return new (Active::pool.create()) Sparkle4_335(x, y);
}
static Image* images_sparkle5_336_4_0[15];
static Direction direction_sparkle5_336_4_0 = {0, 50, 50, 0, 1, images_sparkle5_336_4_0, 15};
static Animation anim_sparkle5_336_4 = {&direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, NULL, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0, &direction_sparkle5_336_4_0};
static Animation * anim_array_sparkle5_336[5] = {NULL, NULL, NULL, NULL, &anim_sparkle5_336_4};
static Animations anim_sparkle5_336 = {5, &anim_array_sparkle5_336[0]};
static bool anim_sparkle5_336_initialized;
class Sparkle5_336 : public Active
{
public:
    Sparkle5_336(int x, int y) : Active(x, y, Sparkle5_336_type)
    {
        // qualifiers: 30
#ifndef NDEBUG
        name = std::string("Sparkle 5", 9);
#endif
        this->animations = &anim_sparkle5_336;
        if (!anim_sparkle5_336_initialized) {
            anim_sparkle5_336_initialized = true;
            images_sparkle5_336_4_0[0] = get_internal_image(1048);
            images_sparkle5_336_4_0[1] = get_internal_image(1047);
            images_sparkle5_336_4_0[2] = get_internal_image(1046);
            images_sparkle5_336_4_0[3] = get_internal_image(381);
            images_sparkle5_336_4_0[4] = get_internal_image(1045);
            images_sparkle5_336_4_0[5] = get_internal_image(1044);
            images_sparkle5_336_4_0[6] = get_internal_image(1043);
            images_sparkle5_336_4_0[7] = get_internal_image(1042);
            images_sparkle5_336_4_0[8] = get_internal_image(1043);
            images_sparkle5_336_4_0[9] = get_internal_image(1044);
            images_sparkle5_336_4_0[10] = get_internal_image(1045);
            images_sparkle5_336_4_0[11] = get_internal_image(1046);
            images_sparkle5_336_4_0[12] = get_internal_image(1047);
            images_sparkle5_336_4_0[13] = get_internal_image(381);
            images_sparkle5_336_4_0[14] = get_internal_image(1048);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_sparkle5_336(int x, int y)
{
    return new (Active::pool.create()) Sparkle5_336(x, y);
}
static Image* images_obj1up_337_0_0[1];
static Direction direction_obj1up_337_0_0 = {0, 50, 50, 0, 1, images_obj1up_337_0_0, 1};
static Animation anim_obj1up_337_0 = {&direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, NULL, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0, &direction_obj1up_337_0_0};
static Animation * anim_array_obj1up_337[1] = {&anim_obj1up_337_0};
static Animations anim_obj1up_337 = {1, &anim_array_obj1up_337[0]};
static bool anim_obj1up_337_initialized;
class Obj1up_337 : public Active
{
public:
    Obj1up_337(int x, int y) : Active(x, y, Obj1up_337_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("1up", 3);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_obj1up_337;
        if (!anim_obj1up_337_initialized) {
            anim_obj1up_337_initialized = true;
            images_obj1up_337_0_0[0] = get_internal_image(1788);
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
FrameObject * create_obj1up_337(int x, int y)
{
    return new (Active::pool.create()) Obj1up_337(x, y);
}
static Image* images_obj200pts_338_0_0[1];
static Direction direction_obj200pts_338_0_0 = {0, 50, 50, 0, 1, images_obj200pts_338_0_0, 1};
static Animation anim_obj200pts_338_0 = {&direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, NULL, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0, &direction_obj200pts_338_0_0};
static Animation * anim_array_obj200pts_338[1] = {&anim_obj200pts_338_0};
static Animations anim_obj200pts_338 = {1, &anim_array_obj200pts_338[0]};
static bool anim_obj200pts_338_initialized;
class Obj200pts_338 : public Active
{
public:
    Obj200pts_338(int x, int y) : Active(x, y, Obj200pts_338_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("200pts", 6);
#endif
        this->animations = &anim_obj200pts_338;
        if (!anim_obj200pts_338_initialized) {
            anim_obj200pts_338_initialized = true;
            images_obj200pts_338_0_0[0] = get_internal_image(3828);
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
FrameObject * create_obj200pts_338(int x, int y)
{
    return new (Active::pool.create()) Obj200pts_338(x, y);
}
static Image* images_thunderspark_339_4_0[7];
static Direction direction_thunderspark_339_4_0 = {0, 50, 50, 0, 1, images_thunderspark_339_4_0, 7};
static Animation anim_thunderspark_339_4 = {&direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, NULL, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0, &direction_thunderspark_339_4_0};
static Animation * anim_array_thunderspark_339[5] = {NULL, NULL, NULL, NULL, &anim_thunderspark_339_4};
static Animations anim_thunderspark_339 = {5, &anim_array_thunderspark_339[0]};
static bool anim_thunderspark_339_initialized;
class ThunderSpark_339 : public Active
{
public:
    ThunderSpark_339(int x, int y) : Active(x, y, ThunderSpark_339_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Thunder Spark", 13);
#endif
        this->animations = &anim_thunderspark_339;
        if (!anim_thunderspark_339_initialized) {
            anim_thunderspark_339_initialized = true;
            images_thunderspark_339_4_0[0] = get_internal_image(2285);
            images_thunderspark_339_4_0[1] = get_internal_image(2337);
            images_thunderspark_339_4_0[2] = get_internal_image(2274);
            images_thunderspark_339_4_0[3] = get_internal_image(2343);
            images_thunderspark_339_4_0[4] = get_internal_image(2335);
            images_thunderspark_339_4_0[5] = get_internal_image(2346);
            images_thunderspark_339_4_0[6] = get_internal_image(2336);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_thunderspark_339(int x, int y)
{
    return new (Active::pool.create()) ThunderSpark_339(x, y);
}
class BonusStageBrick_340 : public QuickBackdrop
{
public:
    BonusStageBrick_340(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Brick", 16);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 192;
        image = get_internal_image(12733);
        outline = 0;
    }
};
FrameObject * create_bonusstagebrick_340(int x, int y)
{
    return new (QuickBackdrop::pool.create()) BonusStageBrick_340(x, y);
}
class BonusStageBackdrop_341 : public Backdrop
{
public:
    BonusStageBackdrop_341(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Backdrop", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12704);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bonusstagebackdrop_341(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageBackdrop_341(x, y);
}
class BonusStageBackdrop3_342 : public Backdrop
{
public:
    BonusStageBackdrop3_342(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Backdrop 3", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12709);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bonusstagebackdrop3_342(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageBackdrop3_342(x, y);
}
class BonusStageBackdrop2_343 : public Backdrop
{
public:
    BonusStageBackdrop2_343(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Backdrop 2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12707);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bonusstagebackdrop2_343(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageBackdrop2_343(x, y);
}
class BonusStageBackdrop4_344 : public Backdrop
{
public:
    BonusStageBackdrop4_344(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Backdrop 4", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12685);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bonusstagebackdrop4_344(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageBackdrop4_344(x, y);
}
class BonusStageBackdrop5_345 : public Backdrop
{
public:
    BonusStageBackdrop5_345(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_Backdrop 5", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12710);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_bonusstagebackdrop5_345(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageBackdrop5_345(x, y);
}
class BonusStageWallShadow_346 : public Backdrop
{
public:
    BonusStageWallShadow_346(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_WallShadow", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11018);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bonusstagewallshadow_346(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageWallShadow_346(x, y);
}
class BonusStageWallShadow2_347 : public Backdrop
{
public:
    BonusStageWallShadow2_347(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_WallShadow 2", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12735);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bonusstagewallshadow2_347(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageWallShadow2_347(x, y);
}
static Image* images_levellayer115_348_0_0[1];
static Direction direction_levellayer115_348_0_0 = {0, 50, 50, 0, 1, images_levellayer115_348_0_0, 1};
static Animation anim_levellayer115_348_0 = {&direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, NULL, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0, &direction_levellayer115_348_0_0};
static Animation * anim_array_levellayer115_348[1] = {&anim_levellayer115_348_0};
static Animations anim_levellayer115_348 = {1, &anim_array_levellayer115_348[0]};
static bool anim_levellayer115_348_initialized;
class LevelLayer115_348 : public Active
{
public:
    LevelLayer115_348(int x, int y) : Active(x, y, LevelLayer115_348_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_15", 15);
#endif
        this->animations = &anim_levellayer115_348;
        if (!anim_levellayer115_348_initialized) {
            anim_levellayer115_348_initialized = true;
            images_levellayer115_348_0_0[0] = get_internal_image(309);
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
FrameObject * create_levellayer115_348(int x, int y)
{
    return new (Active::pool.create()) LevelLayer115_348(x, y);
}
static Image* images_levellayer116_349_0_0[1];
static Direction direction_levellayer116_349_0_0 = {0, 50, 50, 0, 1, images_levellayer116_349_0_0, 1};
static Animation anim_levellayer116_349_0 = {&direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, NULL, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0, &direction_levellayer116_349_0_0};
static Animation * anim_array_levellayer116_349[1] = {&anim_levellayer116_349_0};
static Animations anim_levellayer116_349 = {1, &anim_array_levellayer116_349[0]};
static bool anim_levellayer116_349_initialized;
class LevelLayer116_349 : public Active
{
public:
    LevelLayer116_349(int x, int y) : Active(x, y, LevelLayer116_349_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_16", 15);
#endif
        this->animations = &anim_levellayer116_349;
        if (!anim_levellayer116_349_initialized) {
            anim_levellayer116_349_initialized = true;
            images_levellayer116_349_0_0[0] = get_internal_image(161);
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
FrameObject * create_levellayer116_349(int x, int y)
{
    return new (Active::pool.create()) LevelLayer116_349(x, y);
}
static Image* images_enemylimiter_350_0_0[1];
static Direction direction_enemylimiter_350_0_0 = {0, 30, 30, 0, -1, images_enemylimiter_350_0_0, 1};
static Animation anim_enemylimiter_350_0 = {&direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, NULL, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0, &direction_enemylimiter_350_0_0};
static Animation * anim_array_enemylimiter_350[1] = {&anim_enemylimiter_350_0};
static Animations anim_enemylimiter_350 = {1, &anim_array_enemylimiter_350[0]};
static bool anim_enemylimiter_350_initialized;
class EnemyLimiter_350 : public Active
{
public:
    EnemyLimiter_350(int x, int y) : Active(x, y, EnemyLimiter_350_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Limiter", 13);
#endif
        set_visible(false);
        this->animations = &anim_enemylimiter_350;
        if (!anim_enemylimiter_350_initialized) {
            anim_enemylimiter_350_initialized = true;
            images_enemylimiter_350_0_0[0] = get_internal_image(697);
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
FrameObject * create_enemylimiter_350(int x, int y)
{
    return new (Active::pool.create()) EnemyLimiter_350(x, y);
}
static Image* images_sign_351_0_0[1];
static Direction direction_sign_351_0_0 = {0, 50, 50, 0, -1, images_sign_351_0_0, 1};
static Animation anim_sign_351_0 = {&direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, NULL, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0, &direction_sign_351_0_0};
static Image* images_sign_351_1_0[16];
static Direction direction_sign_351_1_0 = {0, 100, 100, 0, -1, images_sign_351_1_0, 16};
static Image* images_sign_351_1_8[4];
static Direction direction_sign_351_1_8 = {8, 50, 50, 0, 1, images_sign_351_1_8, 4};
static Animation anim_sign_351_1 = {&direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, NULL, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, &direction_sign_351_1_8, NULL, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0, &direction_sign_351_1_0};
static Image* images_sign_351_12_0[1];
static Direction direction_sign_351_12_0 = {0, 50, 50, 0, -1, images_sign_351_12_0, 1};
static Image* images_sign_351_12_2[1];
static Direction direction_sign_351_12_2 = {2, 50, 50, 0, -1, images_sign_351_12_2, 1};
static Image* images_sign_351_12_8[1];
static Direction direction_sign_351_12_8 = {8, 50, 50, 0, -1, images_sign_351_12_8, 1};
static Animation anim_sign_351_12 = {&direction_sign_351_12_0, NULL, &direction_sign_351_12_2, &direction_sign_351_12_2, &direction_sign_351_12_2, NULL, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, &direction_sign_351_12_8, NULL, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0, &direction_sign_351_12_0};
static Animation * anim_array_sign_351[13] = {&anim_sign_351_0, &anim_sign_351_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_sign_351_12};
static Animations anim_sign_351 = {13, &anim_array_sign_351[0]};
static bool anim_sign_351_initialized;
class Sign_351 : public Active
{
public:
    Sign_351(int x, int y) : Active(x, y, Sign_351_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sign", 4);
#endif
        this->animations = &anim_sign_351;
        if (!anim_sign_351_initialized) {
            anim_sign_351_initialized = true;
            images_sign_351_0_0[0] = get_internal_image(2338);
            images_sign_351_1_0[0] = get_internal_image(2338);
            images_sign_351_1_0[1] = get_internal_image(2284);
            images_sign_351_1_0[2] = get_internal_image(2301);
            images_sign_351_1_0[3] = get_internal_image(2303);
            images_sign_351_1_0[4] = get_internal_image(2297);
            images_sign_351_1_0[5] = get_internal_image(2305);
            images_sign_351_1_0[6] = get_internal_image(2339);
            images_sign_351_1_0[7] = get_internal_image(2296);
            images_sign_351_1_0[8] = get_internal_image(2340);
            images_sign_351_1_0[9] = get_internal_image(2299);
            images_sign_351_1_0[10] = get_internal_image(2341);
            images_sign_351_1_0[11] = get_internal_image(2307);
            images_sign_351_1_0[12] = get_internal_image(2332);
            images_sign_351_1_0[13] = get_internal_image(2306);
            images_sign_351_1_0[14] = get_internal_image(2342);
            images_sign_351_1_0[15] = get_internal_image(2300);
            images_sign_351_1_8[0] = get_internal_image(2318);
            images_sign_351_1_8[1] = get_internal_image(2319);
            images_sign_351_1_8[2] = get_internal_image(2332);
            images_sign_351_1_8[3] = get_internal_image(2334);
            images_sign_351_12_0[0] = get_internal_image(5142);
            images_sign_351_12_2[0] = get_internal_image(1170);
            images_sign_351_12_8[0] = get_internal_image(5141);
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
FrameObject * create_sign_351(int x, int y)
{
    return new (Active::pool.create()) Sign_351(x, y);
}
static Image* images_link_352_0_0[1];
static Direction direction_link_352_0_0 = {0, 50, 50, 0, 1, images_link_352_0_0, 1};
static Animation anim_link_352_0 = {&direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, NULL, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0, &direction_link_352_0_0};
static Animation * anim_array_link_352[1] = {&anim_link_352_0};
static Animations anim_link_352 = {1, &anim_array_link_352[0]};
static bool anim_link_352_initialized;
class LINK_352 : public Active
{
public:
    LINK_352(int x, int y) : Active(x, y, LINK_352_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LINK", 4);
#endif
        set_visible(false);
        this->animations = &anim_link_352;
        if (!anim_link_352_initialized) {
            anim_link_352_initialized = true;
            images_link_352_0_0[0] = get_internal_image(618);
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
FrameObject * create_link_352(int x, int y)
{
    return new (Active::pool.create()) LINK_352(x, y);
}
static Image* images_gimmickbridge12logs_353_0_0[1];
static Direction direction_gimmickbridge12logs_353_0_0 = {0, 100, 100, 0, 1, images_gimmickbridge12logs_353_0_0, 1};
static Animation anim_gimmickbridge12logs_353_0 = {&direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, NULL, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0, &direction_gimmickbridge12logs_353_0_0};
static Animation * anim_array_gimmickbridge12logs_353[1] = {&anim_gimmickbridge12logs_353_0};
static Animations anim_gimmickbridge12logs_353 = {1, &anim_array_gimmickbridge12logs_353[0]};
static bool anim_gimmickbridge12logs_353_initialized;
class GimmickBridge12Logs_353 : public Active
{
public:
    GimmickBridge12Logs_353(int x, int y) : Active(x, y, GimmickBridge12Logs_353_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Bridge_12Logs", 21);
#endif
        set_visible(false);
        this->animations = &anim_gimmickbridge12logs_353;
        if (!anim_gimmickbridge12logs_353_initialized) {
            anim_gimmickbridge12logs_353_initialized = true;
            images_gimmickbridge12logs_353_0_0[0] = get_internal_image(241);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(6, 16);
    }
};
FrameObject * create_gimmickbridge12logs_353(int x, int y)
{
    return new (Active::pool.create()) GimmickBridge12Logs_353(x, y);
}
static Image* images_objectcodec_354_0_0[10];
static Direction direction_objectcodec_354_0_0 = {0, 17, 17, 0, -1, images_objectcodec_354_0_0, 10};
static Animation anim_objectcodec_354_0 = {&direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, NULL, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0, &direction_objectcodec_354_0_0};
static Animation * anim_array_objectcodec_354[1] = {&anim_objectcodec_354_0};
static Animations anim_objectcodec_354 = {1, &anim_array_objectcodec_354[0]};
static bool anim_objectcodec_354_initialized;
class ObjectCodec_354 : public Active
{
public:
    ObjectCodec_354(int x, int y) : Active(x, y, ObjectCodec_354_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_Codec", 12);
#endif
        this->animations = &anim_objectcodec_354;
        if (!anim_objectcodec_354_initialized) {
            anim_objectcodec_354_initialized = true;
            images_objectcodec_354_0_0[0] = get_internal_image(11571);
            images_objectcodec_354_0_0[1] = get_internal_image(11572);
            images_objectcodec_354_0_0[2] = get_internal_image(11573);
            images_objectcodec_354_0_0[3] = get_internal_image(11574);
            images_objectcodec_354_0_0[4] = get_internal_image(11575);
            images_objectcodec_354_0_0[5] = get_internal_image(11576);
            images_objectcodec_354_0_0[6] = get_internal_image(11577);
            images_objectcodec_354_0_0[7] = get_internal_image(11578);
            images_objectcodec_354_0_0[8] = get_internal_image(11579);
            images_objectcodec_354_0_0[9] = get_internal_image(11580);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_objectcodec_354(int x, int y)
{
    return new (Active::pool.create()) ObjectCodec_354(x, y);
}
static Image* images_breakablerockpiece_355_0_0[1];
static Direction direction_breakablerockpiece_355_0_0 = {0, 100, 100, 0, 1, images_breakablerockpiece_355_0_0, 1};
static Animation anim_breakablerockpiece_355_0 = {&direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, NULL, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0, &direction_breakablerockpiece_355_0_0};
static Animation * anim_array_breakablerockpiece_355[1] = {&anim_breakablerockpiece_355_0};
static Animations anim_breakablerockpiece_355 = {1, &anim_array_breakablerockpiece_355[0]};
static bool anim_breakablerockpiece_355_initialized;
class BreakableRockPiece_355 : public Active
{
public:
    BreakableRockPiece_355(int x, int y) : Active(x, y, BreakableRockPiece_355_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRock_piece", 19);
#endif
        this->animations = &anim_breakablerockpiece_355;
        if (!anim_breakablerockpiece_355_initialized) {
            anim_breakablerockpiece_355_initialized = true;
            images_breakablerockpiece_355_0_0[0] = get_internal_image(2527);
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
FrameObject * create_breakablerockpiece_355(int x, int y)
{
    return new (Active::pool.create()) BreakableRockPiece_355(x, y);
}
static Image* images_effectshade_356_0_0[3];
static Direction direction_effectshade_356_0_0 = {0, 50, 50, 0, -1, images_effectshade_356_0_0, 3};
static Image* images_effectshade_356_0_8[4];
static Direction direction_effectshade_356_0_8 = {8, 14, 14, 0, -1, images_effectshade_356_0_8, 4};
static Animation anim_effectshade_356_0 = {&direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, NULL, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, &direction_effectshade_356_0_8, NULL, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0, &direction_effectshade_356_0_0};
static Animation * anim_array_effectshade_356[1] = {&anim_effectshade_356_0};
static Animations anim_effectshade_356 = {1, &anim_array_effectshade_356[0]};
static bool anim_effectshade_356_initialized;
class EffectShade_356 : public Active
{
public:
    EffectShade_356(int x, int y) : Active(x, y, EffectShade_356_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effect_Shade", 12);
#endif
        this->animations = &anim_effectshade_356;
        if (!anim_effectshade_356_initialized) {
            anim_effectshade_356_initialized = true;
            images_effectshade_356_0_0[0] = get_internal_image(218);
            images_effectshade_356_0_0[1] = get_internal_image(219);
            images_effectshade_356_0_0[2] = get_internal_image(220);
            images_effectshade_356_0_8[0] = get_internal_image(1660);
            images_effectshade_356_0_8[1] = get_internal_image(1663);
            images_effectshade_356_0_8[2] = get_internal_image(1662);
            images_effectshade_356_0_8[3] = get_internal_image(1663);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(2, 40);
    }
};
FrameObject * create_effectshade_356(int x, int y)
{
    return new (Active::pool.create()) EffectShade_356(x, y);
}
static Image* images_laddertop_357_0_0[1];
static Direction direction_laddertop_357_0_0 = {0, 50, 50, 0, 1, images_laddertop_357_0_0, 1};
static Animation anim_laddertop_357_0 = {&direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, NULL, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0, &direction_laddertop_357_0_0};
static Animation * anim_array_laddertop_357[1] = {&anim_laddertop_357_0};
static Animations anim_laddertop_357 = {1, &anim_array_laddertop_357[0]};
static bool anim_laddertop_357_initialized;
class LadderTop_357 : public Active
{
public:
    LadderTop_357(int x, int y) : Active(x, y, LadderTop_357_type)
    {
        // qualifiers: 15, 16, 22
#ifndef NDEBUG
        name = std::string("Ladder_Top", 10);
#endif
        set_visible(false);
        this->animations = &anim_laddertop_357;
        if (!anim_laddertop_357_initialized) {
            anim_laddertop_357_initialized = true;
            images_laddertop_357_0_0[0] = get_internal_image(1588);
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
FrameObject * create_laddertop_357(int x, int y)
{
    return new (Active::pool.create()) LadderTop_357(x, y);
}
static Image* images_playerstartingpoint_358_0_0[1];
static Direction direction_playerstartingpoint_358_0_0 = {0, 50, 50, 0, 1, images_playerstartingpoint_358_0_0, 1};
static Animation anim_playerstartingpoint_358_0 = {&direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, NULL, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0, &direction_playerstartingpoint_358_0_0};
static Animation * anim_array_playerstartingpoint_358[1] = {&anim_playerstartingpoint_358_0};
static Animations anim_playerstartingpoint_358 = {1, &anim_array_playerstartingpoint_358[0]};
static bool anim_playerstartingpoint_358_initialized;
class PlayerStartingPoint_358 : public Active
{
public:
    PlayerStartingPoint_358(int x, int y) : Active(x, y, PlayerStartingPoint_358_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_StartingPoint", 20);
#endif
        this->animations = &anim_playerstartingpoint_358;
        if (!anim_playerstartingpoint_358_initialized) {
            anim_playerstartingpoint_358_initialized = true;
            images_playerstartingpoint_358_0_0[0] = get_internal_image(628);
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
FrameObject * create_playerstartingpoint_358(int x, int y)
{
    return new (Active::pool.create()) PlayerStartingPoint_358(x, y);
}
static Image* images_shieldinstashield_359_4_0[6];
static Direction direction_shieldinstashield_359_4_0 = {0, 100, 100, 0, 1, images_shieldinstashield_359_4_0, 6};
static Image* images_shieldinstashield_359_4_1[5];
static Direction direction_shieldinstashield_359_4_1 = {1, 20, 20, 0, 1, images_shieldinstashield_359_4_1, 5};
static Image* images_shieldinstashield_359_4_2[6];
static Direction direction_shieldinstashield_359_4_2 = {2, 100, 100, 0, 1, images_shieldinstashield_359_4_2, 6};
static Image* images_shieldinstashield_359_4_3[5];
static Direction direction_shieldinstashield_359_4_3 = {3, 20, 20, 0, 1, images_shieldinstashield_359_4_3, 5};
static Image* images_shieldinstashield_359_4_4[5];
static Direction direction_shieldinstashield_359_4_4 = {4, 20, 20, 0, 1, images_shieldinstashield_359_4_4, 5};
static Image* images_shieldinstashield_359_4_7[5];
static Direction direction_shieldinstashield_359_4_7 = {7, 100, 100, 0, 1, images_shieldinstashield_359_4_7, 5};
static Image* images_shieldinstashield_359_4_8[6];
static Direction direction_shieldinstashield_359_4_8 = {8, 100, 100, 0, 1, images_shieldinstashield_359_4_8, 6};
static Image* images_shieldinstashield_359_4_9[5];
static Direction direction_shieldinstashield_359_4_9 = {9, 100, 100, 0, 1, images_shieldinstashield_359_4_9, 5};
static Image* images_shieldinstashield_359_4_14[12];
static Direction direction_shieldinstashield_359_4_14 = {14, 100, 100, 0, 1, images_shieldinstashield_359_4_14, 12};
static Image* images_shieldinstashield_359_4_15[4];
static Direction direction_shieldinstashield_359_4_15 = {15, 100, 100, 0, 1, images_shieldinstashield_359_4_15, 4};
static Image* images_shieldinstashield_359_4_16[6];
static Direction direction_shieldinstashield_359_4_16 = {16, 100, 100, 0, 1, images_shieldinstashield_359_4_16, 6};
static Image* images_shieldinstashield_359_4_17[5];
static Direction direction_shieldinstashield_359_4_17 = {17, 20, 20, 0, 1, images_shieldinstashield_359_4_17, 5};
static Image* images_shieldinstashield_359_4_18[6];
static Direction direction_shieldinstashield_359_4_18 = {18, 100, 100, 0, 1, images_shieldinstashield_359_4_18, 6};
static Image* images_shieldinstashield_359_4_19[5];
static Direction direction_shieldinstashield_359_4_19 = {19, 20, 20, 0, 1, images_shieldinstashield_359_4_19, 5};
static Image* images_shieldinstashield_359_4_20[5];
static Direction direction_shieldinstashield_359_4_20 = {20, 20, 20, 0, 1, images_shieldinstashield_359_4_20, 5};
static Image* images_shieldinstashield_359_4_23[6];
static Direction direction_shieldinstashield_359_4_23 = {23, 50, 50, 0, 1, images_shieldinstashield_359_4_23, 6};
static Image* images_shieldinstashield_359_4_24[8];
static Direction direction_shieldinstashield_359_4_24 = {24, 100, 100, 0, 1, images_shieldinstashield_359_4_24, 8};
static Image* images_shieldinstashield_359_4_30[12];
static Direction direction_shieldinstashield_359_4_30 = {30, 100, 100, 0, 1, images_shieldinstashield_359_4_30, 12};
static Image* images_shieldinstashield_359_4_31[4];
static Direction direction_shieldinstashield_359_4_31 = {31, 100, 100, 0, 1, images_shieldinstashield_359_4_31, 4};
static Animation anim_shieldinstashield_359_4 = {&direction_shieldinstashield_359_4_0, &direction_shieldinstashield_359_4_1, &direction_shieldinstashield_359_4_2, &direction_shieldinstashield_359_4_3, &direction_shieldinstashield_359_4_4, &direction_shieldinstashield_359_4_4, &direction_shieldinstashield_359_4_7, &direction_shieldinstashield_359_4_7, &direction_shieldinstashield_359_4_8, &direction_shieldinstashield_359_4_9, &direction_shieldinstashield_359_4_9, &direction_shieldinstashield_359_4_9, &direction_shieldinstashield_359_4_14, &direction_shieldinstashield_359_4_14, &direction_shieldinstashield_359_4_14, &direction_shieldinstashield_359_4_15, &direction_shieldinstashield_359_4_16, &direction_shieldinstashield_359_4_17, &direction_shieldinstashield_359_4_18, &direction_shieldinstashield_359_4_19, &direction_shieldinstashield_359_4_20, &direction_shieldinstashield_359_4_20, &direction_shieldinstashield_359_4_23, &direction_shieldinstashield_359_4_23, &direction_shieldinstashield_359_4_24, &direction_shieldinstashield_359_4_24, &direction_shieldinstashield_359_4_24, NULL, &direction_shieldinstashield_359_4_30, &direction_shieldinstashield_359_4_30, &direction_shieldinstashield_359_4_30, &direction_shieldinstashield_359_4_31};
static Animation * anim_array_shieldinstashield_359[5] = {NULL, NULL, NULL, NULL, &anim_shieldinstashield_359_4};
static Animations anim_shieldinstashield_359 = {5, &anim_array_shieldinstashield_359[0]};
static bool anim_shieldinstashield_359_initialized;
class ShieldInstaShield_359 : public Active
{
public:
    ShieldInstaShield_359(int x, int y) : Active(x, y, ShieldInstaShield_359_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shield_InstaShield", 18);
#endif
        this->animations = &anim_shieldinstashield_359;
        if (!anim_shieldinstashield_359_initialized) {
            anim_shieldinstashield_359_initialized = true;
            images_shieldinstashield_359_4_0[0] = get_internal_image(792);
            images_shieldinstashield_359_4_0[1] = get_internal_image(789);
            images_shieldinstashield_359_4_0[2] = get_internal_image(793);
            images_shieldinstashield_359_4_0[3] = get_internal_image(794);
            images_shieldinstashield_359_4_0[4] = get_internal_image(795);
            images_shieldinstashield_359_4_0[5] = get_internal_image(796);
            images_shieldinstashield_359_4_1[0] = get_internal_image(11530);
            images_shieldinstashield_359_4_1[1] = get_internal_image(11529);
            images_shieldinstashield_359_4_1[2] = get_internal_image(11531);
            images_shieldinstashield_359_4_1[3] = get_internal_image(11533);
            images_shieldinstashield_359_4_1[4] = get_internal_image(11534);
            images_shieldinstashield_359_4_2[0] = get_internal_image(11543);
            images_shieldinstashield_359_4_2[1] = get_internal_image(11544);
            images_shieldinstashield_359_4_2[2] = get_internal_image(11545);
            images_shieldinstashield_359_4_2[3] = get_internal_image(11540);
            images_shieldinstashield_359_4_2[4] = get_internal_image(11541);
            images_shieldinstashield_359_4_2[5] = get_internal_image(11542);
            images_shieldinstashield_359_4_3[0] = get_internal_image(11555);
            images_shieldinstashield_359_4_3[1] = get_internal_image(11553);
            images_shieldinstashield_359_4_3[2] = get_internal_image(11554);
            images_shieldinstashield_359_4_3[3] = get_internal_image(11556);
            images_shieldinstashield_359_4_3[4] = get_internal_image(11552);
            images_shieldinstashield_359_4_4[0] = get_internal_image(11564);
            images_shieldinstashield_359_4_4[1] = get_internal_image(11561);
            images_shieldinstashield_359_4_4[2] = get_internal_image(11566);
            images_shieldinstashield_359_4_4[3] = get_internal_image(11562);
            images_shieldinstashield_359_4_4[4] = get_internal_image(11563);
            images_shieldinstashield_359_4_7[0] = get_internal_image(2400);
            images_shieldinstashield_359_4_7[1] = get_internal_image(2564);
            images_shieldinstashield_359_4_7[2] = get_internal_image(5693);
            images_shieldinstashield_359_4_7[3] = get_internal_image(5922);
            images_shieldinstashield_359_4_7[4] = get_internal_image(6751);
            images_shieldinstashield_359_4_8[0] = get_internal_image(11448);
            images_shieldinstashield_359_4_8[1] = get_internal_image(11449);
            images_shieldinstashield_359_4_8[2] = get_internal_image(11450);
            images_shieldinstashield_359_4_8[3] = get_internal_image(11451);
            images_shieldinstashield_359_4_8[4] = get_internal_image(11452);
            images_shieldinstashield_359_4_8[5] = get_internal_image(11453);
            images_shieldinstashield_359_4_9[0] = get_internal_image(6752);
            images_shieldinstashield_359_4_9[1] = get_internal_image(7319);
            images_shieldinstashield_359_4_9[2] = get_internal_image(7322);
            images_shieldinstashield_359_4_9[3] = get_internal_image(8562);
            images_shieldinstashield_359_4_9[4] = get_internal_image(10954);
            images_shieldinstashield_359_4_14[0] = get_internal_image(6067);
            images_shieldinstashield_359_4_14[1] = get_internal_image(6009);
            images_shieldinstashield_359_4_14[2] = get_internal_image(6068);
            images_shieldinstashield_359_4_14[3] = get_internal_image(6015);
            images_shieldinstashield_359_4_14[4] = get_internal_image(6069);
            images_shieldinstashield_359_4_14[5] = get_internal_image(6070);
            images_shieldinstashield_359_4_14[6] = get_internal_image(6016);
            images_shieldinstashield_359_4_14[7] = get_internal_image(6071);
            images_shieldinstashield_359_4_14[8] = get_internal_image(6018);
            images_shieldinstashield_359_4_14[9] = get_internal_image(6072);
            images_shieldinstashield_359_4_14[10] = get_internal_image(6019);
            images_shieldinstashield_359_4_14[11] = get_internal_image(6073);
            images_shieldinstashield_359_4_15[0] = get_internal_image(4255);
            images_shieldinstashield_359_4_15[1] = get_internal_image(4256);
            images_shieldinstashield_359_4_15[2] = get_internal_image(4257);
            images_shieldinstashield_359_4_15[3] = get_internal_image(4258);
            images_shieldinstashield_359_4_16[0] = get_internal_image(797);
            images_shieldinstashield_359_4_16[1] = get_internal_image(798);
            images_shieldinstashield_359_4_16[2] = get_internal_image(799);
            images_shieldinstashield_359_4_16[3] = get_internal_image(800);
            images_shieldinstashield_359_4_16[4] = get_internal_image(801);
            images_shieldinstashield_359_4_16[5] = get_internal_image(802);
            images_shieldinstashield_359_4_17[0] = get_internal_image(11532);
            images_shieldinstashield_359_4_17[1] = get_internal_image(11535);
            images_shieldinstashield_359_4_17[2] = get_internal_image(11536);
            images_shieldinstashield_359_4_17[3] = get_internal_image(11537);
            images_shieldinstashield_359_4_17[4] = get_internal_image(11538);
            images_shieldinstashield_359_4_18[0] = get_internal_image(11539);
            images_shieldinstashield_359_4_18[1] = get_internal_image(11546);
            images_shieldinstashield_359_4_18[2] = get_internal_image(11547);
            images_shieldinstashield_359_4_18[3] = get_internal_image(11548);
            images_shieldinstashield_359_4_18[4] = get_internal_image(11549);
            images_shieldinstashield_359_4_18[5] = get_internal_image(11550);
            images_shieldinstashield_359_4_19[0] = get_internal_image(11551);
            images_shieldinstashield_359_4_19[1] = get_internal_image(11557);
            images_shieldinstashield_359_4_19[2] = get_internal_image(11558);
            images_shieldinstashield_359_4_19[3] = get_internal_image(11559);
            images_shieldinstashield_359_4_19[4] = get_internal_image(11560);
            images_shieldinstashield_359_4_20[0] = get_internal_image(11565);
            images_shieldinstashield_359_4_20[1] = get_internal_image(11567);
            images_shieldinstashield_359_4_20[2] = get_internal_image(11568);
            images_shieldinstashield_359_4_20[3] = get_internal_image(11569);
            images_shieldinstashield_359_4_20[4] = get_internal_image(11570);
            images_shieldinstashield_359_4_23[0] = get_internal_image(5041);
            images_shieldinstashield_359_4_23[1] = get_internal_image(3504);
            images_shieldinstashield_359_4_23[2] = get_internal_image(5575);
            images_shieldinstashield_359_4_23[3] = get_internal_image(5576);
            images_shieldinstashield_359_4_23[4] = get_internal_image(5577);
            images_shieldinstashield_359_4_23[5] = get_internal_image(5578);
            images_shieldinstashield_359_4_24[0] = get_internal_image(15731);
            images_shieldinstashield_359_4_24[1] = get_internal_image(15733);
            images_shieldinstashield_359_4_24[2] = get_internal_image(15734);
            images_shieldinstashield_359_4_24[3] = get_internal_image(15735);
            images_shieldinstashield_359_4_24[4] = get_internal_image(15725);
            images_shieldinstashield_359_4_24[5] = get_internal_image(15728);
            images_shieldinstashield_359_4_24[6] = get_internal_image(15729);
            images_shieldinstashield_359_4_24[7] = get_internal_image(15730);
            images_shieldinstashield_359_4_30[0] = get_internal_image(6066);
            images_shieldinstashield_359_4_30[1] = get_internal_image(6007);
            images_shieldinstashield_359_4_30[2] = get_internal_image(6060);
            images_shieldinstashield_359_4_30[3] = get_internal_image(6005);
            images_shieldinstashield_359_4_30[4] = get_internal_image(6061);
            images_shieldinstashield_359_4_30[5] = get_internal_image(6062);
            images_shieldinstashield_359_4_30[6] = get_internal_image(6012);
            images_shieldinstashield_359_4_30[7] = get_internal_image(6063);
            images_shieldinstashield_359_4_30[8] = get_internal_image(6013);
            images_shieldinstashield_359_4_30[9] = get_internal_image(6064);
            images_shieldinstashield_359_4_30[10] = get_internal_image(6014);
            images_shieldinstashield_359_4_30[11] = get_internal_image(6065);
            images_shieldinstashield_359_4_31[0] = get_internal_image(4250);
            images_shieldinstashield_359_4_31[1] = get_internal_image(4251);
            images_shieldinstashield_359_4_31[2] = get_internal_image(4252);
            images_shieldinstashield_359_4_31[3] = get_internal_image(4253);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_31_shield_instashield.value;
        if (!global_data_31_shield_instashield.init) {
            global_data_31_shield_instashield.init = true;
        }
    }
};
FrameObject * create_shieldinstashield_359(int x, int y)
{
    return new (Active::pool.create()) ShieldInstaShield_359(x, y);
}
class GUITimerMilli_360 : public Counter
{
public:
    GUITimerMilli_360(int x, int y) : Counter(x, y, GUITimerMilli_360_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_Milli", 15);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(5177);
            counter_images[11] = get_internal_image(5178);
            counter_images[12] = get_internal_image(5179);
            counter_images[13] = get_internal_image(4915);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        if (global_data_33_gui_timer_milli.init)
            set(global_data_33_gui_timer_milli.value);
        else
            set(0);
    }
    ~GUITimerMilli_360()
    {
        global_data_33_gui_timer_milli.init = true;
        global_data_33_gui_timer_milli.value = value;
    }
    void dealloc()
    {
        this->GUITimerMilli_360::~GUITimerMilli_360();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimermilli_360(int x, int y)
{
    return new (Counter::pool.create()) GUITimerMilli_360(x, y);
}
class GUITimerMilli2_361 : public Counter
{
public:
    GUITimerMilli2_361(int x, int y) : Counter(x, y, GUITimerMilli2_361_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_Milli2", 16);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(400);
            counter_images[11] = get_internal_image(406);
            counter_images[12] = get_internal_image(401);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        if (global_data_35_gui_timer_milli2.init)
            set(global_data_35_gui_timer_milli2.value);
        else
            set(0);
    }
    ~GUITimerMilli2_361()
    {
        global_data_35_gui_timer_milli2.init = true;
        global_data_35_gui_timer_milli2.value = value;
    }
    void dealloc()
    {
        this->GUITimerMilli2_361::~GUITimerMilli2_361();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimermilli2_361(int x, int y)
{
    return new (Counter::pool.create()) GUITimerMilli2_361(x, y);
}
class GUITimerS_362 : public Counter
{
public:
    GUITimerS_362(int x, int y) : Counter(x, y, GUITimerS_362_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_S", 11);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(400);
            counter_images[11] = get_internal_image(406);
            counter_images[12] = get_internal_image(401);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        if (global_data_37_gui_timer_s.init)
            set(global_data_37_gui_timer_s.value);
        else
            set(0);
    }
    ~GUITimerS_362()
    {
        global_data_37_gui_timer_s.init = true;
        global_data_37_gui_timer_s.value = value;
    }
    void dealloc()
    {
        this->GUITimerS_362::~GUITimerS_362();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimers_362(int x, int y)
{
    return new (Counter::pool.create()) GUITimerS_362(x, y);
}
class GUITimerS2_363 : public Counter
{
public:
    GUITimerS2_363(int x, int y) : Counter(x, y, GUITimerS2_363_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_S2", 12);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(400);
            counter_images[11] = get_internal_image(406);
            counter_images[12] = get_internal_image(401);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        if (global_data_39_gui_timer_s2.init)
            set(global_data_39_gui_timer_s2.value);
        else
            set(0);
    }
    ~GUITimerS2_363()
    {
        global_data_39_gui_timer_s2.init = true;
        global_data_39_gui_timer_s2.value = value;
    }
    void dealloc()
    {
        this->GUITimerS2_363::~GUITimerS2_363();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimers2_363(int x, int y)
{
    return new (Counter::pool.create()) GUITimerS2_363(x, y);
}
class GUITimerM_364 : public Counter
{
public:
    GUITimerM_364(int x, int y) : Counter(x, y, GUITimerM_364_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_M", 11);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(400);
            counter_images[11] = get_internal_image(406);
            counter_images[12] = get_internal_image(401);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 999;
        if (global_data_41_gui_timer_m.init)
            set(global_data_41_gui_timer_m.value);
        else
            set(0);
    }
    ~GUITimerM_364()
    {
        global_data_41_gui_timer_m.init = true;
        global_data_41_gui_timer_m.value = value;
    }
    void dealloc()
    {
        this->GUITimerM_364::~GUITimerM_364();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimerm_364(int x, int y)
{
    return new (Counter::pool.create()) GUITimerM_364(x, y);
}
class GUITimerM2_365 : public Counter
{
public:
    GUITimerM2_365(int x, int y) : Counter(x, y, GUITimerM2_365_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer_M2", 12);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
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
            counter_images[10] = get_internal_image(400);
            counter_images[11] = get_internal_image(406);
            counter_images[12] = get_internal_image(401);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        if (global_data_43_gui_timer_m2.init)
            set(global_data_43_gui_timer_m2.value);
        else
            set(0);
    }
    ~GUITimerM2_365()
    {
        global_data_43_gui_timer_m2.init = true;
        global_data_43_gui_timer_m2.value = value;
    }
    void dealloc()
    {
        this->GUITimerM2_365::~GUITimerM2_365();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guitimerm2_365(int x, int y)
{
    return new (Counter::pool.create()) GUITimerM2_365(x, y);
}
static Image* images_chancecube_366_0_0[1];
static Direction direction_chancecube_366_0_0 = {0, 50, 50, 0, 1, images_chancecube_366_0_0, 1};
static Image* images_chancecube_366_0_1[1];
static Direction direction_chancecube_366_0_1 = {1, 50, 50, 0, 1, images_chancecube_366_0_1, 1};
static Image* images_chancecube_366_0_2[1];
static Direction direction_chancecube_366_0_2 = {2, 50, 50, 0, 1, images_chancecube_366_0_2, 1};
static Image* images_chancecube_366_0_3[1];
static Direction direction_chancecube_366_0_3 = {3, 50, 50, 0, 1, images_chancecube_366_0_3, 1};
static Image* images_chancecube_366_0_4[1];
static Direction direction_chancecube_366_0_4 = {4, 50, 50, 0, 1, images_chancecube_366_0_4, 1};
static Image* images_chancecube_366_0_5[1];
static Direction direction_chancecube_366_0_5 = {5, 50, 50, 0, 1, images_chancecube_366_0_5, 1};
static Image* images_chancecube_366_0_6[1];
static Direction direction_chancecube_366_0_6 = {6, 50, 50, 0, 1, images_chancecube_366_0_6, 1};
static Image* images_chancecube_366_0_7[1];
static Direction direction_chancecube_366_0_7 = {7, 50, 50, 0, 1, images_chancecube_366_0_7, 1};
static Image* images_chancecube_366_0_8[1];
static Direction direction_chancecube_366_0_8 = {8, 50, 50, 0, 1, images_chancecube_366_0_8, 1};
static Image* images_chancecube_366_0_9[1];
static Direction direction_chancecube_366_0_9 = {9, 50, 50, 0, 1, images_chancecube_366_0_9, 1};
static Animation anim_chancecube_366_0 = {&direction_chancecube_366_0_0, &direction_chancecube_366_0_1, &direction_chancecube_366_0_2, &direction_chancecube_366_0_3, &direction_chancecube_366_0_4, &direction_chancecube_366_0_5, &direction_chancecube_366_0_6, &direction_chancecube_366_0_7, &direction_chancecube_366_0_8, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_9, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0, &direction_chancecube_366_0_0};
static Image* images_chancecube_366_7_0[2];
static Direction direction_chancecube_366_7_0 = {0, 50, 50, 0, 1, images_chancecube_366_7_0, 2};
static Animation anim_chancecube_366_7 = {&direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, NULL, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0, &direction_chancecube_366_7_0};
static Animation * anim_array_chancecube_366[8] = {&anim_chancecube_366_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_chancecube_366_7};
static Animations anim_chancecube_366 = {8, &anim_array_chancecube_366[0]};
static bool anim_chancecube_366_initialized;
class ChanceCube_366 : public Active
{
public:
    ChanceCube_366(int x, int y) : Active(x, y, ChanceCube_366_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("ChanceCube", 10);
#endif
        this->animations = &anim_chancecube_366;
        if (!anim_chancecube_366_initialized) {
            anim_chancecube_366_initialized = true;
            images_chancecube_366_0_0[0] = get_internal_image(1755);
            images_chancecube_366_0_1[0] = get_internal_image(12708);
            images_chancecube_366_0_2[0] = get_internal_image(10938);
            images_chancecube_366_0_3[0] = get_internal_image(12315);
            images_chancecube_366_0_4[0] = get_internal_image(10939);
            images_chancecube_366_0_5[0] = get_internal_image(12684);
            images_chancecube_366_0_6[0] = get_internal_image(10940);
            images_chancecube_366_0_7[0] = get_internal_image(12686);
            images_chancecube_366_0_8[0] = get_internal_image(12706);
            images_chancecube_366_0_9[0] = get_internal_image(10928);
            images_chancecube_366_7_0[0] = get_internal_image(6133);
            images_chancecube_366_7_0[1] = get_internal_image(10980);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_chancecube_366(int x, int y)
{
    return new (Active::pool.create()) ChanceCube_366(x, y);
}
static Image* images_objecttarget_367_0_0[10];
static Direction direction_objecttarget_367_0_0 = {0, 14, 14, 0, -1, images_objecttarget_367_0_0, 10};
static Animation anim_objecttarget_367_0 = {&direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, NULL, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0, &direction_objecttarget_367_0_0};
static Image* images_objecttarget_367_7_0[7];
static Direction direction_objecttarget_367_7_0 = {0, 50, 50, 0, -1, images_objecttarget_367_7_0, 7};
static Animation anim_objecttarget_367_7 = {&direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, NULL, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0, &direction_objecttarget_367_7_0};
static Animation * anim_array_objecttarget_367[8] = {&anim_objecttarget_367_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objecttarget_367_7};
static Animations anim_objecttarget_367 = {8, &anim_array_objecttarget_367[0]};
static bool anim_objecttarget_367_initialized;
class ObjectTarget_367 : public Active
{
public:
    ObjectTarget_367(int x, int y) : Active(x, y, ObjectTarget_367_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Object_Target", 13);
#endif
        this->animations = &anim_objecttarget_367;
        if (!anim_objecttarget_367_initialized) {
            anim_objecttarget_367_initialized = true;
            images_objecttarget_367_0_0[0] = get_internal_image(4100);
            images_objecttarget_367_0_0[1] = get_internal_image(4427);
            images_objecttarget_367_0_0[2] = get_internal_image(4425);
            images_objecttarget_367_0_0[3] = get_internal_image(4428);
            images_objecttarget_367_0_0[4] = get_internal_image(4429);
            images_objecttarget_367_0_0[5] = get_internal_image(4426);
            images_objecttarget_367_0_0[6] = get_internal_image(4101);
            images_objecttarget_367_0_0[7] = get_internal_image(4430);
            images_objecttarget_367_0_0[8] = get_internal_image(4431);
            images_objecttarget_367_0_0[9] = get_internal_image(4432);
            images_objecttarget_367_7_0[0] = get_internal_image(4100);
            images_objecttarget_367_7_0[1] = get_internal_image(176);
            images_objecttarget_367_7_0[2] = get_internal_image(1408);
            images_objecttarget_367_7_0[3] = get_internal_image(1973);
            images_objecttarget_367_7_0[4] = get_internal_image(1408);
            images_objecttarget_367_7_0[5] = get_internal_image(951);
            images_objecttarget_367_7_0[6] = get_internal_image(4431);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_objecttarget_367(int x, int y)
{
    return new (Active::pool.create()) ObjectTarget_367(x, y);
}
static Image* images_bonusstagecrystalfront1_368_0_0[4];
static Direction direction_bonusstagecrystalfront1_368_0_0 = {0, 0, 0, 0, 1, images_bonusstagecrystalfront1_368_0_0, 4};
static Animation anim_bonusstagecrystalfront1_368_0 = {&direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, NULL, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0, &direction_bonusstagecrystalfront1_368_0_0};
static Animation * anim_array_bonusstagecrystalfront1_368[1] = {&anim_bonusstagecrystalfront1_368_0};
static Animations anim_bonusstagecrystalfront1_368 = {1, &anim_array_bonusstagecrystalfront1_368[0]};
static bool anim_bonusstagecrystalfront1_368_initialized;
class BonusStageCrystalFront1_368 : public Active
{
public:
    BonusStageCrystalFront1_368(int x, int y) : Active(x, y, BonusStageCrystalFront1_368_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BonusStage_CrystalFront 1", 25);
#endif
        this->animations = &anim_bonusstagecrystalfront1_368;
        if (!anim_bonusstagecrystalfront1_368_initialized) {
            anim_bonusstagecrystalfront1_368_initialized = true;
            images_bonusstagecrystalfront1_368_0_0[0] = get_internal_image(12704);
            images_bonusstagecrystalfront1_368_0_0[1] = get_internal_image(12712);
            images_bonusstagecrystalfront1_368_0_0[2] = get_internal_image(12713);
            images_bonusstagecrystalfront1_368_0_0[3] = get_internal_image(12714);
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
FrameObject * create_bonusstagecrystalfront1_368(int x, int y)
{
    return new (Active::pool.create()) BonusStageCrystalFront1_368(x, y);
}
static Image* images_bonusstagecrystalfront2_369_0_0[4];
static Direction direction_bonusstagecrystalfront2_369_0_0 = {0, 0, 0, 0, 1, images_bonusstagecrystalfront2_369_0_0, 4};
static Animation anim_bonusstagecrystalfront2_369_0 = {&direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, NULL, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0, &direction_bonusstagecrystalfront2_369_0_0};
static Animation * anim_array_bonusstagecrystalfront2_369[1] = {&anim_bonusstagecrystalfront2_369_0};
static Animations anim_bonusstagecrystalfront2_369 = {1, &anim_array_bonusstagecrystalfront2_369[0]};
static bool anim_bonusstagecrystalfront2_369_initialized;
class BonusStageCrystalFront2_369 : public Active
{
public:
    BonusStageCrystalFront2_369(int x, int y) : Active(x, y, BonusStageCrystalFront2_369_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BonusStage_CrystalFront 2", 25);
#endif
        this->animations = &anim_bonusstagecrystalfront2_369;
        if (!anim_bonusstagecrystalfront2_369_initialized) {
            anim_bonusstagecrystalfront2_369_initialized = true;
            images_bonusstagecrystalfront2_369_0_0[0] = get_internal_image(12717);
            images_bonusstagecrystalfront2_369_0_0[1] = get_internal_image(12722);
            images_bonusstagecrystalfront2_369_0_0[2] = get_internal_image(12723);
            images_bonusstagecrystalfront2_369_0_0[3] = get_internal_image(12724);
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
FrameObject * create_bonusstagecrystalfront2_369(int x, int y)
{
    return new (Active::pool.create()) BonusStageCrystalFront2_369(x, y);
}
static Image* images_bonusstagecrystalfront4_370_0_0[4];
static Direction direction_bonusstagecrystalfront4_370_0_0 = {0, 0, 0, 0, 1, images_bonusstagecrystalfront4_370_0_0, 4};
static Animation anim_bonusstagecrystalfront4_370_0 = {&direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, NULL, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0, &direction_bonusstagecrystalfront4_370_0_0};
static Animation * anim_array_bonusstagecrystalfront4_370[1] = {&anim_bonusstagecrystalfront4_370_0};
static Animations anim_bonusstagecrystalfront4_370 = {1, &anim_array_bonusstagecrystalfront4_370[0]};
static bool anim_bonusstagecrystalfront4_370_initialized;
class BonusStageCrystalFront4_370 : public Active
{
public:
    BonusStageCrystalFront4_370(int x, int y) : Active(x, y, BonusStageCrystalFront4_370_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BonusStage_CrystalFront 4", 25);
#endif
        this->animations = &anim_bonusstagecrystalfront4_370;
        if (!anim_bonusstagecrystalfront4_370_initialized) {
            anim_bonusstagecrystalfront4_370_initialized = true;
            images_bonusstagecrystalfront4_370_0_0[0] = get_internal_image(12726);
            images_bonusstagecrystalfront4_370_0_0[1] = get_internal_image(12727);
            images_bonusstagecrystalfront4_370_0_0[2] = get_internal_image(12728);
            images_bonusstagecrystalfront4_370_0_0[3] = get_internal_image(12729);
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
FrameObject * create_bonusstagecrystalfront4_370(int x, int y)
{
    return new (Active::pool.create()) BonusStageCrystalFront4_370(x, y);
}
static Image* images_bonusstagecrystalfront3_371_0_0[4];
static Direction direction_bonusstagecrystalfront3_371_0_0 = {0, 0, 0, 0, 1, images_bonusstagecrystalfront3_371_0_0, 4};
static Animation anim_bonusstagecrystalfront3_371_0 = {&direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, NULL, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0, &direction_bonusstagecrystalfront3_371_0_0};
static Animation * anim_array_bonusstagecrystalfront3_371[1] = {&anim_bonusstagecrystalfront3_371_0};
static Animations anim_bonusstagecrystalfront3_371 = {1, &anim_array_bonusstagecrystalfront3_371[0]};
static bool anim_bonusstagecrystalfront3_371_initialized;
class BonusStageCrystalFront3_371 : public Active
{
public:
    BonusStageCrystalFront3_371(int x, int y) : Active(x, y, BonusStageCrystalFront3_371_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BonusStage_CrystalFront 3", 25);
#endif
        this->animations = &anim_bonusstagecrystalfront3_371;
        if (!anim_bonusstagecrystalfront3_371_initialized) {
            anim_bonusstagecrystalfront3_371_initialized = true;
            images_bonusstagecrystalfront3_371_0_0[0] = get_internal_image(12709);
            images_bonusstagecrystalfront3_371_0_0[1] = get_internal_image(12720);
            images_bonusstagecrystalfront3_371_0_0[2] = get_internal_image(12721);
            images_bonusstagecrystalfront3_371_0_0[3] = get_internal_image(6710);
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
FrameObject * create_bonusstagecrystalfront3_371(int x, int y)
{
    return new (Active::pool.create()) BonusStageCrystalFront3_371(x, y);
}
class SeparatorMasterObjects_372 : public Backdrop
{
public:
    SeparatorMasterObjects_372(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_MasterObjects", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatormasterobjects_372(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorMasterObjects_372(x, y);
}
class SeparatorPlayerObjects_373 : public Backdrop
{
public:
    SeparatorPlayerObjects_373(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_PlayerObjects", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorplayerobjects_373(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorPlayerObjects_373(x, y);
}
class SeparatorLayerChange_374 : public Backdrop
{
public:
    SeparatorLayerChange_374(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_LayerChange", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(624);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorlayerchange_374(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorLayerChange_374(x, y);
}
class SeparatorSprings_375 : public Backdrop
{
public:
    SeparatorSprings_375(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Springs", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(617);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorsprings_375(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorSprings_375(x, y);
}
class SeparatorEffects_376 : public Backdrop
{
public:
    SeparatorEffects_376(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Effects", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(615);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatoreffects_376(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorEffects_376(x, y);
}
class SeparatorWater_377 : public Backdrop
{
public:
    SeparatorWater_377(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Water", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(932);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorwater_377(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorWater_377(x, y);
}
class SeparatorMonitors_378 : public Backdrop
{
public:
    SeparatorMonitors_378(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Monitors", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(620);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatormonitors_378(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorMonitors_378(x, y);
}
class SeparatorRings_379 : public Backdrop
{
public:
    SeparatorRings_379(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Rings", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(49);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorrings_379(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorRings_379(x, y);
}
class AddTimeBonus_380 : public Counter
{
public:
    AddTimeBonus_380(int x, int y) : Counter(x, y, AddTimeBonus_380_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AddTimeBonus", 12);
#endif
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = 0;
        maximum = 999999999;
        set(0);
    }
};
FrameObject * create_addtimebonus_380(int x, int y)
{
    return new (Counter::pool.create()) AddTimeBonus_380(x, y);
}
static Image* images_playerskinmillatail_381_0_0[8];
static Direction direction_playerskinmillatail_381_0_0 = {0, 10, 10, 0, -1, images_playerskinmillatail_381_0_0, 8};
static Image* images_playerskinmillatail_381_0_16[8];
static Direction direction_playerskinmillatail_381_0_16 = {16, 10, 10, 0, -1, images_playerskinmillatail_381_0_16, 8};
static Animation anim_playerskinmillatail_381_0 = {&direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, NULL, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, &direction_playerskinmillatail_381_0_16, NULL, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0, &direction_playerskinmillatail_381_0_0};
static Image* images_playerskinmillatail_381_1_0[1];
static Direction direction_playerskinmillatail_381_1_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_1_0, 1};
static Animation anim_playerskinmillatail_381_1 = {&direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, NULL, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0, &direction_playerskinmillatail_381_1_0};
static Image* images_playerskinmillatail_381_2_0[1];
static Direction direction_playerskinmillatail_381_2_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_2_0, 1};
static Animation anim_playerskinmillatail_381_2 = {&direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, NULL, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0, &direction_playerskinmillatail_381_2_0};
static Image* images_playerskinmillatail_381_7_0[1];
static Direction direction_playerskinmillatail_381_7_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_7_0, 1};
static Animation anim_playerskinmillatail_381_7 = {&direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, NULL, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0, &direction_playerskinmillatail_381_7_0};
static Image* images_playerskinmillatail_381_8_0[1];
static Direction direction_playerskinmillatail_381_8_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_8_0, 1};
static Animation anim_playerskinmillatail_381_8 = {&direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, NULL, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0, &direction_playerskinmillatail_381_8_0};
static Image* images_playerskinmillatail_381_9_0[1];
static Direction direction_playerskinmillatail_381_9_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_9_0, 1};
static Animation anim_playerskinmillatail_381_9 = {&direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, NULL, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0, &direction_playerskinmillatail_381_9_0};
static Image* images_playerskinmillatail_381_10_0[1];
static Direction direction_playerskinmillatail_381_10_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_10_0, 1};
static Animation anim_playerskinmillatail_381_10 = {&direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, NULL, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0, &direction_playerskinmillatail_381_10_0};
static Image* images_playerskinmillatail_381_11_0[8];
static Direction direction_playerskinmillatail_381_11_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_11_0, 8};
static Image* images_playerskinmillatail_381_11_16[8];
static Direction direction_playerskinmillatail_381_11_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_11_16, 8};
static Animation anim_playerskinmillatail_381_11 = {&direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, NULL, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, &direction_playerskinmillatail_381_11_16, NULL, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0, &direction_playerskinmillatail_381_11_0};
static Image* images_playerskinmillatail_381_12_0[8];
static Direction direction_playerskinmillatail_381_12_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_12_0, 8};
static Image* images_playerskinmillatail_381_12_16[8];
static Direction direction_playerskinmillatail_381_12_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_12_16, 8};
static Animation anim_playerskinmillatail_381_12 = {&direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, NULL, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, &direction_playerskinmillatail_381_12_16, NULL, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0, &direction_playerskinmillatail_381_12_0};
static Image* images_playerskinmillatail_381_14_0[1];
static Direction direction_playerskinmillatail_381_14_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_14_0, 1};
static Animation anim_playerskinmillatail_381_14 = {&direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, NULL, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0, &direction_playerskinmillatail_381_14_0};
static Image* images_playerskinmillatail_381_15_0[8];
static Direction direction_playerskinmillatail_381_15_0 = {0, 15, 15, 0, -1, images_playerskinmillatail_381_15_0, 8};
static Image* images_playerskinmillatail_381_15_16[8];
static Direction direction_playerskinmillatail_381_15_16 = {16, 15, 15, 0, -1, images_playerskinmillatail_381_15_16, 8};
static Animation anim_playerskinmillatail_381_15 = {&direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, NULL, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, &direction_playerskinmillatail_381_15_16, NULL, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0, &direction_playerskinmillatail_381_15_0};
static Image* images_playerskinmillatail_381_16_0[1];
static Direction direction_playerskinmillatail_381_16_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_16_0, 1};
static Animation anim_playerskinmillatail_381_16 = {&direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, NULL, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0, &direction_playerskinmillatail_381_16_0};
static Image* images_playerskinmillatail_381_17_0[8];
static Direction direction_playerskinmillatail_381_17_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_17_0, 8};
static Image* images_playerskinmillatail_381_17_16[8];
static Direction direction_playerskinmillatail_381_17_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_17_16, 8};
static Animation anim_playerskinmillatail_381_17 = {&direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, NULL, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, &direction_playerskinmillatail_381_17_16, NULL, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0, &direction_playerskinmillatail_381_17_0};
static Image* images_playerskinmillatail_381_18_0[1];
static Direction direction_playerskinmillatail_381_18_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_18_0, 1};
static Animation anim_playerskinmillatail_381_18 = {&direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, NULL, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0, &direction_playerskinmillatail_381_18_0};
static Image* images_playerskinmillatail_381_23_0[1];
static Direction direction_playerskinmillatail_381_23_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_23_0, 1};
static Animation anim_playerskinmillatail_381_23 = {&direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, NULL, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0, &direction_playerskinmillatail_381_23_0};
static Image* images_playerskinmillatail_381_24_0[1];
static Direction direction_playerskinmillatail_381_24_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_24_0, 1};
static Animation anim_playerskinmillatail_381_24 = {&direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, NULL, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0, &direction_playerskinmillatail_381_24_0};
static Image* images_playerskinmillatail_381_25_0[8];
static Direction direction_playerskinmillatail_381_25_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_25_0, 8};
static Image* images_playerskinmillatail_381_25_16[8];
static Direction direction_playerskinmillatail_381_25_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_25_16, 8};
static Animation anim_playerskinmillatail_381_25 = {&direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, NULL, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, &direction_playerskinmillatail_381_25_16, NULL, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0, &direction_playerskinmillatail_381_25_0};
static Image* images_playerskinmillatail_381_26_0[1];
static Direction direction_playerskinmillatail_381_26_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_26_0, 1};
static Animation anim_playerskinmillatail_381_26 = {&direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, NULL, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0, &direction_playerskinmillatail_381_26_0};
static Image* images_playerskinmillatail_381_27_0[1];
static Direction direction_playerskinmillatail_381_27_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_27_0, 1};
static Animation anim_playerskinmillatail_381_27 = {&direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, NULL, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0, &direction_playerskinmillatail_381_27_0};
static Image* images_playerskinmillatail_381_31_0[6];
static Direction direction_playerskinmillatail_381_31_0 = {0, 30, 30, 0, -1, images_playerskinmillatail_381_31_0, 6};
static Image* images_playerskinmillatail_381_31_16[6];
static Direction direction_playerskinmillatail_381_31_16 = {16, 30, 30, 0, -1, images_playerskinmillatail_381_31_16, 6};
static Animation anim_playerskinmillatail_381_31 = {&direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, NULL, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, &direction_playerskinmillatail_381_31_16, NULL, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0, &direction_playerskinmillatail_381_31_0};
static Image* images_playerskinmillatail_381_32_0[6];
static Direction direction_playerskinmillatail_381_32_0 = {0, 30, 30, 0, -1, images_playerskinmillatail_381_32_0, 6};
static Image* images_playerskinmillatail_381_32_16[6];
static Direction direction_playerskinmillatail_381_32_16 = {16, 30, 30, 0, -1, images_playerskinmillatail_381_32_16, 6};
static Animation anim_playerskinmillatail_381_32 = {&direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, NULL, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, &direction_playerskinmillatail_381_32_16, NULL, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0, &direction_playerskinmillatail_381_32_0};
static Image* images_playerskinmillatail_381_35_0[1];
static Direction direction_playerskinmillatail_381_35_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_35_0, 1};
static Animation anim_playerskinmillatail_381_35 = {&direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, NULL, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0, &direction_playerskinmillatail_381_35_0};
static Image* images_playerskinmillatail_381_36_0[1];
static Direction direction_playerskinmillatail_381_36_0 = {0, 50, 50, 0, 1, images_playerskinmillatail_381_36_0, 1};
static Animation anim_playerskinmillatail_381_36 = {&direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, NULL, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0, &direction_playerskinmillatail_381_36_0};
static Image* images_playerskinmillatail_381_37_0[15];
static Direction direction_playerskinmillatail_381_37_0 = {0, 20, 20, 7, -1, images_playerskinmillatail_381_37_0, 15};
static Image* images_playerskinmillatail_381_37_1[8];
static Direction direction_playerskinmillatail_381_37_1 = {1, 15, 15, 0, -1, images_playerskinmillatail_381_37_1, 8};
static Image* images_playerskinmillatail_381_37_16[15];
static Direction direction_playerskinmillatail_381_37_16 = {16, 20, 20, 7, -1, images_playerskinmillatail_381_37_16, 15};
static Image* images_playerskinmillatail_381_37_17[8];
static Direction direction_playerskinmillatail_381_37_17 = {17, 15, 15, 0, -1, images_playerskinmillatail_381_37_17, 8};
static Animation anim_playerskinmillatail_381_37 = {&direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_1, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_16, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_17, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0, &direction_playerskinmillatail_381_37_0};
static Image* images_playerskinmillatail_381_38_0[1];
static Direction direction_playerskinmillatail_381_38_0 = {0, 50, 50, 0, -1, images_playerskinmillatail_381_38_0, 1};
static Animation anim_playerskinmillatail_381_38 = {&direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, NULL, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0, &direction_playerskinmillatail_381_38_0};
static Image* images_playerskinmillatail_381_40_0[8];
static Direction direction_playerskinmillatail_381_40_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_40_0, 8};
static Image* images_playerskinmillatail_381_40_1[1];
static Direction direction_playerskinmillatail_381_40_1 = {1, 50, 50, 0, 1, images_playerskinmillatail_381_40_1, 1};
static Image* images_playerskinmillatail_381_40_4[1];
static Direction direction_playerskinmillatail_381_40_4 = {4, 50, 50, 0, -1, images_playerskinmillatail_381_40_4, 1};
static Image* images_playerskinmillatail_381_40_7[1];
static Direction direction_playerskinmillatail_381_40_7 = {7, 50, 50, 0, 1, images_playerskinmillatail_381_40_7, 1};
static Image* images_playerskinmillatail_381_40_10[1];
static Direction direction_playerskinmillatail_381_40_10 = {10, 50, 50, 0, -1, images_playerskinmillatail_381_40_10, 1};
static Image* images_playerskinmillatail_381_40_14[8];
static Direction direction_playerskinmillatail_381_40_14 = {14, 20, 20, 0, -1, images_playerskinmillatail_381_40_14, 8};
static Image* images_playerskinmillatail_381_40_16[8];
static Direction direction_playerskinmillatail_381_40_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_40_16, 8};
static Image* images_playerskinmillatail_381_40_20[1];
static Direction direction_playerskinmillatail_381_40_20 = {20, 50, 50, 0, -1, images_playerskinmillatail_381_40_20, 1};
static Image* images_playerskinmillatail_381_40_26[1];
static Direction direction_playerskinmillatail_381_40_26 = {26, 50, 50, 0, -1, images_playerskinmillatail_381_40_26, 1};
static Image* images_playerskinmillatail_381_40_30[8];
static Direction direction_playerskinmillatail_381_40_30 = {30, 20, 20, 0, -1, images_playerskinmillatail_381_40_30, 8};
static Animation anim_playerskinmillatail_381_40 = {&direction_playerskinmillatail_381_40_0, &direction_playerskinmillatail_381_40_1, &direction_playerskinmillatail_381_40_1, &direction_playerskinmillatail_381_40_4, &direction_playerskinmillatail_381_40_4, &direction_playerskinmillatail_381_40_4, &direction_playerskinmillatail_381_40_7, &direction_playerskinmillatail_381_40_7, &direction_playerskinmillatail_381_40_7, &direction_playerskinmillatail_381_40_10, &direction_playerskinmillatail_381_40_10, &direction_playerskinmillatail_381_40_10, NULL, &direction_playerskinmillatail_381_40_14, &direction_playerskinmillatail_381_40_14, NULL, &direction_playerskinmillatail_381_40_16, &direction_playerskinmillatail_381_40_16, NULL, &direction_playerskinmillatail_381_40_20, &direction_playerskinmillatail_381_40_20, &direction_playerskinmillatail_381_40_20, &direction_playerskinmillatail_381_40_20, NULL, &direction_playerskinmillatail_381_40_26, &direction_playerskinmillatail_381_40_26, &direction_playerskinmillatail_381_40_26, &direction_playerskinmillatail_381_40_26, NULL, &direction_playerskinmillatail_381_40_30, &direction_playerskinmillatail_381_40_30, NULL};
static Image* images_playerskinmillatail_381_41_0[8];
static Direction direction_playerskinmillatail_381_41_0 = {0, 20, 20, 0, -1, images_playerskinmillatail_381_41_0, 8};
static Image* images_playerskinmillatail_381_41_7[8];
static Direction direction_playerskinmillatail_381_41_7 = {7, 20, 20, 0, -1, images_playerskinmillatail_381_41_7, 8};
static Image* images_playerskinmillatail_381_41_13[8];
static Direction direction_playerskinmillatail_381_41_13 = {13, 20, 20, 0, -1, images_playerskinmillatail_381_41_13, 8};
static Image* images_playerskinmillatail_381_41_14[1];
static Direction direction_playerskinmillatail_381_41_14 = {14, 50, 50, 0, 1, images_playerskinmillatail_381_41_14, 1};
static Image* images_playerskinmillatail_381_41_15[1];
static Direction direction_playerskinmillatail_381_41_15 = {15, 50, 50, 0, 1, images_playerskinmillatail_381_41_15, 1};
static Image* images_playerskinmillatail_381_41_16[8];
static Direction direction_playerskinmillatail_381_41_16 = {16, 20, 20, 0, -1, images_playerskinmillatail_381_41_16, 8};
static Image* images_playerskinmillatail_381_41_24[1];
static Direction direction_playerskinmillatail_381_41_24 = {24, 0, 0, 0, -1, images_playerskinmillatail_381_41_24, 1};
static Image* images_playerskinmillatail_381_41_29[8];
static Direction direction_playerskinmillatail_381_41_29 = {29, 20, 20, 0, -1, images_playerskinmillatail_381_41_29, 8};
static Image* images_playerskinmillatail_381_41_30[1];
static Direction direction_playerskinmillatail_381_41_30 = {30, 50, 50, 0, 1, images_playerskinmillatail_381_41_30, 1};
static Image* images_playerskinmillatail_381_41_31[1];
static Direction direction_playerskinmillatail_381_41_31 = {31, 50, 50, 0, 1, images_playerskinmillatail_381_41_31, 1};
static Animation anim_playerskinmillatail_381_41 = {&direction_playerskinmillatail_381_41_0, &direction_playerskinmillatail_381_41_0, &direction_playerskinmillatail_381_41_0, &direction_playerskinmillatail_381_41_0, &direction_playerskinmillatail_381_41_7, &direction_playerskinmillatail_381_41_7, &direction_playerskinmillatail_381_41_7, &direction_playerskinmillatail_381_41_7, &direction_playerskinmillatail_381_41_7, &direction_playerskinmillatail_381_41_7, NULL, &direction_playerskinmillatail_381_41_13, &direction_playerskinmillatail_381_41_13, &direction_playerskinmillatail_381_41_13, &direction_playerskinmillatail_381_41_14, &direction_playerskinmillatail_381_41_15, &direction_playerskinmillatail_381_41_16, &direction_playerskinmillatail_381_41_16, &direction_playerskinmillatail_381_41_16, &direction_playerskinmillatail_381_41_16, NULL, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_24, &direction_playerskinmillatail_381_41_29, &direction_playerskinmillatail_381_41_29, &direction_playerskinmillatail_381_41_29, &direction_playerskinmillatail_381_41_30, &direction_playerskinmillatail_381_41_31};
static Animation * anim_array_playerskinmillatail_381[42] = {&anim_playerskinmillatail_381_0, &anim_playerskinmillatail_381_1, &anim_playerskinmillatail_381_2, NULL, NULL, NULL, NULL, &anim_playerskinmillatail_381_7, &anim_playerskinmillatail_381_8, &anim_playerskinmillatail_381_9, &anim_playerskinmillatail_381_10, &anim_playerskinmillatail_381_11, &anim_playerskinmillatail_381_12, NULL, &anim_playerskinmillatail_381_14, &anim_playerskinmillatail_381_15, &anim_playerskinmillatail_381_16, &anim_playerskinmillatail_381_17, &anim_playerskinmillatail_381_18, NULL, NULL, NULL, NULL, &anim_playerskinmillatail_381_23, &anim_playerskinmillatail_381_24, &anim_playerskinmillatail_381_25, &anim_playerskinmillatail_381_26, &anim_playerskinmillatail_381_27, NULL, NULL, NULL, &anim_playerskinmillatail_381_31, &anim_playerskinmillatail_381_32, NULL, NULL, &anim_playerskinmillatail_381_35, &anim_playerskinmillatail_381_36, &anim_playerskinmillatail_381_37, &anim_playerskinmillatail_381_38, NULL, &anim_playerskinmillatail_381_40, &anim_playerskinmillatail_381_41};
static Animations anim_playerskinmillatail_381 = {42, &anim_array_playerskinmillatail_381[0]};
static bool anim_playerskinmillatail_381_initialized;
class PlayerSkinMillaTail_381 : public Active
{
public:
    PlayerSkinMillaTail_381(int x, int y) : Active(x, y, PlayerSkinMillaTail_381_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("PlayerSkin_MillaTail", 20);
#endif
        set_visible(false);
        this->animations = &anim_playerskinmillatail_381;
        if (!anim_playerskinmillatail_381_initialized) {
            anim_playerskinmillatail_381_initialized = true;
            images_playerskinmillatail_381_0_0[0] = get_internal_image(1968);
            images_playerskinmillatail_381_0_0[1] = get_internal_image(409);
            images_playerskinmillatail_381_0_0[2] = get_internal_image(538);
            images_playerskinmillatail_381_0_0[3] = get_internal_image(888);
            images_playerskinmillatail_381_0_0[4] = get_internal_image(1986);
            images_playerskinmillatail_381_0_0[5] = get_internal_image(3421);
            images_playerskinmillatail_381_0_0[6] = get_internal_image(2083);
            images_playerskinmillatail_381_0_0[7] = get_internal_image(3338);
            images_playerskinmillatail_381_0_16[0] = get_internal_image(1412);
            images_playerskinmillatail_381_0_16[1] = get_internal_image(4057);
            images_playerskinmillatail_381_0_16[2] = get_internal_image(5928);
            images_playerskinmillatail_381_0_16[3] = get_internal_image(6338);
            images_playerskinmillatail_381_0_16[4] = get_internal_image(6653);
            images_playerskinmillatail_381_0_16[5] = get_internal_image(6777);
            images_playerskinmillatail_381_0_16[6] = get_internal_image(6811);
            images_playerskinmillatail_381_0_16[7] = get_internal_image(6836);
            images_playerskinmillatail_381_1_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_2_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_7_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_8_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_9_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_10_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_11_0[0] = get_internal_image(11644);
            images_playerskinmillatail_381_11_0[1] = get_internal_image(11816);
            images_playerskinmillatail_381_11_0[2] = get_internal_image(11818);
            images_playerskinmillatail_381_11_0[3] = get_internal_image(11940);
            images_playerskinmillatail_381_11_0[4] = get_internal_image(11941);
            images_playerskinmillatail_381_11_0[5] = get_internal_image(12826);
            images_playerskinmillatail_381_11_0[6] = get_internal_image(14331);
            images_playerskinmillatail_381_11_0[7] = get_internal_image(14501);
            images_playerskinmillatail_381_11_16[0] = get_internal_image(15870);
            images_playerskinmillatail_381_11_16[1] = get_internal_image(15903);
            images_playerskinmillatail_381_11_16[2] = get_internal_image(15904);
            images_playerskinmillatail_381_11_16[3] = get_internal_image(16045);
            images_playerskinmillatail_381_11_16[4] = get_internal_image(16046);
            images_playerskinmillatail_381_11_16[5] = get_internal_image(16047);
            images_playerskinmillatail_381_11_16[6] = get_internal_image(16048);
            images_playerskinmillatail_381_11_16[7] = get_internal_image(16049);
            images_playerskinmillatail_381_12_0[0] = get_internal_image(7768);
            images_playerskinmillatail_381_12_0[1] = get_internal_image(8152);
            images_playerskinmillatail_381_12_0[2] = get_internal_image(8737);
            images_playerskinmillatail_381_12_0[3] = get_internal_image(8943);
            images_playerskinmillatail_381_12_0[4] = get_internal_image(8985);
            images_playerskinmillatail_381_12_0[5] = get_internal_image(9015);
            images_playerskinmillatail_381_12_0[6] = get_internal_image(9024);
            images_playerskinmillatail_381_12_0[7] = get_internal_image(9027);
            images_playerskinmillatail_381_12_16[0] = get_internal_image(10657);
            images_playerskinmillatail_381_12_16[1] = get_internal_image(10690);
            images_playerskinmillatail_381_12_16[2] = get_internal_image(10691);
            images_playerskinmillatail_381_12_16[3] = get_internal_image(10704);
            images_playerskinmillatail_381_12_16[4] = get_internal_image(10788);
            images_playerskinmillatail_381_12_16[5] = get_internal_image(10789);
            images_playerskinmillatail_381_12_16[6] = get_internal_image(11109);
            images_playerskinmillatail_381_12_16[7] = get_internal_image(11625);
            images_playerskinmillatail_381_14_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_15_0[0] = get_internal_image(8066);
            images_playerskinmillatail_381_15_0[1] = get_internal_image(6901);
            images_playerskinmillatail_381_15_0[2] = get_internal_image(6970);
            images_playerskinmillatail_381_15_0[3] = get_internal_image(6974);
            images_playerskinmillatail_381_15_0[4] = get_internal_image(7036);
            images_playerskinmillatail_381_15_0[5] = get_internal_image(7037);
            images_playerskinmillatail_381_15_0[6] = get_internal_image(7072);
            images_playerskinmillatail_381_15_0[7] = get_internal_image(7275);
            images_playerskinmillatail_381_15_16[0] = get_internal_image(7685);
            images_playerskinmillatail_381_15_16[1] = get_internal_image(7686);
            images_playerskinmillatail_381_15_16[2] = get_internal_image(7687);
            images_playerskinmillatail_381_15_16[3] = get_internal_image(7688);
            images_playerskinmillatail_381_15_16[4] = get_internal_image(7689);
            images_playerskinmillatail_381_15_16[5] = get_internal_image(7690);
            images_playerskinmillatail_381_15_16[6] = get_internal_image(7691);
            images_playerskinmillatail_381_15_16[7] = get_internal_image(7692);
            images_playerskinmillatail_381_16_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_17_0[0] = get_internal_image(8066);
            images_playerskinmillatail_381_17_0[1] = get_internal_image(6901);
            images_playerskinmillatail_381_17_0[2] = get_internal_image(6970);
            images_playerskinmillatail_381_17_0[3] = get_internal_image(6974);
            images_playerskinmillatail_381_17_0[4] = get_internal_image(7036);
            images_playerskinmillatail_381_17_0[5] = get_internal_image(7037);
            images_playerskinmillatail_381_17_0[6] = get_internal_image(7072);
            images_playerskinmillatail_381_17_0[7] = get_internal_image(7275);
            images_playerskinmillatail_381_17_16[0] = get_internal_image(7685);
            images_playerskinmillatail_381_17_16[1] = get_internal_image(7686);
            images_playerskinmillatail_381_17_16[2] = get_internal_image(7687);
            images_playerskinmillatail_381_17_16[3] = get_internal_image(7688);
            images_playerskinmillatail_381_17_16[4] = get_internal_image(7689);
            images_playerskinmillatail_381_17_16[5] = get_internal_image(7690);
            images_playerskinmillatail_381_17_16[6] = get_internal_image(7691);
            images_playerskinmillatail_381_17_16[7] = get_internal_image(7692);
            images_playerskinmillatail_381_18_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_23_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_24_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_25_0[0] = get_internal_image(7373);
            images_playerskinmillatail_381_25_0[1] = get_internal_image(7375);
            images_playerskinmillatail_381_25_0[2] = get_internal_image(6902);
            images_playerskinmillatail_381_25_0[3] = get_internal_image(6931);
            images_playerskinmillatail_381_25_0[4] = get_internal_image(6934);
            images_playerskinmillatail_381_25_0[5] = get_internal_image(6935);
            images_playerskinmillatail_381_25_0[6] = get_internal_image(6937);
            images_playerskinmillatail_381_25_0[7] = get_internal_image(7370);
            images_playerskinmillatail_381_25_16[0] = get_internal_image(7374);
            images_playerskinmillatail_381_25_16[1] = get_internal_image(7483);
            images_playerskinmillatail_381_25_16[2] = get_internal_image(7484);
            images_playerskinmillatail_381_25_16[3] = get_internal_image(7485);
            images_playerskinmillatail_381_25_16[4] = get_internal_image(7486);
            images_playerskinmillatail_381_25_16[5] = get_internal_image(7487);
            images_playerskinmillatail_381_25_16[6] = get_internal_image(7488);
            images_playerskinmillatail_381_25_16[7] = get_internal_image(7489);
            images_playerskinmillatail_381_26_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_27_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_31_0[0] = get_internal_image(14217);
            images_playerskinmillatail_381_31_0[1] = get_internal_image(14212);
            images_playerskinmillatail_381_31_0[2] = get_internal_image(14213);
            images_playerskinmillatail_381_31_0[3] = get_internal_image(14214);
            images_playerskinmillatail_381_31_0[4] = get_internal_image(14215);
            images_playerskinmillatail_381_31_0[5] = get_internal_image(14216);
            images_playerskinmillatail_381_31_16[0] = get_internal_image(14218);
            images_playerskinmillatail_381_31_16[1] = get_internal_image(14219);
            images_playerskinmillatail_381_31_16[2] = get_internal_image(14220);
            images_playerskinmillatail_381_31_16[3] = get_internal_image(14221);
            images_playerskinmillatail_381_31_16[4] = get_internal_image(14222);
            images_playerskinmillatail_381_31_16[5] = get_internal_image(14223);
            images_playerskinmillatail_381_32_0[0] = get_internal_image(14182);
            images_playerskinmillatail_381_32_0[1] = get_internal_image(14185);
            images_playerskinmillatail_381_32_0[2] = get_internal_image(14183);
            images_playerskinmillatail_381_32_0[3] = get_internal_image(14187);
            images_playerskinmillatail_381_32_0[4] = get_internal_image(14188);
            images_playerskinmillatail_381_32_0[5] = get_internal_image(14190);
            images_playerskinmillatail_381_32_16[0] = get_internal_image(14184);
            images_playerskinmillatail_381_32_16[1] = get_internal_image(14186);
            images_playerskinmillatail_381_32_16[2] = get_internal_image(14189);
            images_playerskinmillatail_381_32_16[3] = get_internal_image(14191);
            images_playerskinmillatail_381_32_16[4] = get_internal_image(14192);
            images_playerskinmillatail_381_32_16[5] = get_internal_image(14193);
            images_playerskinmillatail_381_35_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_36_0[0] = get_internal_image(2873);
            images_playerskinmillatail_381_37_0[0] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[1] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[2] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[3] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[4] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[5] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[6] = get_internal_image(14404);
            images_playerskinmillatail_381_37_0[7] = get_internal_image(1968);
            images_playerskinmillatail_381_37_0[8] = get_internal_image(409);
            images_playerskinmillatail_381_37_0[9] = get_internal_image(538);
            images_playerskinmillatail_381_37_0[10] = get_internal_image(888);
            images_playerskinmillatail_381_37_0[11] = get_internal_image(1986);
            images_playerskinmillatail_381_37_0[12] = get_internal_image(3421);
            images_playerskinmillatail_381_37_0[13] = get_internal_image(2083);
            images_playerskinmillatail_381_37_0[14] = get_internal_image(3338);
            images_playerskinmillatail_381_37_1[0] = get_internal_image(1968);
            images_playerskinmillatail_381_37_1[1] = get_internal_image(409);
            images_playerskinmillatail_381_37_1[2] = get_internal_image(538);
            images_playerskinmillatail_381_37_1[3] = get_internal_image(888);
            images_playerskinmillatail_381_37_1[4] = get_internal_image(1986);
            images_playerskinmillatail_381_37_1[5] = get_internal_image(3421);
            images_playerskinmillatail_381_37_1[6] = get_internal_image(2083);
            images_playerskinmillatail_381_37_1[7] = get_internal_image(3338);
            images_playerskinmillatail_381_37_16[0] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[1] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[2] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[3] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[4] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[5] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[6] = get_internal_image(14404);
            images_playerskinmillatail_381_37_16[7] = get_internal_image(1412);
            images_playerskinmillatail_381_37_16[8] = get_internal_image(4057);
            images_playerskinmillatail_381_37_16[9] = get_internal_image(5928);
            images_playerskinmillatail_381_37_16[10] = get_internal_image(6338);
            images_playerskinmillatail_381_37_16[11] = get_internal_image(6653);
            images_playerskinmillatail_381_37_16[12] = get_internal_image(6777);
            images_playerskinmillatail_381_37_16[13] = get_internal_image(6811);
            images_playerskinmillatail_381_37_16[14] = get_internal_image(6836);
            images_playerskinmillatail_381_37_17[0] = get_internal_image(1412);
            images_playerskinmillatail_381_37_17[1] = get_internal_image(4057);
            images_playerskinmillatail_381_37_17[2] = get_internal_image(5928);
            images_playerskinmillatail_381_37_17[3] = get_internal_image(6338);
            images_playerskinmillatail_381_37_17[4] = get_internal_image(6653);
            images_playerskinmillatail_381_37_17[5] = get_internal_image(6777);
            images_playerskinmillatail_381_37_17[6] = get_internal_image(6811);
            images_playerskinmillatail_381_37_17[7] = get_internal_image(6836);
            images_playerskinmillatail_381_38_0[0] = get_internal_image(8414);
            images_playerskinmillatail_381_40_0[0] = get_internal_image(1968);
            images_playerskinmillatail_381_40_0[1] = get_internal_image(409);
            images_playerskinmillatail_381_40_0[2] = get_internal_image(538);
            images_playerskinmillatail_381_40_0[3] = get_internal_image(888);
            images_playerskinmillatail_381_40_0[4] = get_internal_image(1986);
            images_playerskinmillatail_381_40_0[5] = get_internal_image(3421);
            images_playerskinmillatail_381_40_0[6] = get_internal_image(2083);
            images_playerskinmillatail_381_40_0[7] = get_internal_image(3338);
            images_playerskinmillatail_381_40_1[0] = get_internal_image(2873);
            images_playerskinmillatail_381_40_4[0] = get_internal_image(2083);
            images_playerskinmillatail_381_40_7[0] = get_internal_image(2873);
            images_playerskinmillatail_381_40_10[0] = get_internal_image(2873);
            images_playerskinmillatail_381_40_14[0] = get_internal_image(7452);
            images_playerskinmillatail_381_40_14[1] = get_internal_image(7456);
            images_playerskinmillatail_381_40_14[2] = get_internal_image(7458);
            images_playerskinmillatail_381_40_14[3] = get_internal_image(7457);
            images_playerskinmillatail_381_40_14[4] = get_internal_image(7459);
            images_playerskinmillatail_381_40_14[5] = get_internal_image(7460);
            images_playerskinmillatail_381_40_14[6] = get_internal_image(7462);
            images_playerskinmillatail_381_40_14[7] = get_internal_image(7463);
            images_playerskinmillatail_381_40_16[0] = get_internal_image(1412);
            images_playerskinmillatail_381_40_16[1] = get_internal_image(4057);
            images_playerskinmillatail_381_40_16[2] = get_internal_image(5928);
            images_playerskinmillatail_381_40_16[3] = get_internal_image(6338);
            images_playerskinmillatail_381_40_16[4] = get_internal_image(6653);
            images_playerskinmillatail_381_40_16[5] = get_internal_image(6777);
            images_playerskinmillatail_381_40_16[6] = get_internal_image(6811);
            images_playerskinmillatail_381_40_16[7] = get_internal_image(6836);
            images_playerskinmillatail_381_40_20[0] = get_internal_image(6811);
            images_playerskinmillatail_381_40_26[0] = get_internal_image(2873);
            images_playerskinmillatail_381_40_30[0] = get_internal_image(1412);
            images_playerskinmillatail_381_40_30[1] = get_internal_image(4057);
            images_playerskinmillatail_381_40_30[2] = get_internal_image(5928);
            images_playerskinmillatail_381_40_30[3] = get_internal_image(6338);
            images_playerskinmillatail_381_40_30[4] = get_internal_image(6653);
            images_playerskinmillatail_381_40_30[5] = get_internal_image(6777);
            images_playerskinmillatail_381_40_30[6] = get_internal_image(6811);
            images_playerskinmillatail_381_40_30[7] = get_internal_image(6836);
            images_playerskinmillatail_381_41_0[0] = get_internal_image(1968);
            images_playerskinmillatail_381_41_0[1] = get_internal_image(409);
            images_playerskinmillatail_381_41_0[2] = get_internal_image(538);
            images_playerskinmillatail_381_41_0[3] = get_internal_image(888);
            images_playerskinmillatail_381_41_0[4] = get_internal_image(1986);
            images_playerskinmillatail_381_41_0[5] = get_internal_image(3421);
            images_playerskinmillatail_381_41_0[6] = get_internal_image(2083);
            images_playerskinmillatail_381_41_0[7] = get_internal_image(3338);
            images_playerskinmillatail_381_41_7[0] = get_internal_image(134);
            images_playerskinmillatail_381_41_7[1] = get_internal_image(160);
            images_playerskinmillatail_381_41_7[2] = get_internal_image(1238);
            images_playerskinmillatail_381_41_7[3] = get_internal_image(1514);
            images_playerskinmillatail_381_41_7[4] = get_internal_image(2511);
            images_playerskinmillatail_381_41_7[5] = get_internal_image(3101);
            images_playerskinmillatail_381_41_7[6] = get_internal_image(5471);
            images_playerskinmillatail_381_41_7[7] = get_internal_image(9430);
            images_playerskinmillatail_381_41_13[0] = get_internal_image(1412);
            images_playerskinmillatail_381_41_13[1] = get_internal_image(4057);
            images_playerskinmillatail_381_41_13[2] = get_internal_image(5928);
            images_playerskinmillatail_381_41_13[3] = get_internal_image(6338);
            images_playerskinmillatail_381_41_13[4] = get_internal_image(6653);
            images_playerskinmillatail_381_41_13[5] = get_internal_image(6777);
            images_playerskinmillatail_381_41_13[6] = get_internal_image(6811);
            images_playerskinmillatail_381_41_13[7] = get_internal_image(6836);
            images_playerskinmillatail_381_41_14[0] = get_internal_image(2873);
            images_playerskinmillatail_381_41_15[0] = get_internal_image(2873);
            images_playerskinmillatail_381_41_16[0] = get_internal_image(1412);
            images_playerskinmillatail_381_41_16[1] = get_internal_image(4057);
            images_playerskinmillatail_381_41_16[2] = get_internal_image(5928);
            images_playerskinmillatail_381_41_16[3] = get_internal_image(6338);
            images_playerskinmillatail_381_41_16[4] = get_internal_image(6653);
            images_playerskinmillatail_381_41_16[5] = get_internal_image(6777);
            images_playerskinmillatail_381_41_16[6] = get_internal_image(6811);
            images_playerskinmillatail_381_41_16[7] = get_internal_image(6836);
            images_playerskinmillatail_381_41_24[0] = get_internal_image(2873);
            images_playerskinmillatail_381_41_29[0] = get_internal_image(1968);
            images_playerskinmillatail_381_41_29[1] = get_internal_image(409);
            images_playerskinmillatail_381_41_29[2] = get_internal_image(538);
            images_playerskinmillatail_381_41_29[3] = get_internal_image(888);
            images_playerskinmillatail_381_41_29[4] = get_internal_image(1986);
            images_playerskinmillatail_381_41_29[5] = get_internal_image(3421);
            images_playerskinmillatail_381_41_29[6] = get_internal_image(2083);
            images_playerskinmillatail_381_41_29[7] = get_internal_image(3338);
            images_playerskinmillatail_381_41_30[0] = get_internal_image(2873);
            images_playerskinmillatail_381_41_31[0] = get_internal_image(2873);
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
FrameObject * create_playerskinmillatail_381(int x, int y)
{
    return new (Active::pool.create()) PlayerSkinMillaTail_381(x, y);
}
static Image* images_playerskincarolbike_382_0_0[3];
static Direction direction_playerskincarolbike_382_0_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_0_0, 3};
static Image* images_playerskincarolbike_382_0_1[42];
static Direction direction_playerskincarolbike_382_0_1 = {1, 70, 70, 0, -1, images_playerskincarolbike_382_0_1, 42};
static Image* images_playerskincarolbike_382_0_16[3];
static Direction direction_playerskincarolbike_382_0_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_0_16, 3};
static Image* images_playerskincarolbike_382_0_17[42];
static Direction direction_playerskincarolbike_382_0_17 = {17, 70, 70, 0, -1, images_playerskincarolbike_382_0_17, 42};
static Animation anim_playerskincarolbike_382_0 = {&direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_1, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_16, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_17, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0, &direction_playerskincarolbike_382_0_0};
static Image* images_playerskincarolbike_382_1_0[2];
static Direction direction_playerskincarolbike_382_1_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_1_0, 2};
static Image* images_playerskincarolbike_382_1_16[2];
static Direction direction_playerskincarolbike_382_1_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_1_16, 2};
static Animation anim_playerskincarolbike_382_1 = {&direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, NULL, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, &direction_playerskincarolbike_382_1_16, NULL, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0, &direction_playerskincarolbike_382_1_0};
static Image* images_playerskincarolbike_382_2_0[2];
static Direction direction_playerskincarolbike_382_2_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_2_0, 2};
static Image* images_playerskincarolbike_382_2_16[2];
static Direction direction_playerskincarolbike_382_2_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_2_16, 2};
static Animation anim_playerskincarolbike_382_2 = {&direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, NULL, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, &direction_playerskincarolbike_382_2_16, NULL, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0, &direction_playerskincarolbike_382_2_0};
static Image* images_playerskincarolbike_382_7_0[8];
static Direction direction_playerskincarolbike_382_7_0 = {0, 17, 17, 0, -1, images_playerskincarolbike_382_7_0, 8};
static Image* images_playerskincarolbike_382_7_16[8];
static Direction direction_playerskincarolbike_382_7_16 = {16, 17, 17, 0, -1, images_playerskincarolbike_382_7_16, 8};
static Animation anim_playerskincarolbike_382_7 = {&direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, NULL, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, &direction_playerskincarolbike_382_7_16, NULL, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0, &direction_playerskincarolbike_382_7_0};
static Image* images_playerskincarolbike_382_8_0[9];
static Direction direction_playerskincarolbike_382_8_0 = {0, 50, 50, 8, 3, images_playerskincarolbike_382_8_0, 9};
static Image* images_playerskincarolbike_382_8_16[9];
static Direction direction_playerskincarolbike_382_8_16 = {16, 50, 50, 8, 3, images_playerskincarolbike_382_8_16, 9};
static Animation anim_playerskincarolbike_382_8 = {&direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, NULL, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, &direction_playerskincarolbike_382_8_16, NULL, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0, &direction_playerskincarolbike_382_8_0};
static Image* images_playerskincarolbike_382_9_0[2];
static Direction direction_playerskincarolbike_382_9_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_9_0, 2};
static Animation anim_playerskincarolbike_382_9 = {&direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, NULL, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0, &direction_playerskincarolbike_382_9_0};
static Image* images_playerskincarolbike_382_10_0[3];
static Direction direction_playerskincarolbike_382_10_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_10_0, 3};
static Image* images_playerskincarolbike_382_10_16[3];
static Direction direction_playerskincarolbike_382_10_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_10_16, 3};
static Animation anim_playerskincarolbike_382_10 = {&direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, NULL, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, &direction_playerskincarolbike_382_10_16, NULL, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0, &direction_playerskincarolbike_382_10_0};
static Image* images_playerskincarolbike_382_11_0[3];
static Direction direction_playerskincarolbike_382_11_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_11_0, 3};
static Image* images_playerskincarolbike_382_11_16[3];
static Direction direction_playerskincarolbike_382_11_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_11_16, 3};
static Animation anim_playerskincarolbike_382_11 = {&direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, NULL, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, &direction_playerskincarolbike_382_11_16, NULL, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0, &direction_playerskincarolbike_382_11_0};
static Image* images_playerskincarolbike_382_12_0[2];
static Direction direction_playerskincarolbike_382_12_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_12_0, 2};
static Image* images_playerskincarolbike_382_12_16[2];
static Direction direction_playerskincarolbike_382_12_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_12_16, 2};
static Animation anim_playerskincarolbike_382_12 = {&direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, NULL, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, &direction_playerskincarolbike_382_12_16, NULL, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0, &direction_playerskincarolbike_382_12_0};
static Image* images_playerskincarolbike_382_13_0[2];
static Direction direction_playerskincarolbike_382_13_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_13_0, 2};
static Image* images_playerskincarolbike_382_13_16[2];
static Direction direction_playerskincarolbike_382_13_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_13_16, 2};
static Animation anim_playerskincarolbike_382_13 = {&direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, NULL, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, &direction_playerskincarolbike_382_13_16, NULL, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0, &direction_playerskincarolbike_382_13_0};
static Image* images_playerskincarolbike_382_14_0[2];
static Direction direction_playerskincarolbike_382_14_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_14_0, 2};
static Image* images_playerskincarolbike_382_14_16[2];
static Direction direction_playerskincarolbike_382_14_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_14_16, 2};
static Animation anim_playerskincarolbike_382_14 = {&direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, NULL, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, &direction_playerskincarolbike_382_14_16, NULL, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0, &direction_playerskincarolbike_382_14_0};
static Image* images_playerskincarolbike_382_15_0[6];
static Direction direction_playerskincarolbike_382_15_0 = {0, 50, 50, 0, -1, images_playerskincarolbike_382_15_0, 6};
static Image* images_playerskincarolbike_382_15_16[6];
static Direction direction_playerskincarolbike_382_15_16 = {16, 50, 50, 0, -1, images_playerskincarolbike_382_15_16, 6};
static Animation anim_playerskincarolbike_382_15 = {&direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, NULL, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, &direction_playerskincarolbike_382_15_16, NULL, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0, &direction_playerskincarolbike_382_15_0};
static Image* images_playerskincarolbike_382_16_0[2];
static Direction direction_playerskincarolbike_382_16_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_16_0, 2};
static Image* images_playerskincarolbike_382_16_16[2];
static Direction direction_playerskincarolbike_382_16_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_16_16, 2};
static Animation anim_playerskincarolbike_382_16 = {&direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, NULL, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, &direction_playerskincarolbike_382_16_16, NULL, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0, &direction_playerskincarolbike_382_16_0};
static Image* images_playerskincarolbike_382_17_0[4];
static Direction direction_playerskincarolbike_382_17_0 = {0, 25, 25, 0, -1, images_playerskincarolbike_382_17_0, 4};
static Animation anim_playerskincarolbike_382_17 = {&direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, NULL, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0, &direction_playerskincarolbike_382_17_0};
static Image* images_playerskincarolbike_382_20_0[2];
static Direction direction_playerskincarolbike_382_20_0 = {0, 70, 70, 0, 16, images_playerskincarolbike_382_20_0, 2};
static Image* images_playerskincarolbike_382_20_16[2];
static Direction direction_playerskincarolbike_382_20_16 = {16, 70, 70, 0, 16, images_playerskincarolbike_382_20_16, 2};
static Animation anim_playerskincarolbike_382_20 = {&direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, NULL, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, &direction_playerskincarolbike_382_20_16, NULL, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0, &direction_playerskincarolbike_382_20_0};
static Image* images_playerskincarolbike_382_21_0[9];
static Direction direction_playerskincarolbike_382_21_0 = {0, 50, 50, 1, -1, images_playerskincarolbike_382_21_0, 9};
static Image* images_playerskincarolbike_382_21_16[9];
static Direction direction_playerskincarolbike_382_21_16 = {16, 50, 50, 1, -1, images_playerskincarolbike_382_21_16, 9};
static Animation anim_playerskincarolbike_382_21 = {&direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, NULL, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, &direction_playerskincarolbike_382_21_16, NULL, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0, &direction_playerskincarolbike_382_21_0};
static Image* images_playerskincarolbike_382_23_0[2];
static Direction direction_playerskincarolbike_382_23_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_23_0, 2};
static Image* images_playerskincarolbike_382_23_16[2];
static Direction direction_playerskincarolbike_382_23_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_23_16, 2};
static Animation anim_playerskincarolbike_382_23 = {&direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, NULL, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, &direction_playerskincarolbike_382_23_16, NULL, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0, &direction_playerskincarolbike_382_23_0};
static Image* images_playerskincarolbike_382_24_0[2];
static Direction direction_playerskincarolbike_382_24_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_24_0, 2};
static Image* images_playerskincarolbike_382_24_16[2];
static Direction direction_playerskincarolbike_382_24_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_24_16, 2};
static Animation anim_playerskincarolbike_382_24 = {&direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, NULL, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, &direction_playerskincarolbike_382_24_16, NULL, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0, &direction_playerskincarolbike_382_24_0};
static Image* images_playerskincarolbike_382_25_0[6];
static Direction direction_playerskincarolbike_382_25_0 = {0, 35, 35, 5, -1, images_playerskincarolbike_382_25_0, 6};
static Image* images_playerskincarolbike_382_25_16[6];
static Direction direction_playerskincarolbike_382_25_16 = {16, 35, 35, 5, -1, images_playerskincarolbike_382_25_16, 6};
static Animation anim_playerskincarolbike_382_25 = {&direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, NULL, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, &direction_playerskincarolbike_382_25_16, NULL, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0, &direction_playerskincarolbike_382_25_0};
static Image* images_playerskincarolbike_382_26_0[6];
static Direction direction_playerskincarolbike_382_26_0 = {0, 35, 35, 5, -1, images_playerskincarolbike_382_26_0, 6};
static Image* images_playerskincarolbike_382_26_16[6];
static Direction direction_playerskincarolbike_382_26_16 = {16, 35, 35, 5, -1, images_playerskincarolbike_382_26_16, 6};
static Animation anim_playerskincarolbike_382_26 = {&direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, NULL, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, &direction_playerskincarolbike_382_26_16, NULL, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0, &direction_playerskincarolbike_382_26_0};
static Image* images_playerskincarolbike_382_27_0[4];
static Direction direction_playerskincarolbike_382_27_0 = {0, 50, 50, 3, -1, images_playerskincarolbike_382_27_0, 4};
static Image* images_playerskincarolbike_382_27_16[4];
static Direction direction_playerskincarolbike_382_27_16 = {16, 50, 50, 3, -1, images_playerskincarolbike_382_27_16, 4};
static Animation anim_playerskincarolbike_382_27 = {&direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, NULL, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, &direction_playerskincarolbike_382_27_16, NULL, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0, &direction_playerskincarolbike_382_27_0};
static Image* images_playerskincarolbike_382_29_0[6];
static Direction direction_playerskincarolbike_382_29_0 = {0, 35, 35, 5, -1, images_playerskincarolbike_382_29_0, 6};
static Image* images_playerskincarolbike_382_29_16[6];
static Direction direction_playerskincarolbike_382_29_16 = {16, 35, 35, 5, -1, images_playerskincarolbike_382_29_16, 6};
static Animation anim_playerskincarolbike_382_29 = {&direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, NULL, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, &direction_playerskincarolbike_382_29_16, NULL, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0, &direction_playerskincarolbike_382_29_0};
static Image* images_playerskincarolbike_382_30_0[3];
static Direction direction_playerskincarolbike_382_30_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_30_0, 3};
static Image* images_playerskincarolbike_382_30_16[3];
static Direction direction_playerskincarolbike_382_30_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_30_16, 3};
static Animation anim_playerskincarolbike_382_30 = {&direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, NULL, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, &direction_playerskincarolbike_382_30_16, NULL, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0, &direction_playerskincarolbike_382_30_0};
static Image* images_playerskincarolbike_382_31_0[2];
static Direction direction_playerskincarolbike_382_31_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_31_0, 2};
static Image* images_playerskincarolbike_382_31_16[2];
static Direction direction_playerskincarolbike_382_31_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_31_16, 2};
static Animation anim_playerskincarolbike_382_31 = {&direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, NULL, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, &direction_playerskincarolbike_382_31_16, NULL, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0, &direction_playerskincarolbike_382_31_0};
static Image* images_playerskincarolbike_382_32_0[2];
static Direction direction_playerskincarolbike_382_32_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_32_0, 2};
static Image* images_playerskincarolbike_382_32_16[2];
static Direction direction_playerskincarolbike_382_32_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_32_16, 2};
static Animation anim_playerskincarolbike_382_32 = {&direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, NULL, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, &direction_playerskincarolbike_382_32_16, NULL, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0, &direction_playerskincarolbike_382_32_0};
static Image* images_playerskincarolbike_382_33_0[9];
static Direction direction_playerskincarolbike_382_33_0 = {0, 50, 50, 0, 1, images_playerskincarolbike_382_33_0, 9};
static Image* images_playerskincarolbike_382_33_16[9];
static Direction direction_playerskincarolbike_382_33_16 = {16, 50, 50, 0, 1, images_playerskincarolbike_382_33_16, 9};
static Animation anim_playerskincarolbike_382_33 = {&direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, NULL, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, &direction_playerskincarolbike_382_33_16, NULL, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0, &direction_playerskincarolbike_382_33_0};
static Image* images_playerskincarolbike_382_35_0[2];
static Direction direction_playerskincarolbike_382_35_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_35_0, 2};
static Animation anim_playerskincarolbike_382_35 = {&direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, NULL, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0, &direction_playerskincarolbike_382_35_0};
static Image* images_playerskincarolbike_382_36_0[1];
static Direction direction_playerskincarolbike_382_36_0 = {0, 50, 50, 0, 4, images_playerskincarolbike_382_36_0, 1};
static Animation anim_playerskincarolbike_382_36 = {&direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, NULL, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0, &direction_playerskincarolbike_382_36_0};
static Image* images_playerskincarolbike_382_37_0[2];
static Direction direction_playerskincarolbike_382_37_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_37_0, 2};
static Image* images_playerskincarolbike_382_37_16[2];
static Direction direction_playerskincarolbike_382_37_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_37_16, 2};
static Animation anim_playerskincarolbike_382_37 = {&direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, NULL, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, &direction_playerskincarolbike_382_37_16, NULL, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0, &direction_playerskincarolbike_382_37_0};
static Image* images_playerskincarolbike_382_39_0[4];
static Direction direction_playerskincarolbike_382_39_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_39_0, 4};
static Image* images_playerskincarolbike_382_39_16[4];
static Direction direction_playerskincarolbike_382_39_16 = {16, 70, 70, 0, -1, images_playerskincarolbike_382_39_16, 4};
static Animation anim_playerskincarolbike_382_39 = {&direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, NULL, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, &direction_playerskincarolbike_382_39_16, NULL, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0, &direction_playerskincarolbike_382_39_0};
static Image* images_playerskincarolbike_382_40_0[9];
static Direction direction_playerskincarolbike_382_40_0 = {0, 70, 70, 0, -1, images_playerskincarolbike_382_40_0, 9};
static Image* images_playerskincarolbike_382_40_7[1];
static Direction direction_playerskincarolbike_382_40_7 = {7, 50, 50, 0, -1, images_playerskincarolbike_382_40_7, 1};
static Image* images_playerskincarolbike_382_40_9[1];
static Direction direction_playerskincarolbike_382_40_9 = {9, 50, 50, 0, 1, images_playerskincarolbike_382_40_9, 1};
static Image* images_playerskincarolbike_382_40_14[2];
static Direction direction_playerskincarolbike_382_40_14 = {14, 70, 70, 0, -1, images_playerskincarolbike_382_40_14, 2};
static Image* images_playerskincarolbike_382_40_30[2];
static Direction direction_playerskincarolbike_382_40_30 = {30, 70, 70, 0, -1, images_playerskincarolbike_382_40_30, 2};
static Animation anim_playerskincarolbike_382_40 = {&direction_playerskincarolbike_382_40_0, &direction_playerskincarolbike_382_40_0, &direction_playerskincarolbike_382_40_0, &direction_playerskincarolbike_382_40_0, &direction_playerskincarolbike_382_40_7, &direction_playerskincarolbike_382_40_7, &direction_playerskincarolbike_382_40_7, &direction_playerskincarolbike_382_40_7, NULL, &direction_playerskincarolbike_382_40_9, &direction_playerskincarolbike_382_40_9, &direction_playerskincarolbike_382_40_9, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, &direction_playerskincarolbike_382_40_14, NULL, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, &direction_playerskincarolbike_382_40_30, NULL};
static Animation * anim_array_playerskincarolbike_382[41] = {&anim_playerskincarolbike_382_0, &anim_playerskincarolbike_382_1, &anim_playerskincarolbike_382_2, NULL, NULL, NULL, NULL, &anim_playerskincarolbike_382_7, &anim_playerskincarolbike_382_8, &anim_playerskincarolbike_382_9, &anim_playerskincarolbike_382_10, &anim_playerskincarolbike_382_11, &anim_playerskincarolbike_382_12, &anim_playerskincarolbike_382_13, &anim_playerskincarolbike_382_14, &anim_playerskincarolbike_382_15, &anim_playerskincarolbike_382_16, &anim_playerskincarolbike_382_17, NULL, NULL, &anim_playerskincarolbike_382_20, &anim_playerskincarolbike_382_21, NULL, &anim_playerskincarolbike_382_23, &anim_playerskincarolbike_382_24, &anim_playerskincarolbike_382_25, &anim_playerskincarolbike_382_26, &anim_playerskincarolbike_382_27, NULL, &anim_playerskincarolbike_382_29, &anim_playerskincarolbike_382_30, &anim_playerskincarolbike_382_31, &anim_playerskincarolbike_382_32, &anim_playerskincarolbike_382_33, NULL, &anim_playerskincarolbike_382_35, &anim_playerskincarolbike_382_36, &anim_playerskincarolbike_382_37, NULL, &anim_playerskincarolbike_382_39, &anim_playerskincarolbike_382_40};
static Animations anim_playerskincarolbike_382 = {41, &anim_array_playerskincarolbike_382[0]};
static bool anim_playerskincarolbike_382_initialized;
class PlayerSkinCarolBike_382 : public Active
{
public:
    PlayerSkinCarolBike_382(int x, int y) : Active(x, y, PlayerSkinCarolBike_382_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("PlayerSkin_CarolBike", 20);
#endif
        set_visible(false);
        this->animations = &anim_playerskincarolbike_382;
        if (!anim_playerskincarolbike_382_initialized) {
            anim_playerskincarolbike_382_initialized = true;
            images_playerskincarolbike_382_0_0[0] = get_internal_image(3702);
            images_playerskincarolbike_382_0_0[1] = get_internal_image(3742);
            images_playerskincarolbike_382_0_0[2] = get_internal_image(3743);
            images_playerskincarolbike_382_0_1[0] = get_internal_image(3702);
            images_playerskincarolbike_382_0_1[1] = get_internal_image(3742);
            images_playerskincarolbike_382_0_1[2] = get_internal_image(3743);
            images_playerskincarolbike_382_0_1[3] = get_internal_image(3761);
            images_playerskincarolbike_382_0_1[4] = get_internal_image(3762);
            images_playerskincarolbike_382_0_1[5] = get_internal_image(3764);
            images_playerskincarolbike_382_0_1[6] = get_internal_image(3767);
            images_playerskincarolbike_382_0_1[7] = get_internal_image(3768);
            images_playerskincarolbike_382_0_1[8] = get_internal_image(3773);
            images_playerskincarolbike_382_0_1[9] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[10] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[11] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[12] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[13] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[14] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[15] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[16] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[17] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[18] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[19] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[20] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[21] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[22] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[23] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[24] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[25] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[26] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[27] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[28] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[29] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[30] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[31] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[32] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[33] = get_internal_image(3777);
            images_playerskincarolbike_382_0_1[34] = get_internal_image(3699);
            images_playerskincarolbike_382_0_1[35] = get_internal_image(3780);
            images_playerskincarolbike_382_0_1[36] = get_internal_image(3767);
            images_playerskincarolbike_382_0_1[37] = get_internal_image(3768);
            images_playerskincarolbike_382_0_1[38] = get_internal_image(3773);
            images_playerskincarolbike_382_0_1[39] = get_internal_image(3761);
            images_playerskincarolbike_382_0_1[40] = get_internal_image(3762);
            images_playerskincarolbike_382_0_1[41] = get_internal_image(3764);
            images_playerskincarolbike_382_0_16[0] = get_internal_image(3531);
            images_playerskincarolbike_382_0_16[1] = get_internal_image(3537);
            images_playerskincarolbike_382_0_16[2] = get_internal_image(3580);
            images_playerskincarolbike_382_0_17[0] = get_internal_image(3531);
            images_playerskincarolbike_382_0_17[1] = get_internal_image(3537);
            images_playerskincarolbike_382_0_17[2] = get_internal_image(3580);
            images_playerskincarolbike_382_0_17[3] = get_internal_image(3586);
            images_playerskincarolbike_382_0_17[4] = get_internal_image(3589);
            images_playerskincarolbike_382_0_17[5] = get_internal_image(3590);
            images_playerskincarolbike_382_0_17[6] = get_internal_image(3591);
            images_playerskincarolbike_382_0_17[7] = get_internal_image(3595);
            images_playerskincarolbike_382_0_17[8] = get_internal_image(3596);
            images_playerskincarolbike_382_0_17[9] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[10] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[11] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[12] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[13] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[14] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[15] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[16] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[17] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[18] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[19] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[20] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[21] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[22] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[23] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[24] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[25] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[26] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[27] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[28] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[29] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[30] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[31] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[32] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[33] = get_internal_image(3779);
            images_playerskincarolbike_382_0_17[34] = get_internal_image(3781);
            images_playerskincarolbike_382_0_17[35] = get_internal_image(3782);
            images_playerskincarolbike_382_0_17[36] = get_internal_image(3591);
            images_playerskincarolbike_382_0_17[37] = get_internal_image(3595);
            images_playerskincarolbike_382_0_17[38] = get_internal_image(3596);
            images_playerskincarolbike_382_0_17[39] = get_internal_image(3586);
            images_playerskincarolbike_382_0_17[40] = get_internal_image(3589);
            images_playerskincarolbike_382_0_17[41] = get_internal_image(3590);
            images_playerskincarolbike_382_1_0[0] = get_internal_image(3516);
            images_playerskincarolbike_382_1_0[1] = get_internal_image(3517);
            images_playerskincarolbike_382_1_16[0] = get_internal_image(3525);
            images_playerskincarolbike_382_1_16[1] = get_internal_image(3696);
            images_playerskincarolbike_382_2_0[0] = get_internal_image(3516);
            images_playerskincarolbike_382_2_0[1] = get_internal_image(3517);
            images_playerskincarolbike_382_2_16[0] = get_internal_image(3525);
            images_playerskincarolbike_382_2_16[1] = get_internal_image(3696);
            images_playerskincarolbike_382_7_0[0] = get_internal_image(4240);
            images_playerskincarolbike_382_7_0[1] = get_internal_image(4241);
            images_playerskincarolbike_382_7_0[2] = get_internal_image(4243);
            images_playerskincarolbike_382_7_0[3] = get_internal_image(4246);
            images_playerskincarolbike_382_7_0[4] = get_internal_image(4244);
            images_playerskincarolbike_382_7_0[5] = get_internal_image(4247);
            images_playerskincarolbike_382_7_0[6] = get_internal_image(4245);
            images_playerskincarolbike_382_7_0[7] = get_internal_image(4248);
            images_playerskincarolbike_382_7_16[0] = get_internal_image(4242);
            images_playerskincarolbike_382_7_16[1] = get_internal_image(4249);
            images_playerskincarolbike_382_7_16[2] = get_internal_image(4254);
            images_playerskincarolbike_382_7_16[3] = get_internal_image(4261);
            images_playerskincarolbike_382_7_16[4] = get_internal_image(4262);
            images_playerskincarolbike_382_7_16[5] = get_internal_image(4264);
            images_playerskincarolbike_382_7_16[6] = get_internal_image(4265);
            images_playerskincarolbike_382_7_16[7] = get_internal_image(4266);
            images_playerskincarolbike_382_8_0[0] = get_internal_image(4276);
            images_playerskincarolbike_382_8_0[1] = get_internal_image(2974);
            images_playerskincarolbike_382_8_0[2] = get_internal_image(4277);
            images_playerskincarolbike_382_8_0[3] = get_internal_image(2967);
            images_playerskincarolbike_382_8_0[4] = get_internal_image(4278);
            images_playerskincarolbike_382_8_0[5] = get_internal_image(2967);
            images_playerskincarolbike_382_8_0[6] = get_internal_image(4279);
            images_playerskincarolbike_382_8_0[7] = get_internal_image(2967);
            images_playerskincarolbike_382_8_0[8] = get_internal_image(2983);
            images_playerskincarolbike_382_8_16[0] = get_internal_image(4275);
            images_playerskincarolbike_382_8_16[1] = get_internal_image(2986);
            images_playerskincarolbike_382_8_16[2] = get_internal_image(4280);
            images_playerskincarolbike_382_8_16[3] = get_internal_image(2988);
            images_playerskincarolbike_382_8_16[4] = get_internal_image(4281);
            images_playerskincarolbike_382_8_16[5] = get_internal_image(2988);
            images_playerskincarolbike_382_8_16[6] = get_internal_image(4282);
            images_playerskincarolbike_382_8_16[7] = get_internal_image(2988);
            images_playerskincarolbike_382_8_16[8] = get_internal_image(2989);
            images_playerskincarolbike_382_9_0[0] = get_internal_image(4194);
            images_playerskincarolbike_382_9_0[1] = get_internal_image(4223);
            images_playerskincarolbike_382_10_0[0] = get_internal_image(2951);
            images_playerskincarolbike_382_10_0[1] = get_internal_image(2924);
            images_playerskincarolbike_382_10_0[2] = get_internal_image(2950);
            images_playerskincarolbike_382_10_16[0] = get_internal_image(2933);
            images_playerskincarolbike_382_10_16[1] = get_internal_image(2952);
            images_playerskincarolbike_382_10_16[2] = get_internal_image(2953);
            images_playerskincarolbike_382_11_0[0] = get_internal_image(3678);
            images_playerskincarolbike_382_11_0[1] = get_internal_image(3683);
            images_playerskincarolbike_382_11_0[2] = get_internal_image(3680);
            images_playerskincarolbike_382_11_16[0] = get_internal_image(3685);
            images_playerskincarolbike_382_11_16[1] = get_internal_image(3689);
            images_playerskincarolbike_382_11_16[2] = get_internal_image(3691);
            images_playerskincarolbike_382_12_0[0] = get_internal_image(4224);
            images_playerskincarolbike_382_12_0[1] = get_internal_image(4226);
            images_playerskincarolbike_382_12_16[0] = get_internal_image(4227);
            images_playerskincarolbike_382_12_16[1] = get_internal_image(4231);
            images_playerskincarolbike_382_13_0[0] = get_internal_image(3786);
            images_playerskincarolbike_382_13_0[1] = get_internal_image(3787);
            images_playerskincarolbike_382_13_16[0] = get_internal_image(3785);
            images_playerskincarolbike_382_13_16[1] = get_internal_image(3788);
            images_playerskincarolbike_382_14_0[0] = get_internal_image(3790);
            images_playerskincarolbike_382_14_0[1] = get_internal_image(3826);
            images_playerskincarolbike_382_14_16[0] = get_internal_image(3789);
            images_playerskincarolbike_382_14_16[1] = get_internal_image(3827);
            images_playerskincarolbike_382_15_0[0] = get_internal_image(2956);
            images_playerskincarolbike_382_15_0[1] = get_internal_image(2954);
            images_playerskincarolbike_382_15_0[2] = get_internal_image(2957);
            images_playerskincarolbike_382_15_0[3] = get_internal_image(2955);
            images_playerskincarolbike_382_15_0[4] = get_internal_image(2958);
            images_playerskincarolbike_382_15_0[5] = get_internal_image(2959);
            images_playerskincarolbike_382_15_16[0] = get_internal_image(2960);
            images_playerskincarolbike_382_15_16[1] = get_internal_image(2961);
            images_playerskincarolbike_382_15_16[2] = get_internal_image(2962);
            images_playerskincarolbike_382_15_16[3] = get_internal_image(2963);
            images_playerskincarolbike_382_15_16[4] = get_internal_image(2964);
            images_playerskincarolbike_382_15_16[5] = get_internal_image(2966);
            images_playerskincarolbike_382_16_0[0] = get_internal_image(2502);
            images_playerskincarolbike_382_16_0[1] = get_internal_image(2996);
            images_playerskincarolbike_382_16_16[0] = get_internal_image(2987);
            images_playerskincarolbike_382_16_16[1] = get_internal_image(3035);
            images_playerskincarolbike_382_17_0[0] = get_internal_image(3069);
            images_playerskincarolbike_382_17_0[1] = get_internal_image(3992);
            images_playerskincarolbike_382_17_0[2] = get_internal_image(4003);
            images_playerskincarolbike_382_17_0[3] = get_internal_image(3992);
            images_playerskincarolbike_382_20_0[0] = get_internal_image(5070);
            images_playerskincarolbike_382_20_0[1] = get_internal_image(5071);
            images_playerskincarolbike_382_20_16[0] = get_internal_image(5073);
            images_playerskincarolbike_382_20_16[1] = get_internal_image(5084);
            images_playerskincarolbike_382_21_0[0] = get_internal_image(1131);
            images_playerskincarolbike_382_21_0[1] = get_internal_image(1175);
            images_playerskincarolbike_382_21_0[2] = get_internal_image(1197);
            images_playerskincarolbike_382_21_0[3] = get_internal_image(1199);
            images_playerskincarolbike_382_21_0[4] = get_internal_image(1198);
            images_playerskincarolbike_382_21_0[5] = get_internal_image(1200);
            images_playerskincarolbike_382_21_0[6] = get_internal_image(441);
            images_playerskincarolbike_382_21_0[7] = get_internal_image(1201);
            images_playerskincarolbike_382_21_0[8] = get_internal_image(1202);
            images_playerskincarolbike_382_21_16[0] = get_internal_image(1196);
            images_playerskincarolbike_382_21_16[1] = get_internal_image(1203);
            images_playerskincarolbike_382_21_16[2] = get_internal_image(1204);
            images_playerskincarolbike_382_21_16[3] = get_internal_image(1205);
            images_playerskincarolbike_382_21_16[4] = get_internal_image(1206);
            images_playerskincarolbike_382_21_16[5] = get_internal_image(1207);
            images_playerskincarolbike_382_21_16[6] = get_internal_image(1293);
            images_playerskincarolbike_382_21_16[7] = get_internal_image(1453);
            images_playerskincarolbike_382_21_16[8] = get_internal_image(1720);
            images_playerskincarolbike_382_23_0[0] = get_internal_image(3516);
            images_playerskincarolbike_382_23_0[1] = get_internal_image(3517);
            images_playerskincarolbike_382_23_16[0] = get_internal_image(3525);
            images_playerskincarolbike_382_23_16[1] = get_internal_image(3696);
            images_playerskincarolbike_382_24_0[0] = get_internal_image(3790);
            images_playerskincarolbike_382_24_0[1] = get_internal_image(3826);
            images_playerskincarolbike_382_24_16[0] = get_internal_image(3789);
            images_playerskincarolbike_382_24_16[1] = get_internal_image(3827);
            images_playerskincarolbike_382_25_0[0] = get_internal_image(3835);
            images_playerskincarolbike_382_25_0[1] = get_internal_image(3865);
            images_playerskincarolbike_382_25_0[2] = get_internal_image(3848);
            images_playerskincarolbike_382_25_0[3] = get_internal_image(3861);
            images_playerskincarolbike_382_25_0[4] = get_internal_image(3837);
            images_playerskincarolbike_382_25_0[5] = get_internal_image(3863);
            images_playerskincarolbike_382_25_16[0] = get_internal_image(3862);
            images_playerskincarolbike_382_25_16[1] = get_internal_image(3875);
            images_playerskincarolbike_382_25_16[2] = get_internal_image(3876);
            images_playerskincarolbike_382_25_16[3] = get_internal_image(3877);
            images_playerskincarolbike_382_25_16[4] = get_internal_image(3883);
            images_playerskincarolbike_382_25_16[5] = get_internal_image(3884);
            images_playerskincarolbike_382_26_0[0] = get_internal_image(3885);
            images_playerskincarolbike_382_26_0[1] = get_internal_image(3886);
            images_playerskincarolbike_382_26_0[2] = get_internal_image(3911);
            images_playerskincarolbike_382_26_0[3] = get_internal_image(3907);
            images_playerskincarolbike_382_26_0[4] = get_internal_image(3909);
            images_playerskincarolbike_382_26_0[5] = get_internal_image(3912);
            images_playerskincarolbike_382_26_16[0] = get_internal_image(3887);
            images_playerskincarolbike_382_26_16[1] = get_internal_image(3913);
            images_playerskincarolbike_382_26_16[2] = get_internal_image(3914);
            images_playerskincarolbike_382_26_16[3] = get_internal_image(3915);
            images_playerskincarolbike_382_26_16[4] = get_internal_image(3928);
            images_playerskincarolbike_382_26_16[5] = get_internal_image(3945);
            images_playerskincarolbike_382_27_0[0] = get_internal_image(2974);
            images_playerskincarolbike_382_27_0[1] = get_internal_image(2974);
            images_playerskincarolbike_382_27_0[2] = get_internal_image(2974);
            images_playerskincarolbike_382_27_0[3] = get_internal_image(2967);
            images_playerskincarolbike_382_27_16[0] = get_internal_image(2986);
            images_playerskincarolbike_382_27_16[1] = get_internal_image(2986);
            images_playerskincarolbike_382_27_16[2] = get_internal_image(2986);
            images_playerskincarolbike_382_27_16[3] = get_internal_image(2988);
            images_playerskincarolbike_382_29_0[0] = get_internal_image(3946);
            images_playerskincarolbike_382_29_0[1] = get_internal_image(3949);
            images_playerskincarolbike_382_29_0[2] = get_internal_image(3950);
            images_playerskincarolbike_382_29_0[3] = get_internal_image(3951);
            images_playerskincarolbike_382_29_0[4] = get_internal_image(3952);
            images_playerskincarolbike_382_29_0[5] = get_internal_image(3953);
            images_playerskincarolbike_382_29_16[0] = get_internal_image(3947);
            images_playerskincarolbike_382_29_16[1] = get_internal_image(3964);
            images_playerskincarolbike_382_29_16[2] = get_internal_image(3986);
            images_playerskincarolbike_382_29_16[3] = get_internal_image(3988);
            images_playerskincarolbike_382_29_16[4] = get_internal_image(3989);
            images_playerskincarolbike_382_29_16[5] = get_internal_image(3991);
            images_playerskincarolbike_382_30_0[0] = get_internal_image(3702);
            images_playerskincarolbike_382_30_0[1] = get_internal_image(3742);
            images_playerskincarolbike_382_30_0[2] = get_internal_image(3743);
            images_playerskincarolbike_382_30_16[0] = get_internal_image(3531);
            images_playerskincarolbike_382_30_16[1] = get_internal_image(3537);
            images_playerskincarolbike_382_30_16[2] = get_internal_image(3580);
            images_playerskincarolbike_382_31_0[0] = get_internal_image(4007);
            images_playerskincarolbike_382_31_0[1] = get_internal_image(4009);
            images_playerskincarolbike_382_31_16[0] = get_internal_image(4012);
            images_playerskincarolbike_382_31_16[1] = get_internal_image(4019);
            images_playerskincarolbike_382_32_0[0] = get_internal_image(4043);
            images_playerskincarolbike_382_32_0[1] = get_internal_image(4020);
            images_playerskincarolbike_382_32_16[0] = get_internal_image(4050);
            images_playerskincarolbike_382_32_16[1] = get_internal_image(4097);
            images_playerskincarolbike_382_33_0[0] = get_internal_image(4004);
            images_playerskincarolbike_382_33_0[1] = get_internal_image(3859);
            images_playerskincarolbike_382_33_0[2] = get_internal_image(4002);
            images_playerskincarolbike_382_33_0[3] = get_internal_image(3821);
            images_playerskincarolbike_382_33_0[4] = get_internal_image(3496);
            images_playerskincarolbike_382_33_0[5] = get_internal_image(3386);
            images_playerskincarolbike_382_33_0[6] = get_internal_image(3377);
            images_playerskincarolbike_382_33_0[7] = get_internal_image(3376);
            images_playerskincarolbike_382_33_0[8] = get_internal_image(3331);
            images_playerskincarolbike_382_33_16[0] = get_internal_image(4005);
            images_playerskincarolbike_382_33_16[1] = get_internal_image(4006);
            images_playerskincarolbike_382_33_16[2] = get_internal_image(4008);
            images_playerskincarolbike_382_33_16[3] = get_internal_image(4010);
            images_playerskincarolbike_382_33_16[4] = get_internal_image(4011);
            images_playerskincarolbike_382_33_16[5] = get_internal_image(4832);
            images_playerskincarolbike_382_33_16[6] = get_internal_image(4853);
            images_playerskincarolbike_382_33_16[7] = get_internal_image(4870);
            images_playerskincarolbike_382_33_16[8] = get_internal_image(4871);
            images_playerskincarolbike_382_35_0[0] = get_internal_image(4194);
            images_playerskincarolbike_382_35_0[1] = get_internal_image(4223);
            images_playerskincarolbike_382_36_0[0] = get_internal_image(10056);
            images_playerskincarolbike_382_37_0[0] = get_internal_image(5070);
            images_playerskincarolbike_382_37_0[1] = get_internal_image(5071);
            images_playerskincarolbike_382_37_16[0] = get_internal_image(5073);
            images_playerskincarolbike_382_37_16[1] = get_internal_image(5084);
            images_playerskincarolbike_382_39_0[0] = get_internal_image(4236);
            images_playerskincarolbike_382_39_0[1] = get_internal_image(4234);
            images_playerskincarolbike_382_39_0[2] = get_internal_image(4232);
            images_playerskincarolbike_382_39_0[3] = get_internal_image(4233);
            images_playerskincarolbike_382_39_16[0] = get_internal_image(4235);
            images_playerskincarolbike_382_39_16[1] = get_internal_image(4237);
            images_playerskincarolbike_382_39_16[2] = get_internal_image(4238);
            images_playerskincarolbike_382_39_16[3] = get_internal_image(4239);
            images_playerskincarolbike_382_40_0[0] = get_internal_image(3761);
            images_playerskincarolbike_382_40_0[1] = get_internal_image(3762);
            images_playerskincarolbike_382_40_0[2] = get_internal_image(3764);
            images_playerskincarolbike_382_40_0[3] = get_internal_image(608);
            images_playerskincarolbike_382_40_0[4] = get_internal_image(1649);
            images_playerskincarolbike_382_40_0[5] = get_internal_image(3579);
            images_playerskincarolbike_382_40_0[6] = get_internal_image(4552);
            images_playerskincarolbike_382_40_0[7] = get_internal_image(11516);
            images_playerskincarolbike_382_40_0[8] = get_internal_image(11517);
            images_playerskincarolbike_382_40_7[0] = get_internal_image(2504);
            images_playerskincarolbike_382_40_9[0] = get_internal_image(348);
            images_playerskincarolbike_382_40_14[0] = get_internal_image(4227);
            images_playerskincarolbike_382_40_14[1] = get_internal_image(4231);
            images_playerskincarolbike_382_40_30[0] = get_internal_image(4224);
            images_playerskincarolbike_382_40_30[1] = get_internal_image(4226);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 3);
    }
};
FrameObject * create_playerskincarolbike_382(int x, int y)
{
    return new (Active::pool.create()) PlayerSkinCarolBike_382(x, y);
}
static Image* images_playercharactersensor_383_0_0[1];
static Direction direction_playercharactersensor_383_0_0 = {0, 50, 50, 0, 1, images_playercharactersensor_383_0_0, 1};
static Image* images_playercharactersensor_383_0_1[1];
static Direction direction_playercharactersensor_383_0_1 = {1, 50, 50, 0, 1, images_playercharactersensor_383_0_1, 1};
static Image* images_playercharactersensor_383_0_2[1];
static Direction direction_playercharactersensor_383_0_2 = {2, 50, 50, 0, 1, images_playercharactersensor_383_0_2, 1};
static Image* images_playercharactersensor_383_0_3[1];
static Direction direction_playercharactersensor_383_0_3 = {3, 50, 50, 0, 1, images_playercharactersensor_383_0_3, 1};
static Image* images_playercharactersensor_383_0_4[1];
static Direction direction_playercharactersensor_383_0_4 = {4, 50, 50, 0, 1, images_playercharactersensor_383_0_4, 1};
static Image* images_playercharactersensor_383_0_5[1];
static Direction direction_playercharactersensor_383_0_5 = {5, 50, 50, 0, 1, images_playercharactersensor_383_0_5, 1};
static Image* images_playercharactersensor_383_0_6[1];
static Direction direction_playercharactersensor_383_0_6 = {6, 50, 50, 0, 1, images_playercharactersensor_383_0_6, 1};
static Image* images_playercharactersensor_383_0_7[1];
static Direction direction_playercharactersensor_383_0_7 = {7, 50, 50, 0, 1, images_playercharactersensor_383_0_7, 1};
static Image* images_playercharactersensor_383_0_8[1];
static Direction direction_playercharactersensor_383_0_8 = {8, 50, 50, 0, 1, images_playercharactersensor_383_0_8, 1};
static Image* images_playercharactersensor_383_0_9[1];
static Direction direction_playercharactersensor_383_0_9 = {9, 50, 50, 0, 1, images_playercharactersensor_383_0_9, 1};
static Image* images_playercharactersensor_383_0_10[1];
static Direction direction_playercharactersensor_383_0_10 = {10, 50, 50, 0, 1, images_playercharactersensor_383_0_10, 1};
static Image* images_playercharactersensor_383_0_11[1];
static Direction direction_playercharactersensor_383_0_11 = {11, 50, 50, 0, 1, images_playercharactersensor_383_0_11, 1};
static Image* images_playercharactersensor_383_0_12[1];
static Direction direction_playercharactersensor_383_0_12 = {12, 50, 50, 0, 1, images_playercharactersensor_383_0_12, 1};
static Image* images_playercharactersensor_383_0_13[1];
static Direction direction_playercharactersensor_383_0_13 = {13, 50, 50, 0, 1, images_playercharactersensor_383_0_13, 1};
static Image* images_playercharactersensor_383_0_14[1];
static Direction direction_playercharactersensor_383_0_14 = {14, 50, 50, 0, 1, images_playercharactersensor_383_0_14, 1};
static Image* images_playercharactersensor_383_0_15[1];
static Direction direction_playercharactersensor_383_0_15 = {15, 50, 50, 0, 1, images_playercharactersensor_383_0_15, 1};
static Image* images_playercharactersensor_383_0_16[1];
static Direction direction_playercharactersensor_383_0_16 = {16, 50, 50, 0, 1, images_playercharactersensor_383_0_16, 1};
static Image* images_playercharactersensor_383_0_17[1];
static Direction direction_playercharactersensor_383_0_17 = {17, 50, 50, 0, 1, images_playercharactersensor_383_0_17, 1};
static Image* images_playercharactersensor_383_0_18[1];
static Direction direction_playercharactersensor_383_0_18 = {18, 50, 50, 0, 1, images_playercharactersensor_383_0_18, 1};
static Image* images_playercharactersensor_383_0_19[1];
static Direction direction_playercharactersensor_383_0_19 = {19, 50, 50, 0, 1, images_playercharactersensor_383_0_19, 1};
static Image* images_playercharactersensor_383_0_20[1];
static Direction direction_playercharactersensor_383_0_20 = {20, 50, 50, 0, 1, images_playercharactersensor_383_0_20, 1};
static Image* images_playercharactersensor_383_0_21[1];
static Direction direction_playercharactersensor_383_0_21 = {21, 50, 50, 0, 1, images_playercharactersensor_383_0_21, 1};
static Image* images_playercharactersensor_383_0_22[1];
static Direction direction_playercharactersensor_383_0_22 = {22, 50, 50, 0, 1, images_playercharactersensor_383_0_22, 1};
static Image* images_playercharactersensor_383_0_23[1];
static Direction direction_playercharactersensor_383_0_23 = {23, 50, 50, 0, 1, images_playercharactersensor_383_0_23, 1};
static Image* images_playercharactersensor_383_0_24[1];
static Direction direction_playercharactersensor_383_0_24 = {24, 50, 50, 0, 1, images_playercharactersensor_383_0_24, 1};
static Image* images_playercharactersensor_383_0_25[1];
static Direction direction_playercharactersensor_383_0_25 = {25, 50, 50, 0, 1, images_playercharactersensor_383_0_25, 1};
static Image* images_playercharactersensor_383_0_26[1];
static Direction direction_playercharactersensor_383_0_26 = {26, 50, 50, 0, 1, images_playercharactersensor_383_0_26, 1};
static Image* images_playercharactersensor_383_0_27[1];
static Direction direction_playercharactersensor_383_0_27 = {27, 50, 50, 0, 1, images_playercharactersensor_383_0_27, 1};
static Image* images_playercharactersensor_383_0_28[1];
static Direction direction_playercharactersensor_383_0_28 = {28, 50, 50, 0, 1, images_playercharactersensor_383_0_28, 1};
static Image* images_playercharactersensor_383_0_29[1];
static Direction direction_playercharactersensor_383_0_29 = {29, 50, 50, 0, 1, images_playercharactersensor_383_0_29, 1};
static Image* images_playercharactersensor_383_0_30[1];
static Direction direction_playercharactersensor_383_0_30 = {30, 50, 50, 0, 1, images_playercharactersensor_383_0_30, 1};
static Image* images_playercharactersensor_383_0_31[1];
static Direction direction_playercharactersensor_383_0_31 = {31, 50, 50, 0, 1, images_playercharactersensor_383_0_31, 1};
static Animation anim_playercharactersensor_383_0 = {&direction_playercharactersensor_383_0_0, &direction_playercharactersensor_383_0_1, &direction_playercharactersensor_383_0_2, &direction_playercharactersensor_383_0_3, &direction_playercharactersensor_383_0_4, &direction_playercharactersensor_383_0_5, &direction_playercharactersensor_383_0_6, &direction_playercharactersensor_383_0_7, &direction_playercharactersensor_383_0_8, &direction_playercharactersensor_383_0_9, &direction_playercharactersensor_383_0_10, &direction_playercharactersensor_383_0_11, &direction_playercharactersensor_383_0_12, &direction_playercharactersensor_383_0_13, &direction_playercharactersensor_383_0_14, &direction_playercharactersensor_383_0_15, &direction_playercharactersensor_383_0_16, &direction_playercharactersensor_383_0_17, &direction_playercharactersensor_383_0_18, &direction_playercharactersensor_383_0_19, &direction_playercharactersensor_383_0_20, &direction_playercharactersensor_383_0_21, &direction_playercharactersensor_383_0_22, &direction_playercharactersensor_383_0_23, &direction_playercharactersensor_383_0_24, &direction_playercharactersensor_383_0_25, &direction_playercharactersensor_383_0_26, &direction_playercharactersensor_383_0_27, &direction_playercharactersensor_383_0_28, &direction_playercharactersensor_383_0_29, &direction_playercharactersensor_383_0_30, &direction_playercharactersensor_383_0_31};
static Image* images_playercharactersensor_383_1_0[1];
static Direction direction_playercharactersensor_383_1_0 = {0, 50, 50, 0, 1, images_playercharactersensor_383_1_0, 1};
static Image* images_playercharactersensor_383_1_1[1];
static Direction direction_playercharactersensor_383_1_1 = {1, 50, 50, 0, 1, images_playercharactersensor_383_1_1, 1};
static Image* images_playercharactersensor_383_1_2[1];
static Direction direction_playercharactersensor_383_1_2 = {2, 50, 50, 0, 1, images_playercharactersensor_383_1_2, 1};
static Image* images_playercharactersensor_383_1_3[1];
static Direction direction_playercharactersensor_383_1_3 = {3, 50, 50, 0, 1, images_playercharactersensor_383_1_3, 1};
static Image* images_playercharactersensor_383_1_4[1];
static Direction direction_playercharactersensor_383_1_4 = {4, 50, 50, 0, 1, images_playercharactersensor_383_1_4, 1};
static Image* images_playercharactersensor_383_1_5[1];
static Direction direction_playercharactersensor_383_1_5 = {5, 50, 50, 0, 1, images_playercharactersensor_383_1_5, 1};
static Image* images_playercharactersensor_383_1_6[1];
static Direction direction_playercharactersensor_383_1_6 = {6, 50, 50, 0, 1, images_playercharactersensor_383_1_6, 1};
static Image* images_playercharactersensor_383_1_7[1];
static Direction direction_playercharactersensor_383_1_7 = {7, 50, 50, 0, 1, images_playercharactersensor_383_1_7, 1};
static Image* images_playercharactersensor_383_1_8[1];
static Direction direction_playercharactersensor_383_1_8 = {8, 50, 50, 0, 1, images_playercharactersensor_383_1_8, 1};
static Image* images_playercharactersensor_383_1_9[1];
static Direction direction_playercharactersensor_383_1_9 = {9, 50, 50, 0, 1, images_playercharactersensor_383_1_9, 1};
static Image* images_playercharactersensor_383_1_10[1];
static Direction direction_playercharactersensor_383_1_10 = {10, 50, 50, 0, 1, images_playercharactersensor_383_1_10, 1};
static Image* images_playercharactersensor_383_1_11[1];
static Direction direction_playercharactersensor_383_1_11 = {11, 50, 50, 0, 1, images_playercharactersensor_383_1_11, 1};
static Image* images_playercharactersensor_383_1_12[1];
static Direction direction_playercharactersensor_383_1_12 = {12, 50, 50, 0, 1, images_playercharactersensor_383_1_12, 1};
static Image* images_playercharactersensor_383_1_13[1];
static Direction direction_playercharactersensor_383_1_13 = {13, 50, 50, 0, 1, images_playercharactersensor_383_1_13, 1};
static Image* images_playercharactersensor_383_1_14[1];
static Direction direction_playercharactersensor_383_1_14 = {14, 50, 50, 0, 1, images_playercharactersensor_383_1_14, 1};
static Image* images_playercharactersensor_383_1_15[1];
static Direction direction_playercharactersensor_383_1_15 = {15, 50, 50, 0, 1, images_playercharactersensor_383_1_15, 1};
static Image* images_playercharactersensor_383_1_16[1];
static Direction direction_playercharactersensor_383_1_16 = {16, 50, 50, 0, 1, images_playercharactersensor_383_1_16, 1};
static Image* images_playercharactersensor_383_1_17[1];
static Direction direction_playercharactersensor_383_1_17 = {17, 50, 50, 0, 1, images_playercharactersensor_383_1_17, 1};
static Image* images_playercharactersensor_383_1_18[1];
static Direction direction_playercharactersensor_383_1_18 = {18, 50, 50, 0, 1, images_playercharactersensor_383_1_18, 1};
static Image* images_playercharactersensor_383_1_19[1];
static Direction direction_playercharactersensor_383_1_19 = {19, 50, 50, 0, 1, images_playercharactersensor_383_1_19, 1};
static Image* images_playercharactersensor_383_1_20[1];
static Direction direction_playercharactersensor_383_1_20 = {20, 50, 50, 0, 1, images_playercharactersensor_383_1_20, 1};
static Image* images_playercharactersensor_383_1_21[1];
static Direction direction_playercharactersensor_383_1_21 = {21, 50, 50, 0, 1, images_playercharactersensor_383_1_21, 1};
static Image* images_playercharactersensor_383_1_22[1];
static Direction direction_playercharactersensor_383_1_22 = {22, 50, 50, 0, 1, images_playercharactersensor_383_1_22, 1};
static Image* images_playercharactersensor_383_1_23[1];
static Direction direction_playercharactersensor_383_1_23 = {23, 50, 50, 0, 1, images_playercharactersensor_383_1_23, 1};
static Image* images_playercharactersensor_383_1_24[1];
static Direction direction_playercharactersensor_383_1_24 = {24, 50, 50, 0, 1, images_playercharactersensor_383_1_24, 1};
static Image* images_playercharactersensor_383_1_25[1];
static Direction direction_playercharactersensor_383_1_25 = {25, 50, 50, 0, 1, images_playercharactersensor_383_1_25, 1};
static Image* images_playercharactersensor_383_1_26[1];
static Direction direction_playercharactersensor_383_1_26 = {26, 50, 50, 0, 1, images_playercharactersensor_383_1_26, 1};
static Image* images_playercharactersensor_383_1_27[1];
static Direction direction_playercharactersensor_383_1_27 = {27, 50, 50, 0, 1, images_playercharactersensor_383_1_27, 1};
static Image* images_playercharactersensor_383_1_28[1];
static Direction direction_playercharactersensor_383_1_28 = {28, 50, 50, 0, 1, images_playercharactersensor_383_1_28, 1};
static Image* images_playercharactersensor_383_1_29[1];
static Direction direction_playercharactersensor_383_1_29 = {29, 50, 50, 0, 1, images_playercharactersensor_383_1_29, 1};
static Image* images_playercharactersensor_383_1_30[1];
static Direction direction_playercharactersensor_383_1_30 = {30, 50, 50, 0, 1, images_playercharactersensor_383_1_30, 1};
static Image* images_playercharactersensor_383_1_31[1];
static Direction direction_playercharactersensor_383_1_31 = {31, 50, 50, 0, 1, images_playercharactersensor_383_1_31, 1};
static Animation anim_playercharactersensor_383_1 = {&direction_playercharactersensor_383_1_0, &direction_playercharactersensor_383_1_1, &direction_playercharactersensor_383_1_2, &direction_playercharactersensor_383_1_3, &direction_playercharactersensor_383_1_4, &direction_playercharactersensor_383_1_5, &direction_playercharactersensor_383_1_6, &direction_playercharactersensor_383_1_7, &direction_playercharactersensor_383_1_8, &direction_playercharactersensor_383_1_9, &direction_playercharactersensor_383_1_10, &direction_playercharactersensor_383_1_11, &direction_playercharactersensor_383_1_12, &direction_playercharactersensor_383_1_13, &direction_playercharactersensor_383_1_14, &direction_playercharactersensor_383_1_15, &direction_playercharactersensor_383_1_16, &direction_playercharactersensor_383_1_17, &direction_playercharactersensor_383_1_18, &direction_playercharactersensor_383_1_19, &direction_playercharactersensor_383_1_20, &direction_playercharactersensor_383_1_21, &direction_playercharactersensor_383_1_22, &direction_playercharactersensor_383_1_23, &direction_playercharactersensor_383_1_24, &direction_playercharactersensor_383_1_25, &direction_playercharactersensor_383_1_26, &direction_playercharactersensor_383_1_27, &direction_playercharactersensor_383_1_28, &direction_playercharactersensor_383_1_29, &direction_playercharactersensor_383_1_30, &direction_playercharactersensor_383_1_31};
static Animation * anim_array_playercharactersensor_383[2] = {&anim_playercharactersensor_383_0, &anim_playercharactersensor_383_1};
static Animations anim_playercharactersensor_383 = {2, &anim_array_playercharactersensor_383[0]};
static bool anim_playercharactersensor_383_initialized;
class PlayerCharacterSensor_383 : public Active
{
public:
    PlayerCharacterSensor_383(int x, int y) : Active(x, y, PlayerCharacterSensor_383_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_CharacterSensor", 22);
#endif
        set_visible(false);
        this->animations = &anim_playercharactersensor_383;
        if (!anim_playercharactersensor_383_initialized) {
            anim_playercharactersensor_383_initialized = true;
            images_playercharactersensor_383_0_0[0] = get_internal_image(8210);
            images_playercharactersensor_383_0_1[0] = get_internal_image(8209);
            images_playercharactersensor_383_0_2[0] = get_internal_image(8211);
            images_playercharactersensor_383_0_3[0] = get_internal_image(8212);
            images_playercharactersensor_383_0_4[0] = get_internal_image(8213);
            images_playercharactersensor_383_0_5[0] = get_internal_image(8214);
            images_playercharactersensor_383_0_6[0] = get_internal_image(8215);
            images_playercharactersensor_383_0_7[0] = get_internal_image(8216);
            images_playercharactersensor_383_0_8[0] = get_internal_image(8217);
            images_playercharactersensor_383_0_9[0] = get_internal_image(8231);
            images_playercharactersensor_383_0_10[0] = get_internal_image(8230);
            images_playercharactersensor_383_0_11[0] = get_internal_image(8229);
            images_playercharactersensor_383_0_12[0] = get_internal_image(8228);
            images_playercharactersensor_383_0_13[0] = get_internal_image(8227);
            images_playercharactersensor_383_0_14[0] = get_internal_image(8226);
            images_playercharactersensor_383_0_15[0] = get_internal_image(8225);
            images_playercharactersensor_383_0_16[0] = get_internal_image(8210);
            images_playercharactersensor_383_0_17[0] = get_internal_image(8224);
            images_playercharactersensor_383_0_18[0] = get_internal_image(8223);
            images_playercharactersensor_383_0_19[0] = get_internal_image(8222);
            images_playercharactersensor_383_0_20[0] = get_internal_image(8221);
            images_playercharactersensor_383_0_21[0] = get_internal_image(8220);
            images_playercharactersensor_383_0_22[0] = get_internal_image(8219);
            images_playercharactersensor_383_0_23[0] = get_internal_image(8218);
            images_playercharactersensor_383_0_24[0] = get_internal_image(8233);
            images_playercharactersensor_383_0_25[0] = get_internal_image(8234);
            images_playercharactersensor_383_0_26[0] = get_internal_image(8235);
            images_playercharactersensor_383_0_27[0] = get_internal_image(8236);
            images_playercharactersensor_383_0_28[0] = get_internal_image(8237);
            images_playercharactersensor_383_0_29[0] = get_internal_image(8238);
            images_playercharactersensor_383_0_30[0] = get_internal_image(8239);
            images_playercharactersensor_383_0_31[0] = get_internal_image(8240);
            images_playercharactersensor_383_1_0[0] = get_internal_image(1498);
            images_playercharactersensor_383_1_1[0] = get_internal_image(716);
            images_playercharactersensor_383_1_2[0] = get_internal_image(1499);
            images_playercharactersensor_383_1_3[0] = get_internal_image(1500);
            images_playercharactersensor_383_1_4[0] = get_internal_image(1623);
            images_playercharactersensor_383_1_5[0] = get_internal_image(1626);
            images_playercharactersensor_383_1_6[0] = get_internal_image(1636);
            images_playercharactersensor_383_1_7[0] = get_internal_image(1652);
            images_playercharactersensor_383_1_8[0] = get_internal_image(1653);
            images_playercharactersensor_383_1_9[0] = get_internal_image(1669);
            images_playercharactersensor_383_1_10[0] = get_internal_image(1670);
            images_playercharactersensor_383_1_11[0] = get_internal_image(1671);
            images_playercharactersensor_383_1_12[0] = get_internal_image(1672);
            images_playercharactersensor_383_1_13[0] = get_internal_image(1673);
            images_playercharactersensor_383_1_14[0] = get_internal_image(1675);
            images_playercharactersensor_383_1_15[0] = get_internal_image(1676);
            images_playercharactersensor_383_1_16[0] = get_internal_image(1677);
            images_playercharactersensor_383_1_17[0] = get_internal_image(716);
            images_playercharactersensor_383_1_18[0] = get_internal_image(1499);
            images_playercharactersensor_383_1_19[0] = get_internal_image(1500);
            images_playercharactersensor_383_1_20[0] = get_internal_image(1623);
            images_playercharactersensor_383_1_21[0] = get_internal_image(1626);
            images_playercharactersensor_383_1_22[0] = get_internal_image(1636);
            images_playercharactersensor_383_1_23[0] = get_internal_image(1652);
            images_playercharactersensor_383_1_24[0] = get_internal_image(1653);
            images_playercharactersensor_383_1_25[0] = get_internal_image(1669);
            images_playercharactersensor_383_1_26[0] = get_internal_image(1670);
            images_playercharactersensor_383_1_27[0] = get_internal_image(1671);
            images_playercharactersensor_383_1_28[0] = get_internal_image(1672);
            images_playercharactersensor_383_1_29[0] = get_internal_image(1673);
            images_playercharactersensor_383_1_30[0] = get_internal_image(1675);
            images_playercharactersensor_383_1_31[0] = get_internal_image(1676);
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
FrameObject * create_playercharactersensor_383(int x, int y)
{
    return new (Active::pool.create()) PlayerCharacterSensor_383(x, y);
}
static Image* images_mastergroupsa_384_0_0[1];
static Direction direction_mastergroupsa_384_0_0 = {0, 50, 50, 0, 1, images_mastergroupsa_384_0_0, 1};
static Animation anim_mastergroupsa_384_0 = {&direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, NULL, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0, &direction_mastergroupsa_384_0_0};
static Animation * anim_array_mastergroupsa_384[1] = {&anim_mastergroupsa_384_0};
static Animations anim_mastergroupsa_384 = {1, &anim_array_mastergroupsa_384[0]};
static bool anim_mastergroupsa_384_initialized;
class MasterGroupsA_384 : public Active
{
public:
    MasterGroupsA_384(int x, int y) : Active(x, y, MasterGroupsA_384_type)
    {
        // qualifiers: 14, 15, 16, 17, 18, 19, 20
#ifndef NDEBUG
        name = std::string("Master_Groups_A", 15);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_mastergroupsa_384;
        if (!anim_mastergroupsa_384_initialized) {
            anim_mastergroupsa_384_initialized = true;
            images_mastergroupsa_384_0_0[0] = get_internal_image(198);
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
FrameObject * create_mastergroupsa_384(int x, int y)
{
    return new (Active::pool.create()) MasterGroupsA_384(x, y);
}
static Image* images_mastergroupsb_385_0_0[1];
static Direction direction_mastergroupsb_385_0_0 = {0, 50, 50, 0, 1, images_mastergroupsb_385_0_0, 1};
static Animation anim_mastergroupsb_385_0 = {&direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, NULL, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0, &direction_mastergroupsb_385_0_0};
static Animation * anim_array_mastergroupsb_385[1] = {&anim_mastergroupsb_385_0};
static Animations anim_mastergroupsb_385 = {1, &anim_array_mastergroupsb_385[0]};
static bool anim_mastergroupsb_385_initialized;
class MasterGroupsB_385 : public Active
{
public:
    MasterGroupsB_385(int x, int y) : Active(x, y, MasterGroupsB_385_type)
    {
        // qualifiers: 4, 6, 8, 9, 10, 21, 22, 23
#ifndef NDEBUG
        name = std::string("Master_Groups_B", 15);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_mastergroupsb_385;
        if (!anim_mastergroupsb_385_initialized) {
            anim_mastergroupsb_385_initialized = true;
            images_mastergroupsb_385_0_0[0] = get_internal_image(198);
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
FrameObject * create_mastergroupsb_385(int x, int y)
{
    return new (Active::pool.create()) MasterGroupsB_385(x, y);
}
static Image* images_generalanglechanger75_386_0_0[1];
static Direction direction_generalanglechanger75_386_0_0 = {0, 50, 50, 0, 1, images_generalanglechanger75_386_0_0, 1};
static Animation anim_generalanglechanger75_386_0 = {&direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, NULL, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0, &direction_generalanglechanger75_386_0_0};
static Animation * anim_array_generalanglechanger75_386[1] = {&anim_generalanglechanger75_386_0};
static Animations anim_generalanglechanger75_386 = {1, &anim_array_generalanglechanger75_386[0]};
static bool anim_generalanglechanger75_386_initialized;
class GeneralAngleChanger75_386 : public Active
{
public:
    GeneralAngleChanger75_386(int x, int y) : Active(x, y, GeneralAngleChanger75_386_type)
    {
        // qualifiers: 10
#ifndef NDEBUG
        name = std::string("General_AngleChanger_75", 23);
#endif
        set_visible(false);
        this->animations = &anim_generalanglechanger75_386;
        if (!anim_generalanglechanger75_386_initialized) {
            anim_generalanglechanger75_386_initialized = true;
            images_generalanglechanger75_386_0_0[0] = get_internal_image(97);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_50_general_anglechanger_75.value;
        if (!global_data_50_general_anglechanger_75.init) {
            alterables->values.set(0, 60);
            alterables->values.set(1, 90);
            alterables->values.set(2, 75);
            global_data_50_general_anglechanger_75.init = true;
        }
    }
};
FrameObject * create_generalanglechanger75_386(int x, int y)
{
    return new (Active::pool.create()) GeneralAngleChanger75_386(x, y);
}
static Image* images_playeractionvaluesa_387_0_0[1];
static Direction direction_playeractionvaluesa_387_0_0 = {0, 50, 50, 0, 1, images_playeractionvaluesa_387_0_0, 1};
static Animation anim_playeractionvaluesa_387_0 = {&direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, NULL, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0, &direction_playeractionvaluesa_387_0_0};
static Animation * anim_array_playeractionvaluesa_387[1] = {&anim_playeractionvaluesa_387_0};
static Animations anim_playeractionvaluesa_387 = {1, &anim_array_playeractionvaluesa_387[0]};
static bool anim_playeractionvaluesa_387_initialized;
class PlayerActionValuesA_387 : public Active
{
public:
    PlayerActionValuesA_387(int x, int y) : Active(x, y, PlayerActionValuesA_387_type)
    {
        // qualifiers: 14, 15, 16, 17, 18
#ifndef NDEBUG
        name = std::string("Player_ActionValuesA", 20);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_playeractionvaluesa_387;
        if (!anim_playeractionvaluesa_387_initialized) {
            anim_playeractionvaluesa_387_initialized = true;
            images_playeractionvaluesa_387_0_0[0] = get_internal_image(1126);
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
FrameObject * create_playeractionvaluesa_387(int x, int y)
{
    return new (Active::pool.create()) PlayerActionValuesA_387(x, y);
}
static Image* images_playeractionvaluesb_388_0_0[1];
static Direction direction_playeractionvaluesb_388_0_0 = {0, 50, 50, 0, 1, images_playeractionvaluesb_388_0_0, 1};
static Animation anim_playeractionvaluesb_388_0 = {&direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, NULL, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0, &direction_playeractionvaluesb_388_0_0};
static Animation * anim_array_playeractionvaluesb_388[1] = {&anim_playeractionvaluesb_388_0};
static Animations anim_playeractionvaluesb_388 = {1, &anim_array_playeractionvaluesb_388[0]};
static bool anim_playeractionvaluesb_388_initialized;
class PlayerActionValuesB_388 : public Active
{
public:
    PlayerActionValuesB_388(int x, int y) : Active(x, y, PlayerActionValuesB_388_type)
    {
        // qualifiers: 14, 15, 16, 17, 18
#ifndef NDEBUG
        name = std::string("Player_ActionValuesB", 20);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_playeractionvaluesb_388;
        if (!anim_playeractionvaluesb_388_initialized) {
            anim_playeractionvaluesb_388_initialized = true;
            images_playeractionvaluesb_388_0_0[0] = get_internal_image(1132);
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
FrameObject * create_playeractionvaluesb_388(int x, int y)
{
    return new (Active::pool.create()) PlayerActionValuesB_388(x, y);
}
static Image* images_player_389_0_0[1];
static Direction direction_player_389_0_0 = {0, 50, 50, 0, 1, images_player_389_0_0, 1};
static Animation anim_player_389_0 = {&direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, NULL, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0, &direction_player_389_0_0};
static Animation * anim_array_player_389[1] = {&anim_player_389_0};
static Animations anim_player_389 = {1, &anim_array_player_389[0]};
static bool anim_player_389_initialized;
class Player_389 : public Active
{
public:
    Player_389(int x, int y) : Active(x, y, Player_389_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player", 6);
#endif
        set_visible(false);
        this->animations = &anim_player_389;
        if (!anim_player_389_initialized) {
            anim_player_389_initialized = true;
            images_player_389_0_0[0] = get_internal_image(1391);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 2);
    }
};
FrameObject * create_player_389(int x, int y)
{
    return new (Active::pool.create()) Player_389(x, y);
}
static Image* images_playersensorleft_390_0_0[1];
static Direction direction_playersensorleft_390_0_0 = {0, 50, 50, 0, 1, images_playersensorleft_390_0_0, 1};
static Animation anim_playersensorleft_390_0 = {&direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, NULL, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0, &direction_playersensorleft_390_0_0};
static Animation * anim_array_playersensorleft_390[1] = {&anim_playersensorleft_390_0};
static Animations anim_playersensorleft_390 = {1, &anim_array_playersensorleft_390[0]};
static bool anim_playersensorleft_390_initialized;
class PlayerSensorLeft_390 : public Active
{
public:
    PlayerSensorLeft_390(int x, int y) : Active(x, y, PlayerSensorLeft_390_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorLeft", 17);
#endif
        set_visible(false);
        this->animations = &anim_playersensorleft_390;
        if (!anim_playersensorleft_390_initialized) {
            anim_playersensorleft_390_initialized = true;
            images_playersensorleft_390_0_0[0] = get_internal_image(7);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_51_player_sensorleft.value;
        if (!global_data_51_player_sensorleft.init) {
            global_data_51_player_sensorleft.init = true;
        }
    }
};
FrameObject * create_playersensorleft_390(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorLeft_390(x, y);
}
static Image* images_playersensorleftbig_391_0_0[1];
static Direction direction_playersensorleftbig_391_0_0 = {0, 50, 50, 0, 1, images_playersensorleftbig_391_0_0, 1};
static Animation anim_playersensorleftbig_391_0 = {&direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, NULL, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0, &direction_playersensorleftbig_391_0_0};
static Animation * anim_array_playersensorleftbig_391[1] = {&anim_playersensorleftbig_391_0};
static Animations anim_playersensorleftbig_391 = {1, &anim_array_playersensorleftbig_391[0]};
static bool anim_playersensorleftbig_391_initialized;
class PlayerSensorLeftBig_391 : public Active
{
public:
    PlayerSensorLeftBig_391(int x, int y) : Active(x, y, PlayerSensorLeftBig_391_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorLeftBig", 20);
#endif
        set_visible(false);
        this->animations = &anim_playersensorleftbig_391;
        if (!anim_playersensorleftbig_391_initialized) {
            anim_playersensorleftbig_391_initialized = true;
            images_playersensorleftbig_391_0_0[0] = get_internal_image(10);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_52_player_sensorleftbig.value;
        if (!global_data_52_player_sensorleftbig.init) {
            global_data_52_player_sensorleftbig.init = true;
        }
    }
};
FrameObject * create_playersensorleftbig_391(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorLeftBig_391(x, y);
}
static Image* images_playersensorright_392_0_0[1];
static Direction direction_playersensorright_392_0_0 = {0, 50, 50, 0, 1, images_playersensorright_392_0_0, 1};
static Animation anim_playersensorright_392_0 = {&direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, NULL, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0, &direction_playersensorright_392_0_0};
static Animation * anim_array_playersensorright_392[1] = {&anim_playersensorright_392_0};
static Animations anim_playersensorright_392 = {1, &anim_array_playersensorright_392[0]};
static bool anim_playersensorright_392_initialized;
class PlayerSensorRight_392 : public Active
{
public:
    PlayerSensorRight_392(int x, int y) : Active(x, y, PlayerSensorRight_392_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorRight", 18);
#endif
        set_visible(false);
        this->animations = &anim_playersensorright_392;
        if (!anim_playersensorright_392_initialized) {
            anim_playersensorright_392_initialized = true;
            images_playersensorright_392_0_0[0] = get_internal_image(12);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_53_player_sensorright.value;
        if (!global_data_53_player_sensorright.init) {
            global_data_53_player_sensorright.init = true;
        }
    }
};
FrameObject * create_playersensorright_392(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorRight_392(x, y);
}
static Image* images_playersensorrightbig_393_0_0[1];
static Direction direction_playersensorrightbig_393_0_0 = {0, 50, 50, 0, 1, images_playersensorrightbig_393_0_0, 1};
static Animation anim_playersensorrightbig_393_0 = {&direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, NULL, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0, &direction_playersensorrightbig_393_0_0};
static Animation * anim_array_playersensorrightbig_393[1] = {&anim_playersensorrightbig_393_0};
static Animations anim_playersensorrightbig_393 = {1, &anim_array_playersensorrightbig_393[0]};
static bool anim_playersensorrightbig_393_initialized;
class PlayerSensorRightBig_393 : public Active
{
public:
    PlayerSensorRightBig_393(int x, int y) : Active(x, y, PlayerSensorRightBig_393_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorRightBig", 21);
#endif
        set_visible(false);
        this->animations = &anim_playersensorrightbig_393;
        if (!anim_playersensorrightbig_393_initialized) {
            anim_playersensorrightbig_393_initialized = true;
            images_playersensorrightbig_393_0_0[0] = get_internal_image(13);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_54_player_sensorrightbig.value;
        if (!global_data_54_player_sensorrightbig.init) {
            global_data_54_player_sensorrightbig.init = true;
        }
    }
};
FrameObject * create_playersensorrightbig_393(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorRightBig_393(x, y);
}
static Image* images_playersensortop_394_0_0[1];
static Direction direction_playersensortop_394_0_0 = {0, 50, 50, 0, 1, images_playersensortop_394_0_0, 1};
static Animation anim_playersensortop_394_0 = {&direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, NULL, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0, &direction_playersensortop_394_0_0};
static Animation * anim_array_playersensortop_394[1] = {&anim_playersensortop_394_0};
static Animations anim_playersensortop_394 = {1, &anim_array_playersensortop_394[0]};
static bool anim_playersensortop_394_initialized;
class PlayerSensorTop_394 : public Active
{
public:
    PlayerSensorTop_394(int x, int y) : Active(x, y, PlayerSensorTop_394_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorTop", 16);
#endif
        set_visible(false);
        this->animations = &anim_playersensortop_394;
        if (!anim_playersensortop_394_initialized) {
            anim_playersensortop_394_initialized = true;
            images_playersensortop_394_0_0[0] = get_internal_image(15);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_55_player_sensortop.value;
        if (!global_data_55_player_sensortop.init) {
            global_data_55_player_sensortop.init = true;
        }
    }
};
FrameObject * create_playersensortop_394(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorTop_394(x, y);
}
static Image* images_playersensortopbig_395_0_0[1];
static Direction direction_playersensortopbig_395_0_0 = {0, 50, 50, 0, 1, images_playersensortopbig_395_0_0, 1};
static Animation anim_playersensortopbig_395_0 = {&direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, NULL, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0, &direction_playersensortopbig_395_0_0};
static Animation * anim_array_playersensortopbig_395[1] = {&anim_playersensortopbig_395_0};
static Animations anim_playersensortopbig_395 = {1, &anim_array_playersensortopbig_395[0]};
static bool anim_playersensortopbig_395_initialized;
class PlayerSensorTopBig_395 : public Active
{
public:
    PlayerSensorTopBig_395(int x, int y) : Active(x, y, PlayerSensorTopBig_395_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorTopBig", 19);
#endif
        set_visible(false);
        this->animations = &anim_playersensortopbig_395;
        if (!anim_playersensortopbig_395_initialized) {
            anim_playersensortopbig_395_initialized = true;
            images_playersensortopbig_395_0_0[0] = get_internal_image(17);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_56_player_sensortopbig.value;
        if (!global_data_56_player_sensortopbig.init) {
            global_data_56_player_sensortopbig.init = true;
        }
    }
};
FrameObject * create_playersensortopbig_395(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorTopBig_395(x, y);
}
static Image* images_playersensorbottom_396_0_0[1];
static Direction direction_playersensorbottom_396_0_0 = {0, 50, 50, 0, 1, images_playersensorbottom_396_0_0, 1};
static Animation anim_playersensorbottom_396_0 = {&direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, NULL, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0, &direction_playersensorbottom_396_0_0};
static Animation * anim_array_playersensorbottom_396[1] = {&anim_playersensorbottom_396_0};
static Animations anim_playersensorbottom_396 = {1, &anim_array_playersensorbottom_396[0]};
static bool anim_playersensorbottom_396_initialized;
class PlayerSensorBottom_396 : public Active
{
public:
    PlayerSensorBottom_396(int x, int y) : Active(x, y, PlayerSensorBottom_396_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorBottom", 19);
#endif
        set_visible(false);
        this->animations = &anim_playersensorbottom_396;
        if (!anim_playersensorbottom_396_initialized) {
            anim_playersensorbottom_396_initialized = true;
            images_playersensorbottom_396_0_0[0] = get_internal_image(55);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_57_player_sensorbottom.value;
        if (!global_data_57_player_sensorbottom.init) {
            global_data_57_player_sensorbottom.init = true;
        }
    }
};
FrameObject * create_playersensorbottom_396(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorBottom_396(x, y);
}
static Image* images_playersensorbottombig_397_0_0[1];
static Direction direction_playersensorbottombig_397_0_0 = {0, 50, 50, 0, 1, images_playersensorbottombig_397_0_0, 1};
static Animation anim_playersensorbottombig_397_0 = {&direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, NULL, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0, &direction_playersensorbottombig_397_0_0};
static Animation * anim_array_playersensorbottombig_397[1] = {&anim_playersensorbottombig_397_0};
static Animations anim_playersensorbottombig_397 = {1, &anim_array_playersensorbottombig_397[0]};
static bool anim_playersensorbottombig_397_initialized;
class PlayerSensorBottomBig_397 : public Active
{
public:
    PlayerSensorBottomBig_397(int x, int y) : Active(x, y, PlayerSensorBottomBig_397_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorBottomBig", 22);
#endif
        set_visible(false);
        this->animations = &anim_playersensorbottombig_397;
        if (!anim_playersensorbottombig_397_initialized) {
            anim_playersensorbottombig_397_initialized = true;
            images_playersensorbottombig_397_0_0[0] = get_internal_image(79);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_58_player_sensorbottombig.value;
        if (!global_data_58_player_sensorbottombig.init) {
            global_data_58_player_sensorbottombig.init = true;
        }
    }
};
FrameObject * create_playersensorbottombig_397(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorBottomBig_397(x, y);
}
static Image* images_playersensorslopes_398_0_0[1];
static Direction direction_playersensorslopes_398_0_0 = {0, 50, 50, 0, 1, images_playersensorslopes_398_0_0, 1};
static Animation anim_playersensorslopes_398_0 = {&direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, NULL, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0, &direction_playersensorslopes_398_0_0};
static Animation * anim_array_playersensorslopes_398[1] = {&anim_playersensorslopes_398_0};
static Animations anim_playersensorslopes_398 = {1, &anim_array_playersensorslopes_398[0]};
static bool anim_playersensorslopes_398_initialized;
class PlayerSensorSlopes_398 : public Active
{
public:
    PlayerSensorSlopes_398(int x, int y) : Active(x, y, PlayerSensorSlopes_398_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorSlopes", 19);
#endif
        set_visible(false);
        this->animations = &anim_playersensorslopes_398;
        if (!anim_playersensorslopes_398_initialized) {
            anim_playersensorslopes_398_initialized = true;
            images_playersensorslopes_398_0_0[0] = get_internal_image(11);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_59_player_sensorslopes.value;
        if (!global_data_59_player_sensorslopes.init) {
            global_data_59_player_sensorslopes.init = true;
        }
    }
};
FrameObject * create_playersensorslopes_398(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorSlopes_398(x, y);
}
static Image* images_playersensorplatform_399_0_0[1];
static Direction direction_playersensorplatform_399_0_0 = {0, 50, 50, 0, 1, images_playersensorplatform_399_0_0, 1};
static Animation anim_playersensorplatform_399_0 = {&direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, NULL, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0, &direction_playersensorplatform_399_0_0};
static Animation * anim_array_playersensorplatform_399[1] = {&anim_playersensorplatform_399_0};
static Animations anim_playersensorplatform_399 = {1, &anim_array_playersensorplatform_399[0]};
static bool anim_playersensorplatform_399_initialized;
class PlayerSensorPlatform_399 : public Active
{
public:
    PlayerSensorPlatform_399(int x, int y) : Active(x, y, PlayerSensorPlatform_399_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorPlatform", 21);
#endif
        set_visible(false);
        this->animations = &anim_playersensorplatform_399;
        if (!anim_playersensorplatform_399_initialized) {
            anim_playersensorplatform_399_initialized = true;
            images_playersensorplatform_399_0_0[0] = get_internal_image(11);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_60_player_sensorplatform.value;
        if (!global_data_60_player_sensorplatform.init) {
            global_data_60_player_sensorplatform.init = true;
        }
    }
};
FrameObject * create_playersensorplatform_399(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorPlatform_399(x, y);
}
static Image* images_playersensorleftangle_400_0_0[1];
static Direction direction_playersensorleftangle_400_0_0 = {0, 50, 50, 0, 1, images_playersensorleftangle_400_0_0, 1};
static Animation anim_playersensorleftangle_400_0 = {&direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, NULL, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0, &direction_playersensorleftangle_400_0_0};
static Animation * anim_array_playersensorleftangle_400[1] = {&anim_playersensorleftangle_400_0};
static Animations anim_playersensorleftangle_400 = {1, &anim_array_playersensorleftangle_400[0]};
static bool anim_playersensorleftangle_400_initialized;
class PlayerSensorLeftAngle_400 : public Active
{
public:
    PlayerSensorLeftAngle_400(int x, int y) : Active(x, y, PlayerSensorLeftAngle_400_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorLeftAngle", 22);
#endif
        set_visible(false);
        this->animations = &anim_playersensorleftangle_400;
        if (!anim_playersensorleftangle_400_initialized) {
            anim_playersensorleftangle_400_initialized = true;
            images_playersensorleftangle_400_0_0[0] = get_internal_image(14);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_61_player_sensorleftangle.value;
        if (!global_data_61_player_sensorleftangle.init) {
            global_data_61_player_sensorleftangle.init = true;
        }
    }
};
FrameObject * create_playersensorleftangle_400(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorLeftAngle_400(x, y);
}
static Image* images_playersensorrightangle_401_0_0[1];
static Direction direction_playersensorrightangle_401_0_0 = {0, 50, 50, 0, 1, images_playersensorrightangle_401_0_0, 1};
static Animation anim_playersensorrightangle_401_0 = {&direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, NULL, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0, &direction_playersensorrightangle_401_0_0};
static Animation * anim_array_playersensorrightangle_401[1] = {&anim_playersensorrightangle_401_0};
static Animations anim_playersensorrightangle_401 = {1, &anim_array_playersensorrightangle_401[0]};
static bool anim_playersensorrightangle_401_initialized;
class PlayerSensorRightAngle_401 : public Active
{
public:
    PlayerSensorRightAngle_401(int x, int y) : Active(x, y, PlayerSensorRightAngle_401_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorRightAngle", 23);
#endif
        set_visible(false);
        this->animations = &anim_playersensorrightangle_401;
        if (!anim_playersensorrightangle_401_initialized) {
            anim_playersensorrightangle_401_initialized = true;
            images_playersensorrightangle_401_0_0[0] = get_internal_image(14);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_62_player_sensorrightangle.value;
        if (!global_data_62_player_sensorrightangle.init) {
            global_data_62_player_sensorrightangle.init = true;
        }
    }
};
FrameObject * create_playersensorrightangle_401(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorRightAngle_401(x, y);
}
static Image* images_playersensorleftedge_402_0_0[1];
static Direction direction_playersensorleftedge_402_0_0 = {0, 50, 50, 0, 1, images_playersensorleftedge_402_0_0, 1};
static Image* images_playersensorleftedge_402_0_4[1];
static Direction direction_playersensorleftedge_402_0_4 = {4, 50, 50, 0, 1, images_playersensorleftedge_402_0_4, 1};
static Image* images_playersensorleftedge_402_0_8[1];
static Direction direction_playersensorleftedge_402_0_8 = {8, 50, 50, 0, 1, images_playersensorleftedge_402_0_8, 1};
static Image* images_playersensorleftedge_402_0_12[1];
static Direction direction_playersensorleftedge_402_0_12 = {12, 50, 50, 0, 1, images_playersensorleftedge_402_0_12, 1};
static Image* images_playersensorleftedge_402_0_16[1];
static Direction direction_playersensorleftedge_402_0_16 = {16, 50, 50, 0, 1, images_playersensorleftedge_402_0_16, 1};
static Image* images_playersensorleftedge_402_0_20[1];
static Direction direction_playersensorleftedge_402_0_20 = {20, 50, 50, 0, 1, images_playersensorleftedge_402_0_20, 1};
static Image* images_playersensorleftedge_402_0_24[1];
static Direction direction_playersensorleftedge_402_0_24 = {24, 50, 50, 0, 1, images_playersensorleftedge_402_0_24, 1};
static Image* images_playersensorleftedge_402_0_28[1];
static Direction direction_playersensorleftedge_402_0_28 = {28, 50, 50, 0, 1, images_playersensorleftedge_402_0_28, 1};
static Animation anim_playersensorleftedge_402_0 = {&direction_playersensorleftedge_402_0_0, &direction_playersensorleftedge_402_0_0, NULL, &direction_playersensorleftedge_402_0_4, &direction_playersensorleftedge_402_0_4, &direction_playersensorleftedge_402_0_4, NULL, &direction_playersensorleftedge_402_0_8, &direction_playersensorleftedge_402_0_8, &direction_playersensorleftedge_402_0_8, NULL, &direction_playersensorleftedge_402_0_12, &direction_playersensorleftedge_402_0_12, &direction_playersensorleftedge_402_0_12, NULL, &direction_playersensorleftedge_402_0_16, &direction_playersensorleftedge_402_0_16, &direction_playersensorleftedge_402_0_16, NULL, &direction_playersensorleftedge_402_0_20, &direction_playersensorleftedge_402_0_20, &direction_playersensorleftedge_402_0_20, NULL, &direction_playersensorleftedge_402_0_24, &direction_playersensorleftedge_402_0_24, &direction_playersensorleftedge_402_0_24, NULL, &direction_playersensorleftedge_402_0_28, &direction_playersensorleftedge_402_0_28, &direction_playersensorleftedge_402_0_28, NULL, &direction_playersensorleftedge_402_0_0};
static Animation * anim_array_playersensorleftedge_402[1] = {&anim_playersensorleftedge_402_0};
static Animations anim_playersensorleftedge_402 = {1, &anim_array_playersensorleftedge_402[0]};
static bool anim_playersensorleftedge_402_initialized;
class PlayerSensorLeftEdge_402 : public Active
{
public:
    PlayerSensorLeftEdge_402(int x, int y) : Active(x, y, PlayerSensorLeftEdge_402_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorLeftEdge", 21);
#endif
        set_visible(false);
        this->animations = &anim_playersensorleftedge_402;
        if (!anim_playersensorleftedge_402_initialized) {
            anim_playersensorleftedge_402_initialized = true;
            images_playersensorleftedge_402_0_0[0] = get_internal_image(16);
            images_playersensorleftedge_402_0_4[0] = get_internal_image(75);
            images_playersensorleftedge_402_0_8[0] = get_internal_image(45);
            images_playersensorleftedge_402_0_12[0] = get_internal_image(147);
            images_playersensorleftedge_402_0_16[0] = get_internal_image(81);
            images_playersensorleftedge_402_0_20[0] = get_internal_image(158);
            images_playersensorleftedge_402_0_24[0] = get_internal_image(113);
            images_playersensorleftedge_402_0_28[0] = get_internal_image(172);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_63_player_sensorleftedge.value;
        if (!global_data_63_player_sensorleftedge.init) {
            global_data_63_player_sensorleftedge.init = true;
        }
    }
};
FrameObject * create_playersensorleftedge_402(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorLeftEdge_402(x, y);
}
static Image* images_playersensorrightedge_403_0_0[1];
static Direction direction_playersensorrightedge_403_0_0 = {0, 50, 50, 0, 1, images_playersensorrightedge_403_0_0, 1};
static Image* images_playersensorrightedge_403_0_4[1];
static Direction direction_playersensorrightedge_403_0_4 = {4, 50, 50, 0, 1, images_playersensorrightedge_403_0_4, 1};
static Image* images_playersensorrightedge_403_0_8[1];
static Direction direction_playersensorrightedge_403_0_8 = {8, 50, 50, 0, 1, images_playersensorrightedge_403_0_8, 1};
static Image* images_playersensorrightedge_403_0_12[1];
static Direction direction_playersensorrightedge_403_0_12 = {12, 50, 50, 0, 1, images_playersensorrightedge_403_0_12, 1};
static Image* images_playersensorrightedge_403_0_16[1];
static Direction direction_playersensorrightedge_403_0_16 = {16, 50, 50, 0, 1, images_playersensorrightedge_403_0_16, 1};
static Image* images_playersensorrightedge_403_0_20[1];
static Direction direction_playersensorrightedge_403_0_20 = {20, 50, 50, 0, 1, images_playersensorrightedge_403_0_20, 1};
static Image* images_playersensorrightedge_403_0_24[1];
static Direction direction_playersensorrightedge_403_0_24 = {24, 50, 50, 0, 1, images_playersensorrightedge_403_0_24, 1};
static Image* images_playersensorrightedge_403_0_28[1];
static Direction direction_playersensorrightedge_403_0_28 = {28, 50, 50, 0, 1, images_playersensorrightedge_403_0_28, 1};
static Animation anim_playersensorrightedge_403_0 = {&direction_playersensorrightedge_403_0_0, &direction_playersensorrightedge_403_0_0, NULL, &direction_playersensorrightedge_403_0_4, &direction_playersensorrightedge_403_0_4, &direction_playersensorrightedge_403_0_4, NULL, &direction_playersensorrightedge_403_0_8, &direction_playersensorrightedge_403_0_8, &direction_playersensorrightedge_403_0_8, NULL, &direction_playersensorrightedge_403_0_12, &direction_playersensorrightedge_403_0_12, &direction_playersensorrightedge_403_0_12, NULL, &direction_playersensorrightedge_403_0_16, &direction_playersensorrightedge_403_0_16, &direction_playersensorrightedge_403_0_16, NULL, &direction_playersensorrightedge_403_0_20, &direction_playersensorrightedge_403_0_20, &direction_playersensorrightedge_403_0_20, NULL, &direction_playersensorrightedge_403_0_24, &direction_playersensorrightedge_403_0_24, &direction_playersensorrightedge_403_0_24, NULL, &direction_playersensorrightedge_403_0_28, &direction_playersensorrightedge_403_0_28, &direction_playersensorrightedge_403_0_28, NULL, &direction_playersensorrightedge_403_0_0};
static Animation * anim_array_playersensorrightedge_403[1] = {&anim_playersensorrightedge_403_0};
static Animations anim_playersensorrightedge_403 = {1, &anim_array_playersensorrightedge_403[0]};
static bool anim_playersensorrightedge_403_initialized;
class PlayerSensorRightEdge_403 : public Active
{
public:
    PlayerSensorRightEdge_403(int x, int y) : Active(x, y, PlayerSensorRightEdge_403_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_SensorRightEdge", 22);
#endif
        set_visible(false);
        this->animations = &anim_playersensorrightedge_403;
        if (!anim_playersensorrightedge_403_initialized) {
            anim_playersensorrightedge_403_initialized = true;
            images_playersensorrightedge_403_0_0[0] = get_internal_image(16);
            images_playersensorrightedge_403_0_4[0] = get_internal_image(75);
            images_playersensorrightedge_403_0_8[0] = get_internal_image(45);
            images_playersensorrightedge_403_0_12[0] = get_internal_image(147);
            images_playersensorrightedge_403_0_16[0] = get_internal_image(81);
            images_playersensorrightedge_403_0_20[0] = get_internal_image(158);
            images_playersensorrightedge_403_0_24[0] = get_internal_image(113);
            images_playersensorrightedge_403_0_28[0] = get_internal_image(172);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_64_player_sensorrightedge.value;
        if (!global_data_64_player_sensorrightedge.init) {
            global_data_64_player_sensorrightedge.init = true;
        }
    }
};
FrameObject * create_playersensorrightedge_403(int x, int y)
{
    return new (Active::pool.create()) PlayerSensorRightEdge_403(x, y);
}
static Image* images_layerchangeswitch_404_0_0[1];
static Direction direction_layerchangeswitch_404_0_0 = {0, 50, 50, 0, 1, images_layerchangeswitch_404_0_0, 1};
static Animation anim_layerchangeswitch_404_0 = {&direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, NULL, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0, &direction_layerchangeswitch_404_0_0};
static Animation * anim_array_layerchangeswitch_404[1] = {&anim_layerchangeswitch_404_0};
static Animations anim_layerchangeswitch_404 = {1, &anim_array_layerchangeswitch_404[0]};
static bool anim_layerchangeswitch_404_initialized;
class LayerChangeSwitch_404 : public Active
{
public:
    LayerChangeSwitch_404(int x, int y) : Active(x, y, LayerChangeSwitch_404_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LayerChange_Switch", 18);
#endif
        set_visible(false);
        this->animations = &anim_layerchangeswitch_404;
        if (!anim_layerchangeswitch_404_initialized) {
            anim_layerchangeswitch_404_initialized = true;
            images_layerchangeswitch_404_0_0[0] = get_internal_image(88);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_65_layerchange_switch.value;
        if (!global_data_65_layerchange_switch.init) {
            global_data_65_layerchange_switch.init = true;
        }
    }
};
FrameObject * create_layerchangeswitch_404(int x, int y)
{
    return new (Active::pool.create()) LayerChangeSwitch_404(x, y);
}
static Image* images_layerchangeto0_405_0_0[1];
static Direction direction_layerchangeto0_405_0_0 = {0, 50, 50, 0, 1, images_layerchangeto0_405_0_0, 1};
static Animation anim_layerchangeto0_405_0 = {&direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, NULL, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0, &direction_layerchangeto0_405_0_0};
static Animation * anim_array_layerchangeto0_405[1] = {&anim_layerchangeto0_405_0};
static Animations anim_layerchangeto0_405 = {1, &anim_array_layerchangeto0_405[0]};
static bool anim_layerchangeto0_405_initialized;
class LayerChangeTo0_405 : public Active
{
public:
    LayerChangeTo0_405(int x, int y) : Active(x, y, LayerChangeTo0_405_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LayerChange_To0", 15);
#endif
        set_visible(false);
        this->animations = &anim_layerchangeto0_405;
        if (!anim_layerchangeto0_405_initialized) {
            anim_layerchangeto0_405_initialized = true;
            images_layerchangeto0_405_0_0[0] = get_internal_image(83);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_66_layerchange_to0.value;
        if (!global_data_66_layerchange_to0.init) {
            global_data_66_layerchange_to0.init = true;
        }
    }
};
FrameObject * create_layerchangeto0_405(int x, int y)
{
    return new (Active::pool.create()) LayerChangeTo0_405(x, y);
}
