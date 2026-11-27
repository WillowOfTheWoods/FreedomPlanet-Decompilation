#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class IntroSky_0 : public Backdrop
{
public:
    IntroSky_0(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("IntroSky", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2550);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_introsky_0(int x, int y)
{
    return new (Backdrop::pool.create()) IntroSky_0(x, y);
}
class QuickBackdrop_1 : public QuickBackdrop
{
public:
    QuickBackdrop_1(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 639;
        height = 239;
        color = Color(0, 12, 24, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_1(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_1(x, y);
}
class LevelParallaxPiece1_2 : public SystemBox
{
public:
    LevelParallaxPiece1_2(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(16088);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2(x, y);
}
static Image* images_sparkle_3_4_0[6];
static Direction direction_sparkle_3_4_0 = {0, 25, 25, 0, 1, images_sparkle_3_4_0, 6};
static Animation anim_sparkle_3_4 = {&direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, NULL, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0, &direction_sparkle_3_4_0};
static Animation * anim_array_sparkle_3[5] = {NULL, NULL, NULL, NULL, &anim_sparkle_3_4};
static Animations anim_sparkle_3 = {5, &anim_array_sparkle_3[0]};
static bool anim_sparkle_3_initialized;
class Sparkle_3 : public Active
{
public:
    Sparkle_3(int x, int y) : Active(x, y, Sparkle_3_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sparkle", 7);
#endif
        this->animations = &anim_sparkle_3;
        if (!anim_sparkle_3_initialized) {
            anim_sparkle_3_initialized = true;
            images_sparkle_3_4_0[0] = get_internal_image(1043);
            images_sparkle_3_4_0[1] = get_internal_image(1044);
            images_sparkle_3_4_0[2] = get_internal_image(1045);
            images_sparkle_3_4_0[3] = get_internal_image(1046);
            images_sparkle_3_4_0[4] = get_internal_image(1047);
            images_sparkle_3_4_0[5] = get_internal_image(381);
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
FrameObject * create_sparkle_3(int x, int y)
{
    return new (Active::pool.create()) Sparkle_3(x, y);
}
static Image* images_bgstar_4_0_0[21];
static Direction direction_bgstar_4_0_0 = {0, 25, 25, 0, -1, images_bgstar_4_0_0, 21};
static Animation anim_bgstar_4_0 = {&direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, NULL, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0, &direction_bgstar_4_0_0};
static Animation * anim_array_bgstar_4[1] = {&anim_bgstar_4_0};
static Animations anim_bgstar_4 = {1, &anim_array_bgstar_4[0]};
static bool anim_bgstar_4_initialized;
class BgStar_4 : public Active
{
public:
    BgStar_4(int x, int y) : Active(x, y, BgStar_4_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("bg_star", 7);
#endif
        this->animations = &anim_bgstar_4;
        if (!anim_bgstar_4_initialized) {
            anim_bgstar_4_initialized = true;
            images_bgstar_4_0_0[0] = get_internal_image(3716);
            images_bgstar_4_0_0[1] = get_internal_image(3717);
            images_bgstar_4_0_0[2] = get_internal_image(3716);
            images_bgstar_4_0_0[3] = get_internal_image(381);
            images_bgstar_4_0_0[4] = get_internal_image(3154);
            images_bgstar_4_0_0[5] = get_internal_image(3508);
            images_bgstar_4_0_0[6] = get_internal_image(3160);
            images_bgstar_4_0_0[7] = get_internal_image(3692);
            images_bgstar_4_0_0[8] = get_internal_image(3693);
            images_bgstar_4_0_0[9] = get_internal_image(3694);
            images_bgstar_4_0_0[10] = get_internal_image(3713);
            images_bgstar_4_0_0[11] = get_internal_image(3714);
            images_bgstar_4_0_0[12] = get_internal_image(3714);
            images_bgstar_4_0_0[13] = get_internal_image(3713);
            images_bgstar_4_0_0[14] = get_internal_image(3694);
            images_bgstar_4_0_0[15] = get_internal_image(3693);
            images_bgstar_4_0_0[16] = get_internal_image(3692);
            images_bgstar_4_0_0[17] = get_internal_image(3160);
            images_bgstar_4_0_0[18] = get_internal_image(3508);
            images_bgstar_4_0_0[19] = get_internal_image(3154);
            images_bgstar_4_0_0[20] = get_internal_image(381);
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
FrameObject * create_bgstar_4(int x, int y)
{
    return new (Active::pool.create()) BgStar_4(x, y);
}
static Image* images_effectswhiteburst_5_4_0[13];
static Direction direction_effectswhiteburst_5_4_0 = {0, 100, 100, 0, 1, images_effectswhiteburst_5_4_0, 13};
static Animation anim_effectswhiteburst_5_4 = {&direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, NULL, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0, &direction_effectswhiteburst_5_4_0};
static Animation * anim_array_effectswhiteburst_5[5] = {NULL, NULL, NULL, NULL, &anim_effectswhiteburst_5_4};
static Animations anim_effectswhiteburst_5 = {5, &anim_array_effectswhiteburst_5[0]};
static bool anim_effectswhiteburst_5_initialized;
class EffectsWhiteBurst_5 : public Active
{
public:
    EffectsWhiteBurst_5(int x, int y) : Active(x, y, EffectsWhiteBurst_5_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_WhiteBurst", 18);
#endif
        this->animations = &anim_effectswhiteburst_5;
        if (!anim_effectswhiteburst_5_initialized) {
            anim_effectswhiteburst_5_initialized = true;
            images_effectswhiteburst_5_4_0[0] = get_internal_image(3635);
            images_effectswhiteburst_5_4_0[1] = get_internal_image(15700);
            images_effectswhiteburst_5_4_0[2] = get_internal_image(15760);
            images_effectswhiteburst_5_4_0[3] = get_internal_image(15763);
            images_effectswhiteburst_5_4_0[4] = get_internal_image(15826);
            images_effectswhiteburst_5_4_0[5] = get_internal_image(15827);
            images_effectswhiteburst_5_4_0[6] = get_internal_image(15828);
            images_effectswhiteburst_5_4_0[7] = get_internal_image(15829);
            images_effectswhiteburst_5_4_0[8] = get_internal_image(15830);
            images_effectswhiteburst_5_4_0[9] = get_internal_image(15831);
            images_effectswhiteburst_5_4_0[10] = get_internal_image(15832);
            images_effectswhiteburst_5_4_0[11] = get_internal_image(2078);
            images_effectswhiteburst_5_4_0[12] = get_internal_image(15833);
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
FrameObject * create_effectswhiteburst_5(int x, int y)
{
    return new (Active::pool.create()) EffectsWhiteBurst_5(x, y);
}
static Image* images_scrolldot_6_0_0[1];
static Direction direction_scrolldot_6_0_0 = {0, 50, 50, 0, 1, images_scrolldot_6_0_0, 1};
static Animation anim_scrolldot_6_0 = {&direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, NULL, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0, &direction_scrolldot_6_0_0};
static Animation * anim_array_scrolldot_6[1] = {&anim_scrolldot_6_0};
static Animations anim_scrolldot_6 = {1, &anim_array_scrolldot_6[0]};
static bool anim_scrolldot_6_initialized;
class ScrollDot_6 : public Active
{
public:
    ScrollDot_6(int x, int y) : Active(x, y, ScrollDot_6_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Scroll dot", 10);
#endif
        set_visible(false);
        this->animations = &anim_scrolldot_6;
        if (!anim_scrolldot_6_initialized) {
            anim_scrolldot_6_initialized = true;
            images_scrolldot_6_0_0[0] = get_internal_image(2561);
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
FrameObject * create_scrolldot_6(int x, int y)
{
    return new (Active::pool.create()) ScrollDot_6(x, y);
}
static Image* images_levelparalaxwatersurface_7_0_0[8];
static Direction direction_levelparalaxwatersurface_7_0_0 = {0, 25, 25, 0, -1, images_levelparalaxwatersurface_7_0_0, 8};
static Image* images_levelparalaxwatersurface_7_0_1[8];
static Direction direction_levelparalaxwatersurface_7_0_1 = {1, 25, 25, 0, -1, images_levelparalaxwatersurface_7_0_1, 8};
static Animation anim_levelparalaxwatersurface_7_0 = {&direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_1, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0, &direction_levelparalaxwatersurface_7_0_0};
static Animation * anim_array_levelparalaxwatersurface_7[1] = {&anim_levelparalaxwatersurface_7_0};
static Animations anim_levelparalaxwatersurface_7 = {1, &anim_array_levelparalaxwatersurface_7[0]};
static bool anim_levelparalaxwatersurface_7_initialized;
class LevelParalaxWaterSurface_7 : public Active
{
public:
    LevelParalaxWaterSurface_7(int x, int y) : Active(x, y, LevelParalaxWaterSurface_7_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Paralax_WaterSurface", 26);
#endif
        this->animations = &anim_levelparalaxwatersurface_7;
        if (!anim_levelparalaxwatersurface_7_initialized) {
            anim_levelparalaxwatersurface_7_initialized = true;
            images_levelparalaxwatersurface_7_0_0[0] = get_internal_image(7774);
            images_levelparalaxwatersurface_7_0_0[1] = get_internal_image(7781);
            images_levelparalaxwatersurface_7_0_0[2] = get_internal_image(7782);
            images_levelparalaxwatersurface_7_0_0[3] = get_internal_image(7783);
            images_levelparalaxwatersurface_7_0_0[4] = get_internal_image(7775);
            images_levelparalaxwatersurface_7_0_0[5] = get_internal_image(7776);
            images_levelparalaxwatersurface_7_0_0[6] = get_internal_image(7777);
            images_levelparalaxwatersurface_7_0_0[7] = get_internal_image(7778);
            images_levelparalaxwatersurface_7_0_1[0] = get_internal_image(7211);
            images_levelparalaxwatersurface_7_0_1[1] = get_internal_image(7222);
            images_levelparalaxwatersurface_7_0_1[2] = get_internal_image(7223);
            images_levelparalaxwatersurface_7_0_1[3] = get_internal_image(7225);
            images_levelparalaxwatersurface_7_0_1[4] = get_internal_image(7393);
            images_levelparalaxwatersurface_7_0_1[5] = get_internal_image(7403);
            images_levelparalaxwatersurface_7_0_1[6] = get_internal_image(7410);
            images_levelparalaxwatersurface_7_0_1[7] = get_internal_image(7773);
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
FrameObject * create_levelparalaxwatersurface_7(int x, int y)
{
    return new (Active::pool.create()) LevelParalaxWaterSurface_7(x, y);
}
class IntroScene2_8 : public Backdrop
{
public:
    IntroScene2_8(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("IntroScene 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2570);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 127);
    }
};
FrameObject * create_introscene2_8(int x, int y)
{
    return new (Backdrop::pool.create()) IntroScene2_8(x, y);
}
class IntroScene1_9 : public Backdrop
{
public:
    IntroScene1_9(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("IntroScene 1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14841);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_introscene1_9(int x, int y)
{
    return new (Backdrop::pool.create()) IntroScene1_9(x, y);
}
class LayerObject_10 : public LayerObject
{
public:
    LayerObject_10(int x, int y) : LayerObject(x, y, LayerObject_10_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Layer object", 12);
#endif
    }
};
FrameObject * create_layerobject_10(int x, int y)
{
    return new (LayerObject::pool.create()) LayerObject_10(x, y);
}
static Image* images_brevonmechflyby_11_0_0[6];
static Direction direction_brevonmechflyby_11_0_0 = {0, 50, 50, 0, -1, images_brevonmechflyby_11_0_0, 6};
static Animation anim_brevonmechflyby_11_0 = {&direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, NULL, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0, &direction_brevonmechflyby_11_0_0};
static Animation * anim_array_brevonmechflyby_11[1] = {&anim_brevonmechflyby_11_0};
static Animations anim_brevonmechflyby_11 = {1, &anim_array_brevonmechflyby_11[0]};
static bool anim_brevonmechflyby_11_initialized;
class BrevonMechFlyby_11 : public Active
{
public:
    BrevonMechFlyby_11(int x, int y) : Active(x, y, BrevonMechFlyby_11_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Flyby", 16);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_brevonmechflyby_11;
        if (!anim_brevonmechflyby_11_initialized) {
            anim_brevonmechflyby_11_initialized = true;
            images_brevonmechflyby_11_0_0[0] = get_internal_image(12269);
            images_brevonmechflyby_11_0_0[1] = get_internal_image(12272);
            images_brevonmechflyby_11_0_0[2] = get_internal_image(12271);
            images_brevonmechflyby_11_0_0[3] = get_internal_image(14756);
            images_brevonmechflyby_11_0_0[4] = get_internal_image(14758);
            images_brevonmechflyby_11_0_0[5] = get_internal_image(14778);
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
FrameObject * create_brevonmechflyby_11(int x, int y)
{
    return new (Active::pool.create()) BrevonMechFlyby_11(x, y);
}
class SeparatorMasterObjects2_12 : public Backdrop
{
public:
    SeparatorMasterObjects2_12(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_MasterObjects 2", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2571);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatormasterobjects2_12(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorMasterObjects2_12(x, y);
}
static Image* images_gtlogo1_13_0_0[1];
static Direction direction_gtlogo1_13_0_0 = {0, 50, 50, 0, 1, images_gtlogo1_13_0_0, 1};
static Animation anim_gtlogo1_13_0 = {&direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, NULL, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0, &direction_gtlogo1_13_0_0};
static Image* images_gtlogo1_13_7_0[21];
static Direction direction_gtlogo1_13_7_0 = {0, 100, 100, 0, 1, images_gtlogo1_13_7_0, 21};
static Animation anim_gtlogo1_13_7 = {&direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, NULL, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0, &direction_gtlogo1_13_7_0};
static Animation * anim_array_gtlogo1_13[8] = {&anim_gtlogo1_13_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gtlogo1_13_7};
static Animations anim_gtlogo1_13 = {8, &anim_array_gtlogo1_13[0]};
static bool anim_gtlogo1_13_initialized;
class GTLogo1_13 : public Active
{
public:
    GTLogo1_13(int x, int y) : Active(x, y, GTLogo1_13_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GT logo 1", 9);
#endif
        set_visible(false);
        this->animations = &anim_gtlogo1_13;
        if (!anim_gtlogo1_13_initialized) {
            anim_gtlogo1_13_initialized = true;
            images_gtlogo1_13_0_0[0] = get_internal_image(2563);
            images_gtlogo1_13_7_0[0] = get_internal_image(2563);
            images_gtlogo1_13_7_0[1] = get_internal_image(2666);
            images_gtlogo1_13_7_0[2] = get_internal_image(2667);
            images_gtlogo1_13_7_0[3] = get_internal_image(2668);
            images_gtlogo1_13_7_0[4] = get_internal_image(2669);
            images_gtlogo1_13_7_0[5] = get_internal_image(2665);
            images_gtlogo1_13_7_0[6] = get_internal_image(2670);
            images_gtlogo1_13_7_0[7] = get_internal_image(2672);
            images_gtlogo1_13_7_0[8] = get_internal_image(2673);
            images_gtlogo1_13_7_0[9] = get_internal_image(2671);
            images_gtlogo1_13_7_0[10] = get_internal_image(2674);
            images_gtlogo1_13_7_0[11] = get_internal_image(2675);
            images_gtlogo1_13_7_0[12] = get_internal_image(2677);
            images_gtlogo1_13_7_0[13] = get_internal_image(2678);
            images_gtlogo1_13_7_0[14] = get_internal_image(2676);
            images_gtlogo1_13_7_0[15] = get_internal_image(2679);
            images_gtlogo1_13_7_0[16] = get_internal_image(2680);
            images_gtlogo1_13_7_0[17] = get_internal_image(2682);
            images_gtlogo1_13_7_0[18] = get_internal_image(2683);
            images_gtlogo1_13_7_0[19] = get_internal_image(2681);
            images_gtlogo1_13_7_0[20] = get_internal_image(2684);
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
FrameObject * create_gtlogo1_13(int x, int y)
{
    return new (Active::pool.create()) GTLogo1_13(x, y);
}
static Image* images_gtlogo2_14_0_0[1];
static Direction direction_gtlogo2_14_0_0 = {0, 50, 50, 0, 1, images_gtlogo2_14_0_0, 1};
static Animation anim_gtlogo2_14_0 = {&direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, NULL, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0, &direction_gtlogo2_14_0_0};
static Image* images_gtlogo2_14_7_0[22];
static Direction direction_gtlogo2_14_7_0 = {0, 100, 100, 0, 1, images_gtlogo2_14_7_0, 22};
static Animation anim_gtlogo2_14_7 = {&direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, NULL, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0, &direction_gtlogo2_14_7_0};
static Animation * anim_array_gtlogo2_14[8] = {&anim_gtlogo2_14_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gtlogo2_14_7};
static Animations anim_gtlogo2_14 = {8, &anim_array_gtlogo2_14[0]};
static bool anim_gtlogo2_14_initialized;
class GTLogo2_14 : public Active
{
public:
    GTLogo2_14(int x, int y) : Active(x, y, GTLogo2_14_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GT logo 2", 9);
#endif
        set_visible(false);
        this->animations = &anim_gtlogo2_14;
        if (!anim_gtlogo2_14_initialized) {
            anim_gtlogo2_14_initialized = true;
            images_gtlogo2_14_0_0[0] = get_internal_image(2551);
            images_gtlogo2_14_7_0[0] = get_internal_image(2706);
            images_gtlogo2_14_7_0[1] = get_internal_image(2705);
            images_gtlogo2_14_7_0[2] = get_internal_image(2704);
            images_gtlogo2_14_7_0[3] = get_internal_image(2703);
            images_gtlogo2_14_7_0[4] = get_internal_image(2702);
            images_gtlogo2_14_7_0[5] = get_internal_image(2701);
            images_gtlogo2_14_7_0[6] = get_internal_image(2700);
            images_gtlogo2_14_7_0[7] = get_internal_image(2699);
            images_gtlogo2_14_7_0[8] = get_internal_image(2698);
            images_gtlogo2_14_7_0[9] = get_internal_image(2697);
            images_gtlogo2_14_7_0[10] = get_internal_image(2696);
            images_gtlogo2_14_7_0[11] = get_internal_image(2695);
            images_gtlogo2_14_7_0[12] = get_internal_image(2694);
            images_gtlogo2_14_7_0[13] = get_internal_image(2691);
            images_gtlogo2_14_7_0[14] = get_internal_image(2690);
            images_gtlogo2_14_7_0[15] = get_internal_image(2689);
            images_gtlogo2_14_7_0[16] = get_internal_image(2688);
            images_gtlogo2_14_7_0[17] = get_internal_image(2687);
            images_gtlogo2_14_7_0[18] = get_internal_image(2693);
            images_gtlogo2_14_7_0[19] = get_internal_image(2686);
            images_gtlogo2_14_7_0[20] = get_internal_image(2685);
            images_gtlogo2_14_7_0[21] = get_internal_image(2551);
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
FrameObject * create_gtlogo2_14(int x, int y)
{
    return new (Active::pool.create()) GTLogo2_14(x, y);
}
static Image* images_sparkletrail_15_0_0[7];
static Direction direction_sparkletrail_15_0_0 = {0, 50, 50, 0, -1, images_sparkletrail_15_0_0, 7};
static Animation anim_sparkletrail_15_0 = {&direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, NULL, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0, &direction_sparkletrail_15_0_0};
static Animation * anim_array_sparkletrail_15[1] = {&anim_sparkletrail_15_0};
static Animations anim_sparkletrail_15 = {1, &anim_array_sparkletrail_15[0]};
static bool anim_sparkletrail_15_initialized;
class SparkleTrail_15 : public Active
{
public:
    SparkleTrail_15(int x, int y) : Active(x, y, SparkleTrail_15_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sparkle trail", 13);
#endif
        this->animations = &anim_sparkletrail_15;
        if (!anim_sparkletrail_15_initialized) {
            anim_sparkletrail_15_initialized = true;
            images_sparkletrail_15_0_0[0] = get_internal_image(1042);
            images_sparkletrail_15_0_0[1] = get_internal_image(1043);
            images_sparkletrail_15_0_0[2] = get_internal_image(1044);
            images_sparkletrail_15_0_0[3] = get_internal_image(1045);
            images_sparkletrail_15_0_0[4] = get_internal_image(1046);
            images_sparkletrail_15_0_0[5] = get_internal_image(1047);
            images_sparkletrail_15_0_0[6] = get_internal_image(381);
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
FrameObject * create_sparkletrail_15(int x, int y)
{
    return new (Active::pool.create()) SparkleTrail_15(x, y);
}
static Image* images_beam_16_0_0[1];
static Direction direction_beam_16_0_0 = {0, 50, 50, 0, 1, images_beam_16_0_0, 1};
static Image* images_beam_16_0_8[46];
static Direction direction_beam_16_0_8 = {8, 100, 100, 0, 1, images_beam_16_0_8, 46};
static Animation anim_beam_16_0 = {&direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, NULL, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, &direction_beam_16_0_8, NULL, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0, &direction_beam_16_0_0};
static Animation * anim_array_beam_16[1] = {&anim_beam_16_0};
static Animations anim_beam_16 = {1, &anim_array_beam_16[0]};
static bool anim_beam_16_initialized;
class Beam_16 : public Active
{
public:
    Beam_16(int x, int y) : Active(x, y, Beam_16_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Beam", 4);
#endif
        this->animations = &anim_beam_16;
        if (!anim_beam_16_initialized) {
            anim_beam_16_initialized = true;
            images_beam_16_0_0[0] = get_internal_image(2619);
            images_beam_16_0_8[0] = get_internal_image(2619);
            images_beam_16_0_8[1] = get_internal_image(2620);
            images_beam_16_0_8[2] = get_internal_image(2621);
            images_beam_16_0_8[3] = get_internal_image(2622);
            images_beam_16_0_8[4] = get_internal_image(2623);
            images_beam_16_0_8[5] = get_internal_image(2624);
            images_beam_16_0_8[6] = get_internal_image(2625);
            images_beam_16_0_8[7] = get_internal_image(2626);
            images_beam_16_0_8[8] = get_internal_image(2627);
            images_beam_16_0_8[9] = get_internal_image(2628);
            images_beam_16_0_8[10] = get_internal_image(2629);
            images_beam_16_0_8[11] = get_internal_image(2630);
            images_beam_16_0_8[12] = get_internal_image(2631);
            images_beam_16_0_8[13] = get_internal_image(2632);
            images_beam_16_0_8[14] = get_internal_image(2633);
            images_beam_16_0_8[15] = get_internal_image(2634);
            images_beam_16_0_8[16] = get_internal_image(2635);
            images_beam_16_0_8[17] = get_internal_image(2636);
            images_beam_16_0_8[18] = get_internal_image(2637);
            images_beam_16_0_8[19] = get_internal_image(2638);
            images_beam_16_0_8[20] = get_internal_image(2639);
            images_beam_16_0_8[21] = get_internal_image(2640);
            images_beam_16_0_8[22] = get_internal_image(2641);
            images_beam_16_0_8[23] = get_internal_image(2642);
            images_beam_16_0_8[24] = get_internal_image(2643);
            images_beam_16_0_8[25] = get_internal_image(2644);
            images_beam_16_0_8[26] = get_internal_image(2645);
            images_beam_16_0_8[27] = get_internal_image(2646);
            images_beam_16_0_8[28] = get_internal_image(2647);
            images_beam_16_0_8[29] = get_internal_image(2648);
            images_beam_16_0_8[30] = get_internal_image(2649);
            images_beam_16_0_8[31] = get_internal_image(2650);
            images_beam_16_0_8[32] = get_internal_image(2651);
            images_beam_16_0_8[33] = get_internal_image(2652);
            images_beam_16_0_8[34] = get_internal_image(2653);
            images_beam_16_0_8[35] = get_internal_image(2654);
            images_beam_16_0_8[36] = get_internal_image(2655);
            images_beam_16_0_8[37] = get_internal_image(2656);
            images_beam_16_0_8[38] = get_internal_image(2657);
            images_beam_16_0_8[39] = get_internal_image(2658);
            images_beam_16_0_8[40] = get_internal_image(2659);
            images_beam_16_0_8[41] = get_internal_image(2660);
            images_beam_16_0_8[42] = get_internal_image(2661);
            images_beam_16_0_8[43] = get_internal_image(2662);
            images_beam_16_0_8[44] = get_internal_image(2663);
            images_beam_16_0_8[45] = get_internal_image(2664);
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
FrameObject * create_beam_16(int x, int y)
{
    return new (Active::pool.create()) Beam_16(x, y);
}
static Image* images_whitefade_17_0_0[1];
static Direction direction_whitefade_17_0_0 = {0, 50, 50, 0, 1, images_whitefade_17_0_0, 1};
static Animation anim_whitefade_17_0 = {&direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, NULL, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0, &direction_whitefade_17_0_0};
static Animation * anim_array_whitefade_17[1] = {&anim_whitefade_17_0};
static Animations anim_whitefade_17 = {1, &anim_array_whitefade_17[0]};
static bool anim_whitefade_17_initialized;
class WhiteFade_17 : public Active
{
public:
    WhiteFade_17(int x, int y) : Active(x, y, WhiteFade_17_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("White fade", 10);
#endif
        this->animations = &anim_whitefade_17;
        if (!anim_whitefade_17_initialized) {
            anim_whitefade_17_initialized = true;
            images_whitefade_17_0_0[0] = get_internal_image(381);
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
FrameObject * create_whitefade_17(int x, int y)
{
    return new (Active::pool.create()) WhiteFade_17(x, y);
}
static Image* images_playerinput_19_0_0[1];
static Direction direction_playerinput_19_0_0 = {0, 50, 50, 0, 1, images_playerinput_19_0_0, 1};
static Animation anim_playerinput_19_0 = {&direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, NULL, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0, &direction_playerinput_19_0_0};
static Animation * anim_array_playerinput_19[1] = {&anim_playerinput_19_0};
static Animations anim_playerinput_19 = {1, &anim_array_playerinput_19[0]};
static bool anim_playerinput_19_initialized;
class PlayerInput_19 : public Active
{
public:
    PlayerInput_19(int x, int y) : Active(x, y, PlayerInput_19_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Input", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_playerinput_19;
        if (!anim_playerinput_19_initialized) {
            anim_playerinput_19_initialized = true;
            images_playerinput_19_0_0[0] = get_internal_image(196);
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
FrameObject * create_playerinput_19(int x, int y)
{
    return new (Active::pool.create()) PlayerInput_19(x, y);
}
static Image* images_masterinput_20_0_0[1];
static Direction direction_masterinput_20_0_0 = {0, 50, 50, 0, 1, images_masterinput_20_0_0, 1};
static Animation anim_masterinput_20_0 = {&direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, NULL, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0, &direction_masterinput_20_0_0};
static Animation * anim_array_masterinput_20[1] = {&anim_masterinput_20_0};
static Animations anim_masterinput_20 = {1, &anim_array_masterinput_20[0]};
static bool anim_masterinput_20_initialized;
class MasterInput_20 : public Active
{
public:
    MasterInput_20(int x, int y) : Active(x, y, MasterInput_20_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Master_Input", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_masterinput_20;
        if (!anim_masterinput_20_initialized) {
            anim_masterinput_20_initialized = true;
            images_masterinput_20_0_0[0] = get_internal_image(260);
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
FrameObject * create_masterinput_20(int x, int y)
{
    return new (Active::pool.create()) MasterInput_20(x, y);
}
static Image* images_inputsp1_21_0_0[1];
static Direction direction_inputsp1_21_0_0 = {0, 50, 50, 0, 1, images_inputsp1_21_0_0, 1};
static Animation anim_inputsp1_21_0 = {&direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, NULL, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0, &direction_inputsp1_21_0_0};
static Animation * anim_array_inputsp1_21[1] = {&anim_inputsp1_21_0};
static Animations anim_inputsp1_21 = {1, &anim_array_inputsp1_21[0]};
static bool anim_inputsp1_21_initialized;
class InputsP1_21 : public Active
{
public:
    InputsP1_21(int x, int y) : Active(x, y, InputsP1_21_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("InputsP1", 8);
#endif
        set_visible(false);
        this->animations = &anim_inputsp1_21;
        if (!anim_inputsp1_21_initialized) {
            anim_inputsp1_21_initialized = true;
            images_inputsp1_21_0_0[0] = get_internal_image(2568);
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
FrameObject * create_inputsp1_21(int x, int y)
{
    return new (Active::pool.create()) InputsP1_21(x, y);
}
static Image* images_globalinputdata_22_0_0[1];
static Direction direction_globalinputdata_22_0_0 = {0, 50, 50, 0, 1, images_globalinputdata_22_0_0, 1};
static Animation anim_globalinputdata_22_0 = {&direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, NULL, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0, &direction_globalinputdata_22_0_0};
static Animation * anim_array_globalinputdata_22[1] = {&anim_globalinputdata_22_0};
static Animations anim_globalinputdata_22 = {1, &anim_array_globalinputdata_22[0]};
static bool anim_globalinputdata_22_initialized;
class GlobalInputData_22 : public Active
{
public:
    GlobalInputData_22(int x, int y) : Active(x, y, GlobalInputData_22_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GlobalInputData", 15);
#endif
        set_visible(false);
        this->animations = &anim_globalinputdata_22;
        if (!anim_globalinputdata_22_initialized) {
            anim_globalinputdata_22_initialized = true;
            images_globalinputdata_22_0_0[0] = get_internal_image(2569);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_0_globalinputdata.value;
        if (!global_data_0_globalinputdata.init) {
            alterables->values.set(0, 1);
            alterables->values.set(4, 250);
            alterables->values.set(5, 250);
            alterables->values.set(6, 250);
            alterables->values.set(7, 250);
            alterables->values.set(8, 250);
            alterables->values.set(9, 250);
            alterables->values.set(10, 250);
            alterables->values.set(11, 250);
            alterables->strings.set(2, str_profiles_0);
            alterables->strings.set(3, str_freedom_planet_1);
            global_data_0_globalinputdata.init = true;
        }
    }
};
FrameObject * create_globalinputdata_22(int x, int y)
{
    return new (Active::pool.create()) GlobalInputData_22(x, y);
}
static Image* images_levelcardfade2_24_0_0[1];
static Direction direction_levelcardfade2_24_0_0 = {0, 50, 50, 0, 1, images_levelcardfade2_24_0_0, 1};
static Animation anim_levelcardfade2_24_0 = {&direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, NULL, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0, &direction_levelcardfade2_24_0_0};
static Animation * anim_array_levelcardfade2_24[1] = {&anim_levelcardfade2_24_0};
static Animations anim_levelcardfade2_24 = {1, &anim_array_levelcardfade2_24[0]};
static bool anim_levelcardfade2_24_initialized;
class LevelCardFade2_24 : public Active
{
public:
    LevelCardFade2_24(int x, int y) : Active(x, y, LevelCardFade2_24_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Fade 2", 16);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_levelcardfade2_24;
        if (!anim_levelcardfade2_24_initialized) {
            anim_levelcardfade2_24_initialized = true;
            images_levelcardfade2_24_0_0[0] = get_internal_image(128);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 0);
        create_alterables();
    }
};
FrameObject * create_levelcardfade2_24(int x, int y)
{
    return new (Active::pool.create()) LevelCardFade2_24(x, y);
}
class LocationName_25 : public TextBlitter
{
public:
    LocationName_25(int x, int y) : TextBlitter(x, y, LocationName_25_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Location name", 13);
#endif
        width = 240;
        height = 40;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_LEFT | ALIGN_TOP;
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
        set_text(std::string());
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_locationname_25(int x, int y)
{
    return new (TextBlitter::pool.create()) LocationName_25(x, y);
}
class SaraSSteamPluginFreedomPlanet_26 : public SteamObject
{
public:
    SaraSSteamPluginFreedomPlanet_26(int x, int y) : SteamObject(x, y, SaraSSteamPluginFreedomPlanet_26_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sara's Steam Plugin - Freedom Planet", 36);
#endif
        flags &= ~SCROLL;
    }
};
FrameObject * create_sarassteampluginfreedomplanet_26(int x, int y)
{
    return new (SteamObject::pool.create()) SaraSSteamPluginFreedomPlanet_26(x, y);
}
class WindowControl_27 : public WindowControl
{
public:
    WindowControl_27(int x, int y) : WindowControl(x, y, WindowControl_27_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Window Control", 14);
#endif
        create_alterables();
    }
};
FrameObject * create_windowcontrol_27(int x, int y)
{
    return new (WindowControl::pool.create()) WindowControl_27(x, y);
}
class SaveData_28 : public ArrayObject
{
public:
    SaveData_28(int x, int y) : ArrayObject(x, y, SaveData_28_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SaveData", 8);
#endif
        global_data = &global_data_1_savedata;
        if (!global_data_1_savedata.init) {
            global_data_1_savedata.init = true;
            initialize(true, 1, 3, 99, 1);
        } else {
            data = global_data_1_savedata.value;
        }
    }
};
FrameObject * create_savedata_28(int x, int y)
{
    return new (ArrayObject::pool.create()) SaveData_28(x, y);
}
class Joystick2_29 : public FrameObject
{
public:
    Joystick2_29(int x, int y) : FrameObject(x, y, Joystick2_29_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Joystick 2", 10);
#endif
        create_alterables();
    }
};
FrameObject * create_joystick2_29(int x, int y)
{
    return new (FrameObject::pool.create()) Joystick2_29(x, y);
}
class MapData_30 : public ArrayObject
{
public:
    MapData_30(int x, int y) : ArrayObject(x, y, MapData_30_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapData", 7);
#endif
        global_data = &global_data_2_mapdata;
        if (!global_data_2_mapdata.init) {
            global_data_2_mapdata.init = true;
            initialize(true, 0, 12, 6, 2);
        } else {
            data = global_data_2_mapdata.value;
        }
    }
};
FrameObject * create_mapdata_30(int x, int y)
{
    return new (ArrayObject::pool.create()) MapData_30(x, y);
}
class MapData2_32 : public ArrayObject
{
public:
    MapData2_32(int x, int y) : ArrayObject(x, y, MapData2_32_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapData 2", 9);
#endif
        global_data = &global_data_3_mapdata_2;
        if (!global_data_3_mapdata_2.init) {
            global_data_3_mapdata_2.init = true;
            initialize(true, 0, 12, 6, 2);
        } else {
            data = global_data_3_mapdata_2.value;
        }
    }
};
FrameObject * create_mapdata2_32(int x, int y)
{
    return new (ArrayObject::pool.create()) MapData2_32(x, y);
}
class RecordData_34 : public ArrayObject
{
public:
    RecordData_34(int x, int y) : ArrayObject(x, y, RecordData_34_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("RecordData", 10);
#endif
        global_data = &global_data_4_recorddata;
        if (!global_data_4_recorddata.init) {
            global_data_4_recorddata.init = true;
            initialize(true, 1, 20, 100, 1);
        } else {
            data = global_data_4_recorddata.value;
        }
    }
};
FrameObject * create_recorddata_34(int x, int y)
{
    return new (ArrayObject::pool.create()) RecordData_34(x, y);
}
class FPLogo_35 : public Backdrop
{
public:
    FPLogo_35(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FP_Logo", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3587);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fplogo_35(int x, int y)
{
    return new (Backdrop::pool.create()) FPLogo_35(x, y);
}
static Image* images_highlighter_36_0_0[1];
static Direction direction_highlighter_36_0_0 = {0, 50, 50, 0, 1, images_highlighter_36_0_0, 1};
static Animation anim_highlighter_36_0 = {&direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, NULL, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0, &direction_highlighter_36_0_0};
static Animation * anim_array_highlighter_36[1] = {&anim_highlighter_36_0};
static Animations anim_highlighter_36 = {1, &anim_array_highlighter_36[0]};
static bool anim_highlighter_36_initialized;
class Highlighter_36 : public Active
{
public:
    Highlighter_36(int x, int y) : Active(x, y, Highlighter_36_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Highlighter", 11);
#endif
        this->animations = &anim_highlighter_36;
        if (!anim_highlighter_36_initialized) {
            anim_highlighter_36_initialized = true;
            images_highlighter_36_0_0[0] = get_internal_image(15906);
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
FrameObject * create_highlighter_36(int x, int y)
{
    return new (Active::pool.create()) Highlighter_36(x, y);
}
static Image* images_masterlevel_37_0_0[1];
static Direction direction_masterlevel_37_0_0 = {0, 50, 50, 0, 1, images_masterlevel_37_0_0, 1};
static Animation anim_masterlevel_37_0 = {&direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, NULL, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0, &direction_masterlevel_37_0_0};
static Animation * anim_array_masterlevel_37[1] = {&anim_masterlevel_37_0};
static Animations anim_masterlevel_37 = {1, &anim_array_masterlevel_37[0]};
static bool anim_masterlevel_37_initialized;
class MasterLevel_37 : public Active
{
public:
    MasterLevel_37(int x, int y) : Active(x, y, MasterLevel_37_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Master_Level", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_masterlevel_37;
        if (!anim_masterlevel_37_initialized) {
            anim_masterlevel_37_initialized = true;
            images_masterlevel_37_0_0[0] = get_internal_image(174);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_6_master_level.value;
        if (!global_data_6_master_level.init) {
            global_data_6_master_level.init = true;
        }
    }
};
FrameObject * create_masterlevel_37(int x, int y)
{
    return new (Active::pool.create()) MasterLevel_37(x, y);
}
class StageList_38 : public Text
{
public:
    StageList_38(int x, int y) : Text(x, y, StageList_38_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Stage List", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("TITLE SCREEN (start game normally)", 34));
        add_line(std::string("TIME ATTACK - CHARACTER SELECT", 30));
        add_line(std::string("AQUA TUNNEL 1 (MILLA)", 21));
        add_line(std::string("AQUA TUNNEL 1 (SPADE)", 21));
        add_line(std::string("AQUA TUNNEL 2 (MILLA)", 21));
        add_line(std::string("AQUA TUNNEL 2 (SPADE)", 21));
        add_line(std::string("DRAGON VALLEY 1 (LILAC)", 23));
        add_line(std::string("DRAGON VALLEY 1 (CAROL)", 23));
        add_line(std::string("DRAGON VALLEY 2 (LILAC)", 23));
        add_line(std::string("DRAGON VALLEY 2 (CAROL)", 23));
        add_line(std::string("RELIC MAZE 1 (LILAC)", 20));
        add_line(std::string("RELIC MAZE 1 (CAROL)", 20));
        add_line(std::string("RELIC MAZE 1 (MILLA)", 20));
        add_line(std::string("RELIC MAZE 2 (LILAC)", 20));
        add_line(std::string("RELIC MAZE 2 (CAROL)", 20));
        add_line(std::string("RELIC MAZE 2 (MILLA)", 20));
        add_line(std::string("FORTUNE NIGHT 1 (LILAC)", 23));
        add_line(std::string("FORTUNE NIGHT 1 (CAROL)", 23));
        add_line(std::string("FORTUNE NIGHT 1 (MILLA)", 23));
        add_line(std::string("FORTUNE NIGHT 2 (LILAC)", 23));
        add_line(std::string("FORTUNE NIGHT 2 (CAROL)", 23));
        add_line(std::string("FORTUNE NIGHT 2 (MILLA)", 23));
        add_line(std::string("SKY BATTALION (LILAC)", 21));
        add_line(std::string("SKY BATTALION (CAROL)", 21));
        add_line(std::string("SKY BATTALION (MILLA)", 21));
        add_line(std::string("JADE CREEK 1 (LILAC)", 20));
        add_line(std::string("JADE CREEK 1 (CAROL)", 20));
        add_line(std::string("JADE CREEK 1 (MILLA)", 20));
        add_line(std::string("JADE CREEK 2 (LILAC)", 20));
        add_line(std::string("JADE CREEK 2 (CAROL)", 20));
        add_line(std::string("JADE CREEK 2 (MILLA)", 20));
        add_line(std::string("THERMAL BASE 1 (LILAC)", 22));
        add_line(std::string("THERMAL BASE 1 (CAROL)", 22));
        add_line(std::string("THERMAL BASE 1 (MILLA)", 22));
        add_line(std::string("THERMAL BASE 1 (SPADE)", 22));
        add_line(std::string("THERMAL BASE 2 (LILAC)", 22));
        add_line(std::string("THERMAL BASE 2 (CAROL)", 22));
        add_line(std::string("THERMAL BASE 2 (MILLA)", 22));
        add_line(std::string("THERMAL BASE 2 (SPADE)", 22));
        add_line(std::string("TRAP HIDEOUT (CAROL)", 20));
        add_line(std::string("TRAP HIDEOUT (MILLA)", 20));
        add_line(std::string("PANGU LAGOON 1 (LILAC)", 22));
        add_line(std::string("PANGU LAGOON 2 (LILAC)", 22));
        add_line(std::string("SNOWFIELD SCHMUP (LILAC)", 24));
        add_line(std::string("SNOWFIELD SCHMUP (CAROL)", 24));
        add_line(std::string("SNOWFIELD SCHMUP (MILLA)", 24));
        add_line(std::string("BATTLE GLACIER 1 (LILAC)", 24));
        add_line(std::string("BATTLE GLACIER 1 (CAROL)", 24));
        add_line(std::string("BATTLE GLACIER 1 (MILLA)", 24));
        add_line(std::string("BATTLE GLACIER 1 (SPADE)", 24));
        add_line(std::string("BATTLE GLACIER 2 (LILAC)", 24));
        add_line(std::string("BATTLE GLACIER 2 (CAROL)", 24));
        add_line(std::string("BATTLE GLACIER 2 (MILLA)", 24));
        add_line(std::string("BATTLE GLACIER 2 (SPADE)", 24));
        add_line(std::string("FINAL DREADNOUGHT 1 (LILAC)", 27));
        add_line(std::string("FINAL DREADNOUGHT 1 (CAROL)", 27));
        add_line(std::string("FINAL DREADNOUGHT 2 (LILAC)", 27));
        add_line(std::string("FINAL DREADNOUGHT 2 (CAROL)", 27));
        add_line(std::string("FINAL DREADNOUGHT 3 (LILAC)", 27));
        add_line(std::string("FINAL DREADNOUGHT 3 (CAROL)", 27));
        add_line(std::string("FINAL DREADNOUGHT 4 (LILAC)", 27));
        add_line(std::string("FINAL DREADNOUGHT 4 (CAROL)", 27));
        add_line(std::string("LAST BOSS (LILAC)", 17));
        add_line(std::string("LAST BOSS (CAROL)", 17));
        add_line(std::string("SHANG MU ACADEMY (LILAC)", 24));
        add_line(std::string("SHANG MU ACADEMY (CAROL)", 24));
        add_line(std::string("SHANG MU ACADEMY (MILLA)", 24));
        add_line(std::string("SHANG MU ACADEMY (SPADE)", 24));
        add_line(std::string("SHANG MU ACADEMY (TORQUE)", 25));
        add_line(std::string("RESET ACHIEVEMENTS", 18));
        width = 372;
        height = 23;
        blend_color = Color(255, 255, 255);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_stagelist_38(int x, int y)
{
    return new (Text::pool.create()) StageList_38(x, y);
}
class CutsceneList_39 : public Text
{
public:
    CutsceneList_39(int x, int y) : Text(x, y, CutsceneList_39_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Cutscene List", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Game Intro (Meet Brevon)", 24));
        add_line(std::string("Dragon Valley (Meet Lilac and Carol)", 36));
        add_line(std::string("Crash Site (Meet Serpentine and Torque)", 39));
        add_line(std::string("Relic Maze (Meet Gong and Neera)", 32));
        add_line(std::string("Relic Maze (Milla's Hideout)", 28));
        add_line(std::string("Relic Maze (Cave Collapse)", 26));
        add_line(std::string("Shang Tu Royal Palace (Gong's Bad News)", 39));
        add_line(std::string("Relic Maze (Meet Milla)", 23));
        add_line(std::string("Lilac's Treehouse (Torque Revealed)", 35));
        add_line(std::string("Shuigang Palace (Brevon's Plan)", 31));
        add_line(std::string("Lilac's Treehouse (The Next Morning)", 36));
        add_line(std::string("Northern Plateau (Gong's Help)", 30));
        add_line(std::string("Shang Mu (Spade Encounter)", 26));
        add_line(std::string("Fortune Night (Robopanther Defeated)", 36));
        add_line(std::string("Shang Mu City Hall (Zao's Dinner)", 33));
        add_line(std::string("Shuigang Palace (Brevon Thwarts the Intruders)", 46));
        add_line(std::string("Shang Mu City Hall (Zao's Help)", 31));
        add_line(std::string("Zao's Airship", 13));
        add_line(std::string("Zao's Airship (Ambushed)", 24));
        add_line(std::string("Jiang River (Route to Shang Tu)", 31));
        add_line(std::string("Shang Tu Royal Palace (Talk With Magister)", 42));
        add_line(std::string("Royal Palace Jail (Lilac's Plan)", 32));
        add_line(std::string("Royal Palace Jail (Escape Plain Fail)", 37));
        add_line(std::string("Royal Palace Throne Room (Lilac's Apology)", 42));
        add_line(std::string("Shuigang Palace (Brevon Discovers Torque)", 41));
        add_line(std::string("Jade Creek Cave (What Do We Do Now)", 35));
        add_line(std::string("Trap Hideout (Carol Seeks Help)", 31));
        add_line(std::string("Thermal Base (Torturing Lilac)", 30));
        add_line(std::string("Thermal Base (Enter Team Spade)", 31));
        add_line(std::string("Thermal Base (Brevon Encounter)", 31));
        add_line(std::string("Outside Thermal Base (Lilac's Arrest)", 37));
        add_line(std::string("Outside Thermal Base (Carol, Milla and Torque)", 46));
        add_line(std::string("Shang Tu Royal Palace (Magister's Mission)", 42));
        add_line(std::string("Pangu Lagoon (The Final Message)", 32));
        add_line(std::string("Snowfields (Army of Shang Tu)", 29));
        add_line(std::string("Snowfield Encampment (Prepare For Final Batle)", 46));
        add_line(std::string("Ending", 6));
        width = 372;
        height = 23;
        blend_color = Color(255, 255, 255);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_cutscenelist_39(int x, int y)
{
    return new (Text::pool.create()) CutsceneList_39(x, y);
}
class SelectedStage_40 : public Counter
{
public:
    SelectedStage_40(int x, int y) : Counter(x, y, SelectedStage_40_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SelectedStage", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = 0;
        maximum = 99;
        set(1);
    }
};
FrameObject * create_selectedstage_40(int x, int y)
{
    return new (Counter::pool.create()) SelectedStage_40(x, y);
}
class SelectedScene_41 : public Counter
{
public:
    SelectedScene_41(int x, int y) : Counter(x, y, SelectedScene_41_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SelectedScene", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = 0;
        maximum = 99;
        set(1);
    }
};
FrameObject * create_selectedscene_41(int x, int y)
{
    return new (Counter::pool.create()) SelectedScene_41(x, y);
}
class Message_42 : public TextBlitter
{
public:
    Message_42(int x, int y) : TextBlitter(x, y, Message_42_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message", 7);
#endif
        width = 408;
        height = 60;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_TOP;
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
        set_text(std::string("Use the LEFT or RIGHT arrow keys to select a frame.\r\nPress UP for stages and DOWN for cutscenes.\r\nPress ENTER to begin.", 119));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_message_42(int x, int y)
{
    return new (TextBlitter::pool.create()) Message_42(x, y);
}
class Message2_43 : public TextBlitter
{
public:
    Message2_43(int x, int y) : TextBlitter(x, y, Message2_43_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message 2", 9);
#endif
        width = 408;
        height = 20;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_TOP;
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
FrameObject * create_message2_43(int x, int y)
{
    return new (TextBlitter::pool.create()) Message2_43(x, y);
}
class Message3_44 : public TextBlitter
{
public:
    Message3_44(int x, int y) : TextBlitter(x, y, Message3_44_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message 3", 9);
#endif
        width = 408;
        height = 20;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_TOP;
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
FrameObject * create_message3_44(int x, int y)
{
    return new (TextBlitter::pool.create()) Message3_44(x, y);
}
class Backdrop_45 : public Backdrop
{
public:
    Backdrop_45(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3158);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_45(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_45(x, y);
}
class Speed_46 : public Counter
{
public:
    Speed_46(int x, int y) : Counter(x, y, Speed_46_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Speed", 5);
#endif
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = 1;
        maximum = 999999999;
        set(5);
    }
};
FrameObject * create_speed_46(int x, int y)
{
    return new (Counter::pool.create()) Speed_46(x, y);
}
static Image* images_moon_47_0_0[1];
static Direction direction_moon_47_0_0 = {0, 50, 50, 0, 1, images_moon_47_0_0, 1};
static Animation anim_moon_47_0 = {&direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, NULL, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0, &direction_moon_47_0_0};
static Animation * anim_array_moon_47[1] = {&anim_moon_47_0};
static Animations anim_moon_47 = {1, &anim_array_moon_47[0]};
static bool anim_moon_47_initialized;
class Moon_47 : public Active
{
public:
    Moon_47(int x, int y) : Active(x, y, Moon_47_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Moon", 4);
#endif
        this->animations = &anim_moon_47;
        if (!anim_moon_47_initialized) {
            anim_moon_47_initialized = true;
            images_moon_47_0_0[0] = get_internal_image(4784);
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
FrameObject * create_moon_47(int x, int y)
{
    return new (Active::pool.create()) Moon_47(x, y);
}
static Image* images_planetavalice_48_0_0[1];
static Direction direction_planetavalice_48_0_0 = {0, 50, 50, 0, 1, images_planetavalice_48_0_0, 1};
static Animation anim_planetavalice_48_0 = {&direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, NULL, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0, &direction_planetavalice_48_0_0};
static Animation * anim_array_planetavalice_48[1] = {&anim_planetavalice_48_0};
static Animations anim_planetavalice_48 = {1, &anim_array_planetavalice_48[0]};
static bool anim_planetavalice_48_initialized;
class PlanetAvalice_48 : public Active
{
public:
    PlanetAvalice_48(int x, int y) : Active(x, y, PlanetAvalice_48_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Planet Avalice", 14);
#endif
        this->animations = &anim_planetavalice_48;
        if (!anim_planetavalice_48_initialized) {
            anim_planetavalice_48_initialized = true;
            images_planetavalice_48_0_0[0] = get_internal_image(3354);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_planetavalice_48(int x, int y)
{
    return new (Active::pool.create()) PlanetAvalice_48(x, y);
}
static Image* images_stars_49_0_0[1];
static Direction direction_stars_49_0_0 = {0, 100, 100, 0, 1, images_stars_49_0_0, 1};
static Image* images_stars_49_0_2[1];
static Direction direction_stars_49_0_2 = {2, 100, 100, 0, 1, images_stars_49_0_2, 1};
static Image* images_stars_49_0_4[1];
static Direction direction_stars_49_0_4 = {4, 100, 100, 0, 1, images_stars_49_0_4, 1};
static Image* images_stars_49_0_6[1];
static Direction direction_stars_49_0_6 = {6, 100, 100, 0, 1, images_stars_49_0_6, 1};
static Image* images_stars_49_0_8[1];
static Direction direction_stars_49_0_8 = {8, 100, 100, 0, 1, images_stars_49_0_8, 1};
static Image* images_stars_49_0_10[1];
static Direction direction_stars_49_0_10 = {10, 100, 100, 0, 1, images_stars_49_0_10, 1};
static Image* images_stars_49_0_12[1];
static Direction direction_stars_49_0_12 = {12, 100, 100, 0, 1, images_stars_49_0_12, 1};
static Image* images_stars_49_0_14[1];
static Direction direction_stars_49_0_14 = {14, 100, 100, 0, 1, images_stars_49_0_14, 1};
static Image* images_stars_49_0_16[1];
static Direction direction_stars_49_0_16 = {16, 100, 100, 0, 1, images_stars_49_0_16, 1};
static Image* images_stars_49_0_18[1];
static Direction direction_stars_49_0_18 = {18, 100, 100, 0, 1, images_stars_49_0_18, 1};
static Image* images_stars_49_0_20[1];
static Direction direction_stars_49_0_20 = {20, 100, 100, 0, 1, images_stars_49_0_20, 1};
static Image* images_stars_49_0_22[1];
static Direction direction_stars_49_0_22 = {22, 100, 100, 0, 1, images_stars_49_0_22, 1};
static Image* images_stars_49_0_24[1];
static Direction direction_stars_49_0_24 = {24, 100, 100, 0, 1, images_stars_49_0_24, 1};
static Image* images_stars_49_0_26[1];
static Direction direction_stars_49_0_26 = {26, 100, 100, 0, 1, images_stars_49_0_26, 1};
static Image* images_stars_49_0_28[1];
static Direction direction_stars_49_0_28 = {28, 100, 100, 0, 1, images_stars_49_0_28, 1};
static Image* images_stars_49_0_30[1];
static Direction direction_stars_49_0_30 = {30, 100, 100, 0, 1, images_stars_49_0_30, 1};
static Animation anim_stars_49_0 = {&direction_stars_49_0_0, NULL, &direction_stars_49_0_2, NULL, &direction_stars_49_0_4, NULL, &direction_stars_49_0_6, NULL, &direction_stars_49_0_8, NULL, &direction_stars_49_0_10, NULL, &direction_stars_49_0_12, NULL, &direction_stars_49_0_14, NULL, &direction_stars_49_0_16, NULL, &direction_stars_49_0_18, NULL, &direction_stars_49_0_20, NULL, &direction_stars_49_0_22, NULL, &direction_stars_49_0_24, NULL, &direction_stars_49_0_26, NULL, &direction_stars_49_0_28, NULL, &direction_stars_49_0_30, NULL};
static Animation * anim_array_stars_49[1] = {&anim_stars_49_0};
static Animations anim_stars_49 = {1, &anim_array_stars_49[0]};
static bool anim_stars_49_initialized;
class Stars_49 : public Active
{
public:
    Stars_49(int x, int y) : Active(x, y, Stars_49_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("stars", 5);
#endif
        this->animations = &anim_stars_49;
        if (!anim_stars_49_initialized) {
            anim_stars_49_initialized = true;
            images_stars_49_0_0[0] = get_internal_image(3695);
            images_stars_49_0_2[0] = get_internal_image(3695);
            images_stars_49_0_4[0] = get_internal_image(3695);
            images_stars_49_0_6[0] = get_internal_image(3695);
            images_stars_49_0_8[0] = get_internal_image(3697);
            images_stars_49_0_10[0] = get_internal_image(3698);
            images_stars_49_0_12[0] = get_internal_image(3700);
            images_stars_49_0_14[0] = get_internal_image(3700);
            images_stars_49_0_16[0] = get_internal_image(3701);
            images_stars_49_0_18[0] = get_internal_image(3701);
            images_stars_49_0_20[0] = get_internal_image(3703);
            images_stars_49_0_22[0] = get_internal_image(3703);
            images_stars_49_0_24[0] = get_internal_image(3708);
            images_stars_49_0_26[0] = get_internal_image(3709);
            images_stars_49_0_28[0] = get_internal_image(3710);
            images_stars_49_0_30[0] = get_internal_image(3711);
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
FrameObject * create_stars_49(int x, int y)
{
    return new (Active::pool.create()) Stars_49(x, y);
}
static Image* images_titlestar_50_0_0[21];
static Direction direction_titlestar_50_0_0 = {0, 25, 25, 0, -1, images_titlestar_50_0_0, 21};
static Animation anim_titlestar_50_0 = {&direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, NULL, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0, &direction_titlestar_50_0_0};
static Animation * anim_array_titlestar_50[1] = {&anim_titlestar_50_0};
static Animations anim_titlestar_50 = {1, &anim_array_titlestar_50[0]};
static bool anim_titlestar_50_initialized;
class TitleStar_50 : public Active
{
public:
    TitleStar_50(int x, int y) : Active(x, y, TitleStar_50_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TitleStar", 9);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_titlestar_50;
        if (!anim_titlestar_50_initialized) {
            anim_titlestar_50_initialized = true;
            images_titlestar_50_0_0[0] = get_internal_image(3716);
            images_titlestar_50_0_0[1] = get_internal_image(3717);
            images_titlestar_50_0_0[2] = get_internal_image(3716);
            images_titlestar_50_0_0[3] = get_internal_image(381);
            images_titlestar_50_0_0[4] = get_internal_image(3154);
            images_titlestar_50_0_0[5] = get_internal_image(3508);
            images_titlestar_50_0_0[6] = get_internal_image(3160);
            images_titlestar_50_0_0[7] = get_internal_image(3692);
            images_titlestar_50_0_0[8] = get_internal_image(3693);
            images_titlestar_50_0_0[9] = get_internal_image(3694);
            images_titlestar_50_0_0[10] = get_internal_image(3713);
            images_titlestar_50_0_0[11] = get_internal_image(3714);
            images_titlestar_50_0_0[12] = get_internal_image(3714);
            images_titlestar_50_0_0[13] = get_internal_image(3713);
            images_titlestar_50_0_0[14] = get_internal_image(3694);
            images_titlestar_50_0_0[15] = get_internal_image(3693);
            images_titlestar_50_0_0[16] = get_internal_image(3692);
            images_titlestar_50_0_0[17] = get_internal_image(3160);
            images_titlestar_50_0_0[18] = get_internal_image(3508);
            images_titlestar_50_0_0[19] = get_internal_image(3154);
            images_titlestar_50_0_0[20] = get_internal_image(381);
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
FrameObject * create_titlestar_50(int x, int y)
{
    return new (Active::pool.create()) TitleStar_50(x, y);
}
static Image* images_introstar_51_0_0[1];
static Direction direction_introstar_51_0_0 = {0, 50, 50, 0, 1, images_introstar_51_0_0, 1};
static Animation anim_introstar_51_0 = {&direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, NULL, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0, &direction_introstar_51_0_0};
static Animation * anim_array_introstar_51[1] = {&anim_introstar_51_0};
static Animations anim_introstar_51 = {1, &anim_array_introstar_51[0]};
static bool anim_introstar_51_initialized;
class IntroStar_51 : public Active
{
public:
    IntroStar_51(int x, int y) : Active(x, y, IntroStar_51_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Intro Star", 10);
#endif
        this->animations = &anim_introstar_51;
        if (!anim_introstar_51_initialized) {
            anim_introstar_51_initialized = true;
            images_introstar_51_0_0[0] = get_internal_image(8867);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 240);
    }
};
FrameObject * create_introstar_51(int x, int y)
{
    return new (Active::pool.create()) IntroStar_51(x, y);
}
class Backdrop4_52 : public Backdrop
{
public:
    Backdrop4_52(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2535);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop4_52(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_52(x, y);
}
static Image* images_pressstart_53_0_0[2];
static Direction direction_pressstart_53_0_0 = {0, 0, 0, 0, 1, images_pressstart_53_0_0, 2};
static Image* images_pressstart_53_0_1[2];
static Direction direction_pressstart_53_0_1 = {1, 50, 50, 0, 10, images_pressstart_53_0_1, 2};
static Image* images_pressstart_53_0_2[2];
static Direction direction_pressstart_53_0_2 = {2, 50, 50, 0, 10, images_pressstart_53_0_2, 2};
static Animation anim_pressstart_53_0 = {&direction_pressstart_53_0_0, &direction_pressstart_53_0_1, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, &direction_pressstart_53_0_2, NULL, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0, &direction_pressstart_53_0_0};
static Animation * anim_array_pressstart_53[1] = {&anim_pressstart_53_0};
static Animations anim_pressstart_53 = {1, &anim_array_pressstart_53[0]};
static bool anim_pressstart_53_initialized;
class PressStart_53 : public Active
{
public:
    PressStart_53(int x, int y) : Active(x, y, PressStart_53_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Press Start", 11);
#endif
        set_visible(false);
        this->animations = &anim_pressstart_53;
        if (!anim_pressstart_53_initialized) {
            anim_pressstart_53_initialized = true;
            images_pressstart_53_0_0[0] = get_internal_image(3389);
            images_pressstart_53_0_0[1] = get_internal_image(2585);
            images_pressstart_53_0_1[0] = get_internal_image(3155);
            images_pressstart_53_0_1[1] = get_internal_image(3389);
            images_pressstart_53_0_2[0] = get_internal_image(3155);
            images_pressstart_53_0_2[1] = get_internal_image(3389);
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
FrameObject * create_pressstart_53(int x, int y)
{
    return new (Active::pool.create()) PressStart_53(x, y);
}
static Image* images_fade_54_0_0[1];
static Direction direction_fade_54_0_0 = {0, 50, 50, 0, 1, images_fade_54_0_0, 1};
static Image* images_fade_54_0_1[1];
static Direction direction_fade_54_0_1 = {1, 50, 50, 0, 1, images_fade_54_0_1, 1};
static Image* images_fade_54_0_8[1];
static Direction direction_fade_54_0_8 = {8, 50, 50, 0, 1, images_fade_54_0_8, 1};
static Animation anim_fade_54_0 = {&direction_fade_54_0_0, &direction_fade_54_0_1, &direction_fade_54_0_1, &direction_fade_54_0_1, &direction_fade_54_0_1, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, &direction_fade_54_0_8, NULL, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0, &direction_fade_54_0_0};
static Animation * anim_array_fade_54[1] = {&anim_fade_54_0};
static Animations anim_fade_54 = {1, &anim_array_fade_54[0]};
static bool anim_fade_54_initialized;
class Fade_54 : public Active
{
public:
    Fade_54(int x, int y) : Active(x, y, Fade_54_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fade", 4);
#endif
        this->animations = &anim_fade_54;
        if (!anim_fade_54_initialized) {
            anim_fade_54_initialized = true;
            images_fade_54_0_0[0] = get_internal_image(128);
            images_fade_54_0_1[0] = get_internal_image(381);
            images_fade_54_0_8[0] = get_internal_image(128);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = false;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_fade_54(int x, int y)
{
    return new (Active::pool.create()) Fade_54(x, y);
}
static Image* images_active2_55_0_0[1];
static Direction direction_active2_55_0_0 = {0, 50, 50, 0, 1, images_active2_55_0_0, 1};
static Animation anim_active2_55_0 = {&direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, NULL, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0, &direction_active2_55_0_0};
static Animation * anim_array_active2_55[1] = {&anim_active2_55_0};
static Animations anim_active2_55 = {1, &anim_array_active2_55[0]};
static bool anim_active2_55_initialized;
class Active2_55 : public Active
{
public:
    Active2_55(int x, int y) : Active(x, y, Active2_55_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_55;
        if (!anim_active2_55_initialized) {
            anim_active2_55_initialized = true;
            images_active2_55_0_0[0] = get_internal_image(128);
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
FrameObject * create_active2_55(int x, int y)
{
    return new (Active::pool.create()) Active2_55(x, y);
}
static Image* images_shockwave_56_0_0[1];
static Direction direction_shockwave_56_0_0 = {0, 50, 50, 0, -1, images_shockwave_56_0_0, 1};
static Image* images_shockwave_56_0_8[11];
static Direction direction_shockwave_56_0_8 = {8, 50, 50, 10, -1, images_shockwave_56_0_8, 11};
static Animation anim_shockwave_56_0 = {&direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, NULL, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, &direction_shockwave_56_0_8, NULL, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0, &direction_shockwave_56_0_0};
static Animation * anim_array_shockwave_56[1] = {&anim_shockwave_56_0};
static Animations anim_shockwave_56 = {1, &anim_array_shockwave_56[0]};
static bool anim_shockwave_56_initialized;
class Shockwave_56 : public Active
{
public:
    Shockwave_56(int x, int y) : Active(x, y, Shockwave_56_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shockwave", 9);
#endif
        set_visible(false);
        this->animations = &anim_shockwave_56;
        if (!anim_shockwave_56_initialized) {
            anim_shockwave_56_initialized = true;
            images_shockwave_56_0_0[0] = get_internal_image(14524);
            images_shockwave_56_0_8[0] = get_internal_image(14524);
            images_shockwave_56_0_8[1] = get_internal_image(14525);
            images_shockwave_56_0_8[2] = get_internal_image(14526);
            images_shockwave_56_0_8[3] = get_internal_image(14527);
            images_shockwave_56_0_8[4] = get_internal_image(14528);
            images_shockwave_56_0_8[5] = get_internal_image(14529);
            images_shockwave_56_0_8[6] = get_internal_image(14528);
            images_shockwave_56_0_8[7] = get_internal_image(14530);
            images_shockwave_56_0_8[8] = get_internal_image(14531);
            images_shockwave_56_0_8[9] = get_internal_image(14532);
            images_shockwave_56_0_8[10] = get_internal_image(14533);
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
FrameObject * create_shockwave_56(int x, int y)
{
    return new (Active::pool.create()) Shockwave_56(x, y);
}
static Image* images_fadeedge_57_0_0[1];
static Direction direction_fadeedge_57_0_0 = {0, 50, 50, 0, 1, images_fadeedge_57_0_0, 1};
static Animation anim_fadeedge_57_0 = {&direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, NULL, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0, &direction_fadeedge_57_0_0};
static Animation * anim_array_fadeedge_57[1] = {&anim_fadeedge_57_0};
static Animations anim_fadeedge_57 = {1, &anim_array_fadeedge_57[0]};
static bool anim_fadeedge_57_initialized;
class FadeEdge_57 : public Active
{
public:
    FadeEdge_57(int x, int y) : Active(x, y, FadeEdge_57_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fade_edge", 9);
#endif
        this->animations = &anim_fadeedge_57;
        if (!anim_fadeedge_57_initialized) {
            anim_fadeedge_57_initialized = true;
            images_fadeedge_57_0_0[0] = get_internal_image(444);
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
FrameObject * create_fadeedge_57(int x, int y)
{
    return new (Active::pool.create()) FadeEdge_57(x, y);
}
class QuickBackdrop2_58 : public QuickBackdrop
{
public:
    QuickBackdrop2_58(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 240;
        image = get_internal_image(2523);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_58(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_58(x, y);
}
class QuickBackdrop_59 : public QuickBackdrop
{
public:
    QuickBackdrop_59(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 80;
        image = get_internal_image(1714);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_59(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_59(x, y);
}
class BackgroundSystemBox2_60 : public SystemBox
{
public:
    BackgroundSystemBox2_60(int x, int y) : SystemBox(x, y, BackgroundSystemBox2_60_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Background System Box 2", 23);
#endif
        flags |= BACKGROUND;
        width = 960;
        height = 64;
        type = PATTERN_IMAGE;
        image = get_internal_image(1234);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_backgroundsystembox2_60(int x, int y)
{
    return new (SystemBox::pool.create()) BackgroundSystemBox2_60(x, y);
}
static Image* images_particle_61_0_0[1];
static Direction direction_particle_61_0_0 = {0, 50, 50, 0, 1, images_particle_61_0_0, 1};
static Image* images_particle_61_0_1[1];
static Direction direction_particle_61_0_1 = {1, 50, 50, 0, 1, images_particle_61_0_1, 1};
static Image* images_particle_61_0_2[1];
static Direction direction_particle_61_0_2 = {2, 50, 50, 0, 1, images_particle_61_0_2, 1};
static Animation anim_particle_61_0 = {&direction_particle_61_0_0, &direction_particle_61_0_1, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, &direction_particle_61_0_2, NULL, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0, &direction_particle_61_0_0};
static Animation * anim_array_particle_61[1] = {&anim_particle_61_0};
static Animations anim_particle_61 = {1, &anim_array_particle_61[0]};
static bool anim_particle_61_initialized;
class Particle_61 : public Active
{
public:
    Particle_61(int x, int y) : Active(x, y, Particle_61_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Particle", 8);
#endif
        this->animations = &anim_particle_61;
        if (!anim_particle_61_initialized) {
            anim_particle_61_initialized = true;
            images_particle_61_0_0[0] = get_internal_image(2811);
            images_particle_61_0_1[0] = get_internal_image(2865);
            images_particle_61_0_2[0] = get_internal_image(3638);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(3, 0, 1, 2));
        create_alterables();
    }
};
FrameObject * create_particle_61(int x, int y)
{
    return new (Active::pool.create()) Particle_61(x, y);
}
static Image* images_particle2_62_0_0[1];
static Direction direction_particle2_62_0_0 = {0, 50, 50, 0, 1, images_particle2_62_0_0, 1};
static Image* images_particle2_62_0_1[1];
static Direction direction_particle2_62_0_1 = {1, 50, 50, 0, 1, images_particle2_62_0_1, 1};
static Image* images_particle2_62_0_2[1];
static Direction direction_particle2_62_0_2 = {2, 50, 50, 0, 1, images_particle2_62_0_2, 1};
static Animation anim_particle2_62_0 = {&direction_particle2_62_0_0, &direction_particle2_62_0_1, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, &direction_particle2_62_0_2, NULL, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0, &direction_particle2_62_0_0};
static Animation * anim_array_particle2_62[1] = {&anim_particle2_62_0};
static Animations anim_particle2_62 = {1, &anim_array_particle2_62[0]};
static bool anim_particle2_62_initialized;
class Particle2_62 : public Active
{
public:
    Particle2_62(int x, int y) : Active(x, y, Particle2_62_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Particle 2", 10);
#endif
        this->animations = &anim_particle2_62;
        if (!anim_particle2_62_initialized) {
            anim_particle2_62_initialized = true;
            images_particle2_62_0_0[0] = get_internal_image(2525);
            images_particle2_62_0_1[0] = get_internal_image(2529);
            images_particle2_62_0_2[0] = get_internal_image(2530);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(3, 0, 1, 2));
        create_alterables();
    }
};
FrameObject * create_particle2_62(int x, int y)
{
    return new (Active::pool.create()) Particle2_62(x, y);
}
static Image* images_star_63_0_0[1];
static Direction direction_star_63_0_0 = {0, 50, 50, 0, 1, images_star_63_0_0, 1};
static Animation anim_star_63_0 = {&direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, NULL, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0, &direction_star_63_0_0};
static Image* images_star_63_7_0[10];
static Direction direction_star_63_7_0 = {0, 25, 25, 0, 1, images_star_63_7_0, 10};
static Animation anim_star_63_7 = {&direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, NULL, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0, &direction_star_63_7_0};
static Animation * anim_array_star_63[8] = {&anim_star_63_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_star_63_7};
static Animations anim_star_63 = {8, &anim_array_star_63[0]};
static bool anim_star_63_initialized;
class Star_63 : public Active
{
public:
    Star_63(int x, int y) : Active(x, y, Star_63_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Star", 4);
#endif
        this->animations = &anim_star_63;
        if (!anim_star_63_initialized) {
            anim_star_63_initialized = true;
            images_star_63_0_0[0] = get_internal_image(2553);
            images_star_63_7_0[0] = get_internal_image(2553);
            images_star_63_7_0[1] = get_internal_image(2549);
            images_star_63_7_0[2] = get_internal_image(2555);
            images_star_63_7_0[3] = get_internal_image(2556);
            images_star_63_7_0[4] = get_internal_image(2557);
            images_star_63_7_0[5] = get_internal_image(2558);
            images_star_63_7_0[6] = get_internal_image(2557);
            images_star_63_7_0[7] = get_internal_image(2556);
            images_star_63_7_0[8] = get_internal_image(2555);
            images_star_63_7_0[9] = get_internal_image(2549);
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
FrameObject * create_star_63(int x, int y)
{
    return new (Active::pool.create()) Star_63(x, y);
}
class Backdrop5_64 : public Backdrop
{
public:
    Backdrop5_64(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5379);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop5_64(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_64(x, y);
}
class Backdrop6_65 : public Backdrop
{
public:
    Backdrop6_65(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(472);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop6_65(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_65(x, y);
}
class Backdrop_66 : public Backdrop
{
public:
    Backdrop_66(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2347);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_66(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_66(x, y);
}
class Backdrop8_67 : public Backdrop
{
public:
    Backdrop8_67(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3146);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop8_67(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop8_67(x, y);
}
static Image* images_controlboxname_68_0_0[2];
static Direction direction_controlboxname_68_0_0 = {0, 0, 0, 0, 1, images_controlboxname_68_0_0, 2};
static Animation anim_controlboxname_68_0 = {&direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, NULL, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0, &direction_controlboxname_68_0_0};
static Animation * anim_array_controlboxname_68[1] = {&anim_controlboxname_68_0};
static Animations anim_controlboxname_68 = {1, &anim_array_controlboxname_68[0]};
static bool anim_controlboxname_68_initialized;
class ControlBoxName_68 : public Active
{
public:
    ControlBoxName_68(int x, int y) : Active(x, y, ControlBoxName_68_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Control box name", 16);
#endif
        this->animations = &anim_controlboxname_68;
        if (!anim_controlboxname_68_initialized) {
            anim_controlboxname_68_initialized = true;
            images_controlboxname_68_0_0[0] = get_internal_image(1777);
            images_controlboxname_68_0_0[1] = get_internal_image(2562);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 191);
        create_alterables();
    }
};
FrameObject * create_controlboxname_68(int x, int y)
{
    return new (Active::pool.create()) ControlBoxName_68(x, y);
}
static Image* images_controlbox_69_0_0[2];
static Direction direction_controlbox_69_0_0 = {0, 0, 0, 0, 1, images_controlbox_69_0_0, 2};
static Animation anim_controlbox_69_0 = {&direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, NULL, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0, &direction_controlbox_69_0_0};
static Animation * anim_array_controlbox_69[1] = {&anim_controlbox_69_0};
static Animations anim_controlbox_69 = {1, &anim_array_controlbox_69[0]};
static bool anim_controlbox_69_initialized;
class ControlBox_69 : public Active
{
public:
    ControlBox_69(int x, int y) : Active(x, y, ControlBox_69_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Control box", 11);
#endif
        this->animations = &anim_controlbox_69;
        if (!anim_controlbox_69_initialized) {
            anim_controlbox_69_initialized = true;
            images_controlbox_69_0_0[0] = get_internal_image(564);
            images_controlbox_69_0_0[1] = get_internal_image(8549);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 191);
        create_alterables();
    }
};
FrameObject * create_controlbox_69(int x, int y)
{
    return new (Active::pool.create()) ControlBox_69(x, y);
}
static Image* images_mainoption1_70_0_0[1];
static Direction direction_mainoption1_70_0_0 = {0, 50, 50, 0, 1, images_mainoption1_70_0_0, 1};
static Image* images_mainoption1_70_0_8[1];
static Direction direction_mainoption1_70_0_8 = {8, 50, 50, 0, 1, images_mainoption1_70_0_8, 1};
static Animation anim_mainoption1_70_0 = {&direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, NULL, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, &direction_mainoption1_70_0_8, NULL, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0, &direction_mainoption1_70_0_0};
static Animation * anim_array_mainoption1_70[1] = {&anim_mainoption1_70_0};
static Animations anim_mainoption1_70 = {1, &anim_array_mainoption1_70[0]};
static bool anim_mainoption1_70_initialized;
class MainOption1_70 : public Active
{
public:
    MainOption1_70(int x, int y) : Active(x, y, MainOption1_70_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Main Option 1", 13);
#endif
        this->animations = &anim_mainoption1_70;
        if (!anim_mainoption1_70_initialized) {
            anim_mainoption1_70_initialized = true;
            images_mainoption1_70_0_0[0] = get_internal_image(5093);
            images_mainoption1_70_0_8[0] = get_internal_image(5072);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
    }
};
FrameObject * create_mainoption1_70(int x, int y)
{
    return new (Active::pool.create()) MainOption1_70(x, y);
}
static Image* images_mainoption2_71_0_0[1];
static Direction direction_mainoption2_71_0_0 = {0, 50, 50, 0, 1, images_mainoption2_71_0_0, 1};
static Animation anim_mainoption2_71_0 = {&direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, NULL, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0, &direction_mainoption2_71_0_0};
static Animation * anim_array_mainoption2_71[1] = {&anim_mainoption2_71_0};
static Animations anim_mainoption2_71 = {1, &anim_array_mainoption2_71[0]};
static bool anim_mainoption2_71_initialized;
class MainOption2_71 : public Active
{
public:
    MainOption2_71(int x, int y) : Active(x, y, MainOption2_71_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Main Option 2", 13);
#endif
        this->animations = &anim_mainoption2_71;
        if (!anim_mainoption2_71_initialized) {
            anim_mainoption2_71_initialized = true;
            images_mainoption2_71_0_0[0] = get_internal_image(5090);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_mainoption2_71(int x, int y)
{
    return new (Active::pool.create()) MainOption2_71(x, y);
}
static Image* images_mainoption3_72_0_0[1];
static Direction direction_mainoption3_72_0_0 = {0, 50, 50, 0, 1, images_mainoption3_72_0_0, 1};
static Animation anim_mainoption3_72_0 = {&direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, NULL, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0, &direction_mainoption3_72_0_0};
static Animation * anim_array_mainoption3_72[1] = {&anim_mainoption3_72_0};
static Animations anim_mainoption3_72 = {1, &anim_array_mainoption3_72[0]};
static bool anim_mainoption3_72_initialized;
class MainOption3_72 : public Active
{
public:
    MainOption3_72(int x, int y) : Active(x, y, MainOption3_72_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Main Option 3", 13);
#endif
        this->animations = &anim_mainoption3_72;
        if (!anim_mainoption3_72_initialized) {
            anim_mainoption3_72_initialized = true;
            images_mainoption3_72_0_0[0] = get_internal_image(5145);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_mainoption3_72(int x, int y)
{
    return new (Active::pool.create()) MainOption3_72(x, y);
}
static Image* images_mainoption4_73_0_0[1];
static Direction direction_mainoption4_73_0_0 = {0, 50, 50, 0, 1, images_mainoption4_73_0_0, 1};
static Animation anim_mainoption4_73_0 = {&direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, NULL, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0, &direction_mainoption4_73_0_0};
static Animation * anim_array_mainoption4_73[1] = {&anim_mainoption4_73_0};
static Animations anim_mainoption4_73 = {1, &anim_array_mainoption4_73[0]};
static bool anim_mainoption4_73_initialized;
class MainOption4_73 : public Active
{
public:
    MainOption4_73(int x, int y) : Active(x, y, MainOption4_73_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Main Option 4", 13);
#endif
        this->animations = &anim_mainoption4_73;
        if (!anim_mainoption4_73_initialized) {
            anim_mainoption4_73_initialized = true;
            images_mainoption4_73_0_0[0] = get_internal_image(5149);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 4);
    }
};
FrameObject * create_mainoption4_73(int x, int y)
{
    return new (Active::pool.create()) MainOption4_73(x, y);
}
static Image* images_mainoption5_74_0_0[1];
static Direction direction_mainoption5_74_0_0 = {0, 50, 50, 0, 1, images_mainoption5_74_0_0, 1};
static Animation anim_mainoption5_74_0 = {&direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, NULL, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0, &direction_mainoption5_74_0_0};
static Animation * anim_array_mainoption5_74[1] = {&anim_mainoption5_74_0};
static Animations anim_mainoption5_74 = {1, &anim_array_mainoption5_74[0]};
static bool anim_mainoption5_74_initialized;
class MainOption5_74 : public Active
{
public:
    MainOption5_74(int x, int y) : Active(x, y, MainOption5_74_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Main Option 5", 13);
#endif
        this->animations = &anim_mainoption5_74;
        if (!anim_mainoption5_74_initialized) {
            anim_mainoption5_74_initialized = true;
            images_mainoption5_74_0_0[0] = get_internal_image(4102);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_mainoption5_74(int x, int y)
{
    return new (Active::pool.create()) MainOption5_74(x, y);
}
static Image* images_crystalcursor_75_0_0[7];
static Direction direction_crystalcursor_75_0_0 = {0, 18, 18, 0, -1, images_crystalcursor_75_0_0, 7};
static Animation anim_crystalcursor_75_0 = {&direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, NULL, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0, &direction_crystalcursor_75_0_0};
static Animation * anim_array_crystalcursor_75[1] = {&anim_crystalcursor_75_0};
static Animations anim_crystalcursor_75 = {1, &anim_array_crystalcursor_75[0]};
static bool anim_crystalcursor_75_initialized;
class CrystalCursor_75 : public Active
{
public:
    CrystalCursor_75(int x, int y) : Active(x, y, CrystalCursor_75_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal cursor", 14);
#endif
        this->animations = &anim_crystalcursor_75;
        if (!anim_crystalcursor_75_initialized) {
            anim_crystalcursor_75_initialized = true;
            images_crystalcursor_75_0_0[0] = get_internal_image(5287);
            images_crystalcursor_75_0_0[1] = get_internal_image(5973);
            images_crystalcursor_75_0_0[2] = get_internal_image(6078);
            images_crystalcursor_75_0_0[3] = get_internal_image(6074);
            images_crystalcursor_75_0_0[4] = get_internal_image(6075);
            images_crystalcursor_75_0_0[5] = get_internal_image(6076);
            images_crystalcursor_75_0_0[6] = get_internal_image(6077);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_crystalcursor_75(int x, int y)
{
    return new (Active::pool.create()) CrystalCursor_75(x, y);
}
static Image* images_okay_76_0_0[1];
static Direction direction_okay_76_0_0 = {0, 0, 0, 0, 1, images_okay_76_0_0, 1};
static Animation anim_okay_76_0 = {&direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, NULL, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0, &direction_okay_76_0_0};
static Animation * anim_array_okay_76[1] = {&anim_okay_76_0};
static Animations anim_okay_76 = {1, &anim_array_okay_76[0]};
static bool anim_okay_76_initialized;
class Okay_76 : public Active
{
public:
    Okay_76(int x, int y) : Active(x, y, Okay_76_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Okay", 4);
#endif
        this->animations = &anim_okay_76;
        if (!anim_okay_76_initialized) {
            anim_okay_76_initialized = true;
            images_okay_76_0_0[0] = get_internal_image(1415);
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
FrameObject * create_okay_76(int x, int y)
{
    return new (Active::pool.create()) Okay_76(x, y);
}
static Image* images_sensitivity_77_0_0[1];
static Direction direction_sensitivity_77_0_0 = {0, 0, 0, 0, 1, images_sensitivity_77_0_0, 1};
static Animation anim_sensitivity_77_0 = {&direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, NULL, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0, &direction_sensitivity_77_0_0};
static Animation * anim_array_sensitivity_77[1] = {&anim_sensitivity_77_0};
static Animations anim_sensitivity_77 = {1, &anim_array_sensitivity_77[0]};
static bool anim_sensitivity_77_initialized;
class Sensitivity_77 : public Active
{
public:
    Sensitivity_77(int x, int y) : Active(x, y, Sensitivity_77_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Sensitivity", 11);
#endif
        this->animations = &anim_sensitivity_77;
        if (!anim_sensitivity_77_initialized) {
            anim_sensitivity_77_initialized = true;
            images_sensitivity_77_0_0[0] = get_internal_image(1155);
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
FrameObject * create_sensitivity_77(int x, int y)
{
    return new (Active::pool.create()) Sensitivity_77(x, y);
}
static Image* images_okay2_78_0_0[1];
static Direction direction_okay2_78_0_0 = {0, 0, 0, 0, 1, images_okay2_78_0_0, 1};
static Animation anim_okay2_78_0 = {&direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, NULL, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0, &direction_okay2_78_0_0};
static Animation * anim_array_okay2_78[1] = {&anim_okay2_78_0};
static Animations anim_okay2_78 = {1, &anim_array_okay2_78[0]};
static bool anim_okay2_78_initialized;
class Okay2_78 : public Active
{
public:
    Okay2_78(int x, int y) : Active(x, y, Okay2_78_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Okay 2", 6);
#endif
        this->animations = &anim_okay2_78;
        if (!anim_okay2_78_initialized) {
            anim_okay2_78_initialized = true;
            images_okay2_78_0_0[0] = get_internal_image(1021);
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
FrameObject * create_okay2_78(int x, int y)
{
    return new (Active::pool.create()) Okay2_78(x, y);
}
static Image* images_type_79_0_0[1];
static Direction direction_type_79_0_0 = {0, 0, 0, 0, 1, images_type_79_0_0, 1};
static Animation anim_type_79_0 = {&direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, NULL, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0, &direction_type_79_0_0};
static Animation * anim_array_type_79[1] = {&anim_type_79_0};
static Animations anim_type_79 = {1, &anim_array_type_79[0]};
static bool anim_type_79_initialized;
class Type_79 : public Active
{
public:
    Type_79(int x, int y) : Active(x, y, Type_79_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Type", 4);
#endif
        this->animations = &anim_type_79;
        if (!anim_type_79_initialized) {
            anim_type_79_initialized = true;
            images_type_79_0_0[0] = get_internal_image(938);
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
FrameObject * create_type_79(int x, int y)
{
    return new (Active::pool.create()) Type_79(x, y);
}
static Image* images_controls_80_0_0[1];
static Direction direction_controls_80_0_0 = {0, 0, 0, 0, 1, images_controls_80_0_0, 1};
static Animation anim_controls_80_0 = {&direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, NULL, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0, &direction_controls_80_0_0};
static Animation * anim_array_controls_80[1] = {&anim_controls_80_0};
static Animations anim_controls_80 = {1, &anim_array_controls_80[0]};
static bool anim_controls_80_initialized;
class Controls_80 : public Active
{
public:
    Controls_80(int x, int y) : Active(x, y, Controls_80_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Controls", 8);
#endif
        this->animations = &anim_controls_80;
        if (!anim_controls_80_initialized) {
            anim_controls_80_initialized = true;
            images_controls_80_0_0[0] = get_internal_image(1147);
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
FrameObject * create_controls_80(int x, int y)
{
    return new (Active::pool.create()) Controls_80(x, y);
}
static Image* images_difficulty_81_0_0[1];
static Direction direction_difficulty_81_0_0 = {0, 0, 0, 0, 1, images_difficulty_81_0_0, 1};
static Animation anim_difficulty_81_0 = {&direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, NULL, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0, &direction_difficulty_81_0_0};
static Animation * anim_array_difficulty_81[1] = {&anim_difficulty_81_0};
static Animations anim_difficulty_81 = {1, &anim_array_difficulty_81[0]};
static bool anim_difficulty_81_initialized;
class Difficulty_81 : public Active
{
public:
    Difficulty_81(int x, int y) : Active(x, y, Difficulty_81_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Difficulty", 10);
#endif
        this->animations = &anim_difficulty_81;
        if (!anim_difficulty_81_initialized) {
            anim_difficulty_81_initialized = true;
            images_difficulty_81_0_0[0] = get_internal_image(253);
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
FrameObject * create_difficulty_81(int x, int y)
{
    return new (Active::pool.create()) Difficulty_81(x, y);
}
static Image* images_screensize_82_0_0[1];
static Direction direction_screensize_82_0_0 = {0, 0, 0, 0, 1, images_screensize_82_0_0, 1};
static Animation anim_screensize_82_0 = {&direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, NULL, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0, &direction_screensize_82_0_0};
static Animation * anim_array_screensize_82[1] = {&anim_screensize_82_0};
static Animations anim_screensize_82 = {1, &anim_array_screensize_82[0]};
static bool anim_screensize_82_initialized;
class ScreenSize_82 : public Active
{
public:
    ScreenSize_82(int x, int y) : Active(x, y, ScreenSize_82_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Screen size", 11);
#endif
        this->animations = &anim_screensize_82;
        if (!anim_screensize_82_initialized) {
            anim_screensize_82_initialized = true;
            images_screensize_82_0_0[0] = get_internal_image(3241);
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
FrameObject * create_screensize_82(int x, int y)
{
    return new (Active::pool.create()) ScreenSize_82(x, y);
}
static Image* images_musicvolume_83_0_0[1];
static Direction direction_musicvolume_83_0_0 = {0, 0, 0, 0, 1, images_musicvolume_83_0_0, 1};
static Animation anim_musicvolume_83_0 = {&direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, NULL, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0, &direction_musicvolume_83_0_0};
static Animation * anim_array_musicvolume_83[1] = {&anim_musicvolume_83_0};
static Animations anim_musicvolume_83 = {1, &anim_array_musicvolume_83[0]};
static bool anim_musicvolume_83_initialized;
class MusicVolume_83 : public Active
{
public:
    MusicVolume_83(int x, int y) : Active(x, y, MusicVolume_83_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Music Volume", 12);
#endif
        this->animations = &anim_musicvolume_83;
        if (!anim_musicvolume_83_initialized) {
            anim_musicvolume_83_initialized = true;
            images_musicvolume_83_0_0[0] = get_internal_image(1145);
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
FrameObject * create_musicvolume_83(int x, int y)
{
    return new (Active::pool.create()) MusicVolume_83(x, y);
}
static Image* images_difficulty2_84_0_0[1];
static Direction direction_difficulty2_84_0_0 = {0, 50, 50, 0, 1, images_difficulty2_84_0_0, 1};
static Image* images_difficulty2_84_0_1[1];
static Direction direction_difficulty2_84_0_1 = {1, 0, 0, 0, 1, images_difficulty2_84_0_1, 1};
static Image* images_difficulty2_84_0_2[1];
static Direction direction_difficulty2_84_0_2 = {2, 50, 50, 0, 1, images_difficulty2_84_0_2, 1};
static Animation anim_difficulty2_84_0 = {&direction_difficulty2_84_0_0, &direction_difficulty2_84_0_1, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, &direction_difficulty2_84_0_2, NULL, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0, &direction_difficulty2_84_0_0};
static Animation * anim_array_difficulty2_84[1] = {&anim_difficulty2_84_0};
static Animations anim_difficulty2_84 = {1, &anim_array_difficulty2_84[0]};
static bool anim_difficulty2_84_initialized;
class Difficulty2_84 : public Active
{
public:
    Difficulty2_84(int x, int y) : Active(x, y, Difficulty2_84_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Difficulty 2", 12);
#endif
        this->animations = &anim_difficulty2_84;
        if (!anim_difficulty2_84_initialized) {
            anim_difficulty2_84_initialized = true;
            images_difficulty2_84_0_0[0] = get_internal_image(4977);
            images_difficulty2_84_0_1[0] = get_internal_image(185);
            images_difficulty2_84_0_2[0] = get_internal_image(4840);
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
FrameObject * create_difficulty2_84(int x, int y)
{
    return new (Active::pool.create()) Difficulty2_84(x, y);
}
static Image* images_iconkeyboard_85_0_0[1];
static Direction direction_iconkeyboard_85_0_0 = {0, 0, 0, 0, 1, images_iconkeyboard_85_0_0, 1};
static Image* images_iconkeyboard_85_0_1[1];
static Direction direction_iconkeyboard_85_0_1 = {1, 0, 0, 0, 1, images_iconkeyboard_85_0_1, 1};
static Animation anim_iconkeyboard_85_0 = {&direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_1, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0, &direction_iconkeyboard_85_0_0};
static Animation * anim_array_iconkeyboard_85[1] = {&anim_iconkeyboard_85_0};
static Animations anim_iconkeyboard_85 = {1, &anim_array_iconkeyboard_85[0]};
static bool anim_iconkeyboard_85_initialized;
class IconKeyboard_85 : public Active
{
public:
    IconKeyboard_85(int x, int y) : Active(x, y, IconKeyboard_85_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Icon_Keyboard", 13);
#endif
        this->animations = &anim_iconkeyboard_85;
        if (!anim_iconkeyboard_85_initialized) {
            anim_iconkeyboard_85_initialized = true;
            images_iconkeyboard_85_0_0[0] = get_internal_image(2560);
            images_iconkeyboard_85_0_1[0] = get_internal_image(561);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 38);
        alterables->values.set(1, 40);
        alterables->values.set(2, 37);
        alterables->values.set(3, 39);
        alterables->values.set(4, 90);
        alterables->values.set(5, 88);
        alterables->values.set(6, 67);
        alterables->values.set(7, 13);
    }
};
FrameObject * create_iconkeyboard_85(int x, int y)
{
    return new (Active::pool.create()) IconKeyboard_85(x, y);
}
static Image* images_iconjoypad_86_0_0[1];
static Direction direction_iconjoypad_86_0_0 = {0, 0, 0, 0, 1, images_iconjoypad_86_0_0, 1};
static Image* images_iconjoypad_86_0_1[1];
static Direction direction_iconjoypad_86_0_1 = {1, 50, 50, 0, 1, images_iconjoypad_86_0_1, 1};
static Animation anim_iconjoypad_86_0 = {&direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_1, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0, &direction_iconjoypad_86_0_0};
static Animation * anim_array_iconjoypad_86[1] = {&anim_iconjoypad_86_0};
static Animations anim_iconjoypad_86 = {1, &anim_array_iconjoypad_86[0]};
static bool anim_iconjoypad_86_initialized;
class IconJoypad_86 : public Active
{
public:
    IconJoypad_86(int x, int y) : Active(x, y, IconJoypad_86_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Icon_Joypad", 11);
#endif
        this->animations = &anim_iconjoypad_86;
        if (!anim_iconjoypad_86_initialized) {
            anim_iconjoypad_86_initialized = true;
            images_iconjoypad_86_0_0[0] = get_internal_image(8544);
            images_iconjoypad_86_0_1[0] = get_internal_image(8548);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -1);
        alterables->values.set(1, 1);
        alterables->values.set(2, -1);
        alterables->values.set(3, 1);
        alterables->values.set(4, 1);
        alterables->values.set(5, 2);
        alterables->values.set(6, 3);
        alterables->values.set(7, 4);
        alterables->values.set(8, 3);
        alterables->values.set(9, 3);
        alterables->values.set(10, 2);
        alterables->values.set(11, 2);
    }
};
FrameObject * create_iconjoypad_86(int x, int y)
{
    return new (Active::pool.create()) IconJoypad_86(x, y);
}
class LivesSetting_87 : public Counter
{
public:
    LivesSetting_87(int x, int y) : Counter(x, y, LivesSetting_87_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("LivesSetting", 12);
#endif
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
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_livessetting_87(int x, int y)
{
    return new (Counter::pool.create()) LivesSetting_87(x, y);
}
class ScreenRes_88 : public Counter
{
public:
    ScreenRes_88(int x, int y) : Counter(x, y, ScreenRes_88_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("ScreenRes", 9);
#endif
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
        minimum = 1;
        maximum = 9;
        set(1);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_screenres_88(int x, int y)
{
    return new (Counter::pool.create()) ScreenRes_88(x, y);
}
class MusicVolume_89 : public Counter
{
public:
    MusicVolume_89(int x, int y) : Counter(x, y, MusicVolume_89_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("MusicVolume", 11);
#endif
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
        maximum = 100;
        set(100);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_musicvolume_89(int x, int y)
{
    return new (Counter::pool.create()) MusicVolume_89(x, y);
}
class ControllerSensitivity_90 : public Counter
{
public:
    ControllerSensitivity_90(int x, int y) : Counter(x, y, ControllerSensitivity_90_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("ControllerSensitivity", 21);
#endif
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
        maximum = 100;
        set(100);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_controllersensitivity_90(int x, int y)
{
    return new (Counter::pool.create()) ControllerSensitivity_90(x, y);
}
class ButtonName_92 : public TextBlitter
{
public:
    ButtonName_92(int x, int y) : TextBlitter(x, y, ButtonName_92_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ButtonName", 10);
#endif
        width = 132;
        height = 20;
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
FrameObject * create_buttonname_92(int x, int y)
{
    return new (TextBlitter::pool.create()) ButtonName_92(x, y);
}
static Image* images_active_93_0_0[2];
static Direction direction_active_93_0_0 = {0, 0, 0, 0, 1, images_active_93_0_0, 2};
static Animation anim_active_93_0 = {&direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, NULL, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0, &direction_active_93_0_0};
static Animation * anim_array_active_93[1] = {&anim_active_93_0};
static Animations anim_active_93 = {1, &anim_array_active_93[0]};
static bool anim_active_93_initialized;
class Active_93 : public Active
{
public:
    Active_93(int x, int y) : Active(x, y, Active_93_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_93;
        if (!anim_active_93_initialized) {
            anim_active_93_initialized = true;
            images_active_93_0_0[0] = get_internal_image(5439);
            images_active_93_0_0[1] = get_internal_image(8446);
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
FrameObject * create_active_93(int x, int y)
{
    return new (Active::pool.create()) Active_93(x, y);
}
static Image* images_controlnamelist_94_0_0[1];
static Direction direction_controlnamelist_94_0_0 = {0, 50, 50, 0, 1, images_controlnamelist_94_0_0, 1};
static Animation anim_controlnamelist_94_0 = {&direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, NULL, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0, &direction_controlnamelist_94_0_0};
static Animation * anim_array_controlnamelist_94[1] = {&anim_controlnamelist_94_0};
static Animations anim_controlnamelist_94 = {1, &anim_array_controlnamelist_94[0]};
static bool anim_controlnamelist_94_initialized;
class ControlNamelist_94 : public Active
{
public:
    ControlNamelist_94(int x, int y) : Active(x, y, ControlNamelist_94_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Control Namelist", 16);
#endif
        this->animations = &anim_controlnamelist_94;
        if (!anim_controlnamelist_94_initialized) {
            anim_controlnamelist_94_initialized = true;
            images_controlnamelist_94_0_0[0] = get_internal_image(5056);
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
FrameObject * create_controlnamelist_94(int x, int y)
{
    return new (Active::pool.create()) ControlNamelist_94(x, y);
}
static Image* images_warningbox_95_0_0[1];
static Direction direction_warningbox_95_0_0 = {0, 50, 50, 0, 1, images_warningbox_95_0_0, 1};
static Animation anim_warningbox_95_0 = {&direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, NULL, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0, &direction_warningbox_95_0_0};
static Animation * anim_array_warningbox_95[1] = {&anim_warningbox_95_0};
static Animations anim_warningbox_95 = {1, &anim_array_warningbox_95[0]};
static bool anim_warningbox_95_initialized;
class WarningBox_95 : public Active
{
public:
    WarningBox_95(int x, int y) : Active(x, y, WarningBox_95_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WarningBox", 10);
#endif
        set_visible(false);
        this->animations = &anim_warningbox_95;
        if (!anim_warningbox_95_initialized) {
            anim_warningbox_95_initialized = true;
            images_warningbox_95_0_0[0] = get_internal_image(8551);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 191);
        create_alterables();
    }
};
FrameObject * create_warningbox_95(int x, int y)
{
    return new (Active::pool.create()) WarningBox_95(x, y);
}
static Image* images_fileback_96_0_0[2];
static Direction direction_fileback_96_0_0 = {0, 0, 0, 0, 1, images_fileback_96_0_0, 2};
static Animation anim_fileback_96_0 = {&direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, NULL, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0, &direction_fileback_96_0_0};
static Animation * anim_array_fileback_96[1] = {&anim_fileback_96_0};
static Animations anim_fileback_96 = {1, &anim_array_fileback_96[0]};
static bool anim_fileback_96_initialized;
class FileBack_96 : public Active
{
public:
    FileBack_96(int x, int y) : Active(x, y, FileBack_96_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Back", 9);
#endif
        this->animations = &anim_fileback_96;
        if (!anim_fileback_96_initialized) {
            anim_fileback_96_initialized = true;
            images_fileback_96_0_0[0] = get_internal_image(4361);
            images_fileback_96_0_0[1] = get_internal_image(2595);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(8, 480);
    }
};
FrameObject * create_fileback_96(int x, int y)
{
    return new (Active::pool.create()) FileBack_96(x, y);
}
class FileCurrentStage_97 : public Counter
{
public:
    FileCurrentStage_97(int x, int y) : Counter(x, y, FileCurrentStage_97_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("File_CurrentStage", 17);
#endif
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
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(2779);
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
        minimum = 1;
        maximum = 99;
        set(1);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_filecurrentstage_97(int x, int y)
{
    return new (Counter::pool.create()) FileCurrentStage_97(x, y);
}
static Image* images_filestageicon_98_0_0[15];
static Direction direction_filestageicon_98_0_0 = {0, 50, 50, 0, 1, images_filestageicon_98_0_0, 15};
static Animation anim_filestageicon_98_0 = {&direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, NULL, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0, &direction_filestageicon_98_0_0};
static Animation * anim_array_filestageicon_98[1] = {&anim_filestageicon_98_0};
static Animations anim_filestageicon_98 = {1, &anim_array_filestageicon_98[0]};
static bool anim_filestageicon_98_initialized;
class FileStageIcon_98 : public Active
{
public:
    FileStageIcon_98(int x, int y) : Active(x, y, FileStageIcon_98_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("File_StageIcon", 14);
#endif
        this->animations = &anim_filestageicon_98;
        if (!anim_filestageicon_98_initialized) {
            anim_filestageicon_98_initialized = true;
            images_filestageicon_98_0_0[0] = get_internal_image(2567);
            images_filestageicon_98_0_0[1] = get_internal_image(1701);
            images_filestageicon_98_0_0[2] = get_internal_image(4637);
            images_filestageicon_98_0_0[3] = get_internal_image(4662);
            images_filestageicon_98_0_0[4] = get_internal_image(1474);
            images_filestageicon_98_0_0[5] = get_internal_image(7279);
            images_filestageicon_98_0_0[6] = get_internal_image(11751);
            images_filestageicon_98_0_0[7] = get_internal_image(13025);
            images_filestageicon_98_0_0[8] = get_internal_image(665);
            images_filestageicon_98_0_0[9] = get_internal_image(10164);
            images_filestageicon_98_0_0[10] = get_internal_image(5854);
            images_filestageicon_98_0_0[11] = get_internal_image(5856);
            images_filestageicon_98_0_0[12] = get_internal_image(15091);
            images_filestageicon_98_0_0[13] = get_internal_image(6747);
            images_filestageicon_98_0_0[14] = get_internal_image(2283);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 1);
    }
};
FrameObject * create_filestageicon_98(int x, int y)
{
    return new (Active::pool.create()) FileStageIcon_98(x, y);
}
static Image* images_fileicon_99_0_0[1];
static Direction direction_fileicon_99_0_0 = {0, 51, 51, 0, 1, images_fileicon_99_0_0, 1};
static Image* images_fileicon_99_0_1[1];
static Direction direction_fileicon_99_0_1 = {1, 50, 50, 0, 1, images_fileicon_99_0_1, 1};
static Image* images_fileicon_99_0_2[1];
static Direction direction_fileicon_99_0_2 = {2, 50, 50, 0, 1, images_fileicon_99_0_2, 1};
static Image* images_fileicon_99_0_3[1];
static Direction direction_fileicon_99_0_3 = {3, 50, 50, 0, 1, images_fileicon_99_0_3, 1};
static Image* images_fileicon_99_0_4[1];
static Direction direction_fileicon_99_0_4 = {4, 50, 50, 0, 1, images_fileicon_99_0_4, 1};
static Animation anim_fileicon_99_0 = {&direction_fileicon_99_0_0, &direction_fileicon_99_0_1, &direction_fileicon_99_0_2, &direction_fileicon_99_0_3, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, &direction_fileicon_99_0_4, NULL, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0, &direction_fileicon_99_0_0};
static Animation * anim_array_fileicon_99[1] = {&anim_fileicon_99_0};
static Animations anim_fileicon_99 = {1, &anim_array_fileicon_99[0]};
static bool anim_fileicon_99_initialized;
class FileIcon_99 : public Active
{
public:
    FileIcon_99(int x, int y) : Active(x, y, FileIcon_99_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("File_Icon", 9);
#endif
        this->animations = &anim_fileicon_99;
        if (!anim_fileicon_99_initialized) {
            anim_fileicon_99_initialized = true;
            images_fileicon_99_0_0[0] = get_internal_image(311);
            images_fileicon_99_0_1[0] = get_internal_image(488);
            images_fileicon_99_0_2[0] = get_internal_image(395);
            images_fileicon_99_0_3[0] = get_internal_image(395);
            images_fileicon_99_0_4[0] = get_internal_image(506);
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
FrameObject * create_fileicon_99(int x, int y)
{
    return new (Active::pool.create()) FileIcon_99(x, y);
}
class FileLives_100 : public Counter
{
public:
    FileLives_100(int x, int y) : Counter(x, y, FileLives_100_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Lives", 10);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
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
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_filelives_100(int x, int y)
{
    return new (Counter::pool.create()) FileLives_100(x, y);
}
class FileTimeMilli_101 : public Counter
{
public:
    FileTimeMilli_101(int x, int y) : Counter(x, y, FileTimeMilli_101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Time_Milli", 15);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
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
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_filetimemilli_101(int x, int y)
{
    return new (Counter::pool.create()) FileTimeMilli_101(x, y);
}
class FileDeaths_102 : public Counter
{
public:
    FileDeaths_102(int x, int y) : Counter(x, y, FileDeaths_102_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Deaths", 11);
#endif
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
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
    }
};
FrameObject * create_filedeaths_102(int x, int y)
{
    return new (Counter::pool.create()) FileDeaths_102(x, y);
}
class FileCrystals_103 : public Counter
{
public:
    FileCrystals_103(int x, int y) : Counter(x, y, FileCrystals_103_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Crystals", 13);
#endif
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
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999;
        if (global_data_8_file_crystals.init)
            set(global_data_8_file_crystals.value);
        else
            set(0);
    }
    ~FileCrystals_103()
    {
        global_data_8_file_crystals.init = true;
        global_data_8_file_crystals.value = value;
    }
    void dealloc()
    {
        this->FileCrystals_103::~FileCrystals_103();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_filecrystals_103(int x, int y)
{
    return new (Counter::pool.create()) FileCrystals_103(x, y);
}
static Image* images_filelabel_104_0_0[2];
static Direction direction_filelabel_104_0_0 = {0, 0, 0, 0, 1, images_filelabel_104_0_0, 2};
static Animation anim_filelabel_104_0 = {&direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, NULL, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0, &direction_filelabel_104_0_0};
static Animation * anim_array_filelabel_104[1] = {&anim_filelabel_104_0};
static Animations anim_filelabel_104 = {1, &anim_array_filelabel_104[0]};
static bool anim_filelabel_104_initialized;
class FileLabel_104 : public Active
{
public:
    FileLabel_104(int x, int y) : Active(x, y, FileLabel_104_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Label", 10);
#endif
        this->animations = &anim_filelabel_104;
        if (!anim_filelabel_104_initialized) {
            anim_filelabel_104_initialized = true;
            images_filelabel_104_0_0[0] = get_internal_image(6010);
            images_filelabel_104_0_0[1] = get_internal_image(3798);
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
FrameObject * create_filelabel_104(int x, int y)
{
    return new (Active::pool.create()) FileLabel_104(x, y);
}
