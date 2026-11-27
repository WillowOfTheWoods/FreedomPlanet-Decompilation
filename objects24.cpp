#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_bossgrapplerarmleft_2312_0_0[1];
static Direction direction_bossgrapplerarmleft_2312_0_0 = {0, 50, 50, 0, 1, images_bossgrapplerarmleft_2312_0_0, 1};
static Animation anim_bossgrapplerarmleft_2312_0 = {&direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, NULL, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0, &direction_bossgrapplerarmleft_2312_0_0};
static Image* images_bossgrapplerarmleft_2312_7_0[2];
static Direction direction_bossgrapplerarmleft_2312_7_0 = {0, 50, 50, 0, -1, images_bossgrapplerarmleft_2312_7_0, 2};
static Animation anim_bossgrapplerarmleft_2312_7 = {&direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, NULL, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0, &direction_bossgrapplerarmleft_2312_7_0};
static Animation * anim_array_bossgrapplerarmleft_2312[8] = {&anim_bossgrapplerarmleft_2312_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgrapplerarmleft_2312_7};
static Animations anim_bossgrapplerarmleft_2312 = {8, &anim_array_bossgrapplerarmleft_2312[0]};
static bool anim_bossgrapplerarmleft_2312_initialized;
class BossGrapplerArmLeft_2312 : public Active
{
public:
    BossGrapplerArmLeft_2312(int x, int y) : Active(x, y, BossGrapplerArmLeft_2312_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GrapplerArmLeft", 20);
#endif
        this->animations = &anim_bossgrapplerarmleft_2312;
        if (!anim_bossgrapplerarmleft_2312_initialized) {
            anim_bossgrapplerarmleft_2312_initialized = true;
            images_bossgrapplerarmleft_2312_0_0[0] = get_internal_image(2247);
            images_bossgrapplerarmleft_2312_7_0[0] = get_internal_image(5940);
            images_bossgrapplerarmleft_2312_7_0[1] = get_internal_image(5938);
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
FrameObject * create_bossgrapplerarmleft_2312(int x, int y)
{
    return new (Active::pool.create()) BossGrapplerArmLeft_2312(x, y);
}
static Image* images_bossgrapplerarmright_2313_0_0[1];
static Direction direction_bossgrapplerarmright_2313_0_0 = {0, 50, 50, 0, 1, images_bossgrapplerarmright_2313_0_0, 1};
static Animation anim_bossgrapplerarmright_2313_0 = {&direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, NULL, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0, &direction_bossgrapplerarmright_2313_0_0};
static Image* images_bossgrapplerarmright_2313_7_0[2];
static Direction direction_bossgrapplerarmright_2313_7_0 = {0, 50, 50, 0, -1, images_bossgrapplerarmright_2313_7_0, 2};
static Animation anim_bossgrapplerarmright_2313_7 = {&direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, NULL, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0, &direction_bossgrapplerarmright_2313_7_0};
static Animation * anim_array_bossgrapplerarmright_2313[8] = {&anim_bossgrapplerarmright_2313_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgrapplerarmright_2313_7};
static Animations anim_bossgrapplerarmright_2313 = {8, &anim_array_bossgrapplerarmright_2313[0]};
static bool anim_bossgrapplerarmright_2313_initialized;
class BossGrapplerArmRight_2313 : public Active
{
public:
    BossGrapplerArmRight_2313(int x, int y) : Active(x, y, BossGrapplerArmRight_2313_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GrapplerArmRight", 21);
#endif
        this->animations = &anim_bossgrapplerarmright_2313;
        if (!anim_bossgrapplerarmright_2313_initialized) {
            anim_bossgrapplerarmright_2313_initialized = true;
            images_bossgrapplerarmright_2313_0_0[0] = get_internal_image(2253);
            images_bossgrapplerarmright_2313_7_0[0] = get_internal_image(5972);
            images_bossgrapplerarmright_2313_7_0[1] = get_internal_image(5959);
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
FrameObject * create_bossgrapplerarmright_2313(int x, int y)
{
    return new (Active::pool.create()) BossGrapplerArmRight_2313(x, y);
}
static Image* images_bossgrapplerhandright_2314_0_0[1];
static Direction direction_bossgrapplerhandright_2314_0_0 = {0, 50, 50, 0, 1, images_bossgrapplerhandright_2314_0_0, 1};
static Animation anim_bossgrapplerhandright_2314_0 = {&direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, NULL, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0, &direction_bossgrapplerhandright_2314_0_0};
static Image* images_bossgrapplerhandright_2314_7_0[2];
static Direction direction_bossgrapplerhandright_2314_7_0 = {0, 50, 50, 0, -1, images_bossgrapplerhandright_2314_7_0, 2};
static Animation anim_bossgrapplerhandright_2314_7 = {&direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, NULL, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0, &direction_bossgrapplerhandright_2314_7_0};
static Animation * anim_array_bossgrapplerhandright_2314[8] = {&anim_bossgrapplerhandright_2314_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgrapplerhandright_2314_7};
static Animations anim_bossgrapplerhandright_2314 = {8, &anim_array_bossgrapplerhandright_2314[0]};
static bool anim_bossgrapplerhandright_2314_initialized;
class BossGrapplerHandRight_2314 : public Active
{
public:
    BossGrapplerHandRight_2314(int x, int y) : Active(x, y, BossGrapplerHandRight_2314_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GrapplerHandRight", 22);
#endif
        this->animations = &anim_bossgrapplerhandright_2314;
        if (!anim_bossgrapplerhandright_2314_initialized) {
            anim_bossgrapplerhandright_2314_initialized = true;
            images_bossgrapplerhandright_2314_0_0[0] = get_internal_image(2379);
            images_bossgrapplerhandright_2314_7_0[0] = get_internal_image(2596);
            images_bossgrapplerhandright_2314_7_0[1] = get_internal_image(2379);
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
FrameObject * create_bossgrapplerhandright_2314(int x, int y)
{
    return new (Active::pool.create()) BossGrapplerHandRight_2314(x, y);
}
static Image* images_bossgrapplerhandleft_2315_0_0[1];
static Direction direction_bossgrapplerhandleft_2315_0_0 = {0, 50, 50, 0, 1, images_bossgrapplerhandleft_2315_0_0, 1};
static Animation anim_bossgrapplerhandleft_2315_0 = {&direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, NULL, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0, &direction_bossgrapplerhandleft_2315_0_0};
static Image* images_bossgrapplerhandleft_2315_7_0[2];
static Direction direction_bossgrapplerhandleft_2315_7_0 = {0, 50, 50, 0, -1, images_bossgrapplerhandleft_2315_7_0, 2};
static Animation anim_bossgrapplerhandleft_2315_7 = {&direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, NULL, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0, &direction_bossgrapplerhandleft_2315_7_0};
static Animation * anim_array_bossgrapplerhandleft_2315[8] = {&anim_bossgrapplerhandleft_2315_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgrapplerhandleft_2315_7};
static Animations anim_bossgrapplerhandleft_2315 = {8, &anim_array_bossgrapplerhandleft_2315[0]};
static bool anim_bossgrapplerhandleft_2315_initialized;
class BossGrapplerHandLeft_2315 : public Active
{
public:
    BossGrapplerHandLeft_2315(int x, int y) : Active(x, y, BossGrapplerHandLeft_2315_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GrapplerHandLeft", 21);
#endif
        this->animations = &anim_bossgrapplerhandleft_2315;
        if (!anim_bossgrapplerhandleft_2315_initialized) {
            anim_bossgrapplerhandleft_2315_initialized = true;
            images_bossgrapplerhandleft_2315_0_0[0] = get_internal_image(2250);
            images_bossgrapplerhandleft_2315_7_0[0] = get_internal_image(2594);
            images_bossgrapplerhandleft_2315_7_0[1] = get_internal_image(2250);
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
FrameObject * create_bossgrapplerhandleft_2315(int x, int y)
{
    return new (Active::pool.create()) BossGrapplerHandLeft_2315(x, y);
}
static Image* images_bossgrappler_2316_0_0[1];
static Direction direction_bossgrappler_2316_0_0 = {0, 50, 50, 0, 1, images_bossgrappler_2316_0_0, 1};
static Image* images_bossgrappler_2316_0_1[2];
static Direction direction_bossgrappler_2316_0_1 = {1, 50, 50, 0, -1, images_bossgrappler_2316_0_1, 2};
static Image* images_bossgrappler_2316_0_2[1];
static Direction direction_bossgrappler_2316_0_2 = {2, 50, 50, 0, -1, images_bossgrappler_2316_0_2, 1};
static Animation anim_bossgrappler_2316_0 = {&direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_1, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, &direction_bossgrappler_2316_0_2, NULL, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0, &direction_bossgrappler_2316_0_0};
static Image* images_bossgrappler_2316_7_0[2];
static Direction direction_bossgrappler_2316_7_0 = {0, 50, 50, 0, -1, images_bossgrappler_2316_7_0, 2};
static Image* images_bossgrappler_2316_7_1[2];
static Direction direction_bossgrappler_2316_7_1 = {1, 50, 50, 0, -1, images_bossgrappler_2316_7_1, 2};
static Image* images_bossgrappler_2316_7_2[2];
static Direction direction_bossgrappler_2316_7_2 = {2, 50, 50, 0, -1, images_bossgrappler_2316_7_2, 2};
static Animation anim_bossgrappler_2316_7 = {&direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_1, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, &direction_bossgrappler_2316_7_2, NULL, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0, &direction_bossgrappler_2316_7_0};
static Image* images_bossgrappler_2316_8_0[2];
static Direction direction_bossgrappler_2316_8_0 = {0, 50, 50, 0, -1, images_bossgrappler_2316_8_0, 2};
static Animation anim_bossgrappler_2316_8 = {&direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, NULL, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0, &direction_bossgrappler_2316_8_0};
static Animation * anim_array_bossgrappler_2316[9] = {&anim_bossgrappler_2316_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgrappler_2316_7, &anim_bossgrappler_2316_8};
static Animations anim_bossgrappler_2316 = {9, &anim_array_bossgrappler_2316[0]};
static bool anim_bossgrappler_2316_initialized;
class BossGrappler_2316 : public Active
{
public:
    BossGrappler_2316(int x, int y) : Active(x, y, BossGrappler_2316_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Grappler", 13);
#endif
        this->animations = &anim_bossgrappler_2316;
        if (!anim_bossgrappler_2316_initialized) {
            anim_bossgrappler_2316_initialized = true;
            images_bossgrappler_2316_0_0[0] = get_internal_image(2417);
            images_bossgrappler_2316_0_1[0] = get_internal_image(2407);
            images_bossgrappler_2316_0_1[1] = get_internal_image(2417);
            images_bossgrappler_2316_0_2[0] = get_internal_image(2418);
            images_bossgrappler_2316_7_0[0] = get_internal_image(2428);
            images_bossgrappler_2316_7_0[1] = get_internal_image(2417);
            images_bossgrappler_2316_7_1[0] = get_internal_image(2428);
            images_bossgrappler_2316_7_1[1] = get_internal_image(2417);
            images_bossgrappler_2316_7_2[0] = get_internal_image(2437);
            images_bossgrappler_2316_7_2[1] = get_internal_image(2418);
            images_bossgrappler_2316_8_0[0] = get_internal_image(2422);
            images_bossgrappler_2316_8_0[1] = get_internal_image(2419);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_bossgrappler_2316(int x, int y)
{
    return new (Active::pool.create()) BossGrappler_2316(x, y);
}
static Image* images_crystalplatform_2317_0_0[1];
static Direction direction_crystalplatform_2317_0_0 = {0, 50, 50, 0, 1, images_crystalplatform_2317_0_0, 1};
static Animation anim_crystalplatform_2317_0 = {&direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, NULL, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0, &direction_crystalplatform_2317_0_0};
static Animation * anim_array_crystalplatform_2317[1] = {&anim_crystalplatform_2317_0};
static Animations anim_crystalplatform_2317 = {1, &anim_array_crystalplatform_2317[0]};
static bool anim_crystalplatform_2317_initialized;
class CrystalPlatform_2317 : public Active
{
public:
    CrystalPlatform_2317(int x, int y) : Active(x, y, CrystalPlatform_2317_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Crystal_Platform", 16);
#endif
        set_visible(false);
        this->animations = &anim_crystalplatform_2317;
        if (!anim_crystalplatform_2317_initialized) {
            anim_crystalplatform_2317_initialized = true;
            images_crystalplatform_2317_0_0[0] = get_internal_image(957);
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
FrameObject * create_crystalplatform_2317(int x, int y)
{
    return new (Active::pool.create()) CrystalPlatform_2317(x, y);
}
class LevelParallaxPiece0_2318 : public SystemBox
{
public:
    LevelParallaxPiece0_2318(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_2318_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 768;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(16101);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_2318(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_2318(x, y);
}
class LevelParallaxPiece2_2319 : public SystemBox
{
public:
    LevelParallaxPiece2_2319(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_2319_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(16089);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_2319(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_2319(x, y);
}
class LevelParallaxPiece5_2320 : public SystemBox
{
public:
    LevelParallaxPiece5_2320(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_2320_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 454;
        height = 270;
        type = PATTERN_IMAGE;
        image = get_internal_image(16069);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_2320(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_2320(x, y);
}
class JCOceanBottom_2321 : public QuickBackdrop
{
public:
    JCOceanBottom_2321(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_OceanBottom", 14);
#endif
        flags |= BACKGROUND;
        width = 13600;
        height = 727;
        color = Color(0, 4, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_jcoceanbottom_2321(int x, int y)
{
    return new (QuickBackdrop::pool.create()) JCOceanBottom_2321(x, y);
}
class LevelParallaxPiece6_2322 : public SystemBox
{
public:
    LevelParallaxPiece6_2322(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_2322_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(70);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_2322(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_2322(x, y);
}
static Image* images_effectfallingleaf_2323_0_0[1];
static Direction direction_effectfallingleaf_2323_0_0 = {0, 100, 100, 0, 1, images_effectfallingleaf_2323_0_0, 1};
static Animation anim_effectfallingleaf_2323_0 = {&direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, NULL, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0, &direction_effectfallingleaf_2323_0_0};
static Animation * anim_array_effectfallingleaf_2323[1] = {&anim_effectfallingleaf_2323_0};
static Animations anim_effectfallingleaf_2323 = {1, &anim_array_effectfallingleaf_2323[0]};
static bool anim_effectfallingleaf_2323_initialized;
class EffectFallingLeaf_2323 : public Active
{
public:
    EffectFallingLeaf_2323(int x, int y) : Active(x, y, EffectFallingLeaf_2323_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_FallingLeaf", 18);
#endif
        this->animations = &anim_effectfallingleaf_2323;
        if (!anim_effectfallingleaf_2323_initialized) {
            anim_effectfallingleaf_2323_initialized = true;
            images_effectfallingleaf_2323_0_0[0] = get_internal_image(8537);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(7, 21, 22, 23, 24, 25, 26, 27));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(20);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectfallingleaf_2323(int x, int y)
{
    return new (Active::pool.create()) EffectFallingLeaf_2323(x, y);
}
static Image* images_enemybullfragbubble_2324_0_0[1];
static Direction direction_enemybullfragbubble_2324_0_0 = {0, 50, 50, 0, 1, images_enemybullfragbubble_2324_0_0, 1};
static Animation anim_enemybullfragbubble_2324_0 = {&direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, NULL, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0, &direction_enemybullfragbubble_2324_0_0};
static Animation * anim_array_enemybullfragbubble_2324[1] = {&anim_enemybullfragbubble_2324_0};
static Animations anim_enemybullfragbubble_2324 = {1, &anim_array_enemybullfragbubble_2324[0]};
static bool anim_enemybullfragbubble_2324_initialized;
class EnemyBullfragBubble_2324 : public Active
{
public:
    EnemyBullfragBubble_2324(int x, int y) : Active(x, y, EnemyBullfragBubble_2324_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BullfragBubble", 20);
#endif
        this->animations = &anim_enemybullfragbubble_2324;
        if (!anim_enemybullfragbubble_2324_initialized) {
            anim_enemybullfragbubble_2324_initialized = true;
            images_enemybullfragbubble_2324_0_0[0] = get_internal_image(2035);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 3);
    }
};
FrameObject * create_enemybullfragbubble_2324(int x, int y)
{
    return new (Active::pool.create()) EnemyBullfragBubble_2324(x, y);
}
static Image* images_enemybuoybullet_2325_0_0[5];
static Direction direction_enemybuoybullet_2325_0_0 = {0, 50, 50, 3, -1, images_enemybuoybullet_2325_0_0, 5};
static Image* images_enemybuoybullet_2325_0_16[5];
static Direction direction_enemybuoybullet_2325_0_16 = {16, 50, 50, 3, -1, images_enemybuoybullet_2325_0_16, 5};
static Animation anim_enemybuoybullet_2325_0 = {&direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, NULL, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, &direction_enemybuoybullet_2325_0_16, NULL, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0, &direction_enemybuoybullet_2325_0_0};
static Image* images_enemybuoybullet_2325_4_0[5];
static Direction direction_enemybuoybullet_2325_4_0 = {0, 50, 50, 3, 1, images_enemybuoybullet_2325_4_0, 5};
static Image* images_enemybuoybullet_2325_4_16[5];
static Direction direction_enemybuoybullet_2325_4_16 = {16, 50, 50, 3, 1, images_enemybuoybullet_2325_4_16, 5};
static Animation anim_enemybuoybullet_2325_4 = {&direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, NULL, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, &direction_enemybuoybullet_2325_4_16, NULL, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0, &direction_enemybuoybullet_2325_4_0};
static Animation * anim_array_enemybuoybullet_2325[5] = {&anim_enemybuoybullet_2325_0, NULL, NULL, NULL, &anim_enemybuoybullet_2325_4};
static Animations anim_enemybuoybullet_2325 = {5, &anim_array_enemybuoybullet_2325[0]};
static bool anim_enemybuoybullet_2325_initialized;
class EnemyBuoyBullet_2325 : public Active
{
public:
    EnemyBuoyBullet_2325(int x, int y) : Active(x, y, EnemyBuoyBullet_2325_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BuoyBullet", 16);
#endif
        this->animations = &anim_enemybuoybullet_2325;
        if (!anim_enemybuoybullet_2325_initialized) {
            anim_enemybuoybullet_2325_initialized = true;
            images_enemybuoybullet_2325_0_0[0] = get_internal_image(8839);
            images_enemybuoybullet_2325_0_0[1] = get_internal_image(8837);
            images_enemybuoybullet_2325_0_0[2] = get_internal_image(8838);
            images_enemybuoybullet_2325_0_0[3] = get_internal_image(8965);
            images_enemybuoybullet_2325_0_0[4] = get_internal_image(8786);
            images_enemybuoybullet_2325_0_16[0] = get_internal_image(8784);
            images_enemybuoybullet_2325_0_16[1] = get_internal_image(8840);
            images_enemybuoybullet_2325_0_16[2] = get_internal_image(8841);
            images_enemybuoybullet_2325_0_16[3] = get_internal_image(8966);
            images_enemybuoybullet_2325_0_16[4] = get_internal_image(8962);
            images_enemybuoybullet_2325_4_0[0] = get_internal_image(8786);
            images_enemybuoybullet_2325_4_0[1] = get_internal_image(8785);
            images_enemybuoybullet_2325_4_0[2] = get_internal_image(8838);
            images_enemybuoybullet_2325_4_0[3] = get_internal_image(8837);
            images_enemybuoybullet_2325_4_0[4] = get_internal_image(8839);
            images_enemybuoybullet_2325_4_16[0] = get_internal_image(8962);
            images_enemybuoybullet_2325_4_16[1] = get_internal_image(8959);
            images_enemybuoybullet_2325_4_16[2] = get_internal_image(8841);
            images_enemybuoybullet_2325_4_16[3] = get_internal_image(8840);
            images_enemybuoybullet_2325_4_16[4] = get_internal_image(8784);
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
FrameObject * create_enemybuoybullet_2325(int x, int y)
{
    return new (Active::pool.create()) EnemyBuoyBullet_2325(x, y);
}
static Image* images_enemybuoybullet2_2326_0_16[5];
static Direction direction_enemybuoybullet2_2326_0_16 = {16, 50, 50, 3, -1, images_enemybuoybullet2_2326_0_16, 5};
static Animation anim_enemybuoybullet2_2326_0 = {NULL, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16, &direction_enemybuoybullet2_2326_0_16};
static Image* images_enemybuoybullet2_2326_4_16[5];
static Direction direction_enemybuoybullet2_2326_4_16 = {16, 50, 50, 3, 1, images_enemybuoybullet2_2326_4_16, 5};
static Animation anim_enemybuoybullet2_2326_4 = {NULL, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16, &direction_enemybuoybullet2_2326_4_16};
static Animation * anim_array_enemybuoybullet2_2326[5] = {&anim_enemybuoybullet2_2326_0, NULL, NULL, NULL, &anim_enemybuoybullet2_2326_4};
static Animations anim_enemybuoybullet2_2326 = {5, &anim_array_enemybuoybullet2_2326[0]};
static bool anim_enemybuoybullet2_2326_initialized;
class EnemyBuoyBullet2_2326 : public Active
{
public:
    EnemyBuoyBullet2_2326(int x, int y) : Active(x, y, EnemyBuoyBullet2_2326_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_BuoyBullet 2", 18);
#endif
        this->animations = &anim_enemybuoybullet2_2326;
        if (!anim_enemybuoybullet2_2326_initialized) {
            anim_enemybuoybullet2_2326_initialized = true;
            images_enemybuoybullet2_2326_0_16[0] = get_internal_image(8784);
            images_enemybuoybullet2_2326_0_16[1] = get_internal_image(8840);
            images_enemybuoybullet2_2326_0_16[2] = get_internal_image(8841);
            images_enemybuoybullet2_2326_0_16[3] = get_internal_image(8966);
            images_enemybuoybullet2_2326_0_16[4] = get_internal_image(8962);
            images_enemybuoybullet2_2326_4_16[0] = get_internal_image(8962);
            images_enemybuoybullet2_2326_4_16[1] = get_internal_image(8959);
            images_enemybuoybullet2_2326_4_16[2] = get_internal_image(8841);
            images_enemybuoybullet2_2326_4_16[3] = get_internal_image(8840);
            images_enemybuoybullet2_2326_4_16[4] = get_internal_image(8784);
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
FrameObject * create_enemybuoybullet2_2326(int x, int y)
{
    return new (Active::pool.create()) EnemyBuoyBullet2_2326(x, y);
}
static Image* images_gimmickflyingseed_2327_0_0[1];
static Direction direction_gimmickflyingseed_2327_0_0 = {0, 50, 50, 0, 1, images_gimmickflyingseed_2327_0_0, 1};
static Animation anim_gimmickflyingseed_2327_0 = {&direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, NULL, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0, &direction_gimmickflyingseed_2327_0_0};
static Animation * anim_array_gimmickflyingseed_2327[1] = {&anim_gimmickflyingseed_2327_0};
static Animations anim_gimmickflyingseed_2327 = {1, &anim_array_gimmickflyingseed_2327[0]};
static bool anim_gimmickflyingseed_2327_initialized;
class GimmickFlyingSeed_2327 : public Active
{
public:
    GimmickFlyingSeed_2327(int x, int y) : Active(x, y, GimmickFlyingSeed_2327_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FlyingSeed", 18);
#endif
        this->animations = &anim_gimmickflyingseed_2327;
        if (!anim_gimmickflyingseed_2327_initialized) {
            anim_gimmickflyingseed_2327_initialized = true;
            images_gimmickflyingseed_2327_0_0[0] = get_internal_image(1638);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 3);
        alterables->values.set(3, -2);
        alterables->values.set(5, 2);
    }
};
FrameObject * create_gimmickflyingseed_2327(int x, int y)
{
    return new (Active::pool.create()) GimmickFlyingSeed_2327(x, y);
}
static Image* images_enemysharktorpedo2_2328_0_0[2];
static Direction direction_enemysharktorpedo2_2328_0_0 = {0, 20, 20, 0, -1, images_enemysharktorpedo2_2328_0_0, 2};
static Animation anim_enemysharktorpedo2_2328_0 = {&direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, NULL, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0, &direction_enemysharktorpedo2_2328_0_0};
static Animation * anim_array_enemysharktorpedo2_2328[1] = {&anim_enemysharktorpedo2_2328_0};
static Animations anim_enemysharktorpedo2_2328 = {1, &anim_array_enemysharktorpedo2_2328[0]};
static bool anim_enemysharktorpedo2_2328_initialized;
class EnemySharkTorpedo2_2328 : public Active
{
public:
    EnemySharkTorpedo2_2328(int x, int y) : Active(x, y, EnemySharkTorpedo2_2328_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SharkTorpedo 2", 20);
#endif
        this->animations = &anim_enemysharktorpedo2_2328;
        if (!anim_enemysharktorpedo2_2328_initialized) {
            anim_enemysharktorpedo2_2328_initialized = true;
            images_enemysharktorpedo2_2328_0_0[0] = get_internal_image(46);
            images_enemysharktorpedo2_2328_0_0[1] = get_internal_image(10681);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -4);
    }
};
FrameObject * create_enemysharktorpedo2_2328(int x, int y)
{
    return new (Active::pool.create()) EnemySharkTorpedo2_2328(x, y);
}
static Image* images_bosshovercopsiren4_2329_0_0[2];
static Direction direction_bosshovercopsiren4_2329_0_0 = {0, 50, 50, 0, -1, images_bosshovercopsiren4_2329_0_0, 2};
static Animation anim_bosshovercopsiren4_2329_0 = {&direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, NULL, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0, &direction_bosshovercopsiren4_2329_0_0};
static Animation * anim_array_bosshovercopsiren4_2329[1] = {&anim_bosshovercopsiren4_2329_0};
static Animations anim_bosshovercopsiren4_2329 = {1, &anim_array_bosshovercopsiren4_2329[0]};
static bool anim_bosshovercopsiren4_2329_initialized;
class BossHoverCopSiren4_2329 : public Active
{
public:
    BossHoverCopSiren4_2329(int x, int y) : Active(x, y, BossHoverCopSiren4_2329_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopSiren 4", 20);
#endif
        this->animations = &anim_bosshovercopsiren4_2329;
        if (!anim_bosshovercopsiren4_2329_initialized) {
            anim_bosshovercopsiren4_2329_initialized = true;
            images_bosshovercopsiren4_2329_0_0[0] = get_internal_image(515);
            images_bosshovercopsiren4_2329_0_0[1] = get_internal_image(2272);
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
FrameObject * create_bosshovercopsiren4_2329(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopSiren4_2329(x, y);
}
static Image* images_bosshovercopsiren3_2330_0_0[2];
static Direction direction_bosshovercopsiren3_2330_0_0 = {0, 50, 50, 0, -1, images_bosshovercopsiren3_2330_0_0, 2};
static Animation anim_bosshovercopsiren3_2330_0 = {&direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, NULL, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0, &direction_bosshovercopsiren3_2330_0_0};
static Animation * anim_array_bosshovercopsiren3_2330[1] = {&anim_bosshovercopsiren3_2330_0};
static Animations anim_bosshovercopsiren3_2330 = {1, &anim_array_bosshovercopsiren3_2330[0]};
static bool anim_bosshovercopsiren3_2330_initialized;
class BossHoverCopSiren3_2330 : public Active
{
public:
    BossHoverCopSiren3_2330(int x, int y) : Active(x, y, BossHoverCopSiren3_2330_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopSiren 3", 20);
#endif
        set_visible(false);
        this->animations = &anim_bosshovercopsiren3_2330;
        if (!anim_bosshovercopsiren3_2330_initialized) {
            anim_bosshovercopsiren3_2330_initialized = true;
            images_bosshovercopsiren3_2330_0_0[0] = get_internal_image(2273);
            images_bosshovercopsiren3_2330_0_0[1] = get_internal_image(2505);
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
FrameObject * create_bosshovercopsiren3_2330(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopSiren3_2330(x, y);
}
static Image* images_bosshovercopturbine2_2331_0_0[1];
static Direction direction_bosshovercopturbine2_2331_0_0 = {0, 50, 50, 0, 1, images_bosshovercopturbine2_2331_0_0, 1};
static Image* images_bosshovercopturbine2_2331_0_16[1];
static Direction direction_bosshovercopturbine2_2331_0_16 = {16, 50, 50, 0, 1, images_bosshovercopturbine2_2331_0_16, 1};
static Animation anim_bosshovercopturbine2_2331_0 = {&direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, NULL, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, &direction_bosshovercopturbine2_2331_0_16, NULL, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0, &direction_bosshovercopturbine2_2331_0_0};
static Animation * anim_array_bosshovercopturbine2_2331[1] = {&anim_bosshovercopturbine2_2331_0};
static Animations anim_bosshovercopturbine2_2331 = {1, &anim_array_bosshovercopturbine2_2331[0]};
static bool anim_bosshovercopturbine2_2331_initialized;
class BossHoverCopTurbine2_2331 : public Active
{
public:
    BossHoverCopTurbine2_2331(int x, int y) : Active(x, y, BossHoverCopTurbine2_2331_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopTurbine 2", 22);
#endif
        this->animations = &anim_bosshovercopturbine2_2331;
        if (!anim_bosshovercopturbine2_2331_initialized) {
            anim_bosshovercopturbine2_2331_initialized = true;
            images_bosshovercopturbine2_2331_0_0[0] = get_internal_image(12276);
            images_bosshovercopturbine2_2331_0_16[0] = get_internal_image(12277);
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
FrameObject * create_bosshovercopturbine2_2331(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopTurbine2_2331(x, y);
}
static Image* images_bosshovercop_2332_0_0[4];
static Direction direction_bosshovercop_2332_0_0 = {0, 0, 0, 0, 1, images_bosshovercop_2332_0_0, 4};
static Image* images_bosshovercop_2332_0_16[1];
static Direction direction_bosshovercop_2332_0_16 = {16, 0, 0, 0, 1, images_bosshovercop_2332_0_16, 1};
static Animation anim_bosshovercop_2332_0 = {&direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, NULL, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, &direction_bosshovercop_2332_0_16, NULL, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0, &direction_bosshovercop_2332_0_0};
static Image* images_bosshovercop_2332_7_0[2];
static Direction direction_bosshovercop_2332_7_0 = {0, 15, 15, 0, -1, images_bosshovercop_2332_7_0, 2};
static Image* images_bosshovercop_2332_7_8[2];
static Direction direction_bosshovercop_2332_7_8 = {8, 50, 50, 0, 1, images_bosshovercop_2332_7_8, 2};
static Image* images_bosshovercop_2332_7_16[2];
static Direction direction_bosshovercop_2332_7_16 = {16, 15, 15, 0, -1, images_bosshovercop_2332_7_16, 2};
static Animation anim_bosshovercop_2332_7 = {&direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, NULL, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, &direction_bosshovercop_2332_7_8, NULL, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, &direction_bosshovercop_2332_7_16, NULL, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0, &direction_bosshovercop_2332_7_0};
static Animation * anim_array_bosshovercop_2332[8] = {&anim_bosshovercop_2332_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosshovercop_2332_7};
static Animations anim_bosshovercop_2332 = {8, &anim_array_bosshovercop_2332[0]};
static bool anim_bosshovercop_2332_initialized;
class BossHoverCop_2332 : public Active
{
public:
    BossHoverCop_2332(int x, int y) : Active(x, y, BossHoverCop_2332_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCop", 13);
#endif
        this->animations = &anim_bosshovercop_2332;
        if (!anim_bosshovercop_2332_initialized) {
            anim_bosshovercop_2332_initialized = true;
            images_bosshovercop_2332_0_0[0] = get_internal_image(12345);
            images_bosshovercop_2332_0_0[1] = get_internal_image(3132);
            images_bosshovercop_2332_0_0[2] = get_internal_image(12348);
            images_bosshovercop_2332_0_0[3] = get_internal_image(4083);
            images_bosshovercop_2332_0_16[0] = get_internal_image(12362);
            images_bosshovercop_2332_7_0[0] = get_internal_image(12363);
            images_bosshovercop_2332_7_0[1] = get_internal_image(12367);
            images_bosshovercop_2332_7_8[0] = get_internal_image(12364);
            images_bosshovercop_2332_7_8[1] = get_internal_image(12365);
            images_bosshovercop_2332_7_16[0] = get_internal_image(12366);
            images_bosshovercop_2332_7_16[1] = get_internal_image(12368);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 1);
        alterables->values.set(7, 4);
        alterables->values.set(9, -56);
    }
};
FrameObject * create_bosshovercop_2332(int x, int y)
{
    return new (Active::pool.create()) BossHoverCop_2332(x, y);
}
static Image* images_bosshovercopturbine1_2333_0_0[1];
static Direction direction_bosshovercopturbine1_2333_0_0 = {0, 50, 50, 0, 1, images_bosshovercopturbine1_2333_0_0, 1};
static Image* images_bosshovercopturbine1_2333_0_16[1];
static Direction direction_bosshovercopturbine1_2333_0_16 = {16, 50, 50, 0, 1, images_bosshovercopturbine1_2333_0_16, 1};
static Animation anim_bosshovercopturbine1_2333_0 = {&direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, NULL, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, &direction_bosshovercopturbine1_2333_0_16, NULL, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0, &direction_bosshovercopturbine1_2333_0_0};
static Animation * anim_array_bosshovercopturbine1_2333[1] = {&anim_bosshovercopturbine1_2333_0};
static Animations anim_bosshovercopturbine1_2333 = {1, &anim_array_bosshovercopturbine1_2333[0]};
static bool anim_bosshovercopturbine1_2333_initialized;
class BossHoverCopTurbine1_2333 : public Active
{
public:
    BossHoverCopTurbine1_2333(int x, int y) : Active(x, y, BossHoverCopTurbine1_2333_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopTurbine 1", 22);
#endif
        this->animations = &anim_bosshovercopturbine1_2333;
        if (!anim_bosshovercopturbine1_2333_initialized) {
            anim_bosshovercopturbine1_2333_initialized = true;
            images_bosshovercopturbine1_2333_0_0[0] = get_internal_image(12274);
            images_bosshovercopturbine1_2333_0_16[0] = get_internal_image(12275);
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
FrameObject * create_bosshovercopturbine1_2333(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopTurbine1_2333(x, y);
}
static Image* images_bosshovercoppropellor_2334_0_0[1];
static Direction direction_bosshovercoppropellor_2334_0_0 = {0, 50, 50, 0, 1, images_bosshovercoppropellor_2334_0_0, 1};
static Animation anim_bosshovercoppropellor_2334_0 = {&direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, NULL, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0, &direction_bosshovercoppropellor_2334_0_0};
static Animation * anim_array_bosshovercoppropellor_2334[1] = {&anim_bosshovercoppropellor_2334_0};
static Animations anim_bosshovercoppropellor_2334 = {1, &anim_array_bosshovercoppropellor_2334[0]};
static bool anim_bosshovercoppropellor_2334_initialized;
class BossHoverCopPropellor_2334 : public Active
{
public:
    BossHoverCopPropellor_2334(int x, int y) : Active(x, y, BossHoverCopPropellor_2334_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopPropellor", 22);
#endif
        this->animations = &anim_bosshovercoppropellor_2334;
        if (!anim_bosshovercoppropellor_2334_initialized) {
            anim_bosshovercoppropellor_2334_initialized = true;
            images_bosshovercoppropellor_2334_0_0[0] = get_internal_image(4386);
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
FrameObject * create_bosshovercoppropellor_2334(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopPropellor_2334(x, y);
}
static Image* images_bosshovercoppropellor2_2335_0_0[1];
static Direction direction_bosshovercoppropellor2_2335_0_0 = {0, 50, 50, 0, 1, images_bosshovercoppropellor2_2335_0_0, 1};
static Animation anim_bosshovercoppropellor2_2335_0 = {&direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, NULL, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0, &direction_bosshovercoppropellor2_2335_0_0};
static Animation * anim_array_bosshovercoppropellor2_2335[1] = {&anim_bosshovercoppropellor2_2335_0};
static Animations anim_bosshovercoppropellor2_2335 = {1, &anim_array_bosshovercoppropellor2_2335[0]};
static bool anim_bosshovercoppropellor2_2335_initialized;
class BossHoverCopPropellor2_2335 : public Active
{
public:
    BossHoverCopPropellor2_2335(int x, int y) : Active(x, y, BossHoverCopPropellor2_2335_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopPropellor 2", 24);
#endif
        this->animations = &anim_bosshovercoppropellor2_2335;
        if (!anim_bosshovercoppropellor2_2335_initialized) {
            anim_bosshovercoppropellor2_2335_initialized = true;
            images_bosshovercoppropellor2_2335_0_0[0] = get_internal_image(4386);
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
FrameObject * create_bosshovercoppropellor2_2335(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopPropellor2_2335(x, y);
}
static Image* images_bosshovercopsiren1_2336_0_0[2];
static Direction direction_bosshovercopsiren1_2336_0_0 = {0, 50, 50, 0, -1, images_bosshovercopsiren1_2336_0_0, 2};
static Animation anim_bosshovercopsiren1_2336_0 = {&direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, NULL, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0, &direction_bosshovercopsiren1_2336_0_0};
static Animation * anim_array_bosshovercopsiren1_2336[1] = {&anim_bosshovercopsiren1_2336_0};
static Animations anim_bosshovercopsiren1_2336 = {1, &anim_array_bosshovercopsiren1_2336[0]};
static bool anim_bosshovercopsiren1_2336_initialized;
class BossHoverCopSiren1_2336 : public Active
{
public:
    BossHoverCopSiren1_2336(int x, int y) : Active(x, y, BossHoverCopSiren1_2336_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopSiren 1", 20);
#endif
        this->animations = &anim_bosshovercopsiren1_2336;
        if (!anim_bosshovercopsiren1_2336_initialized) {
            anim_bosshovercopsiren1_2336_initialized = true;
            images_bosshovercopsiren1_2336_0_0[0] = get_internal_image(2273);
            images_bosshovercopsiren1_2336_0_0[1] = get_internal_image(2505);
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
FrameObject * create_bosshovercopsiren1_2336(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopSiren1_2336(x, y);
}
static Image* images_bosshovercopsiren2_2337_0_0[2];
static Direction direction_bosshovercopsiren2_2337_0_0 = {0, 50, 50, 0, -1, images_bosshovercopsiren2_2337_0_0, 2};
static Animation anim_bosshovercopsiren2_2337_0 = {&direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, NULL, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0, &direction_bosshovercopsiren2_2337_0_0};
static Animation * anim_array_bosshovercopsiren2_2337[1] = {&anim_bosshovercopsiren2_2337_0};
static Animations anim_bosshovercopsiren2_2337 = {1, &anim_array_bosshovercopsiren2_2337[0]};
static bool anim_bosshovercopsiren2_2337_initialized;
class BossHoverCopSiren2_2337 : public Active
{
public:
    BossHoverCopSiren2_2337(int x, int y) : Active(x, y, BossHoverCopSiren2_2337_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopSiren 2", 20);
#endif
        set_visible(false);
        this->animations = &anim_bosshovercopsiren2_2337;
        if (!anim_bosshovercopsiren2_2337_initialized) {
            anim_bosshovercopsiren2_2337_initialized = true;
            images_bosshovercopsiren2_2337_0_0[0] = get_internal_image(515);
            images_bosshovercopsiren2_2337_0_0[1] = get_internal_image(2272);
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
FrameObject * create_bosshovercopsiren2_2337(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopSiren2_2337(x, y);
}
static Image* images_bossmeteor_2338_0_0[2];
static Direction direction_bossmeteor_2338_0_0 = {0, 50, 50, 0, -1, images_bossmeteor_2338_0_0, 2};
static Animation anim_bossmeteor_2338_0 = {&direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, NULL, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0, &direction_bossmeteor_2338_0_0};
static Animation * anim_array_bossmeteor_2338[1] = {&anim_bossmeteor_2338_0};
static Animations anim_bossmeteor_2338 = {1, &anim_array_bossmeteor_2338[0]};
static bool anim_bossmeteor_2338_initialized;
class BossMeteor_2338 : public Active
{
public:
    BossMeteor_2338(int x, int y) : Active(x, y, BossMeteor_2338_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Meteor", 11);
#endif
        this->animations = &anim_bossmeteor_2338;
        if (!anim_bossmeteor_2338_initialized) {
            anim_bossmeteor_2338_initialized = true;
            images_bossmeteor_2338_0_0[0] = get_internal_image(4388);
            images_bossmeteor_2338_0_0[1] = get_internal_image(4401);
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
FrameObject * create_bossmeteor_2338(int x, int y)
{
    return new (Active::pool.create()) BossMeteor_2338(x, y);
}
static Image* images_gimmickbridgelog_2339_0_0[1];
static Direction direction_gimmickbridgelog_2339_0_0 = {0, 50, 50, 0, 1, images_gimmickbridgelog_2339_0_0, 1};
static Animation anim_gimmickbridgelog_2339_0 = {&direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, NULL, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0, &direction_gimmickbridgelog_2339_0_0};
static Animation * anim_array_gimmickbridgelog_2339[1] = {&anim_gimmickbridgelog_2339_0};
static Animations anim_gimmickbridgelog_2339 = {1, &anim_array_gimmickbridgelog_2339[0]};
static bool anim_gimmickbridgelog_2339_initialized;
class GimmickBridgeLog_2339 : public Active
{
public:
    GimmickBridgeLog_2339(int x, int y) : Active(x, y, GimmickBridgeLog_2339_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_Bridge_Log", 18);
#endif
        this->animations = &anim_gimmickbridgelog_2339;
        if (!anim_gimmickbridgelog_2339_initialized) {
            anim_gimmickbridgelog_2339_initialized = true;
            images_gimmickbridgelog_2339_0_0[0] = get_internal_image(11653);
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
FrameObject * create_gimmickbridgelog_2339(int x, int y)
{
    return new (Active::pool.create()) GimmickBridgeLog_2339(x, y);
}
class JCBamboo3_2340 : public Backdrop
{
public:
    JCBamboo3_2340(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14345);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo3_2340(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo3_2340(x, y);
}
class JCBamboo3_2341 : public Backdrop
{
public:
    JCBamboo3_2341(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14346);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo3_2341(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo3_2341(x, y);
}
class JCBamboo4_2342 : public Backdrop
{
public:
    JCBamboo4_2342(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14344);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo4_2342(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo4_2342(x, y);
}
class JCTreeTrunk_2343 : public Backdrop
{
public:
    JCTreeTrunk_2343(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_TreeTrunk", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16102);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jctreetrunk_2343(int x, int y)
{
    return new (Backdrop::pool.create()) JCTreeTrunk_2343(x, y);
}
class JCRockPillar1_2344 : public Backdrop
{
public:
    JCRockPillar1_2344(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_RockPillar 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16099);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcrockpillar1_2344(int x, int y)
{
    return new (Backdrop::pool.create()) JCRockPillar1_2344(x, y);
}
class JCRock1_2345 : public Backdrop
{
public:
    JCRock1_2345(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Rock 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5948);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcrock1_2345(int x, int y)
{
    return new (Backdrop::pool.create()) JCRock1_2345(x, y);
}
class JCRock2_2346 : public Backdrop
{
public:
    JCRock2_2346(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Rock 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5996);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcrock2_2346(int x, int y)
{
    return new (Backdrop::pool.create()) JCRock2_2346(x, y);
}
class JCBamboo1_2347 : public Backdrop
{
public:
    JCBamboo1_2347(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14341);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo1_2347(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo1_2347(x, y);
}
class JCBamboo2_2348 : public Backdrop
{
public:
    JCBamboo2_2348(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14342);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo2_2348(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo2_2348(x, y);
}
class JCPlant1_2349 : public Backdrop
{
public:
    JCPlant1_2349(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Plant 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16091);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplant1_2349(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlant1_2349(x, y);
}
class JCBamboo2_2350 : public Backdrop
{
public:
    JCBamboo2_2350(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bamboo2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14343);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbamboo2_2350(int x, int y)
{
    return new (Backdrop::pool.create()) JCBamboo2_2350(x, y);
}
class JCPlanet4_2351 : public Backdrop
{
public:
    JCPlanet4_2351(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Planet 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16096);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplanet4_2351(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlanet4_2351(x, y);
}
class JCCoral1_2352 : public Backdrop
{
public:
    JCCoral1_2352(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Coral 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1639);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jccoral1_2352(int x, int y)
{
    return new (Backdrop::pool.create()) JCCoral1_2352(x, y);
}
class JCCoral2_2353 : public Backdrop
{
public:
    JCCoral2_2353(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Coral 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2359);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jccoral2_2353(int x, int y)
{
    return new (Backdrop::pool.create()) JCCoral2_2353(x, y);
}
class JCPlant3_2354 : public Backdrop
{
public:
    JCPlant3_2354(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Plant 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16093);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplant3_2354(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlant3_2354(x, y);
}
class JCPlant4_2355 : public Backdrop
{
public:
    JCPlant4_2355(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Plant 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16094);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplant4_2355(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlant4_2355(x, y);
}
class JCPlanet3_2356 : public Backdrop
{
public:
    JCPlanet3_2356(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Planet 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16095);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplanet3_2356(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlanet3_2356(x, y);
}
class JCRockPillar2_2357 : public Backdrop
{
public:
    JCRockPillar2_2357(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_RockPillar 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16100);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcrockpillar2_2357(int x, int y)
{
    return new (Backdrop::pool.create()) JCRockPillar2_2357(x, y);
}
static Image* images_gimmickleafplatformback_2358_0_0[1];
static Direction direction_gimmickleafplatformback_2358_0_0 = {0, 50, 50, 0, 1, images_gimmickleafplatformback_2358_0_0, 1};
static Animation anim_gimmickleafplatformback_2358_0 = {&direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, NULL, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0, &direction_gimmickleafplatformback_2358_0_0};
static Animation * anim_array_gimmickleafplatformback_2358[1] = {&anim_gimmickleafplatformback_2358_0};
static Animations anim_gimmickleafplatformback_2358 = {1, &anim_array_gimmickleafplatformback_2358[0]};
static bool anim_gimmickleafplatformback_2358_initialized;
class GimmickLeafPlatformBack_2358 : public Active
{
public:
    GimmickLeafPlatformBack_2358(int x, int y) : Active(x, y, GimmickLeafPlatformBack_2358_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_LeafPlatformBack", 24);
#endif
        this->animations = &anim_gimmickleafplatformback_2358;
        if (!anim_gimmickleafplatformback_2358_initialized) {
            anim_gimmickleafplatformback_2358_initialized = true;
            images_gimmickleafplatformback_2358_0_0[0] = get_internal_image(16072);
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
FrameObject * create_gimmickleafplatformback_2358(int x, int y)
{
    return new (Active::pool.create()) GimmickLeafPlatformBack_2358(x, y);
}
static Image* images_gimmickleafplatform1_2359_0_0[1];
static Direction direction_gimmickleafplatform1_2359_0_0 = {0, 50, 50, 0, 1, images_gimmickleafplatform1_2359_0_0, 1};
static Animation anim_gimmickleafplatform1_2359_0 = {&direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, NULL, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0, &direction_gimmickleafplatform1_2359_0_0};
static Animation * anim_array_gimmickleafplatform1_2359[1] = {&anim_gimmickleafplatform1_2359_0};
static Animations anim_gimmickleafplatform1_2359 = {1, &anim_array_gimmickleafplatform1_2359[0]};
static bool anim_gimmickleafplatform1_2359_initialized;
class GimmickLeafPlatform1_2359 : public Active
{
public:
    GimmickLeafPlatform1_2359(int x, int y) : Active(x, y, GimmickLeafPlatform1_2359_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_LeafPlatform 1", 22);
#endif
        this->animations = &anim_gimmickleafplatform1_2359;
        if (!anim_gimmickleafplatform1_2359_initialized) {
            anim_gimmickleafplatform1_2359_initialized = true;
            images_gimmickleafplatform1_2359_0_0[0] = get_internal_image(16074);
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
FrameObject * create_gimmickleafplatform1_2359(int x, int y)
{
    return new (Active::pool.create()) GimmickLeafPlatform1_2359(x, y);
}
static Image* images_gimmickleafplatform2_2360_0_0[1];
static Direction direction_gimmickleafplatform2_2360_0_0 = {0, 50, 50, 0, 1, images_gimmickleafplatform2_2360_0_0, 1};
static Animation anim_gimmickleafplatform2_2360_0 = {&direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, NULL, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0, &direction_gimmickleafplatform2_2360_0_0};
static Animation * anim_array_gimmickleafplatform2_2360[1] = {&anim_gimmickleafplatform2_2360_0};
static Animations anim_gimmickleafplatform2_2360 = {1, &anim_array_gimmickleafplatform2_2360[0]};
static bool anim_gimmickleafplatform2_2360_initialized;
class GimmickLeafPlatform2_2360 : public Active
{
public:
    GimmickLeafPlatform2_2360(int x, int y) : Active(x, y, GimmickLeafPlatform2_2360_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_LeafPlatform 2", 22);
#endif
        this->animations = &anim_gimmickleafplatform2_2360;
        if (!anim_gimmickleafplatform2_2360_initialized) {
            anim_gimmickleafplatform2_2360_initialized = true;
            images_gimmickleafplatform2_2360_0_0[0] = get_internal_image(16075);
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
FrameObject * create_gimmickleafplatform2_2360(int x, int y)
{
    return new (Active::pool.create()) GimmickLeafPlatform2_2360(x, y);
}
static Image* images_jcwaterstream8_2361_0_0[6];
static Direction direction_jcwaterstream8_2361_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream8_2361_0_0, 6};
static Animation anim_jcwaterstream8_2361_0 = {&direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, NULL, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0, &direction_jcwaterstream8_2361_0_0};
static Animation * anim_array_jcwaterstream8_2361[1] = {&anim_jcwaterstream8_2361_0};
static Animations anim_jcwaterstream8_2361 = {1, &anim_array_jcwaterstream8_2361[0]};
static bool anim_jcwaterstream8_2361_initialized;
class JCWaterStream8_2361 : public Active
{
public:
    JCWaterStream8_2361(int x, int y) : Active(x, y, JCWaterStream8_2361_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("JC_WaterStream 8", 16);
#endif
        this->animations = &anim_jcwaterstream8_2361;
        if (!anim_jcwaterstream8_2361_initialized) {
            anim_jcwaterstream8_2361_initialized = true;
            images_jcwaterstream8_2361_0_0[0] = get_internal_image(7433);
            images_jcwaterstream8_2361_0_0[1] = get_internal_image(22);
            images_jcwaterstream8_2361_0_0[2] = get_internal_image(7436);
            images_jcwaterstream8_2361_0_0[3] = get_internal_image(89);
            images_jcwaterstream8_2361_0_0[4] = get_internal_image(7840);
            images_jcwaterstream8_2361_0_0[5] = get_internal_image(2113);
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
FrameObject * create_jcwaterstream8_2361(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream8_2361(x, y);
}
static Image* images_jcwaterstream7_2362_0_0[6];
static Direction direction_jcwaterstream7_2362_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream7_2362_0_0, 6};
static Animation anim_jcwaterstream7_2362_0 = {&direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, NULL, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0, &direction_jcwaterstream7_2362_0_0};
static Animation * anim_array_jcwaterstream7_2362[1] = {&anim_jcwaterstream7_2362_0};
static Animations anim_jcwaterstream7_2362 = {1, &anim_array_jcwaterstream7_2362[0]};
static bool anim_jcwaterstream7_2362_initialized;
class JCWaterStream7_2362 : public Active
{
public:
    JCWaterStream7_2362(int x, int y) : Active(x, y, JCWaterStream7_2362_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("JC_WaterStream 7", 16);
#endif
        this->animations = &anim_jcwaterstream7_2362;
        if (!anim_jcwaterstream7_2362_initialized) {
            anim_jcwaterstream7_2362_initialized = true;
            images_jcwaterstream7_2362_0_0[0] = get_internal_image(7944);
            images_jcwaterstream7_2362_0_0[1] = get_internal_image(2114);
            images_jcwaterstream7_2362_0_0[2] = get_internal_image(7943);
            images_jcwaterstream7_2362_0_0[3] = get_internal_image(2526);
            images_jcwaterstream7_2362_0_0[4] = get_internal_image(7945);
            images_jcwaterstream7_2362_0_0[5] = get_internal_image(2824);
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
FrameObject * create_jcwaterstream7_2362(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream7_2362(x, y);
}
static Image* images_jcslidingplatformmask_2363_0_0[1];
static Direction direction_jcslidingplatformmask_2363_0_0 = {0, 100, 100, 0, 1, images_jcslidingplatformmask_2363_0_0, 1};
static Animation anim_jcslidingplatformmask_2363_0 = {&direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, NULL, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0, &direction_jcslidingplatformmask_2363_0_0};
static Animation * anim_array_jcslidingplatformmask_2363[1] = {&anim_jcslidingplatformmask_2363_0};
static Animations anim_jcslidingplatformmask_2363 = {1, &anim_array_jcslidingplatformmask_2363[0]};
static bool anim_jcslidingplatformmask_2363_initialized;
class JCSlidingPlatformMask_2363 : public Active
{
public:
    JCSlidingPlatformMask_2363(int x, int y) : Active(x, y, JCSlidingPlatformMask_2363_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("JC_SlidingPlatformMask", 22);
#endif
        this->animations = &anim_jcslidingplatformmask_2363;
        if (!anim_jcslidingplatformmask_2363_initialized) {
            anim_jcslidingplatformmask_2363_initialized = true;
            images_jcslidingplatformmask_2363_0_0[0] = get_internal_image(14707);
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
FrameObject * create_jcslidingplatformmask_2363(int x, int y)
{
    return new (Active::pool.create()) JCSlidingPlatformMask_2363(x, y);
}
static Image* images_enemyplantturretusstalk_2364_0_0[1];
static Direction direction_enemyplantturretusstalk_2364_0_0 = {0, 50, 50, 0, 1, images_enemyplantturretusstalk_2364_0_0, 1};
static Animation anim_enemyplantturretusstalk_2364_0 = {&direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, NULL, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0, &direction_enemyplantturretusstalk_2364_0_0};
static Animation * anim_array_enemyplantturretusstalk_2364[1] = {&anim_enemyplantturretusstalk_2364_0};
static Animations anim_enemyplantturretusstalk_2364 = {1, &anim_array_enemyplantturretusstalk_2364[0]};
static bool anim_enemyplantturretusstalk_2364_initialized;
class EnemyPlantTurretusStalk_2364 : public Active
{
public:
    EnemyPlantTurretusStalk_2364(int x, int y) : Active(x, y, EnemyPlantTurretusStalk_2364_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PlantTurretusStalk", 24);
#endif
        this->animations = &anim_enemyplantturretusstalk_2364;
        if (!anim_enemyplantturretusstalk_2364_initialized) {
            anim_enemyplantturretusstalk_2364_initialized = true;
            images_enemyplantturretusstalk_2364_0_0[0] = get_internal_image(8543);
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
FrameObject * create_enemyplantturretusstalk_2364(int x, int y)
{
    return new (Active::pool.create()) EnemyPlantTurretusStalk_2364(x, y);
}
static Image* images_enemyplantturretus_2365_0_0[1];
static Direction direction_enemyplantturretus_2365_0_0 = {0, 25, 25, 0, -1, images_enemyplantturretus_2365_0_0, 1};
static Image* images_enemyplantturretus_2365_0_16[1];
static Direction direction_enemyplantturretus_2365_0_16 = {16, 25, 25, 0, -1, images_enemyplantturretus_2365_0_16, 1};
static Animation anim_enemyplantturretus_2365_0 = {&direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, NULL, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, &direction_enemyplantturretus_2365_0_16, NULL, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0, &direction_enemyplantturretus_2365_0_0};
static Image* images_enemyplantturretus_2365_7_0[10];
static Direction direction_enemyplantturretus_2365_7_0 = {0, 35, 35, 0, 1, images_enemyplantturretus_2365_7_0, 10};
static Image* images_enemyplantturretus_2365_7_16[10];
static Direction direction_enemyplantturretus_2365_7_16 = {16, 35, 35, 0, 1, images_enemyplantturretus_2365_7_16, 10};
static Animation anim_enemyplantturretus_2365_7 = {&direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, NULL, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, &direction_enemyplantturretus_2365_7_16, NULL, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0, &direction_enemyplantturretus_2365_7_0};
static Animation * anim_array_enemyplantturretus_2365[8] = {&anim_enemyplantturretus_2365_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyplantturretus_2365_7};
static Animations anim_enemyplantturretus_2365 = {8, &anim_array_enemyplantturretus_2365[0]};
static bool anim_enemyplantturretus_2365_initialized;
class EnemyPlantTurretus_2365 : public Active
{
public:
    EnemyPlantTurretus_2365(int x, int y) : Active(x, y, EnemyPlantTurretus_2365_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_PlantTurretus", 19);
#endif
        this->animations = &anim_enemyplantturretus_2365;
        if (!anim_enemyplantturretus_2365_initialized) {
            anim_enemyplantturretus_2365_initialized = true;
            images_enemyplantturretus_2365_0_0[0] = get_internal_image(3136);
            images_enemyplantturretus_2365_0_16[0] = get_internal_image(12207);
            images_enemyplantturretus_2365_7_0[0] = get_internal_image(3136);
            images_enemyplantturretus_2365_7_0[1] = get_internal_image(9035);
            images_enemyplantturretus_2365_7_0[2] = get_internal_image(10588);
            images_enemyplantturretus_2365_7_0[3] = get_internal_image(10589);
            images_enemyplantturretus_2365_7_0[4] = get_internal_image(10588);
            images_enemyplantturretus_2365_7_0[5] = get_internal_image(10589);
            images_enemyplantturretus_2365_7_0[6] = get_internal_image(10591);
            images_enemyplantturretus_2365_7_0[7] = get_internal_image(10593);
            images_enemyplantturretus_2365_7_0[8] = get_internal_image(12205);
            images_enemyplantturretus_2365_7_0[9] = get_internal_image(3136);
            images_enemyplantturretus_2365_7_16[0] = get_internal_image(12207);
            images_enemyplantturretus_2365_7_16[1] = get_internal_image(12208);
            images_enemyplantturretus_2365_7_16[2] = get_internal_image(12209);
            images_enemyplantturretus_2365_7_16[3] = get_internal_image(12210);
            images_enemyplantturretus_2365_7_16[4] = get_internal_image(12209);
            images_enemyplantturretus_2365_7_16[5] = get_internal_image(12210);
            images_enemyplantturretus_2365_7_16[6] = get_internal_image(12214);
            images_enemyplantturretus_2365_7_16[7] = get_internal_image(12215);
            images_enemyplantturretus_2365_7_16[8] = get_internal_image(12216);
            images_enemyplantturretus_2365_7_16[9] = get_internal_image(12207);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(3, -1);
        alterables->values.set(7, 80);
    }
};
FrameObject * create_enemyplantturretus_2365(int x, int y)
{
    return new (Active::pool.create()) EnemyPlantTurretus_2365(x, y);
}
static Image* images_enemyplantturretushat_2366_0_0[1];
static Direction direction_enemyplantturretushat_2366_0_0 = {0, 50, 50, 0, 1, images_enemyplantturretushat_2366_0_0, 1};
static Image* images_enemyplantturretushat_2366_0_16[1];
static Direction direction_enemyplantturretushat_2366_0_16 = {16, 50, 50, 0, 1, images_enemyplantturretushat_2366_0_16, 1};
static Animation anim_enemyplantturretushat_2366_0 = {&direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, NULL, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, &direction_enemyplantturretushat_2366_0_16, NULL, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0, &direction_enemyplantturretushat_2366_0_0};
static Animation * anim_array_enemyplantturretushat_2366[1] = {&anim_enemyplantturretushat_2366_0};
static Animations anim_enemyplantturretushat_2366 = {1, &anim_array_enemyplantturretushat_2366[0]};
static bool anim_enemyplantturretushat_2366_initialized;
class EnemyPlantTurretusHat_2366 : public Active
{
public:
    EnemyPlantTurretusHat_2366(int x, int y) : Active(x, y, EnemyPlantTurretusHat_2366_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_PlantTurretusHat", 22);
#endif
        this->animations = &anim_enemyplantturretushat_2366;
        if (!anim_enemyplantturretushat_2366_initialized) {
            anim_enemyplantturretushat_2366_initialized = true;
            images_enemyplantturretushat_2366_0_0[0] = get_internal_image(16097);
            images_enemyplantturretushat_2366_0_16[0] = get_internal_image(16098);
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
FrameObject * create_enemyplantturretushat_2366(int x, int y)
{
    return new (Active::pool.create()) EnemyPlantTurretusHat_2366(x, y);
}
class JCBud1_2367 : public Backdrop
{
public:
    JCBud1_2367(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bud 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16070);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbud1_2367(int x, int y)
{
    return new (Backdrop::pool.create()) JCBud1_2367(x, y);
}
class JCBud2_2368 : public Backdrop
{
public:
    JCBud2_2368(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Bud 2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16071);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbud2_2368(int x, int y)
{
    return new (Backdrop::pool.create()) JCBud2_2368(x, y);
}
class JCFlatGround7_2369 : public Backdrop
{
public:
    JCFlatGround7_2369(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 7", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14704);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcflatground7_2369(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround7_2369(x, y);
}
class JCFlatGround6_2370 : public Backdrop
{
public:
    JCFlatGround6_2370(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14703);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcflatground6_2370(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround6_2370(x, y);
}
class JCDirt7_2371 : public Backdrop
{
public:
    JCDirt7_2371(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13306);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt7_2371(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt7_2371(x, y);
}
class JCBrokenSlope_2372 : public Backdrop
{
public:
    JCBrokenSlope_2372(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_BrokenSlope", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2576);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcbrokenslope_2372(int x, int y)
{
    return new (Backdrop::pool.create()) JCBrokenSlope_2372(x, y);
}
class JCDirt18_2373 : public Backdrop
{
public:
    JCDirt18_2373(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 18", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9106);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt18_2373(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt18_2373(x, y);
}
class JCDirt4_2374 : public Backdrop
{
public:
    JCDirt4_2374(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9296);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcdirt4_2374(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt4_2374(x, y);
}
class JCFlatGround1_2375 : public Backdrop
{
public:
    JCFlatGround1_2375(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13313);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground1_2375(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround1_2375(x, y);
}
class JCDirt16_2376 : public Backdrop
{
public:
    JCDirt16_2376(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 16", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3993);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt16_2376(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt16_2376(x, y);
}
class JCDirt5_2377 : public Backdrop
{
public:
    JCDirt5_2377(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9297);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcdirt5_2377(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt5_2377(x, y);
}
class JCDirt19_2378 : public Backdrop
{
public:
    JCDirt19_2378(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 19", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4109);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt19_2378(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt19_2378(x, y);
}
class JCDirt2_2379 : public Backdrop
{
public:
    JCDirt2_2379(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9107);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt2_2379(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt2_2379(x, y);
}
class JCDirt3_2380 : public Backdrop
{
public:
    JCDirt3_2380(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9286);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt3_2380(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt3_2380(x, y);
}
class JCDirt17_2381 : public Backdrop
{
public:
    JCDirt17_2381(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 17", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4121);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt17_2381(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt17_2381(x, y);
}
class JCDirt8_2382 : public Backdrop
{
public:
    JCDirt8_2382(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13307);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt8_2382(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt8_2382(x, y);
}
class JCDirt14_2383 : public Backdrop
{
public:
    JCDirt14_2383(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 14", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3712);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt14_2383(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt14_2383(x, y);
}
class JCDirt10_2384 : public Backdrop
{
public:
    JCDirt10_2384(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2582);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt10_2384(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt10_2384(x, y);
}
class JCFlatGround5_2385 : public Backdrop
{
public:
    JCFlatGround5_2385(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14702);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground5_2385(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround5_2385(x, y);
}
class JCDirt15_2386 : public Backdrop
{
public:
    JCDirt15_2386(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 15", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3724);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt15_2386(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt15_2386(x, y);
}
class JCDirt11_2387 : public Backdrop
{
public:
    JCDirt11_2387(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 11", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3016);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt11_2387(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt11_2387(x, y);
}
class JCDirt12_2388 : public Backdrop
{
public:
    JCDirt12_2388(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 12", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3494);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt12_2388(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt12_2388(x, y);
}
class JCDirt13_2389 : public Backdrop
{
public:
    JCDirt13_2389(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 13", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3707);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt13_2389(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt13_2389(x, y);
}
class JCDirt9_2390 : public Backdrop
{
public:
    JCDirt9_2390(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13308);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt9_2390(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt9_2390(x, y);
}
class JCPlant2_2391 : public Backdrop
{
public:
    JCPlant2_2391(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Plant 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16092);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcplant2_2391(int x, int y)
{
    return new (Backdrop::pool.create()) JCPlant2_2391(x, y);
}
class JCGrass1_2392 : public Backdrop
{
public:
    JCGrass1_2392(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14706);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass1_2392(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass1_2392(x, y);
}
class JCGrass2_2393 : public Backdrop
{
public:
    JCGrass2_2393(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14709);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass2_2393(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass2_2393(x, y);
}
class JCGrass6_2394 : public Backdrop
{
public:
    JCGrass6_2394(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14713);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcgrass6_2394(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass6_2394(x, y);
}
class JCGrass3_2395 : public Backdrop
{
public:
    JCGrass3_2395(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14710);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass3_2395(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass3_2395(x, y);
}
class JCGrass4_2396 : public Backdrop
{
public:
    JCGrass4_2396(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14711);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass4_2396(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass4_2396(x, y);
}
class JCGrass5_2397 : public Backdrop
{
public:
    JCGrass5_2397(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14712);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcgrass5_2397(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass5_2397(x, y);
}
class JCDirt6_2398 : public Backdrop
{
public:
    JCDirt6_2398(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9302);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt6_2398(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt6_2398(x, y);
}
class JCFlatGround2_2399 : public Backdrop
{
public:
    JCFlatGround2_2399(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5013);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground2_2399(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround2_2399(x, y);
}
class JCFlatGround3_2400 : public Backdrop
{
public:
    JCFlatGround3_2400(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13315);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground3_2400(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround3_2400(x, y);
}
class JCFlatGround4_2401 : public Backdrop
{
public:
    JCFlatGround4_2401(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14701);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground4_2401(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround4_2401(x, y);
}
class JCGrass7_2402 : public Backdrop
{
public:
    JCGrass7_2402(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14715);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass7_2402(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass7_2402(x, y);
}
class JCGrass8_2403 : public Backdrop
{
public:
    JCGrass8_2403(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14714);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass8_2403(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass8_2403(x, y);
}
class JCGrass10_2404 : public Backdrop
{
public:
    JCGrass10_2404(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14708);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass10_2404(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass10_2404(x, y);
}
class JCGrass9_2405 : public Backdrop
{
public:
    JCGrass9_2405(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14716);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass9_2405(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass9_2405(x, y);
}
class JCFlatGround8_2406 : public Backdrop
{
public:
    JCFlatGround8_2406(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 8", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14705);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground8_2406(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround8_2406(x, y);
}
class SeedSpawnerStalk_2407 : public Backdrop
{
public:
    SeedSpawnerStalk_2407(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SeedSpawner_Stalk", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(355);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_seedspawnerstalk_2407(int x, int y)
{
    return new (Backdrop::pool.create()) SeedSpawnerStalk_2407(x, y);
}
class JCGrassTop1_2408 : public Backdrop
{
public:
    JCGrassTop1_2408(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_GrassTop 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11923);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcgrasstop1_2408(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrassTop1_2408(x, y);
}
static Image* images_jcwaterstream4_2409_0_0[6];
static Direction direction_jcwaterstream4_2409_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream4_2409_0_0, 6};
static Animation anim_jcwaterstream4_2409_0 = {&direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, NULL, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0, &direction_jcwaterstream4_2409_0_0};
static Animation * anim_array_jcwaterstream4_2409[1] = {&anim_jcwaterstream4_2409_0};
static Animations anim_jcwaterstream4_2409 = {1, &anim_array_jcwaterstream4_2409[0]};
static bool anim_jcwaterstream4_2409_initialized;
class JCWaterStream4_2409 : public Active
{
public:
    JCWaterStream4_2409(int x, int y) : Active(x, y, JCWaterStream4_2409_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 4", 16);
#endif
        this->animations = &anim_jcwaterstream4_2409;
        if (!anim_jcwaterstream4_2409_initialized) {
            anim_jcwaterstream4_2409_initialized = true;
            images_jcwaterstream4_2409_0_0[0] = get_internal_image(14729);
            images_jcwaterstream4_2409_0_0[1] = get_internal_image(14730);
            images_jcwaterstream4_2409_0_0[2] = get_internal_image(14731);
            images_jcwaterstream4_2409_0_0[3] = get_internal_image(14732);
            images_jcwaterstream4_2409_0_0[4] = get_internal_image(14733);
            images_jcwaterstream4_2409_0_0[5] = get_internal_image(14734);
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
FrameObject * create_jcwaterstream4_2409(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream4_2409(x, y);
}
static Image* images_jcwaterstream3_2410_0_0[6];
static Direction direction_jcwaterstream3_2410_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream3_2410_0_0, 6};
static Animation anim_jcwaterstream3_2410_0 = {&direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, NULL, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0, &direction_jcwaterstream3_2410_0_0};
static Animation * anim_array_jcwaterstream3_2410[1] = {&anim_jcwaterstream3_2410_0};
static Animations anim_jcwaterstream3_2410 = {1, &anim_array_jcwaterstream3_2410[0]};
static bool anim_jcwaterstream3_2410_initialized;
class JCWaterStream3_2410 : public Active
{
public:
    JCWaterStream3_2410(int x, int y) : Active(x, y, JCWaterStream3_2410_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 3", 16);
#endif
        this->animations = &anim_jcwaterstream3_2410;
        if (!anim_jcwaterstream3_2410_initialized) {
            anim_jcwaterstream3_2410_initialized = true;
            images_jcwaterstream3_2410_0_0[0] = get_internal_image(14747);
            images_jcwaterstream3_2410_0_0[1] = get_internal_image(14748);
            images_jcwaterstream3_2410_0_0[2] = get_internal_image(14749);
            images_jcwaterstream3_2410_0_0[3] = get_internal_image(14750);
            images_jcwaterstream3_2410_0_0[4] = get_internal_image(14751);
            images_jcwaterstream3_2410_0_0[5] = get_internal_image(14752);
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
FrameObject * create_jcwaterstream3_2410(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream3_2410(x, y);
}
static Image* images_jcwaterstream6_2411_0_0[6];
static Direction direction_jcwaterstream6_2411_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream6_2411_0_0, 6};
static Animation anim_jcwaterstream6_2411_0 = {&direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, NULL, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0, &direction_jcwaterstream6_2411_0_0};
static Animation * anim_array_jcwaterstream6_2411[1] = {&anim_jcwaterstream6_2411_0};
static Animations anim_jcwaterstream6_2411 = {1, &anim_array_jcwaterstream6_2411[0]};
static bool anim_jcwaterstream6_2411_initialized;
class JCWaterStream6_2411 : public Active
{
public:
    JCWaterStream6_2411(int x, int y) : Active(x, y, JCWaterStream6_2411_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 6", 16);
#endif
        this->animations = &anim_jcwaterstream6_2411;
        if (!anim_jcwaterstream6_2411_initialized) {
            anim_jcwaterstream6_2411_initialized = true;
            images_jcwaterstream6_2411_0_0[0] = get_internal_image(14723);
            images_jcwaterstream6_2411_0_0[1] = get_internal_image(14724);
            images_jcwaterstream6_2411_0_0[2] = get_internal_image(14725);
            images_jcwaterstream6_2411_0_0[3] = get_internal_image(14726);
            images_jcwaterstream6_2411_0_0[4] = get_internal_image(14727);
            images_jcwaterstream6_2411_0_0[5] = get_internal_image(14728);
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
FrameObject * create_jcwaterstream6_2411(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream6_2411(x, y);
}
