#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_enemysaucerleg2_2813_0_0[1];
static Direction direction_enemysaucerleg2_2813_0_0 = {0, 50, 50, 0, 1, images_enemysaucerleg2_2813_0_0, 1};
static Animation anim_enemysaucerleg2_2813_0 = {&direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, NULL, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0, &direction_enemysaucerleg2_2813_0_0};
static Animation * anim_array_enemysaucerleg2_2813[1] = {&anim_enemysaucerleg2_2813_0};
static Animations anim_enemysaucerleg2_2813 = {1, &anim_array_enemysaucerleg2_2813[0]};
static bool anim_enemysaucerleg2_2813_initialized;
class EnemySaucerLeg2_2813 : public Active
{
public:
    EnemySaucerLeg2_2813(int x, int y) : Active(x, y, EnemySaucerLeg2_2813_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SaucerLeg 2", 17);
#endif
        this->animations = &anim_enemysaucerleg2_2813;
        if (!anim_enemysaucerleg2_2813_initialized) {
            anim_enemysaucerleg2_2813_initialized = true;
            images_enemysaucerleg2_2813_0_0[0] = get_internal_image(2491);
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
FrameObject * create_enemysaucerleg2_2813(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerLeg2_2813(x, y);
}
static Image* images_enemysaucerleg3_2814_0_0[1];
static Direction direction_enemysaucerleg3_2814_0_0 = {0, 50, 50, 0, 1, images_enemysaucerleg3_2814_0_0, 1};
static Animation anim_enemysaucerleg3_2814_0 = {&direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, NULL, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0, &direction_enemysaucerleg3_2814_0_0};
static Animation * anim_array_enemysaucerleg3_2814[1] = {&anim_enemysaucerleg3_2814_0};
static Animations anim_enemysaucerleg3_2814 = {1, &anim_array_enemysaucerleg3_2814[0]};
static bool anim_enemysaucerleg3_2814_initialized;
class EnemySaucerLeg3_2814 : public Active
{
public:
    EnemySaucerLeg3_2814(int x, int y) : Active(x, y, EnemySaucerLeg3_2814_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SaucerLeg 3", 17);
#endif
        this->animations = &anim_enemysaucerleg3_2814;
        if (!anim_enemysaucerleg3_2814_initialized) {
            anim_enemysaucerleg3_2814_initialized = true;
            images_enemysaucerleg3_2814_0_0[0] = get_internal_image(2491);
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
FrameObject * create_enemysaucerleg3_2814(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerLeg3_2814(x, y);
}
static Image* images_enemysaucerlimiter_2815_0_0[1];
static Direction direction_enemysaucerlimiter_2815_0_0 = {0, 30, 30, 0, -1, images_enemysaucerlimiter_2815_0_0, 1};
static Animation anim_enemysaucerlimiter_2815_0 = {&direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, NULL, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0, &direction_enemysaucerlimiter_2815_0_0};
static Animation * anim_array_enemysaucerlimiter_2815[1] = {&anim_enemysaucerlimiter_2815_0};
static Animations anim_enemysaucerlimiter_2815 = {1, &anim_array_enemysaucerlimiter_2815[0]};
static bool anim_enemysaucerlimiter_2815_initialized;
class EnemySaucerLimiter_2815 : public Active
{
public:
    EnemySaucerLimiter_2815(int x, int y) : Active(x, y, EnemySaucerLimiter_2815_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SaucerLimiter", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemysaucerlimiter_2815;
        if (!anim_enemysaucerlimiter_2815_initialized) {
            anim_enemysaucerlimiter_2815_initialized = true;
            images_enemysaucerlimiter_2815_0_0[0] = get_internal_image(2999);
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
FrameObject * create_enemysaucerlimiter_2815(int x, int y)
{
    return new (Active::pool.create()) EnemySaucerLimiter_2815(x, y);
}
static Image* images_gimmickbubblewavespawner_2816_0_0[1];
static Direction direction_gimmickbubblewavespawner_2816_0_0 = {0, 50, 50, 0, 1, images_gimmickbubblewavespawner_2816_0_0, 1};
static Animation anim_gimmickbubblewavespawner_2816_0 = {&direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, NULL, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0, &direction_gimmickbubblewavespawner_2816_0_0};
static Animation * anim_array_gimmickbubblewavespawner_2816[1] = {&anim_gimmickbubblewavespawner_2816_0};
static Animations anim_gimmickbubblewavespawner_2816 = {1, &anim_array_gimmickbubblewavespawner_2816[0]};
static bool anim_gimmickbubblewavespawner_2816_initialized;
class GimmickBubbleWaveSpawner_2816 : public Active
{
public:
    GimmickBubbleWaveSpawner_2816(int x, int y) : Active(x, y, GimmickBubbleWaveSpawner_2816_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BubbleWaveSpawner", 25);
#endif
        this->animations = &anim_gimmickbubblewavespawner_2816;
        if (!anim_gimmickbubblewavespawner_2816_initialized) {
            anim_gimmickbubblewavespawner_2816_initialized = true;
            images_gimmickbubblewavespawner_2816_0_0[0] = get_internal_image(3005);
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
FrameObject * create_gimmickbubblewavespawner_2816(int x, int y)
{
    return new (Active::pool.create()) GimmickBubbleWaveSpawner_2816(x, y);
}
static Image* images_gimmickbubblewavespawner2_2817_0_0[1];
static Direction direction_gimmickbubblewavespawner2_2817_0_0 = {0, 50, 50, 0, 1, images_gimmickbubblewavespawner2_2817_0_0, 1};
static Animation anim_gimmickbubblewavespawner2_2817_0 = {&direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, NULL, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0, &direction_gimmickbubblewavespawner2_2817_0_0};
static Animation * anim_array_gimmickbubblewavespawner2_2817[1] = {&anim_gimmickbubblewavespawner2_2817_0};
static Animations anim_gimmickbubblewavespawner2_2817 = {1, &anim_array_gimmickbubblewavespawner2_2817[0]};
static bool anim_gimmickbubblewavespawner2_2817_initialized;
class GimmickBubbleWaveSpawner2_2817 : public Active
{
public:
    GimmickBubbleWaveSpawner2_2817(int x, int y) : Active(x, y, GimmickBubbleWaveSpawner2_2817_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BubbleWaveSpawner 2", 27);
#endif
        this->animations = &anim_gimmickbubblewavespawner2_2817;
        if (!anim_gimmickbubblewavespawner2_2817_initialized) {
            anim_gimmickbubblewavespawner2_2817_initialized = true;
            images_gimmickbubblewavespawner2_2817_0_0[0] = get_internal_image(2840);
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
FrameObject * create_gimmickbubblewavespawner2_2817(int x, int y)
{
    return new (Active::pool.create()) GimmickBubbleWaveSpawner2_2817(x, y);
}
static Image* images_gimmickconveyorbeltright_2818_0_0[8];
static Direction direction_gimmickconveyorbeltright_2818_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltright_2818_0_0, 8};
static Animation anim_gimmickconveyorbeltright_2818_0 = {&direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, NULL, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0, &direction_gimmickconveyorbeltright_2818_0_0};
static Animation * anim_array_gimmickconveyorbeltright_2818[1] = {&anim_gimmickconveyorbeltright_2818_0};
static Animations anim_gimmickconveyorbeltright_2818 = {1, &anim_array_gimmickconveyorbeltright_2818[0]};
static bool anim_gimmickconveyorbeltright_2818_initialized;
class GimmickConveyorBeltRight_2818 : public Active
{
public:
    GimmickConveyorBeltRight_2818(int x, int y) : Active(x, y, GimmickConveyorBeltRight_2818_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Right", 26);
#endif
        this->animations = &anim_gimmickconveyorbeltright_2818;
        if (!anim_gimmickconveyorbeltright_2818_initialized) {
            anim_gimmickconveyorbeltright_2818_initialized = true;
            images_gimmickconveyorbeltright_2818_0_0[0] = get_internal_image(10659);
            images_gimmickconveyorbeltright_2818_0_0[1] = get_internal_image(10685);
            images_gimmickconveyorbeltright_2818_0_0[2] = get_internal_image(10684);
            images_gimmickconveyorbeltright_2818_0_0[3] = get_internal_image(10683);
            images_gimmickconveyorbeltright_2818_0_0[4] = get_internal_image(10682);
            images_gimmickconveyorbeltright_2818_0_0[5] = get_internal_image(10680);
            images_gimmickconveyorbeltright_2818_0_0[6] = get_internal_image(10648);
            images_gimmickconveyorbeltright_2818_0_0[7] = get_internal_image(10687);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_gimmickconveyorbeltright_2818(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltRight_2818(x, y);
}
static Image* images_gimmickconveyorbeltright2_2819_0_0[8];
static Direction direction_gimmickconveyorbeltright2_2819_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltright2_2819_0_0, 8};
static Animation anim_gimmickconveyorbeltright2_2819_0 = {&direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, NULL, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0, &direction_gimmickconveyorbeltright2_2819_0_0};
static Animation * anim_array_gimmickconveyorbeltright2_2819[1] = {&anim_gimmickconveyorbeltright2_2819_0};
static Animations anim_gimmickconveyorbeltright2_2819 = {1, &anim_array_gimmickconveyorbeltright2_2819[0]};
static bool anim_gimmickconveyorbeltright2_2819_initialized;
class GimmickConveyorBeltRight2_2819 : public Active
{
public:
    GimmickConveyorBeltRight2_2819(int x, int y) : Active(x, y, GimmickConveyorBeltRight2_2819_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Right 2", 28);
#endif
        this->animations = &anim_gimmickconveyorbeltright2_2819;
        if (!anim_gimmickconveyorbeltright2_2819_initialized) {
            anim_gimmickconveyorbeltright2_2819_initialized = true;
            images_gimmickconveyorbeltright2_2819_0_0[0] = get_internal_image(10686);
            images_gimmickconveyorbeltright2_2819_0_0[1] = get_internal_image(10696);
            images_gimmickconveyorbeltright2_2819_0_0[2] = get_internal_image(10699);
            images_gimmickconveyorbeltright2_2819_0_0[3] = get_internal_image(10701);
            images_gimmickconveyorbeltright2_2819_0_0[4] = get_internal_image(10689);
            images_gimmickconveyorbeltright2_2819_0_0[5] = get_internal_image(10695);
            images_gimmickconveyorbeltright2_2819_0_0[6] = get_internal_image(10700);
            images_gimmickconveyorbeltright2_2819_0_0[7] = get_internal_image(10698);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_gimmickconveyorbeltright2_2819(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltRight2_2819(x, y);
}
static Image* images_gimmickconveyorbeltright3_2820_0_0[8];
static Direction direction_gimmickconveyorbeltright3_2820_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltright3_2820_0_0, 8};
static Animation anim_gimmickconveyorbeltright3_2820_0 = {&direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, NULL, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0, &direction_gimmickconveyorbeltright3_2820_0_0};
static Animation * anim_array_gimmickconveyorbeltright3_2820[1] = {&anim_gimmickconveyorbeltright3_2820_0};
static Animations anim_gimmickconveyorbeltright3_2820 = {1, &anim_array_gimmickconveyorbeltright3_2820[0]};
static bool anim_gimmickconveyorbeltright3_2820_initialized;
class GimmickConveyorBeltRight3_2820 : public Active
{
public:
    GimmickConveyorBeltRight3_2820(int x, int y) : Active(x, y, GimmickConveyorBeltRight3_2820_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Right 3", 28);
#endif
        this->animations = &anim_gimmickconveyorbeltright3_2820;
        if (!anim_gimmickconveyorbeltright3_2820_initialized) {
            anim_gimmickconveyorbeltright3_2820_initialized = true;
            images_gimmickconveyorbeltright3_2820_0_0[0] = get_internal_image(10703);
            images_gimmickconveyorbeltright3_2820_0_0[1] = get_internal_image(10702);
            images_gimmickconveyorbeltright3_2820_0_0[2] = get_internal_image(11598);
            images_gimmickconveyorbeltright3_2820_0_0[3] = get_internal_image(10697);
            images_gimmickconveyorbeltright3_2820_0_0[4] = get_internal_image(10708);
            images_gimmickconveyorbeltright3_2820_0_0[5] = get_internal_image(10707);
            images_gimmickconveyorbeltright3_2820_0_0[6] = get_internal_image(10706);
            images_gimmickconveyorbeltright3_2820_0_0[7] = get_internal_image(10705);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_gimmickconveyorbeltright3_2820(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltRight3_2820(x, y);
}
static Image* images_enemytankbot_2821_0_0[1];
static Direction direction_enemytankbot_2821_0_0 = {0, 20, 20, 0, -1, images_enemytankbot_2821_0_0, 1};
static Image* images_enemytankbot_2821_0_16[1];
static Direction direction_enemytankbot_2821_0_16 = {16, 20, 20, 0, -1, images_enemytankbot_2821_0_16, 1};
static Image* images_enemytankbot_2821_0_24[6];
static Direction direction_enemytankbot_2821_0_24 = {24, 50, 50, 0, 1, images_enemytankbot_2821_0_24, 6};
static Animation anim_enemytankbot_2821_0 = {&direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, NULL, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, &direction_enemytankbot_2821_0_16, NULL, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, &direction_enemytankbot_2821_0_24, NULL, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0, &direction_enemytankbot_2821_0_0};
static Image* images_enemytankbot_2821_1_0[8];
static Direction direction_enemytankbot_2821_1_0 = {0, 100, 100, 0, -1, images_enemytankbot_2821_1_0, 8};
static Image* images_enemytankbot_2821_1_16[8];
static Direction direction_enemytankbot_2821_1_16 = {16, 100, 100, 0, -1, images_enemytankbot_2821_1_16, 8};
static Image* images_enemytankbot_2821_1_24[8];
static Direction direction_enemytankbot_2821_1_24 = {24, 100, 100, 0, -1, images_enemytankbot_2821_1_24, 8};
static Animation anim_enemytankbot_2821_1 = {&direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, NULL, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, &direction_enemytankbot_2821_1_16, NULL, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, &direction_enemytankbot_2821_1_24, NULL, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0, &direction_enemytankbot_2821_1_0};
static Image* images_enemytankbot_2821_7_0[21];
static Direction direction_enemytankbot_2821_7_0 = {0, 40, 40, 0, 1, images_enemytankbot_2821_7_0, 21};
static Image* images_enemytankbot_2821_7_16[21];
static Direction direction_enemytankbot_2821_7_16 = {16, 40, 40, 0, 1, images_enemytankbot_2821_7_16, 21};
static Image* images_enemytankbot_2821_7_24[6];
static Direction direction_enemytankbot_2821_7_24 = {24, 50, 50, 0, 1, images_enemytankbot_2821_7_24, 6};
static Animation anim_enemytankbot_2821_7 = {&direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, NULL, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, &direction_enemytankbot_2821_7_16, NULL, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, &direction_enemytankbot_2821_7_24, NULL, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0, &direction_enemytankbot_2821_7_0};
static Image* images_enemytankbot_2821_8_0[3];
static Direction direction_enemytankbot_2821_8_0 = {0, 40, 40, 0, -1, images_enemytankbot_2821_8_0, 3};
static Image* images_enemytankbot_2821_8_16[3];
static Direction direction_enemytankbot_2821_8_16 = {16, 40, 40, 0, -1, images_enemytankbot_2821_8_16, 3};
static Image* images_enemytankbot_2821_8_24[2];
static Direction direction_enemytankbot_2821_8_24 = {24, 50, 50, 0, 1, images_enemytankbot_2821_8_24, 2};
static Animation anim_enemytankbot_2821_8 = {&direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, NULL, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, &direction_enemytankbot_2821_8_16, NULL, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, &direction_enemytankbot_2821_8_24, NULL, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0, &direction_enemytankbot_2821_8_0};
static Image* images_enemytankbot_2821_10_0[1];
static Direction direction_enemytankbot_2821_10_0 = {0, 50, 50, 0, -1, images_enemytankbot_2821_10_0, 1};
static Image* images_enemytankbot_2821_10_16[1];
static Direction direction_enemytankbot_2821_10_16 = {16, 50, 50, 0, -1, images_enemytankbot_2821_10_16, 1};
static Animation anim_enemytankbot_2821_10 = {&direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, NULL, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, &direction_enemytankbot_2821_10_16, NULL, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0, &direction_enemytankbot_2821_10_0};
static Image* images_enemytankbot_2821_11_16[8];
static Direction direction_enemytankbot_2821_11_16 = {16, 20, 20, 0, 1, images_enemytankbot_2821_11_16, 8};
static Animation anim_enemytankbot_2821_11 = {NULL, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16, &direction_enemytankbot_2821_11_16};
static Animation * anim_array_enemytankbot_2821[12] = {&anim_enemytankbot_2821_0, &anim_enemytankbot_2821_1, NULL, NULL, NULL, NULL, NULL, &anim_enemytankbot_2821_7, &anim_enemytankbot_2821_8, NULL, &anim_enemytankbot_2821_10, &anim_enemytankbot_2821_11};
static Animations anim_enemytankbot_2821 = {12, &anim_array_enemytankbot_2821[0]};
static bool anim_enemytankbot_2821_initialized;
class EnemyTankbot_2821 : public Active
{
public:
    EnemyTankbot_2821(int x, int y) : Active(x, y, EnemyTankbot_2821_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Tankbot", 13);
#endif
        this->animations = &anim_enemytankbot_2821;
        if (!anim_enemytankbot_2821_initialized) {
            anim_enemytankbot_2821_initialized = true;
            images_enemytankbot_2821_0_0[0] = get_internal_image(12321);
            images_enemytankbot_2821_0_16[0] = get_internal_image(12335);
            images_enemytankbot_2821_0_24[0] = get_internal_image(5105);
            images_enemytankbot_2821_0_24[1] = get_internal_image(7210);
            images_enemytankbot_2821_0_24[2] = get_internal_image(10630);
            images_enemytankbot_2821_0_24[3] = get_internal_image(10627);
            images_enemytankbot_2821_0_24[4] = get_internal_image(10626);
            images_enemytankbot_2821_0_24[5] = get_internal_image(10638);
            images_enemytankbot_2821_1_0[0] = get_internal_image(12321);
            images_enemytankbot_2821_1_0[1] = get_internal_image(12330);
            images_enemytankbot_2821_1_0[2] = get_internal_image(12329);
            images_enemytankbot_2821_1_0[3] = get_internal_image(12322);
            images_enemytankbot_2821_1_0[4] = get_internal_image(12323);
            images_enemytankbot_2821_1_0[5] = get_internal_image(12324);
            images_enemytankbot_2821_1_0[6] = get_internal_image(12325);
            images_enemytankbot_2821_1_0[7] = get_internal_image(12326);
            images_enemytankbot_2821_1_16[0] = get_internal_image(12335);
            images_enemytankbot_2821_1_16[1] = get_internal_image(12336);
            images_enemytankbot_2821_1_16[2] = get_internal_image(12337);
            images_enemytankbot_2821_1_16[3] = get_internal_image(12338);
            images_enemytankbot_2821_1_16[4] = get_internal_image(12339);
            images_enemytankbot_2821_1_16[5] = get_internal_image(12340);
            images_enemytankbot_2821_1_16[6] = get_internal_image(12341);
            images_enemytankbot_2821_1_16[7] = get_internal_image(12342);
            images_enemytankbot_2821_1_24[0] = get_internal_image(9683);
            images_enemytankbot_2821_1_24[1] = get_internal_image(10629);
            images_enemytankbot_2821_1_24[2] = get_internal_image(10622);
            images_enemytankbot_2821_1_24[3] = get_internal_image(8610);
            images_enemytankbot_2821_1_24[4] = get_internal_image(7407);
            images_enemytankbot_2821_1_24[5] = get_internal_image(10642);
            images_enemytankbot_2821_1_24[6] = get_internal_image(10643);
            images_enemytankbot_2821_1_24[7] = get_internal_image(10649);
            images_enemytankbot_2821_7_0[0] = get_internal_image(12334);
            images_enemytankbot_2821_7_0[1] = get_internal_image(12308);
            images_enemytankbot_2821_7_0[2] = get_internal_image(12334);
            images_enemytankbot_2821_7_0[3] = get_internal_image(12308);
            images_enemytankbot_2821_7_0[4] = get_internal_image(12334);
            images_enemytankbot_2821_7_0[5] = get_internal_image(12334);
            images_enemytankbot_2821_7_0[6] = get_internal_image(12334);
            images_enemytankbot_2821_7_0[7] = get_internal_image(12327);
            images_enemytankbot_2821_7_0[8] = get_internal_image(12306);
            images_enemytankbot_2821_7_0[9] = get_internal_image(12306);
            images_enemytankbot_2821_7_0[10] = get_internal_image(12351);
            images_enemytankbot_2821_7_0[11] = get_internal_image(12352);
            images_enemytankbot_2821_7_0[12] = get_internal_image(12327);
            images_enemytankbot_2821_7_0[13] = get_internal_image(12331);
            images_enemytankbot_2821_7_0[14] = get_internal_image(12332);
            images_enemytankbot_2821_7_0[15] = get_internal_image(12309);
            images_enemytankbot_2821_7_0[16] = get_internal_image(12309);
            images_enemytankbot_2821_7_0[17] = get_internal_image(12353);
            images_enemytankbot_2821_7_0[18] = get_internal_image(12354);
            images_enemytankbot_2821_7_0[19] = get_internal_image(12332);
            images_enemytankbot_2821_7_0[20] = get_internal_image(12331);
            images_enemytankbot_2821_7_16[0] = get_internal_image(12343);
            images_enemytankbot_2821_7_16[1] = get_internal_image(12355);
            images_enemytankbot_2821_7_16[2] = get_internal_image(12343);
            images_enemytankbot_2821_7_16[3] = get_internal_image(12355);
            images_enemytankbot_2821_7_16[4] = get_internal_image(12343);
            images_enemytankbot_2821_7_16[5] = get_internal_image(12343);
            images_enemytankbot_2821_7_16[6] = get_internal_image(12343);
            images_enemytankbot_2821_7_16[7] = get_internal_image(12344);
            images_enemytankbot_2821_7_16[8] = get_internal_image(12356);
            images_enemytankbot_2821_7_16[9] = get_internal_image(12356);
            images_enemytankbot_2821_7_16[10] = get_internal_image(12357);
            images_enemytankbot_2821_7_16[11] = get_internal_image(12358);
            images_enemytankbot_2821_7_16[12] = get_internal_image(12344);
            images_enemytankbot_2821_7_16[13] = get_internal_image(12346);
            images_enemytankbot_2821_7_16[14] = get_internal_image(12347);
            images_enemytankbot_2821_7_16[15] = get_internal_image(12359);
            images_enemytankbot_2821_7_16[16] = get_internal_image(12359);
            images_enemytankbot_2821_7_16[17] = get_internal_image(12360);
            images_enemytankbot_2821_7_16[18] = get_internal_image(12361);
            images_enemytankbot_2821_7_16[19] = get_internal_image(12347);
            images_enemytankbot_2821_7_16[20] = get_internal_image(12346);
            images_enemytankbot_2821_7_24[0] = get_internal_image(9683);
            images_enemytankbot_2821_7_24[1] = get_internal_image(10694);
            images_enemytankbot_2821_7_24[2] = get_internal_image(10692);
            images_enemytankbot_2821_7_24[3] = get_internal_image(9683);
            images_enemytankbot_2821_7_24[4] = get_internal_image(11599);
            images_enemytankbot_2821_7_24[5] = get_internal_image(11600);
            images_enemytankbot_2821_8_0[0] = get_internal_image(12318);
            images_enemytankbot_2821_8_0[1] = get_internal_image(12319);
            images_enemytankbot_2821_8_0[2] = get_internal_image(12320);
            images_enemytankbot_2821_8_16[0] = get_internal_image(5139);
            images_enemytankbot_2821_8_16[1] = get_internal_image(5143);
            images_enemytankbot_2821_8_16[2] = get_internal_image(12313);
            images_enemytankbot_2821_8_24[0] = get_internal_image(12310);
            images_enemytankbot_2821_8_24[1] = get_internal_image(12307);
            images_enemytankbot_2821_10_0[0] = get_internal_image(12311);
            images_enemytankbot_2821_10_16[0] = get_internal_image(12312);
            images_enemytankbot_2821_11_16[0] = get_internal_image(5080);
            images_enemytankbot_2821_11_16[1] = get_internal_image(5083);
            images_enemytankbot_2821_11_16[2] = get_internal_image(5130);
            images_enemytankbot_2821_11_16[3] = get_internal_image(5083);
            images_enemytankbot_2821_11_16[4] = get_internal_image(5080);
            images_enemytankbot_2821_11_16[5] = get_internal_image(5131);
            images_enemytankbot_2821_11_16[6] = get_internal_image(5132);
            images_enemytankbot_2821_11_16[7] = get_internal_image(5131);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(5, -1);
    }
};
FrameObject * create_enemytankbot_2821(int x, int y)
{
    return new (Active::pool.create()) EnemyTankbot_2821(x, y);
}
static Image* images_tbpipeloop8_2822_0_0[1];
static Direction direction_tbpipeloop8_2822_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop8_2822_0_0, 1};
static Animation anim_tbpipeloop8_2822_0 = {&direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, NULL, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0, &direction_tbpipeloop8_2822_0_0};
static Animation * anim_array_tbpipeloop8_2822[1] = {&anim_tbpipeloop8_2822_0};
static Animations anim_tbpipeloop8_2822 = {1, &anim_array_tbpipeloop8_2822[0]};
static bool anim_tbpipeloop8_2822_initialized;
class TBPipeLoop8_2822 : public Active
{
public:
    TBPipeLoop8_2822(int x, int y) : Active(x, y, TBPipeLoop8_2822_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 8", 13);
#endif
        this->animations = &anim_tbpipeloop8_2822;
        if (!anim_tbpipeloop8_2822_initialized) {
            anim_tbpipeloop8_2822_initialized = true;
            images_tbpipeloop8_2822_0_0[0] = get_internal_image(4192);
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
FrameObject * create_tbpipeloop8_2822(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop8_2822(x, y);
}
static Image* images_tbpipeloop9_2823_0_0[1];
static Direction direction_tbpipeloop9_2823_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop9_2823_0_0, 1};
static Animation anim_tbpipeloop9_2823_0 = {&direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, NULL, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0, &direction_tbpipeloop9_2823_0_0};
static Animation * anim_array_tbpipeloop9_2823[1] = {&anim_tbpipeloop9_2823_0};
static Animations anim_tbpipeloop9_2823 = {1, &anim_array_tbpipeloop9_2823[0]};
static bool anim_tbpipeloop9_2823_initialized;
class TBPipeLoop9_2823 : public Active
{
public:
    TBPipeLoop9_2823(int x, int y) : Active(x, y, TBPipeLoop9_2823_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 9", 13);
#endif
        this->animations = &anim_tbpipeloop9_2823;
        if (!anim_tbpipeloop9_2823_initialized) {
            anim_tbpipeloop9_2823_initialized = true;
            images_tbpipeloop9_2823_0_0[0] = get_internal_image(4188);
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
FrameObject * create_tbpipeloop9_2823(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop9_2823(x, y);
}
static Image* images_gimmickconveyorbeltleft_2824_0_0[8];
static Direction direction_gimmickconveyorbeltleft_2824_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltleft_2824_0_0, 8};
static Animation anim_gimmickconveyorbeltleft_2824_0 = {&direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, NULL, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0, &direction_gimmickconveyorbeltleft_2824_0_0};
static Animation * anim_array_gimmickconveyorbeltleft_2824[1] = {&anim_gimmickconveyorbeltleft_2824_0};
static Animations anim_gimmickconveyorbeltleft_2824 = {1, &anim_array_gimmickconveyorbeltleft_2824[0]};
static bool anim_gimmickconveyorbeltleft_2824_initialized;
class GimmickConveyorBeltLeft_2824 : public Active
{
public:
    GimmickConveyorBeltLeft_2824(int x, int y) : Active(x, y, GimmickConveyorBeltLeft_2824_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Left", 25);
#endif
        this->animations = &anim_gimmickconveyorbeltleft_2824;
        if (!anim_gimmickconveyorbeltleft_2824_initialized) {
            anim_gimmickconveyorbeltleft_2824_initialized = true;
            images_gimmickconveyorbeltleft_2824_0_0[0] = get_internal_image(10659);
            images_gimmickconveyorbeltleft_2824_0_0[1] = get_internal_image(10687);
            images_gimmickconveyorbeltleft_2824_0_0[2] = get_internal_image(10648);
            images_gimmickconveyorbeltleft_2824_0_0[3] = get_internal_image(10680);
            images_gimmickconveyorbeltleft_2824_0_0[4] = get_internal_image(10682);
            images_gimmickconveyorbeltleft_2824_0_0[5] = get_internal_image(10683);
            images_gimmickconveyorbeltleft_2824_0_0[6] = get_internal_image(10684);
            images_gimmickconveyorbeltleft_2824_0_0[7] = get_internal_image(10685);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -2);
    }
};
FrameObject * create_gimmickconveyorbeltleft_2824(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltLeft_2824(x, y);
}
static Image* images_gimmickconveyorbeltleft2_2825_0_0[8];
static Direction direction_gimmickconveyorbeltleft2_2825_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltleft2_2825_0_0, 8};
static Animation anim_gimmickconveyorbeltleft2_2825_0 = {&direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, NULL, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0, &direction_gimmickconveyorbeltleft2_2825_0_0};
static Animation * anim_array_gimmickconveyorbeltleft2_2825[1] = {&anim_gimmickconveyorbeltleft2_2825_0};
static Animations anim_gimmickconveyorbeltleft2_2825 = {1, &anim_array_gimmickconveyorbeltleft2_2825[0]};
static bool anim_gimmickconveyorbeltleft2_2825_initialized;
class GimmickConveyorBeltLeft2_2825 : public Active
{
public:
    GimmickConveyorBeltLeft2_2825(int x, int y) : Active(x, y, GimmickConveyorBeltLeft2_2825_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Left 2", 27);
#endif
        this->animations = &anim_gimmickconveyorbeltleft2_2825;
        if (!anim_gimmickconveyorbeltleft2_2825_initialized) {
            anim_gimmickconveyorbeltleft2_2825_initialized = true;
            images_gimmickconveyorbeltleft2_2825_0_0[0] = get_internal_image(10686);
            images_gimmickconveyorbeltleft2_2825_0_0[1] = get_internal_image(10698);
            images_gimmickconveyorbeltleft2_2825_0_0[2] = get_internal_image(10700);
            images_gimmickconveyorbeltleft2_2825_0_0[3] = get_internal_image(10695);
            images_gimmickconveyorbeltleft2_2825_0_0[4] = get_internal_image(10689);
            images_gimmickconveyorbeltleft2_2825_0_0[5] = get_internal_image(10701);
            images_gimmickconveyorbeltleft2_2825_0_0[6] = get_internal_image(10699);
            images_gimmickconveyorbeltleft2_2825_0_0[7] = get_internal_image(10696);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -2);
    }
};
FrameObject * create_gimmickconveyorbeltleft2_2825(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltLeft2_2825(x, y);
}
static Image* images_gimmickconveyorbeltleft3_2826_0_0[8];
static Direction direction_gimmickconveyorbeltleft3_2826_0_0 = {0, 20, 20, 0, -1, images_gimmickconveyorbeltleft3_2826_0_0, 8};
static Animation anim_gimmickconveyorbeltleft3_2826_0 = {&direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, NULL, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0, &direction_gimmickconveyorbeltleft3_2826_0_0};
static Animation * anim_array_gimmickconveyorbeltleft3_2826[1] = {&anim_gimmickconveyorbeltleft3_2826_0};
static Animations anim_gimmickconveyorbeltleft3_2826 = {1, &anim_array_gimmickconveyorbeltleft3_2826[0]};
static bool anim_gimmickconveyorbeltleft3_2826_initialized;
class GimmickConveyorBeltLeft3_2826 : public Active
{
public:
    GimmickConveyorBeltLeft3_2826(int x, int y) : Active(x, y, GimmickConveyorBeltLeft3_2826_type)
    {
        // qualifiers: 14, 47
#ifndef NDEBUG
        name = std::string("Gimmick_ConveyorBelt_Left 3", 27);
#endif
        this->animations = &anim_gimmickconveyorbeltleft3_2826;
        if (!anim_gimmickconveyorbeltleft3_2826_initialized) {
            anim_gimmickconveyorbeltleft3_2826_initialized = true;
            images_gimmickconveyorbeltleft3_2826_0_0[0] = get_internal_image(10703);
            images_gimmickconveyorbeltleft3_2826_0_0[1] = get_internal_image(10705);
            images_gimmickconveyorbeltleft3_2826_0_0[2] = get_internal_image(10706);
            images_gimmickconveyorbeltleft3_2826_0_0[3] = get_internal_image(10707);
            images_gimmickconveyorbeltleft3_2826_0_0[4] = get_internal_image(10708);
            images_gimmickconveyorbeltleft3_2826_0_0[5] = get_internal_image(10697);
            images_gimmickconveyorbeltleft3_2826_0_0[6] = get_internal_image(11598);
            images_gimmickconveyorbeltleft3_2826_0_0[7] = get_internal_image(10702);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -2);
    }
};
FrameObject * create_gimmickconveyorbeltleft3_2826(int x, int y)
{
    return new (Active::pool.create()) GimmickConveyorBeltLeft3_2826(x, y);
}
class LevelParallaxPiece2_2827 : public SystemBox
{
public:
    LevelParallaxPiece2_2827(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2827_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 1280;
        type = PATTERN_IMAGE;
        image = get_internal_image(3394);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2827(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2827(x, y);
}
class LevelParallaxPiece3_2828 : public SystemBox
{
public:
    LevelParallaxPiece3_2828(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_2828_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 1920;
        type = PATTERN_IMAGE;
        image = get_internal_image(5920);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_2828(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_2828(x, y);
}
static Image* images_gimmickwaterturbinebubble_2829_0_0[4];
static Direction direction_gimmickwaterturbinebubble_2829_0_0 = {0, 0, 0, 3, 1, images_gimmickwaterturbinebubble_2829_0_0, 4};
static Animation anim_gimmickwaterturbinebubble_2829_0 = {&direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, NULL, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0, &direction_gimmickwaterturbinebubble_2829_0_0};
static Animation * anim_array_gimmickwaterturbinebubble_2829[1] = {&anim_gimmickwaterturbinebubble_2829_0};
static Animations anim_gimmickwaterturbinebubble_2829 = {1, &anim_array_gimmickwaterturbinebubble_2829[0]};
static bool anim_gimmickwaterturbinebubble_2829_initialized;
class GimmickWaterTurbineBubble_2829 : public Active
{
public:
    GimmickWaterTurbineBubble_2829(int x, int y) : Active(x, y, GimmickWaterTurbineBubble_2829_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_WaterTurbineBubble", 26);
#endif
        this->animations = &anim_gimmickwaterturbinebubble_2829;
        if (!anim_gimmickwaterturbinebubble_2829_initialized) {
            anim_gimmickwaterturbinebubble_2829_initialized = true;
            images_gimmickwaterturbinebubble_2829_0_0[0] = get_internal_image(1517);
            images_gimmickwaterturbinebubble_2829_0_0[1] = get_internal_image(3628);
            images_gimmickwaterturbinebubble_2829_0_0[2] = get_internal_image(1770);
            images_gimmickwaterturbinebubble_2829_0_0[3] = get_internal_image(947);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(0, 1280);
        alterables->values.set(1, 10);
    }
};
FrameObject * create_gimmickwaterturbinebubble_2829(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterTurbineBubble_2829(x, y);
}
class TBWaterSectionTop_2830 : public QuickBackdrop
{
public:
    TBWaterSectionTop_2830(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterSectionTop", 18);
#endif
        flags |= BACKGROUND;
        width = 11840;
        height = 64;
        image = get_internal_image(6017);
        outline = 0;
    }
};
FrameObject * create_tbwatersectiontop_2830(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TBWaterSectionTop_2830(x, y);
}
class TBWaterSection_2831 : public QuickBackdrop
{
public:
    TBWaterSection_2831(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterSection", 15);
#endif
        flags |= BACKGROUND;
        width = 11840;
        height = 1088;
        image = get_internal_image(12459);
        outline = 0;
    }
};
FrameObject * create_tbwatersection_2831(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TBWaterSection_2831(x, y);
}
class TBWaterSection2_2832 : public QuickBackdrop
{
public:
    TBWaterSection2_2832(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterSection 2", 17);
#endif
        flags |= BACKGROUND;
        width = 1280;
        height = 3456;
        image = get_internal_image(12579);
        outline = 0;
    }
};
FrameObject * create_tbwatersection2_2832(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TBWaterSection2_2832(x, y);
}
class TBWaterLightBack4_2833 : public Backdrop
{
public:
    TBWaterLightBack4_2833(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterLightBack 4", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1330);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwaterlightback4_2833(int x, int y)
{
    return new (Backdrop::pool.create()) TBWaterLightBack4_2833(x, y);
}
class TBPresserTunnel_2834 : public Backdrop
{
public:
    TBPresserTunnel_2834(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_PresserTunnel", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7270);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbpressertunnel_2834(int x, int y)
{
    return new (Backdrop::pool.create()) TBPresserTunnel_2834(x, y);
}
static Image* images_gimmickgiantpressertube_2835_0_0[1];
static Direction direction_gimmickgiantpressertube_2835_0_0 = {0, 50, 50, 0, 1, images_gimmickgiantpressertube_2835_0_0, 1};
static Animation anim_gimmickgiantpressertube_2835_0 = {&direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, NULL, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0, &direction_gimmickgiantpressertube_2835_0_0};
static Animation * anim_array_gimmickgiantpressertube_2835[1] = {&anim_gimmickgiantpressertube_2835_0};
static Animations anim_gimmickgiantpressertube_2835 = {1, &anim_array_gimmickgiantpressertube_2835[0]};
static bool anim_gimmickgiantpressertube_2835_initialized;
class GimmickGiantPresserTube_2835 : public Active
{
public:
    GimmickGiantPresserTube_2835(int x, int y) : Active(x, y, GimmickGiantPresserTube_2835_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_GiantPresserTube", 24);
#endif
        this->animations = &anim_gimmickgiantpressertube_2835;
        if (!anim_gimmickgiantpressertube_2835_initialized) {
            anim_gimmickgiantpressertube_2835_initialized = true;
            images_gimmickgiantpressertube_2835_0_0[0] = get_internal_image(36);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 640);
    }
};
FrameObject * create_gimmickgiantpressertube_2835(int x, int y)
{
    return new (Active::pool.create()) GimmickGiantPresserTube_2835(x, y);
}
static Image* images_gimmckgiantpresser_2836_0_0[1];
static Direction direction_gimmckgiantpresser_2836_0_0 = {0, 50, 50, 0, 1, images_gimmckgiantpresser_2836_0_0, 1};
static Animation anim_gimmckgiantpresser_2836_0 = {&direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, NULL, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0, &direction_gimmckgiantpresser_2836_0_0};
static Animation * anim_array_gimmckgiantpresser_2836[1] = {&anim_gimmckgiantpresser_2836_0};
static Animations anim_gimmckgiantpresser_2836 = {1, &anim_array_gimmckgiantpresser_2836[0]};
static bool anim_gimmckgiantpresser_2836_initialized;
class GimmckGiantPresser_2836 : public Active
{
public:
    GimmckGiantPresser_2836(int x, int y) : Active(x, y, GimmckGiantPresser_2836_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmck_GiantPresser", 19);
#endif
        this->animations = &anim_gimmckgiantpresser_2836;
        if (!anim_gimmckgiantpresser_2836_initialized) {
            anim_gimmckgiantpresser_2836_initialized = true;
            images_gimmckgiantpresser_2836_0_0[0] = get_internal_image(2081);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 640);
    }
};
FrameObject * create_gimmckgiantpresser_2836(int x, int y)
{
    return new (Active::pool.create()) GimmckGiantPresser_2836(x, y);
}
static Image* images_gimmickwaterlever1_2837_0_0[2];
static Direction direction_gimmickwaterlever1_2837_0_0 = {0, 8, 8, 0, -1, images_gimmickwaterlever1_2837_0_0, 2};
static Animation anim_gimmickwaterlever1_2837_0 = {&direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, NULL, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0, &direction_gimmickwaterlever1_2837_0_0};
static Animation * anim_array_gimmickwaterlever1_2837[1] = {&anim_gimmickwaterlever1_2837_0};
static Animations anim_gimmickwaterlever1_2837 = {1, &anim_array_gimmickwaterlever1_2837[0]};
static bool anim_gimmickwaterlever1_2837_initialized;
class GimmickWaterLever1_2837 : public Active
{
public:
    GimmickWaterLever1_2837(int x, int y) : Active(x, y, GimmickWaterLever1_2837_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_WaterLever 1", 20);
#endif
        this->animations = &anim_gimmickwaterlever1_2837;
        if (!anim_gimmickwaterlever1_2837_initialized) {
            anim_gimmickwaterlever1_2837_initialized = true;
            images_gimmickwaterlever1_2837_0_0[0] = get_internal_image(1270);
            images_gimmickwaterlever1_2837_0_0[1] = get_internal_image(149);
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
FrameObject * create_gimmickwaterlever1_2837(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterLever1_2837(x, y);
}
static Image* images_gimmickwaterlever2_2838_0_0[2];
static Direction direction_gimmickwaterlever2_2838_0_0 = {0, 8, 8, 0, -1, images_gimmickwaterlever2_2838_0_0, 2};
static Animation anim_gimmickwaterlever2_2838_0 = {&direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, NULL, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0, &direction_gimmickwaterlever2_2838_0_0};
static Animation * anim_array_gimmickwaterlever2_2838[1] = {&anim_gimmickwaterlever2_2838_0};
static Animations anim_gimmickwaterlever2_2838 = {1, &anim_array_gimmickwaterlever2_2838[0]};
static bool anim_gimmickwaterlever2_2838_initialized;
class GimmickWaterLever2_2838 : public Active
{
public:
    GimmickWaterLever2_2838(int x, int y) : Active(x, y, GimmickWaterLever2_2838_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_WaterLever 2", 20);
#endif
        this->animations = &anim_gimmickwaterlever2_2838;
        if (!anim_gimmickwaterlever2_2838_initialized) {
            anim_gimmickwaterlever2_2838_initialized = true;
            images_gimmickwaterlever2_2838_0_0[0] = get_internal_image(1270);
            images_gimmickwaterlever2_2838_0_0[1] = get_internal_image(149);
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
FrameObject * create_gimmickwaterlever2_2838(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterLever2_2838(x, y);
}
static Image* images_underwaterbgturbine_2839_0_0[1];
static Direction direction_underwaterbgturbine_2839_0_0 = {0, 50, 50, 0, 1, images_underwaterbgturbine_2839_0_0, 1};
static Animation anim_underwaterbgturbine_2839_0 = {&direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, NULL, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0, &direction_underwaterbgturbine_2839_0_0};
static Animation * anim_array_underwaterbgturbine_2839[1] = {&anim_underwaterbgturbine_2839_0};
static Animations anim_underwaterbgturbine_2839 = {1, &anim_array_underwaterbgturbine_2839[0]};
static bool anim_underwaterbgturbine_2839_initialized;
class UnderwaterBGTurbine_2839 : public Active
{
public:
    UnderwaterBGTurbine_2839(int x, int y) : Active(x, y, UnderwaterBGTurbine_2839_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UnderwaterBGTurbine", 19);
#endif
        this->animations = &anim_underwaterbgturbine_2839;
        if (!anim_underwaterbgturbine_2839_initialized) {
            anim_underwaterbgturbine_2839_initialized = true;
            images_underwaterbgturbine_2839_0_0[0] = get_internal_image(5985);
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
FrameObject * create_underwaterbgturbine_2839(int x, int y)
{
    return new (Active::pool.create()) UnderwaterBGTurbine_2839(x, y);
}
class TBConcrete_2840 : public Backdrop
{
public:
    TBConcrete_2840(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Concrete", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1271);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbconcrete_2840(int x, int y)
{
    return new (Backdrop::pool.create()) TBConcrete_2840(x, y);
}
class TBBluePiping3_2841 : public Backdrop
{
public:
    TBBluePiping3_2841(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12432);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping3_2841(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping3_2841(x, y);
}
class TBBluePiping5_2842 : public Backdrop
{
public:
    TBBluePiping5_2842(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12435);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping5_2842(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping5_2842(x, y);
}
class TBWaterLightBack2_2843 : public Backdrop
{
public:
    TBWaterLightBack2_2843(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterLightBack 2", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12446);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwaterlightback2_2843(int x, int y)
{
    return new (Backdrop::pool.create()) TBWaterLightBack2_2843(x, y);
}
class TBWaterLightBack1_2844 : public Backdrop
{
public:
    TBWaterLightBack1_2844(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterLightBack 1", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12430);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwaterlightback1_2844(int x, int y)
{
    return new (Backdrop::pool.create()) TBWaterLightBack1_2844(x, y);
}
class TBWaterLightBack3_2845 : public Backdrop
{
public:
    TBWaterLightBack3_2845(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_WaterLightBack 3", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12431);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwaterlightback3_2845(int x, int y)
{
    return new (Backdrop::pool.create()) TBWaterLightBack3_2845(x, y);
}
class GimmickWaterTurbineEnd_2846 : public Backdrop
{
public:
    GimmickWaterTurbineEnd_2846(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_WaterTurbineEnd", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(755);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_gimmickwaterturbineend_2846(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickWaterTurbineEnd_2846(x, y);
}
class BonusStageWallShadow_2847 : public Backdrop
{
public:
    BonusStageWallShadow_2847(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("BonusStage_WallShadow", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12581);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bonusstagewallshadow_2847(int x, int y)
{
    return new (Backdrop::pool.create()) BonusStageWallShadow_2847(x, y);
}
static Image* images_tbwaterlight_2848_0_0[7];
static Direction direction_tbwaterlight_2848_0_0 = {0, 0, 0, 0, -1, images_tbwaterlight_2848_0_0, 7};
static Animation anim_tbwaterlight_2848_0 = {&direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, NULL, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0, &direction_tbwaterlight_2848_0_0};
static Animation * anim_array_tbwaterlight_2848[1] = {&anim_tbwaterlight_2848_0};
static Animations anim_tbwaterlight_2848 = {1, &anim_array_tbwaterlight_2848[0]};
static bool anim_tbwaterlight_2848_initialized;
class TBWaterLight_2848 : public Active
{
public:
    TBWaterLight_2848(int x, int y) : Active(x, y, TBWaterLight_2848_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TB_WaterLight", 13);
#endif
        this->animations = &anim_tbwaterlight_2848;
        if (!anim_tbwaterlight_2848_initialized) {
            anim_tbwaterlight_2848_initialized = true;
            images_tbwaterlight_2848_0_0[0] = get_internal_image(2354);
            images_tbwaterlight_2848_0_0[1] = get_internal_image(12447);
            images_tbwaterlight_2848_0_0[2] = get_internal_image(12448);
            images_tbwaterlight_2848_0_0[3] = get_internal_image(12449);
            images_tbwaterlight_2848_0_0[4] = get_internal_image(12450);
            images_tbwaterlight_2848_0_0[5] = get_internal_image(12451);
            images_tbwaterlight_2848_0_0[6] = get_internal_image(2354);
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
FrameObject * create_tbwaterlight_2848(int x, int y)
{
    return new (Active::pool.create()) TBWaterLight_2848(x, y);
}
static Image* images_tbpipeloop10_2849_0_0[1];
static Direction direction_tbpipeloop10_2849_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop10_2849_0_0, 1};
static Animation anim_tbpipeloop10_2849_0 = {&direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, NULL, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0, &direction_tbpipeloop10_2849_0_0};
static Animation * anim_array_tbpipeloop10_2849[1] = {&anim_tbpipeloop10_2849_0};
static Animations anim_tbpipeloop10_2849 = {1, &anim_array_tbpipeloop10_2849[0]};
static bool anim_tbpipeloop10_2849_initialized;
class TBPipeLoop10_2849 : public Active
{
public:
    TBPipeLoop10_2849(int x, int y) : Active(x, y, TBPipeLoop10_2849_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 10", 14);
#endif
        this->animations = &anim_tbpipeloop10_2849;
        if (!anim_tbpipeloop10_2849_initialized) {
            anim_tbpipeloop10_2849_initialized = true;
            images_tbpipeloop10_2849_0_0[0] = get_internal_image(4189);
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
FrameObject * create_tbpipeloop10_2849(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop10_2849(x, y);
}
static Image* images_tbpipeloop11_2850_0_0[1];
static Direction direction_tbpipeloop11_2850_0_0 = {0, 50, 50, 0, 1, images_tbpipeloop11_2850_0_0, 1};
static Animation anim_tbpipeloop11_2850_0 = {&direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, NULL, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0, &direction_tbpipeloop11_2850_0_0};
static Animation * anim_array_tbpipeloop11_2850[1] = {&anim_tbpipeloop11_2850_0};
static Animations anim_tbpipeloop11_2850 = {1, &anim_array_tbpipeloop11_2850[0]};
static bool anim_tbpipeloop11_2850_initialized;
class TBPipeLoop11_2850 : public Active
{
public:
    TBPipeLoop11_2850(int x, int y) : Active(x, y, TBPipeLoop11_2850_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("TB_PipeLoop 11", 14);
#endif
        this->animations = &anim_tbpipeloop11_2850;
        if (!anim_tbpipeloop11_2850_initialized) {
            anim_tbpipeloop11_2850_initialized = true;
            images_tbpipeloop11_2850_0_0[0] = get_internal_image(4188);
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
FrameObject * create_tbpipeloop11_2850(int x, int y)
{
    return new (Active::pool.create()) TBPipeLoop11_2850(x, y);
}
static Image* images_gimmickwaterturbine_2851_0_0[1];
static Direction direction_gimmickwaterturbine_2851_0_0 = {0, 50, 50, 0, 1, images_gimmickwaterturbine_2851_0_0, 1};
static Animation anim_gimmickwaterturbine_2851_0 = {&direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, NULL, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0, &direction_gimmickwaterturbine_2851_0_0};
static Animation * anim_array_gimmickwaterturbine_2851[1] = {&anim_gimmickwaterturbine_2851_0};
static Animations anim_gimmickwaterturbine_2851 = {1, &anim_array_gimmickwaterturbine_2851[0]};
static bool anim_gimmickwaterturbine_2851_initialized;
class GimmickWaterTurbine_2851 : public Active
{
public:
    GimmickWaterTurbine_2851(int x, int y) : Active(x, y, GimmickWaterTurbine_2851_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_WaterTurbine", 20);
#endif
        this->animations = &anim_gimmickwaterturbine_2851;
        if (!anim_gimmickwaterturbine_2851_initialized) {
            anim_gimmickwaterturbine_2851_initialized = true;
            images_gimmickwaterturbine_2851_0_0[0] = get_internal_image(568);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1280);
    }
};
FrameObject * create_gimmickwaterturbine_2851(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterTurbine_2851(x, y);
}
static Image* images_gimmickwaterlevelmask1_2852_0_0[1];
static Direction direction_gimmickwaterlevelmask1_2852_0_0 = {0, 50, 50, 0, 1, images_gimmickwaterlevelmask1_2852_0_0, 1};
static Animation anim_gimmickwaterlevelmask1_2852_0 = {&direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, NULL, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0, &direction_gimmickwaterlevelmask1_2852_0_0};
static Animation * anim_array_gimmickwaterlevelmask1_2852[1] = {&anim_gimmickwaterlevelmask1_2852_0};
static Animations anim_gimmickwaterlevelmask1_2852 = {1, &anim_array_gimmickwaterlevelmask1_2852[0]};
static bool anim_gimmickwaterlevelmask1_2852_initialized;
class GimmickWaterLevelMask1_2852 : public Active
{
public:
    GimmickWaterLevelMask1_2852(int x, int y) : Active(x, y, GimmickWaterLevelMask1_2852_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_WaterLevelMask 1", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickwaterlevelmask1_2852;
        if (!anim_gimmickwaterlevelmask1_2852_initialized) {
            anim_gimmickwaterlevelmask1_2852_initialized = true;
            images_gimmickwaterlevelmask1_2852_0_0[0] = get_internal_image(552);
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
FrameObject * create_gimmickwaterlevelmask1_2852(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterLevelMask1_2852(x, y);
}
static Image* images_gimmickwaterlevelmask2_2853_0_0[1];
static Direction direction_gimmickwaterlevelmask2_2853_0_0 = {0, 50, 50, 0, 1, images_gimmickwaterlevelmask2_2853_0_0, 1};
static Animation anim_gimmickwaterlevelmask2_2853_0 = {&direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, NULL, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0, &direction_gimmickwaterlevelmask2_2853_0_0};
static Animation * anim_array_gimmickwaterlevelmask2_2853[1] = {&anim_gimmickwaterlevelmask2_2853_0};
static Animations anim_gimmickwaterlevelmask2_2853 = {1, &anim_array_gimmickwaterlevelmask2_2853[0]};
static bool anim_gimmickwaterlevelmask2_2853_initialized;
class GimmickWaterLevelMask2_2853 : public Active
{
public:
    GimmickWaterLevelMask2_2853(int x, int y) : Active(x, y, GimmickWaterLevelMask2_2853_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_WaterLevelMask 2", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickwaterlevelmask2_2853;
        if (!anim_gimmickwaterlevelmask2_2853_initialized) {
            anim_gimmickwaterlevelmask2_2853_initialized = true;
            images_gimmickwaterlevelmask2_2853_0_0[0] = get_internal_image(552);
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
FrameObject * create_gimmickwaterlevelmask2_2853(int x, int y)
{
    return new (Active::pool.create()) GimmickWaterLevelMask2_2853(x, y);
}
static Image* images_gimmckgiantpresserhitbox_2854_0_0[1];
static Direction direction_gimmckgiantpresserhitbox_2854_0_0 = {0, 50, 50, 0, 1, images_gimmckgiantpresserhitbox_2854_0_0, 1};
static Animation anim_gimmckgiantpresserhitbox_2854_0 = {&direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, NULL, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0, &direction_gimmckgiantpresserhitbox_2854_0_0};
static Animation * anim_array_gimmckgiantpresserhitbox_2854[1] = {&anim_gimmckgiantpresserhitbox_2854_0};
static Animations anim_gimmckgiantpresserhitbox_2854 = {1, &anim_array_gimmckgiantpresserhitbox_2854[0]};
static bool anim_gimmckgiantpresserhitbox_2854_initialized;
class GimmckGiantPresserHitbox_2854 : public Active
{
public:
    GimmckGiantPresserHitbox_2854(int x, int y) : Active(x, y, GimmckGiantPresserHitbox_2854_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmck_GiantPresserHitbox", 25);
#endif
        set_visible(false);
        this->animations = &anim_gimmckgiantpresserhitbox_2854;
        if (!anim_gimmckgiantpresserhitbox_2854_initialized) {
            anim_gimmckgiantpresserhitbox_2854_initialized = true;
            images_gimmckgiantpresserhitbox_2854_0_0[0] = get_internal_image(2080);
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
FrameObject * create_gimmckgiantpresserhitbox_2854(int x, int y)
{
    return new (Active::pool.create()) GimmckGiantPresserHitbox_2854(x, y);
}
static Image* images_hazardspikesleft_2855_0_0[1];
static Direction direction_hazardspikesleft_2855_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_2855_0_0, 1};
static Animation anim_hazardspikesleft_2855_0 = {&direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, NULL, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0, &direction_hazardspikesleft_2855_0_0};
static Animation * anim_array_hazardspikesleft_2855[1] = {&anim_hazardspikesleft_2855_0};
static Animations anim_hazardspikesleft_2855 = {1, &anim_array_hazardspikesleft_2855[0]};
static bool anim_hazardspikesleft_2855_initialized;
class HazardSpikesLeft_2855 : public Active
{
public:
    HazardSpikesLeft_2855(int x, int y) : Active(x, y, HazardSpikesLeft_2855_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_2855;
        if (!anim_hazardspikesleft_2855_initialized) {
            anim_hazardspikesleft_2855_initialized = true;
            images_hazardspikesleft_2855_0_0[0] = get_internal_image(159);
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
FrameObject * create_hazardspikesleft_2855(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_2855(x, y);
}
static Image* images_hazardspikesright_2856_0_0[1];
static Direction direction_hazardspikesright_2856_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_2856_0_0, 1};
static Animation anim_hazardspikesright_2856_0 = {&direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, NULL, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0, &direction_hazardspikesright_2856_0_0};
static Animation * anim_array_hazardspikesright_2856[1] = {&anim_hazardspikesright_2856_0};
static Animations anim_hazardspikesright_2856 = {1, &anim_array_hazardspikesright_2856[0]};
static bool anim_hazardspikesright_2856_initialized;
class HazardSpikesRight_2856 : public Active
{
public:
    HazardSpikesRight_2856(int x, int y) : Active(x, y, HazardSpikesRight_2856_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_2856;
        if (!anim_hazardspikesright_2856_initialized) {
            anim_hazardspikesright_2856_initialized = true;
            images_hazardspikesright_2856_0_0[0] = get_internal_image(2061);
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
FrameObject * create_hazardspikesright_2856(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_2856(x, y);
}
static Image* images_hazardspikesdown_2857_0_0[1];
static Direction direction_hazardspikesdown_2857_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_2857_0_0, 1};
static Animation anim_hazardspikesdown_2857_0 = {&direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, NULL, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0, &direction_hazardspikesdown_2857_0_0};
static Animation * anim_array_hazardspikesdown_2857[1] = {&anim_hazardspikesdown_2857_0};
static Animations anim_hazardspikesdown_2857 = {1, &anim_array_hazardspikesdown_2857[0]};
static bool anim_hazardspikesdown_2857_initialized;
class HazardSpikesDown_2857 : public Active
{
public:
    HazardSpikesDown_2857(int x, int y) : Active(x, y, HazardSpikesDown_2857_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_2857;
        if (!anim_hazardspikesdown_2857_initialized) {
            anim_hazardspikesdown_2857_initialized = true;
            images_hazardspikesdown_2857_0_0[0] = get_internal_image(15022);
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
FrameObject * create_hazardspikesdown_2857(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_2857(x, y);
}
class TBBluePiping4_2858 : public Backdrop
{
public:
    TBBluePiping4_2858(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3333);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping4_2858(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping4_2858(x, y);
}
class TBBluePiping6_2859 : public Backdrop
{
public:
    TBBluePiping6_2859(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_BluePiping 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3328);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbbluepiping6_2859(int x, int y)
{
    return new (Backdrop::pool.create()) TBBluePiping6_2859(x, y);
}
class LevelParallaxPiece2_2860 : public SystemBox
{
public:
    LevelParallaxPiece2_2860(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2860_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 1280;
        type = PATTERN_IMAGE;
        image = get_internal_image(2298);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2860(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2860(x, y);
}
static Image* images_bosslavasplashmain_2861_4_0[9];
static Direction direction_bosslavasplashmain_2861_4_0 = {0, 25, 25, 0, 1, images_bosslavasplashmain_2861_4_0, 9};
static Image* images_bosslavasplashmain_2861_4_16[9];
static Direction direction_bosslavasplashmain_2861_4_16 = {16, 25, 25, 0, 1, images_bosslavasplashmain_2861_4_16, 9};
static Animation anim_bosslavasplashmain_2861_4 = {&direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, NULL, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, &direction_bosslavasplashmain_2861_4_16, NULL, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0, &direction_bosslavasplashmain_2861_4_0};
static Animation * anim_array_bosslavasplashmain_2861[5] = {NULL, NULL, NULL, NULL, &anim_bosslavasplashmain_2861_4};
static Animations anim_bosslavasplashmain_2861 = {5, &anim_array_bosslavasplashmain_2861[0]};
static bool anim_bosslavasplashmain_2861_initialized;
class BossLavaSplashMain_2861 : public Active
{
public:
    BossLavaSplashMain_2861(int x, int y) : Active(x, y, BossLavaSplashMain_2861_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplashMain", 19);
#endif
        this->animations = &anim_bosslavasplashmain_2861;
        if (!anim_bosslavasplashmain_2861_initialized) {
            anim_bosslavasplashmain_2861_initialized = true;
            images_bosslavasplashmain_2861_4_0[0] = get_internal_image(12375);
            images_bosslavasplashmain_2861_4_0[1] = get_internal_image(12376);
            images_bosslavasplashmain_2861_4_0[2] = get_internal_image(12377);
            images_bosslavasplashmain_2861_4_0[3] = get_internal_image(12378);
            images_bosslavasplashmain_2861_4_0[4] = get_internal_image(12381);
            images_bosslavasplashmain_2861_4_0[5] = get_internal_image(12382);
            images_bosslavasplashmain_2861_4_0[6] = get_internal_image(12386);
            images_bosslavasplashmain_2861_4_0[7] = get_internal_image(12387);
            images_bosslavasplashmain_2861_4_0[8] = get_internal_image(12500);
            images_bosslavasplashmain_2861_4_16[0] = get_internal_image(12501);
            images_bosslavasplashmain_2861_4_16[1] = get_internal_image(12505);
            images_bosslavasplashmain_2861_4_16[2] = get_internal_image(12507);
            images_bosslavasplashmain_2861_4_16[3] = get_internal_image(12510);
            images_bosslavasplashmain_2861_4_16[4] = get_internal_image(12511);
            images_bosslavasplashmain_2861_4_16[5] = get_internal_image(12554);
            images_bosslavasplashmain_2861_4_16[6] = get_internal_image(12555);
            images_bosslavasplashmain_2861_4_16[7] = get_internal_image(12556);
            images_bosslavasplashmain_2861_4_16[8] = get_internal_image(12557);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_direction(pick_random(2, 0, 16));
        create_alterables();
    }
};
FrameObject * create_bosslavasplashmain_2861(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplashMain_2861(x, y);
}
static Image* images_bosslavalaser_2862_0_0[1];
static Direction direction_bosslavalaser_2862_0_0 = {0, 50, 50, 0, 1, images_bosslavalaser_2862_0_0, 1};
static Animation anim_bosslavalaser_2862_0 = {&direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, NULL, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0, &direction_bosslavalaser_2862_0_0};
static Animation * anim_array_bosslavalaser_2862[1] = {&anim_bosslavalaser_2862_0};
static Animations anim_bosslavalaser_2862 = {1, &anim_array_bosslavalaser_2862[0]};
static bool anim_bosslavalaser_2862_initialized;
class BossLavaLaser_2862 : public Active
{
public:
    BossLavaLaser_2862(int x, int y) : Active(x, y, BossLavaLaser_2862_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaLaser", 14);
#endif
        this->animations = &anim_bosslavalaser_2862;
        if (!anim_bosslavalaser_2862_initialized) {
            anim_bosslavalaser_2862_initialized = true;
            images_bosslavalaser_2862_0_0[0] = get_internal_image(5995);
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
FrameObject * create_bosslavalaser_2862(int x, int y)
{
    return new (Active::pool.create()) BossLavaLaser_2862(x, y);
}
static Image* images_bosssyntaxsquidback_2863_0_0[1];
static Direction direction_bosssyntaxsquidback_2863_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidback_2863_0_0, 1};
static Animation anim_bosssyntaxsquidback_2863_0 = {&direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, NULL, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0, &direction_bosssyntaxsquidback_2863_0_0};
static Image* images_bosssyntaxsquidback_2863_8_0[2];
static Direction direction_bosssyntaxsquidback_2863_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidback_2863_8_0, 2};
static Animation anim_bosssyntaxsquidback_2863_8 = {&direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, NULL, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0, &direction_bosssyntaxsquidback_2863_8_0};
static Animation * anim_array_bosssyntaxsquidback_2863[9] = {&anim_bosssyntaxsquidback_2863_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidback_2863_8};
static Animations anim_bosssyntaxsquidback_2863 = {9, &anim_array_bosssyntaxsquidback_2863[0]};
static bool anim_bosssyntaxsquidback_2863_initialized;
class BossSyntaxSquidBack_2863 : public Active
{
public:
    BossSyntaxSquidBack_2863(int x, int y) : Active(x, y, BossSyntaxSquidBack_2863_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidBack", 20);
#endif
        this->animations = &anim_bosssyntaxsquidback_2863;
        if (!anim_bosssyntaxsquidback_2863_initialized) {
            anim_bosssyntaxsquidback_2863_initialized = true;
            images_bosssyntaxsquidback_2863_0_0[0] = get_internal_image(189);
            images_bosssyntaxsquidback_2863_8_0[0] = get_internal_image(12570);
            images_bosssyntaxsquidback_2863_8_0[1] = get_internal_image(189);
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
FrameObject * create_bosssyntaxsquidback_2863(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidBack_2863(x, y);
}
static Image* images_bosssyntaxsquidshoulderright_2864_0_0[1];
static Direction direction_bosssyntaxsquidshoulderright_2864_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidshoulderright_2864_0_0, 1};
static Image* images_bosssyntaxsquidshoulderright_2864_0_1[4];
static Direction direction_bosssyntaxsquidshoulderright_2864_0_1 = {1, 50, 50, 0, -1, images_bosssyntaxsquidshoulderright_2864_0_1, 4};
static Animation anim_bosssyntaxsquidshoulderright_2864_0 = {&direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_1, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0, &direction_bosssyntaxsquidshoulderright_2864_0_0};
static Image* images_bosssyntaxsquidshoulderright_2864_7_0[4];
static Direction direction_bosssyntaxsquidshoulderright_2864_7_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidshoulderright_2864_7_0, 4};
static Animation anim_bosssyntaxsquidshoulderright_2864_7 = {&direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, NULL, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0, &direction_bosssyntaxsquidshoulderright_2864_7_0};
static Image* images_bosssyntaxsquidshoulderright_2864_8_0[2];
static Direction direction_bosssyntaxsquidshoulderright_2864_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidshoulderright_2864_8_0, 2};
static Animation anim_bosssyntaxsquidshoulderright_2864_8 = {&direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, NULL, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0, &direction_bosssyntaxsquidshoulderright_2864_8_0};
static Animation * anim_array_bosssyntaxsquidshoulderright_2864[9] = {&anim_bosssyntaxsquidshoulderright_2864_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidshoulderright_2864_7, &anim_bosssyntaxsquidshoulderright_2864_8};
static Animations anim_bosssyntaxsquidshoulderright_2864 = {9, &anim_array_bosssyntaxsquidshoulderright_2864[0]};
static bool anim_bosssyntaxsquidshoulderright_2864_initialized;
class BossSyntaxSquidShoulderRight_2864 : public Active
{
public:
    BossSyntaxSquidShoulderRight_2864(int x, int y) : Active(x, y, BossSyntaxSquidShoulderRight_2864_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidShoulderRight", 29);
#endif
        this->animations = &anim_bosssyntaxsquidshoulderright_2864;
        if (!anim_bosssyntaxsquidshoulderright_2864_initialized) {
            anim_bosssyntaxsquidshoulderright_2864_initialized = true;
            images_bosssyntaxsquidshoulderright_2864_0_0[0] = get_internal_image(598);
            images_bosssyntaxsquidshoulderright_2864_0_1[0] = get_internal_image(944);
            images_bosssyntaxsquidshoulderright_2864_0_1[1] = get_internal_image(598);
            images_bosssyntaxsquidshoulderright_2864_0_1[2] = get_internal_image(2227);
            images_bosssyntaxsquidshoulderright_2864_0_1[3] = get_internal_image(2228);
            images_bosssyntaxsquidshoulderright_2864_7_0[0] = get_internal_image(2387);
            images_bosssyntaxsquidshoulderright_2864_7_0[1] = get_internal_image(2389);
            images_bosssyntaxsquidshoulderright_2864_7_0[2] = get_internal_image(2607);
            images_bosssyntaxsquidshoulderright_2864_7_0[3] = get_internal_image(2722);
            images_bosssyntaxsquidshoulderright_2864_8_0[0] = get_internal_image(12569);
            images_bosssyntaxsquidshoulderright_2864_8_0[1] = get_internal_image(598);
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
FrameObject * create_bosssyntaxsquidshoulderright_2864(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidShoulderRight_2864(x, y);
}
static Image* images_bosssyntaxsquidshoulderleft_2865_0_0[1];
static Direction direction_bosssyntaxsquidshoulderleft_2865_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidshoulderleft_2865_0_0, 1};
static Image* images_bosssyntaxsquidshoulderleft_2865_0_1[4];
static Direction direction_bosssyntaxsquidshoulderleft_2865_0_1 = {1, 50, 50, 0, -1, images_bosssyntaxsquidshoulderleft_2865_0_1, 4};
static Image* images_bosssyntaxsquidshoulderleft_2865_0_8[1];
static Direction direction_bosssyntaxsquidshoulderleft_2865_0_8 = {8, 50, 50, 0, 1, images_bosssyntaxsquidshoulderleft_2865_0_8, 1};
static Animation anim_bosssyntaxsquidshoulderleft_2865_0 = {&direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_1, &direction_bosssyntaxsquidshoulderleft_2865_0_1, &direction_bosssyntaxsquidshoulderleft_2865_0_1, &direction_bosssyntaxsquidshoulderleft_2865_0_1, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, &direction_bosssyntaxsquidshoulderleft_2865_0_8, NULL, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0, &direction_bosssyntaxsquidshoulderleft_2865_0_0};
static Image* images_bosssyntaxsquidshoulderleft_2865_7_0[4];
static Direction direction_bosssyntaxsquidshoulderleft_2865_7_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidshoulderleft_2865_7_0, 4};
static Animation anim_bosssyntaxsquidshoulderleft_2865_7 = {&direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, NULL, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0, &direction_bosssyntaxsquidshoulderleft_2865_7_0};
static Image* images_bosssyntaxsquidshoulderleft_2865_8_0[2];
static Direction direction_bosssyntaxsquidshoulderleft_2865_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidshoulderleft_2865_8_0, 2};
static Animation anim_bosssyntaxsquidshoulderleft_2865_8 = {&direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, NULL, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0, &direction_bosssyntaxsquidshoulderleft_2865_8_0};
static Animation * anim_array_bosssyntaxsquidshoulderleft_2865[9] = {&anim_bosssyntaxsquidshoulderleft_2865_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidshoulderleft_2865_7, &anim_bosssyntaxsquidshoulderleft_2865_8};
static Animations anim_bosssyntaxsquidshoulderleft_2865 = {9, &anim_array_bosssyntaxsquidshoulderleft_2865[0]};
static bool anim_bosssyntaxsquidshoulderleft_2865_initialized;
class BossSyntaxSquidShoulderLeft_2865 : public Active
{
public:
    BossSyntaxSquidShoulderLeft_2865(int x, int y) : Active(x, y, BossSyntaxSquidShoulderLeft_2865_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidShoulderLeft", 28);
#endif
        this->animations = &anim_bosssyntaxsquidshoulderleft_2865;
        if (!anim_bosssyntaxsquidshoulderleft_2865_initialized) {
            anim_bosssyntaxsquidshoulderleft_2865_initialized = true;
            images_bosssyntaxsquidshoulderleft_2865_0_0[0] = get_internal_image(2731);
            images_bosssyntaxsquidshoulderleft_2865_0_1[0] = get_internal_image(2859);
            images_bosssyntaxsquidshoulderleft_2865_0_1[1] = get_internal_image(2731);
            images_bosssyntaxsquidshoulderleft_2865_0_1[2] = get_internal_image(3143);
            images_bosssyntaxsquidshoulderleft_2865_0_1[3] = get_internal_image(3144);
            images_bosssyntaxsquidshoulderleft_2865_0_8[0] = get_internal_image(3162);
            images_bosssyntaxsquidshoulderleft_2865_7_0[0] = get_internal_image(3415);
            images_bosssyntaxsquidshoulderleft_2865_7_0[1] = get_internal_image(3444);
            images_bosssyntaxsquidshoulderleft_2865_7_0[2] = get_internal_image(3471);
            images_bosssyntaxsquidshoulderleft_2865_7_0[3] = get_internal_image(3530);
            images_bosssyntaxsquidshoulderleft_2865_8_0[0] = get_internal_image(12568);
            images_bosssyntaxsquidshoulderleft_2865_8_0[1] = get_internal_image(2731);
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
FrameObject * create_bosssyntaxsquidshoulderleft_2865(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidShoulderLeft_2865(x, y);
}
static Image* images_bosssyntaxsquidhead_2866_0_0[2];
static Direction direction_bosssyntaxsquidhead_2866_0_0 = {0, 40, 40, 0, -1, images_bosssyntaxsquidhead_2866_0_0, 2};
static Animation anim_bosssyntaxsquidhead_2866_0 = {&direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, NULL, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0, &direction_bosssyntaxsquidhead_2866_0_0};
static Image* images_bosssyntaxsquidhead_2866_8_0[2];
static Direction direction_bosssyntaxsquidhead_2866_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidhead_2866_8_0, 2};
static Animation anim_bosssyntaxsquidhead_2866_8 = {&direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, NULL, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0, &direction_bosssyntaxsquidhead_2866_8_0};
static Animation * anim_array_bosssyntaxsquidhead_2866[9] = {&anim_bosssyntaxsquidhead_2866_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidhead_2866_8};
static Animations anim_bosssyntaxsquidhead_2866 = {9, &anim_array_bosssyntaxsquidhead_2866[0]};
static bool anim_bosssyntaxsquidhead_2866_initialized;
class BossSyntaxSquidHead_2866 : public Active
{
public:
    BossSyntaxSquidHead_2866(int x, int y) : Active(x, y, BossSyntaxSquidHead_2866_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidHead", 20);
#endif
        this->animations = &anim_bosssyntaxsquidhead_2866;
        if (!anim_bosssyntaxsquidhead_2866_initialized) {
            anim_bosssyntaxsquidhead_2866_initialized = true;
            images_bosssyntaxsquidhead_2866_0_0[0] = get_internal_image(3555);
            images_bosssyntaxsquidhead_2866_0_0[1] = get_internal_image(4073);
            images_bosssyntaxsquidhead_2866_8_0[0] = get_internal_image(12575);
            images_bosssyntaxsquidhead_2866_8_0[1] = get_internal_image(3555);
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
FrameObject * create_bosssyntaxsquidhead_2866(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidHead_2866(x, y);
}
static Image* images_bosssyntaxsquidarmleft_2867_0_0[1];
static Direction direction_bosssyntaxsquidarmleft_2867_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidarmleft_2867_0_0, 1};
static Animation anim_bosssyntaxsquidarmleft_2867_0 = {&direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, NULL, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0, &direction_bosssyntaxsquidarmleft_2867_0_0};
static Image* images_bosssyntaxsquidarmleft_2867_8_0[2];
static Direction direction_bosssyntaxsquidarmleft_2867_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidarmleft_2867_8_0, 2};
static Animation anim_bosssyntaxsquidarmleft_2867_8 = {&direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, NULL, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0, &direction_bosssyntaxsquidarmleft_2867_8_0};
static Animation * anim_array_bosssyntaxsquidarmleft_2867[9] = {&anim_bosssyntaxsquidarmleft_2867_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidarmleft_2867_8};
static Animations anim_bosssyntaxsquidarmleft_2867 = {9, &anim_array_bosssyntaxsquidarmleft_2867[0]};
static bool anim_bosssyntaxsquidarmleft_2867_initialized;
class BossSyntaxSquidArmLeft_2867 : public Active
{
public:
    BossSyntaxSquidArmLeft_2867(int x, int y) : Active(x, y, BossSyntaxSquidArmLeft_2867_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidArmLeft", 23);
#endif
        this->animations = &anim_bosssyntaxsquidarmleft_2867;
        if (!anim_bosssyntaxsquidarmleft_2867_initialized) {
            anim_bosssyntaxsquidarmleft_2867_initialized = true;
            images_bosssyntaxsquidarmleft_2867_0_0[0] = get_internal_image(5982);
            images_bosssyntaxsquidarmleft_2867_8_0[0] = get_internal_image(12572);
            images_bosssyntaxsquidarmleft_2867_8_0[1] = get_internal_image(5982);
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
FrameObject * create_bosssyntaxsquidarmleft_2867(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidArmLeft_2867(x, y);
}
static Image* images_bosssyntaxsquidarmright_2868_0_0[1];
static Direction direction_bosssyntaxsquidarmright_2868_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidarmright_2868_0_0, 1};
static Animation anim_bosssyntaxsquidarmright_2868_0 = {&direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, NULL, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0, &direction_bosssyntaxsquidarmright_2868_0_0};
static Image* images_bosssyntaxsquidarmright_2868_8_0[2];
static Direction direction_bosssyntaxsquidarmright_2868_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidarmright_2868_8_0, 2};
static Animation anim_bosssyntaxsquidarmright_2868_8 = {&direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, NULL, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0, &direction_bosssyntaxsquidarmright_2868_8_0};
static Animation * anim_array_bosssyntaxsquidarmright_2868[9] = {&anim_bosssyntaxsquidarmright_2868_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidarmright_2868_8};
static Animations anim_bosssyntaxsquidarmright_2868 = {9, &anim_array_bosssyntaxsquidarmright_2868[0]};
static bool anim_bosssyntaxsquidarmright_2868_initialized;
class BossSyntaxSquidArmRight_2868 : public Active
{
public:
    BossSyntaxSquidArmRight_2868(int x, int y) : Active(x, y, BossSyntaxSquidArmRight_2868_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidArmRight", 24);
#endif
        this->animations = &anim_bosssyntaxsquidarmright_2868;
        if (!anim_bosssyntaxsquidarmright_2868_initialized) {
            anim_bosssyntaxsquidarmright_2868_initialized = true;
            images_bosssyntaxsquidarmright_2868_0_0[0] = get_internal_image(5984);
            images_bosssyntaxsquidarmright_2868_8_0[0] = get_internal_image(12572);
            images_bosssyntaxsquidarmright_2868_8_0[1] = get_internal_image(5982);
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
FrameObject * create_bosssyntaxsquidarmright_2868(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidArmRight_2868(x, y);
}
static Image* images_bosssyntaxsquidbody_2869_0_0[1];
static Direction direction_bosssyntaxsquidbody_2869_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidbody_2869_0_0, 1};
static Image* images_bosssyntaxsquidbody_2869_0_8[1];
static Direction direction_bosssyntaxsquidbody_2869_0_8 = {8, 50, 50, 0, 1, images_bosssyntaxsquidbody_2869_0_8, 1};
static Animation anim_bosssyntaxsquidbody_2869_0 = {&direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, NULL, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, &direction_bosssyntaxsquidbody_2869_0_8, NULL, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0, &direction_bosssyntaxsquidbody_2869_0_0};
static Image* images_bosssyntaxsquidbody_2869_8_0[2];
static Direction direction_bosssyntaxsquidbody_2869_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidbody_2869_8_0, 2};
static Animation anim_bosssyntaxsquidbody_2869_8 = {&direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, NULL, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0, &direction_bosssyntaxsquidbody_2869_8_0};
static Animation * anim_array_bosssyntaxsquidbody_2869[9] = {&anim_bosssyntaxsquidbody_2869_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidbody_2869_8};
static Animations anim_bosssyntaxsquidbody_2869 = {9, &anim_array_bosssyntaxsquidbody_2869[0]};
static bool anim_bosssyntaxsquidbody_2869_initialized;
class BossSyntaxSquidBody_2869 : public Active
{
public:
    BossSyntaxSquidBody_2869(int x, int y) : Active(x, y, BossSyntaxSquidBody_2869_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidBody", 20);
#endif
        this->animations = &anim_bosssyntaxsquidbody_2869;
        if (!anim_bosssyntaxsquidbody_2869_initialized) {
            anim_bosssyntaxsquidbody_2869_initialized = true;
            images_bosssyntaxsquidbody_2869_0_0[0] = get_internal_image(5990);
            images_bosssyntaxsquidbody_2869_0_8[0] = get_internal_image(5991);
            images_bosssyntaxsquidbody_2869_8_0[0] = get_internal_image(12571);
            images_bosssyntaxsquidbody_2869_8_0[1] = get_internal_image(5990);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 30);
        alterables->values.set(5, 5);
        alterables->values.set(6, 15);
        alterables->values.set(7, 45);
        alterables->values.set(8, 135);
        alterables->values.set(9, 1);
        alterables->values.set(12, 20);
        alterables->values.set(13, -1);
        alterables->values.set(17, 1);
        alterables->values.set(18, -15);
    }
};
FrameObject * create_bosssyntaxsquidbody_2869(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidBody_2869(x, y);
}
static Image* images_bosssyntaxsquidclawright_2870_0_0[1];
static Direction direction_bosssyntaxsquidclawright_2870_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidclawright_2870_0_0, 1};
static Animation anim_bosssyntaxsquidclawright_2870_0 = {&direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, NULL, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0, &direction_bosssyntaxsquidclawright_2870_0_0};
static Image* images_bosssyntaxsquidclawright_2870_8_0[2];
static Direction direction_bosssyntaxsquidclawright_2870_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidclawright_2870_8_0, 2};
static Animation anim_bosssyntaxsquidclawright_2870_8 = {&direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, NULL, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0, &direction_bosssyntaxsquidclawright_2870_8_0};
static Animation * anim_array_bosssyntaxsquidclawright_2870[9] = {&anim_bosssyntaxsquidclawright_2870_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidclawright_2870_8};
static Animations anim_bosssyntaxsquidclawright_2870 = {9, &anim_array_bosssyntaxsquidclawright_2870[0]};
static bool anim_bosssyntaxsquidclawright_2870_initialized;
class BossSyntaxSquidClawRight_2870 : public Active
{
public:
    BossSyntaxSquidClawRight_2870(int x, int y) : Active(x, y, BossSyntaxSquidClawRight_2870_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidClawRight", 25);
#endif
        this->animations = &anim_bosssyntaxsquidclawright_2870;
        if (!anim_bosssyntaxsquidclawright_2870_initialized) {
            anim_bosssyntaxsquidclawright_2870_initialized = true;
            images_bosssyntaxsquidclawright_2870_0_0[0] = get_internal_image(5992);
            images_bosssyntaxsquidclawright_2870_8_0[0] = get_internal_image(12574);
            images_bosssyntaxsquidclawright_2870_8_0[1] = get_internal_image(5992);
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
FrameObject * create_bosssyntaxsquidclawright_2870(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidClawRight_2870(x, y);
}
static Image* images_bosssyntaxsquidclawleft_2871_0_0[1];
static Direction direction_bosssyntaxsquidclawleft_2871_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidclawleft_2871_0_0, 1};
static Animation anim_bosssyntaxsquidclawleft_2871_0 = {&direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, NULL, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0, &direction_bosssyntaxsquidclawleft_2871_0_0};
static Image* images_bosssyntaxsquidclawleft_2871_8_0[2];
static Direction direction_bosssyntaxsquidclawleft_2871_8_0 = {0, 50, 50, 0, -1, images_bosssyntaxsquidclawleft_2871_8_0, 2};
static Animation anim_bosssyntaxsquidclawleft_2871_8 = {&direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, NULL, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0, &direction_bosssyntaxsquidclawleft_2871_8_0};
static Animation * anim_array_bosssyntaxsquidclawleft_2871[9] = {&anim_bosssyntaxsquidclawleft_2871_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssyntaxsquidclawleft_2871_8};
static Animations anim_bosssyntaxsquidclawleft_2871 = {9, &anim_array_bosssyntaxsquidclawleft_2871[0]};
static bool anim_bosssyntaxsquidclawleft_2871_initialized;
class BossSyntaxSquidClawLeft_2871 : public Active
{
public:
    BossSyntaxSquidClawLeft_2871(int x, int y) : Active(x, y, BossSyntaxSquidClawLeft_2871_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidClawLeft", 24);
#endif
        this->animations = &anim_bosssyntaxsquidclawleft_2871;
        if (!anim_bosssyntaxsquidclawleft_2871_initialized) {
            anim_bosssyntaxsquidclawleft_2871_initialized = true;
            images_bosssyntaxsquidclawleft_2871_0_0[0] = get_internal_image(5994);
            images_bosssyntaxsquidclawleft_2871_8_0[0] = get_internal_image(12573);
            images_bosssyntaxsquidclawleft_2871_8_0[1] = get_internal_image(5994);
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
FrameObject * create_bosssyntaxsquidclawleft_2871(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidClawLeft_2871(x, y);
}
class TBCornerCurve2_2872 : public Backdrop
{
public:
    TBCornerCurve2_2872(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_CornerCurve 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12567);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbcornercurve2_2872(int x, int y)
{
    return new (Backdrop::pool.create()) TBCornerCurve2_2872(x, y);
}
class EdgeOverlay_2873 : public Backdrop
{
public:
    EdgeOverlay_2873(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Edge_Overlay", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1281);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_edgeoverlay_2873(int x, int y)
{
    return new (Backdrop::pool.create()) EdgeOverlay_2873(x, y);
}
static Image* images_bosstbplatform2_2874_0_0[7];
static Direction direction_bosstbplatform2_2874_0_0 = {0, 0, 0, 0, 1, images_bosstbplatform2_2874_0_0, 7};
static Animation anim_bosstbplatform2_2874_0 = {&direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, NULL, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0, &direction_bosstbplatform2_2874_0_0};
static Animation * anim_array_bosstbplatform2_2874[1] = {&anim_bosstbplatform2_2874_0};
static Animations anim_bosstbplatform2_2874 = {1, &anim_array_bosstbplatform2_2874[0]};
static bool anim_bosstbplatform2_2874_initialized;
class BossTBPlatform2_2874 : public Active
{
public:
    BossTBPlatform2_2874(int x, int y) : Active(x, y, BossTBPlatform2_2874_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_TBPlatform 2", 17);
#endif
        this->animations = &anim_bosstbplatform2_2874;
        if (!anim_bosstbplatform2_2874_initialized) {
            anim_bosstbplatform2_2874_initialized = true;
            images_bosstbplatform2_2874_0_0[0] = get_internal_image(207);
            images_bosstbplatform2_2874_0_0[1] = get_internal_image(335);
            images_bosstbplatform2_2874_0_0[2] = get_internal_image(448);
            images_bosstbplatform2_2874_0_0[3] = get_internal_image(1262);
            images_bosstbplatform2_2874_0_0[4] = get_internal_image(1341);
            images_bosstbplatform2_2874_0_0[5] = get_internal_image(1793);
            images_bosstbplatform2_2874_0_0[6] = get_internal_image(1808);
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
FrameObject * create_bosstbplatform2_2874(int x, int y)
{
    return new (Active::pool.create()) BossTBPlatform2_2874(x, y);
}
static Image* images_bosswaypoint_2875_0_0[1];
static Direction direction_bosswaypoint_2875_0_0 = {0, 50, 50, 0, 1, images_bosswaypoint_2875_0_0, 1};
static Animation anim_bosswaypoint_2875_0 = {&direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, NULL, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0, &direction_bosswaypoint_2875_0_0};
static Animation * anim_array_bosswaypoint_2875[1] = {&anim_bosswaypoint_2875_0};
static Animations anim_bosswaypoint_2875 = {1, &anim_array_bosswaypoint_2875[0]};
static bool anim_bosswaypoint_2875_initialized;
class BossWaypoint_2875 : public Active
{
public:
    BossWaypoint_2875(int x, int y) : Active(x, y, BossWaypoint_2875_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Waypoint", 13);
#endif
        set_visible(false);
        this->animations = &anim_bosswaypoint_2875;
        if (!anim_bosswaypoint_2875_initialized) {
            anim_bosswaypoint_2875_initialized = true;
            images_bosswaypoint_2875_0_0[0] = get_internal_image(12566);
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
FrameObject * create_bosswaypoint_2875(int x, int y)
{
    return new (Active::pool.create()) BossWaypoint_2875(x, y);
}
static Image* images_bossspikesphere_2876_0_0[1];
static Direction direction_bossspikesphere_2876_0_0 = {0, 50, 50, 0, 1, images_bossspikesphere_2876_0_0, 1};
static Animation anim_bossspikesphere_2876_0 = {&direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, NULL, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0, &direction_bossspikesphere_2876_0_0};
static Animation * anim_array_bossspikesphere_2876[1] = {&anim_bossspikesphere_2876_0};
static Animations anim_bossspikesphere_2876 = {1, &anim_array_bossspikesphere_2876[0]};
static bool anim_bossspikesphere_2876_initialized;
class BossSpikeSphere_2876 : public Active
{
public:
    BossSpikeSphere_2876(int x, int y) : Active(x, y, BossSpikeSphere_2876_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SpikeSphere", 16);
#endif
        this->animations = &anim_bossspikesphere_2876;
        if (!anim_bossspikesphere_2876_initialized) {
            anim_bossspikesphere_2876_initialized = true;
            images_bossspikesphere_2876_0_0[0] = get_internal_image(5997);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
    }
};
FrameObject * create_bossspikesphere_2876(int x, int y)
{
    return new (Active::pool.create()) BossSpikeSphere_2876(x, y);
}
static Image* images_bossspikesphere2_2877_0_0[2];
static Direction direction_bossspikesphere2_2877_0_0 = {0, 0, 0, 0, -1, images_bossspikesphere2_2877_0_0, 2};
static Animation anim_bossspikesphere2_2877_0 = {&direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, NULL, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0, &direction_bossspikesphere2_2877_0_0};
static Animation * anim_array_bossspikesphere2_2877[1] = {&anim_bossspikesphere2_2877_0};
static Animations anim_bossspikesphere2_2877 = {1, &anim_array_bossspikesphere2_2877[0]};
static bool anim_bossspikesphere2_2877_initialized;
class BossSpikeSphere2_2877 : public Active
{
public:
    BossSpikeSphere2_2877(int x, int y) : Active(x, y, BossSpikeSphere2_2877_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SpikeSphere 2", 18);
#endif
        this->animations = &anim_bossspikesphere2_2877;
        if (!anim_bossspikesphere2_2877_initialized) {
            anim_bossspikesphere2_2877_initialized = true;
            images_bossspikesphere2_2877_0_0[0] = get_internal_image(5999);
            images_bossspikesphere2_2877_0_0[1] = get_internal_image(12374);
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
FrameObject * create_bossspikesphere2_2877(int x, int y)
{
    return new (Active::pool.create()) BossSpikeSphere2_2877(x, y);
}
static Image* images_bosstbplatform_2878_0_0[7];
static Direction direction_bosstbplatform_2878_0_0 = {0, 0, 0, 0, 1, images_bosstbplatform_2878_0_0, 7};
static Animation anim_bosstbplatform_2878_0 = {&direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, NULL, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0, &direction_bosstbplatform_2878_0_0};
static Animation * anim_array_bosstbplatform_2878[1] = {&anim_bosstbplatform_2878_0};
static Animations anim_bosstbplatform_2878 = {1, &anim_array_bosstbplatform_2878[0]};
static bool anim_bosstbplatform_2878_initialized;
class BossTBPlatform_2878 : public Active
{
public:
    BossTBPlatform_2878(int x, int y) : Active(x, y, BossTBPlatform_2878_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Boss_TBPlatform", 15);
#endif
        this->animations = &anim_bosstbplatform_2878;
        if (!anim_bosstbplatform_2878_initialized) {
            anim_bosstbplatform_2878_initialized = true;
            images_bosstbplatform_2878_0_0[0] = get_internal_image(207);
            images_bosstbplatform_2878_0_0[1] = get_internal_image(335);
            images_bosstbplatform_2878_0_0[2] = get_internal_image(448);
            images_bosstbplatform_2878_0_0[3] = get_internal_image(1262);
            images_bosstbplatform_2878_0_0[4] = get_internal_image(1341);
            images_bosstbplatform_2878_0_0[5] = get_internal_image(1793);
            images_bosstbplatform_2878_0_0[6] = get_internal_image(1808);
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
FrameObject * create_bosstbplatform_2878(int x, int y)
{
    return new (Active::pool.create()) BossTBPlatform_2878(x, y);
}
static Image* images_bosslavasplashleft1_2879_0_0[6];
static Direction direction_bosslavasplashleft1_2879_0_0 = {0, 75, 75, 0, -1, images_bosslavasplashleft1_2879_0_0, 6};
static Animation anim_bosslavasplashleft1_2879_0 = {&direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, NULL, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0, &direction_bosslavasplashleft1_2879_0_0};
static Animation * anim_array_bosslavasplashleft1_2879[1] = {&anim_bosslavasplashleft1_2879_0};
static Animations anim_bosslavasplashleft1_2879 = {1, &anim_array_bosslavasplashleft1_2879[0]};
static bool anim_bosslavasplashleft1_2879_initialized;
class BossLavaSplashLeft1_2879 : public Active
{
public:
    BossLavaSplashLeft1_2879(int x, int y) : Active(x, y, BossLavaSplashLeft1_2879_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplashLeft 1", 21);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplashleft1_2879;
        if (!anim_bosslavasplashleft1_2879_initialized) {
            anim_bosslavasplashleft1_2879_initialized = true;
            images_bosslavasplashleft1_2879_0_0[0] = get_internal_image(12375);
            images_bosslavasplashleft1_2879_0_0[1] = get_internal_image(12376);
            images_bosslavasplashleft1_2879_0_0[2] = get_internal_image(12377);
            images_bosslavasplashleft1_2879_0_0[3] = get_internal_image(12378);
            images_bosslavasplashleft1_2879_0_0[4] = get_internal_image(12381);
            images_bosslavasplashleft1_2879_0_0[5] = get_internal_image(12382);
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
FrameObject * create_bosslavasplashleft1_2879(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplashLeft1_2879(x, y);
}
static Image* images_bosslavasplashright1_2880_0_0[6];
static Direction direction_bosslavasplashright1_2880_0_0 = {0, 75, 75, 0, -1, images_bosslavasplashright1_2880_0_0, 6};
static Animation anim_bosslavasplashright1_2880_0 = {&direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, NULL, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0, &direction_bosslavasplashright1_2880_0_0};
static Animation * anim_array_bosslavasplashright1_2880[1] = {&anim_bosslavasplashright1_2880_0};
static Animations anim_bosslavasplashright1_2880 = {1, &anim_array_bosslavasplashright1_2880[0]};
static bool anim_bosslavasplashright1_2880_initialized;
class BossLavaSplashRight1_2880 : public Active
{
public:
    BossLavaSplashRight1_2880(int x, int y) : Active(x, y, BossLavaSplashRight1_2880_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplashRight 1", 22);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplashright1_2880;
        if (!anim_bosslavasplashright1_2880_initialized) {
            anim_bosslavasplashright1_2880_initialized = true;
            images_bosslavasplashright1_2880_0_0[0] = get_internal_image(12375);
            images_bosslavasplashright1_2880_0_0[1] = get_internal_image(12376);
            images_bosslavasplashright1_2880_0_0[2] = get_internal_image(12377);
            images_bosslavasplashright1_2880_0_0[3] = get_internal_image(12378);
            images_bosslavasplashright1_2880_0_0[4] = get_internal_image(12381);
            images_bosslavasplashright1_2880_0_0[5] = get_internal_image(12382);
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
FrameObject * create_bosslavasplashright1_2880(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplashRight1_2880(x, y);
}
static Image* images_bosssyntaxsquidhitbox_2881_0_0[1];
static Direction direction_bosssyntaxsquidhitbox_2881_0_0 = {0, 50, 50, 0, 1, images_bosssyntaxsquidhitbox_2881_0_0, 1};
static Image* images_bosssyntaxsquidhitbox_2881_0_8[1];
static Direction direction_bosssyntaxsquidhitbox_2881_0_8 = {8, 50, 50, 0, 1, images_bosssyntaxsquidhitbox_2881_0_8, 1};
static Animation anim_bosssyntaxsquidhitbox_2881_0 = {&direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, NULL, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, &direction_bosssyntaxsquidhitbox_2881_0_8, NULL, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0, &direction_bosssyntaxsquidhitbox_2881_0_0};
static Animation * anim_array_bosssyntaxsquidhitbox_2881[1] = {&anim_bosssyntaxsquidhitbox_2881_0};
static Animations anim_bosssyntaxsquidhitbox_2881 = {1, &anim_array_bosssyntaxsquidhitbox_2881[0]};
static bool anim_bosssyntaxsquidhitbox_2881_initialized;
class BossSyntaxSquidHitbox_2881 : public Active
{
public:
    BossSyntaxSquidHitbox_2881(int x, int y) : Active(x, y, BossSyntaxSquidHitbox_2881_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_SyntaxSquidHitbox", 22);
#endif
        set_visible(false);
        this->animations = &anim_bosssyntaxsquidhitbox_2881;
        if (!anim_bosssyntaxsquidhitbox_2881_initialized) {
            anim_bosssyntaxsquidhitbox_2881_initialized = true;
            images_bosssyntaxsquidhitbox_2881_0_0[0] = get_internal_image(12558);
            images_bosssyntaxsquidhitbox_2881_0_8[0] = get_internal_image(5991);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
    }
};
FrameObject * create_bosssyntaxsquidhitbox_2881(int x, int y)
{
    return new (Active::pool.create()) BossSyntaxSquidHitbox_2881(x, y);
}
static Image* images_bosslavasplashleft2_2882_0_0[6];
static Direction direction_bosslavasplashleft2_2882_0_0 = {0, 75, 75, 0, -1, images_bosslavasplashleft2_2882_0_0, 6};
static Animation anim_bosslavasplashleft2_2882_0 = {&direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, NULL, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0, &direction_bosslavasplashleft2_2882_0_0};
static Animation * anim_array_bosslavasplashleft2_2882[1] = {&anim_bosslavasplashleft2_2882_0};
static Animations anim_bosslavasplashleft2_2882 = {1, &anim_array_bosslavasplashleft2_2882[0]};
static bool anim_bosslavasplashleft2_2882_initialized;
class BossLavaSplashLeft2_2882 : public Active
{
public:
    BossLavaSplashLeft2_2882(int x, int y) : Active(x, y, BossLavaSplashLeft2_2882_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplashLeft 2", 21);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplashleft2_2882;
        if (!anim_bosslavasplashleft2_2882_initialized) {
            anim_bosslavasplashleft2_2882_initialized = true;
            images_bosslavasplashleft2_2882_0_0[0] = get_internal_image(12560);
            images_bosslavasplashleft2_2882_0_0[1] = get_internal_image(12561);
            images_bosslavasplashleft2_2882_0_0[2] = get_internal_image(12562);
            images_bosslavasplashleft2_2882_0_0[3] = get_internal_image(12563);
            images_bosslavasplashleft2_2882_0_0[4] = get_internal_image(12564);
            images_bosslavasplashleft2_2882_0_0[5] = get_internal_image(12565);
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
FrameObject * create_bosslavasplashleft2_2882(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplashLeft2_2882(x, y);
}
static Image* images_bosslavasplashright2_2883_0_0[6];
static Direction direction_bosslavasplashright2_2883_0_0 = {0, 75, 75, 0, -1, images_bosslavasplashright2_2883_0_0, 6};
static Animation anim_bosslavasplashright2_2883_0 = {&direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, NULL, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0, &direction_bosslavasplashright2_2883_0_0};
static Animation * anim_array_bosslavasplashright2_2883[1] = {&anim_bosslavasplashright2_2883_0};
static Animations anim_bosslavasplashright2_2883 = {1, &anim_array_bosslavasplashright2_2883[0]};
static bool anim_bosslavasplashright2_2883_initialized;
class BossLavaSplashRight2_2883 : public Active
{
public:
    BossLavaSplashRight2_2883(int x, int y) : Active(x, y, BossLavaSplashRight2_2883_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LavaSplashRight 2", 22);
#endif
        set_visible(false);
        this->animations = &anim_bosslavasplashright2_2883;
        if (!anim_bosslavasplashright2_2883_initialized) {
            anim_bosslavasplashright2_2883_initialized = true;
            images_bosslavasplashright2_2883_0_0[0] = get_internal_image(12560);
            images_bosslavasplashright2_2883_0_0[1] = get_internal_image(12561);
            images_bosslavasplashright2_2883_0_0[2] = get_internal_image(12562);
            images_bosslavasplashright2_2883_0_0[3] = get_internal_image(12563);
            images_bosslavasplashright2_2883_0_0[4] = get_internal_image(12564);
            images_bosslavasplashright2_2883_0_0[5] = get_internal_image(12565);
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
FrameObject * create_bosslavasplashright2_2883(int x, int y)
{
    return new (Active::pool.create()) BossLavaSplashRight2_2883(x, y);
}
class LevelParallaxPiece0_2884 : public SystemBox
{
public:
    LevelParallaxPiece0_2884(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_2884_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 380;
        type = PATTERN_IMAGE;
        image = get_internal_image(462);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_2884(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_2884(x, y);
}
class LevelParallaxPiece1_2885 : public SystemBox
{
public:
    LevelParallaxPiece1_2885(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2885_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 80;
        type = PATTERN_IMAGE;
        image = get_internal_image(279);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2885(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2885(x, y);
}
class LevelParallaxPiece2_2886 : public SystemBox
{
public:
    LevelParallaxPiece2_2886(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2886_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(13594);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2886(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2886(x, y);
}
class LevelParallaxPiece5_2887 : public SystemBox
{
public:
    LevelParallaxPiece5_2887(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_2887_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 104;
        type = PATTERN_IMAGE;
        image = get_internal_image(5672);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_2887(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_2887(x, y);
}
class LevelParallaxPiece6_2888 : public SystemBox
{
public:
    LevelParallaxPiece6_2888(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_2888_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(13595);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_2888(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_2888(x, y);
}
static Image* images_enemysleepgas_2889_0_0[4];
static Direction direction_enemysleepgas_2889_0_0 = {0, 15, 15, 0, -1, images_enemysleepgas_2889_0_0, 4};
static Animation anim_enemysleepgas_2889_0 = {&direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, NULL, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0, &direction_enemysleepgas_2889_0_0};
static Animation * anim_array_enemysleepgas_2889[1] = {&anim_enemysleepgas_2889_0};
static Animations anim_enemysleepgas_2889 = {1, &anim_array_enemysleepgas_2889[0]};
static bool anim_enemysleepgas_2889_initialized;
class EnemySleepGas_2889 : public Active
{
public:
    EnemySleepGas_2889(int x, int y) : Active(x, y, EnemySleepGas_2889_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SleepGas", 14);
#endif
        this->animations = &anim_enemysleepgas_2889;
        if (!anim_enemysleepgas_2889_initialized) {
            anim_enemysleepgas_2889_initialized = true;
            images_enemysleepgas_2889_0_0[0] = get_internal_image(10693);
            images_enemysleepgas_2889_0_0[1] = get_internal_image(6641);
            images_enemysleepgas_2889_0_0[2] = get_internal_image(12595);
            images_enemysleepgas_2889_0_0[3] = get_internal_image(12597);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 159);
        create_alterables();
        alterables->values.set(1, 4);
    }
};
FrameObject * create_enemysleepgas_2889(int x, int y)
{
    return new (Active::pool.create()) EnemySleepGas_2889(x, y);
}
static Image* images_effectsconfetti_2890_0_0[12];
static Direction direction_effectsconfetti_2890_0_0 = {0, 50, 50, 0, -1, images_effectsconfetti_2890_0_0, 12};
static Animation anim_effectsconfetti_2890_0 = {&direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, NULL, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0, &direction_effectsconfetti_2890_0_0};
static Animation * anim_array_effectsconfetti_2890[1] = {&anim_effectsconfetti_2890_0};
static Animations anim_effectsconfetti_2890 = {1, &anim_array_effectsconfetti_2890[0]};
static bool anim_effectsconfetti_2890_initialized;
class EffectsConfetti_2890 : public Active
{
public:
    EffectsConfetti_2890(int x, int y) : Active(x, y, EffectsConfetti_2890_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_Confetti", 16);
#endif
        this->animations = &anim_effectsconfetti_2890;
        if (!anim_effectsconfetti_2890_initialized) {
            anim_effectsconfetti_2890_initialized = true;
            images_effectsconfetti_2890_0_0[0] = get_internal_image(4584);
            images_effectsconfetti_2890_0_0[1] = get_internal_image(4598);
            images_effectsconfetti_2890_0_0[2] = get_internal_image(4599);
            images_effectsconfetti_2890_0_0[3] = get_internal_image(4601);
            images_effectsconfetti_2890_0_0[4] = get_internal_image(4602);
            images_effectsconfetti_2890_0_0[5] = get_internal_image(4600);
            images_effectsconfetti_2890_0_0[6] = get_internal_image(4584);
            images_effectsconfetti_2890_0_0[7] = get_internal_image(4603);
            images_effectsconfetti_2890_0_0[8] = get_internal_image(4604);
            images_effectsconfetti_2890_0_0[9] = get_internal_image(4605);
            images_effectsconfetti_2890_0_0[10] = get_internal_image(4606);
            images_effectsconfetti_2890_0_0[11] = get_internal_image(4607);
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
        ((BallMovement*)movements[0])->set_max_speed(40);
        ((BallMovement*)movements[0])->set_deceleration(20);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_effectsconfetti_2890(int x, int y)
{
    return new (Active::pool.create()) EffectsConfetti_2890(x, y);
}
static Image* images_enemystinger_2891_0_0[6];
static Direction direction_enemystinger_2891_0_0 = {0, 50, 50, 0, -1, images_enemystinger_2891_0_0, 6};
static Image* images_enemystinger_2891_0_8[9];
static Direction direction_enemystinger_2891_0_8 = {8, 90, 90, 0, -1, images_enemystinger_2891_0_8, 9};
static Image* images_enemystinger_2891_0_16[6];
static Direction direction_enemystinger_2891_0_16 = {16, 50, 50, 0, -1, images_enemystinger_2891_0_16, 6};
static Animation anim_enemystinger_2891_0 = {&direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, NULL, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, &direction_enemystinger_2891_0_8, NULL, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, &direction_enemystinger_2891_0_16, NULL, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0, &direction_enemystinger_2891_0_0};
static Image* images_enemystinger_2891_1_0[3];
static Direction direction_enemystinger_2891_1_0 = {0, 90, 90, 0, -1, images_enemystinger_2891_1_0, 3};
static Image* images_enemystinger_2891_1_8[1];
static Direction direction_enemystinger_2891_1_8 = {8, 50, 50, 0, 1, images_enemystinger_2891_1_8, 1};
static Image* images_enemystinger_2891_1_16[3];
static Direction direction_enemystinger_2891_1_16 = {16, 90, 90, 0, -1, images_enemystinger_2891_1_16, 3};
static Animation anim_enemystinger_2891_1 = {&direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, NULL, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, &direction_enemystinger_2891_1_8, NULL, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, &direction_enemystinger_2891_1_16, NULL, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0, &direction_enemystinger_2891_1_0};
static Image* images_enemystinger_2891_8_0[1];
static Direction direction_enemystinger_2891_8_0 = {0, 50, 50, 0, -1, images_enemystinger_2891_8_0, 1};
static Image* images_enemystinger_2891_8_16[1];
static Direction direction_enemystinger_2891_8_16 = {16, 50, 50, 0, -1, images_enemystinger_2891_8_16, 1};
static Animation anim_enemystinger_2891_8 = {&direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, NULL, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, &direction_enemystinger_2891_8_16, NULL, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0, &direction_enemystinger_2891_8_0};
static Image* images_enemystinger_2891_9_0[2];
static Direction direction_enemystinger_2891_9_0 = {0, 50, 50, 1, -1, images_enemystinger_2891_9_0, 2};
static Image* images_enemystinger_2891_9_16[2];
static Direction direction_enemystinger_2891_9_16 = {16, 50, 50, 1, -1, images_enemystinger_2891_9_16, 2};
static Animation anim_enemystinger_2891_9 = {&direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, NULL, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, &direction_enemystinger_2891_9_16, NULL, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0, &direction_enemystinger_2891_9_0};
static Image* images_enemystinger_2891_11_0[3];
static Direction direction_enemystinger_2891_11_0 = {0, 90, 90, 0, -1, images_enemystinger_2891_11_0, 3};
static Image* images_enemystinger_2891_11_8[1];
static Direction direction_enemystinger_2891_11_8 = {8, 50, 50, 0, 1, images_enemystinger_2891_11_8, 1};
static Image* images_enemystinger_2891_11_16[3];
static Direction direction_enemystinger_2891_11_16 = {16, 90, 90, 0, -1, images_enemystinger_2891_11_16, 3};
static Animation anim_enemystinger_2891_11 = {&direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, NULL, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, &direction_enemystinger_2891_11_8, NULL, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, &direction_enemystinger_2891_11_16, NULL, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0, &direction_enemystinger_2891_11_0};
static Animation * anim_array_enemystinger_2891[12] = {&anim_enemystinger_2891_0, &anim_enemystinger_2891_1, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemystinger_2891_8, &anim_enemystinger_2891_9, NULL, &anim_enemystinger_2891_11};
static Animations anim_enemystinger_2891 = {12, &anim_array_enemystinger_2891[0]};
static bool anim_enemystinger_2891_initialized;
class EnemyStinger_2891 : public Active
{
public:
    EnemyStinger_2891(int x, int y) : Active(x, y, EnemyStinger_2891_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Stinger", 13);
#endif
        this->animations = &anim_enemystinger_2891;
        if (!anim_enemystinger_2891_initialized) {
            anim_enemystinger_2891_initialized = true;
            images_enemystinger_2891_0_0[0] = get_internal_image(6645);
            images_enemystinger_2891_0_0[1] = get_internal_image(12594);
            images_enemystinger_2891_0_0[2] = get_internal_image(12604);
            images_enemystinger_2891_0_0[3] = get_internal_image(12625);
            images_enemystinger_2891_0_0[4] = get_internal_image(12626);
            images_enemystinger_2891_0_0[5] = get_internal_image(12627);
            images_enemystinger_2891_0_8[0] = get_internal_image(12628);
            images_enemystinger_2891_0_8[1] = get_internal_image(12629);
            images_enemystinger_2891_0_8[2] = get_internal_image(12630);
            images_enemystinger_2891_0_8[3] = get_internal_image(12631);
            images_enemystinger_2891_0_8[4] = get_internal_image(12632);
            images_enemystinger_2891_0_8[5] = get_internal_image(12633);
            images_enemystinger_2891_0_8[6] = get_internal_image(12634);
            images_enemystinger_2891_0_8[7] = get_internal_image(12635);
            images_enemystinger_2891_0_8[8] = get_internal_image(12636);
            images_enemystinger_2891_0_16[0] = get_internal_image(12637);
            images_enemystinger_2891_0_16[1] = get_internal_image(12638);
            images_enemystinger_2891_0_16[2] = get_internal_image(12639);
            images_enemystinger_2891_0_16[3] = get_internal_image(12640);
            images_enemystinger_2891_0_16[4] = get_internal_image(12641);
            images_enemystinger_2891_0_16[5] = get_internal_image(12642);
            images_enemystinger_2891_1_0[0] = get_internal_image(12643);
            images_enemystinger_2891_1_0[1] = get_internal_image(12644);
            images_enemystinger_2891_1_0[2] = get_internal_image(12645);
            images_enemystinger_2891_1_8[0] = get_internal_image(12646);
            images_enemystinger_2891_1_16[0] = get_internal_image(12647);
            images_enemystinger_2891_1_16[1] = get_internal_image(12648);
            images_enemystinger_2891_1_16[2] = get_internal_image(12649);
            images_enemystinger_2891_8_0[0] = get_internal_image(12627);
            images_enemystinger_2891_8_16[0] = get_internal_image(12650);
            images_enemystinger_2891_9_0[0] = get_internal_image(12651);
            images_enemystinger_2891_9_0[1] = get_internal_image(12652);
            images_enemystinger_2891_9_16[0] = get_internal_image(12653);
            images_enemystinger_2891_9_16[1] = get_internal_image(12654);
            images_enemystinger_2891_11_0[0] = get_internal_image(12643);
            images_enemystinger_2891_11_0[1] = get_internal_image(12644);
            images_enemystinger_2891_11_0[2] = get_internal_image(12645);
            images_enemystinger_2891_11_8[0] = get_internal_image(12646);
            images_enemystinger_2891_11_16[0] = get_internal_image(12647);
            images_enemystinger_2891_11_16[1] = get_internal_image(12648);
            images_enemystinger_2891_11_16[2] = get_internal_image(12649);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(4, 4);
    }
};
FrameObject * create_enemystinger_2891(int x, int y)
{
    return new (Active::pool.create()) EnemyStinger_2891(x, y);
}
class PLBackwall7_2892 : public Backdrop
{
public:
    PLBackwall7_2892(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12743);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall7_2892(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall7_2892(x, y);
}
class PLBackwall9_2893 : public Backdrop
{
public:
    PLBackwall9_2893(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12745);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall9_2893(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall9_2893(x, y);
}
class PLBackwall4_2894 : public Backdrop
{
public:
    PLBackwall4_2894(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12317);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall4_2894(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall4_2894(x, y);
}
class PLBackwall1_2895 : public Backdrop
{
public:
    PLBackwall1_2895(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12711);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall1_2895(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall1_2895(x, y);
}
class PLBackwall5_2896 : public Backdrop
{
public:
    PLBackwall5_2896(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12736);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall5_2896(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall5_2896(x, y);
}
class PLBackwall6_2897 : public Backdrop
{
public:
    PLBackwall6_2897(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12737);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall6_2897(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall6_2897(x, y);
}
class PLRuins5_2898 : public Backdrop
{
public:
    PLRuins5_2898(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12725);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins5_2898(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins5_2898(x, y);
}
class PLPlant1_2899 : public Backdrop
{
public:
    PLPlant1_2899(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Plant 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13574);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plplant1_2899(int x, int y)
{
    return new (Backdrop::pool.create()) PLPlant1_2899(x, y);
}
class PLPlant2_2900 : public Backdrop
{
public:
    PLPlant2_2900(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Plant 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13572);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plplant2_2900(int x, int y)
{
    return new (Backdrop::pool.create()) PLPlant2_2900(x, y);
}
class PLSignUp3_2901 : public Backdrop
{
public:
    PLSignUp3_2901(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_SignUp 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12777);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plsignup3_2901(int x, int y)
{
    return new (Backdrop::pool.create()) PLSignUp3_2901(x, y);
}
class PLRuins3_2902 : public Backdrop
{
public:
    PLRuins3_2902(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13575);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins3_2902(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins3_2902(x, y);
}
class PLBackwall2_2903 : public Backdrop
{
public:
    PLBackwall2_2903(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12719);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall2_2903(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall2_2903(x, y);
}
class PLGrass_2904 : public Backdrop
{
public:
    PLGrass_2904(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Grass", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5681);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plgrass_2904(int x, int y)
{
    return new (Backdrop::pool.create()) PLGrass_2904(x, y);
}
class PLBackwall3_2905 : public Backdrop
{
public:
    PLBackwall3_2905(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Backwall 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12734);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbackwall3_2905(int x, int y)
{
    return new (Backdrop::pool.create()) PLBackwall3_2905(x, y);
}
class PLRuins4_2906 : public Backdrop
{
public:
    PLRuins4_2906(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13576);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins4_2906(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins4_2906(x, y);
}
class PLRuins2_2907 : public Backdrop
{
public:
    PLRuins2_2907(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13577);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins2_2907(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins2_2907(x, y);
}
class PLRuins1_2908 : public Backdrop
{
public:
    PLRuins1_2908(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12731);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins1_2908(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins1_2908(x, y);
}
class PLRuins7_2909 : public Backdrop
{
public:
    PLRuins7_2909(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12715);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins7_2909(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins7_2909(x, y);
}
class PLRuins6_2910 : public Backdrop
{
public:
    PLRuins6_2910(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12730);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins6_2910(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins6_2910(x, y);
}
class PLRuins8_2911 : public Backdrop
{
public:
    PLRuins8_2911(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ruins 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12740);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruins8_2911(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuins8_2911(x, y);
}
class PLStonewall6_2912 : public Backdrop
{
public:
    PLStonewall6_2912(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12657);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall6_2912(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall6_2912(x, y);
}
