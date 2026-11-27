#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_bubblepatch_806_0_0[2];
static Direction direction_bubblepatch_806_0_0 = {0, 10, 10, 0, -1, images_bubblepatch_806_0_0, 2};
static Animation anim_bubblepatch_806_0 = {&direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, NULL, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0, &direction_bubblepatch_806_0_0};
static Image* images_bubblepatch_806_7_0[6];
static Direction direction_bubblepatch_806_7_0 = {0, 50, 50, 4, -1, images_bubblepatch_806_7_0, 6};
static Animation anim_bubblepatch_806_7 = {&direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, NULL, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0, &direction_bubblepatch_806_7_0};
static Image* images_bubblepatch_806_8_0[6];
static Direction direction_bubblepatch_806_8_0 = {0, 50, 50, 4, 1, images_bubblepatch_806_8_0, 6};
static Animation anim_bubblepatch_806_8 = {&direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, NULL, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0, &direction_bubblepatch_806_8_0};
static Animation * anim_array_bubblepatch_806[9] = {&anim_bubblepatch_806_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bubblepatch_806_7, &anim_bubblepatch_806_8};
static Animations anim_bubblepatch_806 = {9, &anim_array_bubblepatch_806[0]};
static bool anim_bubblepatch_806_initialized;
class BubblePatch_806 : public Active
{
public:
    BubblePatch_806(int x, int y) : Active(x, y, BubblePatch_806_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Bubble Patch", 12);
#endif
        this->animations = &anim_bubblepatch_806;
        if (!anim_bubblepatch_806_initialized) {
            anim_bubblepatch_806_initialized = true;
            images_bubblepatch_806_0_0[0] = get_internal_image(4957);
            images_bubblepatch_806_0_0[1] = get_internal_image(4958);
            images_bubblepatch_806_7_0[0] = get_internal_image(1017);
            images_bubblepatch_806_7_0[1] = get_internal_image(4947);
            images_bubblepatch_806_7_0[2] = get_internal_image(301);
            images_bubblepatch_806_7_0[3] = get_internal_image(91);
            images_bubblepatch_806_7_0[4] = get_internal_image(236);
            images_bubblepatch_806_7_0[5] = get_internal_image(201);
            images_bubblepatch_806_8_0[0] = get_internal_image(201);
            images_bubblepatch_806_8_0[1] = get_internal_image(236);
            images_bubblepatch_806_8_0[2] = get_internal_image(91);
            images_bubblepatch_806_8_0[3] = get_internal_image(301);
            images_bubblepatch_806_8_0[4] = get_internal_image(4947);
            images_bubblepatch_806_8_0[5] = get_internal_image(1017);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bubblepatch_806(int x, int y)
{
    return new (Active::pool.create()) BubblePatch_806(x, y);
}
static Image* images_objectspinningbeam_807_0_0[1];
static Direction direction_objectspinningbeam_807_0_0 = {0, 50, 50, 0, 1, images_objectspinningbeam_807_0_0, 1};
static Animation anim_objectspinningbeam_807_0 = {&direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, NULL, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0, &direction_objectspinningbeam_807_0_0};
static Animation * anim_array_objectspinningbeam_807[1] = {&anim_objectspinningbeam_807_0};
static Animations anim_objectspinningbeam_807 = {1, &anim_array_objectspinningbeam_807[0]};
static bool anim_objectspinningbeam_807_initialized;
class ObjectSpinningBeam_807 : public Active
{
public:
    ObjectSpinningBeam_807(int x, int y) : Active(x, y, ObjectSpinningBeam_807_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_SpinningBeam", 19);
#endif
        this->animations = &anim_objectspinningbeam_807;
        if (!anim_objectspinningbeam_807_initialized) {
            anim_objectspinningbeam_807_initialized = true;
            images_objectspinningbeam_807_0_0[0] = get_internal_image(4848);
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
FrameObject * create_objectspinningbeam_807(int x, int y)
{
    return new (Active::pool.create()) ObjectSpinningBeam_807(x, y);
}
static Image* images_levellayer1loop03_808_0_0[1];
static Direction direction_levellayer1loop03_808_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop03_808_0_0, 1};
static Animation anim_levellayer1loop03_808_0 = {&direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, NULL, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0, &direction_levellayer1loop03_808_0_0};
static Animation * anim_array_levellayer1loop03_808[1] = {&anim_levellayer1loop03_808_0};
static Animations anim_levellayer1loop03_808 = {1, &anim_array_levellayer1loop03_808[0]};
static bool anim_levellayer1loop03_808_initialized;
class LevelLayer1Loop03_808 : public Active
{
public:
    LevelLayer1Loop03_808(int x, int y) : Active(x, y, LevelLayer1Loop03_808_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop03", 19);
#endif
        this->animations = &anim_levellayer1loop03_808;
        if (!anim_levellayer1loop03_808_initialized) {
            anim_levellayer1loop03_808_initialized = true;
            images_levellayer1loop03_808_0_0[0] = get_internal_image(4513);
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
FrameObject * create_levellayer1loop03_808(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop03_808(x, y);
}
static Image* images_fishstatuefront_809_0_0[1];
static Direction direction_fishstatuefront_809_0_0 = {0, 50, 50, 0, 1, images_fishstatuefront_809_0_0, 1};
static Animation anim_fishstatuefront_809_0 = {&direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, NULL, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0, &direction_fishstatuefront_809_0_0};
static Animation * anim_array_fishstatuefront_809[1] = {&anim_fishstatuefront_809_0};
static Animations anim_fishstatuefront_809 = {1, &anim_array_fishstatuefront_809[0]};
static bool anim_fishstatuefront_809_initialized;
class FishStatueFront_809 : public Active
{
public:
    FishStatueFront_809(int x, int y) : Active(x, y, FishStatueFront_809_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FishStatue_Front", 16);
#endif
        this->animations = &anim_fishstatuefront_809;
        if (!anim_fishstatuefront_809_initialized) {
            anim_fishstatuefront_809_initialized = true;
            images_fishstatuefront_809_0_0[0] = get_internal_image(53);
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
FrameObject * create_fishstatuefront_809(int x, int y)
{
    return new (Active::pool.create()) FishStatueFront_809(x, y);
}
static Image* images_minibosschompertail_810_0_0[1];
static Direction direction_minibosschompertail_810_0_0 = {0, 50, 50, 0, 1, images_minibosschompertail_810_0_0, 1};
static Animation anim_minibosschompertail_810_0 = {&direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, NULL, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0, &direction_minibosschompertail_810_0_0};
static Animation * anim_array_minibosschompertail_810[1] = {&anim_minibosschompertail_810_0};
static Animations anim_minibosschompertail_810 = {1, &anim_array_minibosschompertail_810[0]};
static bool anim_minibosschompertail_810_initialized;
class MinibossChomperTail_810 : public Active
{
public:
    MinibossChomperTail_810(int x, int y) : Active(x, y, MinibossChomperTail_810_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_ChomperTail", 20);
#endif
        this->animations = &anim_minibosschompertail_810;
        if (!anim_minibosschompertail_810_initialized) {
            anim_minibosschompertail_810_initialized = true;
            images_minibosschompertail_810_0_0[0] = get_internal_image(4834);
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
FrameObject * create_minibosschompertail_810(int x, int y)
{
    return new (Active::pool.create()) MinibossChomperTail_810(x, y);
}
static Image* images_minibosschomperball_811_0_0[1];
static Direction direction_minibosschomperball_811_0_0 = {0, 50, 50, 0, 1, images_minibosschomperball_811_0_0, 1};
static Animation anim_minibosschomperball_811_0 = {&direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, NULL, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0, &direction_minibosschomperball_811_0_0};
static Animation * anim_array_minibosschomperball_811[1] = {&anim_minibosschomperball_811_0};
static Animations anim_minibosschomperball_811 = {1, &anim_array_minibosschomperball_811[0]};
static bool anim_minibosschomperball_811_initialized;
class MinibossChomperBall_811 : public Active
{
public:
    MinibossChomperBall_811(int x, int y) : Active(x, y, MinibossChomperBall_811_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_ChomperBall", 20);
#endif
        this->animations = &anim_minibosschomperball_811;
        if (!anim_minibosschomperball_811_initialized) {
            anim_minibosschomperball_811_initialized = true;
            images_minibosschomperball_811_0_0[0] = get_internal_image(5153);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
        alterables->values.set(8, 8);
    }
};
FrameObject * create_minibosschomperball_811(int x, int y)
{
    return new (Active::pool.create()) MinibossChomperBall_811(x, y);
}
static Image* images_minibosschompermouth_812_0_0[4];
static Direction direction_minibosschompermouth_812_0_0 = {0, 25, 25, 3, -1, images_minibosschompermouth_812_0_0, 4};
static Image* images_minibosschompermouth_812_0_1[4];
static Direction direction_minibosschompermouth_812_0_1 = {1, 25, 25, 3, -1, images_minibosschompermouth_812_0_1, 4};
static Animation anim_minibosschompermouth_812_0 = {&direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_1, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0, &direction_minibosschompermouth_812_0_0};
static Image* images_minibosschompermouth_812_10_0[4];
static Direction direction_minibosschompermouth_812_10_0 = {0, 25, 25, 3, -1, images_minibosschompermouth_812_10_0, 4};
static Image* images_minibosschompermouth_812_10_1[4];
static Direction direction_minibosschompermouth_812_10_1 = {1, 25, 25, 3, -1, images_minibosschompermouth_812_10_1, 4};
static Animation anim_minibosschompermouth_812_10 = {&direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_1, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0, &direction_minibosschompermouth_812_10_0};
static Animation * anim_array_minibosschompermouth_812[11] = {&anim_minibosschompermouth_812_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosschompermouth_812_10};
static Animations anim_minibosschompermouth_812 = {11, &anim_array_minibosschompermouth_812[0]};
static bool anim_minibosschompermouth_812_initialized;
class MinibossChomperMouth_812 : public Active
{
public:
    MinibossChomperMouth_812(int x, int y) : Active(x, y, MinibossChomperMouth_812_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_ChomperMouth", 21);
#endif
        this->animations = &anim_minibosschompermouth_812;
        if (!anim_minibosschompermouth_812_initialized) {
            anim_minibosschompermouth_812_initialized = true;
            images_minibosschompermouth_812_0_0[0] = get_internal_image(5155);
            images_minibosschompermouth_812_0_0[1] = get_internal_image(5159);
            images_minibosschompermouth_812_0_0[2] = get_internal_image(5160);
            images_minibosschompermouth_812_0_0[3] = get_internal_image(5161);
            images_minibosschompermouth_812_0_1[0] = get_internal_image(5176);
            images_minibosschompermouth_812_0_1[1] = get_internal_image(7595);
            images_minibosschompermouth_812_0_1[2] = get_internal_image(7963);
            images_minibosschompermouth_812_0_1[3] = get_internal_image(7964);
            images_minibosschompermouth_812_10_0[0] = get_internal_image(5161);
            images_minibosschompermouth_812_10_0[1] = get_internal_image(5160);
            images_minibosschompermouth_812_10_0[2] = get_internal_image(5159);
            images_minibosschompermouth_812_10_0[3] = get_internal_image(5155);
            images_minibosschompermouth_812_10_1[0] = get_internal_image(7964);
            images_minibosschompermouth_812_10_1[1] = get_internal_image(7963);
            images_minibosschompermouth_812_10_1[2] = get_internal_image(7595);
            images_minibosschompermouth_812_10_1[3] = get_internal_image(5176);
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
FrameObject * create_minibosschompermouth_812(int x, int y)
{
    return new (Active::pool.create()) MinibossChomperMouth_812(x, y);
}
static Image* images_breakableaquabrick2_813_0_0[1];
static Direction direction_breakableaquabrick2_813_0_0 = {0, 50, 50, 0, 1, images_breakableaquabrick2_813_0_0, 1};
static Animation anim_breakableaquabrick2_813_0 = {&direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, NULL, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0, &direction_breakableaquabrick2_813_0_0};
static Animation * anim_array_breakableaquabrick2_813[1] = {&anim_breakableaquabrick2_813_0};
static Animations anim_breakableaquabrick2_813 = {1, &anim_array_breakableaquabrick2_813[0]};
static bool anim_breakableaquabrick2_813_initialized;
class BreakableAquaBrick2_813 : public Active
{
public:
    BreakableAquaBrick2_813(int x, int y) : Active(x, y, BreakableAquaBrick2_813_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableAquaBrick 2", 20);
#endif
        this->animations = &anim_breakableaquabrick2_813;
        if (!anim_breakableaquabrick2_813_initialized) {
            anim_breakableaquabrick2_813_initialized = true;
            images_breakableaquabrick2_813_0_0[0] = get_internal_image(8547);
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
FrameObject * create_breakableaquabrick2_813(int x, int y)
{
    return new (Active::pool.create()) BreakableAquaBrick2_813(x, y);
}
static Image* images_switchwallplate_814_0_0[1];
static Direction direction_switchwallplate_814_0_0 = {0, 50, 50, 0, 1, images_switchwallplate_814_0_0, 1};
static Animation anim_switchwallplate_814_0 = {&direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, NULL, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0, &direction_switchwallplate_814_0_0};
static Animation * anim_array_switchwallplate_814[1] = {&anim_switchwallplate_814_0};
static Animations anim_switchwallplate_814 = {1, &anim_array_switchwallplate_814[0]};
static bool anim_switchwallplate_814_initialized;
class SwitchWallPlate_814 : public Active
{
public:
    SwitchWallPlate_814(int x, int y) : Active(x, y, SwitchWallPlate_814_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate", 16);
#endif
        this->animations = &anim_switchwallplate_814;
        if (!anim_switchwallplate_814_initialized) {
            anim_switchwallplate_814_initialized = true;
            images_switchwallplate_814_0_0[0] = get_internal_image(531);
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
FrameObject * create_switchwallplate_814(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate_814(x, y);
}
static Image* images_gimmickrotatingpipebase2_815_0_0[1];
static Direction direction_gimmickrotatingpipebase2_815_0_0 = {0, 50, 50, 0, 1, images_gimmickrotatingpipebase2_815_0_0, 1};
static Animation anim_gimmickrotatingpipebase2_815_0 = {&direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, NULL, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0, &direction_gimmickrotatingpipebase2_815_0_0};
static Animation * anim_array_gimmickrotatingpipebase2_815[1] = {&anim_gimmickrotatingpipebase2_815_0};
static Animations anim_gimmickrotatingpipebase2_815 = {1, &anim_array_gimmickrotatingpipebase2_815[0]};
static bool anim_gimmickrotatingpipebase2_815_initialized;
class GimmickRotatingPipeBase2_815 : public Active
{
public:
    GimmickRotatingPipeBase2_815(int x, int y) : Active(x, y, GimmickRotatingPipeBase2_815_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RotatingPipeBase 2", 26);
#endif
        this->animations = &anim_gimmickrotatingpipebase2_815;
        if (!anim_gimmickrotatingpipebase2_815_initialized) {
            anim_gimmickrotatingpipebase2_815_initialized = true;
            images_gimmickrotatingpipebase2_815_0_0[0] = get_internal_image(1078);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 270);
    }
};
FrameObject * create_gimmickrotatingpipebase2_815(int x, int y)
{
    return new (Active::pool.create()) GimmickRotatingPipeBase2_815(x, y);
}
static Image* images_enemygansekijr_816_0_0[1];
static Direction direction_enemygansekijr_816_0_0 = {0, 50, 50, 0, 1, images_enemygansekijr_816_0_0, 1};
static Image* images_enemygansekijr_816_0_16[1];
static Direction direction_enemygansekijr_816_0_16 = {16, 50, 50, 0, 1, images_enemygansekijr_816_0_16, 1};
static Animation anim_enemygansekijr_816_0 = {&direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, NULL, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, &direction_enemygansekijr_816_0_16, NULL, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0, &direction_enemygansekijr_816_0_0};
static Image* images_enemygansekijr_816_1_0[4];
static Direction direction_enemygansekijr_816_1_0 = {0, 25, 25, 0, -1, images_enemygansekijr_816_1_0, 4};
static Image* images_enemygansekijr_816_1_16[4];
static Direction direction_enemygansekijr_816_1_16 = {16, 25, 25, 0, -1, images_enemygansekijr_816_1_16, 4};
static Animation anim_enemygansekijr_816_1 = {&direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, NULL, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, &direction_enemygansekijr_816_1_16, NULL, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0, &direction_enemygansekijr_816_1_0};
static Image* images_enemygansekijr_816_8_0[1];
static Direction direction_enemygansekijr_816_8_0 = {0, 50, 50, 0, -1, images_enemygansekijr_816_8_0, 1};
static Image* images_enemygansekijr_816_8_16[1];
static Direction direction_enemygansekijr_816_8_16 = {16, 50, 50, 0, -1, images_enemygansekijr_816_8_16, 1};
static Animation anim_enemygansekijr_816_8 = {&direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, NULL, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, &direction_enemygansekijr_816_8_16, NULL, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0, &direction_enemygansekijr_816_8_0};
static Image* images_enemygansekijr_816_10_0[6];
static Direction direction_enemygansekijr_816_10_0 = {0, 25, 25, 5, 1, images_enemygansekijr_816_10_0, 6};
static Image* images_enemygansekijr_816_10_16[6];
static Direction direction_enemygansekijr_816_10_16 = {16, 25, 25, 5, 1, images_enemygansekijr_816_10_16, 6};
static Animation anim_enemygansekijr_816_10 = {&direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, NULL, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, &direction_enemygansekijr_816_10_16, NULL, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0, &direction_enemygansekijr_816_10_0};
static Image* images_enemygansekijr_816_11_0[7];
static Direction direction_enemygansekijr_816_11_0 = {0, 25, 25, 6, 6, images_enemygansekijr_816_11_0, 7};
static Image* images_enemygansekijr_816_11_16[7];
static Direction direction_enemygansekijr_816_11_16 = {16, 25, 25, 6, 6, images_enemygansekijr_816_11_16, 7};
static Animation anim_enemygansekijr_816_11 = {&direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, NULL, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, &direction_enemygansekijr_816_11_16, NULL, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0, &direction_enemygansekijr_816_11_0};
static Animation * anim_array_enemygansekijr_816[12] = {&anim_enemygansekijr_816_0, &anim_enemygansekijr_816_1, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemygansekijr_816_8, NULL, &anim_enemygansekijr_816_10, &anim_enemygansekijr_816_11};
static Animations anim_enemygansekijr_816 = {12, &anim_array_enemygansekijr_816[0]};
static bool anim_enemygansekijr_816_initialized;
class EnemyGansekiJr_816 : public Active
{
public:
    EnemyGansekiJr_816(int x, int y) : Active(x, y, EnemyGansekiJr_816_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_GansekiJr", 15);
#endif
        this->animations = &anim_enemygansekijr_816;
        if (!anim_enemygansekijr_816_initialized) {
            anim_enemygansekijr_816_initialized = true;
            images_enemygansekijr_816_0_0[0] = get_internal_image(4988);
            images_enemygansekijr_816_0_16[0] = get_internal_image(4991);
            images_enemygansekijr_816_1_0[0] = get_internal_image(4993);
            images_enemygansekijr_816_1_0[1] = get_internal_image(4491);
            images_enemygansekijr_816_1_0[2] = get_internal_image(4492);
            images_enemygansekijr_816_1_0[3] = get_internal_image(4493);
            images_enemygansekijr_816_1_16[0] = get_internal_image(5002);
            images_enemygansekijr_816_1_16[1] = get_internal_image(4495);
            images_enemygansekijr_816_1_16[2] = get_internal_image(4496);
            images_enemygansekijr_816_1_16[3] = get_internal_image(4502);
            images_enemygansekijr_816_8_0[0] = get_internal_image(4993);
            images_enemygansekijr_816_8_16[0] = get_internal_image(5002);
            images_enemygansekijr_816_10_0[0] = get_internal_image(4999);
            images_enemygansekijr_816_10_0[1] = get_internal_image(4995);
            images_enemygansekijr_816_10_0[2] = get_internal_image(4997);
            images_enemygansekijr_816_10_0[3] = get_internal_image(4988);
            images_enemygansekijr_816_10_0[4] = get_internal_image(4997);
            images_enemygansekijr_816_10_0[5] = get_internal_image(4988);
            images_enemygansekijr_816_10_16[0] = get_internal_image(5001);
            images_enemygansekijr_816_10_16[1] = get_internal_image(5000);
            images_enemygansekijr_816_10_16[2] = get_internal_image(4990);
            images_enemygansekijr_816_10_16[3] = get_internal_image(4991);
            images_enemygansekijr_816_10_16[4] = get_internal_image(4990);
            images_enemygansekijr_816_10_16[5] = get_internal_image(4991);
            images_enemygansekijr_816_11_0[0] = get_internal_image(4988);
            images_enemygansekijr_816_11_0[1] = get_internal_image(4997);
            images_enemygansekijr_816_11_0[2] = get_internal_image(4988);
            images_enemygansekijr_816_11_0[3] = get_internal_image(4997);
            images_enemygansekijr_816_11_0[4] = get_internal_image(4995);
            images_enemygansekijr_816_11_0[5] = get_internal_image(4999);
            images_enemygansekijr_816_11_0[6] = get_internal_image(4993);
            images_enemygansekijr_816_11_16[0] = get_internal_image(4991);
            images_enemygansekijr_816_11_16[1] = get_internal_image(4990);
            images_enemygansekijr_816_11_16[2] = get_internal_image(4991);
            images_enemygansekijr_816_11_16[3] = get_internal_image(4990);
            images_enemygansekijr_816_11_16[4] = get_internal_image(5000);
            images_enemygansekijr_816_11_16[5] = get_internal_image(5001);
            images_enemygansekijr_816_11_16[6] = get_internal_image(5002);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(14);
        create_alterables();
        alterables->values.set(0, 8);
        alterables->values.set(1, 5);
    }
};
FrameObject * create_enemygansekijr_816(int x, int y)
{
    return new (Active::pool.create()) EnemyGansekiJr_816(x, y);
}
static Image* images_gimmickswingspawner1_817_0_0[1];
static Direction direction_gimmickswingspawner1_817_0_0 = {0, 50, 50, 0, 1, images_gimmickswingspawner1_817_0_0, 1};
static Animation anim_gimmickswingspawner1_817_0 = {&direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, NULL, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0, &direction_gimmickswingspawner1_817_0_0};
static Animation * anim_array_gimmickswingspawner1_817[1] = {&anim_gimmickswingspawner1_817_0};
static Animations anim_gimmickswingspawner1_817 = {1, &anim_array_gimmickswingspawner1_817[0]};
static bool anim_gimmickswingspawner1_817_initialized;
class GimmickSwingSpawner1_817 : public Active
{
public:
    GimmickSwingSpawner1_817(int x, int y) : Active(x, y, GimmickSwingSpawner1_817_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Spawner 1", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickswingspawner1_817;
        if (!anim_gimmickswingspawner1_817_initialized) {
            anim_gimmickswingspawner1_817_initialized = true;
            images_gimmickswingspawner1_817_0_0[0] = get_internal_image(7992);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 8);
        alterables->values.set(1, 180);
    }
};
FrameObject * create_gimmickswingspawner1_817(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingSpawner1_817(x, y);
}
static Image* images_minibosschomperhitbox_818_0_0[1];
static Direction direction_minibosschomperhitbox_818_0_0 = {0, 50, 50, 0, 1, images_minibosschomperhitbox_818_0_0, 1};
static Animation anim_minibosschomperhitbox_818_0 = {&direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, NULL, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0, &direction_minibosschomperhitbox_818_0_0};
static Animation * anim_array_minibosschomperhitbox_818[1] = {&anim_minibosschomperhitbox_818_0};
static Animations anim_minibosschomperhitbox_818 = {1, &anim_array_minibosschomperhitbox_818[0]};
static bool anim_minibosschomperhitbox_818_initialized;
class MinibossChomperHitbox_818 : public Active
{
public:
    MinibossChomperHitbox_818(int x, int y) : Active(x, y, MinibossChomperHitbox_818_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_ChomperHitbox", 22);
#endif
        set_visible(false);
        this->animations = &anim_minibosschomperhitbox_818;
        if (!anim_minibosschomperhitbox_818_initialized) {
            anim_minibosschomperhitbox_818_initialized = true;
            images_minibosschomperhitbox_818_0_0[0] = get_internal_image(7404);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
    }
};
FrameObject * create_minibosschomperhitbox_818(int x, int y)
{
    return new (Active::pool.create()) MinibossChomperHitbox_818(x, y);
}
class AquaLargePipe1_819 : public Backdrop
{
public:
    AquaLargePipe1_819(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3624);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe1_819(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe1_819(x, y);
}
class AquaLargePipe6_820 : public Backdrop
{
public:
    AquaLargePipe6_820(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3793);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe6_820(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe6_820(x, y);
}
class AquaLargePipe3_821 : public Backdrop
{
public:
    AquaLargePipe3_821(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2866);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe3_821(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe3_821(x, y);
}
class AquaLargePipe5_822 : public Backdrop
{
public:
    AquaLargePipe5_822(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3784);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe5_822(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe5_822(x, y);
}
class AquaLargePipe8_823 : public Backdrop
{
public:
    AquaLargePipe8_823(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 8", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1942);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aqualargepipe8_823(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe8_823(x, y);
}
class TeeterTotterAxle_824 : public Backdrop
{
public:
    TeeterTotterAxle_824(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TeeterTotter_Axle", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4722);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_teetertotteraxle_824(int x, int y)
{
    return new (Backdrop::pool.create()) TeeterTotterAxle_824(x, y);
}
class LevelParallaxPiece6_825 : public SystemBox
{
public:
    LevelParallaxPiece6_825(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_825_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(2512);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_825(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_825(x, y);
}
class LevelParallaxPiece8_826 : public SystemBox
{
public:
    LevelParallaxPiece8_826(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_826_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(8308);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_826(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_826(x, y);
}
class LevelParallaxPiece7_827 : public SystemBox
{
public:
    LevelParallaxPiece7_827(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_827_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 256;
        type = PATTERN_IMAGE;
        image = get_internal_image(4846);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_827(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_827(x, y);
}
static Image* images_levelaxelplatform1_828_0_0[7];
static Direction direction_levelaxelplatform1_828_0_0 = {0, 25, 25, 0, -1, images_levelaxelplatform1_828_0_0, 7};
static Animation anim_levelaxelplatform1_828_0 = {&direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, NULL, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0, &direction_levelaxelplatform1_828_0_0};
static Animation * anim_array_levelaxelplatform1_828[1] = {&anim_levelaxelplatform1_828_0};
static Animations anim_levelaxelplatform1_828 = {1, &anim_array_levelaxelplatform1_828[0]};
static bool anim_levelaxelplatform1_828_initialized;
class LevelAxelPlatform1_828 : public Active
{
public:
    LevelAxelPlatform1_828(int x, int y) : Active(x, y, LevelAxelPlatform1_828_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_AxelPlatform 1", 20);
#endif
        this->animations = &anim_levelaxelplatform1_828;
        if (!anim_levelaxelplatform1_828_initialized) {
            anim_levelaxelplatform1_828_initialized = true;
            images_levelaxelplatform1_828_0_0[0] = get_internal_image(4828);
            images_levelaxelplatform1_828_0_0[1] = get_internal_image(4823);
            images_levelaxelplatform1_828_0_0[2] = get_internal_image(4819);
            images_levelaxelplatform1_828_0_0[3] = get_internal_image(4820);
            images_levelaxelplatform1_828_0_0[4] = get_internal_image(4821);
            images_levelaxelplatform1_828_0_0[5] = get_internal_image(4822);
            images_levelaxelplatform1_828_0_0[6] = get_internal_image(4818);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
    }
};
FrameObject * create_levelaxelplatform1_828(int x, int y)
{
    return new (Active::pool.create()) LevelAxelPlatform1_828(x, y);
}
static Image* images_levelaxelplatform2_829_0_0[7];
static Direction direction_levelaxelplatform2_829_0_0 = {0, 25, 25, 0, -1, images_levelaxelplatform2_829_0_0, 7};
static Animation anim_levelaxelplatform2_829_0 = {&direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, NULL, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0, &direction_levelaxelplatform2_829_0_0};
static Animation * anim_array_levelaxelplatform2_829[1] = {&anim_levelaxelplatform2_829_0};
static Animations anim_levelaxelplatform2_829 = {1, &anim_array_levelaxelplatform2_829[0]};
static bool anim_levelaxelplatform2_829_initialized;
class LevelAxelPlatform2_829 : public Active
{
public:
    LevelAxelPlatform2_829(int x, int y) : Active(x, y, LevelAxelPlatform2_829_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_AxelPlatform 2", 20);
#endif
        this->animations = &anim_levelaxelplatform2_829;
        if (!anim_levelaxelplatform2_829_initialized) {
            anim_levelaxelplatform2_829_initialized = true;
            images_levelaxelplatform2_829_0_0[0] = get_internal_image(4754);
            images_levelaxelplatform2_829_0_0[1] = get_internal_image(4755);
            images_levelaxelplatform2_829_0_0[2] = get_internal_image(4817);
            images_levelaxelplatform2_829_0_0[3] = get_internal_image(4575);
            images_levelaxelplatform2_829_0_0[4] = get_internal_image(4757);
            images_levelaxelplatform2_829_0_0[5] = get_internal_image(4756);
            images_levelaxelplatform2_829_0_0[6] = get_internal_image(4811);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 180);
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
    }
};
FrameObject * create_levelaxelplatform2_829(int x, int y)
{
    return new (Active::pool.create()) LevelAxelPlatform2_829(x, y);
}
static Image* images_gimmickswingspawner1_830_0_0[1];
static Direction direction_gimmickswingspawner1_830_0_0 = {0, 50, 50, 0, 1, images_gimmickswingspawner1_830_0_0, 1};
static Animation anim_gimmickswingspawner1_830_0 = {&direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, NULL, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0, &direction_gimmickswingspawner1_830_0_0};
static Animation * anim_array_gimmickswingspawner1_830[1] = {&anim_gimmickswingspawner1_830_0};
static Animations anim_gimmickswingspawner1_830 = {1, &anim_array_gimmickswingspawner1_830[0]};
static bool anim_gimmickswingspawner1_830_initialized;
class GimmickSwingSpawner1_830 : public Active
{
public:
    GimmickSwingSpawner1_830(int x, int y) : Active(x, y, GimmickSwingSpawner1_830_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Spawner 1", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickswingspawner1_830;
        if (!anim_gimmickswingspawner1_830_initialized) {
            anim_gimmickswingspawner1_830_initialized = true;
            images_gimmickswingspawner1_830_0_0[0] = get_internal_image(7992);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 6);
        alterables->values.set(1, 180);
    }
};
FrameObject * create_gimmickswingspawner1_830(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingSpawner1_830(x, y);
}
static Image* images_gimmickswingspawner2_831_0_0[1];
static Direction direction_gimmickswingspawner2_831_0_0 = {0, 50, 50, 0, 1, images_gimmickswingspawner2_831_0_0, 1};
static Animation anim_gimmickswingspawner2_831_0 = {&direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, NULL, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0, &direction_gimmickswingspawner2_831_0_0};
static Animation * anim_array_gimmickswingspawner2_831[1] = {&anim_gimmickswingspawner2_831_0};
static Animations anim_gimmickswingspawner2_831 = {1, &anim_array_gimmickswingspawner2_831[0]};
static bool anim_gimmickswingspawner2_831_initialized;
class GimmickSwingSpawner2_831 : public Active
{
public:
    GimmickSwingSpawner2_831(int x, int y) : Active(x, y, GimmickSwingSpawner2_831_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Spawner 2", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickswingspawner2_831;
        if (!anim_gimmickswingspawner2_831_initialized) {
            anim_gimmickswingspawner2_831_initialized = true;
            images_gimmickswingspawner2_831_0_0[0] = get_internal_image(7992);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 6);
        alterables->values.set(1, 220);
    }
};
FrameObject * create_gimmickswingspawner2_831(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingSpawner2_831(x, y);
}
static Image* images_levelcrusher1_832_0_0[1];
static Direction direction_levelcrusher1_832_0_0 = {0, 0, 0, 0, 1, images_levelcrusher1_832_0_0, 1};
static Animation anim_levelcrusher1_832_0 = {&direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, NULL, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0, &direction_levelcrusher1_832_0_0};
static Animation * anim_array_levelcrusher1_832[1] = {&anim_levelcrusher1_832_0};
static Animations anim_levelcrusher1_832 = {1, &anim_array_levelcrusher1_832[0]};
static bool anim_levelcrusher1_832_initialized;
class LevelCrusher1_832 : public Active
{
public:
    LevelCrusher1_832(int x, int y) : Active(x, y, LevelCrusher1_832_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_Crusher 1", 15);
#endif
        this->animations = &anim_levelcrusher1_832;
        if (!anim_levelcrusher1_832_initialized) {
            anim_levelcrusher1_832_initialized = true;
            images_levelcrusher1_832_0_0[0] = get_internal_image(8295);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -128);
        alterables->values.set(2, 128);
        alterables->values.set(3, 40);
        alterables->values.set(4, 1);
    }
};
FrameObject * create_levelcrusher1_832(int x, int y)
{
    return new (Active::pool.create()) LevelCrusher1_832(x, y);
}
static Image* images_levelcrusher2_833_0_0[1];
static Direction direction_levelcrusher2_833_0_0 = {0, 0, 0, 0, 1, images_levelcrusher2_833_0_0, 1};
static Animation anim_levelcrusher2_833_0 = {&direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, NULL, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0, &direction_levelcrusher2_833_0_0};
static Animation * anim_array_levelcrusher2_833[1] = {&anim_levelcrusher2_833_0};
static Animations anim_levelcrusher2_833 = {1, &anim_array_levelcrusher2_833[0]};
static bool anim_levelcrusher2_833_initialized;
class LevelCrusher2_833 : public Active
{
public:
    LevelCrusher2_833(int x, int y) : Active(x, y, LevelCrusher2_833_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_Crusher 2", 15);
#endif
        this->animations = &anim_levelcrusher2_833;
        if (!anim_levelcrusher2_833_initialized) {
            anim_levelcrusher2_833_initialized = true;
            images_levelcrusher2_833_0_0[0] = get_internal_image(8295);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -32);
        alterables->values.set(2, 128);
        alterables->values.set(3, 40);
        alterables->values.set(4, 1);
    }
};
FrameObject * create_levelcrusher2_833(int x, int y)
{
    return new (Active::pool.create()) LevelCrusher2_833(x, y);
}
class LevelParallaxPiece6_834 : public SystemBox
{
public:
    LevelParallaxPiece6_834(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_834_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(4844);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_834(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_834(x, y);
}
class LevelParallaxPiece9_835 : public SystemBox
{
public:
    LevelParallaxPiece9_835(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_835_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(686);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_835(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_835(x, y);
}
class LevelParallaxPiece10_836 : public SystemBox
{
public:
    LevelParallaxPiece10_836(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_836_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 512;
        type = PATTERN_IMAGE;
        image = get_internal_image(3009);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_836(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_836(x, y);
}
static Image* images_bossbubblebomb_838_0_0[2];
static Direction direction_bossbubblebomb_838_0_0 = {0, 0, 0, 0, 1, images_bossbubblebomb_838_0_0, 2};
static Animation anim_bossbubblebomb_838_0 = {&direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, NULL, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0, &direction_bossbubblebomb_838_0_0};
static Animation * anim_array_bossbubblebomb_838[1] = {&anim_bossbubblebomb_838_0};
static Animations anim_bossbubblebomb_838 = {1, &anim_array_bossbubblebomb_838[0]};
static bool anim_bossbubblebomb_838_initialized;
class BossBubbleBomb_838 : public Active
{
public:
    BossBubbleBomb_838(int x, int y) : Active(x, y, BossBubbleBomb_838_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_BubbleBomb", 15);
#endif
        this->animations = &anim_bossbubblebomb_838;
        if (!anim_bossbubblebomb_838_initialized) {
            anim_bossbubblebomb_838_initialized = true;
            images_bossbubblebomb_838_0_0[0] = get_internal_image(8843);
            images_bossbubblebomb_838_0_0[1] = get_internal_image(8844);
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
FrameObject * create_bossbubblebomb_838(int x, int y)
{
    return new (Active::pool.create()) BossBubbleBomb_838(x, y);
}
static Image* images_slimefloor_839_0_0[1];
static Direction direction_slimefloor_839_0_0 = {0, 50, 50, 0, 1, images_slimefloor_839_0_0, 1};
static Animation anim_slimefloor_839_0 = {&direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, NULL, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0, &direction_slimefloor_839_0_0};
static Animation * anim_array_slimefloor_839[1] = {&anim_slimefloor_839_0};
static Animations anim_slimefloor_839 = {1, &anim_array_slimefloor_839[0]};
static bool anim_slimefloor_839_initialized;
class SlimeFloor_839 : public Active
{
public:
    SlimeFloor_839(int x, int y) : Active(x, y, SlimeFloor_839_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("SlimeFloor", 10);
#endif
        this->animations = &anim_slimefloor_839;
        if (!anim_slimefloor_839_initialized) {
            anim_slimefloor_839_initialized = true;
            images_slimefloor_839_0_0[0] = get_internal_image(7384);
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
FrameObject * create_slimefloor_839(int x, int y)
{
    return new (Active::pool.create()) SlimeFloor_839(x, y);
}
static Image* images_bosschompersnakesegment_840_0_0[1];
static Direction direction_bosschompersnakesegment_840_0_0 = {0, 50, 50, 0, 1, images_bosschompersnakesegment_840_0_0, 1};
static Image* images_bosschompersnakesegment_840_0_1[1];
static Direction direction_bosschompersnakesegment_840_0_1 = {1, 50, 50, 0, 1, images_bosschompersnakesegment_840_0_1, 1};
static Animation anim_bosschompersnakesegment_840_0 = {&direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_1, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0, &direction_bosschompersnakesegment_840_0_0};
static Animation * anim_array_bosschompersnakesegment_840[1] = {&anim_bosschompersnakesegment_840_0};
static Animations anim_bosschompersnakesegment_840 = {1, &anim_array_bosschompersnakesegment_840[0]};
static bool anim_bosschompersnakesegment_840_initialized;
class BossChomperSnakeSegment_840 : public Active
{
public:
    BossChomperSnakeSegment_840(int x, int y) : Active(x, y, BossChomperSnakeSegment_840_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChomperSnakeSegment", 24);
#endif
        set_visible(false);
        this->animations = &anim_bosschompersnakesegment_840;
        if (!anim_bosschompersnakesegment_840_initialized) {
            anim_bosschompersnakesegment_840_initialized = true;
            images_bosschompersnakesegment_840_0_0[0] = get_internal_image(7399);
            images_bosschompersnakesegment_840_0_1[0] = get_internal_image(8864);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 20);
    }
};
FrameObject * create_bosschompersnakesegment_840(int x, int y)
{
    return new (Active::pool.create()) BossChomperSnakeSegment_840(x, y);
}
static Image* images_bosschompersnake_841_0_0[1];
static Direction direction_bosschompersnake_841_0_0 = {0, 50, 50, 0, 1, images_bosschompersnake_841_0_0, 1};
static Animation anim_bosschompersnake_841_0 = {&direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, NULL, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0, &direction_bosschompersnake_841_0_0};
static Image* images_bosschompersnake_841_7_0[1];
static Direction direction_bosschompersnake_841_7_0 = {0, 50, 50, 0, -1, images_bosschompersnake_841_7_0, 1};
static Image* images_bosschompersnake_841_7_1[1];
static Direction direction_bosschompersnake_841_7_1 = {1, 50, 50, 0, -1, images_bosschompersnake_841_7_1, 1};
static Animation anim_bosschompersnake_841_7 = {&direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_1, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0, &direction_bosschompersnake_841_7_0};
static Animation * anim_array_bosschompersnake_841[8] = {&anim_bosschompersnake_841_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosschompersnake_841_7};
static Animations anim_bosschompersnake_841 = {8, &anim_array_bosschompersnake_841[0]};
static bool anim_bosschompersnake_841_initialized;
class BossChomperSnake_841 : public Active
{
public:
    BossChomperSnake_841(int x, int y) : Active(x, y, BossChomperSnake_841_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChomperSnake", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosschompersnake_841;
        if (!anim_bosschompersnake_841_initialized) {
            anim_bosschompersnake_841_initialized = true;
            images_bosschompersnake_841_0_0[0] = get_internal_image(7408);
            images_bosschompersnake_841_7_0[0] = get_internal_image(7408);
            images_bosschompersnake_841_7_1[0] = get_internal_image(7390);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 40);
        alterables->values.set(8, -60);
        alterables->values.set(11, -1);
        alterables->values.set(12, 20);
    }
};
FrameObject * create_bosschompersnake_841(int x, int y)
{
    return new (Active::pool.create()) BossChomperSnake_841(x, y);
}
static Image* images_bosschompersnakemouth_842_0_0[4];
static Direction direction_bosschompersnakemouth_842_0_0 = {0, 25, 25, 3, -1, images_bosschompersnakemouth_842_0_0, 4};
static Image* images_bosschompersnakemouth_842_0_1[4];
static Direction direction_bosschompersnakemouth_842_0_1 = {1, 25, 25, 3, -1, images_bosschompersnakemouth_842_0_1, 4};
static Image* images_bosschompersnakemouth_842_0_16[4];
static Direction direction_bosschompersnakemouth_842_0_16 = {16, 25, 25, 3, -1, images_bosschompersnakemouth_842_0_16, 4};
static Image* images_bosschompersnakemouth_842_0_17[4];
static Direction direction_bosschompersnakemouth_842_0_17 = {17, 25, 25, 3, -1, images_bosschompersnakemouth_842_0_17, 4};
static Animation anim_bosschompersnakemouth_842_0 = {&direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_1, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_16, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_17, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0, &direction_bosschompersnakemouth_842_0_0};
static Image* images_bosschompersnakemouth_842_10_0[4];
static Direction direction_bosschompersnakemouth_842_10_0 = {0, 25, 25, 3, -1, images_bosschompersnakemouth_842_10_0, 4};
static Image* images_bosschompersnakemouth_842_10_1[4];
static Direction direction_bosschompersnakemouth_842_10_1 = {1, 25, 25, 3, -1, images_bosschompersnakemouth_842_10_1, 4};
static Image* images_bosschompersnakemouth_842_10_16[4];
static Direction direction_bosschompersnakemouth_842_10_16 = {16, 25, 25, 3, -1, images_bosschompersnakemouth_842_10_16, 4};
static Image* images_bosschompersnakemouth_842_10_17[4];
static Direction direction_bosschompersnakemouth_842_10_17 = {17, 25, 25, 3, -1, images_bosschompersnakemouth_842_10_17, 4};
static Animation anim_bosschompersnakemouth_842_10 = {&direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_1, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_16, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_17, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0, &direction_bosschompersnakemouth_842_10_0};
static Animation * anim_array_bosschompersnakemouth_842[11] = {&anim_bosschompersnakemouth_842_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosschompersnakemouth_842_10};
static Animations anim_bosschompersnakemouth_842 = {11, &anim_array_bosschompersnakemouth_842[0]};
static bool anim_bosschompersnakemouth_842_initialized;
class BossChomperSnakeMouth_842 : public Active
{
public:
    BossChomperSnakeMouth_842(int x, int y) : Active(x, y, BossChomperSnakeMouth_842_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ChomperSnakeMouth", 22);
#endif
        this->animations = &anim_bosschompersnakemouth_842;
        if (!anim_bosschompersnakemouth_842_initialized) {
            anim_bosschompersnakemouth_842_initialized = true;
            images_bosschompersnakemouth_842_0_0[0] = get_internal_image(8845);
            images_bosschompersnakemouth_842_0_0[1] = get_internal_image(8846);
            images_bosschompersnakemouth_842_0_0[2] = get_internal_image(8847);
            images_bosschompersnakemouth_842_0_0[3] = get_internal_image(8848);
            images_bosschompersnakemouth_842_0_1[0] = get_internal_image(8849);
            images_bosschompersnakemouth_842_0_1[1] = get_internal_image(8850);
            images_bosschompersnakemouth_842_0_1[2] = get_internal_image(8855);
            images_bosschompersnakemouth_842_0_1[3] = get_internal_image(8856);
            images_bosschompersnakemouth_842_0_16[0] = get_internal_image(5155);
            images_bosschompersnakemouth_842_0_16[1] = get_internal_image(5159);
            images_bosschompersnakemouth_842_0_16[2] = get_internal_image(5160);
            images_bosschompersnakemouth_842_0_16[3] = get_internal_image(5161);
            images_bosschompersnakemouth_842_0_17[0] = get_internal_image(5176);
            images_bosschompersnakemouth_842_0_17[1] = get_internal_image(7595);
            images_bosschompersnakemouth_842_0_17[2] = get_internal_image(7963);
            images_bosschompersnakemouth_842_0_17[3] = get_internal_image(7964);
            images_bosschompersnakemouth_842_10_0[0] = get_internal_image(8848);
            images_bosschompersnakemouth_842_10_0[1] = get_internal_image(8847);
            images_bosschompersnakemouth_842_10_0[2] = get_internal_image(8846);
            images_bosschompersnakemouth_842_10_0[3] = get_internal_image(8845);
            images_bosschompersnakemouth_842_10_1[0] = get_internal_image(8856);
            images_bosschompersnakemouth_842_10_1[1] = get_internal_image(8855);
            images_bosschompersnakemouth_842_10_1[2] = get_internal_image(8850);
            images_bosschompersnakemouth_842_10_1[3] = get_internal_image(8849);
            images_bosschompersnakemouth_842_10_16[0] = get_internal_image(5161);
            images_bosschompersnakemouth_842_10_16[1] = get_internal_image(5160);
            images_bosschompersnakemouth_842_10_16[2] = get_internal_image(5159);
            images_bosschompersnakemouth_842_10_16[3] = get_internal_image(5155);
            images_bosschompersnakemouth_842_10_17[0] = get_internal_image(7964);
            images_bosschompersnakemouth_842_10_17[1] = get_internal_image(7963);
            images_bosschompersnakemouth_842_10_17[2] = get_internal_image(7595);
            images_bosschompersnakemouth_842_10_17[3] = get_internal_image(5176);
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
FrameObject * create_bosschompersnakemouth_842(int x, int y)
{
    return new (Active::pool.create()) BossChomperSnakeMouth_842(x, y);
}
static Image* images_slimeraft_843_0_0[6];
static Direction direction_slimeraft_843_0_0 = {0, 20, 20, 0, -1, images_slimeraft_843_0_0, 6};
static Animation anim_slimeraft_843_0 = {&direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, NULL, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0, &direction_slimeraft_843_0_0};
static Animation * anim_array_slimeraft_843[1] = {&anim_slimeraft_843_0};
static Animations anim_slimeraft_843 = {1, &anim_array_slimeraft_843[0]};
static bool anim_slimeraft_843_initialized;
class SlimeRaft_843 : public Active
{
public:
    SlimeRaft_843(int x, int y) : Active(x, y, SlimeRaft_843_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("SlimeRaft", 9);
#endif
        this->animations = &anim_slimeraft_843;
        if (!anim_slimeraft_843_initialized) {
            anim_slimeraft_843_initialized = true;
            images_slimeraft_843_0_0[0] = get_internal_image(8851);
            images_slimeraft_843_0_0[1] = get_internal_image(8852);
            images_slimeraft_843_0_0[2] = get_internal_image(8851);
            images_slimeraft_843_0_0[3] = get_internal_image(8853);
            images_slimeraft_843_0_0[4] = get_internal_image(8854);
            images_slimeraft_843_0_0[5] = get_internal_image(8853);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 264);
    }
};
FrameObject * create_slimeraft_843(int x, int y)
{
    return new (Active::pool.create()) SlimeRaft_843(x, y);
}
static Image* images_levelaxelplatform3_844_0_0[7];
static Direction direction_levelaxelplatform3_844_0_0 = {0, 25, 25, 0, -1, images_levelaxelplatform3_844_0_0, 7};
static Animation anim_levelaxelplatform3_844_0 = {&direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, NULL, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0, &direction_levelaxelplatform3_844_0_0};
static Animation * anim_array_levelaxelplatform3_844[1] = {&anim_levelaxelplatform3_844_0};
static Animations anim_levelaxelplatform3_844 = {1, &anim_array_levelaxelplatform3_844[0]};
static bool anim_levelaxelplatform3_844_initialized;
class LevelAxelPlatform3_844 : public Active
{
public:
    LevelAxelPlatform3_844(int x, int y) : Active(x, y, LevelAxelPlatform3_844_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_AxelPlatform 3", 20);
#endif
        this->animations = &anim_levelaxelplatform3_844;
        if (!anim_levelaxelplatform3_844_initialized) {
            anim_levelaxelplatform3_844_initialized = true;
            images_levelaxelplatform3_844_0_0[0] = get_internal_image(4754);
            images_levelaxelplatform3_844_0_0[1] = get_internal_image(4755);
            images_levelaxelplatform3_844_0_0[2] = get_internal_image(4817);
            images_levelaxelplatform3_844_0_0[3] = get_internal_image(4575);
            images_levelaxelplatform3_844_0_0[4] = get_internal_image(4757);
            images_levelaxelplatform3_844_0_0[5] = get_internal_image(4756);
            images_levelaxelplatform3_844_0_0[6] = get_internal_image(4811);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 3);
        alterables->values.set(2, 64);
    }
};
FrameObject * create_levelaxelplatform3_844(int x, int y)
{
    return new (Active::pool.create()) LevelAxelPlatform3_844(x, y);
}
static Image* images_scrollingbrick_845_0_0[1];
static Direction direction_scrollingbrick_845_0_0 = {0, 50, 50, 0, 1, images_scrollingbrick_845_0_0, 1};
static Animation anim_scrollingbrick_845_0 = {&direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, NULL, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0, &direction_scrollingbrick_845_0_0};
static Animation * anim_array_scrollingbrick_845[1] = {&anim_scrollingbrick_845_0};
static Animations anim_scrollingbrick_845 = {1, &anim_array_scrollingbrick_845[0]};
static bool anim_scrollingbrick_845_initialized;
class ScrollingBrick_845 : public Active
{
public:
    ScrollingBrick_845(int x, int y) : Active(x, y, ScrollingBrick_845_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ScrollingBrick", 14);
#endif
        this->animations = &anim_scrollingbrick_845;
        if (!anim_scrollingbrick_845_initialized) {
            anim_scrollingbrick_845_initialized = true;
            images_scrollingbrick_845_0_0[0] = get_internal_image(132);
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
FrameObject * create_scrollingbrick_845(int x, int y)
{
    return new (Active::pool.create()) ScrollingBrick_845(x, y);
}
static Image* images_levelcardactclear4_846_0_0[1];
static Direction direction_levelcardactclear4_846_0_0 = {0, 50, 50, 0, 1, images_levelcardactclear4_846_0_0, 1};
static Animation anim_levelcardactclear4_846_0 = {&direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, NULL, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0, &direction_levelcardactclear4_846_0_0};
static Image* images_levelcardactclear4_846_7_0[2];
static Direction direction_levelcardactclear4_846_7_0 = {0, 50, 50, 0, 8, images_levelcardactclear4_846_7_0, 2};
static Animation anim_levelcardactclear4_846_7 = {&direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, NULL, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0, &direction_levelcardactclear4_846_7_0};
static Animation * anim_array_levelcardactclear4_846[8] = {&anim_levelcardactclear4_846_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_levelcardactclear4_846_7};
static Animations anim_levelcardactclear4_846 = {8, &anim_array_levelcardactclear4_846[0]};
static bool anim_levelcardactclear4_846_initialized;
class LevelCardActClear4_846 : public Active
{
public:
    LevelCardActClear4_846(int x, int y) : Active(x, y, LevelCardActClear4_846_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_ActClear 4", 20);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardactclear4_846;
        if (!anim_levelcardactclear4_846_initialized) {
            anim_levelcardactclear4_846_initialized = true;
            images_levelcardactclear4_846_0_0[0] = get_internal_image(10948);
            images_levelcardactclear4_846_7_0[0] = get_internal_image(10764);
            images_levelcardactclear4_846_7_0[1] = get_internal_image(10948);
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
        ((BallMovement*)movement)->set_max_speed(56);
        ((BallMovement*)movement)->set_deceleration(22);
        create_alterables();
    }
};
FrameObject * create_levelcardactclear4_846(int x, int y)
{
    return new (Active::pool.create()) LevelCardActClear4_846(x, y);
}
static Image* images_levelcardactclear1_847_0_0[1];
static Direction direction_levelcardactclear1_847_0_0 = {0, 50, 50, 0, 1, images_levelcardactclear1_847_0_0, 1};
static Animation anim_levelcardactclear1_847_0 = {&direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, NULL, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0, &direction_levelcardactclear1_847_0_0};
static Image* images_levelcardactclear1_847_7_0[22];
static Direction direction_levelcardactclear1_847_7_0 = {0, 100, 100, 21, 20, images_levelcardactclear1_847_7_0, 22};
static Animation anim_levelcardactclear1_847_7 = {&direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, NULL, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0, &direction_levelcardactclear1_847_7_0};
static Image* images_levelcardactclear1_847_8_0[1];
static Direction direction_levelcardactclear1_847_8_0 = {0, 25, 25, 0, 20, images_levelcardactclear1_847_8_0, 1};
static Animation anim_levelcardactclear1_847_8 = {&direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, NULL, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0, &direction_levelcardactclear1_847_8_0};
static Animation * anim_array_levelcardactclear1_847[9] = {&anim_levelcardactclear1_847_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_levelcardactclear1_847_7, &anim_levelcardactclear1_847_8};
static Animations anim_levelcardactclear1_847 = {9, &anim_array_levelcardactclear1_847[0]};
static bool anim_levelcardactclear1_847_initialized;
class LevelCardActClear1_847 : public Active
{
public:
    LevelCardActClear1_847(int x, int y) : Active(x, y, LevelCardActClear1_847_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_ActClear1", 19);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardactclear1_847;
        if (!anim_levelcardactclear1_847_initialized) {
            anim_levelcardactclear1_847_initialized = true;
            images_levelcardactclear1_847_0_0[0] = get_internal_image(7985);
            images_levelcardactclear1_847_7_0[0] = get_internal_image(2397);
            images_levelcardactclear1_847_7_0[1] = get_internal_image(2393);
            images_levelcardactclear1_847_7_0[2] = get_internal_image(2396);
            images_levelcardactclear1_847_7_0[3] = get_internal_image(1460);
            images_levelcardactclear1_847_7_0[4] = get_internal_image(2266);
            images_levelcardactclear1_847_7_0[5] = get_internal_image(2034);
            images_levelcardactclear1_847_7_0[6] = get_internal_image(1354);
            images_levelcardactclear1_847_7_0[7] = get_internal_image(1637);
            images_levelcardactclear1_847_7_0[8] = get_internal_image(367);
            images_levelcardactclear1_847_7_0[9] = get_internal_image(331);
            images_levelcardactclear1_847_7_0[10] = get_internal_image(100);
            images_levelcardactclear1_847_7_0[11] = get_internal_image(4209);
            images_levelcardactclear1_847_7_0[12] = get_internal_image(74);
            images_levelcardactclear1_847_7_0[13] = get_internal_image(3610);
            images_levelcardactclear1_847_7_0[14] = get_internal_image(3612);
            images_levelcardactclear1_847_7_0[15] = get_internal_image(3759);
            images_levelcardactclear1_847_7_0[16] = get_internal_image(4203);
            images_levelcardactclear1_847_7_0[17] = get_internal_image(4204);
            images_levelcardactclear1_847_7_0[18] = get_internal_image(4206);
            images_levelcardactclear1_847_7_0[19] = get_internal_image(4207);
            images_levelcardactclear1_847_7_0[20] = get_internal_image(344);
            images_levelcardactclear1_847_7_0[21] = get_internal_image(7985);
            images_levelcardactclear1_847_8_0[0] = get_internal_image(7985);
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
        ((BallMovement*)movement)->set_max_speed(26);
        ((BallMovement*)movement)->set_deceleration(20);
        create_alterables();
    }
};
FrameObject * create_levelcardactclear1_847(int x, int y)
{
    return new (Active::pool.create()) LevelCardActClear1_847(x, y);
}
static Image* images_levelcardactclear2_848_0_0[1];
static Direction direction_levelcardactclear2_848_0_0 = {0, 50, 50, 0, 1, images_levelcardactclear2_848_0_0, 1};
static Animation anim_levelcardactclear2_848_0 = {&direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, NULL, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0, &direction_levelcardactclear2_848_0_0};
static Animation * anim_array_levelcardactclear2_848[1] = {&anim_levelcardactclear2_848_0};
static Animations anim_levelcardactclear2_848 = {1, &anim_array_levelcardactclear2_848[0]};
static bool anim_levelcardactclear2_848_initialized;
class LevelCardActClear2_848 : public Active
{
public:
    LevelCardActClear2_848(int x, int y) : Active(x, y, LevelCardActClear2_848_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_ActClear2", 19);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardactclear2_848;
        if (!anim_levelcardactclear2_848_initialized) {
            anim_levelcardactclear2_848_initialized = true;
            images_levelcardactclear2_848_0_0[0] = get_internal_image(10964);
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
FrameObject * create_levelcardactclear2_848(int x, int y)
{
    return new (Active::pool.create()) LevelCardActClear2_848(x, y);
}
static Image* images_levelcardactclear3_849_0_0[1];
static Direction direction_levelcardactclear3_849_0_0 = {0, 50, 50, 0, 1, images_levelcardactclear3_849_0_0, 1};
static Animation anim_levelcardactclear3_849_0 = {&direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, NULL, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0, &direction_levelcardactclear3_849_0_0};
static Image* images_levelcardactclear3_849_7_0[6];
static Direction direction_levelcardactclear3_849_7_0 = {0, 4, 4, 0, 1, images_levelcardactclear3_849_7_0, 6};
static Animation anim_levelcardactclear3_849_7 = {&direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, NULL, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0, &direction_levelcardactclear3_849_7_0};
static Animation * anim_array_levelcardactclear3_849[8] = {&anim_levelcardactclear3_849_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_levelcardactclear3_849_7};
static Animations anim_levelcardactclear3_849 = {8, &anim_array_levelcardactclear3_849[0]};
static bool anim_levelcardactclear3_849_initialized;
class LevelCardActClear3_849 : public Active
{
public:
    LevelCardActClear3_849(int x, int y) : Active(x, y, LevelCardActClear3_849_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_ActClear 3", 20);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardactclear3_849;
        if (!anim_levelcardactclear3_849_initialized) {
            anim_levelcardactclear3_849_initialized = true;
            images_levelcardactclear3_849_0_0[0] = get_internal_image(10941);
            images_levelcardactclear3_849_7_0[0] = get_internal_image(10953);
            images_levelcardactclear3_849_7_0[1] = get_internal_image(10953);
            images_levelcardactclear3_849_7_0[2] = get_internal_image(10952);
            images_levelcardactclear3_849_7_0[3] = get_internal_image(10951);
            images_levelcardactclear3_849_7_0[4] = get_internal_image(10941);
            images_levelcardactclear3_849_7_0[5] = get_internal_image(10941);
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
FrameObject * create_levelcardactclear3_849(int x, int y)
{
    return new (Active::pool.create()) LevelCardActClear3_849(x, y);
}
class LevelCardBonus1_850 : public Counter
{
public:
    LevelCardBonus1_850(int x, int y) : Counter(x, y, LevelCardBonus1_850_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Bonus 1", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 4;
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
            counter_images[10] = get_internal_image(1910);
            counter_images[11] = get_internal_image(1912);
            counter_images[12] = get_internal_image(1678);
            counter_images[13] = get_internal_image(1837);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999;
        set(0);
    }
};
FrameObject * create_levelcardbonus1_850(int x, int y)
{
    return new (Counter::pool.create()) LevelCardBonus1_850(x, y);
}
class LevelCardBonus2_851 : public Counter
{
public:
    LevelCardBonus2_851(int x, int y) : Counter(x, y, LevelCardBonus2_851_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Bonus 2", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 3;
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
            counter_images[10] = get_internal_image(1910);
            counter_images[11] = get_internal_image(1912);
            counter_images[12] = get_internal_image(1678);
            counter_images[13] = get_internal_image(1837);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 999;
        set(0);
    }
};
FrameObject * create_levelcardbonus2_851(int x, int y)
{
    return new (Counter::pool.create()) LevelCardBonus2_851(x, y);
}
class LevelCardBonus3_852 : public Counter
{
public:
    LevelCardBonus3_852(int x, int y) : Counter(x, y, LevelCardBonus3_852_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Bonus 3", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(1901);
            counter_images[1] = get_internal_image(1838);
            counter_images[2] = get_internal_image(1902);
            counter_images[3] = get_internal_image(1903);
            counter_images[4] = get_internal_image(1904);
            counter_images[5] = get_internal_image(1905);
            counter_images[6] = get_internal_image(1906);
            counter_images[7] = get_internal_image(1907);
            counter_images[8] = get_internal_image(1908);
            counter_images[9] = get_internal_image(1909);
            counter_images[10] = get_internal_image(1910);
            counter_images[11] = get_internal_image(1912);
            counter_images[12] = get_internal_image(1678);
            counter_images[13] = get_internal_image(1837);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 999999999;
        set(0);
        set_direction(16);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(56);
        ((BallMovement*)movement)->set_deceleration(22);
    }
};
FrameObject * create_levelcardbonus3_852(int x, int y)
{
    return new (Counter::pool.create()) LevelCardBonus3_852(x, y);
}
class TotalBonus_853 : public Counter
{
public:
    TotalBonus_853(int x, int y) : Counter(x, y, TotalBonus_853_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TotalBonus", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(1176);
            counter_images[4] = get_internal_image(1177);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 999999999;
        if (global_data_207_totalbonus.init)
            set(global_data_207_totalbonus.value);
        else
            set(0);
        set_direction(16);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(56);
        ((BallMovement*)movement)->set_deceleration(22);
    }
    ~TotalBonus_853()
    {
        global_data_207_totalbonus.init = true;
        global_data_207_totalbonus.value = value;
    }
    void dealloc()
    {
        this->TotalBonus_853::~TotalBonus_853();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_totalbonus_853(int x, int y)
{
    return new (Counter::pool.create()) TotalBonus_853(x, y);
}
class TotalCrystals_854 : public Counter
{
public:
    TotalCrystals_854(int x, int y) : Counter(x, y, TotalCrystals_854_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TotalCrystals", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 7;
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
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999999;
        if (global_data_209_totalcrystals.init)
            set(global_data_209_totalcrystals.value);
        else
            set(0);
    }
    ~TotalCrystals_854()
    {
        global_data_209_totalcrystals.init = true;
        global_data_209_totalcrystals.value = value;
    }
    void dealloc()
    {
        this->TotalCrystals_854::~TotalCrystals_854();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_totalcrystals_854(int x, int y)
{
    return new (Counter::pool.create()) TotalCrystals_854(x, y);
}
class LevelParallaxPiece1_855 : public SystemBox
{
public:
    LevelParallaxPiece1_855(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_855_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 72;
        type = PATTERN_IMAGE;
        image = get_internal_image(3011);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_855(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_855(x, y);
}
class LevelParallaxPiece3_856 : public SystemBox
{
public:
    LevelParallaxPiece3_856(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_856_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 73;
        type = PATTERN_IMAGE;
        image = get_internal_image(916);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_856(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_856(x, y);
}
class LevelParallaxPiece2_857 : public SystemBox
{
public:
    LevelParallaxPiece2_857(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_857_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 180;
        type = PATTERN_IMAGE;
        image = get_internal_image(3012);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_857(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_857(x, y);
}
class LevelParallaxPiece4_858 : public SystemBox
{
public:
    LevelParallaxPiece4_858(int x, int y) : SystemBox(x, y, LevelParallaxPiece4_858_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 140;
        type = PATTERN_IMAGE;
        image = get_internal_image(326);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4_858(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4_858(x, y);
}
class LevelParallaxPiece5_859 : public SystemBox
{
public:
    LevelParallaxPiece5_859(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_859_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(3013);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_859(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_859(x, y);
}
class LevelParallaxPiece6_860 : public SystemBox
{
public:
    LevelParallaxPiece6_860(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_860_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(3014);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_860(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_860(x, y);
}
class LevelParallaxPiece2_861 : public SystemBox
{
public:
    LevelParallaxPiece2_861(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_861_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece2", 21);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 400;
        type = PATTERN_IMAGE;
        image = get_internal_image(4190);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_861(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_861(x, y);
}
class LevelParallaxPiece7_862 : public SystemBox
{
public:
    LevelParallaxPiece7_862(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_862_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 400;
        type = PATTERN_IMAGE;
        image = get_internal_image(3219);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_862(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_862(x, y);
}
static Image* images_enemypellet_863_0_0[3];
static Direction direction_enemypellet_863_0_0 = {0, 50, 50, 0, -1, images_enemypellet_863_0_0, 3};
static Animation anim_enemypellet_863_0 = {&direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, NULL, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0, &direction_enemypellet_863_0_0};
static Animation * anim_array_enemypellet_863[1] = {&anim_enemypellet_863_0};
static Animations anim_enemypellet_863 = {1, &anim_array_enemypellet_863[0]};
static bool anim_enemypellet_863_initialized;
class EnemyPellet_863 : public Active
{
public:
    EnemyPellet_863(int x, int y) : Active(x, y, EnemyPellet_863_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Pellet", 12);
#endif
        this->animations = &anim_enemypellet_863;
        if (!anim_enemypellet_863_initialized) {
            anim_enemypellet_863_initialized = true;
            images_enemypellet_863_0_0[0] = get_internal_image(1610);
            images_enemypellet_863_0_0[1] = get_internal_image(1686);
            images_enemypellet_863_0_0[2] = get_internal_image(4707);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(14);
        set_direction(14);
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_enemypellet_863(int x, int y)
{
    return new (Active::pool.create()) EnemyPellet_863(x, y);
}
static Image* images_levelbackgroundplane_864_0_0[4];
static Direction direction_levelbackgroundplane_864_0_0 = {0, 100, 100, 0, -1, images_levelbackgroundplane_864_0_0, 4};
static Image* images_levelbackgroundplane_864_0_4[4];
static Direction direction_levelbackgroundplane_864_0_4 = {4, 100, 100, 0, -1, images_levelbackgroundplane_864_0_4, 4};
static Animation anim_levelbackgroundplane_864_0 = {&direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, NULL, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, &direction_levelbackgroundplane_864_0_4, NULL, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0, &direction_levelbackgroundplane_864_0_0};
static Animation * anim_array_levelbackgroundplane_864[1] = {&anim_levelbackgroundplane_864_0};
static Animations anim_levelbackgroundplane_864 = {1, &anim_array_levelbackgroundplane_864[0]};
static bool anim_levelbackgroundplane_864_initialized;
class LevelBackgroundPlane_864 : public Active
{
public:
    LevelBackgroundPlane_864(int x, int y) : Active(x, y, LevelBackgroundPlane_864_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BackgroundPlane", 21);
#endif
        this->animations = &anim_levelbackgroundplane_864;
        if (!anim_levelbackgroundplane_864_initialized) {
            anim_levelbackgroundplane_864_initialized = true;
            images_levelbackgroundplane_864_0_0[0] = get_internal_image(0);
            images_levelbackgroundplane_864_0_0[1] = get_internal_image(0);
            images_levelbackgroundplane_864_0_0[2] = get_internal_image(0);
            images_levelbackgroundplane_864_0_0[3] = get_internal_image(0);
            images_levelbackgroundplane_864_0_4[0] = get_internal_image(0);
            images_levelbackgroundplane_864_0_4[1] = get_internal_image(0);
            images_levelbackgroundplane_864_0_4[2] = get_internal_image(0);
            images_levelbackgroundplane_864_0_4[3] = get_internal_image(0);
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
FrameObject * create_levelbackgroundplane_864(int x, int y)
{
    return new (Active::pool.create()) LevelBackgroundPlane_864(x, y);
}
static Image* images_levelbackgroundplane2_865_0_0[4];
static Direction direction_levelbackgroundplane2_865_0_0 = {0, 100, 100, 0, -1, images_levelbackgroundplane2_865_0_0, 4};
static Image* images_levelbackgroundplane2_865_0_4[4];
static Direction direction_levelbackgroundplane2_865_0_4 = {4, 100, 100, 0, -1, images_levelbackgroundplane2_865_0_4, 4};
static Animation anim_levelbackgroundplane2_865_0 = {&direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, NULL, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, &direction_levelbackgroundplane2_865_0_4, NULL, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0, &direction_levelbackgroundplane2_865_0_0};
static Animation * anim_array_levelbackgroundplane2_865[1] = {&anim_levelbackgroundplane2_865_0};
static Animations anim_levelbackgroundplane2_865 = {1, &anim_array_levelbackgroundplane2_865[0]};
static bool anim_levelbackgroundplane2_865_initialized;
class LevelBackgroundPlane2_865 : public Active
{
public:
    LevelBackgroundPlane2_865(int x, int y) : Active(x, y, LevelBackgroundPlane2_865_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BackgroundPlane 2", 23);
#endif
        this->animations = &anim_levelbackgroundplane2_865;
        if (!anim_levelbackgroundplane2_865_initialized) {
            anim_levelbackgroundplane2_865_initialized = true;
            images_levelbackgroundplane2_865_0_0[0] = get_internal_image(6669);
            images_levelbackgroundplane2_865_0_0[1] = get_internal_image(6569);
            images_levelbackgroundplane2_865_0_0[2] = get_internal_image(6622);
            images_levelbackgroundplane2_865_0_0[3] = get_internal_image(6665);
            images_levelbackgroundplane2_865_0_4[0] = get_internal_image(513);
            images_levelbackgroundplane2_865_0_4[1] = get_internal_image(588);
            images_levelbackgroundplane2_865_0_4[2] = get_internal_image(720);
            images_levelbackgroundplane2_865_0_4[3] = get_internal_image(1165);
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
FrameObject * create_levelbackgroundplane2_865(int x, int y)
{
    return new (Active::pool.create()) LevelBackgroundPlane2_865(x, y);
}
class DVBackWall_866 : public Backdrop
{
public:
    DVBackWall_866(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_BackWall", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(155);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvbackwall_866(int x, int y)
{
    return new (Backdrop::pool.create()) DVBackWall_866(x, y);
}
class DVHalfpipe1_867 : public Backdrop
{
public:
    DVHalfpipe1_867(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9246);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe1_867(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe1_867(x, y);
}
class DVHalfpipe2_868 : public Backdrop
{
public:
    DVHalfpipe2_868(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6673);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe2_868(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe2_868(x, y);
}
class DVHalfpipe3_869 : public Backdrop
{
public:
    DVHalfpipe3_869(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Halfpipe3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(256);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhalfpipe3_869(int x, int y)
{
    return new (Backdrop::pool.create()) DVHalfpipe3_869(x, y);
}
class SpiralTunnel2_870 : public Backdrop
{
public:
    SpiralTunnel2_870(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SpiralTunnel 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6664);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_spiraltunnel2_870(int x, int y)
{
    return new (Backdrop::pool.create()) SpiralTunnel2_870(x, y);
}
class DVTree6_871 : public Backdrop
{
public:
    DVTree6_871(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree6", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9418);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree6_871(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree6_871(x, y);
}
class DVHandlebar_872 : public Backdrop
{
public:
    DVHandlebar_872(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2394);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvhandlebar_872(int x, int y)
{
    return new (Backdrop::pool.create()) DVHandlebar_872(x, y);
}
class DVWall3_873 : public Backdrop
{
public:
    DVWall3_873(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall3", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(592);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvwall3_873(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall3_873(x, y);
}
class DVTree4_874 : public Backdrop
{
public:
    DVTree4_874(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree4", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9415);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree4_874(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree4_874(x, y);
}
class LevelBackdrop02_875 : public Backdrop
{
public:
    LevelBackdrop02_875(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_02", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(659);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_levelbackdrop02_875(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop02_875(x, y);
}
class LevelBackdrop3_876 : public Backdrop
{
public:
    LevelBackdrop3_876(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_ 3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1466);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop3_876(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop3_876(x, y);
}
class DVWall8_877 : public Backdrop
{
public:
    DVWall8_877(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall8", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(487);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall8_877(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall8_877(x, y);
}
class LevelBackdrop9_878 : public Backdrop
{
public:
    LevelBackdrop9_878(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_ 9", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(320);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop9_878(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop9_878(x, y);
}
class DVTree5_879 : public Backdrop
{
public:
    DVTree5_879(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree5", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9417);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree5_879(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree5_879(x, y);
}
class LevelBackdrop12_880 : public Backdrop
{
public:
    LevelBackdrop12_880(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_12", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1786);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop12_880(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop12_880(x, y);
}
class DVBackRock3_881 : public Backdrop
{
public:
    DVBackRock3_881(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_BackRock3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2327);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvbackrock3_881(int x, int y)
{
    return new (Backdrop::pool.create()) DVBackRock3_881(x, y);
}
class DVBackRock1_882 : public Backdrop
{
public:
    DVBackRock1_882(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_BackRock1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2317);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvbackrock1_882(int x, int y)
{
    return new (Backdrop::pool.create()) DVBackRock1_882(x, y);
}
class DVTree2_883 : public Backdrop
{
public:
    DVTree2_883(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9416);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree2_883(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree2_883(x, y);
}
class LevelBackdrop13_884 : public Backdrop
{
public:
    LevelBackdrop13_884(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_13", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1787);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop13_884(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop13_884(x, y);
}
class DVWall6_885 : public Backdrop
{
public:
    DVWall6_885(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall6", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1732);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall6_885(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall6_885(x, y);
}
class DVWall2_886 : public Backdrop
{
public:
    DVWall2_886(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(259);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvwall2_886(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall2_886(x, y);
}
class DVWallEdge1_887 : public Backdrop
{
public:
    DVWallEdge1_887(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_WallEdge1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(332);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvwalledge1_887(int x, int y)
{
    return new (Backdrop::pool.create()) DVWallEdge1_887(x, y);
}
class DVFloorCurveSmallRight_888 : public Backdrop
{
public:
    DVFloorCurveSmallRight_888(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FloorCurveSmallRight", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(642);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvfloorcurvesmallright_888(int x, int y)
{
    return new (Backdrop::pool.create()) DVFloorCurveSmallRight_888(x, y);
}
class DVWall9_889 : public Backdrop
{
public:
    DVWall9_889(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall9", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(534);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall9_889(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall9_889(x, y);
}
class DVBackRock2_890 : public Backdrop
{
public:
    DVBackRock2_890(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_BackRock2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2143);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvbackrock2_890(int x, int y)
{
    return new (Backdrop::pool.create()) DVBackRock2_890(x, y);
}
class DVRockCeiling_891 : public Backdrop
{
public:
    DVRockCeiling_891(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockCeiling", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(883);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvrockceiling_891(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockCeiling_891(x, y);
}
class DVWall7_892 : public Backdrop
{
public:
    DVWall7_892(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall7", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(106);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall7_892(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall7_892(x, y);
}
class DVTree1_893 : public Backdrop
{
public:
    DVTree1_893(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9427);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree1_893(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree1_893(x, y);
}
class LevelBackdrop8_894 : public Backdrop
{
public:
    LevelBackdrop8_894(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_ 8", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(314);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop8_894(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop8_894(x, y);
}
class DVWallEdge2_895 : public Backdrop
{
public:
    DVWallEdge2_895(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_WallEdge2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(345);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvwalledge2_895(int x, int y)
{
    return new (Backdrop::pool.create()) DVWallEdge2_895(x, y);
}
class DVRockSlope1_896 : public Backdrop
{
public:
    DVRockSlope1_896(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4063);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvrockslope1_896(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope1_896(x, y);
}
class DVTree3_897 : public Backdrop
{
public:
    DVTree3_897(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Tree3", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(130);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvtree3_897(int x, int y)
{
    return new (Backdrop::pool.create()) DVTree3_897(x, y);
}
class LevelBackdrop10_898 : public Backdrop
{
public:
    LevelBackdrop10_898(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_10", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(691);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop10_898(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop10_898(x, y);
}
class LevelBackdrop09_899 : public Backdrop
{
public:
    LevelBackdrop09_899(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_09", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(688);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop09_899(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop09_899(x, y);
}
class DVRockSlope4_900 : public Backdrop
{
public:
    DVRockSlope4_900(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9019);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope4_900(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope4_900(x, y);
}
class DVRockSlope4_901 : public Backdrop
{
public:
    DVRockSlope4_901(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8089);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope4_901(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope4_901(x, y);
}
class DVRockSlope9_902 : public Backdrop
{
public:
    DVRockSlope9_902(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6284);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope9_902(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope9_902(x, y);
}
class DVWall6_903 : public Backdrop
{
public:
    DVWall6_903(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(73);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall6_903(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall6_903(x, y);
}
class DVRockEdge2_904 : public Backdrop
{
public:
    DVRockEdge2_904(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockEdge2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5720);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvrockedge2_904(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockEdge2_904(x, y);
}
class DVRockEdge1_905 : public Backdrop
{
public:
    DVRockEdge1_905(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockEdge1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2524);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvrockedge1_905(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockEdge1_905(x, y);
}
class DVRockSlope11_906 : public Backdrop
{
public:
    DVRockSlope11_906(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4759);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope11_906(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope11_906(x, y);
}
