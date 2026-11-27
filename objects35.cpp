#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_objecttransporterwave_3414_0_0[1];
static Direction direction_objecttransporterwave_3414_0_0 = {0, 50, 50, 0, 1, images_objecttransporterwave_3414_0_0, 1};
static Animation anim_objecttransporterwave_3414_0 = {&direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, NULL, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0, &direction_objecttransporterwave_3414_0_0};
static Animation * anim_array_objecttransporterwave_3414[1] = {&anim_objecttransporterwave_3414_0};
static Animations anim_objecttransporterwave_3414 = {1, &anim_array_objecttransporterwave_3414[0]};
static bool anim_objecttransporterwave_3414_initialized;
class ObjectTransporterWave_3414 : public Active
{
public:
    ObjectTransporterWave_3414(int x, int y) : Active(x, y, ObjectTransporterWave_3414_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterWave", 22);
#endif
        this->animations = &anim_objecttransporterwave_3414;
        if (!anim_objecttransporterwave_3414_initialized) {
            anim_objecttransporterwave_3414_initialized = true;
            images_objecttransporterwave_3414_0_0[0] = get_internal_image(13614);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
    }
};
FrameObject * create_objecttransporterwave_3414(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterWave_3414(x, y);
}
static Image* images_objecttransporternode0_3415_0_0[2];
static Direction direction_objecttransporternode0_3415_0_0 = {0, 100, 100, 0, 1, images_objecttransporternode0_3415_0_0, 2};
static Animation anim_objecttransporternode0_3415_0 = {&direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, NULL, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0, &direction_objecttransporternode0_3415_0_0};
static Animation * anim_array_objecttransporternode0_3415[1] = {&anim_objecttransporternode0_3415_0};
static Animations anim_objecttransporternode0_3415 = {1, &anim_array_objecttransporternode0_3415[0]};
static bool anim_objecttransporternode0_3415_initialized;
class ObjectTransporterNode0_3415 : public Active
{
public:
    ObjectTransporterNode0_3415(int x, int y) : Active(x, y, ObjectTransporterNode0_3415_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterNode0", 23);
#endif
        this->animations = &anim_objecttransporternode0_3415;
        if (!anim_objecttransporternode0_3415_initialized) {
            anim_objecttransporternode0_3415_initialized = true;
            images_objecttransporternode0_3415_0_0[0] = get_internal_image(3280);
            images_objecttransporternode0_3415_0_0[1] = get_internal_image(8590);
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
FrameObject * create_objecttransporternode0_3415(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterNode0_3415(x, y);
}
static Image* images_objecttransporterstart2_3416_0_0[1];
static Direction direction_objecttransporterstart2_3416_0_0 = {0, 50, 50, 0, 1, images_objecttransporterstart2_3416_0_0, 1};
static Animation anim_objecttransporterstart2_3416_0 = {&direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, NULL, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0, &direction_objecttransporterstart2_3416_0_0};
static Animation * anim_array_objecttransporterstart2_3416[1] = {&anim_objecttransporterstart2_3416_0};
static Animations anim_objecttransporterstart2_3416 = {1, &anim_array_objecttransporterstart2_3416[0]};
static bool anim_objecttransporterstart2_3416_initialized;
class ObjectTransporterStart2_3416 : public Active
{
public:
    ObjectTransporterStart2_3416(int x, int y) : Active(x, y, ObjectTransporterStart2_3416_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterStart 2", 25);
#endif
        this->animations = &anim_objecttransporterstart2_3416;
        if (!anim_objecttransporterstart2_3416_initialized) {
            anim_objecttransporterstart2_3416_initialized = true;
            images_objecttransporterstart2_3416_0_0[0] = get_internal_image(3213);
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
FrameObject * create_objecttransporterstart2_3416(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterStart2_3416(x, y);
}
static Image* images_objecttransporternode270_3417_0_0[2];
static Direction direction_objecttransporternode270_3417_0_0 = {0, 100, 100, 0, 1, images_objecttransporternode270_3417_0_0, 2};
static Animation anim_objecttransporternode270_3417_0 = {&direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, NULL, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0, &direction_objecttransporternode270_3417_0_0};
static Animation * anim_array_objecttransporternode270_3417[1] = {&anim_objecttransporternode270_3417_0};
static Animations anim_objecttransporternode270_3417 = {1, &anim_array_objecttransporternode270_3417[0]};
static bool anim_objecttransporternode270_3417_initialized;
class ObjectTransporterNode270_3417 : public Active
{
public:
    ObjectTransporterNode270_3417(int x, int y) : Active(x, y, ObjectTransporterNode270_3417_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterNode270", 25);
#endif
        this->animations = &anim_objecttransporternode270_3417;
        if (!anim_objecttransporternode270_3417_initialized) {
            anim_objecttransporternode270_3417_initialized = true;
            images_objecttransporternode270_3417_0_0[0] = get_internal_image(12681);
            images_objecttransporternode270_3417_0_0[1] = get_internal_image(8590);
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
FrameObject * create_objecttransporternode270_3417(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterNode270_3417(x, y);
}
static Image* images_enemycrane_3418_0_0[2];
static Direction direction_enemycrane_3418_0_0 = {0, 50, 50, 0, 1, images_enemycrane_3418_0_0, 2};
static Animation anim_enemycrane_3418_0 = {&direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, NULL, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0, &direction_enemycrane_3418_0_0};
static Animation * anim_array_enemycrane_3418[1] = {&anim_enemycrane_3418_0};
static Animations anim_enemycrane_3418 = {1, &anim_array_enemycrane_3418[0]};
static bool anim_enemycrane_3418_initialized;
class EnemyCrane_3418 : public Active
{
public:
    EnemyCrane_3418(int x, int y) : Active(x, y, EnemyCrane_3418_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Crane", 11);
#endif
        this->animations = &anim_enemycrane_3418;
        if (!anim_enemycrane_3418_initialized) {
            anim_enemycrane_3418_initialized = true;
            images_enemycrane_3418_0_0[0] = get_internal_image(13613);
            images_enemycrane_3418_0_0[1] = get_internal_image(2088);
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
FrameObject * create_enemycrane_3418(int x, int y)
{
    return new (Active::pool.create()) EnemyCrane_3418(x, y);
}
static Image* images_enemypounder_3419_0_0[3];
static Direction direction_enemypounder_3419_0_0 = {0, 80, 80, 0, -1, images_enemypounder_3419_0_0, 3};
static Image* images_enemypounder_3419_0_16[3];
static Direction direction_enemypounder_3419_0_16 = {16, 80, 80, 0, -1, images_enemypounder_3419_0_16, 3};
static Image* images_enemypounder_3419_0_24[1];
static Direction direction_enemypounder_3419_0_24 = {24, 50, 50, 0, -1, images_enemypounder_3419_0_24, 1};
static Animation anim_enemypounder_3419_0 = {&direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, NULL, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, &direction_enemypounder_3419_0_16, NULL, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, &direction_enemypounder_3419_0_24, NULL, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0, &direction_enemypounder_3419_0_0};
static Image* images_enemypounder_3419_8_0[2];
static Direction direction_enemypounder_3419_8_0 = {0, 50, 50, 0, -1, images_enemypounder_3419_8_0, 2};
static Image* images_enemypounder_3419_8_16[2];
static Direction direction_enemypounder_3419_8_16 = {16, 50, 50, 0, -1, images_enemypounder_3419_8_16, 2};
static Image* images_enemypounder_3419_8_24[2];
static Direction direction_enemypounder_3419_8_24 = {24, 50, 50, 0, -1, images_enemypounder_3419_8_24, 2};
static Animation anim_enemypounder_3419_8 = {&direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, NULL, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, &direction_enemypounder_3419_8_16, NULL, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, &direction_enemypounder_3419_8_24, NULL, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0, &direction_enemypounder_3419_8_0};
static Animation * anim_array_enemypounder_3419[9] = {&anim_enemypounder_3419_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemypounder_3419_8};
static Animations anim_enemypounder_3419 = {9, &anim_array_enemypounder_3419[0]};
static bool anim_enemypounder_3419_initialized;
class EnemyPounder_3419 : public Active
{
public:
    EnemyPounder_3419(int x, int y) : Active(x, y, EnemyPounder_3419_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Pounder", 13);
#endif
        this->animations = &anim_enemypounder_3419;
        if (!anim_enemypounder_3419_initialized) {
            anim_enemypounder_3419_initialized = true;
            images_enemypounder_3419_0_0[0] = get_internal_image(4136);
            images_enemypounder_3419_0_0[1] = get_internal_image(4138);
            images_enemypounder_3419_0_0[2] = get_internal_image(4139);
            images_enemypounder_3419_0_16[0] = get_internal_image(3808);
            images_enemypounder_3419_0_16[1] = get_internal_image(3817);
            images_enemypounder_3419_0_16[2] = get_internal_image(3869);
            images_enemypounder_3419_0_24[0] = get_internal_image(6095);
            images_enemypounder_3419_8_0[0] = get_internal_image(4142);
            images_enemypounder_3419_8_0[1] = get_internal_image(4136);
            images_enemypounder_3419_8_16[0] = get_internal_image(4143);
            images_enemypounder_3419_8_16[1] = get_internal_image(3808);
            images_enemypounder_3419_8_24[0] = get_internal_image(4144);
            images_enemypounder_3419_8_24[1] = get_internal_image(4137);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        create_alterables();
        alterables->values.set(0, 25);
    }
};
FrameObject * create_enemypounder_3419(int x, int y)
{
    return new (Active::pool.create()) EnemyPounder_3419(x, y);
}
static Image* images_hazardzapbeamcannon_3420_0_0[6];
static Direction direction_hazardzapbeamcannon_3420_0_0 = {0, 25, 25, 0, -1, images_hazardzapbeamcannon_3420_0_0, 6};
static Animation anim_hazardzapbeamcannon_3420_0 = {&direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, NULL, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0, &direction_hazardzapbeamcannon_3420_0_0};
static Animation * anim_array_hazardzapbeamcannon_3420[1] = {&anim_hazardzapbeamcannon_3420_0};
static Animations anim_hazardzapbeamcannon_3420 = {1, &anim_array_hazardzapbeamcannon_3420[0]};
static bool anim_hazardzapbeamcannon_3420_initialized;
class HazardZapBeamCannon_3420 : public Active
{
public:
    HazardZapBeamCannon_3420(int x, int y) : Active(x, y, HazardZapBeamCannon_3420_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ZapBeamCannon", 20);
#endif
        this->animations = &anim_hazardzapbeamcannon_3420;
        if (!anim_hazardzapbeamcannon_3420_initialized) {
            anim_hazardzapbeamcannon_3420_initialized = true;
            images_hazardzapbeamcannon_3420_0_0[0] = get_internal_image(14165);
            images_hazardzapbeamcannon_3420_0_0[1] = get_internal_image(14169);
            images_hazardzapbeamcannon_3420_0_0[2] = get_internal_image(14164);
            images_hazardzapbeamcannon_3420_0_0[3] = get_internal_image(14170);
            images_hazardzapbeamcannon_3420_0_0[4] = get_internal_image(14168);
            images_hazardzapbeamcannon_3420_0_0[5] = get_internal_image(14167);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 270);
        alterables->values.set(4, 240);
        alterables->values.set(5, 300);
    }
};
FrameObject * create_hazardzapbeamcannon_3420(int x, int y)
{
    return new (Active::pool.create()) HazardZapBeamCannon_3420(x, y);
}
static Image* images_hazardzapbeamhitbox_3421_0_0[1];
static Direction direction_hazardzapbeamhitbox_3421_0_0 = {0, 50, 50, 0, 1, images_hazardzapbeamhitbox_3421_0_0, 1};
static Animation anim_hazardzapbeamhitbox_3421_0 = {&direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, NULL, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0, &direction_hazardzapbeamhitbox_3421_0_0};
static Animation * anim_array_hazardzapbeamhitbox_3421[1] = {&anim_hazardzapbeamhitbox_3421_0};
static Animations anim_hazardzapbeamhitbox_3421 = {1, &anim_array_hazardzapbeamhitbox_3421[0]};
static bool anim_hazardzapbeamhitbox_3421_initialized;
class HazardZapBeamHitbox_3421 : public Active
{
public:
    HazardZapBeamHitbox_3421(int x, int y) : Active(x, y, HazardZapBeamHitbox_3421_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ZapBeamHitbox", 20);
#endif
        set_visible(false);
        this->animations = &anim_hazardzapbeamhitbox_3421;
        if (!anim_hazardzapbeamhitbox_3421_initialized) {
            anim_hazardzapbeamhitbox_3421_initialized = true;
            images_hazardzapbeamhitbox_3421_0_0[0] = get_internal_image(3766);
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
FrameObject * create_hazardzapbeamhitbox_3421(int x, int y)
{
    return new (Active::pool.create()) HazardZapBeamHitbox_3421(x, y);
}
static Image* images_hazardspiralsparkmaker_3422_0_0[6];
static Direction direction_hazardspiralsparkmaker_3422_0_0 = {0, 25, 25, 0, -1, images_hazardspiralsparkmaker_3422_0_0, 6};
static Image* images_hazardspiralsparkmaker_3422_0_1[6];
static Direction direction_hazardspiralsparkmaker_3422_0_1 = {1, 50, 50, 0, -1, images_hazardspiralsparkmaker_3422_0_1, 6};
static Animation anim_hazardspiralsparkmaker_3422_0 = {&direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_1, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0, &direction_hazardspiralsparkmaker_3422_0_0};
static Animation * anim_array_hazardspiralsparkmaker_3422[1] = {&anim_hazardspiralsparkmaker_3422_0};
static Animations anim_hazardspiralsparkmaker_3422 = {1, &anim_array_hazardspiralsparkmaker_3422[0]};
static bool anim_hazardspiralsparkmaker_3422_initialized;
class HazardSpiralSparkMaker_3422 : public Active
{
public:
    HazardSpiralSparkMaker_3422(int x, int y) : Active(x, y, HazardSpiralSparkMaker_3422_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_SpiralSparkMaker", 23);
#endif
        this->animations = &anim_hazardspiralsparkmaker_3422;
        if (!anim_hazardspiralsparkmaker_3422_initialized) {
            anim_hazardspiralsparkmaker_3422_initialized = true;
            images_hazardspiralsparkmaker_3422_0_0[0] = get_internal_image(14126);
            images_hazardspiralsparkmaker_3422_0_0[1] = get_internal_image(14163);
            images_hazardspiralsparkmaker_3422_0_0[2] = get_internal_image(14166);
            images_hazardspiralsparkmaker_3422_0_0[3] = get_internal_image(14171);
            images_hazardspiralsparkmaker_3422_0_0[4] = get_internal_image(14172);
            images_hazardspiralsparkmaker_3422_0_0[5] = get_internal_image(14173);
            images_hazardspiralsparkmaker_3422_0_1[0] = get_internal_image(14126);
            images_hazardspiralsparkmaker_3422_0_1[1] = get_internal_image(13665);
            images_hazardspiralsparkmaker_3422_0_1[2] = get_internal_image(14126);
            images_hazardspiralsparkmaker_3422_0_1[3] = get_internal_image(13665);
            images_hazardspiralsparkmaker_3422_0_1[4] = get_internal_image(14126);
            images_hazardspiralsparkmaker_3422_0_1[5] = get_internal_image(13665);
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
FrameObject * create_hazardspiralsparkmaker_3422(int x, int y)
{
    return new (Active::pool.create()) HazardSpiralSparkMaker_3422(x, y);
}
static Image* images_fdspiralsparktowerlight_3423_0_0[6];
static Direction direction_fdspiralsparktowerlight_3423_0_0 = {0, 25, 25, 0, -1, images_fdspiralsparktowerlight_3423_0_0, 6};
static Animation anim_fdspiralsparktowerlight_3423_0 = {&direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, NULL, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0, &direction_fdspiralsparktowerlight_3423_0_0};
static Animation * anim_array_fdspiralsparktowerlight_3423[1] = {&anim_fdspiralsparktowerlight_3423_0};
static Animations anim_fdspiralsparktowerlight_3423 = {1, &anim_array_fdspiralsparktowerlight_3423[0]};
static bool anim_fdspiralsparktowerlight_3423_initialized;
class FDSpiralSparkTowerLight_3423 : public Active
{
public:
    FDSpiralSparkTowerLight_3423(int x, int y) : Active(x, y, FDSpiralSparkTowerLight_3423_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_SpiralSparkTowerLight", 24);
#endif
        this->animations = &anim_fdspiralsparktowerlight_3423;
        if (!anim_fdspiralsparktowerlight_3423_initialized) {
            anim_fdspiralsparktowerlight_3423_initialized = true;
            images_fdspiralsparktowerlight_3423_0_0[0] = get_internal_image(14198);
            images_fdspiralsparktowerlight_3423_0_0[1] = get_internal_image(14199);
            images_fdspiralsparktowerlight_3423_0_0[2] = get_internal_image(14200);
            images_fdspiralsparktowerlight_3423_0_0[3] = get_internal_image(14201);
            images_fdspiralsparktowerlight_3423_0_0[4] = get_internal_image(14202);
            images_fdspiralsparktowerlight_3423_0_0[5] = get_internal_image(14203);
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
FrameObject * create_fdspiralsparktowerlight_3423(int x, int y)
{
    return new (Active::pool.create()) FDSpiralSparkTowerLight_3423(x, y);
}
static Image* images_fdlasercannonleftlight_3424_0_0[1];
static Direction direction_fdlasercannonleftlight_3424_0_0 = {0, 50, 50, 0, 1, images_fdlasercannonleftlight_3424_0_0, 1};
static Animation anim_fdlasercannonleftlight_3424_0 = {&direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, NULL, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0, &direction_fdlasercannonleftlight_3424_0_0};
static Animation * anim_array_fdlasercannonleftlight_3424[1] = {&anim_fdlasercannonleftlight_3424_0};
static Animations anim_fdlasercannonleftlight_3424 = {1, &anim_array_fdlasercannonleftlight_3424[0]};
static bool anim_fdlasercannonleftlight_3424_initialized;
class FDLaserCannonLeftLight_3424 : public Active
{
public:
    FDLaserCannonLeftLight_3424(int x, int y) : Active(x, y, FDLaserCannonLeftLight_3424_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_LaserCannonLeftLight", 23);
#endif
        this->animations = &anim_fdlasercannonleftlight_3424;
        if (!anim_fdlasercannonleftlight_3424_initialized) {
            anim_fdlasercannonleftlight_3424_initialized = true;
            images_fdlasercannonleftlight_3424_0_0[0] = get_internal_image(14125);
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
FrameObject * create_fdlasercannonleftlight_3424(int x, int y)
{
    return new (Active::pool.create()) FDLaserCannonLeftLight_3424(x, y);
}
static Image* images_hazardbeamcannonhorizontal_3425_0_0[1];
static Direction direction_hazardbeamcannonhorizontal_3425_0_0 = {0, 50, 50, 0, 1, images_hazardbeamcannonhorizontal_3425_0_0, 1};
static Animation anim_hazardbeamcannonhorizontal_3425_0 = {&direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, NULL, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0, &direction_hazardbeamcannonhorizontal_3425_0_0};
static Animation * anim_array_hazardbeamcannonhorizontal_3425[1] = {&anim_hazardbeamcannonhorizontal_3425_0};
static Animations anim_hazardbeamcannonhorizontal_3425 = {1, &anim_array_hazardbeamcannonhorizontal_3425[0]};
static bool anim_hazardbeamcannonhorizontal_3425_initialized;
class HazardBeamCannonHorizontal_3425 : public Active
{
public:
    HazardBeamCannonHorizontal_3425(int x, int y) : Active(x, y, HazardBeamCannonHorizontal_3425_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_BeamCannonHorizontal", 27);
#endif
        this->animations = &anim_hazardbeamcannonhorizontal_3425;
        if (!anim_hazardbeamcannonhorizontal_3425_initialized) {
            anim_hazardbeamcannonhorizontal_3425_initialized = true;
            images_hazardbeamcannonhorizontal_3425_0_0[0] = get_internal_image(3795);
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
FrameObject * create_hazardbeamcannonhorizontal_3425(int x, int y)
{
    return new (Active::pool.create()) HazardBeamCannonHorizontal_3425(x, y);
}
static Image* images_objecttransporternode180_3426_0_0[2];
static Direction direction_objecttransporternode180_3426_0_0 = {0, 100, 100, 0, 1, images_objecttransporternode180_3426_0_0, 2};
static Animation anim_objecttransporternode180_3426_0 = {&direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, NULL, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0, &direction_objecttransporternode180_3426_0_0};
static Animation * anim_array_objecttransporternode180_3426[1] = {&anim_objecttransporternode180_3426_0};
static Animations anim_objecttransporternode180_3426 = {1, &anim_array_objecttransporternode180_3426[0]};
static bool anim_objecttransporternode180_3426_initialized;
class ObjectTransporterNode180_3426 : public Active
{
public:
    ObjectTransporterNode180_3426(int x, int y) : Active(x, y, ObjectTransporterNode180_3426_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterNode180", 25);
#endif
        this->animations = &anim_objecttransporternode180_3426;
        if (!anim_objecttransporternode180_3426_initialized) {
            anim_objecttransporternode180_3426_initialized = true;
            images_objecttransporternode180_3426_0_0[0] = get_internal_image(10159);
            images_objecttransporternode180_3426_0_0[1] = get_internal_image(8590);
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
FrameObject * create_objecttransporternode180_3426(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterNode180_3426(x, y);
}
static Image* images_gimmickdownhillplatform_3427_0_0[1];
static Direction direction_gimmickdownhillplatform_3427_0_0 = {0, 50, 50, 0, 1, images_gimmickdownhillplatform_3427_0_0, 1};
static Image* images_gimmickdownhillplatform_3427_0_1[1];
static Direction direction_gimmickdownhillplatform_3427_0_1 = {1, 50, 50, 0, 1, images_gimmickdownhillplatform_3427_0_1, 1};
static Animation anim_gimmickdownhillplatform_3427_0 = {&direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_1, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0, &direction_gimmickdownhillplatform_3427_0_0};
static Animation * anim_array_gimmickdownhillplatform_3427[1] = {&anim_gimmickdownhillplatform_3427_0};
static Animations anim_gimmickdownhillplatform_3427 = {1, &anim_array_gimmickdownhillplatform_3427[0]};
static bool anim_gimmickdownhillplatform_3427_initialized;
class GimmickDownhillPlatform_3427 : public Active
{
public:
    GimmickDownhillPlatform_3427(int x, int y) : Active(x, y, GimmickDownhillPlatform_3427_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_DownhillPlatform", 24);
#endif
        this->animations = &anim_gimmickdownhillplatform_3427;
        if (!anim_gimmickdownhillplatform_3427_initialized) {
            anim_gimmickdownhillplatform_3427_initialized = true;
            images_gimmickdownhillplatform_3427_0_0[0] = get_internal_image(8613);
            images_gimmickdownhillplatform_3427_0_1[0] = get_internal_image(9033);
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
FrameObject * create_gimmickdownhillplatform_3427(int x, int y)
{
    return new (Active::pool.create()) GimmickDownhillPlatform_3427(x, y);
}
static Image* images_objecttransporternode90_3428_0_0[2];
static Direction direction_objecttransporternode90_3428_0_0 = {0, 100, 100, 0, 1, images_objecttransporternode90_3428_0_0, 2};
static Animation anim_objecttransporternode90_3428_0 = {&direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, NULL, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0, &direction_objecttransporternode90_3428_0_0};
static Animation * anim_array_objecttransporternode90_3428[1] = {&anim_objecttransporternode90_3428_0};
static Animations anim_objecttransporternode90_3428 = {1, &anim_array_objecttransporternode90_3428[0]};
static bool anim_objecttransporternode90_3428_initialized;
class ObjectTransporterNode90_3428 : public Active
{
public:
    ObjectTransporterNode90_3428(int x, int y) : Active(x, y, ObjectTransporterNode90_3428_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterNode90", 24);
#endif
        this->animations = &anim_objecttransporternode90_3428;
        if (!anim_objecttransporternode90_3428_initialized) {
            anim_objecttransporternode90_3428_initialized = true;
            images_objecttransporternode90_3428_0_0[0] = get_internal_image(3224);
            images_objecttransporternode90_3428_0_0[1] = get_internal_image(8590);
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
FrameObject * create_objecttransporternode90_3428(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterNode90_3428(x, y);
}
static Image* images_objectlowspring_3429_0_0[6];
static Direction direction_objectlowspring_3429_0_0 = {0, 25, 25, 0, -1, images_objectlowspring_3429_0_0, 6};
static Animation anim_objectlowspring_3429_0 = {&direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, NULL, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0, &direction_objectlowspring_3429_0_0};
static Image* images_objectlowspring_3429_7_0[8];
static Direction direction_objectlowspring_3429_7_0 = {0, 50, 50, 0, 1, images_objectlowspring_3429_7_0, 8};
static Animation anim_objectlowspring_3429_7 = {&direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, NULL, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0, &direction_objectlowspring_3429_7_0};
static Animation * anim_array_objectlowspring_3429[8] = {&anim_objectlowspring_3429_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectlowspring_3429_7};
static Animations anim_objectlowspring_3429 = {8, &anim_array_objectlowspring_3429[0]};
static bool anim_objectlowspring_3429_initialized;
class ObjectLowSpring_3429 : public Active
{
public:
    ObjectLowSpring_3429(int x, int y) : Active(x, y, ObjectLowSpring_3429_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_LowSpring", 16);
#endif
        this->animations = &anim_objectlowspring_3429;
        if (!anim_objectlowspring_3429_initialized) {
            anim_objectlowspring_3429_initialized = true;
            images_objectlowspring_3429_0_0[0] = get_internal_image(14809);
            images_objectlowspring_3429_0_0[1] = get_internal_image(12273);
            images_objectlowspring_3429_0_0[2] = get_internal_image(14825);
            images_objectlowspring_3429_0_0[3] = get_internal_image(14369);
            images_objectlowspring_3429_0_0[4] = get_internal_image(14369);
            images_objectlowspring_3429_0_0[5] = get_internal_image(12273);
            images_objectlowspring_3429_7_0[0] = get_internal_image(15083);
            images_objectlowspring_3429_7_0[1] = get_internal_image(15085);
            images_objectlowspring_3429_7_0[2] = get_internal_image(15023);
            images_objectlowspring_3429_7_0[3] = get_internal_image(15087);
            images_objectlowspring_3429_7_0[4] = get_internal_image(15021);
            images_objectlowspring_3429_7_0[5] = get_internal_image(15089);
            images_objectlowspring_3429_7_0[6] = get_internal_image(14824);
            images_objectlowspring_3429_7_0[7] = get_internal_image(15090);
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
FrameObject * create_objectlowspring_3429(int x, int y)
{
    return new (Active::pool.create()) ObjectLowSpring_3429(x, y);
}
static Image* images_enemyelitespawnerspawner_3430_0_0[1];
static Direction direction_enemyelitespawnerspawner_3430_0_0 = {0, 50, 50, 0, 1, images_enemyelitespawnerspawner_3430_0_0, 1};
static Animation anim_enemyelitespawnerspawner_3430_0 = {&direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, NULL, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0, &direction_enemyelitespawnerspawner_3430_0_0};
static Animation * anim_array_enemyelitespawnerspawner_3430[1] = {&anim_enemyelitespawnerspawner_3430_0};
static Animations anim_enemyelitespawnerspawner_3430 = {1, &anim_array_enemyelitespawnerspawner_3430[0]};
static bool anim_enemyelitespawnerspawner_3430_initialized;
class EnemyEliteSpawnerSpawner_3430 : public Active
{
public:
    EnemyEliteSpawnerSpawner_3430(int x, int y) : Active(x, y, EnemyEliteSpawnerSpawner_3430_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_EliteSpawnerSpawner", 25);
#endif
        set_visible(false);
        this->animations = &anim_enemyelitespawnerspawner_3430;
        if (!anim_enemyelitespawnerspawner_3430_initialized) {
            anim_enemyelitespawnerspawner_3430_initialized = true;
            images_enemyelitespawnerspawner_3430_0_0[0] = get_internal_image(15082);
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
FrameObject * create_enemyelitespawnerspawner_3430(int x, int y)
{
    return new (Active::pool.create()) EnemyEliteSpawnerSpawner_3430(x, y);
}
static Image* images_hazardspikesright_3431_0_0[1];
static Direction direction_hazardspikesright_3431_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_3431_0_0, 1};
static Animation anim_hazardspikesright_3431_0 = {&direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, NULL, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0, &direction_hazardspikesright_3431_0_0};
static Animation * anim_array_hazardspikesright_3431[1] = {&anim_hazardspikesright_3431_0};
static Animations anim_hazardspikesright_3431 = {1, &anim_array_hazardspikesright_3431[0]};
static bool anim_hazardspikesright_3431_initialized;
class HazardSpikesRight_3431 : public Active
{
public:
    HazardSpikesRight_3431(int x, int y) : Active(x, y, HazardSpikesRight_3431_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_3431;
        if (!anim_hazardspikesright_3431_initialized) {
            anim_hazardspikesright_3431_initialized = true;
            images_hazardspikesright_3431_0_0[0] = get_internal_image(15093);
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
FrameObject * create_hazardspikesright_3431(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_3431(x, y);
}
class SubtitleData_3432 : public Text
{
public:
    SubtitleData_3432(int x, int y) : Text(x, y, SubtitleData_3432_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("BREVON: We have intruders on the ship! Mobilize!", 48));
        add_line(std::string("BREVON: GET THEM.", 17));
        add_line(std::string("BREVON: Run while you still can, creature!", 42));
        add_line(std::string("BREVON: Open the airlocks!", 26));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font4.bold;
        italic = font4.italic;
        font = get_font(font4.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_subtitledata_3432(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_3432(x, y);
}
class SubtitleText_3433 : public TextBlitter
{
public:
    SubtitleText_3433(int x, int y) : TextBlitter(x, y, SubtitleText_3433_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle_Text", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 320;
        height = 61;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        static int charmap[256];
        static bool initialized = false;
        this->charmap = &charmap[0];
        charmap_str = &str_0123456789_abcdefghijklmnopqrstuvwxyz_abcdefghijklmnopqrstuvwxyz_2;
        if (!initialized) {
            initialized = true;
            initialize(*charmap_str);
        }
        transparent_color = Color(0, 0, 0);
        wrap = true;
        set_text(std::string("...", 3));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_subtitletext_3433(int x, int y)
{
    return new (TextBlitter::pool.create()) SubtitleText_3433(x, y);
}
class FDHangarCurve1_3434 : public Backdrop
{
public:
    FDHangarCurve1_3434(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarCurve 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14372);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarcurve1_3434(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarCurve1_3434(x, y);
}
class FDHangarCurve3_3435 : public Backdrop
{
public:
    FDHangarCurve3_3435(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarCurve 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14378);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarcurve3_3435(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarCurve3_3435(x, y);
}
class LevelParallaxTunnel2_3436 : public SystemBox
{
public:
    LevelParallaxTunnel2_3436(int x, int y) : SystemBox(x, y, LevelParallaxTunnel2_3436_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_ParallaxTunnel 2", 22);
#endif
        flags |= BACKGROUND;
        width = 64;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3807);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxtunnel2_3436(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxTunnel2_3436(x, y);
}
class LevelParallaxTunnel1_3437 : public SystemBox
{
public:
    LevelParallaxTunnel1_3437(int x, int y) : SystemBox(x, y, LevelParallaxTunnel1_3437_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_ParallaxTunnel 1", 22);
#endif
        flags |= BACKGROUND;
        width = 64;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(15097);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxtunnel1_3437(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxTunnel1_3437(x, y);
}
static Image* images_effectairlockwind_3438_0_0[1];
static Direction direction_effectairlockwind_3438_0_0 = {0, 50, 50, 0, 1, images_effectairlockwind_3438_0_0, 1};
static Animation anim_effectairlockwind_3438_0 = {&direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, NULL, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0, &direction_effectairlockwind_3438_0_0};
static Animation * anim_array_effectairlockwind_3438[1] = {&anim_effectairlockwind_3438_0};
static Animations anim_effectairlockwind_3438 = {1, &anim_array_effectairlockwind_3438[0]};
static bool anim_effectairlockwind_3438_initialized;
class EffectAirlockWind_3438 : public Active
{
public:
    EffectAirlockWind_3438(int x, int y) : Active(x, y, EffectAirlockWind_3438_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_AirlockWind", 18);
#endif
        this->animations = &anim_effectairlockwind_3438;
        if (!anim_effectairlockwind_3438_initialized) {
            anim_effectairlockwind_3438_initialized = true;
            images_effectairlockwind_3438_0_0[0] = get_internal_image(15111);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 20);
    }
};
FrameObject * create_effectairlockwind_3438(int x, int y)
{
    return new (Active::pool.create()) EffectAirlockWind_3438(x, y);
}
static Image* images_scrollingfloor_3439_0_0[1];
static Direction direction_scrollingfloor_3439_0_0 = {0, 50, 50, 0, 1, images_scrollingfloor_3439_0_0, 1};
static Animation anim_scrollingfloor_3439_0 = {&direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, NULL, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0, &direction_scrollingfloor_3439_0_0};
static Animation * anim_array_scrollingfloor_3439[1] = {&anim_scrollingfloor_3439_0};
static Animations anim_scrollingfloor_3439 = {1, &anim_array_scrollingfloor_3439[0]};
static bool anim_scrollingfloor_3439_initialized;
class ScrollingFloor_3439 : public Active
{
public:
    ScrollingFloor_3439(int x, int y) : Active(x, y, ScrollingFloor_3439_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ScrollingFloor", 14);
#endif
        this->animations = &anim_scrollingfloor_3439;
        if (!anim_scrollingfloor_3439_initialized) {
            anim_scrollingfloor_3439_initialized = true;
            images_scrollingfloor_3439_0_0[0] = get_internal_image(15107);
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
FrameObject * create_scrollingfloor_3439(int x, int y)
{
    return new (Active::pool.create()) ScrollingFloor_3439(x, y);
}
static Image* images_scrollingfloor2_3440_0_0[1];
static Direction direction_scrollingfloor2_3440_0_0 = {0, 50, 50, 0, 1, images_scrollingfloor2_3440_0_0, 1};
static Animation anim_scrollingfloor2_3440_0 = {&direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, NULL, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0, &direction_scrollingfloor2_3440_0_0};
static Animation * anim_array_scrollingfloor2_3440[1] = {&anim_scrollingfloor2_3440_0};
static Animations anim_scrollingfloor2_3440 = {1, &anim_array_scrollingfloor2_3440[0]};
static bool anim_scrollingfloor2_3440_initialized;
class ScrollingFloor2_3440 : public Active
{
public:
    ScrollingFloor2_3440(int x, int y) : Active(x, y, ScrollingFloor2_3440_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("ScrollingFloor 2", 16);
#endif
        this->animations = &anim_scrollingfloor2_3440;
        if (!anim_scrollingfloor2_3440_initialized) {
            anim_scrollingfloor2_3440_initialized = true;
            images_scrollingfloor2_3440_0_0[0] = get_internal_image(15101);
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
FrameObject * create_scrollingfloor2_3440(int x, int y)
{
    return new (Active::pool.create()) ScrollingFloor2_3440(x, y);
}
static Image* images_bosstrainbream_3441_0_0[2];
static Direction direction_bosstrainbream_3441_0_0 = {0, 25, 25, 0, -1, images_bosstrainbream_3441_0_0, 2};
static Image* images_bosstrainbream_3441_0_8[2];
static Direction direction_bosstrainbream_3441_0_8 = {8, 25, 25, 0, -1, images_bosstrainbream_3441_0_8, 2};
static Image* images_bosstrainbream_3441_0_24[2];
static Direction direction_bosstrainbream_3441_0_24 = {24, 25, 25, 0, -1, images_bosstrainbream_3441_0_24, 2};
static Animation anim_bosstrainbream_3441_0 = {&direction_bosstrainbream_3441_0_0, &direction_bosstrainbream_3441_0_0, &direction_bosstrainbream_3441_0_0, &direction_bosstrainbream_3441_0_0, NULL, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, &direction_bosstrainbream_3441_0_8, NULL, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, &direction_bosstrainbream_3441_0_24, NULL, &direction_bosstrainbream_3441_0_0, &direction_bosstrainbream_3441_0_0, &direction_bosstrainbream_3441_0_0};
static Animation * anim_array_bosstrainbream_3441[1] = {&anim_bosstrainbream_3441_0};
static Animations anim_bosstrainbream_3441 = {1, &anim_array_bosstrainbream_3441[0]};
static bool anim_bosstrainbream_3441_initialized;
class BossTrainBream_3441 : public Active
{
public:
    BossTrainBream_3441(int x, int y) : Active(x, y, BossTrainBream_3441_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_TrainBream", 15);
#endif
        this->animations = &anim_bosstrainbream_3441;
        if (!anim_bosstrainbream_3441_initialized) {
            anim_bosstrainbream_3441_initialized = true;
            images_bosstrainbream_3441_0_0[0] = get_internal_image(15114);
            images_bosstrainbream_3441_0_0[1] = get_internal_image(15121);
            images_bosstrainbream_3441_0_8[0] = get_internal_image(15123);
            images_bosstrainbream_3441_0_8[1] = get_internal_image(15124);
            images_bosstrainbream_3441_0_24[0] = get_internal_image(15125);
            images_bosstrainbream_3441_0_24[1] = get_internal_image(15127);
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
FrameObject * create_bosstrainbream_3441(int x, int y)
{
    return new (Active::pool.create()) BossTrainBream_3441(x, y);
}
static Image* images_bosssyntaxelecball_3442_0_0[8];
static Direction direction_bosssyntaxelecball_3442_0_0 = {0, 100, 100, 0, -1, images_bosssyntaxelecball_3442_0_0, 8};
static Animation anim_bosssyntaxelecball_3442_0 = {&direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, NULL, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0, &direction_bosssyntaxelecball_3442_0_0};
static Animation * anim_array_bosssyntaxelecball_3442[1] = {&anim_bosssyntaxelecball_3442_0};
static Animations anim_bosssyntaxelecball_3442 = {1, &anim_array_bosssyntaxelecball_3442[0]};
static bool anim_bosssyntaxelecball_3442_initialized;
class BossSyntaxElecBall_3442 : public Active
{
public:
    BossSyntaxElecBall_3442(int x, int y) : Active(x, y, BossSyntaxElecBall_3442_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxElecBall", 19);
#endif
        this->animations = &anim_bosssyntaxelecball_3442;
        if (!anim_bosssyntaxelecball_3442_initialized) {
            anim_bosssyntaxelecball_3442_initialized = true;
            images_bosssyntaxelecball_3442_0_0[0] = get_internal_image(1916);
            images_bosssyntaxelecball_3442_0_0[1] = get_internal_image(1931);
            images_bosssyntaxelecball_3442_0_0[2] = get_internal_image(1932);
            images_bosssyntaxelecball_3442_0_0[3] = get_internal_image(1934);
            images_bosssyntaxelecball_3442_0_0[4] = get_internal_image(2038);
            images_bosssyntaxelecball_3442_0_0[5] = get_internal_image(2039);
            images_bosssyntaxelecball_3442_0_0[6] = get_internal_image(2276);
            images_bosssyntaxelecball_3442_0_0[7] = get_internal_image(2277);
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
FrameObject * create_bosssyntaxelecball_3442(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxElecBall_3442(x, y);
}
class QuickBackdrop2_3443 : public QuickBackdrop
{
public:
    QuickBackdrop2_3443(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 1920;
        height = 192;
        image = get_internal_image(15118);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_3443(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_3443(x, y);
}
class QuickBackdrop_3444 : public QuickBackdrop
{
public:
    QuickBackdrop_3444(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 192;
        height = 2432;
        image = get_internal_image(15113);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_3444(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_3444(x, y);
}
static Image* images_effectspeedback_3445_0_0[1];
static Direction direction_effectspeedback_3445_0_0 = {0, 50, 50, 0, 1, images_effectspeedback_3445_0_0, 1};
static Animation anim_effectspeedback_3445_0 = {&direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, NULL, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0, &direction_effectspeedback_3445_0_0};
static Animation * anim_array_effectspeedback_3445[1] = {&anim_effectspeedback_3445_0};
static Animations anim_effectspeedback_3445 = {1, &anim_array_effectspeedback_3445[0]};
static bool anim_effectspeedback_3445_initialized;
class EffectSpeedBack_3445 : public Active
{
public:
    EffectSpeedBack_3445(int x, int y) : Active(x, y, EffectSpeedBack_3445_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_SpeedBack", 16);
#endif
        set_visible(false);
        this->animations = &anim_effectspeedback_3445;
        if (!anim_effectspeedback_3445_initialized) {
            anim_effectspeedback_3445_initialized = true;
            images_effectspeedback_3445_0_0[0] = get_internal_image(15198);
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
FrameObject * create_effectspeedback_3445(int x, int y)
{
    return new (Active::pool.create()) EffectSpeedBack_3445(x, y);
}
static Image* images_pressuredoor1_3446_0_0[1];
static Direction direction_pressuredoor1_3446_0_0 = {0, 50, 50, 0, 1, images_pressuredoor1_3446_0_0, 1};
static Animation anim_pressuredoor1_3446_0 = {&direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, NULL, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0, &direction_pressuredoor1_3446_0_0};
static Image* images_pressuredoor1_3446_7_0[3];
static Direction direction_pressuredoor1_3446_7_0 = {0, 50, 50, 0, 1, images_pressuredoor1_3446_7_0, 3};
static Animation anim_pressuredoor1_3446_7 = {&direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, NULL, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0, &direction_pressuredoor1_3446_7_0};
static Animation * anim_array_pressuredoor1_3446[8] = {&anim_pressuredoor1_3446_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_pressuredoor1_3446_7};
static Animations anim_pressuredoor1_3446 = {8, &anim_array_pressuredoor1_3446[0]};
static bool anim_pressuredoor1_3446_initialized;
class PressureDoor1_3446 : public Active
{
public:
    PressureDoor1_3446(int x, int y) : Active(x, y, PressureDoor1_3446_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PressureDoor 1", 14);
#endif
        this->animations = &anim_pressuredoor1_3446;
        if (!anim_pressuredoor1_3446_initialized) {
            anim_pressuredoor1_3446_initialized = true;
            images_pressuredoor1_3446_0_0[0] = get_internal_image(15187);
            images_pressuredoor1_3446_7_0[0] = get_internal_image(15194);
            images_pressuredoor1_3446_7_0[1] = get_internal_image(15192);
            images_pressuredoor1_3446_7_0[2] = get_internal_image(15193);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -192);
    }
};
FrameObject * create_pressuredoor1_3446(int x, int y)
{
    return new (Active::pool.create()) PressureDoor1_3446(x, y);
}
static Image* images_pressuredoor2_3447_0_0[1];
static Direction direction_pressuredoor2_3447_0_0 = {0, 50, 50, 0, 1, images_pressuredoor2_3447_0_0, 1};
static Animation anim_pressuredoor2_3447_0 = {&direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, NULL, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0, &direction_pressuredoor2_3447_0_0};
static Image* images_pressuredoor2_3447_7_0[3];
static Direction direction_pressuredoor2_3447_7_0 = {0, 50, 50, 0, 1, images_pressuredoor2_3447_7_0, 3};
static Animation anim_pressuredoor2_3447_7 = {&direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, NULL, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0, &direction_pressuredoor2_3447_7_0};
static Animation * anim_array_pressuredoor2_3447[8] = {&anim_pressuredoor2_3447_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_pressuredoor2_3447_7};
static Animations anim_pressuredoor2_3447 = {8, &anim_array_pressuredoor2_3447[0]};
static bool anim_pressuredoor2_3447_initialized;
class PressureDoor2_3447 : public Active
{
public:
    PressureDoor2_3447(int x, int y) : Active(x, y, PressureDoor2_3447_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PressureDoor 2", 14);
#endif
        this->animations = &anim_pressuredoor2_3447;
        if (!anim_pressuredoor2_3447_initialized) {
            anim_pressuredoor2_3447_initialized = true;
            images_pressuredoor2_3447_0_0[0] = get_internal_image(15191);
            images_pressuredoor2_3447_7_0[0] = get_internal_image(15190);
            images_pressuredoor2_3447_7_0[1] = get_internal_image(15188);
            images_pressuredoor2_3447_7_0[2] = get_internal_image(15189);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 192);
    }
};
FrameObject * create_pressuredoor2_3447(int x, int y)
{
    return new (Active::pool.create()) PressureDoor2_3447(x, y);
}
class FDLadder_3448 : public Backdrop
{
public:
    FDLadder_3448(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10586);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_fdladder_3448(int x, int y)
{
    return new (Backdrop::pool.create()) FDLadder_3448(x, y);
}
class Backdrop_3449 : public Backdrop
{
public:
    Backdrop_3449(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15107);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_backdrop_3449(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_3449(x, y);
}
class Backdrop2_3450 : public Backdrop
{
public:
    Backdrop2_3450(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15101);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_backdrop2_3450(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_3450(x, y);
}
static Image* images_airlock2_3451_0_0[1];
static Direction direction_airlock2_3451_0_0 = {0, 50, 50, 0, 1, images_airlock2_3451_0_0, 1};
static Animation anim_airlock2_3451_0 = {&direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, NULL, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0, &direction_airlock2_3451_0_0};
static Animation * anim_array_airlock2_3451[1] = {&anim_airlock2_3451_0};
static Animations anim_airlock2_3451 = {1, &anim_array_airlock2_3451[0]};
static bool anim_airlock2_3451_initialized;
class Airlock2_3451 : public Active
{
public:
    Airlock2_3451(int x, int y) : Active(x, y, Airlock2_3451_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Airlock 2", 9);
#endif
        this->animations = &anim_airlock2_3451;
        if (!anim_airlock2_3451_initialized) {
            anim_airlock2_3451_initialized = true;
            images_airlock2_3451_0_0[0] = get_internal_image(4454);
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
FrameObject * create_airlock2_3451(int x, int y)
{
    return new (Active::pool.create()) Airlock2_3451(x, y);
}
static Image* images_airlock3_3452_0_0[1];
static Direction direction_airlock3_3452_0_0 = {0, 50, 50, 0, 1, images_airlock3_3452_0_0, 1};
static Animation anim_airlock3_3452_0 = {&direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, NULL, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0, &direction_airlock3_3452_0_0};
static Animation * anim_array_airlock3_3452[1] = {&anim_airlock3_3452_0};
static Animations anim_airlock3_3452 = {1, &anim_array_airlock3_3452[0]};
static bool anim_airlock3_3452_initialized;
class Airlock3_3452 : public Active
{
public:
    Airlock3_3452(int x, int y) : Active(x, y, Airlock3_3452_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Airlock 3", 9);
#endif
        this->animations = &anim_airlock3_3452;
        if (!anim_airlock3_3452_initialized) {
            anim_airlock3_3452_initialized = true;
            images_airlock3_3452_0_0[0] = get_internal_image(12188);
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
FrameObject * create_airlock3_3452(int x, int y)
{
    return new (Active::pool.create()) Airlock3_3452(x, y);
}
static Image* images_airlock1_3453_0_0[1];
static Direction direction_airlock1_3453_0_0 = {0, 50, 50, 0, 1, images_airlock1_3453_0_0, 1};
static Animation anim_airlock1_3453_0 = {&direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, NULL, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0, &direction_airlock1_3453_0_0};
static Animation * anim_array_airlock1_3453[1] = {&anim_airlock1_3453_0};
static Animations anim_airlock1_3453 = {1, &anim_array_airlock1_3453[0]};
static bool anim_airlock1_3453_initialized;
class Airlock1_3453 : public Active
{
public:
    Airlock1_3453(int x, int y) : Active(x, y, Airlock1_3453_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Airlock 1", 9);
#endif
        this->animations = &anim_airlock1_3453;
        if (!anim_airlock1_3453_initialized) {
            anim_airlock1_3453_initialized = true;
            images_airlock1_3453_0_0[0] = get_internal_image(14998);
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
FrameObject * create_airlock1_3453(int x, int y)
{
    return new (Active::pool.create()) Airlock1_3453(x, y);
}
static Image* images_airlock4_3454_0_0[1];
static Direction direction_airlock4_3454_0_0 = {0, 50, 50, 0, 1, images_airlock4_3454_0_0, 1};
static Animation anim_airlock4_3454_0 = {&direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, NULL, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0, &direction_airlock4_3454_0_0};
static Animation * anim_array_airlock4_3454[1] = {&anim_airlock4_3454_0};
static Animations anim_airlock4_3454 = {1, &anim_array_airlock4_3454[0]};
static bool anim_airlock4_3454_initialized;
class Airlock4_3454 : public Active
{
public:
    Airlock4_3454(int x, int y) : Active(x, y, Airlock4_3454_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Airlock 4", 9);
#endif
        this->animations = &anim_airlock4_3454;
        if (!anim_airlock4_3454_initialized) {
            anim_airlock4_3454_initialized = true;
            images_airlock4_3454_0_0[0] = get_internal_image(15005);
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
FrameObject * create_airlock4_3454(int x, int y)
{
    return new (Active::pool.create()) Airlock4_3454(x, y);
}
static Image* images_airlockbase_3455_0_0[1];
static Direction direction_airlockbase_3455_0_0 = {0, 50, 50, 0, 1, images_airlockbase_3455_0_0, 1};
static Animation anim_airlockbase_3455_0 = {&direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, NULL, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0, &direction_airlockbase_3455_0_0};
static Animation * anim_array_airlockbase_3455[1] = {&anim_airlockbase_3455_0};
static Animations anim_airlockbase_3455 = {1, &anim_array_airlockbase_3455[0]};
static bool anim_airlockbase_3455_initialized;
class AirlockBase_3455 : public Active
{
public:
    AirlockBase_3455(int x, int y) : Active(x, y, AirlockBase_3455_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Airlock_Base", 12);
#endif
        set_visible(false);
        this->animations = &anim_airlockbase_3455;
        if (!anim_airlockbase_3455_initialized) {
            anim_airlockbase_3455_initialized = true;
            images_airlockbase_3455_0_0[0] = get_internal_image(15007);
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
FrameObject * create_airlockbase_3455(int x, int y)
{
    return new (Active::pool.create()) AirlockBase_3455(x, y);
}
static Image* images_bossmorpherorb2_3456_0_0[2];
static Direction direction_bossmorpherorb2_3456_0_0 = {0, 0, 0, 0, 1, images_bossmorpherorb2_3456_0_0, 2};
static Animation anim_bossmorpherorb2_3456_0 = {&direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, NULL, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0, &direction_bossmorpherorb2_3456_0_0};
static Image* images_bossmorpherorb2_3456_7_0[2];
static Direction direction_bossmorpherorb2_3456_7_0 = {0, 50, 50, 0, -1, images_bossmorpherorb2_3456_7_0, 2};
static Animation anim_bossmorpherorb2_3456_7 = {&direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, NULL, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0, &direction_bossmorpherorb2_3456_7_0};
static Animation * anim_array_bossmorpherorb2_3456[8] = {&anim_bossmorpherorb2_3456_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherorb2_3456_7};
static Animations anim_bossmorpherorb2_3456 = {8, &anim_array_bossmorpherorb2_3456[0]};
static bool anim_bossmorpherorb2_3456_initialized;
class BossMorpherOrb2_3456 : public Active
{
public:
    BossMorpherOrb2_3456(int x, int y) : Active(x, y, BossMorpherOrb2_3456_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherOrb 2", 17);
#endif
        this->animations = &anim_bossmorpherorb2_3456;
        if (!anim_bossmorpherorb2_3456_initialized) {
            anim_bossmorpherorb2_3456_initialized = true;
            images_bossmorpherorb2_3456_0_0[0] = get_internal_image(15740);
            images_bossmorpherorb2_3456_0_0[1] = get_internal_image(15741);
            images_bossmorpherorb2_3456_7_0[0] = get_internal_image(15196);
            images_bossmorpherorb2_3456_7_0[1] = get_internal_image(15195);
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
FrameObject * create_bossmorpherorb2_3456(int x, int y)
{
    return new (Active::pool.create()) BossMorpherOrb2_3456(x, y);
}
static Image* images_bossmorpherorb1_3457_0_0[2];
static Direction direction_bossmorpherorb1_3457_0_0 = {0, 0, 0, 0, 1, images_bossmorpherorb1_3457_0_0, 2};
static Animation anim_bossmorpherorb1_3457_0 = {&direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, NULL, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0, &direction_bossmorpherorb1_3457_0_0};
static Image* images_bossmorpherorb1_3457_7_0[2];
static Direction direction_bossmorpherorb1_3457_7_0 = {0, 50, 50, 0, -1, images_bossmorpherorb1_3457_7_0, 2};
static Animation anim_bossmorpherorb1_3457_7 = {&direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, NULL, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0, &direction_bossmorpherorb1_3457_7_0};
static Animation * anim_array_bossmorpherorb1_3457[8] = {&anim_bossmorpherorb1_3457_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherorb1_3457_7};
static Animations anim_bossmorpherorb1_3457 = {8, &anim_array_bossmorpherorb1_3457[0]};
static bool anim_bossmorpherorb1_3457_initialized;
class BossMorpherOrb1_3457 : public Active
{
public:
    BossMorpherOrb1_3457(int x, int y) : Active(x, y, BossMorpherOrb1_3457_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherOrb 1", 17);
#endif
        this->animations = &anim_bossmorpherorb1_3457;
        if (!anim_bossmorpherorb1_3457_initialized) {
            anim_bossmorpherorb1_3457_initialized = true;
            images_bossmorpherorb1_3457_0_0[0] = get_internal_image(15740);
            images_bossmorpherorb1_3457_0_0[1] = get_internal_image(15741);
            images_bossmorpherorb1_3457_7_0[0] = get_internal_image(15196);
            images_bossmorpherorb1_3457_7_0[1] = get_internal_image(15195);
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
FrameObject * create_bossmorpherorb1_3457(int x, int y)
{
    return new (Active::pool.create()) BossMorpherOrb1_3457(x, y);
}
static Image* images_bosssyntaxvalues_3458_0_0[1];
static Direction direction_bosssyntaxvalues_3458_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxvalues_3458_0_0, 1};
static Animation anim_bosssyntaxvalues_3458_0 = {&direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, NULL, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0, &direction_bosssyntaxvalues_3458_0_0};
static Animation * anim_array_bosssyntaxvalues_3458[1] = {&anim_bosssyntaxvalues_3458_0};
static Animations anim_bosssyntaxvalues_3458 = {1, &anim_array_bosssyntaxvalues_3458[0]};
static bool anim_bosssyntaxvalues_3458_initialized;
class BossSyntaxValues_3458 : public Active
{
public:
    BossSyntaxValues_3458(int x, int y) : Active(x, y, BossSyntaxValues_3458_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxValues", 17);
#endif
        this->animations = &anim_bosssyntaxvalues_3458;
        if (!anim_bosssyntaxvalues_3458_initialized) {
            anim_bosssyntaxvalues_3458_initialized = true;
            images_bosssyntaxvalues_3458_0_0[0] = get_internal_image(371);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->strings.set(0, str_234_3);
    }
};
FrameObject * create_bosssyntaxvalues_3458(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxValues_3458(x, y);
}
static Image* images_bossmorpherpelvis_3459_0_0[1];
static Direction direction_bossmorpherpelvis_3459_0_0 = {0, 50, 50, 0, 1, images_bossmorpherpelvis_3459_0_0, 1};
static Animation anim_bossmorpherpelvis_3459_0 = {&direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, NULL, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0, &direction_bossmorpherpelvis_3459_0_0};
static Image* images_bossmorpherpelvis_3459_7_0[2];
static Direction direction_bossmorpherpelvis_3459_7_0 = {0, 50, 50, 0, -1, images_bossmorpherpelvis_3459_7_0, 2};
static Animation anim_bossmorpherpelvis_3459_7 = {&direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, NULL, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0, &direction_bossmorpherpelvis_3459_7_0};
static Animation * anim_array_bossmorpherpelvis_3459[8] = {&anim_bossmorpherpelvis_3459_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherpelvis_3459_7};
static Animations anim_bossmorpherpelvis_3459 = {8, &anim_array_bossmorpherpelvis_3459[0]};
static bool anim_bossmorpherpelvis_3459_initialized;
class BossMorpherPelvis_3459 : public Active
{
public:
    BossMorpherPelvis_3459(int x, int y) : Active(x, y, BossMorpherPelvis_3459_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherPelvis", 18);
#endif
        this->animations = &anim_bossmorpherpelvis_3459;
        if (!anim_bossmorpherpelvis_3459_initialized) {
            anim_bossmorpherpelvis_3459_initialized = true;
            images_bossmorpherpelvis_3459_0_0[0] = get_internal_image(15743);
            images_bossmorpherpelvis_3459_7_0[0] = get_internal_image(15034);
            images_bossmorpherpelvis_3459_7_0[1] = get_internal_image(15033);
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
FrameObject * create_bossmorpherpelvis_3459(int x, int y)
{
    return new (Active::pool.create()) BossMorpherPelvis_3459(x, y);
}
static Image* images_bossmorpherwheel4_3460_0_0[1];
static Direction direction_bossmorpherwheel4_3460_0_0 = {0, 50, 50, 0, 1, images_bossmorpherwheel4_3460_0_0, 1};
static Animation anim_bossmorpherwheel4_3460_0 = {&direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, NULL, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0, &direction_bossmorpherwheel4_3460_0_0};
static Image* images_bossmorpherwheel4_3460_7_0[2];
static Direction direction_bossmorpherwheel4_3460_7_0 = {0, 50, 50, 0, -1, images_bossmorpherwheel4_3460_7_0, 2};
static Animation anim_bossmorpherwheel4_3460_7 = {&direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, NULL, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0, &direction_bossmorpherwheel4_3460_7_0};
static Animation * anim_array_bossmorpherwheel4_3460[8] = {&anim_bossmorpherwheel4_3460_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherwheel4_3460_7};
static Animations anim_bossmorpherwheel4_3460 = {8, &anim_array_bossmorpherwheel4_3460[0]};
static bool anim_bossmorpherwheel4_3460_initialized;
class BossMorpherWheel4_3460 : public Active
{
public:
    BossMorpherWheel4_3460(int x, int y) : Active(x, y, BossMorpherWheel4_3460_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherWheel 4", 19);
#endif
        this->animations = &anim_bossmorpherwheel4_3460;
        if (!anim_bossmorpherwheel4_3460_initialized) {
            anim_bossmorpherwheel4_3460_initialized = true;
            images_bossmorpherwheel4_3460_0_0[0] = get_internal_image(15131);
            images_bossmorpherwheel4_3460_7_0[0] = get_internal_image(15117);
            images_bossmorpherwheel4_3460_7_0[1] = get_internal_image(15088);
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
FrameObject * create_bossmorpherwheel4_3460(int x, int y)
{
    return new (Active::pool.create()) BossMorpherWheel4_3460(x, y);
}
static Image* images_bossmorpherwheel3_3461_0_0[1];
static Direction direction_bossmorpherwheel3_3461_0_0 = {0, 50, 50, 0, 1, images_bossmorpherwheel3_3461_0_0, 1};
static Animation anim_bossmorpherwheel3_3461_0 = {&direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, NULL, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0, &direction_bossmorpherwheel3_3461_0_0};
static Image* images_bossmorpherwheel3_3461_7_0[2];
static Direction direction_bossmorpherwheel3_3461_7_0 = {0, 50, 50, 0, -1, images_bossmorpherwheel3_3461_7_0, 2};
static Animation anim_bossmorpherwheel3_3461_7 = {&direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, NULL, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0, &direction_bossmorpherwheel3_3461_7_0};
static Animation * anim_array_bossmorpherwheel3_3461[8] = {&anim_bossmorpherwheel3_3461_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherwheel3_3461_7};
static Animations anim_bossmorpherwheel3_3461 = {8, &anim_array_bossmorpherwheel3_3461[0]};
static bool anim_bossmorpherwheel3_3461_initialized;
class BossMorpherWheel3_3461 : public Active
{
public:
    BossMorpherWheel3_3461(int x, int y) : Active(x, y, BossMorpherWheel3_3461_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherWheel 3", 19);
#endif
        this->animations = &anim_bossmorpherwheel3_3461;
        if (!anim_bossmorpherwheel3_3461_initialized) {
            anim_bossmorpherwheel3_3461_initialized = true;
            images_bossmorpherwheel3_3461_0_0[0] = get_internal_image(15132);
            images_bossmorpherwheel3_3461_7_0[0] = get_internal_image(15086);
            images_bossmorpherwheel3_3461_7_0[1] = get_internal_image(15084);
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
FrameObject * create_bossmorpherwheel3_3461(int x, int y)
{
    return new (Active::pool.create()) BossMorpherWheel3_3461(x, y);
}
static Image* images_bossmorpherwheel2_3462_0_0[1];
static Direction direction_bossmorpherwheel2_3462_0_0 = {0, 50, 50, 0, 1, images_bossmorpherwheel2_3462_0_0, 1};
static Animation anim_bossmorpherwheel2_3462_0 = {&direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, NULL, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0, &direction_bossmorpherwheel2_3462_0_0};
static Image* images_bossmorpherwheel2_3462_7_0[2];
static Direction direction_bossmorpherwheel2_3462_7_0 = {0, 50, 50, 0, -1, images_bossmorpherwheel2_3462_7_0, 2};
static Animation anim_bossmorpherwheel2_3462_7 = {&direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, NULL, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0, &direction_bossmorpherwheel2_3462_7_0};
static Animation * anim_array_bossmorpherwheel2_3462[8] = {&anim_bossmorpherwheel2_3462_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherwheel2_3462_7};
static Animations anim_bossmorpherwheel2_3462 = {8, &anim_array_bossmorpherwheel2_3462[0]};
static bool anim_bossmorpherwheel2_3462_initialized;
class BossMorpherWheel2_3462 : public Active
{
public:
    BossMorpherWheel2_3462(int x, int y) : Active(x, y, BossMorpherWheel2_3462_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherWheel 2", 19);
#endif
        this->animations = &anim_bossmorpherwheel2_3462;
        if (!anim_bossmorpherwheel2_3462_initialized) {
            anim_bossmorpherwheel2_3462_initialized = true;
            images_bossmorpherwheel2_3462_0_0[0] = get_internal_image(15133);
            images_bossmorpherwheel2_3462_7_0[0] = get_internal_image(15081);
            images_bossmorpherwheel2_3462_7_0[1] = get_internal_image(15080);
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
FrameObject * create_bossmorpherwheel2_3462(int x, int y)
{
    return new (Active::pool.create()) BossMorpherWheel2_3462(x, y);
}
static Image* images_bossmorpherwheel1_3463_0_0[1];
static Direction direction_bossmorpherwheel1_3463_0_0 = {0, 50, 50, 0, 1, images_bossmorpherwheel1_3463_0_0, 1};
static Animation anim_bossmorpherwheel1_3463_0 = {&direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, NULL, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0, &direction_bossmorpherwheel1_3463_0_0};
static Image* images_bossmorpherwheel1_3463_7_0[2];
static Direction direction_bossmorpherwheel1_3463_7_0 = {0, 50, 50, 0, -1, images_bossmorpherwheel1_3463_7_0, 2};
static Animation anim_bossmorpherwheel1_3463_7 = {&direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, NULL, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0, &direction_bossmorpherwheel1_3463_7_0};
static Animation * anim_array_bossmorpherwheel1_3463[8] = {&anim_bossmorpherwheel1_3463_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherwheel1_3463_7};
static Animations anim_bossmorpherwheel1_3463 = {8, &anim_array_bossmorpherwheel1_3463[0]};
static bool anim_bossmorpherwheel1_3463_initialized;
class BossMorpherWheel1_3463 : public Active
{
public:
    BossMorpherWheel1_3463(int x, int y) : Active(x, y, BossMorpherWheel1_3463_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherWheel 1", 19);
#endif
        this->animations = &anim_bossmorpherwheel1_3463;
        if (!anim_bossmorpherwheel1_3463_initialized) {
            anim_bossmorpherwheel1_3463_initialized = true;
            images_bossmorpherwheel1_3463_0_0[0] = get_internal_image(15140);
            images_bossmorpherwheel1_3463_7_0[0] = get_internal_image(15039);
            images_bossmorpherwheel1_3463_7_0[1] = get_internal_image(15037);
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
FrameObject * create_bossmorpherwheel1_3463(int x, int y)
{
    return new (Active::pool.create()) BossMorpherWheel1_3463(x, y);
}
static Image* images_bossmorphertube1_3464_0_0[1];
static Direction direction_bossmorphertube1_3464_0_0 = {0, 50, 50, 0, 1, images_bossmorphertube1_3464_0_0, 1};
static Image* images_bossmorphertube1_3464_0_16[1];
static Direction direction_bossmorphertube1_3464_0_16 = {16, 50, 50, 0, 1, images_bossmorphertube1_3464_0_16, 1};
static Animation anim_bossmorphertube1_3464_0 = {&direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, NULL, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, &direction_bossmorphertube1_3464_0_16, NULL, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0, &direction_bossmorphertube1_3464_0_0};
static Image* images_bossmorphertube1_3464_7_0[2];
static Direction direction_bossmorphertube1_3464_7_0 = {0, 50, 50, 0, -1, images_bossmorphertube1_3464_7_0, 2};
static Animation anim_bossmorphertube1_3464_7 = {&direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, NULL, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0, &direction_bossmorphertube1_3464_7_0};
static Animation * anim_array_bossmorphertube1_3464[8] = {&anim_bossmorphertube1_3464_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphertube1_3464_7};
static Animations anim_bossmorphertube1_3464 = {8, &anim_array_bossmorphertube1_3464[0]};
static bool anim_bossmorphertube1_3464_initialized;
class BossMorpherTube1_3464 : public Active
{
public:
    BossMorpherTube1_3464(int x, int y) : Active(x, y, BossMorpherTube1_3464_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherTube 1", 18);
#endif
        this->animations = &anim_bossmorphertube1_3464;
        if (!anim_bossmorphertube1_3464_initialized) {
            anim_bossmorphertube1_3464_initialized = true;
            images_bossmorphertube1_3464_0_0[0] = get_internal_image(15739);
            images_bossmorphertube1_3464_0_16[0] = get_internal_image(15722);
            images_bossmorphertube1_3464_7_0[0] = get_internal_image(15172);
            images_bossmorphertube1_3464_7_0[1] = get_internal_image(15157);
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
FrameObject * create_bossmorphertube1_3464(int x, int y)
{
    return new (Active::pool.create()) BossMorpherTube1_3464(x, y);
}
static Image* images_bossmorphertube2_3465_0_0[1];
static Direction direction_bossmorphertube2_3465_0_0 = {0, 50, 50, 0, 1, images_bossmorphertube2_3465_0_0, 1};
static Image* images_bossmorphertube2_3465_0_16[1];
static Direction direction_bossmorphertube2_3465_0_16 = {16, 50, 50, 0, 1, images_bossmorphertube2_3465_0_16, 1};
static Animation anim_bossmorphertube2_3465_0 = {&direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, NULL, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, &direction_bossmorphertube2_3465_0_16, NULL, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0, &direction_bossmorphertube2_3465_0_0};
static Image* images_bossmorphertube2_3465_7_0[2];
static Direction direction_bossmorphertube2_3465_7_0 = {0, 50, 50, 0, -1, images_bossmorphertube2_3465_7_0, 2};
static Animation anim_bossmorphertube2_3465_7 = {&direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, NULL, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0, &direction_bossmorphertube2_3465_7_0};
static Animation * anim_array_bossmorphertube2_3465[8] = {&anim_bossmorphertube2_3465_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphertube2_3465_7};
static Animations anim_bossmorphertube2_3465 = {8, &anim_array_bossmorphertube2_3465[0]};
static bool anim_bossmorphertube2_3465_initialized;
class BossMorpherTube2_3465 : public Active
{
public:
    BossMorpherTube2_3465(int x, int y) : Active(x, y, BossMorpherTube2_3465_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherTube 2", 18);
#endif
        this->animations = &anim_bossmorphertube2_3465;
        if (!anim_bossmorphertube2_3465_initialized) {
            anim_bossmorphertube2_3465_initialized = true;
            images_bossmorphertube2_3465_0_0[0] = get_internal_image(15738);
            images_bossmorphertube2_3465_0_16[0] = get_internal_image(15720);
            images_bossmorphertube2_3465_7_0[0] = get_internal_image(15156);
            images_bossmorphertube2_3465_7_0[1] = get_internal_image(15126);
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
FrameObject * create_bossmorphertube2_3465(int x, int y)
{
    return new (Active::pool.create()) BossMorpherTube2_3465(x, y);
}
static Image* images_bossmorphergrill2_3466_0_0[1];
static Direction direction_bossmorphergrill2_3466_0_0 = {0, 50, 50, 0, 1, images_bossmorphergrill2_3466_0_0, 1};
static Image* images_bossmorphergrill2_3466_0_16[1];
static Direction direction_bossmorphergrill2_3466_0_16 = {16, 50, 50, 0, 1, images_bossmorphergrill2_3466_0_16, 1};
static Animation anim_bossmorphergrill2_3466_0 = {&direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, NULL, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, &direction_bossmorphergrill2_3466_0_16, NULL, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0, &direction_bossmorphergrill2_3466_0_0};
static Image* images_bossmorphergrill2_3466_7_0[2];
static Direction direction_bossmorphergrill2_3466_7_0 = {0, 50, 50, 0, -1, images_bossmorphergrill2_3466_7_0, 2};
static Animation anim_bossmorphergrill2_3466_7 = {&direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, NULL, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0, &direction_bossmorphergrill2_3466_7_0};
static Animation * anim_array_bossmorphergrill2_3466[8] = {&anim_bossmorphergrill2_3466_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphergrill2_3466_7};
static Animations anim_bossmorphergrill2_3466 = {8, &anim_array_bossmorphergrill2_3466[0]};
static bool anim_bossmorphergrill2_3466_initialized;
class BossMorpherGrill2_3466 : public Active
{
public:
    BossMorpherGrill2_3466(int x, int y) : Active(x, y, BossMorpherGrill2_3466_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherGrill 2", 19);
#endif
        this->animations = &anim_bossmorphergrill2_3466;
        if (!anim_bossmorphergrill2_3466_initialized) {
            anim_bossmorphergrill2_3466_initialized = true;
            images_bossmorphergrill2_3466_0_0[0] = get_internal_image(15745);
            images_bossmorphergrill2_3466_0_16[0] = get_internal_image(15746);
            images_bossmorphergrill2_3466_7_0[0] = get_internal_image(15181);
            images_bossmorphergrill2_3466_7_0[1] = get_internal_image(15182);
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
FrameObject * create_bossmorphergrill2_3466(int x, int y)
{
    return new (Active::pool.create()) BossMorpherGrill2_3466(x, y);
}
static Image* images_bossmorphergrill1_3467_0_0[1];
static Direction direction_bossmorphergrill1_3467_0_0 = {0, 50, 50, 0, 1, images_bossmorphergrill1_3467_0_0, 1};
static Image* images_bossmorphergrill1_3467_0_16[1];
static Direction direction_bossmorphergrill1_3467_0_16 = {16, 50, 50, 0, 1, images_bossmorphergrill1_3467_0_16, 1};
static Animation anim_bossmorphergrill1_3467_0 = {&direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, NULL, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, &direction_bossmorphergrill1_3467_0_16, NULL, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0, &direction_bossmorphergrill1_3467_0_0};
static Image* images_bossmorphergrill1_3467_7_0[2];
static Direction direction_bossmorphergrill1_3467_7_0 = {0, 50, 50, 0, -1, images_bossmorphergrill1_3467_7_0, 2};
static Animation anim_bossmorphergrill1_3467_7 = {&direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, NULL, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0, &direction_bossmorphergrill1_3467_7_0};
static Animation * anim_array_bossmorphergrill1_3467[8] = {&anim_bossmorphergrill1_3467_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphergrill1_3467_7};
static Animations anim_bossmorphergrill1_3467 = {8, &anim_array_bossmorphergrill1_3467[0]};
static bool anim_bossmorphergrill1_3467_initialized;
class BossMorpherGrill1_3467 : public Active
{
public:
    BossMorpherGrill1_3467(int x, int y) : Active(x, y, BossMorpherGrill1_3467_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherGrill 1", 19);
#endif
        this->animations = &anim_bossmorphergrill1_3467;
        if (!anim_bossmorphergrill1_3467_initialized) {
            anim_bossmorphergrill1_3467_initialized = true;
            images_bossmorphergrill1_3467_0_0[0] = get_internal_image(15737);
            images_bossmorphergrill1_3467_0_16[0] = get_internal_image(15744);
            images_bossmorphergrill1_3467_7_0[0] = get_internal_image(15179);
            images_bossmorphergrill1_3467_7_0[1] = get_internal_image(15173);
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
FrameObject * create_bossmorphergrill1_3467(int x, int y)
{
    return new (Active::pool.create()) BossMorpherGrill1_3467(x, y);
}
static Image* images_bossmorphernode2_3468_0_0[1];
static Direction direction_bossmorphernode2_3468_0_0 = {0, 50, 50, 0, 1, images_bossmorphernode2_3468_0_0, 1};
static Animation anim_bossmorphernode2_3468_0 = {&direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, NULL, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0, &direction_bossmorphernode2_3468_0_0};
static Image* images_bossmorphernode2_3468_7_0[2];
static Direction direction_bossmorphernode2_3468_7_0 = {0, 50, 50, 0, -1, images_bossmorphernode2_3468_7_0, 2};
static Animation anim_bossmorphernode2_3468_7 = {&direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, NULL, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0, &direction_bossmorphernode2_3468_7_0};
static Animation * anim_array_bossmorphernode2_3468[8] = {&anim_bossmorphernode2_3468_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphernode2_3468_7};
static Animations anim_bossmorphernode2_3468 = {8, &anim_array_bossmorphernode2_3468[0]};
static bool anim_bossmorphernode2_3468_initialized;
class BossMorpherNode2_3468 : public Active
{
public:
    BossMorpherNode2_3468(int x, int y) : Active(x, y, BossMorpherNode2_3468_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherNode 2", 18);
#endif
        this->animations = &anim_bossmorphernode2_3468;
        if (!anim_bossmorphernode2_3468_initialized) {
            anim_bossmorphernode2_3468_initialized = true;
            images_bossmorphernode2_3468_0_0[0] = get_internal_image(15747);
            images_bossmorphernode2_3468_7_0[0] = get_internal_image(15185);
            images_bossmorphernode2_3468_7_0[1] = get_internal_image(15186);
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
FrameObject * create_bossmorphernode2_3468(int x, int y)
{
    return new (Active::pool.create()) BossMorpherNode2_3468(x, y);
}
static Image* images_bossmorphernode1_3469_0_0[1];
static Direction direction_bossmorphernode1_3469_0_0 = {0, 50, 50, 0, 1, images_bossmorphernode1_3469_0_0, 1};
static Animation anim_bossmorphernode1_3469_0 = {&direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, NULL, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0, &direction_bossmorphernode1_3469_0_0};
static Image* images_bossmorphernode1_3469_7_0[2];
static Direction direction_bossmorphernode1_3469_7_0 = {0, 50, 50, 0, -1, images_bossmorphernode1_3469_7_0, 2};
static Animation anim_bossmorphernode1_3469_7 = {&direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, NULL, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0, &direction_bossmorphernode1_3469_7_0};
static Animation * anim_array_bossmorphernode1_3469[8] = {&anim_bossmorphernode1_3469_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorphernode1_3469_7};
static Animations anim_bossmorphernode1_3469 = {8, &anim_array_bossmorphernode1_3469[0]};
static bool anim_bossmorphernode1_3469_initialized;
class BossMorpherNode1_3469 : public Active
{
public:
    BossMorpherNode1_3469(int x, int y) : Active(x, y, BossMorpherNode1_3469_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherNode 1", 18);
#endif
        this->animations = &anim_bossmorphernode1_3469;
        if (!anim_bossmorphernode1_3469_initialized) {
            anim_bossmorphernode1_3469_initialized = true;
            images_bossmorphernode1_3469_0_0[0] = get_internal_image(15736);
            images_bossmorphernode1_3469_7_0[0] = get_internal_image(15184);
            images_bossmorphernode1_3469_7_0[1] = get_internal_image(15183);
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
FrameObject * create_bossmorphernode1_3469(int x, int y)
{
    return new (Active::pool.create()) BossMorpherNode1_3469(x, y);
}
static Image* images_bossmorpherbody_3470_0_0[2];
static Direction direction_bossmorpherbody_3470_0_0 = {0, 0, 0, 0, 1, images_bossmorpherbody_3470_0_0, 2};
static Image* images_bossmorpherbody_3470_0_1[2];
static Direction direction_bossmorpherbody_3470_0_1 = {1, 0, 0, 0, 1, images_bossmorpherbody_3470_0_1, 2};
static Animation anim_bossmorpherbody_3470_0 = {&direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_1, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0, &direction_bossmorpherbody_3470_0_0};
static Image* images_bossmorpherbody_3470_7_0[2];
static Direction direction_bossmorpherbody_3470_7_0 = {0, 50, 50, 0, -1, images_bossmorpherbody_3470_7_0, 2};
static Animation anim_bossmorpherbody_3470_7 = {&direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, NULL, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0, &direction_bossmorpherbody_3470_7_0};
static Animation * anim_array_bossmorpherbody_3470[8] = {&anim_bossmorpherbody_3470_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmorpherbody_3470_7};
static Animations anim_bossmorpherbody_3470 = {8, &anim_array_bossmorpherbody_3470[0]};
static bool anim_bossmorpherbody_3470_initialized;
class BossMorpherBody_3470 : public Active
{
public:
    BossMorpherBody_3470(int x, int y) : Active(x, y, BossMorpherBody_3470_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Boss_MorpherBody", 16);
#endif
        this->animations = &anim_bossmorpherbody_3470;
        if (!anim_bossmorpherbody_3470_initialized) {
            anim_bossmorpherbody_3470_initialized = true;
            images_bossmorpherbody_3470_0_0[0] = get_internal_image(15742);
            images_bossmorpherbody_3470_0_0[1] = get_internal_image(15748);
            images_bossmorpherbody_3470_0_1[0] = get_internal_image(15749);
            images_bossmorpherbody_3470_0_1[1] = get_internal_image(15750);
            images_bossmorpherbody_3470_7_0[0] = get_internal_image(15036);
            images_bossmorpherbody_3470_7_0[1] = get_internal_image(15035);
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
FrameObject * create_bossmorpherbody_3470(int x, int y)
{
    return new (Active::pool.create()) BossMorpherBody_3470(x, y);
}
static Image* images_bossmorpherhead_3471_0_0[1];
static Direction direction_bossmorpherhead_3471_0_0 = {0, 50, 50, 0, 1, images_bossmorpherhead_3471_0_0, 1};
static Image* images_bossmorpherhead_3471_0_1[1];
static Direction direction_bossmorpherhead_3471_0_1 = {1, 50, 50, 0, 1, images_bossmorpherhead_3471_0_1, 1};
static Animation anim_bossmorpherhead_3471_0 = {&direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_1, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0, &direction_bossmorpherhead_3471_0_0};
static Animation * anim_array_bossmorpherhead_3471[1] = {&anim_bossmorpherhead_3471_0};
static Animations anim_bossmorpherhead_3471 = {1, &anim_array_bossmorpherhead_3471[0]};
static bool anim_bossmorpherhead_3471_initialized;
class BossMorpherHead_3471 : public Active
{
public:
    BossMorpherHead_3471(int x, int y) : Active(x, y, BossMorpherHead_3471_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_MorpherHead", 16);
#endif
        this->animations = &anim_bossmorpherhead_3471;
        if (!anim_bossmorpherhead_3471_initialized) {
            anim_bossmorpherhead_3471_initialized = true;
            images_bossmorpherhead_3471_0_0[0] = get_internal_image(15032);
            images_bossmorpherhead_3471_0_1[0] = get_internal_image(15031);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 80);
        alterables->values.set(3, 4);
    }
};
FrameObject * create_bossmorpherhead_3471(int x, int y)
{
    return new (Active::pool.create()) BossMorpherHead_3471(x, y);
}
class SubtitleData_3472 : public Text
{
public:
    SubtitleData_3472(int x, int y) : Text(x, y, SubtitleData_3472_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("BREVON: Open the airlocks!", 26));
        add_line(std::string("BREVON: Run while you still can, creature!", 42));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font4.bold;
        italic = font4.italic;
        font = get_font(font4.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_subtitledata_3472(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_3472(x, y);
}
static Image* images_pressuredoor3_3473_0_0[1];
static Direction direction_pressuredoor3_3473_0_0 = {0, 50, 50, 0, 1, images_pressuredoor3_3473_0_0, 1};
static Animation anim_pressuredoor3_3473_0 = {&direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, NULL, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0, &direction_pressuredoor3_3473_0_0};
static Image* images_pressuredoor3_3473_7_0[3];
static Direction direction_pressuredoor3_3473_7_0 = {0, 50, 50, 0, 1, images_pressuredoor3_3473_7_0, 3};
static Animation anim_pressuredoor3_3473_7 = {&direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, NULL, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0, &direction_pressuredoor3_3473_7_0};
static Animation * anim_array_pressuredoor3_3473[8] = {&anim_pressuredoor3_3473_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_pressuredoor3_3473_7};
static Animations anim_pressuredoor3_3473 = {8, &anim_array_pressuredoor3_3473[0]};
static bool anim_pressuredoor3_3473_initialized;
class PressureDoor3_3473 : public Active
{
public:
    PressureDoor3_3473(int x, int y) : Active(x, y, PressureDoor3_3473_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("PressureDoor 3", 14);
#endif
        set_visible(false);
        this->animations = &anim_pressuredoor3_3473;
        if (!anim_pressuredoor3_3473_initialized) {
            anim_pressuredoor3_3473_initialized = true;
            images_pressuredoor3_3473_0_0[0] = get_internal_image(15180);
            images_pressuredoor3_3473_7_0[0] = get_internal_image(15190);
            images_pressuredoor3_3473_7_0[1] = get_internal_image(15188);
            images_pressuredoor3_3473_7_0[2] = get_internal_image(15189);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 192);
    }
};
FrameObject * create_pressuredoor3_3473(int x, int y)
{
    return new (Active::pool.create()) PressureDoor3_3473(x, y);
}
static Image* images_minibosspushbeamcannon_3474_0_0[1];
static Direction direction_minibosspushbeamcannon_3474_0_0 = {0, 50, 50, 0, 1, images_minibosspushbeamcannon_3474_0_0, 1};
static Animation anim_minibosspushbeamcannon_3474_0 = {&direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, NULL, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0, &direction_minibosspushbeamcannon_3474_0_0};
static Animation * anim_array_minibosspushbeamcannon_3474[1] = {&anim_minibosspushbeamcannon_3474_0};
static Animations anim_minibosspushbeamcannon_3474 = {1, &anim_array_minibosspushbeamcannon_3474[0]};
static bool anim_minibosspushbeamcannon_3474_initialized;
class MinibossPushBeamCannon_3474 : public Active
{
public:
    MinibossPushBeamCannon_3474(int x, int y) : Active(x, y, MinibossPushBeamCannon_3474_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_PushBeamCannon", 23);
#endif
        this->animations = &anim_minibosspushbeamcannon_3474;
        if (!anim_minibosspushbeamcannon_3474_initialized) {
            anim_minibosspushbeamcannon_3474_initialized = true;
            images_minibosspushbeamcannon_3474_0_0[0] = get_internal_image(15119);
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
FrameObject * create_minibosspushbeamcannon_3474(int x, int y)
{
    return new (Active::pool.create()) MinibossPushBeamCannon_3474(x, y);
}
static Image* images_minibosspushbeam_3475_0_0[2];
static Direction direction_minibosspushbeam_3475_0_0 = {0, 75, 75, 0, -1, images_minibosspushbeam_3475_0_0, 2};
static Animation anim_minibosspushbeam_3475_0 = {&direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, NULL, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0, &direction_minibosspushbeam_3475_0_0};
static Animation * anim_array_minibosspushbeam_3475[1] = {&anim_minibosspushbeam_3475_0};
static Animations anim_minibosspushbeam_3475 = {1, &anim_array_minibosspushbeam_3475[0]};
static bool anim_minibosspushbeam_3475_initialized;
class MinibossPushBeam_3475 : public Active
{
public:
    MinibossPushBeam_3475(int x, int y) : Active(x, y, MinibossPushBeam_3475_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_PushBeam", 17);
#endif
        set_visible(false);
        this->animations = &anim_minibosspushbeam_3475;
        if (!anim_minibosspushbeam_3475_initialized) {
            anim_minibosspushbeam_3475_initialized = true;
            images_minibosspushbeam_3475_0_0[0] = get_internal_image(11483);
            images_minibosspushbeam_3475_0_0[1] = get_internal_image(15004);
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
FrameObject * create_minibosspushbeam_3475(int x, int y)
{
    return new (Active::pool.create()) MinibossPushBeam_3475(x, y);
}
static Image* images_alarmlight_3476_0_0[1];
static Direction direction_alarmlight_3476_0_0 = {0, 50, 50, 0, 1, images_alarmlight_3476_0_0, 1};
static Animation anim_alarmlight_3476_0 = {&direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, NULL, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0, &direction_alarmlight_3476_0_0};
static Animation * anim_array_alarmlight_3476[1] = {&anim_alarmlight_3476_0};
static Animations anim_alarmlight_3476 = {1, &anim_array_alarmlight_3476[0]};
static bool anim_alarmlight_3476_initialized;
class AlarmLight_3476 : public Active
{
public:
    AlarmLight_3476(int x, int y) : Active(x, y, AlarmLight_3476_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AlarmLight", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_alarmlight_3476;
        if (!anim_alarmlight_3476_initialized) {
            anim_alarmlight_3476_initialized = true;
            images_alarmlight_3476_0_0[0] = get_internal_image(11485);
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
FrameObject * create_alarmlight_3476(int x, int y)
{
    return new (Active::pool.create()) AlarmLight_3476(x, y);
}
class LevelParallaxPiece1_3477 : public SystemBox
{
public:
    LevelParallaxPiece1_3477(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3477_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 1440;
        type = PATTERN_IMAGE;
        image = get_internal_image(368);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3477(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3477(x, y);
}
class LevelParallaxPiece3_3478 : public SystemBox
{
public:
    LevelParallaxPiece3_3478(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_3478_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 1440;
        type = PATTERN_IMAGE;
        image = get_internal_image(1015);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_3478(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_3478(x, y);
}
class LevelParallaxPiece2_3479 : public SystemBox
{
public:
    LevelParallaxPiece2_3479(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3479_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 1440;
        type = PATTERN_IMAGE;
        image = get_internal_image(995);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3479(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3479(x, y);
}
class LevelParallaxPiece8_3480 : public SystemBox
{
public:
    LevelParallaxPiece8_3480(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_3480_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 360;
        height = 1600;
        type = PATTERN_IMAGE;
        image = get_internal_image(973);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_3480(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_3480(x, y);
}
class LevelParallaxPiece10_3481 : public SystemBox
{
public:
    LevelParallaxPiece10_3481(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_3481_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 1920;
        type = PATTERN_IMAGE;
        image = get_internal_image(1000);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_3481(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_3481(x, y);
}
class FDLabBack12_3482 : public Backdrop
{
public:
    FDLabBack12_3482(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 12", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1092);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback12_3482(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack12_3482(x, y);
}
class FDLabBack6_3483 : public Backdrop
{
public:
    FDLabBack6_3483(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 6", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7064);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback6_3483(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack6_3483(x, y);
}
class FDLabBack1_3484 : public Backdrop
{
public:
    FDLabBack1_3484(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7067);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback1_3484(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack1_3484(x, y);
}
class FDLabBack5_3485 : public Backdrop
{
public:
    FDLabBack5_3485(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 5", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7065);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback5_3485(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack5_3485(x, y);
}
class FDLabBack2_3486 : public Backdrop
{
public:
    FDLabBack2_3486(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7062);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback2_3486(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack2_3486(x, y);
}
class FDLabBack3_3487 : public Backdrop
{
public:
    FDLabBack3_3487(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7063);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback3_3487(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack3_3487(x, y);
}
class FDTestTube_3488 : public Backdrop
{
public:
    FDTestTube_3488(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_TestTube", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9118);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdtesttube_3488(int x, int y)
{
    return new (Backdrop::pool.create()) FDTestTube_3488(x, y);
}
class FDLabBack4_3489 : public Backdrop
{
public:
    FDLabBack4_3489(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 4", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9074);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback4_3489(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack4_3489(x, y);
}
class FDLabBack7_3490 : public Backdrop
{
public:
    FDLabBack7_3490(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 7", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11626);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback7_3490(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack7_3490(x, y);
}
class FDLabBack8_3491 : public Backdrop
{
public:
    FDLabBack8_3491(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 8", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7061);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback8_3491(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack8_3491(x, y);
}
class FDLabBack9_3492 : public Backdrop
{
public:
    FDLabBack9_3492(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 9", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7083);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback9_3492(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack9_3492(x, y);
}
class FDLabBack10_3493 : public Backdrop
{
public:
    FDLabBack10_3493(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 10", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7074);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback10_3493(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack10_3493(x, y);
}
class FDLabBack11_3494 : public Backdrop
{
public:
    FDLabBack11_3494(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 11", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6233);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback11_3494(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack11_3494(x, y);
}
class FDEmptyEliteSuit_3495 : public Backdrop
{
public:
    FDEmptyEliteSuit_3495(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_EmptyEliteSuit", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14923);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdemptyelitesuit_3495(int x, int y)
{
    return new (Backdrop::pool.create()) FDEmptyEliteSuit_3495(x, y);
}
class FDLabBack14_3496 : public Backdrop
{
public:
    FDLabBack14_3496(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 14", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6468);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback14_3496(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack14_3496(x, y);
}
class FDLabBack13_3497 : public Backdrop
{
public:
    FDLabBack13_3497(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 13", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6467);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback13_3497(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack13_3497(x, y);
}
class FDLabBack15_3498 : public Backdrop
{
public:
    FDLabBack15_3498(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 15", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6469);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback15_3498(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack15_3498(x, y);
}
static Image* images_playershieldgiver_3499_0_0[7];
static Direction direction_playershieldgiver_3499_0_0 = {0, 0, 0, 0, 1, images_playershieldgiver_3499_0_0, 7};
static Image* images_playershieldgiver_3499_0_8[3];
static Direction direction_playershieldgiver_3499_0_8 = {8, 50, 50, 0, 1, images_playershieldgiver_3499_0_8, 3};
static Animation anim_playershieldgiver_3499_0 = {&direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, NULL, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, &direction_playershieldgiver_3499_0_8, NULL, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0, &direction_playershieldgiver_3499_0_0};
static Image* images_playershieldgiver_3499_10_0[1];
static Direction direction_playershieldgiver_3499_10_0 = {0, 50, 50, 0, -1, images_playershieldgiver_3499_10_0, 1};
static Animation anim_playershieldgiver_3499_10 = {&direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, NULL, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0, &direction_playershieldgiver_3499_10_0};
static Image* images_playershieldgiver_3499_11_0[1];
static Direction direction_playershieldgiver_3499_11_0 = {0, 50, 50, 0, -1, images_playershieldgiver_3499_11_0, 1};
static Animation anim_playershieldgiver_3499_11 = {&direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, NULL, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0, &direction_playershieldgiver_3499_11_0};
static Animation * anim_array_playershieldgiver_3499[12] = {&anim_playershieldgiver_3499_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playershieldgiver_3499_10, &anim_playershieldgiver_3499_11};
static Animations anim_playershieldgiver_3499 = {12, &anim_array_playershieldgiver_3499[0]};
static bool anim_playershieldgiver_3499_initialized;
class PlayerShieldGiver_3499 : public Active
{
public:
    PlayerShieldGiver_3499(int x, int y) : Active(x, y, PlayerShieldGiver_3499_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_ShieldGiver", 18);
#endif
        this->animations = &anim_playershieldgiver_3499;
        if (!anim_playershieldgiver_3499_initialized) {
            anim_playershieldgiver_3499_initialized = true;
            images_playershieldgiver_3499_0_0[0] = get_internal_image(3811);
            images_playershieldgiver_3499_0_0[1] = get_internal_image(5222);
            images_playershieldgiver_3499_0_0[2] = get_internal_image(6768);
            images_playershieldgiver_3499_0_0[3] = get_internal_image(3856);
            images_playershieldgiver_3499_0_0[4] = get_internal_image(3855);
            images_playershieldgiver_3499_0_0[5] = get_internal_image(6690);
            images_playershieldgiver_3499_0_0[6] = get_internal_image(3853);
            images_playershieldgiver_3499_0_8[0] = get_internal_image(3312);
            images_playershieldgiver_3499_0_8[1] = get_internal_image(6769);
            images_playershieldgiver_3499_0_8[2] = get_internal_image(6755);
            images_playershieldgiver_3499_10_0[0] = get_internal_image(7207);
            images_playershieldgiver_3499_11_0[0] = get_internal_image(7398);
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
FrameObject * create_playershieldgiver_3499(int x, int y)
{
    return new (Active::pool.create()) PlayerShieldGiver_3499(x, y);
}
static Image* images_labdoorback_3500_0_0[10];
static Direction direction_labdoorback_3500_0_0 = {0, 0, 0, 0, 1, images_labdoorback_3500_0_0, 10};
static Animation anim_labdoorback_3500_0 = {&direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, NULL, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0, &direction_labdoorback_3500_0_0};
static Animation * anim_array_labdoorback_3500[1] = {&anim_labdoorback_3500_0};
static Animations anim_labdoorback_3500 = {1, &anim_array_labdoorback_3500[0]};
static bool anim_labdoorback_3500_initialized;
class LabDoorBack_3500 : public Active
{
public:
    LabDoorBack_3500(int x, int y) : Active(x, y, LabDoorBack_3500_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LabDoor_back", 12);
#endif
        this->animations = &anim_labdoorback_3500;
        if (!anim_labdoorback_3500_initialized) {
            anim_labdoorback_3500_initialized = true;
            images_labdoorback_3500_0_0[0] = get_internal_image(1581);
            images_labdoorback_3500_0_0[1] = get_internal_image(1592);
            images_labdoorback_3500_0_0[2] = get_internal_image(1581);
            images_labdoorback_3500_0_0[3] = get_internal_image(1592);
            images_labdoorback_3500_0_0[4] = get_internal_image(2453);
            images_labdoorback_3500_0_0[5] = get_internal_image(9466);
            images_labdoorback_3500_0_0[6] = get_internal_image(10271);
            images_labdoorback_3500_0_0[7] = get_internal_image(10272);
            images_labdoorback_3500_0_0[8] = get_internal_image(10273);
            images_labdoorback_3500_0_0[9] = get_internal_image(10458);
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
FrameObject * create_labdoorback_3500(int x, int y)
{
    return new (Active::pool.create()) LabDoorBack_3500(x, y);
}
static Image* images_levelelectriccrushermask_3501_0_0[1];
static Direction direction_levelelectriccrushermask_3501_0_0 = {0, 50, 50, 0, 1, images_levelelectriccrushermask_3501_0_0, 1};
static Animation anim_levelelectriccrushermask_3501_0 = {&direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, NULL, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0, &direction_levelelectriccrushermask_3501_0_0};
static Animation * anim_array_levelelectriccrushermask_3501[1] = {&anim_levelelectriccrushermask_3501_0};
static Animations anim_levelelectriccrushermask_3501 = {1, &anim_array_levelelectriccrushermask_3501[0]};
static bool anim_levelelectriccrushermask_3501_initialized;
class LevelElectricCrusherMask_3501 : public Active
{
public:
    LevelElectricCrusherMask_3501(int x, int y) : Active(x, y, LevelElectricCrusherMask_3501_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ElectricCrusherMask", 25);
#endif
        this->animations = &anim_levelelectriccrushermask_3501;
        if (!anim_levelelectriccrushermask_3501_initialized) {
            anim_levelelectriccrushermask_3501_initialized = true;
            images_levelelectriccrushermask_3501_0_0[0] = get_internal_image(8460);
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
FrameObject * create_levelelectriccrushermask_3501(int x, int y)
{
    return new (Active::pool.create()) LevelElectricCrusherMask_3501(x, y);
}
static Image* images_levelfdpushplatformmask_3502_0_0[5];
static Direction direction_levelfdpushplatformmask_3502_0_0 = {0, 0, 0, 0, 1, images_levelfdpushplatformmask_3502_0_0, 5};
static Animation anim_levelfdpushplatformmask_3502_0 = {&direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, NULL, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0, &direction_levelfdpushplatformmask_3502_0_0};
static Animation * anim_array_levelfdpushplatformmask_3502[1] = {&anim_levelfdpushplatformmask_3502_0};
static Animations anim_levelfdpushplatformmask_3502 = {1, &anim_array_levelfdpushplatformmask_3502[0]};
static bool anim_levelfdpushplatformmask_3502_initialized;
class LevelFDPushPlatformMask_3502 : public Active
{
public:
    LevelFDPushPlatformMask_3502(int x, int y) : Active(x, y, LevelFDPushPlatformMask_3502_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FDPushPlatformMask", 24);
#endif
        this->animations = &anim_levelfdpushplatformmask_3502;
        if (!anim_levelfdpushplatformmask_3502_initialized) {
            anim_levelfdpushplatformmask_3502_initialized = true;
            images_levelfdpushplatformmask_3502_0_0[0] = get_internal_image(7066);
            images_levelfdpushplatformmask_3502_0_0[1] = get_internal_image(7024);
            images_levelfdpushplatformmask_3502_0_0[2] = get_internal_image(7055);
            images_levelfdpushplatformmask_3502_0_0[3] = get_internal_image(7024);
            images_levelfdpushplatformmask_3502_0_0[4] = get_internal_image(7066);
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
FrameObject * create_levelfdpushplatformmask_3502(int x, int y)
{
    return new (Active::pool.create()) LevelFDPushPlatformMask_3502(x, y);
}
static Image* images_effecttubeshade_3503_0_0[3];
static Direction direction_effecttubeshade_3503_0_0 = {0, 50, 50, 0, -1, images_effecttubeshade_3503_0_0, 3};
static Animation anim_effecttubeshade_3503_0 = {&direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, NULL, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0, &direction_effecttubeshade_3503_0_0};
static Animation * anim_array_effecttubeshade_3503[1] = {&anim_effecttubeshade_3503_0};
static Animations anim_effecttubeshade_3503 = {1, &anim_array_effecttubeshade_3503[0]};
static bool anim_effecttubeshade_3503_initialized;
class EffectTubeShade_3503 : public Active
{
public:
    EffectTubeShade_3503(int x, int y) : Active(x, y, EffectTubeShade_3503_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_TubeShade", 16);
#endif
        this->animations = &anim_effecttubeshade_3503;
        if (!anim_effecttubeshade_3503_initialized) {
            anim_effecttubeshade_3503_initialized = true;
            images_effecttubeshade_3503_0_0[0] = get_internal_image(9329);
            images_effecttubeshade_3503_0_0[1] = get_internal_image(9078);
            images_effecttubeshade_3503_0_0[2] = get_internal_image(9331);
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
FrameObject * create_effecttubeshade_3503(int x, int y)
{
    return new (Active::pool.create()) EffectTubeShade_3503(x, y);
}
static Image* images_fdconsole1_3504_0_0[8];
static Direction direction_fdconsole1_3504_0_0 = {0, 25, 25, 0, -1, images_fdconsole1_3504_0_0, 8};
static Image* images_fdconsole1_3504_0_8[4];
static Direction direction_fdconsole1_3504_0_8 = {8, 50, 50, 0, -1, images_fdconsole1_3504_0_8, 4};
static Animation anim_fdconsole1_3504_0 = {&direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, NULL, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, &direction_fdconsole1_3504_0_8, NULL, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0, &direction_fdconsole1_3504_0_0};
static Animation * anim_array_fdconsole1_3504[1] = {&anim_fdconsole1_3504_0};
static Animations anim_fdconsole1_3504 = {1, &anim_array_fdconsole1_3504[0]};
static bool anim_fdconsole1_3504_initialized;
class FDConsole1_3504 : public Active
{
public:
    FDConsole1_3504(int x, int y) : Active(x, y, FDConsole1_3504_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_Console 1", 12);
#endif
        this->animations = &anim_fdconsole1_3504;
        if (!anim_fdconsole1_3504_initialized) {
            anim_fdconsole1_3504_initialized = true;
            images_fdconsole1_3504_0_0[0] = get_internal_image(8459);
            images_fdconsole1_3504_0_0[1] = get_internal_image(8531);
            images_fdconsole1_3504_0_0[2] = get_internal_image(8536);
            images_fdconsole1_3504_0_0[3] = get_internal_image(8539);
            images_fdconsole1_3504_0_0[4] = get_internal_image(8503);
            images_fdconsole1_3504_0_0[5] = get_internal_image(8504);
            images_fdconsole1_3504_0_0[6] = get_internal_image(8538);
            images_fdconsole1_3504_0_0[7] = get_internal_image(8540);
            images_fdconsole1_3504_0_8[0] = get_internal_image(8458);
            images_fdconsole1_3504_0_8[1] = get_internal_image(8456);
            images_fdconsole1_3504_0_8[2] = get_internal_image(7089);
            images_fdconsole1_3504_0_8[3] = get_internal_image(7094);
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
FrameObject * create_fdconsole1_3504(int x, int y)
{
    return new (Active::pool.create()) FDConsole1_3504(x, y);
}
static Image* images_fdconsole2_3505_0_0[5];
static Direction direction_fdconsole2_3505_0_0 = {0, 50, 50, 0, -1, images_fdconsole2_3505_0_0, 5};
static Animation anim_fdconsole2_3505_0 = {&direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, NULL, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0, &direction_fdconsole2_3505_0_0};
static Animation * anim_array_fdconsole2_3505[1] = {&anim_fdconsole2_3505_0};
static Animations anim_fdconsole2_3505 = {1, &anim_array_fdconsole2_3505[0]};
static bool anim_fdconsole2_3505_initialized;
class FDConsole2_3505 : public Active
{
public:
    FDConsole2_3505(int x, int y) : Active(x, y, FDConsole2_3505_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_Console 2", 12);
#endif
        this->animations = &anim_fdconsole2_3505;
        if (!anim_fdconsole2_3505_initialized) {
            anim_fdconsole2_3505_initialized = true;
            images_fdconsole2_3505_0_0[0] = get_internal_image(9326);
            images_fdconsole2_3505_0_0[1] = get_internal_image(10639);
            images_fdconsole2_3505_0_0[2] = get_internal_image(10641);
            images_fdconsole2_3505_0_0[3] = get_internal_image(10645);
            images_fdconsole2_3505_0_0[4] = get_internal_image(9075);
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
FrameObject * create_fdconsole2_3505(int x, int y)
{
    return new (Active::pool.create()) FDConsole2_3505(x, y);
}
static Image* images_lockedlabdoorback_3506_0_0[10];
static Direction direction_lockedlabdoorback_3506_0_0 = {0, 0, 0, 0, 1, images_lockedlabdoorback_3506_0_0, 10};
static Animation anim_lockedlabdoorback_3506_0 = {&direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, NULL, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0, &direction_lockedlabdoorback_3506_0_0};
static Animation * anim_array_lockedlabdoorback_3506[1] = {&anim_lockedlabdoorback_3506_0};
static Animations anim_lockedlabdoorback_3506 = {1, &anim_array_lockedlabdoorback_3506[0]};
static bool anim_lockedlabdoorback_3506_initialized;
class LockedLabDoorBack_3506 : public Active
{
public:
    LockedLabDoorBack_3506(int x, int y) : Active(x, y, LockedLabDoorBack_3506_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedLabDoor_back", 18);
#endif
        this->animations = &anim_lockedlabdoorback_3506;
        if (!anim_lockedlabdoorback_3506_initialized) {
            anim_lockedlabdoorback_3506_initialized = true;
            images_lockedlabdoorback_3506_0_0[0] = get_internal_image(5399);
            images_lockedlabdoorback_3506_0_0[1] = get_internal_image(5843);
            images_lockedlabdoorback_3506_0_0[2] = get_internal_image(6256);
            images_lockedlabdoorback_3506_0_0[3] = get_internal_image(5843);
            images_lockedlabdoorback_3506_0_0[4] = get_internal_image(6465);
            images_lockedlabdoorback_3506_0_0[5] = get_internal_image(6466);
            images_lockedlabdoorback_3506_0_0[6] = get_internal_image(10271);
            images_lockedlabdoorback_3506_0_0[7] = get_internal_image(10272);
            images_lockedlabdoorback_3506_0_0[8] = get_internal_image(10273);
            images_lockedlabdoorback_3506_0_0[9] = get_internal_image(10458);
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
FrameObject * create_lockedlabdoorback_3506(int x, int y)
{
    return new (Active::pool.create()) LockedLabDoorBack_3506(x, y);
}
static Image* images_labdoorfront_3507_0_0[10];
static Direction direction_labdoorfront_3507_0_0 = {0, 0, 0, 0, 1, images_labdoorfront_3507_0_0, 10};
static Image* images_labdoorfront_3507_0_8[1];
static Direction direction_labdoorfront_3507_0_8 = {8, 50, 50, 0, 1, images_labdoorfront_3507_0_8, 1};
static Animation anim_labdoorfront_3507_0 = {&direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, NULL, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, &direction_labdoorfront_3507_0_8, NULL, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0, &direction_labdoorfront_3507_0_0};
static Animation * anim_array_labdoorfront_3507[1] = {&anim_labdoorfront_3507_0};
static Animations anim_labdoorfront_3507 = {1, &anim_array_labdoorfront_3507[0]};
static bool anim_labdoorfront_3507_initialized;
class LabDoorFront_3507 : public Active
{
public:
    LabDoorFront_3507(int x, int y) : Active(x, y, LabDoorFront_3507_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LabDoor_front", 13);
#endif
        this->animations = &anim_labdoorfront_3507;
        if (!anim_labdoorfront_3507_initialized) {
            anim_labdoorfront_3507_initialized = true;
            images_labdoorfront_3507_0_0[0] = get_internal_image(10461);
            images_labdoorfront_3507_0_0[1] = get_internal_image(10462);
            images_labdoorfront_3507_0_0[2] = get_internal_image(10461);
            images_labdoorfront_3507_0_0[3] = get_internal_image(10462);
            images_labdoorfront_3507_0_0[4] = get_internal_image(10463);
            images_labdoorfront_3507_0_0[5] = get_internal_image(10464);
            images_labdoorfront_3507_0_0[6] = get_internal_image(10581);
            images_labdoorfront_3507_0_0[7] = get_internal_image(10582);
            images_labdoorfront_3507_0_0[8] = get_internal_image(10583);
            images_labdoorfront_3507_0_0[9] = get_internal_image(10583);
            images_labdoorfront_3507_0_8[0] = get_internal_image(9041);
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
FrameObject * create_labdoorfront_3507(int x, int y)
{
    return new (Active::pool.create()) LabDoorFront_3507(x, y);
}
class FDLabWall1_3508 : public Backdrop
{
public:
    FDLabWall1_3508(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9064);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabwall1_3508(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall1_3508(x, y);
}
class FDLabWall2_3509 : public Backdrop
{
public:
    FDLabWall2_3509(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9067);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabwall2_3509(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall2_3509(x, y);
}
class FDLabFloor4_3510 : public Backdrop
{
public:
    FDLabFloor4_3510(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9070);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor4_3510(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor4_3510(x, y);
}
class FDVentPipe_3511 : public Backdrop
{
public:
    FDVentPipe_3511(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_VentPipe", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10585);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdventpipe_3511(int x, int y)
{
    return new (Backdrop::pool.create()) FDVentPipe_3511(x, y);
}
class FDLabFloor11_3512 : public Backdrop
{
public:
    FDLabFloor11_3512(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9037);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor11_3512(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor11_3512(x, y);
}
class FDLabFloor6_3513 : public Backdrop
{
public:
    FDLabFloor6_3513(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9072);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor6_3513(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor6_3513(x, y);
}
