#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_jcwaterstream5_2412_0_0[6];
static Direction direction_jcwaterstream5_2412_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream5_2412_0_0, 6};
static Animation anim_jcwaterstream5_2412_0 = {&direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, NULL, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0, &direction_jcwaterstream5_2412_0_0};
static Animation * anim_array_jcwaterstream5_2412[1] = {&anim_jcwaterstream5_2412_0};
static Animations anim_jcwaterstream5_2412 = {1, &anim_array_jcwaterstream5_2412[0]};
static bool anim_jcwaterstream5_2412_initialized;
class JCWaterStream5_2412 : public Active
{
public:
    JCWaterStream5_2412(int x, int y) : Active(x, y, JCWaterStream5_2412_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 5", 16);
#endif
        this->animations = &anim_jcwaterstream5_2412;
        if (!anim_jcwaterstream5_2412_initialized) {
            anim_jcwaterstream5_2412_initialized = true;
            images_jcwaterstream5_2412_0_0[0] = get_internal_image(14717);
            images_jcwaterstream5_2412_0_0[1] = get_internal_image(14718);
            images_jcwaterstream5_2412_0_0[2] = get_internal_image(14719);
            images_jcwaterstream5_2412_0_0[3] = get_internal_image(14720);
            images_jcwaterstream5_2412_0_0[4] = get_internal_image(14721);
            images_jcwaterstream5_2412_0_0[5] = get_internal_image(14722);
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
FrameObject * create_jcwaterstream5_2412(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream5_2412(x, y);
}
static Image* images_jcwaterstream2_2413_0_0[6];
static Direction direction_jcwaterstream2_2413_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream2_2413_0_0, 6};
static Animation anim_jcwaterstream2_2413_0 = {&direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, NULL, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0, &direction_jcwaterstream2_2413_0_0};
static Animation * anim_array_jcwaterstream2_2413[1] = {&anim_jcwaterstream2_2413_0};
static Animations anim_jcwaterstream2_2413 = {1, &anim_array_jcwaterstream2_2413[0]};
static bool anim_jcwaterstream2_2413_initialized;
class JCWaterStream2_2413 : public Active
{
public:
    JCWaterStream2_2413(int x, int y) : Active(x, y, JCWaterStream2_2413_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 2", 16);
#endif
        this->animations = &anim_jcwaterstream2_2413;
        if (!anim_jcwaterstream2_2413_initialized) {
            anim_jcwaterstream2_2413_initialized = true;
            images_jcwaterstream2_2413_0_0[0] = get_internal_image(14741);
            images_jcwaterstream2_2413_0_0[1] = get_internal_image(14742);
            images_jcwaterstream2_2413_0_0[2] = get_internal_image(14743);
            images_jcwaterstream2_2413_0_0[3] = get_internal_image(14744);
            images_jcwaterstream2_2413_0_0[4] = get_internal_image(14745);
            images_jcwaterstream2_2413_0_0[5] = get_internal_image(14746);
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
FrameObject * create_jcwaterstream2_2413(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream2_2413(x, y);
}
static Image* images_jcslidingplatform_2414_0_0[1];
static Direction direction_jcslidingplatform_2414_0_0 = {0, 100, 100, 0, 1, images_jcslidingplatform_2414_0_0, 1};
static Animation anim_jcslidingplatform_2414_0 = {&direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, NULL, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0, &direction_jcslidingplatform_2414_0_0};
static Animation * anim_array_jcslidingplatform_2414[1] = {&anim_jcslidingplatform_2414_0};
static Animations anim_jcslidingplatform_2414 = {1, &anim_array_jcslidingplatform_2414[0]};
static bool anim_jcslidingplatform_2414_initialized;
class JCSlidingPlatform_2414 : public Active
{
public:
    JCSlidingPlatform_2414(int x, int y) : Active(x, y, JCSlidingPlatform_2414_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("JC_SlidingPlatform", 18);
#endif
        set_visible(false);
        this->animations = &anim_jcslidingplatform_2414;
        if (!anim_jcslidingplatform_2414_initialized) {
            anim_jcslidingplatform_2414_initialized = true;
            images_jcslidingplatform_2414_0_0[0] = get_internal_image(2103);
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
FrameObject * create_jcslidingplatform_2414(int x, int y)
{
    return new (Active::pool.create()) JCSlidingPlatform_2414(x, y);
}
static Image* images_jcslidingplatformlandpoint_2415_0_0[1];
static Direction direction_jcslidingplatformlandpoint_2415_0_0 = {0, 50, 50, 0, 1, images_jcslidingplatformlandpoint_2415_0_0, 1};
static Image* images_jcslidingplatformlandpoint_2415_0_8[2];
static Direction direction_jcslidingplatformlandpoint_2415_0_8 = {8, 50, 50, 0, 1, images_jcslidingplatformlandpoint_2415_0_8, 2};
static Animation anim_jcslidingplatformlandpoint_2415_0 = {&direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, NULL, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, &direction_jcslidingplatformlandpoint_2415_0_8, NULL, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0, &direction_jcslidingplatformlandpoint_2415_0_0};
static Animation * anim_array_jcslidingplatformlandpoint_2415[1] = {&anim_jcslidingplatformlandpoint_2415_0};
static Animations anim_jcslidingplatformlandpoint_2415 = {1, &anim_array_jcslidingplatformlandpoint_2415[0]};
static bool anim_jcslidingplatformlandpoint_2415_initialized;
class JCSlidingPlatformLandPoint_2415 : public Active
{
public:
    JCSlidingPlatformLandPoint_2415(int x, int y) : Active(x, y, JCSlidingPlatformLandPoint_2415_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("JC_SlidingPlatformLandPoint", 27);
#endif
        set_visible(false);
        this->animations = &anim_jcslidingplatformlandpoint_2415;
        if (!anim_jcslidingplatformlandpoint_2415_initialized) {
            anim_jcslidingplatformlandpoint_2415_initialized = true;
            images_jcslidingplatformlandpoint_2415_0_0[0] = get_internal_image(2096);
            images_jcslidingplatformlandpoint_2415_0_8[0] = get_internal_image(2357);
            images_jcslidingplatformlandpoint_2415_0_8[1] = get_internal_image(2364);
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
FrameObject * create_jcslidingplatformlandpoint_2415(int x, int y)
{
    return new (Active::pool.create()) JCSlidingPlatformLandPoint_2415(x, y);
}
static Image* images_jcwaterstream1_2416_0_0[6];
static Direction direction_jcwaterstream1_2416_0_0 = {0, 50, 50, 0, -1, images_jcwaterstream1_2416_0_0, 6};
static Animation anim_jcwaterstream1_2416_0 = {&direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, NULL, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0, &direction_jcwaterstream1_2416_0_0};
static Animation * anim_array_jcwaterstream1_2416[1] = {&anim_jcwaterstream1_2416_0};
static Animations anim_jcwaterstream1_2416 = {1, &anim_array_jcwaterstream1_2416[0]};
static bool anim_jcwaterstream1_2416_initialized;
class JCWaterStream1_2416 : public Active
{
public:
    JCWaterStream1_2416(int x, int y) : Active(x, y, JCWaterStream1_2416_type)
    {
        // qualifiers: 40
#ifndef NDEBUG
        name = std::string("JC_WaterStream 1", 16);
#endif
        this->animations = &anim_jcwaterstream1_2416;
        if (!anim_jcwaterstream1_2416_initialized) {
            anim_jcwaterstream1_2416_initialized = true;
            images_jcwaterstream1_2416_0_0[0] = get_internal_image(14735);
            images_jcwaterstream1_2416_0_0[1] = get_internal_image(14736);
            images_jcwaterstream1_2416_0_0[2] = get_internal_image(14737);
            images_jcwaterstream1_2416_0_0[3] = get_internal_image(14738);
            images_jcwaterstream1_2416_0_0[4] = get_internal_image(14739);
            images_jcwaterstream1_2416_0_0[5] = get_internal_image(14740);
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
FrameObject * create_jcwaterstream1_2416(int x, int y)
{
    return new (Active::pool.create()) JCWaterStream1_2416(x, y);
}
static Image* images_enemybullfrag_2417_0_0[6];
static Direction direction_enemybullfrag_2417_0_0 = {0, 25, 25, 0, -1, images_enemybullfrag_2417_0_0, 6};
static Image* images_enemybullfrag_2417_0_8[2];
static Direction direction_enemybullfrag_2417_0_8 = {8, 50, 50, 0, 1, images_enemybullfrag_2417_0_8, 2};
static Image* images_enemybullfrag_2417_0_16[6];
static Direction direction_enemybullfrag_2417_0_16 = {16, 25, 25, 0, -1, images_enemybullfrag_2417_0_16, 6};
static Animation anim_enemybullfrag_2417_0 = {&direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, NULL, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, &direction_enemybullfrag_2417_0_8, NULL, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, &direction_enemybullfrag_2417_0_16, NULL, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0, &direction_enemybullfrag_2417_0_0};
static Image* images_enemybullfrag_2417_8_0[2];
static Direction direction_enemybullfrag_2417_8_0 = {0, 70, 70, 0, -1, images_enemybullfrag_2417_8_0, 2};
static Image* images_enemybullfrag_2417_8_16[2];
static Direction direction_enemybullfrag_2417_8_16 = {16, 70, 70, 0, -1, images_enemybullfrag_2417_8_16, 2};
static Animation anim_enemybullfrag_2417_8 = {&direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, NULL, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, &direction_enemybullfrag_2417_8_16, NULL, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0, &direction_enemybullfrag_2417_8_0};
static Image* images_enemybullfrag_2417_10_0[7];
static Direction direction_enemybullfrag_2417_10_0 = {0, 30, 30, 6, -1, images_enemybullfrag_2417_10_0, 7};
static Image* images_enemybullfrag_2417_10_16[7];
static Direction direction_enemybullfrag_2417_10_16 = {16, 30, 30, 6, -1, images_enemybullfrag_2417_10_16, 7};
static Animation anim_enemybullfrag_2417_10 = {&direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, NULL, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, &direction_enemybullfrag_2417_10_16, NULL, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0, &direction_enemybullfrag_2417_10_0};
static Image* images_enemybullfrag_2417_11_0[7];
static Direction direction_enemybullfrag_2417_11_0 = {0, 30, 30, 6, 1, images_enemybullfrag_2417_11_0, 7};
static Image* images_enemybullfrag_2417_11_16[7];
static Direction direction_enemybullfrag_2417_11_16 = {16, 30, 30, 6, 1, images_enemybullfrag_2417_11_16, 7};
static Animation anim_enemybullfrag_2417_11 = {&direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, NULL, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, &direction_enemybullfrag_2417_11_16, NULL, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0, &direction_enemybullfrag_2417_11_0};
static Animation * anim_array_enemybullfrag_2417[12] = {&anim_enemybullfrag_2417_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemybullfrag_2417_8, NULL, &anim_enemybullfrag_2417_10, &anim_enemybullfrag_2417_11};
static Animations anim_enemybullfrag_2417 = {12, &anim_array_enemybullfrag_2417[0]};
static bool anim_enemybullfrag_2417_initialized;
class EnemyBullfrag_2417 : public Active
{
public:
    EnemyBullfrag_2417(int x, int y) : Active(x, y, EnemyBullfrag_2417_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Bullfrag", 14);
#endif
        this->animations = &anim_enemybullfrag_2417;
        if (!anim_enemybullfrag_2417_initialized) {
            anim_enemybullfrag_2417_initialized = true;
            images_enemybullfrag_2417_0_0[0] = get_internal_image(12284);
            images_enemybullfrag_2417_0_0[1] = get_internal_image(12286);
            images_enemybullfrag_2417_0_0[2] = get_internal_image(12290);
            images_enemybullfrag_2417_0_0[3] = get_internal_image(12289);
            images_enemybullfrag_2417_0_0[4] = get_internal_image(12285);
            images_enemybullfrag_2417_0_0[5] = get_internal_image(12288);
            images_enemybullfrag_2417_0_8[0] = get_internal_image(1646);
            images_enemybullfrag_2417_0_8[1] = get_internal_image(9392);
            images_enemybullfrag_2417_0_16[0] = get_internal_image(12287);
            images_enemybullfrag_2417_0_16[1] = get_internal_image(12291);
            images_enemybullfrag_2417_0_16[2] = get_internal_image(12292);
            images_enemybullfrag_2417_0_16[3] = get_internal_image(12293);
            images_enemybullfrag_2417_0_16[4] = get_internal_image(12294);
            images_enemybullfrag_2417_0_16[5] = get_internal_image(12295);
            images_enemybullfrag_2417_8_0[0] = get_internal_image(6231);
            images_enemybullfrag_2417_8_0[1] = get_internal_image(6230);
            images_enemybullfrag_2417_8_16[0] = get_internal_image(6229);
            images_enemybullfrag_2417_8_16[1] = get_internal_image(6232);
            images_enemybullfrag_2417_10_0[0] = get_internal_image(12296);
            images_enemybullfrag_2417_10_0[1] = get_internal_image(12297);
            images_enemybullfrag_2417_10_0[2] = get_internal_image(6215);
            images_enemybullfrag_2417_10_0[3] = get_internal_image(6223);
            images_enemybullfrag_2417_10_0[4] = get_internal_image(2369);
            images_enemybullfrag_2417_10_0[5] = get_internal_image(6110);
            images_enemybullfrag_2417_10_0[6] = get_internal_image(6221);
            images_enemybullfrag_2417_10_16[0] = get_internal_image(12303);
            images_enemybullfrag_2417_10_16[1] = get_internal_image(12302);
            images_enemybullfrag_2417_10_16[2] = get_internal_image(6224);
            images_enemybullfrag_2417_10_16[3] = get_internal_image(6225);
            images_enemybullfrag_2417_10_16[4] = get_internal_image(2772);
            images_enemybullfrag_2417_10_16[5] = get_internal_image(6226);
            images_enemybullfrag_2417_10_16[6] = get_internal_image(6228);
            images_enemybullfrag_2417_11_0[0] = get_internal_image(6221);
            images_enemybullfrag_2417_11_0[1] = get_internal_image(6110);
            images_enemybullfrag_2417_11_0[2] = get_internal_image(2369);
            images_enemybullfrag_2417_11_0[3] = get_internal_image(6223);
            images_enemybullfrag_2417_11_0[4] = get_internal_image(6215);
            images_enemybullfrag_2417_11_0[5] = get_internal_image(12297);
            images_enemybullfrag_2417_11_0[6] = get_internal_image(12296);
            images_enemybullfrag_2417_11_16[0] = get_internal_image(6228);
            images_enemybullfrag_2417_11_16[1] = get_internal_image(6226);
            images_enemybullfrag_2417_11_16[2] = get_internal_image(2772);
            images_enemybullfrag_2417_11_16[3] = get_internal_image(6225);
            images_enemybullfrag_2417_11_16[4] = get_internal_image(6224);
            images_enemybullfrag_2417_11_16[5] = get_internal_image(12302);
            images_enemybullfrag_2417_11_16[6] = get_internal_image(12303);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 40);
        alterables->values.set(3, -1);
        alterables->values.set(18, 20);
    }
};
FrameObject * create_enemybullfrag_2417(int x, int y)
{
    return new (Active::pool.create()) EnemyBullfrag_2417(x, y);
}
static Image* images_enemybuoybuoy_2418_0_0[4];
static Direction direction_enemybuoybuoy_2418_0_0 = {0, 25, 25, 0, -1, images_enemybuoybuoy_2418_0_0, 4};
static Image* images_enemybuoybuoy_2418_0_8[2];
static Direction direction_enemybuoybuoy_2418_0_8 = {8, 50, 50, 0, 1, images_enemybuoybuoy_2418_0_8, 2};
static Animation anim_enemybuoybuoy_2418_0 = {&direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, NULL, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, &direction_enemybuoybuoy_2418_0_8, NULL, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0, &direction_enemybuoybuoy_2418_0_0};
static Image* images_enemybuoybuoy_2418_7_0[12];
static Direction direction_enemybuoybuoy_2418_7_0 = {0, 25, 25, 8, -1, images_enemybuoybuoy_2418_7_0, 12};
static Animation anim_enemybuoybuoy_2418_7 = {&direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, NULL, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0, &direction_enemybuoybuoy_2418_7_0};
static Image* images_enemybuoybuoy_2418_8_0[8];
static Direction direction_enemybuoybuoy_2418_8_0 = {0, 25, 25, 7, 1, images_enemybuoybuoy_2418_8_0, 8};
static Animation anim_enemybuoybuoy_2418_8 = {&direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, NULL, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0, &direction_enemybuoybuoy_2418_8_0};
static Image* images_enemybuoybuoy_2418_9_0[1];
static Direction direction_enemybuoybuoy_2418_9_0 = {0, 50, 50, 0, 1, images_enemybuoybuoy_2418_9_0, 1};
static Image* images_enemybuoybuoy_2418_9_16[1];
static Direction direction_enemybuoybuoy_2418_9_16 = {16, 50, 50, 0, 1, images_enemybuoybuoy_2418_9_16, 1};
static Animation anim_enemybuoybuoy_2418_9 = {&direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, NULL, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, &direction_enemybuoybuoy_2418_9_16, NULL, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0, &direction_enemybuoybuoy_2418_9_0};
static Animation * anim_array_enemybuoybuoy_2418[10] = {&anim_enemybuoybuoy_2418_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemybuoybuoy_2418_7, &anim_enemybuoybuoy_2418_8, &anim_enemybuoybuoy_2418_9};
static Animations anim_enemybuoybuoy_2418 = {10, &anim_array_enemybuoybuoy_2418[0]};
static bool anim_enemybuoybuoy_2418_initialized;
class EnemyBuoyBuoy_2418 : public Active
{
public:
    EnemyBuoyBuoy_2418(int x, int y) : Active(x, y, EnemyBuoyBuoy_2418_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_BuoyBuoy", 14);
#endif
        this->animations = &anim_enemybuoybuoy_2418;
        if (!anim_enemybuoybuoy_2418_initialized) {
            anim_enemybuoybuoy_2418_initialized = true;
            images_enemybuoybuoy_2418_0_0[0] = get_internal_image(8664);
            images_enemybuoybuoy_2418_0_0[1] = get_internal_image(8661);
            images_enemybuoybuoy_2418_0_0[2] = get_internal_image(8657);
            images_enemybuoybuoy_2418_0_0[3] = get_internal_image(8663);
            images_enemybuoybuoy_2418_0_8[0] = get_internal_image(8611);
            images_enemybuoybuoy_2418_0_8[1] = get_internal_image(8556);
            images_enemybuoybuoy_2418_7_0[0] = get_internal_image(8666);
            images_enemybuoybuoy_2418_7_0[1] = get_internal_image(8667);
            images_enemybuoybuoy_2418_7_0[2] = get_internal_image(8676);
            images_enemybuoybuoy_2418_7_0[3] = get_internal_image(8767);
            images_enemybuoybuoy_2418_7_0[4] = get_internal_image(8760);
            images_enemybuoybuoy_2418_7_0[5] = get_internal_image(8669);
            images_enemybuoybuoy_2418_7_0[6] = get_internal_image(8766);
            images_enemybuoybuoy_2418_7_0[7] = get_internal_image(8759);
            images_enemybuoybuoy_2418_7_0[8] = get_internal_image(8762);
            images_enemybuoybuoy_2418_7_0[9] = get_internal_image(8763);
            images_enemybuoybuoy_2418_7_0[10] = get_internal_image(8766);
            images_enemybuoybuoy_2418_7_0[11] = get_internal_image(8769);
            images_enemybuoybuoy_2418_8_0[0] = get_internal_image(8762);
            images_enemybuoybuoy_2418_8_0[1] = get_internal_image(8677);
            images_enemybuoybuoy_2418_8_0[2] = get_internal_image(8772);
            images_enemybuoybuoy_2418_8_0[3] = get_internal_image(8781);
            images_enemybuoybuoy_2418_8_0[4] = get_internal_image(8666);
            images_enemybuoybuoy_2418_8_0[5] = get_internal_image(8782);
            images_enemybuoybuoy_2418_8_0[6] = get_internal_image(8773);
            images_enemybuoybuoy_2418_8_0[7] = get_internal_image(8663);
            images_enemybuoybuoy_2418_9_0[0] = get_internal_image(8560);
            images_enemybuoybuoy_2418_9_16[0] = get_internal_image(8600);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(7, 32);
    }
};
FrameObject * create_enemybuoybuoy_2418(int x, int y)
{
    return new (Active::pool.create()) EnemyBuoyBuoy_2418(x, y);
}
static Image* images_enemybullfragmask_2419_0_0[1];
static Direction direction_enemybullfragmask_2419_0_0 = {0, 50, 50, 0, 1, images_enemybullfragmask_2419_0_0, 1};
static Animation anim_enemybullfragmask_2419_0 = {&direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, NULL, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0, &direction_enemybullfragmask_2419_0_0};
static Animation * anim_array_enemybullfragmask_2419[1] = {&anim_enemybullfragmask_2419_0};
static Animations anim_enemybullfragmask_2419 = {1, &anim_array_enemybullfragmask_2419[0]};
static bool anim_enemybullfragmask_2419_initialized;
class EnemyBullfragMask_2419 : public Active
{
public:
    EnemyBullfragMask_2419(int x, int y) : Active(x, y, EnemyBullfragMask_2419_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Enemy_BullfragMask", 18);
#endif
        set_visible(false);
        this->animations = &anim_enemybullfragmask_2419;
        if (!anim_enemybullfragmask_2419_initialized) {
            anim_enemybullfragmask_2419_initialized = true;
            images_enemybullfragmask_2419_0_0[0] = get_internal_image(8976);
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
FrameObject * create_enemybullfragmask_2419(int x, int y)
{
    return new (Active::pool.create()) EnemyBullfragMask_2419(x, y);
}
static Image* images_enemymeteorrollerflame_2420_0_0[3];
static Direction direction_enemymeteorrollerflame_2420_0_0 = {0, 50, 50, 0, -1, images_enemymeteorrollerflame_2420_0_0, 3};
static Image* images_enemymeteorrollerflame_2420_0_16[3];
static Direction direction_enemymeteorrollerflame_2420_0_16 = {16, 50, 50, 0, -1, images_enemymeteorrollerflame_2420_0_16, 3};
static Animation anim_enemymeteorrollerflame_2420_0 = {&direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, NULL, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, &direction_enemymeteorrollerflame_2420_0_16, NULL, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0, &direction_enemymeteorrollerflame_2420_0_0};
static Animation * anim_array_enemymeteorrollerflame_2420[1] = {&anim_enemymeteorrollerflame_2420_0};
static Animations anim_enemymeteorrollerflame_2420 = {1, &anim_array_enemymeteorrollerflame_2420[0]};
static bool anim_enemymeteorrollerflame_2420_initialized;
class EnemyMeteorRollerFlame_2420 : public Active
{
public:
    EnemyMeteorRollerFlame_2420(int x, int y) : Active(x, y, EnemyMeteorRollerFlame_2420_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_MeteorRollerFlame", 23);
#endif
        this->animations = &anim_enemymeteorrollerflame_2420;
        if (!anim_enemymeteorrollerflame_2420_initialized) {
            anim_enemymeteorrollerflame_2420_initialized = true;
            images_enemymeteorrollerflame_2420_0_0[0] = get_internal_image(9684);
            images_enemymeteorrollerflame_2420_0_0[1] = get_internal_image(9682);
            images_enemymeteorrollerflame_2420_0_0[2] = get_internal_image(10267);
            images_enemymeteorrollerflame_2420_0_16[0] = get_internal_image(10262);
            images_enemymeteorrollerflame_2420_0_16[1] = get_internal_image(10268);
            images_enemymeteorrollerflame_2420_0_16[2] = get_internal_image(10269);
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
FrameObject * create_enemymeteorrollerflame_2420(int x, int y)
{
    return new (Active::pool.create()) EnemyMeteorRollerFlame_2420(x, y);
}
static Image* images_enemymeteorroller_2421_0_0[4];
static Direction direction_enemymeteorroller_2421_0_0 = {0, 40, 40, 0, -1, images_enemymeteorroller_2421_0_0, 4};
static Image* images_enemymeteorroller_2421_0_16[4];
static Direction direction_enemymeteorroller_2421_0_16 = {16, 40, 40, 0, -1, images_enemymeteorroller_2421_0_16, 4};
static Animation anim_enemymeteorroller_2421_0 = {&direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, NULL, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, &direction_enemymeteorroller_2421_0_16, NULL, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0, &direction_enemymeteorroller_2421_0_0};
static Image* images_enemymeteorroller_2421_5_0[7];
static Direction direction_enemymeteorroller_2421_5_0 = {0, 15, 15, 0, 1, images_enemymeteorroller_2421_5_0, 7};
static Image* images_enemymeteorroller_2421_5_16[7];
static Direction direction_enemymeteorroller_2421_5_16 = {16, 15, 15, 0, 1, images_enemymeteorroller_2421_5_16, 7};
static Animation anim_enemymeteorroller_2421_5 = {&direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, NULL, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, &direction_enemymeteorroller_2421_5_16, NULL, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0, &direction_enemymeteorroller_2421_5_0};
static Image* images_enemymeteorroller_2421_8_0[2];
static Direction direction_enemymeteorroller_2421_8_0 = {0, 50, 50, 0, -1, images_enemymeteorroller_2421_8_0, 2};
static Image* images_enemymeteorroller_2421_8_8[1];
static Direction direction_enemymeteorroller_2421_8_8 = {8, 50, 50, 0, 1, images_enemymeteorroller_2421_8_8, 1};
static Image* images_enemymeteorroller_2421_8_16[2];
static Direction direction_enemymeteorroller_2421_8_16 = {16, 50, 50, 0, -1, images_enemymeteorroller_2421_8_16, 2};
static Animation anim_enemymeteorroller_2421_8 = {&direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, NULL, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, &direction_enemymeteorroller_2421_8_8, NULL, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, &direction_enemymeteorroller_2421_8_16, NULL, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0, &direction_enemymeteorroller_2421_8_0};
static Image* images_enemymeteorroller_2421_9_0[1];
static Direction direction_enemymeteorroller_2421_9_0 = {0, 50, 50, 0, -1, images_enemymeteorroller_2421_9_0, 1};
static Image* images_enemymeteorroller_2421_9_16[1];
static Direction direction_enemymeteorroller_2421_9_16 = {16, 50, 50, 0, -1, images_enemymeteorroller_2421_9_16, 1};
static Animation anim_enemymeteorroller_2421_9 = {&direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, NULL, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, &direction_enemymeteorroller_2421_9_16, NULL, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0, &direction_enemymeteorroller_2421_9_0};
static Animation * anim_array_enemymeteorroller_2421[10] = {&anim_enemymeteorroller_2421_0, NULL, NULL, NULL, NULL, &anim_enemymeteorroller_2421_5, NULL, NULL, &anim_enemymeteorroller_2421_8, &anim_enemymeteorroller_2421_9};
static Animations anim_enemymeteorroller_2421 = {10, &anim_array_enemymeteorroller_2421[0]};
static bool anim_enemymeteorroller_2421_initialized;
class EnemyMeteorRoller_2421 : public Active
{
public:
    EnemyMeteorRoller_2421(int x, int y) : Active(x, y, EnemyMeteorRoller_2421_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_MeteorRoller", 18);
#endif
        set_visible(false);
        this->animations = &anim_enemymeteorroller_2421;
        if (!anim_enemymeteorroller_2421_initialized) {
            anim_enemymeteorroller_2421_initialized = true;
            images_enemymeteorroller_2421_0_0[0] = get_internal_image(14832);
            images_enemymeteorroller_2421_0_0[1] = get_internal_image(14845);
            images_enemymeteorroller_2421_0_0[2] = get_internal_image(14842);
            images_enemymeteorroller_2421_0_0[3] = get_internal_image(14843);
            images_enemymeteorroller_2421_0_16[0] = get_internal_image(14838);
            images_enemymeteorroller_2421_0_16[1] = get_internal_image(14844);
            images_enemymeteorroller_2421_0_16[2] = get_internal_image(14846);
            images_enemymeteorroller_2421_0_16[3] = get_internal_image(14847);
            images_enemymeteorroller_2421_5_0[0] = get_internal_image(14791);
            images_enemymeteorroller_2421_5_0[1] = get_internal_image(14791);
            images_enemymeteorroller_2421_5_0[2] = get_internal_image(14791);
            images_enemymeteorroller_2421_5_0[3] = get_internal_image(14830);
            images_enemymeteorroller_2421_5_0[4] = get_internal_image(14833);
            images_enemymeteorroller_2421_5_0[5] = get_internal_image(14834);
            images_enemymeteorroller_2421_5_0[6] = get_internal_image(14832);
            images_enemymeteorroller_2421_5_16[0] = get_internal_image(14831);
            images_enemymeteorroller_2421_5_16[1] = get_internal_image(14831);
            images_enemymeteorroller_2421_5_16[2] = get_internal_image(14831);
            images_enemymeteorroller_2421_5_16[3] = get_internal_image(14835);
            images_enemymeteorroller_2421_5_16[4] = get_internal_image(14836);
            images_enemymeteorroller_2421_5_16[5] = get_internal_image(14837);
            images_enemymeteorroller_2421_5_16[6] = get_internal_image(14838);
            images_enemymeteorroller_2421_8_0[0] = get_internal_image(14804);
            images_enemymeteorroller_2421_8_0[1] = get_internal_image(14808);
            images_enemymeteorroller_2421_8_8[0] = get_internal_image(10590);
            images_enemymeteorroller_2421_8_16[0] = get_internal_image(14839);
            images_enemymeteorroller_2421_8_16[1] = get_internal_image(14840);
            images_enemymeteorroller_2421_9_0[0] = get_internal_image(14848);
            images_enemymeteorroller_2421_9_16[0] = get_internal_image(14849);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(6, 1);
    }
};
FrameObject * create_enemymeteorroller_2421(int x, int y)
{
    return new (Active::pool.create()) EnemyMeteorRoller_2421(x, y);
}
static Image* images_gimmickseedspawner_2422_0_0[8];
static Direction direction_gimmickseedspawner_2422_0_0 = {0, 25, 25, 0, -1, images_gimmickseedspawner_2422_0_0, 8};
static Animation anim_gimmickseedspawner_2422_0 = {&direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, NULL, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0, &direction_gimmickseedspawner_2422_0_0};
static Animation * anim_array_gimmickseedspawner_2422[1] = {&anim_gimmickseedspawner_2422_0};
static Animations anim_gimmickseedspawner_2422 = {1, &anim_array_gimmickseedspawner_2422[0]};
static bool anim_gimmickseedspawner_2422_initialized;
class GimmickSeedSpawner_2422 : public Active
{
public:
    GimmickSeedSpawner_2422(int x, int y) : Active(x, y, GimmickSeedSpawner_2422_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SeedSpawner", 19);
#endif
        this->animations = &anim_gimmickseedspawner_2422;
        if (!anim_gimmickseedspawner_2422_initialized) {
            anim_gimmickseedspawner_2422_initialized = true;
            images_gimmickseedspawner_2422_0_0[0] = get_internal_image(3583);
            images_gimmickseedspawner_2422_0_0[1] = get_internal_image(3719);
            images_gimmickseedspawner_2422_0_0[2] = get_internal_image(3718);
            images_gimmickseedspawner_2422_0_0[3] = get_internal_image(3720);
            images_gimmickseedspawner_2422_0_0[4] = get_internal_image(3584);
            images_gimmickseedspawner_2422_0_0[5] = get_internal_image(3720);
            images_gimmickseedspawner_2422_0_0[6] = get_internal_image(3718);
            images_gimmickseedspawner_2422_0_0[7] = get_internal_image(3719);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -1);
        alterables->values.set(1, 30);
    }
};
FrameObject * create_gimmickseedspawner_2422(int x, int y)
{
    return new (Active::pool.create()) GimmickSeedSpawner_2422(x, y);
}
static Image* images_enemysharktorpedo_2423_0_0[7];
static Direction direction_enemysharktorpedo_2423_0_0 = {0, 0, 0, 0, 1, images_enemysharktorpedo_2423_0_0, 7};
static Image* images_enemysharktorpedo_2423_0_1[7];
static Direction direction_enemysharktorpedo_2423_0_1 = {1, 0, 0, 0, 1, images_enemysharktorpedo_2423_0_1, 7};
static Image* images_enemysharktorpedo_2423_0_16[7];
static Direction direction_enemysharktorpedo_2423_0_16 = {16, 0, 0, 0, 1, images_enemysharktorpedo_2423_0_16, 7};
static Image* images_enemysharktorpedo_2423_0_17[7];
static Direction direction_enemysharktorpedo_2423_0_17 = {17, 0, 0, 0, 1, images_enemysharktorpedo_2423_0_17, 7};
static Animation anim_enemysharktorpedo_2423_0 = {&direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_1, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_16, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_17, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0, &direction_enemysharktorpedo_2423_0_0};
static Image* images_enemysharktorpedo_2423_7_0[7];
static Direction direction_enemysharktorpedo_2423_7_0 = {0, 0, 0, 0, 1, images_enemysharktorpedo_2423_7_0, 7};
static Image* images_enemysharktorpedo_2423_7_1[7];
static Direction direction_enemysharktorpedo_2423_7_1 = {1, 0, 0, 0, 1, images_enemysharktorpedo_2423_7_1, 7};
static Image* images_enemysharktorpedo_2423_7_16[7];
static Direction direction_enemysharktorpedo_2423_7_16 = {16, 0, 0, 0, 1, images_enemysharktorpedo_2423_7_16, 7};
static Image* images_enemysharktorpedo_2423_7_17[7];
static Direction direction_enemysharktorpedo_2423_7_17 = {17, 0, 0, 0, 1, images_enemysharktorpedo_2423_7_17, 7};
static Animation anim_enemysharktorpedo_2423_7 = {&direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_1, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_16, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_17, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0, &direction_enemysharktorpedo_2423_7_0};
static Animation * anim_array_enemysharktorpedo_2423[8] = {&anim_enemysharktorpedo_2423_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemysharktorpedo_2423_7};
static Animations anim_enemysharktorpedo_2423 = {8, &anim_array_enemysharktorpedo_2423[0]};
static bool anim_enemysharktorpedo_2423_initialized;
class EnemySharkTorpedo_2423 : public Active
{
public:
    EnemySharkTorpedo_2423(int x, int y) : Active(x, y, EnemySharkTorpedo_2423_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_SharkTorpedo", 18);
#endif
        this->animations = &anim_enemysharktorpedo_2423;
        if (!anim_enemysharktorpedo_2423_initialized) {
            anim_enemysharktorpedo_2423_initialized = true;
            images_enemysharktorpedo_2423_0_0[0] = get_internal_image(3114);
            images_enemysharktorpedo_2423_0_0[1] = get_internal_image(3118);
            images_enemysharktorpedo_2423_0_0[2] = get_internal_image(3119);
            images_enemysharktorpedo_2423_0_0[3] = get_internal_image(7280);
            images_enemysharktorpedo_2423_0_0[4] = get_internal_image(7290);
            images_enemysharktorpedo_2423_0_0[5] = get_internal_image(7283);
            images_enemysharktorpedo_2423_0_0[6] = get_internal_image(7289);
            images_enemysharktorpedo_2423_0_1[0] = get_internal_image(8259);
            images_enemysharktorpedo_2423_0_1[1] = get_internal_image(8546);
            images_enemysharktorpedo_2423_0_1[2] = get_internal_image(8292);
            images_enemysharktorpedo_2423_0_1[3] = get_internal_image(8297);
            images_enemysharktorpedo_2423_0_1[4] = get_internal_image(8322);
            images_enemysharktorpedo_2423_0_1[5] = get_internal_image(8584);
            images_enemysharktorpedo_2423_0_1[6] = get_internal_image(8323);
            images_enemysharktorpedo_2423_0_16[0] = get_internal_image(7282);
            images_enemysharktorpedo_2423_0_16[1] = get_internal_image(7292);
            images_enemysharktorpedo_2423_0_16[2] = get_internal_image(7294);
            images_enemysharktorpedo_2423_0_16[3] = get_internal_image(7308);
            images_enemysharktorpedo_2423_0_16[4] = get_internal_image(7315);
            images_enemysharktorpedo_2423_0_16[5] = get_internal_image(7713);
            images_enemysharktorpedo_2423_0_16[6] = get_internal_image(8250);
            images_enemysharktorpedo_2423_0_17[0] = get_internal_image(8298);
            images_enemysharktorpedo_2423_0_17[1] = get_internal_image(8586);
            images_enemysharktorpedo_2423_0_17[2] = get_internal_image(8606);
            images_enemysharktorpedo_2423_0_17[3] = get_internal_image(8857);
            images_enemysharktorpedo_2423_0_17[4] = get_internal_image(8919);
            images_enemysharktorpedo_2423_0_17[5] = get_internal_image(8924);
            images_enemysharktorpedo_2423_0_17[6] = get_internal_image(8989);
            images_enemysharktorpedo_2423_7_0[0] = get_internal_image(8990);
            images_enemysharktorpedo_2423_7_0[1] = get_internal_image(8991);
            images_enemysharktorpedo_2423_7_0[2] = get_internal_image(8992);
            images_enemysharktorpedo_2423_7_0[3] = get_internal_image(8297);
            images_enemysharktorpedo_2423_7_0[4] = get_internal_image(8993);
            images_enemysharktorpedo_2423_7_0[5] = get_internal_image(9011);
            images_enemysharktorpedo_2423_7_0[6] = get_internal_image(9001);
            images_enemysharktorpedo_2423_7_1[0] = get_internal_image(10787);
            images_enemysharktorpedo_2423_7_1[1] = get_internal_image(9363);
            images_enemysharktorpedo_2423_7_1[2] = get_internal_image(9364);
            images_enemysharktorpedo_2423_7_1[3] = get_internal_image(9365);
            images_enemysharktorpedo_2423_7_1[4] = get_internal_image(9366);
            images_enemysharktorpedo_2423_7_1[5] = get_internal_image(9679);
            images_enemysharktorpedo_2423_7_1[6] = get_internal_image(10759);
            images_enemysharktorpedo_2423_7_16[0] = get_internal_image(10786);
            images_enemysharktorpedo_2423_7_16[1] = get_internal_image(10794);
            images_enemysharktorpedo_2423_7_16[2] = get_internal_image(10923);
            images_enemysharktorpedo_2423_7_16[3] = get_internal_image(8857);
            images_enemysharktorpedo_2423_7_16[4] = get_internal_image(10988);
            images_enemysharktorpedo_2423_7_16[5] = get_internal_image(10989);
            images_enemysharktorpedo_2423_7_16[6] = get_internal_image(11010);
            images_enemysharktorpedo_2423_7_17[0] = get_internal_image(11012);
            images_enemysharktorpedo_2423_7_17[1] = get_internal_image(11525);
            images_enemysharktorpedo_2423_7_17[2] = get_internal_image(11593);
            images_enemysharktorpedo_2423_7_17[3] = get_internal_image(11594);
            images_enemysharktorpedo_2423_7_17[4] = get_internal_image(11595);
            images_enemysharktorpedo_2423_7_17[5] = get_internal_image(11596);
            images_enemysharktorpedo_2423_7_17[6] = get_internal_image(11597);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(6, -2);
    }
};
FrameObject * create_enemysharktorpedo_2423(int x, int y)
{
    return new (Active::pool.create()) EnemySharkTorpedo_2423(x, y);
}
static Image* images_levelcreekplatform_2424_0_0[1];
static Direction direction_levelcreekplatform_2424_0_0 = {0, 100, 100, 0, 1, images_levelcreekplatform_2424_0_0, 1};
static Animation anim_levelcreekplatform_2424_0 = {&direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, NULL, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0, &direction_levelcreekplatform_2424_0_0};
static Animation * anim_array_levelcreekplatform_2424[1] = {&anim_levelcreekplatform_2424_0};
static Animations anim_levelcreekplatform_2424 = {1, &anim_array_levelcreekplatform_2424[0]};
static bool anim_levelcreekplatform_2424_initialized;
class LevelCreekPlatform_2424 : public Active
{
public:
    LevelCreekPlatform_2424(int x, int y) : Active(x, y, LevelCreekPlatform_2424_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_CreekPlatform", 19);
#endif
        this->animations = &anim_levelcreekplatform_2424;
        if (!anim_levelcreekplatform_2424_initialized) {
            anim_levelcreekplatform_2424_initialized = true;
            images_levelcreekplatform_2424_0_0[0] = get_internal_image(14759);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 10);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelcreekplatform_2424(int x, int y)
{
    return new (Active::pool.create()) LevelCreekPlatform_2424(x, y);
}
class JCBridgeSegment_2425 : public Backdrop
{
public:
    JCBridgeSegment_2425(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_BridgeSegment", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11658);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcbridgesegment_2425(int x, int y)
{
    return new (Backdrop::pool.create()) JCBridgeSegment_2425(x, y);
}
static Image* images_hazardspikesup_2426_0_0[1];
static Direction direction_hazardspikesup_2426_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_2426_0_0, 1};
static Animation anim_hazardspikesup_2426_0 = {&direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, NULL, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0, &direction_hazardspikesup_2426_0_0};
static Animation * anim_array_hazardspikesup_2426[1] = {&anim_hazardspikesup_2426_0};
static Animations anim_hazardspikesup_2426 = {1, &anim_array_hazardspikesup_2426[0]};
static bool anim_hazardspikesup_2426_initialized;
class HazardSpikesUp_2426 : public Active
{
public:
    HazardSpikesUp_2426(int x, int y) : Active(x, y, HazardSpikesUp_2426_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_2426;
        if (!anim_hazardspikesup_2426_initialized) {
            anim_hazardspikesup_2426_initialized = true;
            images_hazardspikesup_2426_0_0[0] = get_internal_image(290);
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
FrameObject * create_hazardspikesup_2426(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_2426(x, y);
}
static Image* images_leveljccollapsingplatformpiece_2427_0_0[8];
static Direction direction_leveljccollapsingplatformpiece_2427_0_0 = {0, 0, 0, 0, 1, images_leveljccollapsingplatformpiece_2427_0_0, 8};
static Animation anim_leveljccollapsingplatformpiece_2427_0 = {&direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, NULL, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0, &direction_leveljccollapsingplatformpiece_2427_0_0};
static Animation * anim_array_leveljccollapsingplatformpiece_2427[1] = {&anim_leveljccollapsingplatformpiece_2427_0};
static Animations anim_leveljccollapsingplatformpiece_2427 = {1, &anim_array_leveljccollapsingplatformpiece_2427[0]};
static bool anim_leveljccollapsingplatformpiece_2427_initialized;
class LevelJCCollapsingPlatformPiece_2427 : public Active
{
public:
    LevelJCCollapsingPlatformPiece_2427(int x, int y) : Active(x, y, LevelJCCollapsingPlatformPiece_2427_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_JCCollapsingPlatformPiece", 31);
#endif
        this->animations = &anim_leveljccollapsingplatformpiece_2427;
        if (!anim_leveljccollapsingplatformpiece_2427_initialized) {
            anim_leveljccollapsingplatformpiece_2427_initialized = true;
            images_leveljccollapsingplatformpiece_2427_0_0[0] = get_internal_image(1113);
            images_leveljccollapsingplatformpiece_2427_0_0[1] = get_internal_image(1118);
            images_leveljccollapsingplatformpiece_2427_0_0[2] = get_internal_image(6987);
            images_leveljccollapsingplatformpiece_2427_0_0[3] = get_internal_image(5174);
            images_leveljccollapsingplatformpiece_2427_0_0[4] = get_internal_image(8465);
            images_leveljccollapsingplatformpiece_2427_0_0[5] = get_internal_image(8497);
            images_leveljccollapsingplatformpiece_2427_0_0[6] = get_internal_image(8499);
            images_leveljccollapsingplatformpiece_2427_0_0[7] = get_internal_image(8532);
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
FrameObject * create_leveljccollapsingplatformpiece_2427(int x, int y)
{
    return new (Active::pool.create()) LevelJCCollapsingPlatformPiece_2427(x, y);
}
static Image* images_gimmickbubblespringback2_2428_0_0[1];
static Direction direction_gimmickbubblespringback2_2428_0_0 = {0, 50, 50, 0, 1, images_gimmickbubblespringback2_2428_0_0, 1};
static Image* images_gimmickbubblespringback2_2428_0_1[1];
static Direction direction_gimmickbubblespringback2_2428_0_1 = {1, 50, 50, 0, 1, images_gimmickbubblespringback2_2428_0_1, 1};
static Animation anim_gimmickbubblespringback2_2428_0 = {&direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_1, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0, &direction_gimmickbubblespringback2_2428_0_0};
static Image* images_gimmickbubblespringback2_2428_7_0[8];
static Direction direction_gimmickbubblespringback2_2428_7_0 = {0, 100, 100, 0, 1, images_gimmickbubblespringback2_2428_7_0, 8};
static Image* images_gimmickbubblespringback2_2428_7_1[8];
static Direction direction_gimmickbubblespringback2_2428_7_1 = {1, 100, 100, 0, 1, images_gimmickbubblespringback2_2428_7_1, 8};
static Animation anim_gimmickbubblespringback2_2428_7 = {&direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_1, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0, &direction_gimmickbubblespringback2_2428_7_0};
static Animation * anim_array_gimmickbubblespringback2_2428[8] = {&anim_gimmickbubblespringback2_2428_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickbubblespringback2_2428_7};
static Animations anim_gimmickbubblespringback2_2428 = {8, &anim_array_gimmickbubblespringback2_2428[0]};
static bool anim_gimmickbubblespringback2_2428_initialized;
class GimmickBubbleSpringBack2_2428 : public Active
{
public:
    GimmickBubbleSpringBack2_2428(int x, int y) : Active(x, y, GimmickBubbleSpringBack2_2428_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BubbleSpringBack 2", 26);
#endif
        this->animations = &anim_gimmickbubblespringback2_2428;
        if (!anim_gimmickbubblespringback2_2428_initialized) {
            anim_gimmickbubblespringback2_2428_initialized = true;
            images_gimmickbubblespringback2_2428_0_0[0] = get_internal_image(2286);
            images_gimmickbubblespringback2_2428_0_1[0] = get_internal_image(2329);
            images_gimmickbubblespringback2_2428_7_0[0] = get_internal_image(2286);
            images_gimmickbubblespringback2_2428_7_0[1] = get_internal_image(2349);
            images_gimmickbubblespringback2_2428_7_0[2] = get_internal_image(2361);
            images_gimmickbubblespringback2_2428_7_0[3] = get_internal_image(2366);
            images_gimmickbubblespringback2_2428_7_0[4] = get_internal_image(2374);
            images_gimmickbubblespringback2_2428_7_0[5] = get_internal_image(2380);
            images_gimmickbubblespringback2_2428_7_0[6] = get_internal_image(2384);
            images_gimmickbubblespringback2_2428_7_0[7] = get_internal_image(2385);
            images_gimmickbubblespringback2_2428_7_1[0] = get_internal_image(2329);
            images_gimmickbubblespringback2_2428_7_1[1] = get_internal_image(2414);
            images_gimmickbubblespringback2_2428_7_1[2] = get_internal_image(2420);
            images_gimmickbubblespringback2_2428_7_1[3] = get_internal_image(2426);
            images_gimmickbubblespringback2_2428_7_1[4] = get_internal_image(2429);
            images_gimmickbubblespringback2_2428_7_1[5] = get_internal_image(2431);
            images_gimmickbubblespringback2_2428_7_1[6] = get_internal_image(2432);
            images_gimmickbubblespringback2_2428_7_1[7] = get_internal_image(2433);
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
FrameObject * create_gimmickbubblespringback2_2428(int x, int y)
{
    return new (Active::pool.create()) GimmickBubbleSpringBack2_2428(x, y);
}
static Image* images_gimmickbubblespringfront2_2429_0_0[1];
static Direction direction_gimmickbubblespringfront2_2429_0_0 = {0, 50, 50, 0, 1, images_gimmickbubblespringfront2_2429_0_0, 1};
static Image* images_gimmickbubblespringfront2_2429_0_1[1];
static Direction direction_gimmickbubblespringfront2_2429_0_1 = {1, 50, 50, 0, 1, images_gimmickbubblespringfront2_2429_0_1, 1};
static Animation anim_gimmickbubblespringfront2_2429_0 = {&direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_1, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0, &direction_gimmickbubblespringfront2_2429_0_0};
static Animation * anim_array_gimmickbubblespringfront2_2429[1] = {&anim_gimmickbubblespringfront2_2429_0};
static Animations anim_gimmickbubblespringfront2_2429 = {1, &anim_array_gimmickbubblespringfront2_2429[0]};
static bool anim_gimmickbubblespringfront2_2429_initialized;
class GimmickBubbleSpringFront2_2429 : public Active
{
public:
    GimmickBubbleSpringFront2_2429(int x, int y) : Active(x, y, GimmickBubbleSpringFront2_2429_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BubbleSpringFront 2", 27);
#endif
        this->animations = &anim_gimmickbubblespringfront2_2429;
        if (!anim_gimmickbubblespringfront2_2429_initialized) {
            anim_gimmickbubblespringfront2_2429_initialized = true;
            images_gimmickbubblespringfront2_2429_0_0[0] = get_internal_image(2434);
            images_gimmickbubblespringfront2_2429_0_1[0] = get_internal_image(2447);
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
FrameObject * create_gimmickbubblespringfront2_2429(int x, int y)
{
    return new (Active::pool.create()) GimmickBubbleSpringFront2_2429(x, y);
}
static Image* images_bossicecrystal_2430_0_0[1];
static Direction direction_bossicecrystal_2430_0_0 = {0, 50, 50, 0, 1, images_bossicecrystal_2430_0_0, 1};
static Animation anim_bossicecrystal_2430_0 = {&direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, NULL, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0, &direction_bossicecrystal_2430_0_0};
static Animation * anim_array_bossicecrystal_2430[1] = {&anim_bossicecrystal_2430_0};
static Animations anim_bossicecrystal_2430 = {1, &anim_array_bossicecrystal_2430[0]};
static bool anim_bossicecrystal_2430_initialized;
class BossIceCrystal_2430 : public Active
{
public:
    BossIceCrystal_2430(int x, int y) : Active(x, y, BossIceCrystal_2430_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_IceCrystal", 15);
#endif
        this->animations = &anim_bossicecrystal_2430;
        if (!anim_bossicecrystal_2430_initialized) {
            anim_bossicecrystal_2430_initialized = true;
            images_bossicecrystal_2430_0_0[0] = get_internal_image(3725);
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
FrameObject * create_bossicecrystal_2430(int x, int y)
{
    return new (Active::pool.create()) BossIceCrystal_2430(x, y);
}
static Image* images_effectstickyice_2431_0_0[1];
static Direction direction_effectstickyice_2431_0_0 = {0, 50, 50, 0, 1, images_effectstickyice_2431_0_0, 1};
static Animation anim_effectstickyice_2431_0 = {&direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, NULL, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0, &direction_effectstickyice_2431_0_0};
static Animation * anim_array_effectstickyice_2431[1] = {&anim_effectstickyice_2431_0};
static Animations anim_effectstickyice_2431 = {1, &anim_array_effectstickyice_2431[0]};
static bool anim_effectstickyice_2431_initialized;
class EffectStickyIce_2431 : public Active
{
public:
    EffectStickyIce_2431(int x, int y) : Active(x, y, EffectStickyIce_2431_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_StickyIce", 16);
#endif
        this->animations = &anim_effectstickyice_2431;
        if (!anim_effectstickyice_2431_initialized) {
            anim_effectstickyice_2431_initialized = true;
            images_effectstickyice_2431_0_0[0] = get_internal_image(12278);
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
FrameObject * create_effectstickyice_2431(int x, int y)
{
    return new (Active::pool.create()) EffectStickyIce_2431(x, y);
}
static Image* images_bosshovercopchargeglow_2432_4_0[8];
static Direction direction_bosshovercopchargeglow_2432_4_0 = {0, 50, 50, 0, 1, images_bosshovercopchargeglow_2432_4_0, 8};
static Image* images_bosshovercopchargeglow_2432_4_16[8];
static Direction direction_bosshovercopchargeglow_2432_4_16 = {16, 50, 50, 0, 1, images_bosshovercopchargeglow_2432_4_16, 8};
static Animation anim_bosshovercopchargeglow_2432_4 = {&direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, NULL, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, &direction_bosshovercopchargeglow_2432_4_16, NULL, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0, &direction_bosshovercopchargeglow_2432_4_0};
static Animation * anim_array_bosshovercopchargeglow_2432[5] = {NULL, NULL, NULL, NULL, &anim_bosshovercopchargeglow_2432_4};
static Animations anim_bosshovercopchargeglow_2432 = {5, &anim_array_bosshovercopchargeglow_2432[0]};
static bool anim_bosshovercopchargeglow_2432_initialized;
class BossHoverCopChargeglow_2432 : public Active
{
public:
    BossHoverCopChargeglow_2432(int x, int y) : Active(x, y, BossHoverCopChargeglow_2432_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopChargeglow", 23);
#endif
        this->animations = &anim_bosshovercopchargeglow_2432;
        if (!anim_bosshovercopchargeglow_2432_initialized) {
            anim_bosshovercopchargeglow_2432_initialized = true;
            images_bosshovercopchargeglow_2432_4_0[0] = get_internal_image(2348);
            images_bosshovercopchargeglow_2432_4_0[1] = get_internal_image(2280);
            images_bosshovercopchargeglow_2432_4_0[2] = get_internal_image(651);
            images_bosshovercopchargeglow_2432_4_0[3] = get_internal_image(0);
            images_bosshovercopchargeglow_2432_4_0[4] = get_internal_image(1067);
            images_bosshovercopchargeglow_2432_4_0[5] = get_internal_image(2410);
            images_bosshovercopchargeglow_2432_4_0[6] = get_internal_image(2405);
            images_bosshovercopchargeglow_2432_4_0[7] = get_internal_image(2411);
            images_bosshovercopchargeglow_2432_4_16[0] = get_internal_image(2412);
            images_bosshovercopchargeglow_2432_4_16[1] = get_internal_image(2413);
            images_bosshovercopchargeglow_2432_4_16[2] = get_internal_image(2496);
            images_bosshovercopchargeglow_2432_4_16[3] = get_internal_image(2762);
            images_bosshovercopchargeglow_2432_4_16[4] = get_internal_image(2764);
            images_bosshovercopchargeglow_2432_4_16[5] = get_internal_image(3438);
            images_bosshovercopchargeglow_2432_4_16[6] = get_internal_image(4877);
            images_bosshovercopchargeglow_2432_4_16[7] = get_internal_image(4878);
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
FrameObject * create_bosshovercopchargeglow_2432(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopChargeglow_2432(x, y);
}
static Image* images_bossicemissile_2433_0_0[1];
static Direction direction_bossicemissile_2433_0_0 = {0, 50, 50, 0, 1, images_bossicemissile_2433_0_0, 1};
static Image* images_bossicemissile_2433_0_16[1];
static Direction direction_bossicemissile_2433_0_16 = {16, 50, 50, 0, 1, images_bossicemissile_2433_0_16, 1};
static Animation anim_bossicemissile_2433_0 = {&direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, NULL, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, &direction_bossicemissile_2433_0_16, NULL, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0, &direction_bossicemissile_2433_0_0};
static Animation * anim_array_bossicemissile_2433[1] = {&anim_bossicemissile_2433_0};
static Animations anim_bossicemissile_2433 = {1, &anim_array_bossicemissile_2433[0]};
static bool anim_bossicemissile_2433_initialized;
class BossIceMissile_2433 : public Active
{
public:
    BossIceMissile_2433(int x, int y) : Active(x, y, BossIceMissile_2433_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_IceMissile", 15);
#endif
        this->animations = &anim_bossicemissile_2433;
        if (!anim_bossicemissile_2433_initialized) {
            anim_bossicemissile_2433_initialized = true;
            images_bossicemissile_2433_0_0[0] = get_internal_image(12279);
            images_bossicemissile_2433_0_16[0] = get_internal_image(8725);
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
FrameObject * create_bossicemissile_2433(int x, int y)
{
    return new (Active::pool.create()) BossIceMissile_2433(x, y);
}
class JCFlatGround2_2434 : public Backdrop
{
public:
    JCFlatGround2_2434(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_FlatGround 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13314);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcflatground2_2434(int x, int y)
{
    return new (Backdrop::pool.create()) JCFlatGround2_2434(x, y);
}
class JCDirt23_2435 : public Backdrop
{
public:
    JCDirt23_2435(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 23", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9300);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt23_2435(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt23_2435(x, y);
}
class JCDirt20_2436 : public Backdrop
{
public:
    JCDirt20_2436(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 20", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9298);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt20_2436(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt20_2436(x, y);
}
class JCDirt21_2437 : public Backdrop
{
public:
    JCDirt21_2437(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 21", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9294);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt21_2437(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt21_2437(x, y);
}
class JCDirt22_2438 : public Backdrop
{
public:
    JCDirt22_2438(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 22", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9299);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt22_2438(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt22_2438(x, y);
}
class JCDirt24_2439 : public Backdrop
{
public:
    JCDirt24_2439(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt 24", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9301);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcdirt24_2439(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt24_2439(x, y);
}
static Image* images_bosshovercophook2_2440_0_0[1];
static Direction direction_bosshovercophook2_2440_0_0 = {0, 50, 50, 0, 1, images_bosshovercophook2_2440_0_0, 1};
static Animation anim_bosshovercophook2_2440_0 = {&direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, NULL, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0, &direction_bosshovercophook2_2440_0_0};
static Animation * anim_array_bosshovercophook2_2440[1] = {&anim_bosshovercophook2_2440_0};
static Animations anim_bosshovercophook2_2440 = {1, &anim_array_bosshovercophook2_2440[0]};
static bool anim_bosshovercophook2_2440_initialized;
class BossHoverCopHook2_2440 : public Active
{
public:
    BossHoverCopHook2_2440(int x, int y) : Active(x, y, BossHoverCopHook2_2440_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopHook 2", 19);
#endif
        this->animations = &anim_bosshovercophook2_2440;
        if (!anim_bosshovercophook2_2440_initialized) {
            anim_bosshovercophook2_2440_initialized = true;
            images_bosshovercophook2_2440_0_0[0] = get_internal_image(5101);
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
FrameObject * create_bosshovercophook2_2440(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopHook2_2440(x, y);
}
static Image* images_playericedeath_2441_0_0[6];
static Direction direction_playericedeath_2441_0_0 = {0, 0, 0, 0, 1, images_playericedeath_2441_0_0, 6};
static Animation anim_playericedeath_2441_0 = {&direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, NULL, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0, &direction_playericedeath_2441_0_0};
static Image* images_playericedeath_2441_7_0[1];
static Direction direction_playericedeath_2441_7_0 = {0, 50, 50, 0, -1, images_playericedeath_2441_7_0, 1};
static Animation anim_playericedeath_2441_7 = {&direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, NULL, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0, &direction_playericedeath_2441_7_0};
static Animation * anim_array_playericedeath_2441[8] = {&anim_playericedeath_2441_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playericedeath_2441_7};
static Animations anim_playericedeath_2441 = {8, &anim_array_playericedeath_2441[0]};
static bool anim_playericedeath_2441_initialized;
class PlayerIceDeath_2441 : public Active
{
public:
    PlayerIceDeath_2441(int x, int y) : Active(x, y, PlayerIceDeath_2441_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_IceDeath", 15);
#endif
        set_visible(false);
        this->animations = &anim_playericedeath_2441;
        if (!anim_playericedeath_2441_initialized) {
            anim_playericedeath_2441_initialized = true;
            images_playericedeath_2441_0_0[0] = get_internal_image(3721);
            images_playericedeath_2441_0_0[1] = get_internal_image(3722);
            images_playericedeath_2441_0_0[2] = get_internal_image(3730);
            images_playericedeath_2441_0_0[3] = get_internal_image(3730);
            images_playericedeath_2441_0_0[4] = get_internal_image(243);
            images_playericedeath_2441_0_0[5] = get_internal_image(3722);
            images_playericedeath_2441_7_0[0] = get_internal_image(11656);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_653_player_icedeath.value;
        if (!global_data_653_player_icedeath.init) {
            global_data_653_player_icedeath.init = true;
        }
    }
};
FrameObject * create_playericedeath_2441(int x, int y)
{
    return new (Active::pool.create()) PlayerIceDeath_2441(x, y);
}
static Image* images_gimmickbubblespringspawner_2442_0_0[1];
static Direction direction_gimmickbubblespringspawner_2442_0_0 = {0, 50, 50, 0, 1, images_gimmickbubblespringspawner_2442_0_0, 1};
static Animation anim_gimmickbubblespringspawner_2442_0 = {&direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, NULL, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0, &direction_gimmickbubblespringspawner_2442_0_0};
static Animation * anim_array_gimmickbubblespringspawner_2442[1] = {&anim_gimmickbubblespringspawner_2442_0};
static Animations anim_gimmickbubblespringspawner_2442 = {1, &anim_array_gimmickbubblespringspawner_2442[0]};
static bool anim_gimmickbubblespringspawner_2442_initialized;
class GimmickBubbleSpringSpawner_2442 : public Active
{
public:
    GimmickBubbleSpringSpawner_2442(int x, int y) : Active(x, y, GimmickBubbleSpringSpawner_2442_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BubbleSpringSpawner", 27);
#endif
        this->animations = &anim_gimmickbubblespringspawner_2442;
        if (!anim_gimmickbubblespringspawner_2442_initialized) {
            anim_gimmickbubblespringspawner_2442_initialized = true;
            images_gimmickbubblespringspawner_2442_0_0[0] = get_internal_image(2441);
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
FrameObject * create_gimmickbubblespringspawner_2442(int x, int y)
{
    return new (Active::pool.create()) GimmickBubbleSpringSpawner_2442(x, y);
}
static Image* images_enemybubblorbiter_2443_0_0[1];
static Direction direction_enemybubblorbiter_2443_0_0 = {0, 50, 50, 0, 1, images_enemybubblorbiter_2443_0_0, 1};
static Image* images_enemybubblorbiter_2443_0_16[1];
static Direction direction_enemybubblorbiter_2443_0_16 = {16, 50, 50, 0, 1, images_enemybubblorbiter_2443_0_16, 1};
static Animation anim_enemybubblorbiter_2443_0 = {&direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, NULL, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, &direction_enemybubblorbiter_2443_0_16, NULL, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0, &direction_enemybubblorbiter_2443_0_0};
static Animation * anim_array_enemybubblorbiter_2443[1] = {&anim_enemybubblorbiter_2443_0};
static Animations anim_enemybubblorbiter_2443 = {1, &anim_array_enemybubblorbiter_2443[0]};
static bool anim_enemybubblorbiter_2443_initialized;
class EnemyBubblorbiter_2443 : public Active
{
public:
    EnemyBubblorbiter_2443(int x, int y) : Active(x, y, EnemyBubblorbiter_2443_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Bubblorbiter", 18);
#endif
        this->animations = &anim_enemybubblorbiter_2443;
        if (!anim_enemybubblorbiter_2443_initialized) {
            anim_enemybubblorbiter_2443_initialized = true;
            images_enemybubblorbiter_2443_0_0[0] = get_internal_image(10778);
            images_enemybubblorbiter_2443_0_16[0] = get_internal_image(10777);
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
FrameObject * create_enemybubblorbiter_2443(int x, int y)
{
    return new (Active::pool.create()) EnemyBubblorbiter_2443(x, y);
}
static Image* images_leveljccollapsingplatform_2444_0_0[1];
static Direction direction_leveljccollapsingplatform_2444_0_0 = {0, 50, 50, 0, 1, images_leveljccollapsingplatform_2444_0_0, 1};
static Animation anim_leveljccollapsingplatform_2444_0 = {&direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, NULL, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0, &direction_leveljccollapsingplatform_2444_0_0};
static Animation * anim_array_leveljccollapsingplatform_2444[1] = {&anim_leveljccollapsingplatform_2444_0};
static Animations anim_leveljccollapsingplatform_2444 = {1, &anim_array_leveljccollapsingplatform_2444[0]};
static bool anim_leveljccollapsingplatform_2444_initialized;
class LevelJCCollapsingPlatform_2444 : public Active
{
public:
    LevelJCCollapsingPlatform_2444(int x, int y) : Active(x, y, LevelJCCollapsingPlatform_2444_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_JCCollapsingPlatform", 26);
#endif
        this->animations = &anim_leveljccollapsingplatform_2444;
        if (!anim_leveljccollapsingplatform_2444_initialized) {
            anim_leveljccollapsingplatform_2444_initialized = true;
            images_leveljccollapsingplatform_2444_0_0[0] = get_internal_image(6913);
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
FrameObject * create_leveljccollapsingplatform_2444(int x, int y)
{
    return new (Active::pool.create()) LevelJCCollapsingPlatform_2444(x, y);
}
static Image* images_jcloop1_2445_0_0[1];
static Direction direction_jcloop1_2445_0_0 = {0, 50, 50, 0, 1, images_jcloop1_2445_0_0, 1};
static Animation anim_jcloop1_2445_0 = {&direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, NULL, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0, &direction_jcloop1_2445_0_0};
static Animation * anim_array_jcloop1_2445[1] = {&anim_jcloop1_2445_0};
static Animations anim_jcloop1_2445 = {1, &anim_array_jcloop1_2445[0]};
static bool anim_jcloop1_2445_initialized;
class JCLoop1_2445 : public Active
{
public:
    JCLoop1_2445(int x, int y) : Active(x, y, JCLoop1_2445_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("JC_Loop1", 8);
#endif
        this->animations = &anim_jcloop1_2445;
        if (!anim_jcloop1_2445_initialized) {
            anim_jcloop1_2445_initialized = true;
            images_jcloop1_2445_0_0[0] = get_internal_image(10773);
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
FrameObject * create_jcloop1_2445(int x, int y)
{
    return new (Active::pool.create()) JCLoop1_2445(x, y);
}
static Image* images_jcloop4_2446_0_0[1];
static Direction direction_jcloop4_2446_0_0 = {0, 50, 50, 0, 1, images_jcloop4_2446_0_0, 1};
static Animation anim_jcloop4_2446_0 = {&direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, NULL, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0, &direction_jcloop4_2446_0_0};
static Animation * anim_array_jcloop4_2446[1] = {&anim_jcloop4_2446_0};
static Animations anim_jcloop4_2446 = {1, &anim_array_jcloop4_2446[0]};
static bool anim_jcloop4_2446_initialized;
class JCLoop4_2446 : public Active
{
public:
    JCLoop4_2446(int x, int y) : Active(x, y, JCLoop4_2446_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("JC_Loop 4", 9);
#endif
        this->animations = &anim_jcloop4_2446;
        if (!anim_jcloop4_2446_initialized) {
            anim_jcloop4_2446_initialized = true;
            images_jcloop4_2446_0_0[0] = get_internal_image(365);
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
FrameObject * create_jcloop4_2446(int x, int y)
{
    return new (Active::pool.create()) JCLoop4_2446(x, y);
}
static Image* images_jcloop2_2447_0_0[1];
static Direction direction_jcloop2_2447_0_0 = {0, 50, 50, 0, 1, images_jcloop2_2447_0_0, 1};
static Animation anim_jcloop2_2447_0 = {&direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, NULL, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0, &direction_jcloop2_2447_0_0};
static Animation * anim_array_jcloop2_2447[1] = {&anim_jcloop2_2447_0};
static Animations anim_jcloop2_2447 = {1, &anim_array_jcloop2_2447[0]};
static bool anim_jcloop2_2447_initialized;
class JCLoop2_2447 : public Active
{
public:
    JCLoop2_2447(int x, int y) : Active(x, y, JCLoop2_2447_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("JC_Loop 2", 9);
#endif
        this->animations = &anim_jcloop2_2447;
        if (!anim_jcloop2_2447_initialized) {
            anim_jcloop2_2447_initialized = true;
            images_jcloop2_2447_0_0[0] = get_internal_image(4399);
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
FrameObject * create_jcloop2_2447(int x, int y)
{
    return new (Active::pool.create()) JCLoop2_2447(x, y);
}
static Image* images_jcloop3_2448_0_0[1];
static Direction direction_jcloop3_2448_0_0 = {0, 50, 50, 0, 1, images_jcloop3_2448_0_0, 1};
static Animation anim_jcloop3_2448_0 = {&direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, NULL, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0, &direction_jcloop3_2448_0_0};
static Animation * anim_array_jcloop3_2448[1] = {&anim_jcloop3_2448_0};
static Animations anim_jcloop3_2448 = {1, &anim_array_jcloop3_2448[0]};
static bool anim_jcloop3_2448_initialized;
class JCLoop3_2448 : public Active
{
public:
    JCLoop3_2448(int x, int y) : Active(x, y, JCLoop3_2448_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("JC_Loop 3", 9);
#endif
        this->animations = &anim_jcloop3_2448;
        if (!anim_jcloop3_2448_initialized) {
            anim_jcloop3_2448_initialized = true;
            images_jcloop3_2448_0_0[0] = get_internal_image(3572);
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
FrameObject * create_jcloop3_2448(int x, int y)
{
    return new (Active::pool.create()) JCLoop3_2448(x, y);
}
static Image* images_bosshovercophook_2449_0_0[1];
static Direction direction_bosshovercophook_2449_0_0 = {0, 50, 50, 0, 1, images_bosshovercophook_2449_0_0, 1};
static Image* images_bosshovercophook_2449_0_16[1];
static Direction direction_bosshovercophook_2449_0_16 = {16, 50, 50, 0, 1, images_bosshovercophook_2449_0_16, 1};
static Animation anim_bosshovercophook_2449_0 = {&direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, NULL, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, &direction_bosshovercophook_2449_0_16, NULL, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0, &direction_bosshovercophook_2449_0_0};
static Animation * anim_array_bosshovercophook_2449[1] = {&anim_bosshovercophook_2449_0};
static Animations anim_bosshovercophook_2449 = {1, &anim_array_bosshovercophook_2449[0]};
static bool anim_bosshovercophook_2449_initialized;
class BossHoverCopHook_2449 : public Active
{
public:
    BossHoverCopHook_2449(int x, int y) : Active(x, y, BossHoverCopHook_2449_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HoverCopHook", 17);
#endif
        set_visible(false);
        this->animations = &anim_bosshovercophook_2449;
        if (!anim_bosshovercophook_2449_initialized) {
            anim_bosshovercophook_2449_initialized = true;
            images_bosshovercophook_2449_0_0[0] = get_internal_image(4062);
            images_bosshovercophook_2449_0_16[0] = get_internal_image(4068);
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
FrameObject * create_bosshovercophook_2449(int x, int y)
{
    return new (Active::pool.create()) BossHoverCopHook_2449(x, y);
}
static Image* images_levelslipperysurface_2450_0_0[1];
static Direction direction_levelslipperysurface_2450_0_0 = {0, 50, 50, 0, 1, images_levelslipperysurface_2450_0_0, 1};
static Animation anim_levelslipperysurface_2450_0 = {&direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, NULL, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0, &direction_levelslipperysurface_2450_0_0};
static Animation * anim_array_levelslipperysurface_2450[1] = {&anim_levelslipperysurface_2450_0};
static Animations anim_levelslipperysurface_2450 = {1, &anim_array_levelslipperysurface_2450[0]};
static bool anim_levelslipperysurface_2450_initialized;
class LevelSlipperySurface_2450 : public Active
{
public:
    LevelSlipperySurface_2450(int x, int y) : Active(x, y, LevelSlipperySurface_2450_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_SlipperySurface", 21);
#endif
        set_visible(false);
        this->animations = &anim_levelslipperysurface_2450;
        if (!anim_levelslipperysurface_2450_initialized) {
            anim_levelslipperysurface_2450_initialized = true;
            images_levelslipperysurface_2450_0_0[0] = get_internal_image(431);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 127);
        create_alterables();
    }
};
FrameObject * create_levelslipperysurface_2450(int x, int y)
{
    return new (Active::pool.create()) LevelSlipperySurface_2450(x, y);
}
static Image* images_levelhovercraftlight_2451_0_0[2];
static Direction direction_levelhovercraftlight_2451_0_0 = {0, 10, 10, 0, -1, images_levelhovercraftlight_2451_0_0, 2};
static Image* images_levelhovercraftlight_2451_0_16[2];
static Direction direction_levelhovercraftlight_2451_0_16 = {16, 10, 10, 0, -1, images_levelhovercraftlight_2451_0_16, 2};
static Animation anim_levelhovercraftlight_2451_0 = {&direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, NULL, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, &direction_levelhovercraftlight_2451_0_16, NULL, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0, &direction_levelhovercraftlight_2451_0_0};
static Animation * anim_array_levelhovercraftlight_2451[1] = {&anim_levelhovercraftlight_2451_0};
static Animations anim_levelhovercraftlight_2451 = {1, &anim_array_levelhovercraftlight_2451[0]};
static bool anim_levelhovercraftlight_2451_initialized;
class LevelHovercraftLight_2451 : public Active
{
public:
    LevelHovercraftLight_2451(int x, int y) : Active(x, y, LevelHovercraftLight_2451_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_HovercraftLight", 21);
#endif
        this->animations = &anim_levelhovercraftlight_2451;
        if (!anim_levelhovercraftlight_2451_initialized) {
            anim_levelhovercraftlight_2451_initialized = true;
            images_levelhovercraftlight_2451_0_0[0] = get_internal_image(4704);
            images_levelhovercraftlight_2451_0_0[1] = get_internal_image(4691);
            images_levelhovercraftlight_2451_0_16[0] = get_internal_image(4690);
            images_levelhovercraftlight_2451_0_16[1] = get_internal_image(4724);
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
FrameObject * create_levelhovercraftlight_2451(int x, int y)
{
    return new (Active::pool.create()) LevelHovercraftLight_2451(x, y);
}
static Image* images_hazardspikesdown_2452_0_0[1];
static Direction direction_hazardspikesdown_2452_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_2452_0_0, 1};
static Animation anim_hazardspikesdown_2452_0 = {&direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, NULL, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0, &direction_hazardspikesdown_2452_0_0};
static Animation * anim_array_hazardspikesdown_2452[1] = {&anim_hazardspikesdown_2452_0};
static Animations anim_hazardspikesdown_2452 = {1, &anim_array_hazardspikesdown_2452[0]};
static bool anim_hazardspikesdown_2452_initialized;
class HazardSpikesDown_2452 : public Active
{
public:
    HazardSpikesDown_2452(int x, int y) : Active(x, y, HazardSpikesDown_2452_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_2452;
        if (!anim_hazardspikesdown_2452_initialized) {
            anim_hazardspikesdown_2452_initialized = true;
            images_hazardspikesdown_2452_0_0[0] = get_internal_image(4725);
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
FrameObject * create_hazardspikesdown_2452(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_2452(x, y);
}
static Image* images_hazardspikesleft_2453_0_0[1];
static Direction direction_hazardspikesleft_2453_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_2453_0_0, 1};
static Animation anim_hazardspikesleft_2453_0 = {&direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, NULL, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0, &direction_hazardspikesleft_2453_0_0};
static Animation * anim_array_hazardspikesleft_2453[1] = {&anim_hazardspikesleft_2453_0};
static Animations anim_hazardspikesleft_2453 = {1, &anim_array_hazardspikesleft_2453[0]};
static bool anim_hazardspikesleft_2453_initialized;
class HazardSpikesLeft_2453 : public Active
{
public:
    HazardSpikesLeft_2453(int x, int y) : Active(x, y, HazardSpikesLeft_2453_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_2453;
        if (!anim_hazardspikesleft_2453_initialized) {
            anim_hazardspikesleft_2453_initialized = true;
            images_hazardspikesleft_2453_0_0[0] = get_internal_image(4677);
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
FrameObject * create_hazardspikesleft_2453(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_2453(x, y);
}
static Image* images_hazardspikesright_2454_0_0[1];
static Direction direction_hazardspikesright_2454_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_2454_0_0, 1};
static Animation anim_hazardspikesright_2454_0 = {&direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, NULL, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0, &direction_hazardspikesright_2454_0_0};
static Animation * anim_array_hazardspikesright_2454[1] = {&anim_hazardspikesright_2454_0};
static Animations anim_hazardspikesright_2454 = {1, &anim_array_hazardspikesright_2454[0]};
static bool anim_hazardspikesright_2454_initialized;
class HazardSpikesRight_2454 : public Active
{
public:
    HazardSpikesRight_2454(int x, int y) : Active(x, y, HazardSpikesRight_2454_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_2454;
        if (!anim_hazardspikesright_2454_initialized) {
            anim_hazardspikesright_2454_initialized = true;
            images_hazardspikesright_2454_0_0[0] = get_internal_image(4676);
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
FrameObject * create_hazardspikesright_2454(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_2454(x, y);
}
class JCOceanBottom_2455 : public QuickBackdrop
{
public:
    JCOceanBottom_2455(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_OceanBottom", 14);
#endif
        flags |= BACKGROUND;
        width = 15000;
        height = 727;
        color = Color(0, 4, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_jcoceanbottom_2455(int x, int y)
{
    return new (QuickBackdrop::pool.create()) JCOceanBottom_2455(x, y);
}
static Image* images_levelicebarrier_2456_0_0[1];
static Direction direction_levelicebarrier_2456_0_0 = {0, 50, 50, 0, 1, images_levelicebarrier_2456_0_0, 1};
static Animation anim_levelicebarrier_2456_0 = {&direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, NULL, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0, &direction_levelicebarrier_2456_0_0};
static Animation * anim_array_levelicebarrier_2456[1] = {&anim_levelicebarrier_2456_0};
static Animations anim_levelicebarrier_2456 = {1, &anim_array_levelicebarrier_2456[0]};
static bool anim_levelicebarrier_2456_initialized;
class LevelIceBarrier_2456 : public Active
{
public:
    LevelIceBarrier_2456(int x, int y) : Active(x, y, LevelIceBarrier_2456_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_IceBarrier", 16);
#endif
        this->animations = &anim_levelicebarrier_2456;
        if (!anim_levelicebarrier_2456_initialized) {
            anim_levelicebarrier_2456_initialized = true;
            images_levelicebarrier_2456_0_0[0] = get_internal_image(12280);
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
FrameObject * create_levelicebarrier_2456(int x, int y)
{
    return new (Active::pool.create()) LevelIceBarrier_2456(x, y);
}
static Image* images_bossicering_2457_0_0[8];
static Direction direction_bossicering_2457_0_0 = {0, 100, 100, 0, -1, images_bossicering_2457_0_0, 8};
static Animation anim_bossicering_2457_0 = {&direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, NULL, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0, &direction_bossicering_2457_0_0};
static Animation * anim_array_bossicering_2457[1] = {&anim_bossicering_2457_0};
static Animations anim_bossicering_2457 = {1, &anim_array_bossicering_2457[0]};
static bool anim_bossicering_2457_initialized;
class BossIceRing_2457 : public Active
{
public:
    BossIceRing_2457(int x, int y) : Active(x, y, BossIceRing_2457_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_IceRing", 12);
#endif
        this->animations = &anim_bossicering_2457;
        if (!anim_bossicering_2457_initialized) {
            anim_bossicering_2457_initialized = true;
            images_bossicering_2457_0_0[0] = get_internal_image(13896);
            images_bossicering_2457_0_0[1] = get_internal_image(13900);
            images_bossicering_2457_0_0[2] = get_internal_image(13901);
            images_bossicering_2457_0_0[3] = get_internal_image(13897);
            images_bossicering_2457_0_0[4] = get_internal_image(13902);
            images_bossicering_2457_0_0[5] = get_internal_image(13603);
            images_bossicering_2457_0_0[6] = get_internal_image(13030);
            images_bossicering_2457_0_0[7] = get_internal_image(13898);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(40);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_bossicering_2457(int x, int y)
{
    return new (Active::pool.create()) BossIceRing_2457(x, y);
}
class JCVineWall2_2458 : public Backdrop
{
public:
    JCVineWall2_2458(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_VineWall 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16104);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcvinewall2_2458(int x, int y)
{
    return new (Backdrop::pool.create()) JCVineWall2_2458(x, y);
}
class JCVineWall_2459 : public Backdrop
{
public:
    JCVineWall_2459(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_VineWall", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16103);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcvinewall_2459(int x, int y)
{
    return new (Backdrop::pool.create()) JCVineWall_2459(x, y);
}
static Image* images_gimmickflyingleafplatform_2460_0_0[8];
static Direction direction_gimmickflyingleafplatform_2460_0_0 = {0, 25, 25, 0, -1, images_gimmickflyingleafplatform_2460_0_0, 8};
static Animation anim_gimmickflyingleafplatform_2460_0 = {&direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, NULL, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0, &direction_gimmickflyingleafplatform_2460_0_0};
static Animation * anim_array_gimmickflyingleafplatform_2460[1] = {&anim_gimmickflyingleafplatform_2460_0};
static Animations anim_gimmickflyingleafplatform_2460 = {1, &anim_array_gimmickflyingleafplatform_2460[0]};
static bool anim_gimmickflyingleafplatform_2460_initialized;
class GimmickFlyingLeafPlatform_2460 : public Active
{
public:
    GimmickFlyingLeafPlatform_2460(int x, int y) : Active(x, y, GimmickFlyingLeafPlatform_2460_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FlyingLeafPlatform", 26);
#endif
        this->animations = &anim_gimmickflyingleafplatform_2460;
        if (!anim_gimmickflyingleafplatform_2460_initialized) {
            anim_gimmickflyingleafplatform_2460_initialized = true;
            images_gimmickflyingleafplatform_2460_0_0[0] = get_internal_image(16105);
            images_gimmickflyingleafplatform_2460_0_0[1] = get_internal_image(16107);
            images_gimmickflyingleafplatform_2460_0_0[2] = get_internal_image(16106);
            images_gimmickflyingleafplatform_2460_0_0[3] = get_internal_image(16109);
            images_gimmickflyingleafplatform_2460_0_0[4] = get_internal_image(16110);
            images_gimmickflyingleafplatform_2460_0_0[5] = get_internal_image(16111);
            images_gimmickflyingleafplatform_2460_0_0[6] = get_internal_image(16108);
            images_gimmickflyingleafplatform_2460_0_0[7] = get_internal_image(16113);
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
FrameObject * create_gimmickflyingleafplatform_2460(int x, int y)
{
    return new (Active::pool.create()) GimmickFlyingLeafPlatform_2460(x, y);
}
static Image* images_leveljccollapsingplatform_2461_0_0[1];
static Direction direction_leveljccollapsingplatform_2461_0_0 = {0, 50, 50, 0, 1, images_leveljccollapsingplatform_2461_0_0, 1};
static Animation anim_leveljccollapsingplatform_2461_0 = {&direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, NULL, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0, &direction_leveljccollapsingplatform_2461_0_0};
static Animation * anim_array_leveljccollapsingplatform_2461[1] = {&anim_leveljccollapsingplatform_2461_0};
static Animations anim_leveljccollapsingplatform_2461 = {1, &anim_array_leveljccollapsingplatform_2461[0]};
static bool anim_leveljccollapsingplatform_2461_initialized;
class LevelJCCollapsingPlatform_2461 : public Active
{
public:
    LevelJCCollapsingPlatform_2461(int x, int y) : Active(x, y, LevelJCCollapsingPlatform_2461_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_JCCollapsingPlatform", 26);
#endif
        this->animations = &anim_leveljccollapsingplatform_2461;
        if (!anim_leveljccollapsingplatform_2461_initialized) {
            anim_leveljccollapsingplatform_2461_initialized = true;
            images_leveljccollapsingplatform_2461_0_0[0] = get_internal_image(11684);
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
FrameObject * create_leveljccollapsingplatform_2461(int x, int y)
{
    return new (Active::pool.create()) LevelJCCollapsingPlatform_2461(x, y);
}
static Image* images_gimmickflyingleafplatformmask_2462_0_0[1];
static Direction direction_gimmickflyingleafplatformmask_2462_0_0 = {0, 100, 100, 0, 1, images_gimmickflyingleafplatformmask_2462_0_0, 1};
static Animation anim_gimmickflyingleafplatformmask_2462_0 = {&direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, NULL, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0, &direction_gimmickflyingleafplatformmask_2462_0_0};
static Animation * anim_array_gimmickflyingleafplatformmask_2462[1] = {&anim_gimmickflyingleafplatformmask_2462_0};
static Animations anim_gimmickflyingleafplatformmask_2462 = {1, &anim_array_gimmickflyingleafplatformmask_2462[0]};
static bool anim_gimmickflyingleafplatformmask_2462_initialized;
class GimmickFlyingLeafPlatformMask_2462 : public Active
{
public:
    GimmickFlyingLeafPlatformMask_2462(int x, int y) : Active(x, y, GimmickFlyingLeafPlatformMask_2462_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_FlyingLeafPlatformMask", 30);
#endif
        set_visible(false);
        this->animations = &anim_gimmickflyingleafplatformmask_2462;
        if (!anim_gimmickflyingleafplatformmask_2462_initialized) {
            anim_gimmickflyingleafplatformmask_2462_initialized = true;
            images_gimmickflyingleafplatformmask_2462_0_0[0] = get_internal_image(760);
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
FrameObject * create_gimmickflyingleafplatformmask_2462(int x, int y)
{
    return new (Active::pool.create()) GimmickFlyingLeafPlatformMask_2462(x, y);
}
static Image* images_levelicebarrierpiece_2463_0_0[1];
static Direction direction_levelicebarrierpiece_2463_0_0 = {0, 50, 50, 0, 1, images_levelicebarrierpiece_2463_0_0, 1};
static Animation anim_levelicebarrierpiece_2463_0 = {&direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, NULL, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0, &direction_levelicebarrierpiece_2463_0_0};
static Animation * anim_array_levelicebarrierpiece_2463[1] = {&anim_levelicebarrierpiece_2463_0};
static Animations anim_levelicebarrierpiece_2463 = {1, &anim_array_levelicebarrierpiece_2463[0]};
static bool anim_levelicebarrierpiece_2463_initialized;
class LevelIceBarrierPiece_2463 : public Active
{
public:
    LevelIceBarrierPiece_2463(int x, int y) : Active(x, y, LevelIceBarrierPiece_2463_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_IceBarrierPiece", 21);
#endif
        this->animations = &anim_levelicebarrierpiece_2463;
        if (!anim_levelicebarrierpiece_2463_initialized) {
            anim_levelicebarrierpiece_2463_initialized = true;
            images_levelicebarrierpiece_2463_0_0[0] = get_internal_image(734);
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
FrameObject * create_levelicebarrierpiece_2463(int x, int y)
{
    return new (Active::pool.create()) LevelIceBarrierPiece_2463(x, y);
}
static Image* images_npcneera_2464_0_0[16];
static Direction direction_npcneera_2464_0_0 = {0, 10, 10, 0, -1, images_npcneera_2464_0_0, 16};
static Image* images_npcneera_2464_0_1[10];
static Direction direction_npcneera_2464_0_1 = {1, 20, 20, 0, -1, images_npcneera_2464_0_1, 10};
static Image* images_npcneera_2464_0_16[16];
static Direction direction_npcneera_2464_0_16 = {16, 10, 10, 0, -1, images_npcneera_2464_0_16, 16};
static Image* images_npcneera_2464_0_17[10];
static Direction direction_npcneera_2464_0_17 = {17, 20, 20, 0, -1, images_npcneera_2464_0_17, 10};
static Animation anim_npcneera_2464_0 = {&direction_npcneera_2464_0_0, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_1, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_16, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_17, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0, &direction_npcneera_2464_0_0};
static Image* images_npcneera_2464_1_1[8];
static Direction direction_npcneera_2464_1_1 = {1, 20, 20, 0, -1, images_npcneera_2464_1_1, 8};
static Image* images_npcneera_2464_1_17[8];
static Direction direction_npcneera_2464_1_17 = {17, 20, 20, 0, -1, images_npcneera_2464_1_17, 8};
static Animation anim_npcneera_2464_1 = {&direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, NULL, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, &direction_npcneera_2464_1_17, NULL, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1, &direction_npcneera_2464_1_1};
static Image* images_npcneera_2464_5_0[21];
static Direction direction_npcneera_2464_5_0 = {0, 0, 0, 0, -1, images_npcneera_2464_5_0, 21};
static Image* images_npcneera_2464_5_16[21];
static Direction direction_npcneera_2464_5_16 = {16, 0, 0, 0, -1, images_npcneera_2464_5_16, 21};
static Animation anim_npcneera_2464_5 = {&direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, NULL, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, &direction_npcneera_2464_5_16, NULL, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0, &direction_npcneera_2464_5_0};
static Image* images_npcneera_2464_7_0[4];
static Direction direction_npcneera_2464_7_0 = {0, 12, 12, 3, -1, images_npcneera_2464_7_0, 4};
static Image* images_npcneera_2464_7_1[4];
static Direction direction_npcneera_2464_7_1 = {1, 12, 12, 3, -1, images_npcneera_2464_7_1, 4};
static Image* images_npcneera_2464_7_16[4];
static Direction direction_npcneera_2464_7_16 = {16, 12, 12, 3, -1, images_npcneera_2464_7_16, 4};
static Image* images_npcneera_2464_7_17[4];
static Direction direction_npcneera_2464_7_17 = {17, 12, 12, 3, -1, images_npcneera_2464_7_17, 4};
static Animation anim_npcneera_2464_7 = {&direction_npcneera_2464_7_0, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_1, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_16, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_17, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0, &direction_npcneera_2464_7_0};
static Image* images_npcneera_2464_8_1[8];
static Direction direction_npcneera_2464_8_1 = {1, 50, 50, 7, -1, images_npcneera_2464_8_1, 8};
static Image* images_npcneera_2464_8_17[8];
static Direction direction_npcneera_2464_8_17 = {17, 50, 50, 7, -1, images_npcneera_2464_8_17, 8};
static Animation anim_npcneera_2464_8 = {&direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, NULL, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, &direction_npcneera_2464_8_17, NULL, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1, &direction_npcneera_2464_8_1};
static Image* images_npcneera_2464_10_0[1];
static Direction direction_npcneera_2464_10_0 = {0, 25, 25, 0, -1, images_npcneera_2464_10_0, 1};
static Image* images_npcneera_2464_10_1[1];
static Direction direction_npcneera_2464_10_1 = {1, 50, 50, 0, -1, images_npcneera_2464_10_1, 1};
static Image* images_npcneera_2464_10_16[1];
static Direction direction_npcneera_2464_10_16 = {16, 25, 25, 0, -1, images_npcneera_2464_10_16, 1};
static Image* images_npcneera_2464_10_17[1];
static Direction direction_npcneera_2464_10_17 = {17, 50, 50, 0, -1, images_npcneera_2464_10_17, 1};
static Animation anim_npcneera_2464_10 = {&direction_npcneera_2464_10_0, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_1, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_16, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_17, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0, &direction_npcneera_2464_10_0};
static Image* images_npcneera_2464_12_0[7];
static Direction direction_npcneera_2464_12_0 = {0, 20, 20, 0, 1, images_npcneera_2464_12_0, 7};
static Image* images_npcneera_2464_12_16[7];
static Direction direction_npcneera_2464_12_16 = {16, 20, 20, 0, 1, images_npcneera_2464_12_16, 7};
static Animation anim_npcneera_2464_12 = {&direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, NULL, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, &direction_npcneera_2464_12_16, NULL, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0, &direction_npcneera_2464_12_0};
static Image* images_npcneera_2464_13_0[5];
static Direction direction_npcneera_2464_13_0 = {0, 25, 25, 4, 5, images_npcneera_2464_13_0, 5};
static Image* images_npcneera_2464_13_8[3];
static Direction direction_npcneera_2464_13_8 = {8, 50, 50, 0, 1, images_npcneera_2464_13_8, 3};
static Image* images_npcneera_2464_13_16[5];
static Direction direction_npcneera_2464_13_16 = {16, 25, 25, 4, 5, images_npcneera_2464_13_16, 5};
static Animation anim_npcneera_2464_13 = {&direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, NULL, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, &direction_npcneera_2464_13_8, NULL, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, &direction_npcneera_2464_13_16, NULL, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0, &direction_npcneera_2464_13_0};
static Image* images_npcneera_2464_14_0[8];
static Direction direction_npcneera_2464_14_0 = {0, 20, 20, 0, 1, images_npcneera_2464_14_0, 8};
static Image* images_npcneera_2464_14_16[8];
static Direction direction_npcneera_2464_14_16 = {16, 20, 20, 0, 1, images_npcneera_2464_14_16, 8};
static Animation anim_npcneera_2464_14 = {&direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, NULL, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, &direction_npcneera_2464_14_16, NULL, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0, &direction_npcneera_2464_14_0};
static Image* images_npcneera_2464_15_0[8];
static Direction direction_npcneera_2464_15_0 = {0, 25, 25, 0, 1, images_npcneera_2464_15_0, 8};
static Image* images_npcneera_2464_15_16[8];
static Direction direction_npcneera_2464_15_16 = {16, 25, 25, 0, 1, images_npcneera_2464_15_16, 8};
static Animation anim_npcneera_2464_15 = {&direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, NULL, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, &direction_npcneera_2464_15_16, NULL, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0, &direction_npcneera_2464_15_0};
static Image* images_npcneera_2464_16_0[8];
static Direction direction_npcneera_2464_16_0 = {0, 50, 50, 0, -1, images_npcneera_2464_16_0, 8};
static Image* images_npcneera_2464_16_16[8];
static Direction direction_npcneera_2464_16_16 = {16, 50, 50, 0, -1, images_npcneera_2464_16_16, 8};
static Animation anim_npcneera_2464_16 = {&direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, NULL, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, &direction_npcneera_2464_16_16, NULL, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0, &direction_npcneera_2464_16_0};
static Image* images_npcneera_2464_17_0[10];
static Direction direction_npcneera_2464_17_0 = {0, 14, 14, 0, -1, images_npcneera_2464_17_0, 10};
static Image* images_npcneera_2464_17_1[10];
static Direction direction_npcneera_2464_17_1 = {1, 14, 14, 0, -1, images_npcneera_2464_17_1, 10};
static Image* images_npcneera_2464_17_16[10];
static Direction direction_npcneera_2464_17_16 = {16, 14, 14, 0, -1, images_npcneera_2464_17_16, 10};
static Image* images_npcneera_2464_17_17[10];
static Direction direction_npcneera_2464_17_17 = {17, 14, 14, 0, -1, images_npcneera_2464_17_17, 10};
static Animation anim_npcneera_2464_17 = {&direction_npcneera_2464_17_0, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_1, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_16, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_17, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0, &direction_npcneera_2464_17_0};
static Animation * anim_array_npcneera_2464[18] = {&anim_npcneera_2464_0, &anim_npcneera_2464_1, NULL, NULL, NULL, &anim_npcneera_2464_5, NULL, &anim_npcneera_2464_7, &anim_npcneera_2464_8, NULL, &anim_npcneera_2464_10, NULL, &anim_npcneera_2464_12, &anim_npcneera_2464_13, &anim_npcneera_2464_14, &anim_npcneera_2464_15, &anim_npcneera_2464_16, &anim_npcneera_2464_17};
static Animations anim_npcneera_2464 = {18, &anim_array_npcneera_2464[0]};
static bool anim_npcneera_2464_initialized;
class NPCNeera_2464 : public Active
{
public:
    NPCNeera_2464(int x, int y) : Active(x, y, NPCNeera_2464_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Neera", 9);
#endif
        this->animations = &anim_npcneera_2464;
        if (!anim_npcneera_2464_initialized) {
            anim_npcneera_2464_initialized = true;
            images_npcneera_2464_0_0[0] = get_internal_image(8062);
            images_npcneera_2464_0_0[1] = get_internal_image(11905);
            images_npcneera_2464_0_0[2] = get_internal_image(11906);
            images_npcneera_2464_0_0[3] = get_internal_image(11907);
            images_npcneera_2464_0_0[4] = get_internal_image(11908);
            images_npcneera_2464_0_0[5] = get_internal_image(11916);
            images_npcneera_2464_0_0[6] = get_internal_image(11909);
            images_npcneera_2464_0_0[7] = get_internal_image(11928);
            images_npcneera_2464_0_0[8] = get_internal_image(11929);
            images_npcneera_2464_0_0[9] = get_internal_image(11930);
            images_npcneera_2464_0_0[10] = get_internal_image(11931);
            images_npcneera_2464_0_0[11] = get_internal_image(11932);
            images_npcneera_2464_0_0[12] = get_internal_image(11908);
            images_npcneera_2464_0_0[13] = get_internal_image(11933);
            images_npcneera_2464_0_0[14] = get_internal_image(11934);
            images_npcneera_2464_0_0[15] = get_internal_image(11928);
            images_npcneera_2464_0_1[0] = get_internal_image(1069);
            images_npcneera_2464_0_1[1] = get_internal_image(1267);
            images_npcneera_2464_0_1[2] = get_internal_image(2123);
            images_npcneera_2464_0_1[3] = get_internal_image(1266);
            images_npcneera_2464_0_1[4] = get_internal_image(8050);
            images_npcneera_2464_0_1[5] = get_internal_image(2174);
            images_npcneera_2464_0_1[6] = get_internal_image(2877);
            images_npcneera_2464_0_1[7] = get_internal_image(7989);
            images_npcneera_2464_0_1[8] = get_internal_image(8032);
            images_npcneera_2464_0_1[9] = get_internal_image(7990);
            images_npcneera_2464_0_16[0] = get_internal_image(9349);
            images_npcneera_2464_0_16[1] = get_internal_image(11935);
            images_npcneera_2464_0_16[2] = get_internal_image(11945);
            images_npcneera_2464_0_16[3] = get_internal_image(11946);
            images_npcneera_2464_0_16[4] = get_internal_image(11947);
            images_npcneera_2464_0_16[5] = get_internal_image(11949);
            images_npcneera_2464_0_16[6] = get_internal_image(11951);
            images_npcneera_2464_0_16[7] = get_internal_image(11952);
            images_npcneera_2464_0_16[8] = get_internal_image(11953);
            images_npcneera_2464_0_16[9] = get_internal_image(11954);
            images_npcneera_2464_0_16[10] = get_internal_image(13288);
            images_npcneera_2464_0_16[11] = get_internal_image(13297);
            images_npcneera_2464_0_16[12] = get_internal_image(11947);
            images_npcneera_2464_0_16[13] = get_internal_image(13298);
            images_npcneera_2464_0_16[14] = get_internal_image(13299);
            images_npcneera_2464_0_16[15] = get_internal_image(11952);
            images_npcneera_2464_0_17[0] = get_internal_image(8049);
            images_npcneera_2464_0_17[1] = get_internal_image(8051);
            images_npcneera_2464_0_17[2] = get_internal_image(8053);
            images_npcneera_2464_0_17[3] = get_internal_image(8054);
            images_npcneera_2464_0_17[4] = get_internal_image(8056);
            images_npcneera_2464_0_17[5] = get_internal_image(8057);
            images_npcneera_2464_0_17[6] = get_internal_image(8058);
            images_npcneera_2464_0_17[7] = get_internal_image(8059);
            images_npcneera_2464_0_17[8] = get_internal_image(8060);
            images_npcneera_2464_0_17[9] = get_internal_image(8061);
            images_npcneera_2464_1_1[0] = get_internal_image(11725);
            images_npcneera_2464_1_1[1] = get_internal_image(11726);
            images_npcneera_2464_1_1[2] = get_internal_image(11732);
            images_npcneera_2464_1_1[3] = get_internal_image(11733);
            images_npcneera_2464_1_1[4] = get_internal_image(11737);
            images_npcneera_2464_1_1[5] = get_internal_image(11738);
            images_npcneera_2464_1_1[6] = get_internal_image(11895);
            images_npcneera_2464_1_1[7] = get_internal_image(11896);
            images_npcneera_2464_1_17[0] = get_internal_image(11897);
            images_npcneera_2464_1_17[1] = get_internal_image(11898);
            images_npcneera_2464_1_17[2] = get_internal_image(11899);
            images_npcneera_2464_1_17[3] = get_internal_image(11900);
            images_npcneera_2464_1_17[4] = get_internal_image(11901);
            images_npcneera_2464_1_17[5] = get_internal_image(11902);
            images_npcneera_2464_1_17[6] = get_internal_image(11903);
            images_npcneera_2464_1_17[7] = get_internal_image(11904);
            images_npcneera_2464_5_0[0] = get_internal_image(8062);
            images_npcneera_2464_5_0[1] = get_internal_image(9348);
            images_npcneera_2464_5_0[2] = get_internal_image(9350);
            images_npcneera_2464_5_0[3] = get_internal_image(11497);
            images_npcneera_2464_5_0[4] = get_internal_image(9351);
            images_npcneera_2464_5_0[5] = get_internal_image(9353);
            images_npcneera_2464_5_0[6] = get_internal_image(9352);
            images_npcneera_2464_5_0[7] = get_internal_image(9362);
            images_npcneera_2464_5_0[8] = get_internal_image(9372);
            images_npcneera_2464_5_0[9] = get_internal_image(16332);
            images_npcneera_2464_5_0[10] = get_internal_image(16271);
            images_npcneera_2464_5_0[11] = get_internal_image(16255);
            images_npcneera_2464_5_0[12] = get_internal_image(9373);
            images_npcneera_2464_5_0[13] = get_internal_image(11494);
            images_npcneera_2464_5_0[14] = get_internal_image(11493);
            images_npcneera_2464_5_0[15] = get_internal_image(16546);
            images_npcneera_2464_5_0[16] = get_internal_image(16547);
            images_npcneera_2464_5_0[17] = get_internal_image(16548);
            images_npcneera_2464_5_0[18] = get_internal_image(11495);
            images_npcneera_2464_5_0[19] = get_internal_image(11496);
            images_npcneera_2464_5_0[20] = get_internal_image(9374);
            images_npcneera_2464_5_16[0] = get_internal_image(9349);
            images_npcneera_2464_5_16[1] = get_internal_image(11590);
            images_npcneera_2464_5_16[2] = get_internal_image(11592);
            images_npcneera_2464_5_16[3] = get_internal_image(11601);
            images_npcneera_2464_5_16[4] = get_internal_image(11602);
            images_npcneera_2464_5_16[5] = get_internal_image(11603);
            images_npcneera_2464_5_16[6] = get_internal_image(11604);
            images_npcneera_2464_5_16[7] = get_internal_image(11605);
            images_npcneera_2464_5_16[8] = get_internal_image(11606);
            images_npcneera_2464_5_16[9] = get_internal_image(16549);
            images_npcneera_2464_5_16[10] = get_internal_image(16550);
            images_npcneera_2464_5_16[11] = get_internal_image(16551);
            images_npcneera_2464_5_16[12] = get_internal_image(11607);
            images_npcneera_2464_5_16[13] = get_internal_image(11608);
            images_npcneera_2464_5_16[14] = get_internal_image(11685);
            images_npcneera_2464_5_16[15] = get_internal_image(16552);
            images_npcneera_2464_5_16[16] = get_internal_image(16553);
            images_npcneera_2464_5_16[17] = get_internal_image(16554);
            images_npcneera_2464_5_16[18] = get_internal_image(11716);
            images_npcneera_2464_5_16[19] = get_internal_image(11718);
            images_npcneera_2464_5_16[20] = get_internal_image(11724);
            images_npcneera_2464_7_0[0] = get_internal_image(16579);
            images_npcneera_2464_7_0[1] = get_internal_image(16579);
            images_npcneera_2464_7_0[2] = get_internal_image(16579);
            images_npcneera_2464_7_0[3] = get_internal_image(16581);
            images_npcneera_2464_7_1[0] = get_internal_image(16575);
            images_npcneera_2464_7_1[1] = get_internal_image(16575);
            images_npcneera_2464_7_1[2] = get_internal_image(16575);
            images_npcneera_2464_7_1[3] = get_internal_image(16576);
            images_npcneera_2464_7_16[0] = get_internal_image(16580);
            images_npcneera_2464_7_16[1] = get_internal_image(16580);
            images_npcneera_2464_7_16[2] = get_internal_image(16580);
            images_npcneera_2464_7_16[3] = get_internal_image(16582);
            images_npcneera_2464_7_17[0] = get_internal_image(16577);
            images_npcneera_2464_7_17[1] = get_internal_image(16577);
            images_npcneera_2464_7_17[2] = get_internal_image(16577);
            images_npcneera_2464_7_17[3] = get_internal_image(16578);
            images_npcneera_2464_8_1[0] = get_internal_image(11713);
            images_npcneera_2464_8_1[1] = get_internal_image(11498);
            images_npcneera_2464_8_1[2] = get_internal_image(11714);
            images_npcneera_2464_8_1[3] = get_internal_image(9371);
            images_npcneera_2464_8_1[4] = get_internal_image(11713);
            images_npcneera_2464_8_1[5] = get_internal_image(9371);
            images_npcneera_2464_8_1[6] = get_internal_image(11714);
            images_npcneera_2464_8_1[7] = get_internal_image(9371);
            images_npcneera_2464_8_17[0] = get_internal_image(11499);
            images_npcneera_2464_8_17[1] = get_internal_image(11500);
            images_npcneera_2464_8_17[2] = get_internal_image(11501);
            images_npcneera_2464_8_17[3] = get_internal_image(11502);
            images_npcneera_2464_8_17[4] = get_internal_image(11499);
            images_npcneera_2464_8_17[5] = get_internal_image(11502);
            images_npcneera_2464_8_17[6] = get_internal_image(11501);
            images_npcneera_2464_8_17[7] = get_internal_image(11502);
            images_npcneera_2464_10_0[0] = get_internal_image(16556);
            images_npcneera_2464_10_1[0] = get_internal_image(16558);
            images_npcneera_2464_10_16[0] = get_internal_image(16557);
            images_npcneera_2464_10_17[0] = get_internal_image(16555);
            images_npcneera_2464_12_0[0] = get_internal_image(16565);
            images_npcneera_2464_12_0[1] = get_internal_image(16565);
            images_npcneera_2464_12_0[2] = get_internal_image(16565);
            images_npcneera_2464_12_0[3] = get_internal_image(16566);
            images_npcneera_2464_12_0[4] = get_internal_image(16567);
            images_npcneera_2464_12_0[5] = get_internal_image(16568);
            images_npcneera_2464_12_0[6] = get_internal_image(16569);
            images_npcneera_2464_12_16[0] = get_internal_image(16570);
            images_npcneera_2464_12_16[1] = get_internal_image(16570);
            images_npcneera_2464_12_16[2] = get_internal_image(16570);
            images_npcneera_2464_12_16[3] = get_internal_image(16571);
            images_npcneera_2464_12_16[4] = get_internal_image(16572);
            images_npcneera_2464_12_16[5] = get_internal_image(16573);
            images_npcneera_2464_12_16[6] = get_internal_image(16574);
            images_npcneera_2464_13_0[0] = get_internal_image(16560);
            images_npcneera_2464_13_0[1] = get_internal_image(16560);
            images_npcneera_2464_13_0[2] = get_internal_image(16560);
            images_npcneera_2464_13_0[3] = get_internal_image(16561);
            images_npcneera_2464_13_0[4] = get_internal_image(16562);
            images_npcneera_2464_13_8[0] = get_internal_image(11734);
            images_npcneera_2464_13_8[1] = get_internal_image(11735);
            images_npcneera_2464_13_8[2] = get_internal_image(11736);
            images_npcneera_2464_13_16[0] = get_internal_image(16559);
            images_npcneera_2464_13_16[1] = get_internal_image(16559);
            images_npcneera_2464_13_16[2] = get_internal_image(16559);
            images_npcneera_2464_13_16[3] = get_internal_image(16563);
            images_npcneera_2464_13_16[4] = get_internal_image(16564);
            images_npcneera_2464_14_0[0] = get_internal_image(1069);
            images_npcneera_2464_14_0[1] = get_internal_image(8064);
            images_npcneera_2464_14_0[2] = get_internal_image(8063);
            images_npcneera_2464_14_0[3] = get_internal_image(8067);
            images_npcneera_2464_14_0[4] = get_internal_image(8095);
            images_npcneera_2464_14_0[5] = get_internal_image(8094);
            images_npcneera_2464_14_0[6] = get_internal_image(8098);
            images_npcneera_2464_14_0[7] = get_internal_image(8101);
            images_npcneera_2464_14_16[0] = get_internal_image(8049);
            images_npcneera_2464_14_16[1] = get_internal_image(8102);
            images_npcneera_2464_14_16[2] = get_internal_image(9117);
            images_npcneera_2464_14_16[3] = get_internal_image(9343);
            images_npcneera_2464_14_16[4] = get_internal_image(9344);
            images_npcneera_2464_14_16[5] = get_internal_image(9345);
            images_npcneera_2464_14_16[6] = get_internal_image(9346);
            images_npcneera_2464_14_16[7] = get_internal_image(9347);
            images_npcneera_2464_15_0[0] = get_internal_image(8101);
            images_npcneera_2464_15_0[1] = get_internal_image(8098);
            images_npcneera_2464_15_0[2] = get_internal_image(8094);
            images_npcneera_2464_15_0[3] = get_internal_image(8095);
            images_npcneera_2464_15_0[4] = get_internal_image(8067);
            images_npcneera_2464_15_0[5] = get_internal_image(8063);
            images_npcneera_2464_15_0[6] = get_internal_image(8064);
            images_npcneera_2464_15_0[7] = get_internal_image(1069);
            images_npcneera_2464_15_16[0] = get_internal_image(9347);
            images_npcneera_2464_15_16[1] = get_internal_image(9346);
            images_npcneera_2464_15_16[2] = get_internal_image(9345);
            images_npcneera_2464_15_16[3] = get_internal_image(9344);
            images_npcneera_2464_15_16[4] = get_internal_image(9343);
            images_npcneera_2464_15_16[5] = get_internal_image(9117);
            images_npcneera_2464_15_16[6] = get_internal_image(8102);
            images_npcneera_2464_15_16[7] = get_internal_image(8049);
            images_npcneera_2464_16_0[0] = get_internal_image(859);
            images_npcneera_2464_16_0[1] = get_internal_image(860);
            images_npcneera_2464_16_0[2] = get_internal_image(861);
            images_npcneera_2464_16_0[3] = get_internal_image(862);
            images_npcneera_2464_16_0[4] = get_internal_image(1060);
            images_npcneera_2464_16_0[5] = get_internal_image(1087);
            images_npcneera_2464_16_0[6] = get_internal_image(1237);
            images_npcneera_2464_16_0[7] = get_internal_image(1243);
            images_npcneera_2464_16_16[0] = get_internal_image(859);
            images_npcneera_2464_16_16[1] = get_internal_image(860);
            images_npcneera_2464_16_16[2] = get_internal_image(861);
            images_npcneera_2464_16_16[3] = get_internal_image(862);
            images_npcneera_2464_16_16[4] = get_internal_image(1060);
            images_npcneera_2464_16_16[5] = get_internal_image(1087);
            images_npcneera_2464_16_16[6] = get_internal_image(1237);
            images_npcneera_2464_16_16[7] = get_internal_image(1243);
            images_npcneera_2464_17_0[0] = get_internal_image(71);
            images_npcneera_2464_17_0[1] = get_internal_image(838);
            images_npcneera_2464_17_0[2] = get_internal_image(3653);
            images_npcneera_2464_17_0[3] = get_internal_image(1178);
            images_npcneera_2464_17_0[4] = get_internal_image(1893);
            images_npcneera_2464_17_0[5] = get_internal_image(2522);
            images_npcneera_2464_17_0[6] = get_internal_image(3532);
            images_npcneera_2464_17_0[7] = get_internal_image(3585);
            images_npcneera_2464_17_0[8] = get_internal_image(71);
            images_npcneera_2464_17_0[9] = get_internal_image(71);
            images_npcneera_2464_17_1[0] = get_internal_image(3772);
            images_npcneera_2464_17_1[1] = get_internal_image(5134);
            images_npcneera_2464_17_1[2] = get_internal_image(5417);
            images_npcneera_2464_17_1[3] = get_internal_image(5230);
            images_npcneera_2464_17_1[4] = get_internal_image(5418);
            images_npcneera_2464_17_1[5] = get_internal_image(5975);
            images_npcneera_2464_17_1[6] = get_internal_image(5976);
            images_npcneera_2464_17_1[7] = get_internal_image(5977);
            images_npcneera_2464_17_1[8] = get_internal_image(3772);
            images_npcneera_2464_17_1[9] = get_internal_image(3772);
            images_npcneera_2464_17_16[0] = get_internal_image(837);
            images_npcneera_2464_17_16[1] = get_internal_image(3654);
            images_npcneera_2464_17_16[2] = get_internal_image(3655);
            images_npcneera_2464_17_16[3] = get_internal_image(3656);
            images_npcneera_2464_17_16[4] = get_internal_image(3657);
            images_npcneera_2464_17_16[5] = get_internal_image(3658);
            images_npcneera_2464_17_16[6] = get_internal_image(3688);
            images_npcneera_2464_17_16[7] = get_internal_image(3690);
            images_npcneera_2464_17_16[8] = get_internal_image(837);
            images_npcneera_2464_17_16[9] = get_internal_image(837);
            images_npcneera_2464_17_17[0] = get_internal_image(5981);
            images_npcneera_2464_17_17[1] = get_internal_image(7160);
            images_npcneera_2464_17_17[2] = get_internal_image(7177);
            images_npcneera_2464_17_17[3] = get_internal_image(7245);
            images_npcneera_2464_17_17[4] = get_internal_image(7333);
            images_npcneera_2464_17_17[5] = get_internal_image(7520);
            images_npcneera_2464_17_17[6] = get_internal_image(7751);
            images_npcneera_2464_17_17[7] = get_internal_image(9116);
            images_npcneera_2464_17_17[8] = get_internal_image(5981);
            images_npcneera_2464_17_17[9] = get_internal_image(5981);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 1);
        alterables->values.set(10, 385);
    }
};
FrameObject * create_npcneera_2464(int x, int y)
{
    return new (Active::pool.create()) NPCNeera_2464(x, y);
}
static Image* images_bossneerahitbox_2465_0_0[1];
static Direction direction_bossneerahitbox_2465_0_0 = {0, 50, 50, 0, 1, images_bossneerahitbox_2465_0_0, 1};
static Animation anim_bossneerahitbox_2465_0 = {&direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, NULL, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0, &direction_bossneerahitbox_2465_0_0};
static Animation * anim_array_bossneerahitbox_2465[1] = {&anim_bossneerahitbox_2465_0};
static Animations anim_bossneerahitbox_2465 = {1, &anim_array_bossneerahitbox_2465[0]};
static bool anim_bossneerahitbox_2465_initialized;
class BossNeeraHitbox_2465 : public Active
{
public:
    BossNeeraHitbox_2465(int x, int y) : Active(x, y, BossNeeraHitbox_2465_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_NeeraHitbox", 16);
#endif
        set_visible(false);
        this->animations = &anim_bossneerahitbox_2465;
        if (!anim_bossneerahitbox_2465_initialized) {
            anim_bossneerahitbox_2465_initialized = true;
            images_bossneerahitbox_2465_0_0[0] = get_internal_image(7655);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 120);
        alterables->values.set(3, 3);
    }
};
FrameObject * create_bossneerahitbox_2465(int x, int y)
{
    return new (Active::pool.create()) BossNeeraHitbox_2465(x, y);
}
class JCSubTanker5_2466 : public Backdrop
{
public:
    JCSubTanker5_2466(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(776);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsubtanker5_2466(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker5_2466(x, y);
}
class JCSubTanker6_2467 : public Backdrop
{
public:
    JCSubTanker6_2467(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(775);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsubtanker6_2467(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker6_2467(x, y);
}
class JCSub7_2468 : public Backdrop
{
public:
    JCSub7_2468(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 7", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6276);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub7_2468(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub7_2468(x, y);
}
class JCSub10_2469 : public Backdrop
{
public:
    JCSub10_2469(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 10", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6275);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub10_2469(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub10_2469(x, y);
}
class JCSub18_2470 : public Backdrop
{
public:
    JCSub18_2470(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 18", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(57);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub18_2470(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub18_2470(x, y);
}
class JCSubSupportBack_2471 : public Backdrop
{
public:
    JCSubSupportBack_2471(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubSupportBack", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(831);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsubsupportback_2471(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubSupportBack_2471(x, y);
}
class JCSubFin3_2472 : public Backdrop
{
public:
    JCSubFin3_2472(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3450);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin3_2472(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin3_2472(x, y);
}
class JCSubFin4_2473 : public Backdrop
{
public:
    JCSubFin4_2473(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3475);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin4_2473(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin4_2473(x, y);
}
class JCSubFin5_2474 : public Backdrop
{
public:
    JCSubFin5_2474(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3476);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin5_2474(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin5_2474(x, y);
}
class JCSub17_2475 : public Backdrop
{
public:
    JCSub17_2475(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 17", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(743);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub17_2475(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub17_2475(x, y);
}
class JCSub1_2476 : public Backdrop
{
public:
    JCSub1_2476(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6279);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsub1_2476(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub1_2476(x, y);
}
class JCSub2_2477 : public Backdrop
{
public:
    JCSub2_2477(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6280);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsub2_2477(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub2_2477(x, y);
}
class JCSub12_2478 : public Backdrop
{
public:
    JCSub12_2478(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 12", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6278);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub12_2478(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub12_2478(x, y);
}
class JCSub9_2479 : public Backdrop
{
public:
    JCSub9_2479(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 9", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3577);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub9_2479(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub9_2479(x, y);
}
class JCSubFin1_2480 : public Backdrop
{
public:
    JCSubFin1_2480(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3442);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin1_2480(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin1_2480(x, y);
}
class JCSubFin2_2481 : public Backdrop
{
public:
    JCSubFin2_2481(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3474);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin2_2481(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin2_2481(x, y);
}
class JCSub8_2482 : public Backdrop
{
public:
    JCSub8_2482(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 8", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6301);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsub8_2482(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub8_2482(x, y);
}
class JCSub11_2483 : public Backdrop
{
public:
    JCSub11_2483(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 11", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6274);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub11_2483(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub11_2483(x, y);
}
class JCSubTanker1_2484 : public Backdrop
{
public:
    JCSubTanker1_2484(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(745);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsubtanker1_2484(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker1_2484(x, y);
}
class JCSub16_2485 : public Backdrop
{
public:
    JCSub16_2485(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 16", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(746);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
        blend_color = Color(255, 255, 255, 127);
    }
};
FrameObject * create_jcsub16_2485(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub16_2485(x, y);
}
class JCSubTanker2_2486 : public Backdrop
{
public:
    JCSubTanker2_2486(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(744);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsubtanker2_2486(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker2_2486(x, y);
}
class JCSub20_2487 : public Backdrop
{
public:
    JCSub20_2487(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 20", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(764);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub20_2487(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub20_2487(x, y);
}
class JCSubTanker4_2488 : public Backdrop
{
public:
    JCSubTanker4_2488(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(742);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsubtanker4_2488(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker4_2488(x, y);
}
class JCSubTanker5_2489 : public Backdrop
{
public:
    JCSubTanker5_2489(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(748);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsubtanker5_2489(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker5_2489(x, y);
}
class JCSubTanker3_2490 : public Backdrop
{
public:
    JCSubTanker3_2490(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubTanker3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(740);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsubtanker3_2490(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubTanker3_2490(x, y);
}
class JCLadder_2491 : public Backdrop
{
public:
    JCLadder_2491(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(747);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_jcladder_2491(int x, int y)
{
    return new (Backdrop::pool.create()) JCLadder_2491(x, y);
}
class JCSub14_2492 : public Backdrop
{
public:
    JCSub14_2492(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 14", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(738);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub14_2492(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub14_2492(x, y);
}
class JCSub15_2493 : public Backdrop
{
public:
    JCSub15_2493(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 15", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(739);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub15_2493(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub15_2493(x, y);
}
class JCSub13_2494 : public Backdrop
{
public:
    JCSub13_2494(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 13", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6281);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsub13_2494(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub13_2494(x, y);
}
class JCSub21_2495 : public Backdrop
{
public:
    JCSub21_2495(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 21", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6273);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcsub21_2495(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub21_2495(x, y);
}
static Image* images_hazardtorpedolauncher_2496_0_0[5];
static Direction direction_hazardtorpedolauncher_2496_0_0 = {0, 0, 0, 0, 1, images_hazardtorpedolauncher_2496_0_0, 5};
static Animation anim_hazardtorpedolauncher_2496_0 = {&direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, NULL, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0, &direction_hazardtorpedolauncher_2496_0_0};
static Animation * anim_array_hazardtorpedolauncher_2496[1] = {&anim_hazardtorpedolauncher_2496_0};
static Animations anim_hazardtorpedolauncher_2496 = {1, &anim_array_hazardtorpedolauncher_2496[0]};
static bool anim_hazardtorpedolauncher_2496_initialized;
class HazardTorpedoLauncher_2496 : public Active
{
public:
    HazardTorpedoLauncher_2496(int x, int y) : Active(x, y, HazardTorpedoLauncher_2496_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard: TorpedoLauncher", 23);
#endif
        this->animations = &anim_hazardtorpedolauncher_2496;
        if (!anim_hazardtorpedolauncher_2496_initialized) {
            anim_hazardtorpedolauncher_2496_initialized = true;
            images_hazardtorpedolauncher_2496_0_0[0] = get_internal_image(833);
            images_hazardtorpedolauncher_2496_0_0[1] = get_internal_image(836);
            images_hazardtorpedolauncher_2496_0_0[2] = get_internal_image(835);
            images_hazardtorpedolauncher_2496_0_0[3] = get_internal_image(839);
            images_hazardtorpedolauncher_2496_0_0[4] = get_internal_image(828);
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
FrameObject * create_hazardtorpedolauncher_2496(int x, int y)
{
    return new (Active::pool.create()) HazardTorpedoLauncher_2496(x, y);
}
class JCSubSupportFront_2497 : public Backdrop
{
public:
    JCSubSupportFront_2497(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubSupportFront", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(749);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsubsupportfront_2497(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubSupportFront_2497(x, y);
}
class JCSub22_2498 : public Backdrop
{
public:
    JCSub22_2498(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 22", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6303);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_jcsub22_2498(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub22_2498(x, y);
}
class LevelParallaxPiece7_2499 : public SystemBox
{
public:
    LevelParallaxPiece7_2499(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_2499_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 391;
        height = 260;
        type = PATTERN_IMAGE;
        image = get_internal_image(16090);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_2499(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_2499(x, y);
}
class JCOceanBottom_2500 : public QuickBackdrop
{
public:
    JCOceanBottom_2500(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_OceanBottom", 14);
#endif
        flags |= BACKGROUND;
        width = 10240;
        height = 727;
        color = Color(0, 4, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_jcoceanbottom_2500(int x, int y)
{
    return new (QuickBackdrop::pool.create()) JCOceanBottom_2500(x, y);
}
static Image* images_levelicebarrier_2501_0_0[1];
static Direction direction_levelicebarrier_2501_0_0 = {0, 50, 50, 0, 1, images_levelicebarrier_2501_0_0, 1};
static Animation anim_levelicebarrier_2501_0 = {&direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, NULL, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0, &direction_levelicebarrier_2501_0_0};
static Animation * anim_array_levelicebarrier_2501[1] = {&anim_levelicebarrier_2501_0};
static Animations anim_levelicebarrier_2501 = {1, &anim_array_levelicebarrier_2501[0]};
static bool anim_levelicebarrier_2501_initialized;
class LevelIceBarrier_2501 : public Active
{
public:
    LevelIceBarrier_2501(int x, int y) : Active(x, y, LevelIceBarrier_2501_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Level_IceBarrier", 16);
#endif
        this->animations = &anim_levelicebarrier_2501;
        if (!anim_levelicebarrier_2501_initialized) {
            anim_levelicebarrier_2501_initialized = true;
            images_levelicebarrier_2501_0_0[0] = get_internal_image(98);
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
FrameObject * create_levelicebarrier_2501(int x, int y)
{
    return new (Active::pool.create()) LevelIceBarrier_2501(x, y);
}
class JCSubFin2_2502 : public Backdrop
{
public:
    JCSubFin2_2502(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6304);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin2_2502(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin2_2502(x, y);
}
class JCSubFin3_2503 : public Backdrop
{
public:
    JCSubFin3_2503(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6305);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin3_2503(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin3_2503(x, y);
}
class JCSubFin4_2504 : public Backdrop
{
public:
    JCSubFin4_2504(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_SubFin 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(840);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsubfin4_2504(int x, int y)
{
    return new (Backdrop::pool.create()) JCSubFin4_2504(x, y);
}
class JCSub19_2505 : public Backdrop
{
public:
    JCSub19_2505(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Sub 19", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(741);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcsub19_2505(int x, int y)
{
    return new (Backdrop::pool.create()) JCSub19_2505(x, y);
}
static Image* images_levelrain_2506_0_0[1];
static Direction direction_levelrain_2506_0_0 = {0, 50, 50, 0, 1, images_levelrain_2506_0_0, 1};
static Animation anim_levelrain_2506_0 = {&direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, NULL, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0, &direction_levelrain_2506_0_0};
static Animation * anim_array_levelrain_2506[1] = {&anim_levelrain_2506_0};
static Animations anim_levelrain_2506 = {1, &anim_array_levelrain_2506[0]};
static bool anim_levelrain_2506_initialized;
class LevelRain_2506 : public Active
{
public:
    LevelRain_2506(int x, int y) : Active(x, y, LevelRain_2506_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Rain", 10);
#endif
        this->animations = &anim_levelrain_2506;
        if (!anim_levelrain_2506_initialized) {
            anim_levelrain_2506_initialized = true;
            images_levelrain_2506_0_0[0] = get_internal_image(7288);
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
FrameObject * create_levelrain_2506(int x, int y)
{
    return new (Active::pool.create()) LevelRain_2506(x, y);
}
static Image* images_enemyelitechargeglow_2507_0_0[1];
static Direction direction_enemyelitechargeglow_2507_0_0 = {0, 50, 50, 0, 1, images_enemyelitechargeglow_2507_0_0, 1};
static Animation anim_enemyelitechargeglow_2507_0 = {&direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, NULL, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0, &direction_enemyelitechargeglow_2507_0_0};
static Animation * anim_array_enemyelitechargeglow_2507[1] = {&anim_enemyelitechargeglow_2507_0};
static Animations anim_enemyelitechargeglow_2507 = {1, &anim_array_enemyelitechargeglow_2507[0]};
static bool anim_enemyelitechargeglow_2507_initialized;
class EnemyEliteChargeglow_2507 : public Active
{
public:
    EnemyEliteChargeglow_2507(int x, int y) : Active(x, y, EnemyEliteChargeglow_2507_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_EliteChargeglow", 21);
#endif
        this->animations = &anim_enemyelitechargeglow_2507;
        if (!anim_enemyelitechargeglow_2507_initialized) {
            anim_enemyelitechargeglow_2507_initialized = true;
            images_enemyelitechargeglow_2507_0_0[0] = get_internal_image(7244);
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
FrameObject * create_enemyelitechargeglow_2507(int x, int y)
{
    return new (Active::pool.create()) EnemyEliteChargeglow_2507(x, y);
}
static Image* images_enemytrooperlaser_2508_0_0[1];
static Direction direction_enemytrooperlaser_2508_0_0 = {0, 90, 90, 0, -1, images_enemytrooperlaser_2508_0_0, 1};
static Animation anim_enemytrooperlaser_2508_0 = {&direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, NULL, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0, &direction_enemytrooperlaser_2508_0_0};
static Animation * anim_array_enemytrooperlaser_2508[1] = {&anim_enemytrooperlaser_2508_0};
static Animations anim_enemytrooperlaser_2508 = {1, &anim_array_enemytrooperlaser_2508[0]};
static bool anim_enemytrooperlaser_2508_initialized;
class EnemyTrooperLaser_2508 : public Active
{
public:
    EnemyTrooperLaser_2508(int x, int y) : Active(x, y, EnemyTrooperLaser_2508_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TrooperLaser", 18);
#endif
        this->animations = &anim_enemytrooperlaser_2508;
        if (!anim_enemytrooperlaser_2508_initialized) {
            anim_enemytrooperlaser_2508_initialized = true;
            images_enemytrooperlaser_2508_0_0[0] = get_internal_image(6116);
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
FrameObject * create_enemytrooperlaser_2508(int x, int y)
{
    return new (Active::pool.create()) EnemyTrooperLaser_2508(x, y);
}
static Image* images_bossgunshipflare_2509_0_0[1];
static Direction direction_bossgunshipflare_2509_0_0 = {0, 50, 50, 0, 1, images_bossgunshipflare_2509_0_0, 1};
static Animation anim_bossgunshipflare_2509_0 = {&direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, NULL, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0, &direction_bossgunshipflare_2509_0_0};
static Image* images_bossgunshipflare_2509_10_0[2];
static Direction direction_bossgunshipflare_2509_10_0 = {0, 30, 30, 0, -1, images_bossgunshipflare_2509_10_0, 2};
static Animation anim_bossgunshipflare_2509_10 = {&direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, NULL, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0, &direction_bossgunshipflare_2509_10_0};
static Image* images_bossgunshipflare_2509_11_0[1];
static Direction direction_bossgunshipflare_2509_11_0 = {0, 50, 50, 0, -1, images_bossgunshipflare_2509_11_0, 1};
static Image* images_bossgunshipflare_2509_11_16[1];
static Direction direction_bossgunshipflare_2509_11_16 = {16, 50, 50, 0, -1, images_bossgunshipflare_2509_11_16, 1};
static Animation anim_bossgunshipflare_2509_11 = {&direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, NULL, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, &direction_bossgunshipflare_2509_11_16, NULL, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0, &direction_bossgunshipflare_2509_11_0};
static Animation * anim_array_bossgunshipflare_2509[12] = {&anim_bossgunshipflare_2509_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossgunshipflare_2509_10, &anim_bossgunshipflare_2509_11};
static Animations anim_bossgunshipflare_2509 = {12, &anim_array_bossgunshipflare_2509[0]};
static bool anim_bossgunshipflare_2509_initialized;
class BossGunshipFlare_2509 : public Active
{
public:
    BossGunshipFlare_2509(int x, int y) : Active(x, y, BossGunshipFlare_2509_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GunshipFlare", 17);
#endif
        this->animations = &anim_bossgunshipflare_2509;
        if (!anim_bossgunshipflare_2509_initialized) {
            anim_bossgunshipflare_2509_initialized = true;
            images_bossgunshipflare_2509_0_0[0] = get_internal_image(5873);
            images_bossgunshipflare_2509_10_0[0] = get_internal_image(5876);
            images_bossgunshipflare_2509_10_0[1] = get_internal_image(5918);
            images_bossgunshipflare_2509_11_0[0] = get_internal_image(5929);
            images_bossgunshipflare_2509_11_16[0] = get_internal_image(5932);
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
FrameObject * create_bossgunshipflare_2509(int x, int y)
{
    return new (Active::pool.create()) BossGunshipFlare_2509(x, y);
}
static Image* images_enemyelite_2510_0_0[8];
static Direction direction_enemyelite_2510_0_0 = {0, 16, 16, 0, -1, images_enemyelite_2510_0_0, 8};
static Image* images_enemyelite_2510_0_8[9];
static Direction direction_enemyelite_2510_0_8 = {8, 50, 50, 0, 1, images_enemyelite_2510_0_8, 9};
static Image* images_enemyelite_2510_0_16[8];
static Direction direction_enemyelite_2510_0_16 = {16, 16, 16, 0, -1, images_enemyelite_2510_0_16, 8};
static Animation anim_enemyelite_2510_0 = {&direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, NULL, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, &direction_enemyelite_2510_0_8, NULL, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, &direction_enemyelite_2510_0_16, NULL, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0, &direction_enemyelite_2510_0_0};
static Image* images_enemyelite_2510_1_0[8];
static Direction direction_enemyelite_2510_1_0 = {0, 16, 16, 0, -1, images_enemyelite_2510_1_0, 8};
static Image* images_enemyelite_2510_1_16[8];
static Direction direction_enemyelite_2510_1_16 = {16, 16, 16, 0, -1, images_enemyelite_2510_1_16, 8};
static Animation anim_enemyelite_2510_1 = {&direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, NULL, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, &direction_enemyelite_2510_1_16, NULL, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0, &direction_enemyelite_2510_1_0};
static Image* images_enemyelite_2510_2_0[10];
static Direction direction_enemyelite_2510_2_0 = {0, 80, 80, 0, -1, images_enemyelite_2510_2_0, 10};
static Image* images_enemyelite_2510_2_16[10];
static Direction direction_enemyelite_2510_2_16 = {16, 80, 80, 0, -1, images_enemyelite_2510_2_16, 10};
static Animation anim_enemyelite_2510_2 = {&direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, NULL, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, &direction_enemyelite_2510_2_16, NULL, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0, &direction_enemyelite_2510_2_0};
static Image* images_enemyelite_2510_5_0[1];
static Direction direction_enemyelite_2510_5_0 = {0, 50, 50, 0, -1, images_enemyelite_2510_5_0, 1};
static Image* images_enemyelite_2510_5_16[1];
static Direction direction_enemyelite_2510_5_16 = {16, 50, 50, 0, -1, images_enemyelite_2510_5_16, 1};
static Animation anim_enemyelite_2510_5 = {&direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, NULL, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, &direction_enemyelite_2510_5_16, NULL, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0, &direction_enemyelite_2510_5_0};
static Image* images_enemyelite_2510_7_0[1];
static Direction direction_enemyelite_2510_7_0 = {0, 50, 50, 0, -1, images_enemyelite_2510_7_0, 1};
static Image* images_enemyelite_2510_7_16[1];
static Direction direction_enemyelite_2510_7_16 = {16, 50, 50, 0, -1, images_enemyelite_2510_7_16, 1};
static Animation anim_enemyelite_2510_7 = {&direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, NULL, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, &direction_enemyelite_2510_7_16, NULL, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0, &direction_enemyelite_2510_7_0};
static Image* images_enemyelite_2510_8_0[1];
static Direction direction_enemyelite_2510_8_0 = {0, 50, 50, 0, -1, images_enemyelite_2510_8_0, 1};
static Image* images_enemyelite_2510_8_16[1];
static Direction direction_enemyelite_2510_8_16 = {16, 50, 50, 0, -1, images_enemyelite_2510_8_16, 1};
static Animation anim_enemyelite_2510_8 = {&direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, NULL, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, &direction_enemyelite_2510_8_16, NULL, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0, &direction_enemyelite_2510_8_0};
static Image* images_enemyelite_2510_10_0[3];
static Direction direction_enemyelite_2510_10_0 = {0, 50, 50, 2, -1, images_enemyelite_2510_10_0, 3};
static Image* images_enemyelite_2510_10_8[2];
static Direction direction_enemyelite_2510_10_8 = {8, 50, 50, 0, 1, images_enemyelite_2510_10_8, 2};
static Image* images_enemyelite_2510_10_16[3];
static Direction direction_enemyelite_2510_10_16 = {16, 50, 50, 2, -1, images_enemyelite_2510_10_16, 3};
static Animation anim_enemyelite_2510_10 = {&direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, NULL, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, &direction_enemyelite_2510_10_8, NULL, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, &direction_enemyelite_2510_10_16, NULL, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0, &direction_enemyelite_2510_10_0};
static Image* images_enemyelite_2510_11_0[3];
static Direction direction_enemyelite_2510_11_0 = {0, 30, 30, 2, -1, images_enemyelite_2510_11_0, 3};
static Image* images_enemyelite_2510_11_16[3];
static Direction direction_enemyelite_2510_11_16 = {16, 30, 30, 2, -1, images_enemyelite_2510_11_16, 3};
static Animation anim_enemyelite_2510_11 = {&direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, NULL, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, &direction_enemyelite_2510_11_16, NULL, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0, &direction_enemyelite_2510_11_0};
static Image* images_enemyelite_2510_12_0[6];
static Direction direction_enemyelite_2510_12_0 = {0, 50, 50, 0, -1, images_enemyelite_2510_12_0, 6};
static Image* images_enemyelite_2510_12_8[3];
static Direction direction_enemyelite_2510_12_8 = {8, 50, 50, 0, 1, images_enemyelite_2510_12_8, 3};
static Image* images_enemyelite_2510_12_16[6];
static Direction direction_enemyelite_2510_12_16 = {16, 50, 50, 0, -1, images_enemyelite_2510_12_16, 6};
static Animation anim_enemyelite_2510_12 = {&direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, NULL, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, &direction_enemyelite_2510_12_8, NULL, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, &direction_enemyelite_2510_12_16, NULL, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0, &direction_enemyelite_2510_12_0};
static Image* images_enemyelite_2510_13_0[3];
static Direction direction_enemyelite_2510_13_0 = {0, 15, 15, 0, 1, images_enemyelite_2510_13_0, 3};
static Image* images_enemyelite_2510_13_16[3];
static Direction direction_enemyelite_2510_13_16 = {16, 15, 15, 0, 1, images_enemyelite_2510_13_16, 3};
static Animation anim_enemyelite_2510_13 = {&direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, NULL, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, &direction_enemyelite_2510_13_16, NULL, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0, &direction_enemyelite_2510_13_0};
static Animation * anim_array_enemyelite_2510[14] = {&anim_enemyelite_2510_0, &anim_enemyelite_2510_1, &anim_enemyelite_2510_2, NULL, NULL, &anim_enemyelite_2510_5, NULL, &anim_enemyelite_2510_7, &anim_enemyelite_2510_8, NULL, &anim_enemyelite_2510_10, &anim_enemyelite_2510_11, &anim_enemyelite_2510_12, &anim_enemyelite_2510_13};
static Animations anim_enemyelite_2510 = {14, &anim_array_enemyelite_2510[0]};
static bool anim_enemyelite_2510_initialized;
class EnemyElite_2510 : public Active
{
public:
    EnemyElite_2510(int x, int y) : Active(x, y, EnemyElite_2510_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Elite", 11);
#endif
        this->animations = &anim_enemyelite_2510;
        if (!anim_enemyelite_2510_initialized) {
            anim_enemyelite_2510_initialized = true;
            images_enemyelite_2510_0_0[0] = get_internal_image(1082);
            images_enemyelite_2510_0_0[1] = get_internal_image(14951);
            images_enemyelite_2510_0_0[2] = get_internal_image(14952);
            images_enemyelite_2510_0_0[3] = get_internal_image(14947);
            images_enemyelite_2510_0_0[4] = get_internal_image(14948);
            images_enemyelite_2510_0_0[5] = get_internal_image(14946);
            images_enemyelite_2510_0_0[6] = get_internal_image(14945);
            images_enemyelite_2510_0_0[7] = get_internal_image(14949);
            images_enemyelite_2510_0_8[0] = get_internal_image(14943);
            images_enemyelite_2510_0_8[1] = get_internal_image(1073);
            images_enemyelite_2510_0_8[2] = get_internal_image(6565);
            images_enemyelite_2510_0_8[3] = get_internal_image(7050);
            images_enemyelite_2510_0_8[4] = get_internal_image(7056);
            images_enemyelite_2510_0_8[5] = get_internal_image(7057);
            images_enemyelite_2510_0_8[6] = get_internal_image(8336);
            images_enemyelite_2510_0_8[7] = get_internal_image(8541);
            images_enemyelite_2510_0_8[8] = get_internal_image(12193);
            images_enemyelite_2510_0_16[0] = get_internal_image(6471);
            images_enemyelite_2510_0_16[1] = get_internal_image(14950);
            images_enemyelite_2510_0_16[2] = get_internal_image(14953);
            images_enemyelite_2510_0_16[3] = get_internal_image(14954);
            images_enemyelite_2510_0_16[4] = get_internal_image(14955);
            images_enemyelite_2510_0_16[5] = get_internal_image(14956);
            images_enemyelite_2510_0_16[6] = get_internal_image(14957);
            images_enemyelite_2510_0_16[7] = get_internal_image(14958);
            images_enemyelite_2510_1_0[0] = get_internal_image(12263);
            images_enemyelite_2510_1_0[1] = get_internal_image(14911);
            images_enemyelite_2510_1_0[2] = get_internal_image(12262);
            images_enemyelite_2510_1_0[3] = get_internal_image(12264);
            images_enemyelite_2510_1_0[4] = get_internal_image(12265);
            images_enemyelite_2510_1_0[5] = get_internal_image(14913);
            images_enemyelite_2510_1_0[6] = get_internal_image(14914);
            images_enemyelite_2510_1_0[7] = get_internal_image(14910);
            images_enemyelite_2510_1_16[0] = get_internal_image(12195);
            images_enemyelite_2510_1_16[1] = get_internal_image(12199);
            images_enemyelite_2510_1_16[2] = get_internal_image(12200);
            images_enemyelite_2510_1_16[3] = get_internal_image(12202);
            images_enemyelite_2510_1_16[4] = get_internal_image(12203);
            images_enemyelite_2510_1_16[5] = get_internal_image(12211);
            images_enemyelite_2510_1_16[6] = get_internal_image(12212);
            images_enemyelite_2510_1_16[7] = get_internal_image(12213);
            images_enemyelite_2510_2_0[0] = get_internal_image(14934);
            images_enemyelite_2510_2_0[1] = get_internal_image(14935);
            images_enemyelite_2510_2_0[2] = get_internal_image(14938);
            images_enemyelite_2510_2_0[3] = get_internal_image(14942);
            images_enemyelite_2510_2_0[4] = get_internal_image(14939);
            images_enemyelite_2510_2_0[5] = get_internal_image(14936);
            images_enemyelite_2510_2_0[6] = get_internal_image(14937);
            images_enemyelite_2510_2_0[7] = get_internal_image(14940);
            images_enemyelite_2510_2_0[8] = get_internal_image(14944);
            images_enemyelite_2510_2_0[9] = get_internal_image(14941);
            images_enemyelite_2510_2_16[0] = get_internal_image(14924);
            images_enemyelite_2510_2_16[1] = get_internal_image(14925);
            images_enemyelite_2510_2_16[2] = get_internal_image(14926);
            images_enemyelite_2510_2_16[3] = get_internal_image(14927);
            images_enemyelite_2510_2_16[4] = get_internal_image(14928);
            images_enemyelite_2510_2_16[5] = get_internal_image(14929);
            images_enemyelite_2510_2_16[6] = get_internal_image(14930);
            images_enemyelite_2510_2_16[7] = get_internal_image(14931);
            images_enemyelite_2510_2_16[8] = get_internal_image(14932);
            images_enemyelite_2510_2_16[9] = get_internal_image(14933);
            images_enemyelite_2510_5_0[0] = get_internal_image(14978);
            images_enemyelite_2510_5_16[0] = get_internal_image(14976);
            images_enemyelite_2510_7_0[0] = get_internal_image(14960);
            images_enemyelite_2510_7_16[0] = get_internal_image(14959);
            images_enemyelite_2510_8_0[0] = get_internal_image(1984);
            images_enemyelite_2510_8_16[0] = get_internal_image(2858);
            images_enemyelite_2510_10_0[0] = get_internal_image(14962);
            images_enemyelite_2510_10_0[1] = get_internal_image(14961);
            images_enemyelite_2510_10_0[2] = get_internal_image(14963);
            images_enemyelite_2510_10_8[0] = get_internal_image(14966);
            images_enemyelite_2510_10_8[1] = get_internal_image(14964);
            images_enemyelite_2510_10_16[0] = get_internal_image(14965);
            images_enemyelite_2510_10_16[1] = get_internal_image(14967);
            images_enemyelite_2510_10_16[2] = get_internal_image(14968);
            images_enemyelite_2510_11_0[0] = get_internal_image(14970);
            images_enemyelite_2510_11_0[1] = get_internal_image(14971);
            images_enemyelite_2510_11_0[2] = get_internal_image(1082);
            images_enemyelite_2510_11_16[0] = get_internal_image(14969);
            images_enemyelite_2510_11_16[1] = get_internal_image(14972);
            images_enemyelite_2510_11_16[2] = get_internal_image(6471);
            images_enemyelite_2510_12_0[0] = get_internal_image(14974);
            images_enemyelite_2510_12_0[1] = get_internal_image(11038);
            images_enemyelite_2510_12_0[2] = get_internal_image(11039);
            images_enemyelite_2510_12_0[3] = get_internal_image(11040);
            images_enemyelite_2510_12_0[4] = get_internal_image(14975);
            images_enemyelite_2510_12_0[5] = get_internal_image(14974);
            images_enemyelite_2510_12_8[0] = get_internal_image(11044);
            images_enemyelite_2510_12_8[1] = get_internal_image(11045);
            images_enemyelite_2510_12_8[2] = get_internal_image(11046);
            images_enemyelite_2510_12_16[0] = get_internal_image(11047);
            images_enemyelite_2510_12_16[1] = get_internal_image(11048);
            images_enemyelite_2510_12_16[2] = get_internal_image(11049);
            images_enemyelite_2510_12_16[3] = get_internal_image(11050);
            images_enemyelite_2510_12_16[4] = get_internal_image(11051);
            images_enemyelite_2510_12_16[5] = get_internal_image(11047);
            images_enemyelite_2510_13_0[0] = get_internal_image(14978);
            images_enemyelite_2510_13_0[1] = get_internal_image(14977);
            images_enemyelite_2510_13_0[2] = get_internal_image(14973);
            images_enemyelite_2510_13_16[0] = get_internal_image(14976);
            images_enemyelite_2510_13_16[1] = get_internal_image(14979);
            images_enemyelite_2510_13_16[2] = get_internal_image(14980);
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
FrameObject * create_enemyelite_2510(int x, int y)
{
    return new (Active::pool.create()) EnemyElite_2510(x, y);
}
static Image* images_enemyelitemask_2511_0_0[1];
static Direction direction_enemyelitemask_2511_0_0 = {0, 50, 50, 0, 1, images_enemyelitemask_2511_0_0, 1};
static Image* images_enemyelitemask_2511_0_1[1];
static Direction direction_enemyelitemask_2511_0_1 = {1, 50, 50, 0, 1, images_enemyelitemask_2511_0_1, 1};
static Image* images_enemyelitemask_2511_0_2[1];
static Direction direction_enemyelitemask_2511_0_2 = {2, 50, 50, 0, 1, images_enemyelitemask_2511_0_2, 1};
static Image* images_enemyelitemask_2511_0_3[1];
static Direction direction_enemyelitemask_2511_0_3 = {3, 50, 50, 0, 1, images_enemyelitemask_2511_0_3, 1};
static Image* images_enemyelitemask_2511_0_4[1];
static Direction direction_enemyelitemask_2511_0_4 = {4, 50, 50, 0, 1, images_enemyelitemask_2511_0_4, 1};
static Animation anim_enemyelitemask_2511_0 = {&direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_1, &direction_enemyelitemask_2511_0_2, &direction_enemyelitemask_2511_0_3, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, &direction_enemyelitemask_2511_0_4, NULL, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0, &direction_enemyelitemask_2511_0_0};
static Image* images_enemyelitemask_2511_10_0[1];
static Direction direction_enemyelitemask_2511_10_0 = {0, 50, 50, 0, -1, images_enemyelitemask_2511_10_0, 1};
static Image* images_enemyelitemask_2511_10_1[1];
static Direction direction_enemyelitemask_2511_10_1 = {1, 50, 50, 0, -1, images_enemyelitemask_2511_10_1, 1};
static Image* images_enemyelitemask_2511_10_2[1];
static Direction direction_enemyelitemask_2511_10_2 = {2, 50, 50, 0, -1, images_enemyelitemask_2511_10_2, 1};
static Image* images_enemyelitemask_2511_10_3[1];
static Direction direction_enemyelitemask_2511_10_3 = {3, 50, 50, 0, -1, images_enemyelitemask_2511_10_3, 1};
static Image* images_enemyelitemask_2511_10_4[1];
static Direction direction_enemyelitemask_2511_10_4 = {4, 50, 50, 0, -1, images_enemyelitemask_2511_10_4, 1};
static Animation anim_enemyelitemask_2511_10 = {&direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_1, &direction_enemyelitemask_2511_10_2, &direction_enemyelitemask_2511_10_3, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, &direction_enemyelitemask_2511_10_4, NULL, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0, &direction_enemyelitemask_2511_10_0};
static Animation * anim_array_enemyelitemask_2511[11] = {&anim_enemyelitemask_2511_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyelitemask_2511_10};
static Animations anim_enemyelitemask_2511 = {11, &anim_array_enemyelitemask_2511[0]};
static bool anim_enemyelitemask_2511_initialized;
class EnemyEliteMask_2511 : public Active
{
public:
    EnemyEliteMask_2511(int x, int y) : Active(x, y, EnemyEliteMask_2511_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_EliteMask", 15);
#endif
        set_visible(false);
        this->animations = &anim_enemyelitemask_2511;
        if (!anim_enemyelitemask_2511_initialized) {
            anim_enemyelitemask_2511_initialized = true;
            images_enemyelitemask_2511_0_0[0] = get_internal_image(1071);
            images_enemyelitemask_2511_0_1[0] = get_internal_image(1695);
            images_enemyelitemask_2511_0_2[0] = get_internal_image(2424);
            images_enemyelitemask_2511_0_3[0] = get_internal_image(2427);
            images_enemyelitemask_2511_0_4[0] = get_internal_image(2498);
            images_enemyelitemask_2511_10_0[0] = get_internal_image(4091);
            images_enemyelitemask_2511_10_1[0] = get_internal_image(4407);
            images_enemyelitemask_2511_10_2[0] = get_internal_image(4408);
            images_enemyelitemask_2511_10_3[0] = get_internal_image(4409);
            images_enemyelitemask_2511_10_4[0] = get_internal_image(4411);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(4, 1);
        alterables->values.set(9, 1);
    }
};
FrameObject * create_enemyelitemask_2511(int x, int y)
{
    return new (Active::pool.create()) EnemyEliteMask_2511(x, y);
}
