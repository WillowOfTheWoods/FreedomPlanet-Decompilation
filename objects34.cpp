#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_gimmickmagnetlauncherlight_3314_0_0[4];
static Direction direction_gimmickmagnetlauncherlight_3314_0_0 = {0, 14, 14, 0, -1, images_gimmickmagnetlauncherlight_3314_0_0, 4};
static Animation anim_gimmickmagnetlauncherlight_3314_0 = {&direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, NULL, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0, &direction_gimmickmagnetlauncherlight_3314_0_0};
static Animation * anim_array_gimmickmagnetlauncherlight_3314[1] = {&anim_gimmickmagnetlauncherlight_3314_0};
static Animations anim_gimmickmagnetlauncherlight_3314 = {1, &anim_array_gimmickmagnetlauncherlight_3314[0]};
static bool anim_gimmickmagnetlauncherlight_3314_initialized;
class GimmickMagnetLauncherLight_3314 : public Active
{
public:
    GimmickMagnetLauncherLight_3314(int x, int y) : Active(x, y, GimmickMagnetLauncherLight_3314_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_MagnetLauncherLight", 27);
#endif
        this->animations = &anim_gimmickmagnetlauncherlight_3314;
        if (!anim_gimmickmagnetlauncherlight_3314_initialized) {
            anim_gimmickmagnetlauncherlight_3314_initialized = true;
            images_gimmickmagnetlauncherlight_3314_0_0[0] = get_internal_image(13763);
            images_gimmickmagnetlauncherlight_3314_0_0[1] = get_internal_image(13764);
            images_gimmickmagnetlauncherlight_3314_0_0[2] = get_internal_image(13757);
            images_gimmickmagnetlauncherlight_3314_0_0[3] = get_internal_image(13764);
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
FrameObject * create_gimmickmagnetlauncherlight_3314(int x, int y)
{
    return new (Active::pool.create()) GimmickMagnetLauncherLight_3314(x, y);
}
static Image* images_effectbrevonmechwarning2_3315_0_0[3];
static Direction direction_effectbrevonmechwarning2_3315_0_0 = {0, 50, 50, 0, -1, images_effectbrevonmechwarning2_3315_0_0, 3};
static Animation anim_effectbrevonmechwarning2_3315_0 = {&direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, NULL, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0, &direction_effectbrevonmechwarning2_3315_0_0};
static Animation * anim_array_effectbrevonmechwarning2_3315[1] = {&anim_effectbrevonmechwarning2_3315_0};
static Animations anim_effectbrevonmechwarning2_3315 = {1, &anim_array_effectbrevonmechwarning2_3315[0]};
static bool anim_effectbrevonmechwarning2_3315_initialized;
class EffectBrevonMechWarning2_3315 : public Active
{
public:
    EffectBrevonMechWarning2_3315(int x, int y) : Active(x, y, EffectBrevonMechWarning2_3315_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_BrevonMechWarning 2", 26);
#endif
        set_visible(false);
        this->animations = &anim_effectbrevonmechwarning2_3315;
        if (!anim_effectbrevonmechwarning2_3315_initialized) {
            anim_effectbrevonmechwarning2_3315_initialized = true;
            images_effectbrevonmechwarning2_3315_0_0[0] = get_internal_image(11988);
            images_effectbrevonmechwarning2_3315_0_0[1] = get_internal_image(11989);
            images_effectbrevonmechwarning2_3315_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectbrevonmechwarning2_3315(int x, int y)
{
    return new (Active::pool.create()) EffectBrevonMechWarning2_3315(x, y);
}
static Image* images_brevonmechweakspot_3316_0_0[4];
static Direction direction_brevonmechweakspot_3316_0_0 = {0, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_0, 4};
static Image* images_brevonmechweakspot_3316_0_1[4];
static Direction direction_brevonmechweakspot_3316_0_1 = {1, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_1, 4};
static Image* images_brevonmechweakspot_3316_0_2[4];
static Direction direction_brevonmechweakspot_3316_0_2 = {2, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_2, 4};
static Image* images_brevonmechweakspot_3316_0_3[4];
static Direction direction_brevonmechweakspot_3316_0_3 = {3, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_3, 4};
static Image* images_brevonmechweakspot_3316_0_16[4];
static Direction direction_brevonmechweakspot_3316_0_16 = {16, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_16, 4};
static Image* images_brevonmechweakspot_3316_0_17[4];
static Direction direction_brevonmechweakspot_3316_0_17 = {17, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_17, 4};
static Image* images_brevonmechweakspot_3316_0_18[4];
static Direction direction_brevonmechweakspot_3316_0_18 = {18, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_18, 4};
static Image* images_brevonmechweakspot_3316_0_19[4];
static Direction direction_brevonmechweakspot_3316_0_19 = {19, 20, 20, 0, -1, images_brevonmechweakspot_3316_0_19, 4};
static Animation anim_brevonmechweakspot_3316_0 = {&direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_1, &direction_brevonmechweakspot_3316_0_2, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_3, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_16, &direction_brevonmechweakspot_3316_0_17, &direction_brevonmechweakspot_3316_0_18, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_19, &direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_0, &direction_brevonmechweakspot_3316_0_0};
static Animation * anim_array_brevonmechweakspot_3316[1] = {&anim_brevonmechweakspot_3316_0};
static Animations anim_brevonmechweakspot_3316 = {1, &anim_array_brevonmechweakspot_3316[0]};
static bool anim_brevonmechweakspot_3316_initialized;
class BrevonMechWeakSpot_3316 : public Active
{
public:
    BrevonMechWeakSpot_3316(int x, int y) : Active(x, y, BrevonMechWeakSpot_3316_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("BrevonMech_WeakSpot", 19);
#endif
        this->animations = &anim_brevonmechweakspot_3316;
        if (!anim_brevonmechweakspot_3316_initialized) {
            anim_brevonmechweakspot_3316_initialized = true;
            images_brevonmechweakspot_3316_0_0[0] = get_internal_image(11677);
            images_brevonmechweakspot_3316_0_0[1] = get_internal_image(13677);
            images_brevonmechweakspot_3316_0_0[2] = get_internal_image(13719);
            images_brevonmechweakspot_3316_0_0[3] = get_internal_image(13677);
            images_brevonmechweakspot_3316_0_1[0] = get_internal_image(13721);
            images_brevonmechweakspot_3316_0_1[1] = get_internal_image(11679);
            images_brevonmechweakspot_3316_0_1[2] = get_internal_image(13722);
            images_brevonmechweakspot_3316_0_1[3] = get_internal_image(11679);
            images_brevonmechweakspot_3316_0_2[0] = get_internal_image(13723);
            images_brevonmechweakspot_3316_0_2[1] = get_internal_image(11678);
            images_brevonmechweakspot_3316_0_2[2] = get_internal_image(13725);
            images_brevonmechweakspot_3316_0_2[3] = get_internal_image(11678);
            images_brevonmechweakspot_3316_0_3[0] = get_internal_image(13724);
            images_brevonmechweakspot_3316_0_3[1] = get_internal_image(13730);
            images_brevonmechweakspot_3316_0_3[2] = get_internal_image(13731);
            images_brevonmechweakspot_3316_0_3[3] = get_internal_image(13730);
            images_brevonmechweakspot_3316_0_16[0] = get_internal_image(13726);
            images_brevonmechweakspot_3316_0_16[1] = get_internal_image(13728);
            images_brevonmechweakspot_3316_0_16[2] = get_internal_image(13732);
            images_brevonmechweakspot_3316_0_16[3] = get_internal_image(13728);
            images_brevonmechweakspot_3316_0_17[0] = get_internal_image(13733);
            images_brevonmechweakspot_3316_0_17[1] = get_internal_image(13734);
            images_brevonmechweakspot_3316_0_17[2] = get_internal_image(13735);
            images_brevonmechweakspot_3316_0_17[3] = get_internal_image(13734);
            images_brevonmechweakspot_3316_0_18[0] = get_internal_image(13736);
            images_brevonmechweakspot_3316_0_18[1] = get_internal_image(13737);
            images_brevonmechweakspot_3316_0_18[2] = get_internal_image(13738);
            images_brevonmechweakspot_3316_0_18[3] = get_internal_image(13737);
            images_brevonmechweakspot_3316_0_19[0] = get_internal_image(13739);
            images_brevonmechweakspot_3316_0_19[1] = get_internal_image(13740);
            images_brevonmechweakspot_3316_0_19[2] = get_internal_image(13741);
            images_brevonmechweakspot_3316_0_19[3] = get_internal_image(13740);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(4, 16);
    }
};
FrameObject * create_brevonmechweakspot_3316(int x, int y)
{
    return new (Active::pool.create()) BrevonMechWeakSpot_3316(x, y);
}
static Image* images_bosshatchdoor_3317_0_0[1];
static Direction direction_bosshatchdoor_3317_0_0 = {0, 50, 50, 0, 1, images_bosshatchdoor_3317_0_0, 1};
static Animation anim_bosshatchdoor_3317_0 = {&direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, NULL, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0, &direction_bosshatchdoor_3317_0_0};
static Animation * anim_array_bosshatchdoor_3317[1] = {&anim_bosshatchdoor_3317_0};
static Animations anim_bosshatchdoor_3317 = {1, &anim_array_bosshatchdoor_3317[0]};
static bool anim_bosshatchdoor_3317_initialized;
class BossHatchDoor_3317 : public Active
{
public:
    BossHatchDoor_3317(int x, int y) : Active(x, y, BossHatchDoor_3317_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Boss_HatchDoor", 14);
#endif
        this->animations = &anim_bosshatchdoor_3317;
        if (!anim_bosshatchdoor_3317_initialized) {
            anim_bosshatchdoor_3317_initialized = true;
            images_bosshatchdoor_3317_0_0[0] = get_internal_image(13604);
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
FrameObject * create_bosshatchdoor_3317(int x, int y)
{
    return new (Active::pool.create()) BossHatchDoor_3317(x, y);
}
static Image* images_bgplatform1_3318_0_0[8];
static Direction direction_bgplatform1_3318_0_0 = {0, 0, 0, 0, -1, images_bgplatform1_3318_0_0, 8};
static Animation anim_bgplatform1_3318_0 = {&direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, NULL, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0, &direction_bgplatform1_3318_0_0};
static Animation * anim_array_bgplatform1_3318[1] = {&anim_bgplatform1_3318_0};
static Animations anim_bgplatform1_3318 = {1, &anim_array_bgplatform1_3318[0]};
static bool anim_bgplatform1_3318_initialized;
class BGPlatform1_3318 : public Active
{
public:
    BGPlatform1_3318(int x, int y) : Active(x, y, BGPlatform1_3318_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("BGPlatform 1", 12);
#endif
        this->animations = &anim_bgplatform1_3318;
        if (!anim_bgplatform1_3318_initialized) {
            anim_bgplatform1_3318_initialized = true;
            images_bgplatform1_3318_0_0[0] = get_internal_image(13826);
            images_bgplatform1_3318_0_0[1] = get_internal_image(13827);
            images_bgplatform1_3318_0_0[2] = get_internal_image(13828);
            images_bgplatform1_3318_0_0[3] = get_internal_image(13829);
            images_bgplatform1_3318_0_0[4] = get_internal_image(13711);
            images_bgplatform1_3318_0_0[5] = get_internal_image(13829);
            images_bgplatform1_3318_0_0[6] = get_internal_image(13828);
            images_bgplatform1_3318_0_0[7] = get_internal_image(13827);
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
FrameObject * create_bgplatform1_3318(int x, int y)
{
    return new (Active::pool.create()) BGPlatform1_3318(x, y);
}
static Image* images_levelcrankferris_3319_0_0[1];
static Direction direction_levelcrankferris_3319_0_0 = {0, 0, 0, 0, 1, images_levelcrankferris_3319_0_0, 1};
static Animation anim_levelcrankferris_3319_0 = {&direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, NULL, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0, &direction_levelcrankferris_3319_0_0};
static Animation * anim_array_levelcrankferris_3319[1] = {&anim_levelcrankferris_3319_0};
static Animations anim_levelcrankferris_3319 = {1, &anim_array_levelcrankferris_3319[0]};
static bool anim_levelcrankferris_3319_initialized;
class LevelCrankFerris_3319 : public Active
{
public:
    LevelCrankFerris_3319(int x, int y) : Active(x, y, LevelCrankFerris_3319_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_CrankFerris", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelcrankferris_3319;
        if (!anim_levelcrankferris_3319_initialized) {
            anim_levelcrankferris_3319_initialized = true;
            images_levelcrankferris_3319_0_0[0] = get_internal_image(13712);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 128);
        alterables->values.set(3, 1);
        alterables->values.set(6, 128);
    }
};
FrameObject * create_levelcrankferris_3319(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerris_3319(x, y);
}
static Image* images_gimmickantigravspawner_3320_0_0[2];
static Direction direction_gimmickantigravspawner_3320_0_0 = {0, 50, 50, 0, -1, images_gimmickantigravspawner_3320_0_0, 2};
static Animation anim_gimmickantigravspawner_3320_0 = {&direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, NULL, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0, &direction_gimmickantigravspawner_3320_0_0};
static Animation * anim_array_gimmickantigravspawner_3320[1] = {&anim_gimmickantigravspawner_3320_0};
static Animations anim_gimmickantigravspawner_3320 = {1, &anim_array_gimmickantigravspawner_3320[0]};
static bool anim_gimmickantigravspawner_3320_initialized;
class GimmickAntigravSpawner_3320 : public Active
{
public:
    GimmickAntigravSpawner_3320(int x, int y) : Active(x, y, GimmickAntigravSpawner_3320_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_AntigravSpawner", 23);
#endif
        this->animations = &anim_gimmickantigravspawner_3320;
        if (!anim_gimmickantigravspawner_3320_initialized) {
            anim_gimmickantigravspawner_3320_initialized = true;
            images_gimmickantigravspawner_3320_0_0[0] = get_internal_image(13747);
            images_gimmickantigravspawner_3320_0_0[1] = get_internal_image(13749);
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
FrameObject * create_gimmickantigravspawner_3320(int x, int y)
{
    return new (Active::pool.create()) GimmickAntigravSpawner_3320(x, y);
}
static Image* images_levelcrankferriscollisionstopper_3321_0_0[1];
static Direction direction_levelcrankferriscollisionstopper_3321_0_0 = {0, 50, 50, 0, 1, images_levelcrankferriscollisionstopper_3321_0_0, 1};
static Animation anim_levelcrankferriscollisionstopper_3321_0 = {&direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, NULL, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0, &direction_levelcrankferriscollisionstopper_3321_0_0};
static Animation * anim_array_levelcrankferriscollisionstopper_3321[1] = {&anim_levelcrankferriscollisionstopper_3321_0};
static Animations anim_levelcrankferriscollisionstopper_3321 = {1, &anim_array_levelcrankferriscollisionstopper_3321[0]};
static bool anim_levelcrankferriscollisionstopper_3321_initialized;
class LevelCrankFerrisCollisionStopper_3321 : public Active
{
public:
    LevelCrankFerrisCollisionStopper_3321(int x, int y) : Active(x, y, LevelCrankFerrisCollisionStopper_3321_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrankFerrisCollisionStopper", 33);
#endif
        set_visible(false);
        this->animations = &anim_levelcrankferriscollisionstopper_3321;
        if (!anim_levelcrankferriscollisionstopper_3321_initialized) {
            anim_levelcrankferriscollisionstopper_3321_initialized = true;
            images_levelcrankferriscollisionstopper_3321_0_0[0] = get_internal_image(13744);
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
FrameObject * create_levelcrankferriscollisionstopper_3321(int x, int y)
{
    return new (Active::pool.create()) LevelCrankFerrisCollisionStopper_3321(x, y);
}
static Image* images_gimmickmagnetlauncher_3322_0_0[2];
static Direction direction_gimmickmagnetlauncher_3322_0_0 = {0, 0, 0, 0, -1, images_gimmickmagnetlauncher_3322_0_0, 2};
static Image* images_gimmickmagnetlauncher_3322_0_1[1];
static Direction direction_gimmickmagnetlauncher_3322_0_1 = {1, 50, 50, 0, 1, images_gimmickmagnetlauncher_3322_0_1, 1};
static Image* images_gimmickmagnetlauncher_3322_0_8[1];
static Direction direction_gimmickmagnetlauncher_3322_0_8 = {8, 50, 50, 0, 1, images_gimmickmagnetlauncher_3322_0_8, 1};
static Image* images_gimmickmagnetlauncher_3322_0_31[1];
static Direction direction_gimmickmagnetlauncher_3322_0_31 = {31, 50, 50, 0, 1, images_gimmickmagnetlauncher_3322_0_31, 1};
static Animation anim_gimmickmagnetlauncher_3322_0 = {&direction_gimmickmagnetlauncher_3322_0_0, &direction_gimmickmagnetlauncher_3322_0_1, &direction_gimmickmagnetlauncher_3322_0_1, &direction_gimmickmagnetlauncher_3322_0_1, &direction_gimmickmagnetlauncher_3322_0_1, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_8, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31, &direction_gimmickmagnetlauncher_3322_0_31};
static Animation * anim_array_gimmickmagnetlauncher_3322[1] = {&anim_gimmickmagnetlauncher_3322_0};
static Animations anim_gimmickmagnetlauncher_3322 = {1, &anim_array_gimmickmagnetlauncher_3322[0]};
static bool anim_gimmickmagnetlauncher_3322_initialized;
class GimmickMagnetLauncher_3322 : public Active
{
public:
    GimmickMagnetLauncher_3322(int x, int y) : Active(x, y, GimmickMagnetLauncher_3322_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_MagnetLauncher", 22);
#endif
        this->animations = &anim_gimmickmagnetlauncher_3322;
        if (!anim_gimmickmagnetlauncher_3322_initialized) {
            anim_gimmickmagnetlauncher_3322_initialized = true;
            images_gimmickmagnetlauncher_3322_0_0[0] = get_internal_image(13761);
            images_gimmickmagnetlauncher_3322_0_0[1] = get_internal_image(13748);
            images_gimmickmagnetlauncher_3322_0_1[0] = get_internal_image(13759);
            images_gimmickmagnetlauncher_3322_0_8[0] = get_internal_image(13756);
            images_gimmickmagnetlauncher_3322_0_31[0] = get_internal_image(13762);
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
FrameObject * create_gimmickmagnetlauncher_3322(int x, int y)
{
    return new (Active::pool.create()) GimmickMagnetLauncher_3322(x, y);
}
static Image* images_gimmickmagnetlauncherleft_3323_0_0[1];
static Direction direction_gimmickmagnetlauncherleft_3323_0_0 = {0, 50, 50, 0, 1, images_gimmickmagnetlauncherleft_3323_0_0, 1};
static Image* images_gimmickmagnetlauncherleft_3323_0_1[1];
static Direction direction_gimmickmagnetlauncherleft_3323_0_1 = {1, 50, 50, 0, 1, images_gimmickmagnetlauncherleft_3323_0_1, 1};
static Image* images_gimmickmagnetlauncherleft_3323_0_8[1];
static Direction direction_gimmickmagnetlauncherleft_3323_0_8 = {8, 50, 50, 0, 1, images_gimmickmagnetlauncherleft_3323_0_8, 1};
static Image* images_gimmickmagnetlauncherleft_3323_0_31[1];
static Direction direction_gimmickmagnetlauncherleft_3323_0_31 = {31, 50, 50, 0, 1, images_gimmickmagnetlauncherleft_3323_0_31, 1};
static Animation anim_gimmickmagnetlauncherleft_3323_0 = {&direction_gimmickmagnetlauncherleft_3323_0_0, &direction_gimmickmagnetlauncherleft_3323_0_1, &direction_gimmickmagnetlauncherleft_3323_0_1, &direction_gimmickmagnetlauncherleft_3323_0_1, &direction_gimmickmagnetlauncherleft_3323_0_1, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_8, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31, &direction_gimmickmagnetlauncherleft_3323_0_31};
static Animation * anim_array_gimmickmagnetlauncherleft_3323[1] = {&anim_gimmickmagnetlauncherleft_3323_0};
static Animations anim_gimmickmagnetlauncherleft_3323 = {1, &anim_array_gimmickmagnetlauncherleft_3323[0]};
static bool anim_gimmickmagnetlauncherleft_3323_initialized;
class GimmickMagnetLauncherLeft_3323 : public Active
{
public:
    GimmickMagnetLauncherLeft_3323(int x, int y) : Active(x, y, GimmickMagnetLauncherLeft_3323_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_MagnetLauncherLeft", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickmagnetlauncherleft_3323;
        if (!anim_gimmickmagnetlauncherleft_3323_initialized) {
            anim_gimmickmagnetlauncherleft_3323_initialized = true;
            images_gimmickmagnetlauncherleft_3323_0_0[0] = get_internal_image(13746);
            images_gimmickmagnetlauncherleft_3323_0_1[0] = get_internal_image(13759);
            images_gimmickmagnetlauncherleft_3323_0_8[0] = get_internal_image(13756);
            images_gimmickmagnetlauncherleft_3323_0_31[0] = get_internal_image(13762);
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
FrameObject * create_gimmickmagnetlauncherleft_3323(int x, int y)
{
    return new (Active::pool.create()) GimmickMagnetLauncherLeft_3323(x, y);
}
static Image* images_gimmickmagnetlauncherright_3324_0_0[1];
static Direction direction_gimmickmagnetlauncherright_3324_0_0 = {0, 50, 50, 0, 1, images_gimmickmagnetlauncherright_3324_0_0, 1};
static Image* images_gimmickmagnetlauncherright_3324_0_1[1];
static Direction direction_gimmickmagnetlauncherright_3324_0_1 = {1, 50, 50, 0, 1, images_gimmickmagnetlauncherright_3324_0_1, 1};
static Image* images_gimmickmagnetlauncherright_3324_0_8[1];
static Direction direction_gimmickmagnetlauncherright_3324_0_8 = {8, 50, 50, 0, 1, images_gimmickmagnetlauncherright_3324_0_8, 1};
static Image* images_gimmickmagnetlauncherright_3324_0_31[1];
static Direction direction_gimmickmagnetlauncherright_3324_0_31 = {31, 50, 50, 0, 1, images_gimmickmagnetlauncherright_3324_0_31, 1};
static Animation anim_gimmickmagnetlauncherright_3324_0 = {&direction_gimmickmagnetlauncherright_3324_0_0, &direction_gimmickmagnetlauncherright_3324_0_1, &direction_gimmickmagnetlauncherright_3324_0_1, &direction_gimmickmagnetlauncherright_3324_0_1, &direction_gimmickmagnetlauncherright_3324_0_1, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_8, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31, &direction_gimmickmagnetlauncherright_3324_0_31};
static Animation * anim_array_gimmickmagnetlauncherright_3324[1] = {&anim_gimmickmagnetlauncherright_3324_0};
static Animations anim_gimmickmagnetlauncherright_3324 = {1, &anim_array_gimmickmagnetlauncherright_3324[0]};
static bool anim_gimmickmagnetlauncherright_3324_initialized;
class GimmickMagnetLauncherRight_3324 : public Active
{
public:
    GimmickMagnetLauncherRight_3324(int x, int y) : Active(x, y, GimmickMagnetLauncherRight_3324_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_MagnetLauncherRight", 27);
#endif
        set_visible(false);
        this->animations = &anim_gimmickmagnetlauncherright_3324;
        if (!anim_gimmickmagnetlauncherright_3324_initialized) {
            anim_gimmickmagnetlauncherright_3324_initialized = true;
            images_gimmickmagnetlauncherright_3324_0_0[0] = get_internal_image(13684);
            images_gimmickmagnetlauncherright_3324_0_1[0] = get_internal_image(13759);
            images_gimmickmagnetlauncherright_3324_0_8[0] = get_internal_image(13756);
            images_gimmickmagnetlauncherright_3324_0_31[0] = get_internal_image(13762);
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
FrameObject * create_gimmickmagnetlauncherright_3324(int x, int y)
{
    return new (Active::pool.create()) GimmickMagnetLauncherRight_3324(x, y);
}
static Image* images_brevonmechcharge_3325_0_0[8];
static Direction direction_brevonmechcharge_3325_0_0 = {0, 100, 100, 0, -1, images_brevonmechcharge_3325_0_0, 8};
static Animation anim_brevonmechcharge_3325_0 = {&direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, NULL, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0, &direction_brevonmechcharge_3325_0_0};
static Animation * anim_array_brevonmechcharge_3325[1] = {&anim_brevonmechcharge_3325_0};
static Animations anim_brevonmechcharge_3325 = {1, &anim_array_brevonmechcharge_3325[0]};
static bool anim_brevonmechcharge_3325_initialized;
class BrevonMechCharge_3325 : public Active
{
public:
    BrevonMechCharge_3325(int x, int y) : Active(x, y, BrevonMechCharge_3325_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Charge", 17);
#endif
        this->animations = &anim_brevonmechcharge_3325;
        if (!anim_brevonmechcharge_3325_initialized) {
            anim_brevonmechcharge_3325_initialized = true;
            images_brevonmechcharge_3325_0_0[0] = get_internal_image(13640);
            images_brevonmechcharge_3325_0_0[1] = get_internal_image(13641);
            images_brevonmechcharge_3325_0_0[2] = get_internal_image(13642);
            images_brevonmechcharge_3325_0_0[3] = get_internal_image(13643);
            images_brevonmechcharge_3325_0_0[4] = get_internal_image(13647);
            images_brevonmechcharge_3325_0_0[5] = get_internal_image(13663);
            images_brevonmechcharge_3325_0_0[6] = get_internal_image(13664);
            images_brevonmechcharge_3325_0_0[7] = get_internal_image(13668);
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
FrameObject * create_brevonmechcharge_3325(int x, int y)
{
    return new (Active::pool.create()) BrevonMechCharge_3325(x, y);
}
static Image* images_hazardspinmine_3326_0_0[8];
static Direction direction_hazardspinmine_3326_0_0 = {0, 0, 0, 0, -1, images_hazardspinmine_3326_0_0, 8};
static Animation anim_hazardspinmine_3326_0 = {&direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, NULL, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0, &direction_hazardspinmine_3326_0_0};
static Animation * anim_array_hazardspinmine_3326[1] = {&anim_hazardspinmine_3326_0};
static Animations anim_hazardspinmine_3326 = {1, &anim_array_hazardspinmine_3326[0]};
static bool anim_hazardspinmine_3326_initialized;
class HazardSpinMine_3326 : public Active
{
public:
    HazardSpinMine_3326(int x, int y) : Active(x, y, HazardSpinMine_3326_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Hazard_SpinMine", 15);
#endif
        this->animations = &anim_hazardspinmine_3326;
        if (!anim_hazardspinmine_3326_initialized) {
            anim_hazardspinmine_3326_initialized = true;
            images_hazardspinmine_3326_0_0[0] = get_internal_image(5395);
            images_hazardspinmine_3326_0_0[1] = get_internal_image(5848);
            images_hazardspinmine_3326_0_0[2] = get_internal_image(5849);
            images_hazardspinmine_3326_0_0[3] = get_internal_image(5850);
            images_hazardspinmine_3326_0_0[4] = get_internal_image(5851);
            images_hazardspinmine_3326_0_0[5] = get_internal_image(5850);
            images_hazardspinmine_3326_0_0[6] = get_internal_image(5849);
            images_hazardspinmine_3326_0_0[7] = get_internal_image(5848);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(5, 64);
    }
};
FrameObject * create_hazardspinmine_3326(int x, int y)
{
    return new (Active::pool.create()) HazardSpinMine_3326(x, y);
}
static Image* images_bosssparky_3327_0_0[1];
static Direction direction_bosssparky_3327_0_0 = {0, 50, 50, 0, 1, images_bosssparky_3327_0_0, 1};
static Animation anim_bosssparky_3327_0 = {&direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, NULL, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0, &direction_bosssparky_3327_0_0};
static Image* images_bosssparky_3327_7_0[2];
static Direction direction_bosssparky_3327_7_0 = {0, 50, 50, 0, -1, images_bosssparky_3327_7_0, 2};
static Image* images_bosssparky_3327_7_8[1];
static Direction direction_bosssparky_3327_7_8 = {8, 50, 50, 0, 1, images_bosssparky_3327_7_8, 1};
static Animation anim_bosssparky_3327_7 = {&direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, NULL, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, &direction_bosssparky_3327_7_8, NULL, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0, &direction_bosssparky_3327_7_0};
static Image* images_bosssparky_3327_8_0[2];
static Direction direction_bosssparky_3327_8_0 = {0, 50, 50, 0, -1, images_bosssparky_3327_8_0, 2};
static Animation anim_bosssparky_3327_8 = {&direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, NULL, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0, &direction_bosssparky_3327_8_0};
static Image* images_bosssparky_3327_11_0[4];
static Direction direction_bosssparky_3327_11_0 = {0, 50, 50, 0, -1, images_bosssparky_3327_11_0, 4};
static Image* images_bosssparky_3327_11_8[5];
static Direction direction_bosssparky_3327_11_8 = {8, 20, 20, 4, -1, images_bosssparky_3327_11_8, 5};
static Animation anim_bosssparky_3327_11 = {&direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, NULL, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, &direction_bosssparky_3327_11_8, NULL, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0, &direction_bosssparky_3327_11_0};
static Animation * anim_array_bosssparky_3327[12] = {&anim_bosssparky_3327_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssparky_3327_7, &anim_bosssparky_3327_8, NULL, NULL, &anim_bosssparky_3327_11};
static Animations anim_bosssparky_3327 = {12, &anim_array_bosssparky_3327[0]};
static bool anim_bosssparky_3327_initialized;
class BossSparky_3327 : public Active
{
public:
    BossSparky_3327(int x, int y) : Active(x, y, BossSparky_3327_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Sparky", 11);
#endif
        this->animations = &anim_bosssparky_3327;
        if (!anim_bosssparky_3327_initialized) {
            anim_bosssparky_3327_initialized = true;
            images_bosssparky_3327_0_0[0] = get_internal_image(13750);
            images_bosssparky_3327_7_0[0] = get_internal_image(13751);
            images_bosssparky_3327_7_0[1] = get_internal_image(13752);
            images_bosssparky_3327_7_8[0] = get_internal_image(13753);
            images_bosssparky_3327_8_0[0] = get_internal_image(13754);
            images_bosssparky_3327_8_0[1] = get_internal_image(13755);
            images_bosssparky_3327_11_0[0] = get_internal_image(14060);
            images_bosssparky_3327_11_0[1] = get_internal_image(14061);
            images_bosssparky_3327_11_0[2] = get_internal_image(14062);
            images_bosssparky_3327_11_0[3] = get_internal_image(14060);
            images_bosssparky_3327_11_8[0] = get_internal_image(14063);
            images_bosssparky_3327_11_8[1] = get_internal_image(14064);
            images_bosssparky_3327_11_8[2] = get_internal_image(14065);
            images_bosssparky_3327_11_8[3] = get_internal_image(14066);
            images_bosssparky_3327_11_8[4] = get_internal_image(14067);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 100);
        alterables->values.set(6, 30);
        alterables->values.set(9, 5);
        alterables->values.set(10, 60);
    }
};
FrameObject * create_bosssparky_3327(int x, int y)
{
    return new (Active::pool.create()) BossSparky_3327(x, y);
}
static Image* images_bosssparkyleftarm_3328_0_0[1];
static Direction direction_bosssparkyleftarm_3328_0_0 = {0, 50, 50, 0, 1, images_bosssparkyleftarm_3328_0_0, 1};
static Animation anim_bosssparkyleftarm_3328_0 = {&direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, NULL, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0, &direction_bosssparkyleftarm_3328_0_0};
static Image* images_bosssparkyleftarm_3328_7_0[1];
static Direction direction_bosssparkyleftarm_3328_7_0 = {0, 50, 50, 0, 3, images_bosssparkyleftarm_3328_7_0, 1};
static Animation anim_bosssparkyleftarm_3328_7 = {&direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, NULL, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0, &direction_bosssparkyleftarm_3328_7_0};
static Animation * anim_array_bosssparkyleftarm_3328[8] = {&anim_bosssparkyleftarm_3328_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssparkyleftarm_3328_7};
static Animations anim_bosssparkyleftarm_3328 = {8, &anim_array_bosssparkyleftarm_3328[0]};
static bool anim_bosssparkyleftarm_3328_initialized;
class BossSparkyLeftArm_3328 : public Active
{
public:
    BossSparkyLeftArm_3328(int x, int y) : Active(x, y, BossSparkyLeftArm_3328_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SparkyLeftArm", 18);
#endif
        this->animations = &anim_bosssparkyleftarm_3328;
        if (!anim_bosssparkyleftarm_3328_initialized) {
            anim_bosssparkyleftarm_3328_initialized = true;
            images_bosssparkyleftarm_3328_0_0[0] = get_internal_image(13758);
            images_bosssparkyleftarm_3328_7_0[0] = get_internal_image(13760);
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
FrameObject * create_bosssparkyleftarm_3328(int x, int y)
{
    return new (Active::pool.create()) BossSparkyLeftArm_3328(x, y);
}
static Image* images_bosssparkyrightarm_3329_0_0[1];
static Direction direction_bosssparkyrightarm_3329_0_0 = {0, 50, 50, 0, 1, images_bosssparkyrightarm_3329_0_0, 1};
static Animation anim_bosssparkyrightarm_3329_0 = {&direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, NULL, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0, &direction_bosssparkyrightarm_3329_0_0};
static Image* images_bosssparkyrightarm_3329_7_0[1];
static Direction direction_bosssparkyrightarm_3329_7_0 = {0, 50, 50, 0, 3, images_bosssparkyrightarm_3329_7_0, 1};
static Animation anim_bosssparkyrightarm_3329_7 = {&direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, NULL, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0, &direction_bosssparkyrightarm_3329_7_0};
static Animation * anim_array_bosssparkyrightarm_3329[8] = {&anim_bosssparkyrightarm_3329_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssparkyrightarm_3329_7};
static Animations anim_bosssparkyrightarm_3329 = {8, &anim_array_bosssparkyrightarm_3329[0]};
static bool anim_bosssparkyrightarm_3329_initialized;
class BossSparkyRightArm_3329 : public Active
{
public:
    BossSparkyRightArm_3329(int x, int y) : Active(x, y, BossSparkyRightArm_3329_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SparkyRightArm", 19);
#endif
        this->animations = &anim_bosssparkyrightarm_3329;
        if (!anim_bosssparkyrightarm_3329_initialized) {
            anim_bosssparkyrightarm_3329_initialized = true;
            images_bosssparkyrightarm_3329_0_0[0] = get_internal_image(13765);
            images_bosssparkyrightarm_3329_7_0[0] = get_internal_image(13766);
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
FrameObject * create_bosssparkyrightarm_3329(int x, int y)
{
    return new (Active::pool.create()) BossSparkyRightArm_3329(x, y);
}
static Image* images_bgloop1_3330_0_0[1];
static Direction direction_bgloop1_3330_0_0 = {0, 50, 50, 0, 1, images_bgloop1_3330_0_0, 1};
static Animation anim_bgloop1_3330_0 = {&direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, NULL, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0, &direction_bgloop1_3330_0_0};
static Animation * anim_array_bgloop1_3330[1] = {&anim_bgloop1_3330_0};
static Animations anim_bgloop1_3330 = {1, &anim_array_bgloop1_3330[0]};
static bool anim_bgloop1_3330_initialized;
class BGLoop1_3330 : public Active
{
public:
    BGLoop1_3330(int x, int y) : Active(x, y, BGLoop1_3330_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("BG_Loop 1", 9);
#endif
        this->animations = &anim_bgloop1_3330;
        if (!anim_bgloop1_3330_initialized) {
            anim_bgloop1_3330_initialized = true;
            images_bgloop1_3330_0_0[0] = get_internal_image(13777);
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
FrameObject * create_bgloop1_3330(int x, int y)
{
    return new (Active::pool.create()) BGLoop1_3330(x, y);
}
static Image* images_bgloop2_3331_0_0[1];
static Direction direction_bgloop2_3331_0_0 = {0, 50, 50, 0, 1, images_bgloop2_3331_0_0, 1};
static Animation anim_bgloop2_3331_0 = {&direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, NULL, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0, &direction_bgloop2_3331_0_0};
static Animation * anim_array_bgloop2_3331[1] = {&anim_bgloop2_3331_0};
static Animations anim_bgloop2_3331 = {1, &anim_array_bgloop2_3331[0]};
static bool anim_bgloop2_3331_initialized;
class BGLoop2_3331 : public Active
{
public:
    BGLoop2_3331(int x, int y) : Active(x, y, BGLoop2_3331_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("BG_Loop 2", 9);
#endif
        this->animations = &anim_bgloop2_3331;
        if (!anim_bgloop2_3331_initialized) {
            anim_bgloop2_3331_initialized = true;
            images_bgloop2_3331_0_0[0] = get_internal_image(13855);
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
FrameObject * create_bgloop2_3331(int x, int y)
{
    return new (Active::pool.create()) BGLoop2_3331(x, y);
}
static Image* images_bgloop3_3332_0_0[1];
static Direction direction_bgloop3_3332_0_0 = {0, 50, 50, 0, 1, images_bgloop3_3332_0_0, 1};
static Animation anim_bgloop3_3332_0 = {&direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, NULL, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0, &direction_bgloop3_3332_0_0};
static Animation * anim_array_bgloop3_3332[1] = {&anim_bgloop3_3332_0};
static Animations anim_bgloop3_3332 = {1, &anim_array_bgloop3_3332[0]};
static bool anim_bgloop3_3332_initialized;
class BGLoop3_3332 : public Active
{
public:
    BGLoop3_3332(int x, int y) : Active(x, y, BGLoop3_3332_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("BG_Loop 3", 9);
#endif
        this->animations = &anim_bgloop3_3332;
        if (!anim_bgloop3_3332_initialized) {
            anim_bgloop3_3332_initialized = true;
            images_bgloop3_3332_0_0[0] = get_internal_image(13856);
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
FrameObject * create_bgloop3_3332(int x, int y)
{
    return new (Active::pool.create()) BGLoop3_3332(x, y);
}
static Image* images_brevonmechturret_3333_0_0[1];
static Direction direction_brevonmechturret_3333_0_0 = {0, 50, 50, 0, 1, images_brevonmechturret_3333_0_0, 1};
static Animation anim_brevonmechturret_3333_0 = {&direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, NULL, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0, &direction_brevonmechturret_3333_0_0};
static Animation * anim_array_brevonmechturret_3333[1] = {&anim_brevonmechturret_3333_0};
static Animations anim_brevonmechturret_3333 = {1, &anim_array_brevonmechturret_3333[0]};
static bool anim_brevonmechturret_3333_initialized;
class BrevonMechTurret_3333 : public Active
{
public:
    BrevonMechTurret_3333(int x, int y) : Active(x, y, BrevonMechTurret_3333_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BrevonMech_Turret", 17);
#endif
        this->animations = &anim_brevonmechturret_3333;
        if (!anim_brevonmechturret_3333_initialized) {
            anim_brevonmechturret_3333_initialized = true;
            images_brevonmechturret_3333_0_0[0] = get_internal_image(14594);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 225);
    }
};
FrameObject * create_brevonmechturret_3333(int x, int y)
{
    return new (Active::pool.create()) BrevonMechTurret_3333(x, y);
}
class LevelBrevonShipClose_3334 : public SystemBox
{
public:
    LevelBrevonShipClose_3334(int x, int y) : SystemBox(x, y, LevelBrevonShipClose_3334_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BrevonShipClose", 21);
#endif
        flags |= BACKGROUND;
        width = 305;
        height = 657;
        type = PATTERN_IMAGE;
        image = get_internal_image(11472);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelbrevonshipclose_3334(int x, int y)
{
    return new (SystemBox::pool.create()) LevelBrevonShipClose_3334(x, y);
}
class LevelBrevonShipClose2_3335 : public SystemBox
{
public:
    LevelBrevonShipClose2_3335(int x, int y) : SystemBox(x, y, LevelBrevonShipClose2_3335_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BrevonShipClose 2", 23);
#endif
        flags |= BACKGROUND;
        width = 305;
        height = 657;
        type = PATTERN_IMAGE;
        image = get_internal_image(11473);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelbrevonshipclose2_3335(int x, int y)
{
    return new (SystemBox::pool.create()) LevelBrevonShipClose2_3335(x, y);
}
static Image* images_enemyelitespawnerwave_3336_0_0[1];
static Direction direction_enemyelitespawnerwave_3336_0_0 = {0, 50, 50, 0, 1, images_enemyelitespawnerwave_3336_0_0, 1};
static Animation anim_enemyelitespawnerwave_3336_0 = {&direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, NULL, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0, &direction_enemyelitespawnerwave_3336_0_0};
static Animation * anim_array_enemyelitespawnerwave_3336[1] = {&anim_enemyelitespawnerwave_3336_0};
static Animations anim_enemyelitespawnerwave_3336 = {1, &anim_array_enemyelitespawnerwave_3336[0]};
static bool anim_enemyelitespawnerwave_3336_initialized;
class EnemyEliteSpawnerWave_3336 : public Active
{
public:
    EnemyEliteSpawnerWave_3336(int x, int y) : Active(x, y, EnemyEliteSpawnerWave_3336_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_EliteSpawnerWave", 22);
#endif
        this->animations = &anim_enemyelitespawnerwave_3336;
        if (!anim_enemyelitespawnerwave_3336_initialized) {
            anim_enemyelitespawnerwave_3336_initialized = true;
            images_enemyelitespawnerwave_3336_0_0[0] = get_internal_image(13899);
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
FrameObject * create_enemyelitespawnerwave_3336(int x, int y)
{
    return new (Active::pool.create()) EnemyEliteSpawnerWave_3336(x, y);
}
static Image* images_objectsiren_3337_0_0[4];
static Direction direction_objectsiren_3337_0_0 = {0, 25, 25, 0, -1, images_objectsiren_3337_0_0, 4};
static Animation anim_objectsiren_3337_0 = {&direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, NULL, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0, &direction_objectsiren_3337_0_0};
static Animation * anim_array_objectsiren_3337[1] = {&anim_objectsiren_3337_0};
static Animations anim_objectsiren_3337 = {1, &anim_array_objectsiren_3337[0]};
static bool anim_objectsiren_3337_initialized;
class ObjectSiren_3337 : public Active
{
public:
    ObjectSiren_3337(int x, int y) : Active(x, y, ObjectSiren_3337_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Siren", 12);
#endif
        this->animations = &anim_objectsiren_3337;
        if (!anim_objectsiren_3337_initialized) {
            anim_objectsiren_3337_initialized = true;
            images_objectsiren_3337_0_0[0] = get_internal_image(13890);
            images_objectsiren_3337_0_0[1] = get_internal_image(13893);
            images_objectsiren_3337_0_0[2] = get_internal_image(13894);
            images_objectsiren_3337_0_0[3] = get_internal_image(13895);
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
FrameObject * create_objectsiren_3337(int x, int y)
{
    return new (Active::pool.create()) ObjectSiren_3337(x, y);
}
static Image* images_gimmickteleswitch_3338_0_0[8];
static Direction direction_gimmickteleswitch_3338_0_0 = {0, 25, 25, 0, -1, images_gimmickteleswitch_3338_0_0, 8};
static Image* images_gimmickteleswitch_3338_0_1[8];
static Direction direction_gimmickteleswitch_3338_0_1 = {1, 25, 25, 0, -1, images_gimmickteleswitch_3338_0_1, 8};
static Image* images_gimmickteleswitch_3338_0_8[12];
static Direction direction_gimmickteleswitch_3338_0_8 = {8, 25, 25, 0, -1, images_gimmickteleswitch_3338_0_8, 12};
static Image* images_gimmickteleswitch_3338_0_16[12];
static Direction direction_gimmickteleswitch_3338_0_16 = {16, 25, 25, 0, -1, images_gimmickteleswitch_3338_0_16, 12};
static Animation anim_gimmickteleswitch_3338_0 = {&direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_1, &direction_gimmickteleswitch_3338_0_1, &direction_gimmickteleswitch_3338_0_1, &direction_gimmickteleswitch_3338_0_1, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, &direction_gimmickteleswitch_3338_0_8, NULL, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, &direction_gimmickteleswitch_3338_0_16, NULL, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0, &direction_gimmickteleswitch_3338_0_0};
static Animation * anim_array_gimmickteleswitch_3338[1] = {&anim_gimmickteleswitch_3338_0};
static Animations anim_gimmickteleswitch_3338 = {1, &anim_array_gimmickteleswitch_3338[0]};
static bool anim_gimmickteleswitch_3338_initialized;
class GimmickTeleSwitch_3338 : public Active
{
public:
    GimmickTeleSwitch_3338(int x, int y) : Active(x, y, GimmickTeleSwitch_3338_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_TeleSwitch", 18);
#endif
        this->animations = &anim_gimmickteleswitch_3338;
        if (!anim_gimmickteleswitch_3338_initialized) {
            anim_gimmickteleswitch_3338_initialized = true;
            images_gimmickteleswitch_3338_0_0[0] = get_internal_image(13877);
            images_gimmickteleswitch_3338_0_0[1] = get_internal_image(13876);
            images_gimmickteleswitch_3338_0_0[2] = get_internal_image(13878);
            images_gimmickteleswitch_3338_0_0[3] = get_internal_image(13879);
            images_gimmickteleswitch_3338_0_0[4] = get_internal_image(13880);
            images_gimmickteleswitch_3338_0_0[5] = get_internal_image(13860);
            images_gimmickteleswitch_3338_0_0[6] = get_internal_image(13881);
            images_gimmickteleswitch_3338_0_0[7] = get_internal_image(13882);
            images_gimmickteleswitch_3338_0_1[0] = get_internal_image(13886);
            images_gimmickteleswitch_3338_0_1[1] = get_internal_image(13891);
            images_gimmickteleswitch_3338_0_1[2] = get_internal_image(13883);
            images_gimmickteleswitch_3338_0_1[3] = get_internal_image(13885);
            images_gimmickteleswitch_3338_0_1[4] = get_internal_image(13887);
            images_gimmickteleswitch_3338_0_1[5] = get_internal_image(13884);
            images_gimmickteleswitch_3338_0_1[6] = get_internal_image(13889);
            images_gimmickteleswitch_3338_0_1[7] = get_internal_image(13888);
            images_gimmickteleswitch_3338_0_8[0] = get_internal_image(4648);
            images_gimmickteleswitch_3338_0_8[1] = get_internal_image(13518);
            images_gimmickteleswitch_3338_0_8[2] = get_internal_image(5377);
            images_gimmickteleswitch_3338_0_8[3] = get_internal_image(13524);
            images_gimmickteleswitch_3338_0_8[4] = get_internal_image(13522);
            images_gimmickteleswitch_3338_0_8[5] = get_internal_image(13526);
            images_gimmickteleswitch_3338_0_8[6] = get_internal_image(13528);
            images_gimmickteleswitch_3338_0_8[7] = get_internal_image(13527);
            images_gimmickteleswitch_3338_0_8[8] = get_internal_image(13529);
            images_gimmickteleswitch_3338_0_8[9] = get_internal_image(13530);
            images_gimmickteleswitch_3338_0_8[10] = get_internal_image(13531);
            images_gimmickteleswitch_3338_0_8[11] = get_internal_image(13532);
            images_gimmickteleswitch_3338_0_16[0] = get_internal_image(13534);
            images_gimmickteleswitch_3338_0_16[1] = get_internal_image(13535);
            images_gimmickteleswitch_3338_0_16[2] = get_internal_image(13536);
            images_gimmickteleswitch_3338_0_16[3] = get_internal_image(13538);
            images_gimmickteleswitch_3338_0_16[4] = get_internal_image(13537);
            images_gimmickteleswitch_3338_0_16[5] = get_internal_image(13539);
            images_gimmickteleswitch_3338_0_16[6] = get_internal_image(13540);
            images_gimmickteleswitch_3338_0_16[7] = get_internal_image(13541);
            images_gimmickteleswitch_3338_0_16[8] = get_internal_image(13542);
            images_gimmickteleswitch_3338_0_16[9] = get_internal_image(13775);
            images_gimmickteleswitch_3338_0_16[10] = get_internal_image(13820);
            images_gimmickteleswitch_3338_0_16[11] = get_internal_image(13819);
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
FrameObject * create_gimmickteleswitch_3338(int x, int y)
{
    return new (Active::pool.create()) GimmickTeleSwitch_3338(x, y);
}
static Image* images_objectswitchblock1_3339_0_0[12];
static Direction direction_objectswitchblock1_3339_0_0 = {0, 25, 25, 0, -1, images_objectswitchblock1_3339_0_0, 12};
static Image* images_objectswitchblock1_3339_0_1[1];
static Direction direction_objectswitchblock1_3339_0_1 = {1, 50, 50, 0, 1, images_objectswitchblock1_3339_0_1, 1};
static Animation anim_objectswitchblock1_3339_0 = {&direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_1, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0, &direction_objectswitchblock1_3339_0_0};
static Animation * anim_array_objectswitchblock1_3339[1] = {&anim_objectswitchblock1_3339_0};
static Animations anim_objectswitchblock1_3339 = {1, &anim_array_objectswitchblock1_3339[0]};
static bool anim_objectswitchblock1_3339_initialized;
class ObjectSwitchBlock1_3339 : public Active
{
public:
    ObjectSwitchBlock1_3339(int x, int y) : Active(x, y, ObjectSwitchBlock1_3339_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_SwitchBlock 1", 20);
#endif
        this->animations = &anim_objectswitchblock1_3339;
        if (!anim_objectswitchblock1_3339_initialized) {
            anim_objectswitchblock1_3339_initialized = true;
            images_objectswitchblock1_3339_0_0[0] = get_internal_image(13838);
            images_objectswitchblock1_3339_0_0[1] = get_internal_image(13839);
            images_objectswitchblock1_3339_0_0[2] = get_internal_image(13840);
            images_objectswitchblock1_3339_0_0[3] = get_internal_image(13841);
            images_objectswitchblock1_3339_0_0[4] = get_internal_image(13842);
            images_objectswitchblock1_3339_0_0[5] = get_internal_image(13843);
            images_objectswitchblock1_3339_0_0[6] = get_internal_image(13844);
            images_objectswitchblock1_3339_0_0[7] = get_internal_image(13845);
            images_objectswitchblock1_3339_0_0[8] = get_internal_image(13846);
            images_objectswitchblock1_3339_0_0[9] = get_internal_image(13847);
            images_objectswitchblock1_3339_0_0[10] = get_internal_image(13848);
            images_objectswitchblock1_3339_0_0[11] = get_internal_image(13849);
            images_objectswitchblock1_3339_0_1[0] = get_internal_image(4645);
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
FrameObject * create_objectswitchblock1_3339(int x, int y)
{
    return new (Active::pool.create()) ObjectSwitchBlock1_3339(x, y);
}
static Image* images_objectswitchblock2_3340_0_0[12];
static Direction direction_objectswitchblock2_3340_0_0 = {0, 25, 25, 0, -1, images_objectswitchblock2_3340_0_0, 12};
static Image* images_objectswitchblock2_3340_0_1[1];
static Direction direction_objectswitchblock2_3340_0_1 = {1, 50, 50, 0, 1, images_objectswitchblock2_3340_0_1, 1};
static Animation anim_objectswitchblock2_3340_0 = {&direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_1, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0, &direction_objectswitchblock2_3340_0_0};
static Animation * anim_array_objectswitchblock2_3340[1] = {&anim_objectswitchblock2_3340_0};
static Animations anim_objectswitchblock2_3340 = {1, &anim_array_objectswitchblock2_3340[0]};
static bool anim_objectswitchblock2_3340_initialized;
class ObjectSwitchBlock2_3340 : public Active
{
public:
    ObjectSwitchBlock2_3340(int x, int y) : Active(x, y, ObjectSwitchBlock2_3340_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_SwitchBlock 2", 20);
#endif
        this->animations = &anim_objectswitchblock2_3340;
        if (!anim_objectswitchblock2_3340_initialized) {
            anim_objectswitchblock2_3340_initialized = true;
            images_objectswitchblock2_3340_0_0[0] = get_internal_image(13863);
            images_objectswitchblock2_3340_0_0[1] = get_internal_image(13864);
            images_objectswitchblock2_3340_0_0[2] = get_internal_image(13865);
            images_objectswitchblock2_3340_0_0[3] = get_internal_image(13866);
            images_objectswitchblock2_3340_0_0[4] = get_internal_image(13867);
            images_objectswitchblock2_3340_0_0[5] = get_internal_image(13868);
            images_objectswitchblock2_3340_0_0[6] = get_internal_image(13869);
            images_objectswitchblock2_3340_0_0[7] = get_internal_image(13870);
            images_objectswitchblock2_3340_0_0[8] = get_internal_image(13871);
            images_objectswitchblock2_3340_0_0[9] = get_internal_image(13872);
            images_objectswitchblock2_3340_0_0[10] = get_internal_image(13873);
            images_objectswitchblock2_3340_0_0[11] = get_internal_image(13874);
            images_objectswitchblock2_3340_0_1[0] = get_internal_image(4647);
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
FrameObject * create_objectswitchblock2_3340(int x, int y)
{
    return new (Active::pool.create()) ObjectSwitchBlock2_3340(x, y);
}
static Image* images_gimmickteleswitchcrystal1_3341_0_0[1];
static Direction direction_gimmickteleswitchcrystal1_3341_0_0 = {0, 50, 50, 0, 1, images_gimmickteleswitchcrystal1_3341_0_0, 1};
static Image* images_gimmickteleswitchcrystal1_3341_0_1[1];
static Direction direction_gimmickteleswitchcrystal1_3341_0_1 = {1, 50, 50, 0, 1, images_gimmickteleswitchcrystal1_3341_0_1, 1};
static Animation anim_gimmickteleswitchcrystal1_3341_0 = {&direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_1, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0, &direction_gimmickteleswitchcrystal1_3341_0_0};
static Animation * anim_array_gimmickteleswitchcrystal1_3341[1] = {&anim_gimmickteleswitchcrystal1_3341_0};
static Animations anim_gimmickteleswitchcrystal1_3341 = {1, &anim_array_gimmickteleswitchcrystal1_3341[0]};
static bool anim_gimmickteleswitchcrystal1_3341_initialized;
class GimmickTeleSwitchCrystal1_3341 : public Active
{
public:
    GimmickTeleSwitchCrystal1_3341(int x, int y) : Active(x, y, GimmickTeleSwitchCrystal1_3341_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_TeleSwitchCrystal 1", 27);
#endif
        this->animations = &anim_gimmickteleswitchcrystal1_3341;
        if (!anim_gimmickteleswitchcrystal1_3341_initialized) {
            anim_gimmickteleswitchcrystal1_3341_initialized = true;
            images_gimmickteleswitchcrystal1_3341_0_0[0] = get_internal_image(13832);
            images_gimmickteleswitchcrystal1_3341_0_1[0] = get_internal_image(13834);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
    }
};
FrameObject * create_gimmickteleswitchcrystal1_3341(int x, int y)
{
    return new (Active::pool.create()) GimmickTeleSwitchCrystal1_3341(x, y);
}
static Image* images_gimmickteleswitchcrystal2_3342_0_0[1];
static Direction direction_gimmickteleswitchcrystal2_3342_0_0 = {0, 50, 50, 0, 1, images_gimmickteleswitchcrystal2_3342_0_0, 1};
static Image* images_gimmickteleswitchcrystal2_3342_0_1[1];
static Direction direction_gimmickteleswitchcrystal2_3342_0_1 = {1, 50, 50, 0, 1, images_gimmickteleswitchcrystal2_3342_0_1, 1};
static Animation anim_gimmickteleswitchcrystal2_3342_0 = {&direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_1, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0, &direction_gimmickteleswitchcrystal2_3342_0_0};
static Animation * anim_array_gimmickteleswitchcrystal2_3342[1] = {&anim_gimmickteleswitchcrystal2_3342_0};
static Animations anim_gimmickteleswitchcrystal2_3342 = {1, &anim_array_gimmickteleswitchcrystal2_3342[0]};
static bool anim_gimmickteleswitchcrystal2_3342_initialized;
class GimmickTeleSwitchCrystal2_3342 : public Active
{
public:
    GimmickTeleSwitchCrystal2_3342(int x, int y) : Active(x, y, GimmickTeleSwitchCrystal2_3342_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_TeleSwitchCrystal 2", 27);
#endif
        this->animations = &anim_gimmickteleswitchcrystal2_3342;
        if (!anim_gimmickteleswitchcrystal2_3342_initialized) {
            anim_gimmickteleswitchcrystal2_3342_initialized = true;
            images_gimmickteleswitchcrystal2_3342_0_0[0] = get_internal_image(13832);
            images_gimmickteleswitchcrystal2_3342_0_1[0] = get_internal_image(13834);
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
FrameObject * create_gimmickteleswitchcrystal2_3342(int x, int y)
{
    return new (Active::pool.create()) GimmickTeleSwitchCrystal2_3342(x, y);
}
class CurrentColor_3343 : public Counter
{
public:
    CurrentColor_3343(int x, int y) : Counter(x, y, CurrentColor_3343_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CurrentColor", 12);
#endif
        flags &= ~SCROLL;
        type = HIDDEN_COUNTER;
        width = height = 0;
        minimum = 0;
        maximum = 1;
        set(0);
    }
};
FrameObject * create_currentcolor_3343(int x, int y)
{
    return new (Counter::pool.create()) CurrentColor_3343(x, y);
}
static Image* images_objecttransporter_3344_0_0[4];
static Direction direction_objecttransporter_3344_0_0 = {0, 25, 25, 0, -1, images_objecttransporter_3344_0_0, 4};
static Animation anim_objecttransporter_3344_0 = {&direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, NULL, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0, &direction_objecttransporter_3344_0_0};
static Animation * anim_array_objecttransporter_3344[1] = {&anim_objecttransporter_3344_0};
static Animations anim_objecttransporter_3344 = {1, &anim_array_objecttransporter_3344[0]};
static bool anim_objecttransporter_3344_initialized;
class ObjectTransporter_3344 : public Active
{
public:
    ObjectTransporter_3344(int x, int y) : Active(x, y, ObjectTransporter_3344_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_Transporter", 18);
#endif
        this->animations = &anim_objecttransporter_3344;
        if (!anim_objecttransporter_3344_initialized) {
            anim_objecttransporter_3344_initialized = true;
            images_objecttransporter_3344_0_0[0] = get_internal_image(13908);
            images_objecttransporter_3344_0_0[1] = get_internal_image(13619);
            images_objecttransporter_3344_0_0[2] = get_internal_image(328);
            images_objecttransporter_3344_0_0[3] = get_internal_image(13609);
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
FrameObject * create_objecttransporter_3344(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporter_3344(x, y);
}
static Image* images_enemyelitespawner_3345_0_0[1];
static Direction direction_enemyelitespawner_3345_0_0 = {0, 0, 0, 0, -1, images_enemyelitespawner_3345_0_0, 1};
static Animation anim_enemyelitespawner_3345_0 = {&direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, NULL, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0, &direction_enemyelitespawner_3345_0_0};
static Image* images_enemyelitespawner_3345_8_0[5];
static Direction direction_enemyelitespawner_3345_8_0 = {0, 25, 25, 0, 1, images_enemyelitespawner_3345_8_0, 5};
static Image* images_enemyelitespawner_3345_8_16[5];
static Direction direction_enemyelitespawner_3345_8_16 = {16, 25, 25, 0, 1, images_enemyelitespawner_3345_8_16, 5};
static Animation anim_enemyelitespawner_3345_8 = {&direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, NULL, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, &direction_enemyelitespawner_3345_8_16, NULL, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0, &direction_enemyelitespawner_3345_8_0};
static Animation * anim_array_enemyelitespawner_3345[9] = {&anim_enemyelitespawner_3345_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyelitespawner_3345_8};
static Animations anim_enemyelitespawner_3345 = {9, &anim_array_enemyelitespawner_3345[0]};
static bool anim_enemyelitespawner_3345_initialized;
class EnemyEliteSpawner_3345 : public Active
{
public:
    EnemyEliteSpawner_3345(int x, int y) : Active(x, y, EnemyEliteSpawner_3345_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_EliteSpawner", 18);
#endif
        set_visible(false);
        this->animations = &anim_enemyelitespawner_3345;
        if (!anim_enemyelitespawner_3345_initialized) {
            anim_enemyelitespawner_3345_initialized = true;
            images_enemyelitespawner_3345_0_0[0] = get_internal_image(13892);
            images_enemyelitespawner_3345_8_0[0] = get_internal_image(13913);
            images_enemyelitespawner_3345_8_0[1] = get_internal_image(13914);
            images_enemyelitespawner_3345_8_0[2] = get_internal_image(13915);
            images_enemyelitespawner_3345_8_0[3] = get_internal_image(13916);
            images_enemyelitespawner_3345_8_0[4] = get_internal_image(11053);
            images_enemyelitespawner_3345_8_16[0] = get_internal_image(13910);
            images_enemyelitespawner_3345_8_16[1] = get_internal_image(13911);
            images_enemyelitespawner_3345_8_16[2] = get_internal_image(13909);
            images_enemyelitespawner_3345_8_16[3] = get_internal_image(13912);
            images_enemyelitespawner_3345_8_16[4] = get_internal_image(11056);
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
FrameObject * create_enemyelitespawner_3345(int x, int y)
{
    return new (Active::pool.create()) EnemyEliteSpawner_3345(x, y);
}
static Image* images_bossshadebeasteye_3346_0_0[4];
static Direction direction_bossshadebeasteye_3346_0_0 = {0, 0, 0, 0, 1, images_bossshadebeasteye_3346_0_0, 4};
static Image* images_bossshadebeasteye_3346_0_8[4];
static Direction direction_bossshadebeasteye_3346_0_8 = {8, 25, 25, 0, 1, images_bossshadebeasteye_3346_0_8, 4};
static Animation anim_bossshadebeasteye_3346_0 = {&direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, NULL, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, &direction_bossshadebeasteye_3346_0_8, NULL, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0, &direction_bossshadebeasteye_3346_0_0};
static Image* images_bossshadebeasteye_3346_7_0[2];
static Direction direction_bossshadebeasteye_3346_7_0 = {0, 25, 25, 0, -1, images_bossshadebeasteye_3346_7_0, 2};
static Animation anim_bossshadebeasteye_3346_7 = {&direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, NULL, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0, &direction_bossshadebeasteye_3346_7_0};
static Animation * anim_array_bossshadebeasteye_3346[8] = {&anim_bossshadebeasteye_3346_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeasteye_3346_7};
static Animations anim_bossshadebeasteye_3346 = {8, &anim_array_bossshadebeasteye_3346[0]};
static bool anim_bossshadebeasteye_3346_initialized;
class BossShadeBeastEye_3346 : public Active
{
public:
    BossShadeBeastEye_3346(int x, int y) : Active(x, y, BossShadeBeastEye_3346_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeastEye", 18);
#endif
        this->animations = &anim_bossshadebeasteye_3346;
        if (!anim_bossshadebeasteye_3346_initialized) {
            anim_bossshadebeasteye_3346_initialized = true;
            images_bossshadebeasteye_3346_0_0[0] = get_internal_image(376);
            images_bossshadebeasteye_3346_0_0[1] = get_internal_image(1586);
            images_bossshadebeasteye_3346_0_0[2] = get_internal_image(4340);
            images_bossshadebeasteye_3346_0_0[3] = get_internal_image(5227);
            images_bossshadebeasteye_3346_0_8[0] = get_internal_image(13978);
            images_bossshadebeasteye_3346_0_8[1] = get_internal_image(13979);
            images_bossshadebeasteye_3346_0_8[2] = get_internal_image(13978);
            images_bossshadebeasteye_3346_0_8[3] = get_internal_image(13979);
            images_bossshadebeasteye_3346_7_0[0] = get_internal_image(13977);
            images_bossshadebeasteye_3346_7_0[1] = get_internal_image(5227);
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
FrameObject * create_bossshadebeasteye_3346(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeastEye_3346(x, y);
}
static Image* images_effectbossshade_3347_0_0[3];
static Direction direction_effectbossshade_3347_0_0 = {0, 50, 50, 0, -1, images_effectbossshade_3347_0_0, 3};
static Animation anim_effectbossshade_3347_0 = {&direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, NULL, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0, &direction_effectbossshade_3347_0_0};
static Animation * anim_array_effectbossshade_3347[1] = {&anim_effectbossshade_3347_0};
static Animations anim_effectbossshade_3347 = {1, &anim_array_effectbossshade_3347[0]};
static bool anim_effectbossshade_3347_initialized;
class EffectBossShade_3347 : public Active
{
public:
    EffectBossShade_3347(int x, int y) : Active(x, y, EffectBossShade_3347_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Effect_BossShade", 16);
#endif
        this->animations = &anim_effectbossshade_3347;
        if (!anim_effectbossshade_3347_initialized) {
            anim_effectbossshade_3347_initialized = true;
            images_effectbossshade_3347_0_0[0] = get_internal_image(218);
            images_effectbossshade_3347_0_0[1] = get_internal_image(219);
            images_effectbossshade_3347_0_0[2] = get_internal_image(220);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 500);
    }
};
FrameObject * create_effectbossshade_3347(int x, int y)
{
    return new (Active::pool.create()) EffectBossShade_3347(x, y);
}
static Image* images_bossvortexstar_3348_0_0[1];
static Direction direction_bossvortexstar_3348_0_0 = {0, 50, 50, 0, 1, images_bossvortexstar_3348_0_0, 1};
static Animation anim_bossvortexstar_3348_0 = {&direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, NULL, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0, &direction_bossvortexstar_3348_0_0};
static Animation * anim_array_bossvortexstar_3348[1] = {&anim_bossvortexstar_3348_0};
static Animations anim_bossvortexstar_3348 = {1, &anim_array_bossvortexstar_3348[0]};
static bool anim_bossvortexstar_3348_initialized;
class BossVortexStar_3348 : public Active
{
public:
    BossVortexStar_3348(int x, int y) : Active(x, y, BossVortexStar_3348_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_VortexStar", 15);
#endif
        this->animations = &anim_bossvortexstar_3348;
        if (!anim_bossvortexstar_3348_initialized) {
            anim_bossvortexstar_3348_initialized = true;
            images_bossvortexstar_3348_0_0[0] = get_internal_image(13966);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 600);
    }
};
FrameObject * create_bossvortexstar_3348(int x, int y)
{
    return new (Active::pool.create()) BossVortexStar_3348(x, y);
}
static Image* images_bossvortexhitzone_3349_0_0[1];
static Direction direction_bossvortexhitzone_3349_0_0 = {0, 50, 50, 0, 1, images_bossvortexhitzone_3349_0_0, 1};
static Animation anim_bossvortexhitzone_3349_0 = {&direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, NULL, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0, &direction_bossvortexhitzone_3349_0_0};
static Animation * anim_array_bossvortexhitzone_3349[1] = {&anim_bossvortexhitzone_3349_0};
static Animations anim_bossvortexhitzone_3349 = {1, &anim_array_bossvortexhitzone_3349[0]};
static bool anim_bossvortexhitzone_3349_initialized;
class BossVortexHitZone_3349 : public Active
{
public:
    BossVortexHitZone_3349(int x, int y) : Active(x, y, BossVortexHitZone_3349_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_VortexHitZone", 18);
#endif
        this->animations = &anim_bossvortexhitzone_3349;
        if (!anim_bossvortexhitzone_3349_initialized) {
            anim_bossvortexhitzone_3349_initialized = true;
            images_bossvortexhitzone_3349_0_0[0] = get_internal_image(13963);
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
FrameObject * create_bossvortexhitzone_3349(int x, int y)
{
    return new (Active::pool.create()) BossVortexHitZone_3349(x, y);
}
static Image* images_effectvortexburst_3350_4_0[7];
static Direction direction_effectvortexburst_3350_4_0 = {0, 100, 100, 0, 1, images_effectvortexburst_3350_4_0, 7};
static Animation anim_effectvortexburst_3350_4 = {&direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, NULL, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0, &direction_effectvortexburst_3350_4_0};
static Animation * anim_array_effectvortexburst_3350[5] = {NULL, NULL, NULL, NULL, &anim_effectvortexburst_3350_4};
static Animations anim_effectvortexburst_3350 = {5, &anim_array_effectvortexburst_3350[0]};
static bool anim_effectvortexburst_3350_initialized;
class EffectVortexBurst_3350 : public Active
{
public:
    EffectVortexBurst_3350(int x, int y) : Active(x, y, EffectVortexBurst_3350_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_VortexBurst", 18);
#endif
        this->animations = &anim_effectvortexburst_3350;
        if (!anim_effectvortexburst_3350_initialized) {
            anim_effectvortexburst_3350_initialized = true;
            images_effectvortexburst_3350_4_0[0] = get_internal_image(13967);
            images_effectvortexburst_3350_4_0[1] = get_internal_image(13968);
            images_effectvortexburst_3350_4_0[2] = get_internal_image(13969);
            images_effectvortexburst_3350_4_0[3] = get_internal_image(13970);
            images_effectvortexburst_3350_4_0[4] = get_internal_image(13971);
            images_effectvortexburst_3350_4_0[5] = get_internal_image(13972);
            images_effectvortexburst_3350_4_0[6] = get_internal_image(13973);
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
FrameObject * create_effectvortexburst_3350(int x, int y)
{
    return new (Active::pool.create()) EffectVortexBurst_3350(x, y);
}
static Image* images_bossdailcardtrail_3351_0_0[2];
static Direction direction_bossdailcardtrail_3351_0_0 = {0, 50, 50, 0, -1, images_bossdailcardtrail_3351_0_0, 2};
static Animation anim_bossdailcardtrail_3351_0 = {&direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, NULL, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0, &direction_bossdailcardtrail_3351_0_0};
static Animation * anim_array_bossdailcardtrail_3351[1] = {&anim_bossdailcardtrail_3351_0};
static Animations anim_bossdailcardtrail_3351 = {1, &anim_array_bossdailcardtrail_3351[0]};
static bool anim_bossdailcardtrail_3351_initialized;
class BossDailCardTrail_3351 : public Active
{
public:
    BossDailCardTrail_3351(int x, int y) : Active(x, y, BossDailCardTrail_3351_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_DailCardTrail", 18);
#endif
        this->animations = &anim_bossdailcardtrail_3351;
        if (!anim_bossdailcardtrail_3351_initialized) {
            anim_bossdailcardtrail_3351_initialized = true;
            images_bossdailcardtrail_3351_0_0[0] = get_internal_image(13958);
            images_bossdailcardtrail_3351_0_0[1] = get_internal_image(14540);
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
FrameObject * create_bossdailcardtrail_3351(int x, int y)
{
    return new (Active::pool.create()) BossDailCardTrail_3351(x, y);
}
static Image* images_bossdailcardeffect_3352_0_0[1];
static Direction direction_bossdailcardeffect_3352_0_0 = {0, 50, 50, 0, 1, images_bossdailcardeffect_3352_0_0, 1};
static Animation anim_bossdailcardeffect_3352_0 = {&direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, NULL, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0, &direction_bossdailcardeffect_3352_0_0};
static Image* images_bossdailcardeffect_3352_7_0[8];
static Direction direction_bossdailcardeffect_3352_7_0 = {0, 100, 100, 0, -1, images_bossdailcardeffect_3352_7_0, 8};
static Animation anim_bossdailcardeffect_3352_7 = {&direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, NULL, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0, &direction_bossdailcardeffect_3352_7_0};
static Animation * anim_array_bossdailcardeffect_3352[8] = {&anim_bossdailcardeffect_3352_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossdailcardeffect_3352_7};
static Animations anim_bossdailcardeffect_3352 = {8, &anim_array_bossdailcardeffect_3352[0]};
static bool anim_bossdailcardeffect_3352_initialized;
class BossDailCardEffect_3352 : public Active
{
public:
    BossDailCardEffect_3352(int x, int y) : Active(x, y, BossDailCardEffect_3352_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_DailCardEffect", 19);
#endif
        this->animations = &anim_bossdailcardeffect_3352;
        if (!anim_bossdailcardeffect_3352_initialized) {
            anim_bossdailcardeffect_3352_initialized = true;
            images_bossdailcardeffect_3352_0_0[0] = get_internal_image(13905);
            images_bossdailcardeffect_3352_7_0[0] = get_internal_image(13917);
            images_bossdailcardeffect_3352_7_0[1] = get_internal_image(13918);
            images_bossdailcardeffect_3352_7_0[2] = get_internal_image(13919);
            images_bossdailcardeffect_3352_7_0[3] = get_internal_image(13920);
            images_bossdailcardeffect_3352_7_0[4] = get_internal_image(13921);
            images_bossdailcardeffect_3352_7_0[5] = get_internal_image(13922);
            images_bossdailcardeffect_3352_7_0[6] = get_internal_image(13923);
            images_bossdailcardeffect_3352_7_0[7] = get_internal_image(13924);
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
FrameObject * create_bossdailcardeffect_3352(int x, int y)
{
    return new (Active::pool.create()) BossDailCardEffect_3352(x, y);
}
static Image* images_enemybeastiris_3353_0_0[7];
static Direction direction_enemybeastiris_3353_0_0 = {0, 50, 50, 1, -1, images_enemybeastiris_3353_0_0, 7};
static Image* images_enemybeastiris_3353_0_8[3];
static Direction direction_enemybeastiris_3353_0_8 = {8, 50, 50, 0, 1, images_enemybeastiris_3353_0_8, 3};
static Image* images_enemybeastiris_3353_0_16[7];
static Direction direction_enemybeastiris_3353_0_16 = {16, 50, 50, 1, -1, images_enemybeastiris_3353_0_16, 7};
static Animation anim_enemybeastiris_3353_0 = {&direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, NULL, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, &direction_enemybeastiris_3353_0_8, NULL, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, &direction_enemybeastiris_3353_0_16, NULL, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0, &direction_enemybeastiris_3353_0_0};
static Image* images_enemybeastiris_3353_2_0[7];
static Direction direction_enemybeastiris_3353_2_0 = {0, 50, 50, 1, -1, images_enemybeastiris_3353_2_0, 7};
static Image* images_enemybeastiris_3353_2_16[7];
static Direction direction_enemybeastiris_3353_2_16 = {16, 50, 50, 1, -1, images_enemybeastiris_3353_2_16, 7};
static Animation anim_enemybeastiris_3353_2 = {&direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, NULL, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, &direction_enemybeastiris_3353_2_16, NULL, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0, &direction_enemybeastiris_3353_2_0};
static Image* images_enemybeastiris_3353_7_0[1];
static Direction direction_enemybeastiris_3353_7_0 = {0, 50, 50, 0, -1, images_enemybeastiris_3353_7_0, 1};
static Image* images_enemybeastiris_3353_7_16[1];
static Direction direction_enemybeastiris_3353_7_16 = {16, 50, 50, 0, -1, images_enemybeastiris_3353_7_16, 1};
static Animation anim_enemybeastiris_3353_7 = {&direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, NULL, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, &direction_enemybeastiris_3353_7_16, NULL, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0, &direction_enemybeastiris_3353_7_0};
static Image* images_enemybeastiris_3353_8_0[1];
static Direction direction_enemybeastiris_3353_8_0 = {0, 50, 50, 0, 1, images_enemybeastiris_3353_8_0, 1};
static Animation anim_enemybeastiris_3353_8 = {&direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, NULL, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0, &direction_enemybeastiris_3353_8_0};
static Image* images_enemybeastiris_3353_10_0[19];
static Direction direction_enemybeastiris_3353_10_0 = {0, 35, 35, 0, 1, images_enemybeastiris_3353_10_0, 19};
static Image* images_enemybeastiris_3353_10_8[1];
static Direction direction_enemybeastiris_3353_10_8 = {8, 50, 50, 0, 1, images_enemybeastiris_3353_10_8, 1};
static Image* images_enemybeastiris_3353_10_16[19];
static Direction direction_enemybeastiris_3353_10_16 = {16, 35, 35, 0, 1, images_enemybeastiris_3353_10_16, 19};
static Animation anim_enemybeastiris_3353_10 = {&direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, NULL, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, &direction_enemybeastiris_3353_10_8, NULL, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, &direction_enemybeastiris_3353_10_16, NULL, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0, &direction_enemybeastiris_3353_10_0};
static Animation * anim_array_enemybeastiris_3353[11] = {&anim_enemybeastiris_3353_0, NULL, &anim_enemybeastiris_3353_2, NULL, NULL, NULL, NULL, &anim_enemybeastiris_3353_7, &anim_enemybeastiris_3353_8, NULL, &anim_enemybeastiris_3353_10};
static Animations anim_enemybeastiris_3353 = {11, &anim_array_enemybeastiris_3353[0]};
static bool anim_enemybeastiris_3353_initialized;
class EnemyBeastIris_3353 : public Active
{
public:
    EnemyBeastIris_3353(int x, int y) : Active(x, y, EnemyBeastIris_3353_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_BeastIris", 15);
#endif
        this->animations = &anim_enemybeastiris_3353;
        if (!anim_enemybeastiris_3353_initialized) {
            anim_enemybeastiris_3353_initialized = true;
            images_enemybeastiris_3353_0_0[0] = get_internal_image(14012);
            images_enemybeastiris_3353_0_0[1] = get_internal_image(14016);
            images_enemybeastiris_3353_0_0[2] = get_internal_image(14013);
            images_enemybeastiris_3353_0_0[3] = get_internal_image(14014);
            images_enemybeastiris_3353_0_0[4] = get_internal_image(14015);
            images_enemybeastiris_3353_0_0[5] = get_internal_image(14017);
            images_enemybeastiris_3353_0_0[6] = get_internal_image(14018);
            images_enemybeastiris_3353_0_8[0] = get_internal_image(13976);
            images_enemybeastiris_3353_0_8[1] = get_internal_image(13983);
            images_enemybeastiris_3353_0_8[2] = get_internal_image(14026);
            images_enemybeastiris_3353_0_16[0] = get_internal_image(14019);
            images_enemybeastiris_3353_0_16[1] = get_internal_image(14020);
            images_enemybeastiris_3353_0_16[2] = get_internal_image(14021);
            images_enemybeastiris_3353_0_16[3] = get_internal_image(14022);
            images_enemybeastiris_3353_0_16[4] = get_internal_image(14023);
            images_enemybeastiris_3353_0_16[5] = get_internal_image(14024);
            images_enemybeastiris_3353_0_16[6] = get_internal_image(14025);
            images_enemybeastiris_3353_2_0[0] = get_internal_image(13995);
            images_enemybeastiris_3353_2_0[1] = get_internal_image(13994);
            images_enemybeastiris_3353_2_0[2] = get_internal_image(13996);
            images_enemybeastiris_3353_2_0[3] = get_internal_image(13997);
            images_enemybeastiris_3353_2_0[4] = get_internal_image(13998);
            images_enemybeastiris_3353_2_0[5] = get_internal_image(13999);
            images_enemybeastiris_3353_2_0[6] = get_internal_image(14000);
            images_enemybeastiris_3353_2_16[0] = get_internal_image(14001);
            images_enemybeastiris_3353_2_16[1] = get_internal_image(14008);
            images_enemybeastiris_3353_2_16[2] = get_internal_image(14011);
            images_enemybeastiris_3353_2_16[3] = get_internal_image(14052);
            images_enemybeastiris_3353_2_16[4] = get_internal_image(14053);
            images_enemybeastiris_3353_2_16[5] = get_internal_image(14054);
            images_enemybeastiris_3353_2_16[6] = get_internal_image(14055);
            images_enemybeastiris_3353_7_0[0] = get_internal_image(14002);
            images_enemybeastiris_3353_7_16[0] = get_internal_image(14004);
            images_enemybeastiris_3353_8_0[0] = get_internal_image(14003);
            images_enemybeastiris_3353_10_0[0] = get_internal_image(14012);
            images_enemybeastiris_3353_10_0[1] = get_internal_image(14012);
            images_enemybeastiris_3353_10_0[2] = get_internal_image(14037);
            images_enemybeastiris_3353_10_0[3] = get_internal_image(14041);
            images_enemybeastiris_3353_10_0[4] = get_internal_image(14042);
            images_enemybeastiris_3353_10_0[5] = get_internal_image(14043);
            images_enemybeastiris_3353_10_0[6] = get_internal_image(14044);
            images_enemybeastiris_3353_10_0[7] = get_internal_image(14045);
            images_enemybeastiris_3353_10_0[8] = get_internal_image(14046);
            images_enemybeastiris_3353_10_0[9] = get_internal_image(14047);
            images_enemybeastiris_3353_10_0[10] = get_internal_image(14047);
            images_enemybeastiris_3353_10_0[11] = get_internal_image(14047);
            images_enemybeastiris_3353_10_0[12] = get_internal_image(14047);
            images_enemybeastiris_3353_10_0[13] = get_internal_image(13988);
            images_enemybeastiris_3353_10_0[14] = get_internal_image(14048);
            images_enemybeastiris_3353_10_0[15] = get_internal_image(14049);
            images_enemybeastiris_3353_10_0[16] = get_internal_image(14050);
            images_enemybeastiris_3353_10_0[17] = get_internal_image(14051);
            images_enemybeastiris_3353_10_0[18] = get_internal_image(14042);
            images_enemybeastiris_3353_10_8[0] = get_internal_image(14028);
            images_enemybeastiris_3353_10_16[0] = get_internal_image(14019);
            images_enemybeastiris_3353_10_16[1] = get_internal_image(14019);
            images_enemybeastiris_3353_10_16[2] = get_internal_image(14031);
            images_enemybeastiris_3353_10_16[3] = get_internal_image(14036);
            images_enemybeastiris_3353_10_16[4] = get_internal_image(14027);
            images_enemybeastiris_3353_10_16[5] = get_internal_image(14029);
            images_enemybeastiris_3353_10_16[6] = get_internal_image(14032);
            images_enemybeastiris_3353_10_16[7] = get_internal_image(14034);
            images_enemybeastiris_3353_10_16[8] = get_internal_image(14033);
            images_enemybeastiris_3353_10_16[9] = get_internal_image(14030);
            images_enemybeastiris_3353_10_16[10] = get_internal_image(14030);
            images_enemybeastiris_3353_10_16[11] = get_internal_image(14030);
            images_enemybeastiris_3353_10_16[12] = get_internal_image(14030);
            images_enemybeastiris_3353_10_16[13] = get_internal_image(13986);
            images_enemybeastiris_3353_10_16[14] = get_internal_image(14040);
            images_enemybeastiris_3353_10_16[15] = get_internal_image(14038);
            images_enemybeastiris_3353_10_16[16] = get_internal_image(14039);
            images_enemybeastiris_3353_10_16[17] = get_internal_image(14035);
            images_enemybeastiris_3353_10_16[18] = get_internal_image(14027);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(3, 1925);
        alterables->values.set(5, -6);
    }
};
FrameObject * create_enemybeastiris_3353(int x, int y)
{
    return new (Active::pool.create()) EnemyBeastIris_3353(x, y);
}
static Image* images_liftoffjet1_3354_0_0[2];
static Direction direction_liftoffjet1_3354_0_0 = {0, 50, 50, 0, -1, images_liftoffjet1_3354_0_0, 2};
static Animation anim_liftoffjet1_3354_0 = {&direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, NULL, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0, &direction_liftoffjet1_3354_0_0};
static Animation * anim_array_liftoffjet1_3354[1] = {&anim_liftoffjet1_3354_0};
static Animations anim_liftoffjet1_3354 = {1, &anim_array_liftoffjet1_3354[0]};
static bool anim_liftoffjet1_3354_initialized;
class LiftoffJet1_3354 : public Active
{
public:
    LiftoffJet1_3354(int x, int y) : Active(x, y, LiftoffJet1_3354_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Liftoff_Jet 1", 13);
#endif
        set_visible(false);
        this->animations = &anim_liftoffjet1_3354;
        if (!anim_liftoffjet1_3354_initialized) {
            anim_liftoffjet1_3354_initialized = true;
            images_liftoffjet1_3354_0_0[0] = get_internal_image(16250);
            images_liftoffjet1_3354_0_0[1] = get_internal_image(16249);
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
FrameObject * create_liftoffjet1_3354(int x, int y)
{
    return new (Active::pool.create()) LiftoffJet1_3354(x, y);
}
static Image* images_liftoffjet2_3355_0_0[2];
static Direction direction_liftoffjet2_3355_0_0 = {0, 50, 50, 0, -1, images_liftoffjet2_3355_0_0, 2};
static Animation anim_liftoffjet2_3355_0 = {&direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, NULL, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0, &direction_liftoffjet2_3355_0_0};
static Animation * anim_array_liftoffjet2_3355[1] = {&anim_liftoffjet2_3355_0};
static Animations anim_liftoffjet2_3355 = {1, &anim_array_liftoffjet2_3355[0]};
static bool anim_liftoffjet2_3355_initialized;
class LiftoffJet2_3355 : public Active
{
public:
    LiftoffJet2_3355(int x, int y) : Active(x, y, LiftoffJet2_3355_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Liftoff_Jet 2", 13);
#endif
        set_visible(false);
        this->animations = &anim_liftoffjet2_3355;
        if (!anim_liftoffjet2_3355_initialized) {
            anim_liftoffjet2_3355_initialized = true;
            images_liftoffjet2_3355_0_0[0] = get_internal_image(16251);
            images_liftoffjet2_3355_0_0[1] = get_internal_image(16252);
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
FrameObject * create_liftoffjet2_3355(int x, int y)
{
    return new (Active::pool.create()) LiftoffJet2_3355(x, y);
}
static Image* images_bossdailspawnpoint_3356_0_0[1];
static Direction direction_bossdailspawnpoint_3356_0_0 = {0, 50, 50, 0, 1, images_bossdailspawnpoint_3356_0_0, 1};
static Animation anim_bossdailspawnpoint_3356_0 = {&direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, NULL, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0, &direction_bossdailspawnpoint_3356_0_0};
static Animation * anim_array_bossdailspawnpoint_3356[1] = {&anim_bossdailspawnpoint_3356_0};
static Animations anim_bossdailspawnpoint_3356 = {1, &anim_array_bossdailspawnpoint_3356[0]};
static bool anim_bossdailspawnpoint_3356_initialized;
class BossDailSpawnpoint_3356 : public Active
{
public:
    BossDailSpawnpoint_3356(int x, int y) : Active(x, y, BossDailSpawnpoint_3356_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_DailSpawnpoint", 19);
#endif
        set_visible(false);
        this->animations = &anim_bossdailspawnpoint_3356;
        if (!anim_bossdailspawnpoint_3356_initialized) {
            anim_bossdailspawnpoint_3356_initialized = true;
            images_bossdailspawnpoint_3356_0_0[0] = get_internal_image(13903);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -2);
    }
};
FrameObject * create_bossdailspawnpoint_3356(int x, int y)
{
    return new (Active::pool.create()) BossDailSpawnpoint_3356(x, y);
}
static Image* images_bossshadebeast_3357_0_0[1];
static Direction direction_bossshadebeast_3357_0_0 = {0, 50, 50, 0, 1, images_bossshadebeast_3357_0_0, 1};
static Image* images_bossshadebeast_3357_0_8[4];
static Direction direction_bossshadebeast_3357_0_8 = {8, 50, 50, 0, 1, images_bossshadebeast_3357_0_8, 4};
static Animation anim_bossshadebeast_3357_0 = {&direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, NULL, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, &direction_bossshadebeast_3357_0_8, NULL, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0, &direction_bossshadebeast_3357_0_0};
static Image* images_bossshadebeast_3357_8_0[2];
static Direction direction_bossshadebeast_3357_8_0 = {0, 50, 50, 0, -1, images_bossshadebeast_3357_8_0, 2};
static Animation anim_bossshadebeast_3357_8 = {&direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, NULL, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0, &direction_bossshadebeast_3357_8_0};
static Animation * anim_array_bossshadebeast_3357[9] = {&anim_bossshadebeast_3357_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeast_3357_8};
static Animations anim_bossshadebeast_3357 = {9, &anim_array_bossshadebeast_3357[0]};
static bool anim_bossshadebeast_3357_initialized;
class BossShadeBeast_3357 : public Active
{
public:
    BossShadeBeast_3357(int x, int y) : Active(x, y, BossShadeBeast_3357_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeast", 15);
#endif
        this->animations = &anim_bossshadebeast_3357;
        if (!anim_bossshadebeast_3357_initialized) {
            anim_bossshadebeast_3357_initialized = true;
            images_bossshadebeast_3357_0_0[0] = get_internal_image(13925);
            images_bossshadebeast_3357_0_8[0] = get_internal_image(13926);
            images_bossshadebeast_3357_0_8[1] = get_internal_image(13927);
            images_bossshadebeast_3357_0_8[2] = get_internal_image(13928);
            images_bossshadebeast_3357_0_8[3] = get_internal_image(13929);
            images_bossshadebeast_3357_8_0[0] = get_internal_image(13989);
            images_bossshadebeast_3357_8_0[1] = get_internal_image(13925);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 15);
        alterables->values.set(5, 15);
    }
};
FrameObject * create_bossshadebeast_3357(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeast_3357(x, y);
}
static Image* images_bossshadebeastcrown_3358_0_0[1];
static Direction direction_bossshadebeastcrown_3358_0_0 = {0, 50, 50, 0, 1, images_bossshadebeastcrown_3358_0_0, 1};
static Image* images_bossshadebeastcrown_3358_0_8[1];
static Direction direction_bossshadebeastcrown_3358_0_8 = {8, 50, 50, 0, 1, images_bossshadebeastcrown_3358_0_8, 1};
static Animation anim_bossshadebeastcrown_3358_0 = {&direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, NULL, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, &direction_bossshadebeastcrown_3358_0_8, NULL, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0, &direction_bossshadebeastcrown_3358_0_0};
static Image* images_bossshadebeastcrown_3358_8_0[2];
static Direction direction_bossshadebeastcrown_3358_8_0 = {0, 50, 50, 0, 1, images_bossshadebeastcrown_3358_8_0, 2};
static Animation anim_bossshadebeastcrown_3358_8 = {&direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, NULL, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0, &direction_bossshadebeastcrown_3358_8_0};
static Animation * anim_array_bossshadebeastcrown_3358[9] = {&anim_bossshadebeastcrown_3358_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeastcrown_3358_8};
static Animations anim_bossshadebeastcrown_3358 = {9, &anim_array_bossshadebeastcrown_3358[0]};
static bool anim_bossshadebeastcrown_3358_initialized;
class BossShadeBeastCrown_3358 : public Active
{
public:
    BossShadeBeastCrown_3358(int x, int y) : Active(x, y, BossShadeBeastCrown_3358_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeastCrown", 20);
#endif
        this->animations = &anim_bossshadebeastcrown_3358;
        if (!anim_bossshadebeastcrown_3358_initialized) {
            anim_bossshadebeastcrown_3358_initialized = true;
            images_bossshadebeastcrown_3358_0_0[0] = get_internal_image(13930);
            images_bossshadebeastcrown_3358_0_8[0] = get_internal_image(13931);
            images_bossshadebeastcrown_3358_8_0[0] = get_internal_image(14056);
            images_bossshadebeastcrown_3358_8_0[1] = get_internal_image(13930);
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
FrameObject * create_bossshadebeastcrown_3358(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeastCrown_3358(x, y);
}
static Image* images_bossdail_3359_0_0[1];
static Direction direction_bossdail_3359_0_0 = {0, 0, 0, 0, 1, images_bossdail_3359_0_0, 1};
static Animation anim_bossdail_3359_0 = {&direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, NULL, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0, &direction_bossdail_3359_0_0};
static Image* images_bossdail_3359_7_0[12];
static Direction direction_bossdail_3359_7_0 = {0, 20, 20, 0, 1, images_bossdail_3359_7_0, 12};
static Image* images_bossdail_3359_7_1[12];
static Direction direction_bossdail_3359_7_1 = {1, 20, 20, 0, 1, images_bossdail_3359_7_1, 12};
static Image* images_bossdail_3359_7_8[4];
static Direction direction_bossdail_3359_7_8 = {8, 50, 50, 0, 1, images_bossdail_3359_7_8, 4};
static Animation anim_bossdail_3359_7 = {&direction_bossdail_3359_7_0, &direction_bossdail_3359_7_1, &direction_bossdail_3359_7_1, &direction_bossdail_3359_7_1, &direction_bossdail_3359_7_1, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, &direction_bossdail_3359_7_8, NULL, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0, &direction_bossdail_3359_7_0};
static Image* images_bossdail_3359_8_0[2];
static Direction direction_bossdail_3359_8_0 = {0, 50, 50, 0, -1, images_bossdail_3359_8_0, 2};
static Animation anim_bossdail_3359_8 = {&direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, NULL, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0, &direction_bossdail_3359_8_0};
static Image* images_bossdail_3359_10_0[1];
static Direction direction_bossdail_3359_10_0 = {0, 50, 50, 0, -1, images_bossdail_3359_10_0, 1};
static Animation anim_bossdail_3359_10 = {&direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, NULL, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0, &direction_bossdail_3359_10_0};
static Animation * anim_array_bossdail_3359[11] = {&anim_bossdail_3359_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossdail_3359_7, &anim_bossdail_3359_8, NULL, &anim_bossdail_3359_10};
static Animations anim_bossdail_3359 = {11, &anim_array_bossdail_3359[0]};
static bool anim_bossdail_3359_initialized;
class BossDail_3359 : public Active
{
public:
    BossDail_3359(int x, int y) : Active(x, y, BossDail_3359_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_Dail", 9);
#endif
        this->animations = &anim_bossdail_3359;
        if (!anim_bossdail_3359_initialized) {
            anim_bossdail_3359_initialized = true;
            images_bossdail_3359_0_0[0] = get_internal_image(15570);
            images_bossdail_3359_7_0[0] = get_internal_image(15571);
            images_bossdail_3359_7_0[1] = get_internal_image(15572);
            images_bossdail_3359_7_0[2] = get_internal_image(15573);
            images_bossdail_3359_7_0[3] = get_internal_image(15573);
            images_bossdail_3359_7_0[4] = get_internal_image(15573);
            images_bossdail_3359_7_0[5] = get_internal_image(15573);
            images_bossdail_3359_7_0[6] = get_internal_image(15573);
            images_bossdail_3359_7_0[7] = get_internal_image(15578);
            images_bossdail_3359_7_0[8] = get_internal_image(16127);
            images_bossdail_3359_7_0[9] = get_internal_image(15579);
            images_bossdail_3359_7_0[10] = get_internal_image(15579);
            images_bossdail_3359_7_0[11] = get_internal_image(15579);
            images_bossdail_3359_7_1[0] = get_internal_image(15577);
            images_bossdail_3359_7_1[1] = get_internal_image(16128);
            images_bossdail_3359_7_1[2] = get_internal_image(16129);
            images_bossdail_3359_7_1[3] = get_internal_image(16129);
            images_bossdail_3359_7_1[4] = get_internal_image(16129);
            images_bossdail_3359_7_1[5] = get_internal_image(16129);
            images_bossdail_3359_7_1[6] = get_internal_image(16129);
            images_bossdail_3359_7_1[7] = get_internal_image(16164);
            images_bossdail_3359_7_1[8] = get_internal_image(16165);
            images_bossdail_3359_7_1[9] = get_internal_image(16166);
            images_bossdail_3359_7_1[10] = get_internal_image(16166);
            images_bossdail_3359_7_1[11] = get_internal_image(16166);
            images_bossdail_3359_7_8[0] = get_internal_image(13941);
            images_bossdail_3359_7_8[1] = get_internal_image(13942);
            images_bossdail_3359_7_8[2] = get_internal_image(13943);
            images_bossdail_3359_7_8[3] = get_internal_image(13944);
            images_bossdail_3359_8_0[0] = get_internal_image(13933);
            images_bossdail_3359_8_0[1] = get_internal_image(13934);
            images_bossdail_3359_10_0[0] = get_internal_image(13934);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(6, 2);
    }
};
FrameObject * create_bossdail_3359(int x, int y)
{
    return new (Active::pool.create()) BossDail_3359(x, y);
}
static Image* images_bossdailcard_3360_0_0[12];
static Direction direction_bossdailcard_3360_0_0 = {0, 100, 100, 1, -1, images_bossdailcard_3360_0_0, 12};
static Animation anim_bossdailcard_3360_0 = {&direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, NULL, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0, &direction_bossdailcard_3360_0_0};
static Image* images_bossdailcard_3360_7_0[1];
static Direction direction_bossdailcard_3360_7_0 = {0, 100, 100, 0, -1, images_bossdailcard_3360_7_0, 1};
static Animation anim_bossdailcard_3360_7 = {&direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, NULL, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0, &direction_bossdailcard_3360_7_0};
static Animation * anim_array_bossdailcard_3360[8] = {&anim_bossdailcard_3360_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossdailcard_3360_7};
static Animations anim_bossdailcard_3360 = {8, &anim_array_bossdailcard_3360[0]};
static bool anim_bossdailcard_3360_initialized;
class BossDailCard_3360 : public Active
{
public:
    BossDailCard_3360(int x, int y) : Active(x, y, BossDailCard_3360_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_DailCard", 13);
#endif
        this->animations = &anim_bossdailcard_3360;
        if (!anim_bossdailcard_3360_initialized) {
            anim_bossdailcard_3360_initialized = true;
            images_bossdailcard_3360_0_0[0] = get_internal_image(13945);
            images_bossdailcard_3360_0_0[1] = get_internal_image(13946);
            images_bossdailcard_3360_0_0[2] = get_internal_image(13947);
            images_bossdailcard_3360_0_0[3] = get_internal_image(13948);
            images_bossdailcard_3360_0_0[4] = get_internal_image(13949);
            images_bossdailcard_3360_0_0[5] = get_internal_image(13950);
            images_bossdailcard_3360_0_0[6] = get_internal_image(13951);
            images_bossdailcard_3360_0_0[7] = get_internal_image(13952);
            images_bossdailcard_3360_0_0[8] = get_internal_image(13953);
            images_bossdailcard_3360_0_0[9] = get_internal_image(13954);
            images_bossdailcard_3360_0_0[10] = get_internal_image(13955);
            images_bossdailcard_3360_0_0[11] = get_internal_image(13956);
            images_bossdailcard_3360_7_0[0] = get_internal_image(13957);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(11, -30);
    }
};
FrameObject * create_bossdailcard_3360(int x, int y)
{
    return new (Active::pool.create()) BossDailCard_3360(x, y);
}
static Image* images_bossshadebeastmouth_3361_0_0[1];
static Direction direction_bossshadebeastmouth_3361_0_0 = {0, 50, 50, 0, 1, images_bossshadebeastmouth_3361_0_0, 1};
static Image* images_bossshadebeastmouth_3361_0_8[2];
static Direction direction_bossshadebeastmouth_3361_0_8 = {8, 50, 50, 0, 1, images_bossshadebeastmouth_3361_0_8, 2};
static Animation anim_bossshadebeastmouth_3361_0 = {&direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, NULL, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, &direction_bossshadebeastmouth_3361_0_8, NULL, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0, &direction_bossshadebeastmouth_3361_0_0};
static Image* images_bossshadebeastmouth_3361_8_0[2];
static Direction direction_bossshadebeastmouth_3361_8_0 = {0, 50, 50, 0, 1, images_bossshadebeastmouth_3361_8_0, 2};
static Animation anim_bossshadebeastmouth_3361_8 = {&direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, NULL, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0, &direction_bossshadebeastmouth_3361_8_0};
static Animation * anim_array_bossshadebeastmouth_3361[9] = {&anim_bossshadebeastmouth_3361_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeastmouth_3361_8};
static Animations anim_bossshadebeastmouth_3361 = {9, &anim_array_bossshadebeastmouth_3361[0]};
static bool anim_bossshadebeastmouth_3361_initialized;
class BossShadeBeastMouth_3361 : public Active
{
public:
    BossShadeBeastMouth_3361(int x, int y) : Active(x, y, BossShadeBeastMouth_3361_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeastMouth", 20);
#endif
        this->animations = &anim_bossshadebeastmouth_3361;
        if (!anim_bossshadebeastmouth_3361_initialized) {
            anim_bossshadebeastmouth_3361_initialized = true;
            images_bossshadebeastmouth_3361_0_0[0] = get_internal_image(13959);
            images_bossshadebeastmouth_3361_0_8[0] = get_internal_image(13960);
            images_bossshadebeastmouth_3361_0_8[1] = get_internal_image(13961);
            images_bossshadebeastmouth_3361_8_0[0] = get_internal_image(13991);
            images_bossshadebeastmouth_3361_8_0[1] = get_internal_image(13959);
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
FrameObject * create_bossshadebeastmouth_3361(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeastMouth_3361(x, y);
}
static Image* images_bossvortex1_3362_0_0[1];
static Direction direction_bossvortex1_3362_0_0 = {0, 50, 50, 0, 1, images_bossvortex1_3362_0_0, 1};
static Animation anim_bossvortex1_3362_0 = {&direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, NULL, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0, &direction_bossvortex1_3362_0_0};
static Animation * anim_array_bossvortex1_3362[1] = {&anim_bossvortex1_3362_0};
static Animations anim_bossvortex1_3362 = {1, &anim_array_bossvortex1_3362[0]};
static bool anim_bossvortex1_3362_initialized;
class BossVortex1_3362 : public Active
{
public:
    BossVortex1_3362(int x, int y) : Active(x, y, BossVortex1_3362_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Vortex 1", 13);
#endif
        this->animations = &anim_bossvortex1_3362;
        if (!anim_bossvortex1_3362_initialized) {
            anim_bossvortex1_3362_initialized = true;
            images_bossvortex1_3362_0_0[0] = get_internal_image(13962);
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
FrameObject * create_bossvortex1_3362(int x, int y)
{
    return new (Active::pool.create()) BossVortex1_3362(x, y);
}
static Image* images_bossshadebeasttoptooth_3363_0_0[1];
static Direction direction_bossshadebeasttoptooth_3363_0_0 = {0, 50, 50, 0, 1, images_bossshadebeasttoptooth_3363_0_0, 1};
static Animation anim_bossshadebeasttoptooth_3363_0 = {&direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, NULL, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0, &direction_bossshadebeasttoptooth_3363_0_0};
static Image* images_bossshadebeasttoptooth_3363_8_0[2];
static Direction direction_bossshadebeasttoptooth_3363_8_0 = {0, 50, 50, 0, -1, images_bossshadebeasttoptooth_3363_8_0, 2};
static Animation anim_bossshadebeasttoptooth_3363_8 = {&direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, NULL, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0, &direction_bossshadebeasttoptooth_3363_8_0};
static Animation * anim_array_bossshadebeasttoptooth_3363[9] = {&anim_bossshadebeasttoptooth_3363_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeasttoptooth_3363_8};
static Animations anim_bossshadebeasttoptooth_3363 = {9, &anim_array_bossshadebeasttoptooth_3363[0]};
static bool anim_bossshadebeasttoptooth_3363_initialized;
class BossShadeBeastTopTooth_3363 : public Active
{
public:
    BossShadeBeastTopTooth_3363(int x, int y) : Active(x, y, BossShadeBeastTopTooth_3363_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeastTopTooth", 23);
#endif
        this->animations = &anim_bossshadebeasttoptooth_3363;
        if (!anim_bossshadebeasttoptooth_3363_initialized) {
            anim_bossshadebeasttoptooth_3363_initialized = true;
            images_bossshadebeasttoptooth_3363_0_0[0] = get_internal_image(13964);
            images_bossshadebeasttoptooth_3363_8_0[0] = get_internal_image(13992);
            images_bossshadebeasttoptooth_3363_8_0[1] = get_internal_image(13964);
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
FrameObject * create_bossshadebeasttoptooth_3363(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeastTopTooth_3363(x, y);
}
static Image* images_bossshadebeastbottomtooth_3364_0_0[1];
static Direction direction_bossshadebeastbottomtooth_3364_0_0 = {0, 50, 50, 0, 1, images_bossshadebeastbottomtooth_3364_0_0, 1};
static Animation anim_bossshadebeastbottomtooth_3364_0 = {&direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, NULL, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0, &direction_bossshadebeastbottomtooth_3364_0_0};
static Image* images_bossshadebeastbottomtooth_3364_8_0[2];
static Direction direction_bossshadebeastbottomtooth_3364_8_0 = {0, 50, 50, 0, -1, images_bossshadebeastbottomtooth_3364_8_0, 2};
static Animation anim_bossshadebeastbottomtooth_3364_8 = {&direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, NULL, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0, &direction_bossshadebeastbottomtooth_3364_8_0};
static Animation * anim_array_bossshadebeastbottomtooth_3364[9] = {&anim_bossshadebeastbottomtooth_3364_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossshadebeastbottomtooth_3364_8};
static Animations anim_bossshadebeastbottomtooth_3364 = {9, &anim_array_bossshadebeastbottomtooth_3364[0]};
static bool anim_bossshadebeastbottomtooth_3364_initialized;
class BossShadeBeastBottomTooth_3364 : public Active
{
public:
    BossShadeBeastBottomTooth_3364(int x, int y) : Active(x, y, BossShadeBeastBottomTooth_3364_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ShadeBeastBottomTooth", 26);
#endif
        this->animations = &anim_bossshadebeastbottomtooth_3364;
        if (!anim_bossshadebeastbottomtooth_3364_initialized) {
            anim_bossshadebeastbottomtooth_3364_initialized = true;
            images_bossshadebeastbottomtooth_3364_0_0[0] = get_internal_image(13965);
            images_bossshadebeastbottomtooth_3364_8_0[0] = get_internal_image(13993);
            images_bossshadebeastbottomtooth_3364_8_0[1] = get_internal_image(13965);
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
FrameObject * create_bossshadebeastbottomtooth_3364(int x, int y)
{
    return new (Active::pool.create()) BossShadeBeastBottomTooth_3364(x, y);
}
static Image* images_bossvortex2_3365_0_0[8];
static Direction direction_bossvortex2_3365_0_0 = {0, 100, 100, 0, -1, images_bossvortex2_3365_0_0, 8};
static Animation anim_bossvortex2_3365_0 = {&direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, NULL, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0, &direction_bossvortex2_3365_0_0};
static Animation * anim_array_bossvortex2_3365[1] = {&anim_bossvortex2_3365_0};
static Animations anim_bossvortex2_3365 = {1, &anim_array_bossvortex2_3365[0]};
static bool anim_bossvortex2_3365_initialized;
class BossVortex2_3365 : public Active
{
public:
    BossVortex2_3365(int x, int y) : Active(x, y, BossVortex2_3365_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Vortex 2", 13);
#endif
        this->animations = &anim_bossvortex2_3365;
        if (!anim_bossvortex2_3365_initialized) {
            anim_bossvortex2_3365_initialized = true;
            images_bossvortex2_3365_0_0[0] = get_internal_image(1916);
            images_bossvortex2_3365_0_0[1] = get_internal_image(1931);
            images_bossvortex2_3365_0_0[2] = get_internal_image(1932);
            images_bossvortex2_3365_0_0[3] = get_internal_image(1934);
            images_bossvortex2_3365_0_0[4] = get_internal_image(2038);
            images_bossvortex2_3365_0_0[5] = get_internal_image(2039);
            images_bossvortex2_3365_0_0[6] = get_internal_image(2276);
            images_bossvortex2_3365_0_0[7] = get_internal_image(2277);
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
FrameObject * create_bossvortex2_3365(int x, int y)
{
    return new (Active::pool.create()) BossVortex2_3365(x, y);
}
static Image* images_bossdailfall_3366_0_0[1];
static Direction direction_bossdailfall_3366_0_0 = {0, 50, 50, 0, 1, images_bossdailfall_3366_0_0, 1};
static Image* images_bossdailfall_3366_0_8[3];
static Direction direction_bossdailfall_3366_0_8 = {8, 50, 50, 0, 1, images_bossdailfall_3366_0_8, 3};
static Image* images_bossdailfall_3366_0_16[1];
static Direction direction_bossdailfall_3366_0_16 = {16, 50, 50, 0, 1, images_bossdailfall_3366_0_16, 1};
static Animation anim_bossdailfall_3366_0 = {&direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, NULL, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, &direction_bossdailfall_3366_0_8, NULL, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, &direction_bossdailfall_3366_0_16, NULL, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0, &direction_bossdailfall_3366_0_0};
static Image* images_bossdailfall_3366_7_0[1];
static Direction direction_bossdailfall_3366_7_0 = {0, 90, 90, 0, -1, images_bossdailfall_3366_7_0, 1};
static Animation anim_bossdailfall_3366_7 = {&direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, NULL, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0, &direction_bossdailfall_3366_7_0};
static Image* images_bossdailfall_3366_10_0[2];
static Direction direction_bossdailfall_3366_10_0 = {0, 14, 14, 0, -1, images_bossdailfall_3366_10_0, 2};
static Image* images_bossdailfall_3366_10_16[2];
static Direction direction_bossdailfall_3366_10_16 = {16, 14, 14, 0, -1, images_bossdailfall_3366_10_16, 2};
static Animation anim_bossdailfall_3366_10 = {&direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, NULL, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, &direction_bossdailfall_3366_10_16, NULL, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0, &direction_bossdailfall_3366_10_0};
static Image* images_bossdailfall_3366_11_0[5];
static Direction direction_bossdailfall_3366_11_0 = {0, 25, 25, 4, -1, images_bossdailfall_3366_11_0, 5};
static Image* images_bossdailfall_3366_11_1[1];
static Direction direction_bossdailfall_3366_11_1 = {1, 50, 50, 0, -1, images_bossdailfall_3366_11_1, 1};
static Image* images_bossdailfall_3366_11_8[2];
static Direction direction_bossdailfall_3366_11_8 = {8, 50, 50, 0, 1, images_bossdailfall_3366_11_8, 2};
static Image* images_bossdailfall_3366_11_16[5];
static Direction direction_bossdailfall_3366_11_16 = {16, 25, 25, 4, -1, images_bossdailfall_3366_11_16, 5};
static Image* images_bossdailfall_3366_11_17[1];
static Direction direction_bossdailfall_3366_11_17 = {17, 50, 50, 0, -1, images_bossdailfall_3366_11_17, 1};
static Animation anim_bossdailfall_3366_11 = {&direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_1, &direction_bossdailfall_3366_11_1, &direction_bossdailfall_3366_11_1, &direction_bossdailfall_3366_11_1, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, &direction_bossdailfall_3366_11_8, NULL, &direction_bossdailfall_3366_11_16, &direction_bossdailfall_3366_11_16, &direction_bossdailfall_3366_11_16, &direction_bossdailfall_3366_11_16, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_17, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0, &direction_bossdailfall_3366_11_0};
static Animation * anim_array_bossdailfall_3366[12] = {&anim_bossdailfall_3366_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossdailfall_3366_7, NULL, NULL, &anim_bossdailfall_3366_10, &anim_bossdailfall_3366_11};
static Animations anim_bossdailfall_3366 = {12, &anim_array_bossdailfall_3366[0]};
static bool anim_bossdailfall_3366_initialized;
class BossDailFall_3366 : public Active
{
public:
    BossDailFall_3366(int x, int y) : Active(x, y, BossDailFall_3366_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_DailFall", 13);
#endif
        set_visible(false);
        this->animations = &anim_bossdailfall_3366;
        if (!anim_bossdailfall_3366_initialized) {
            anim_bossdailfall_3366_initialized = true;
            images_bossdailfall_3366_0_0[0] = get_internal_image(15561);
            images_bossdailfall_3366_0_8[0] = get_internal_image(6055);
            images_bossdailfall_3366_0_8[1] = get_internal_image(13975);
            images_bossdailfall_3366_0_8[2] = get_internal_image(13984);
            images_bossdailfall_3366_0_16[0] = get_internal_image(15563);
            images_bossdailfall_3366_7_0[0] = get_internal_image(15569);
            images_bossdailfall_3366_10_0[0] = get_internal_image(15565);
            images_bossdailfall_3366_10_0[1] = get_internal_image(15566);
            images_bossdailfall_3366_10_16[0] = get_internal_image(15567);
            images_bossdailfall_3366_10_16[1] = get_internal_image(15568);
            images_bossdailfall_3366_11_0[0] = get_internal_image(15531);
            images_bossdailfall_3366_11_0[1] = get_internal_image(15532);
            images_bossdailfall_3366_11_0[2] = get_internal_image(15533);
            images_bossdailfall_3366_11_0[3] = get_internal_image(15534);
            images_bossdailfall_3366_11_0[4] = get_internal_image(15535);
            images_bossdailfall_3366_11_1[0] = get_internal_image(14094);
            images_bossdailfall_3366_11_8[0] = get_internal_image(6055);
            images_bossdailfall_3366_11_8[1] = get_internal_image(15562);
            images_bossdailfall_3366_11_16[0] = get_internal_image(15537);
            images_bossdailfall_3366_11_16[1] = get_internal_image(15541);
            images_bossdailfall_3366_11_16[2] = get_internal_image(15543);
            images_bossdailfall_3366_11_16[3] = get_internal_image(15544);
            images_bossdailfall_3366_11_16[4] = get_internal_image(15559);
            images_bossdailfall_3366_11_17[0] = get_internal_image(14095);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 1952);
    }
};
FrameObject * create_bossdailfall_3366(int x, int y)
{
    return new (Active::pool.create()) BossDailFall_3366(x, y);
}
static Image* images_device_3367_0_0[2];
static Direction direction_device_3367_0_0 = {0, 10, 10, 0, -1, images_device_3367_0_0, 2};
static Animation anim_device_3367_0 = {&direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, NULL, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0, &direction_device_3367_0_0};
static Animation * anim_array_device_3367[1] = {&anim_device_3367_0};
static Animations anim_device_3367 = {1, &anim_array_device_3367[0]};
static bool anim_device_3367_initialized;
class Device_3367 : public Active
{
public:
    Device_3367(int x, int y) : Active(x, y, Device_3367_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Device", 6);
#endif
        set_visible(false);
        this->animations = &anim_device_3367;
        if (!anim_device_3367_initialized) {
            anim_device_3367_initialized = true;
            images_device_3367_0_0[0] = get_internal_image(15379);
            images_device_3367_0_0[1] = get_internal_image(15380);
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
FrameObject * create_device_3367(int x, int y)
{
    return new (Active::pool.create()) Device_3367(x, y);
}
static Image* images_active_3368_0_0[1];
static Direction direction_active_3368_0_0 = {0, 50, 50, 0, 1, images_active_3368_0_0, 1};
static Animation anim_active_3368_0 = {&direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, NULL, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0, &direction_active_3368_0_0};
static Animation * anim_array_active_3368[1] = {&anim_active_3368_0};
static Animations anim_active_3368 = {1, &anim_array_active_3368[0]};
static bool anim_active_3368_initialized;
class Active_3368 : public Active
{
public:
    Active_3368(int x, int y) : Active(x, y, Active_3368_type)
    {
        // qualifiers: 19, 21
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_3368;
        if (!anim_active_3368_initialized) {
            anim_active_3368_initialized = true;
            images_active_3368_0_0[0] = get_internal_image(3741);
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
FrameObject * create_active_3368(int x, int y)
{
    return new (Active::pool.create()) Active_3368(x, y);
}
class DialogData_3369 : public Text
{
public:
    DialogData_3369(int x, int y) : Text(x, y, DialogData_3369_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("11 00 da_05_01 It seems that I have underestimated your strength. Not this time!", 80));
        add_line(std::string("01 00 li_39_01 Do your worst!", 29));
        add_line(std::string("05 00 to_23_01 We've beaten you before and we'll beat you again!", 64));
        add_line(std::string("02 00 ca_33_01 Yeah, what are you gonna do\? Throw robots at us\? Giant robots with lasers in their buttcheeks maybe\?", 115));
        add_line(std::string("02 00 ca_33_02 ...Oh.", 21));
        add_line(std::string("01 00 li_39_02 Carol, you jinxed us!", 36));
        add_line(std::string("02 00 ca_33_03 So did you and Torque!", 37));
        add_line(std::string("03 00 mi_24_01 Is anyone else feeling a little scared right now\?", 64));
        add_line(std::string("11 00 da_05_02 It's such a shame that you chose the wrong side. Enjoy the last few minutes of your pathetic lives!", 114));
        add_line(std::string("03 00 mi_25_01 LOOK OUT!", 24));
        add_line(std::string("02 00 ca_34_01 Y'know, for once I'm actually glad to see you show up.", 69));
        add_line(std::string("01 09 li_40_01 Spade!", 21));
        add_line(std::string("04 00 sp_05_01 I hate to disappoint you, but I'm just passing through. Have fun saving the world.", 97));
        add_line(std::string("01 66 li_40_02 Look, I'm sorry, okay\?! I was scared! I didn't know what I was doing!", 84));
        add_line(std::string("04 00 sp_05_02 You still don't.", 31));
        add_line(std::string("12 00 br_pa_00 ATTENTION TROOPS! PREPARE FOR LIFTOFF!", 53));
        add_line(std::string("05 00 to_24_01 Listen, guys... I'll go in alone while you help the General take back the city.", 94));
        add_line(std::string("03 00 mi_25_02 Why can't we go in together\?", 43));
        add_line(std::string("05 00 to_24_02 It'll be easier this way. Trust me.", 50));
        add_line(std::string("02 00 ca_35_01 But they'll have a harder time catching us if we stick together.", 79));
        add_line(std::string("05 15 to_24_03 But that's what Brevon's expecting us to do.", 59));
        add_line(std::string("01 00 li_41_01 Then let me go instead. You're too important to the mission.", 75));
        add_line(std::string("05 48 to_24_04 I CAN'T LOSE ANOTHER CREW!", 41));
        add_line(std::string("05 09 to_24_05 If something happens to you, I'm... I'm not strong enough to save you.", 85));
        add_line(std::string("03 00 mi_25_03 We'll be strong for you!", 39));
        add_line(std::string("01 24 li_41_02 We said we were gonna help you get back the stone. We still mean it.", 83));
        add_line(std::string("02 00 ca_35_02 Yeah, you're stuck with us buddy, whether you like it or not.", 76));
        add_line(std::string("05 00 to_24_06 As soon as you step foot into that Dreadnought, you may never come out again.", 92));
        add_line(std::string("05 00 to_24_07 Are you ready to make that sacrifice\?", 52));
        add_line(std::string("02 15 ca_35_03 Yeah, whatever, let's go! We're wasting time.", 60));
        add_line(std::string("05 21 to_24_08 Alright. Here's the plan.", 40));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
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
FrameObject * create_dialogdata_3369(int x, int y)
{
    return new (Text::pool.create()) DialogData_3369(x, y);
}
class LevelParallaxPiece2_3370 : public SystemBox
{
public:
    LevelParallaxPiece2_3370(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3370_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 238;
        type = PATTERN_IMAGE;
        image = get_internal_image(2941);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3370(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3370(x, y);
}
class LevelParallaxPiece1_3371 : public SystemBox
{
public:
    LevelParallaxPiece1_3371(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3371_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 238;
        type = PATTERN_IMAGE;
        image = get_internal_image(2940);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3371(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3371(x, y);
}
class LevelParallaxPiece0_3372 : public SystemBox
{
public:
    LevelParallaxPiece0_3372(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3372_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 960;
        height = 248;
        type = PATTERN_IMAGE;
        image = get_internal_image(3733);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3372(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3372(x, y);
}
class LevelParallaxPiece10_3373 : public SystemBox
{
public:
    LevelParallaxPiece10_3373(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_3373_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 96;
        type = PATTERN_IMAGE;
        image = get_internal_image(1376);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_3373(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_3373(x, y);
}
static Image* images_breakablefdhangarwallpiece_3374_0_0[1];
static Direction direction_breakablefdhangarwallpiece_3374_0_0 = {0, 50, 50, 0, 1, images_breakablefdhangarwallpiece_3374_0_0, 1};
static Animation anim_breakablefdhangarwallpiece_3374_0 = {&direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, NULL, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0, &direction_breakablefdhangarwallpiece_3374_0_0};
static Animation * anim_array_breakablefdhangarwallpiece_3374[1] = {&anim_breakablefdhangarwallpiece_3374_0};
static Animations anim_breakablefdhangarwallpiece_3374 = {1, &anim_array_breakablefdhangarwallpiece_3374[0]};
static bool anim_breakablefdhangarwallpiece_3374_initialized;
class BreakableFDHangarWallPiece_3374 : public Active
{
public:
    BreakableFDHangarWallPiece_3374(int x, int y) : Active(x, y, BreakableFDHangarWallPiece_3374_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableFDHangarWall_Piece", 27);
#endif
        this->animations = &anim_breakablefdhangarwallpiece_3374;
        if (!anim_breakablefdhangarwallpiece_3374_initialized) {
            anim_breakablefdhangarwallpiece_3374_initialized = true;
            images_breakablefdhangarwallpiece_3374_0_0[0] = get_internal_image(12663);
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
FrameObject * create_breakablefdhangarwallpiece_3374(int x, int y)
{
    return new (Active::pool.create()) BreakableFDHangarWallPiece_3374(x, y);
}
static Image* images_hazardspiralspark_3375_0_0[8];
static Direction direction_hazardspiralspark_3375_0_0 = {0, 50, 50, 0, -1, images_hazardspiralspark_3375_0_0, 8};
static Animation anim_hazardspiralspark_3375_0 = {&direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, NULL, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0, &direction_hazardspiralspark_3375_0_0};
static Animation * anim_array_hazardspiralspark_3375[1] = {&anim_hazardspiralspark_3375_0};
static Animations anim_hazardspiralspark_3375 = {1, &anim_array_hazardspiralspark_3375[0]};
static bool anim_hazardspiralspark_3375_initialized;
class HazardSpiralSpark_3375 : public Active
{
public:
    HazardSpiralSpark_3375(int x, int y) : Active(x, y, HazardSpiralSpark_3375_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_SpiralSpark", 18);
#endif
        this->animations = &anim_hazardspiralspark_3375;
        if (!anim_hazardspiralspark_3375_initialized) {
            anim_hazardspiralspark_3375_initialized = true;
            images_hazardspiralspark_3375_0_0[0] = get_internal_image(3972);
            images_hazardspiralspark_3375_0_0[1] = get_internal_image(3816);
            images_hazardspiralspark_3375_0_0[2] = get_internal_image(14161);
            images_hazardspiralspark_3375_0_0[3] = get_internal_image(14174);
            images_hazardspiralspark_3375_0_0[4] = get_internal_image(14162);
            images_hazardspiralspark_3375_0_0[5] = get_internal_image(14174);
            images_hazardspiralspark_3375_0_0[6] = get_internal_image(14161);
            images_hazardspiralspark_3375_0_0[7] = get_internal_image(3816);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -4);
    }
};
FrameObject * create_hazardspiralspark_3375(int x, int y)
{
    return new (Active::pool.create()) HazardSpiralSpark_3375(x, y);
}
static Image* images_fdjumbotron_3376_0_0[1];
static Direction direction_fdjumbotron_3376_0_0 = {0, 50, 50, 0, 1, images_fdjumbotron_3376_0_0, 1};
static Animation anim_fdjumbotron_3376_0 = {&direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, NULL, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0, &direction_fdjumbotron_3376_0_0};
static Animation * anim_array_fdjumbotron_3376[1] = {&anim_fdjumbotron_3376_0};
static Animations anim_fdjumbotron_3376 = {1, &anim_array_fdjumbotron_3376[0]};
static bool anim_fdjumbotron_3376_initialized;
class FDJumbotron_3376 : public Active
{
public:
    FDJumbotron_3376(int x, int y) : Active(x, y, FDJumbotron_3376_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_Jumbotron", 12);
#endif
        this->animations = &anim_fdjumbotron_3376;
        if (!anim_fdjumbotron_3376_initialized) {
            anim_fdjumbotron_3376_initialized = true;
            images_fdjumbotron_3376_0_0[0] = get_internal_image(3737);
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
FrameObject * create_fdjumbotron_3376(int x, int y)
{
    return new (Active::pool.create()) FDJumbotron_3376(x, y);
}
static Image* images_fdjumbotron2_3377_0_0[6];
static Direction direction_fdjumbotron2_3377_0_0 = {0, 50, 50, 0, -1, images_fdjumbotron2_3377_0_0, 6};
static Animation anim_fdjumbotron2_3377_0 = {&direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, NULL, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0, &direction_fdjumbotron2_3377_0_0};
static Image* images_fdjumbotron2_3377_7_0[4];
static Direction direction_fdjumbotron2_3377_7_0 = {0, 0, 0, 0, 1, images_fdjumbotron2_3377_7_0, 4};
static Animation anim_fdjumbotron2_3377_7 = {&direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, NULL, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0, &direction_fdjumbotron2_3377_7_0};
static Animation * anim_array_fdjumbotron2_3377[8] = {&anim_fdjumbotron2_3377_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_fdjumbotron2_3377_7};
static Animations anim_fdjumbotron2_3377 = {8, &anim_array_fdjumbotron2_3377[0]};
static bool anim_fdjumbotron2_3377_initialized;
class FDJumbotron2_3377 : public Active
{
public:
    FDJumbotron2_3377(int x, int y) : Active(x, y, FDJumbotron2_3377_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD_Jumbotron 2", 14);
#endif
        set_visible(false);
        this->animations = &anim_fdjumbotron2_3377;
        if (!anim_fdjumbotron2_3377_initialized) {
            anim_fdjumbotron2_3377_initialized = true;
            images_fdjumbotron2_3377_0_0[0] = get_internal_image(15134);
            images_fdjumbotron2_3377_0_0[1] = get_internal_image(15135);
            images_fdjumbotron2_3377_0_0[2] = get_internal_image(15136);
            images_fdjumbotron2_3377_0_0[3] = get_internal_image(15137);
            images_fdjumbotron2_3377_0_0[4] = get_internal_image(15138);
            images_fdjumbotron2_3377_0_0[5] = get_internal_image(15139);
            images_fdjumbotron2_3377_7_0[0] = get_internal_image(3430);
            images_fdjumbotron2_3377_7_0[1] = get_internal_image(3846);
            images_fdjumbotron2_3377_7_0[2] = get_internal_image(4025);
            images_fdjumbotron2_3377_7_0[3] = get_internal_image(4033);
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
FrameObject * create_fdjumbotron2_3377(int x, int y)
{
    return new (Active::pool.create()) FDJumbotron2_3377(x, y);
}
static Image* images_backgroundspawner_3378_0_0[1];
static Direction direction_backgroundspawner_3378_0_0 = {0, 50, 50, 0, 1, images_backgroundspawner_3378_0_0, 1};
static Animation anim_backgroundspawner_3378_0 = {&direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, NULL, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0, &direction_backgroundspawner_3378_0_0};
static Animation * anim_array_backgroundspawner_3378[1] = {&anim_backgroundspawner_3378_0};
static Animations anim_backgroundspawner_3378 = {1, &anim_array_backgroundspawner_3378[0]};
static bool anim_backgroundspawner_3378_initialized;
class BackgroundSpawner_3378 : public Active
{
public:
    BackgroundSpawner_3378(int x, int y) : Active(x, y, BackgroundSpawner_3378_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BackgroundSpawner", 17);
#endif
        this->animations = &anim_backgroundspawner_3378;
        if (!anim_backgroundspawner_3378_initialized) {
            anim_backgroundspawner_3378_initialized = true;
            images_backgroundspawner_3378_0_0[0] = get_internal_image(15094);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 140);
    }
};
FrameObject * create_backgroundspawner_3378(int x, int y)
{
    return new (Active::pool.create()) BackgroundSpawner_3378(x, y);
}
class LevelParallaxPiece7_3379 : public SystemBox
{
public:
    LevelParallaxPiece7_3379(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_3379_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 40;
        type = PATTERN_IMAGE;
        image = get_internal_image(1607);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_3379(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_3379(x, y);
}
class LevelParallaxPiece11_3380 : public SystemBox
{
public:
    LevelParallaxPiece11_3380(int x, int y) : SystemBox(x, y, LevelParallaxPiece11_3380_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 11", 23);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(8609);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece11_3380(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece11_3380(x, y);
}
class FDHangarSilo_3381 : public Backdrop
{
public:
    FDHangarSilo_3381(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarSilo", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13588);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdhangarsilo_3381(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarSilo_3381(x, y);
}
class FDBack2_3382 : public Backdrop
{
public:
    FDBack2_3382(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Back 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13628);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdback2_3382(int x, int y)
{
    return new (Backdrop::pool.create()) FDBack2_3382(x, y);
}
class FDBack1_3383 : public Backdrop
{
public:
    FDBack1_3383(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Back 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13629);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdback1_3383(int x, int y)
{
    return new (Backdrop::pool.create()) FDBack1_3383(x, y);
}
class FDHalfpipe1_3384 : public Backdrop
{
public:
    FDHalfpipe1_3384(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Halfpipe1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10160);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdhalfpipe1_3384(int x, int y)
{
    return new (Backdrop::pool.create()) FDHalfpipe1_3384(x, y);
}
class FDHalfpipe2_3385 : public Backdrop
{
public:
    FDHalfpipe2_3385(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Halfpipe2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10161);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdhalfpipe2_3385(int x, int y)
{
    return new (Backdrop::pool.create()) FDHalfpipe2_3385(x, y);
}
class FDHalfpipe3_3386 : public Backdrop
{
public:
    FDHalfpipe3_3386(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Halfpipe3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10651);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdhalfpipe3_3386(int x, int y)
{
    return new (Backdrop::pool.create()) FDHalfpipe3_3386(x, y);
}
static Image* images_breakablefdhangarwall_3387_0_0[1];
static Direction direction_breakablefdhangarwall_3387_0_0 = {0, 50, 50, 0, 1, images_breakablefdhangarwall_3387_0_0, 1};
static Image* images_breakablefdhangarwall_3387_0_8[1];
static Direction direction_breakablefdhangarwall_3387_0_8 = {8, 50, 50, 0, 1, images_breakablefdhangarwall_3387_0_8, 1};
static Animation anim_breakablefdhangarwall_3387_0 = {&direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, NULL, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, &direction_breakablefdhangarwall_3387_0_8, NULL, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0, &direction_breakablefdhangarwall_3387_0_0};
static Animation * anim_array_breakablefdhangarwall_3387[1] = {&anim_breakablefdhangarwall_3387_0};
static Animations anim_breakablefdhangarwall_3387 = {1, &anim_array_breakablefdhangarwall_3387[0]};
static bool anim_breakablefdhangarwall_3387_initialized;
class BreakableFDHangarWall_3387 : public Active
{
public:
    BreakableFDHangarWall_3387(int x, int y) : Active(x, y, BreakableFDHangarWall_3387_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableFDHangarWall", 21);
#endif
        this->animations = &anim_breakablefdhangarwall_3387;
        if (!anim_breakablefdhangarwall_3387_initialized) {
            anim_breakablefdhangarwall_3387_initialized = true;
            images_breakablefdhangarwall_3387_0_0[0] = get_internal_image(12624);
            images_breakablefdhangarwall_3387_0_8[0] = get_internal_image(1570);
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
FrameObject * create_breakablefdhangarwall_3387(int x, int y)
{
    return new (Active::pool.create()) BreakableFDHangarWall_3387(x, y);
}
static Image* images_hazardzapbeam_3388_0_0[1];
static Direction direction_hazardzapbeam_3388_0_0 = {0, 50, 50, 0, -1, images_hazardzapbeam_3388_0_0, 1};
static Image* images_hazardzapbeam_3388_0_1[6];
static Direction direction_hazardzapbeam_3388_0_1 = {1, 50, 50, 0, -1, images_hazardzapbeam_3388_0_1, 6};
static Animation anim_hazardzapbeam_3388_0 = {&direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_1, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0, &direction_hazardzapbeam_3388_0_0};
static Animation * anim_array_hazardzapbeam_3388[1] = {&anim_hazardzapbeam_3388_0};
static Animations anim_hazardzapbeam_3388 = {1, &anim_array_hazardzapbeam_3388[0]};
static bool anim_hazardzapbeam_3388_initialized;
class HazardZapBeam_3388 : public Active
{
public:
    HazardZapBeam_3388(int x, int y) : Active(x, y, HazardZapBeam_3388_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ZapBeam", 14);
#endif
        this->animations = &anim_hazardzapbeam_3388;
        if (!anim_hazardzapbeam_3388_initialized) {
            anim_hazardzapbeam_3388_initialized = true;
            images_hazardzapbeam_3388_0_0[0] = get_internal_image(14160);
            images_hazardzapbeam_3388_0_1[0] = get_internal_image(13632);
            images_hazardzapbeam_3388_0_1[1] = get_internal_image(14157);
            images_hazardzapbeam_3388_0_1[2] = get_internal_image(14158);
            images_hazardzapbeam_3388_0_1[3] = get_internal_image(3974);
            images_hazardzapbeam_3388_0_1[4] = get_internal_image(14130);
            images_hazardzapbeam_3388_0_1[5] = get_internal_image(14159);
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
FrameObject * create_hazardzapbeam_3388(int x, int y)
{
    return new (Active::pool.create()) HazardZapBeam_3388(x, y);
}
class FDHangarWall3_3389 : public Backdrop
{
public:
    FDHangarWall3_3389(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarWall 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13545);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarwall3_3389(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarWall3_3389(x, y);
}
class FDHangarFloor4_3390 : public Backdrop
{
public:
    FDHangarFloor4_3390(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11680);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor4_3390(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor4_3390(x, y);
}
class FDHangarWall5_3391 : public Backdrop
{
public:
    FDHangarWall5_3391(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarWall 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14309);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarwall5_3391(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarWall5_3391(x, y);
}
class FDHangarWall1_3392 : public Backdrop
{
public:
    FDHangarWall1_3392(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarWall 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13523);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarwall1_3392(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarWall1_3392(x, y);
}
class FDHangarWall2_3393 : public Backdrop
{
public:
    FDHangarWall2_3393(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarWall 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13549);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarwall2_3393(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarWall2_3393(x, y);
}
class FDHangarFloor8_3394 : public Backdrop
{
public:
    FDHangarFloor8_3394(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 8", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3232);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor8_3394(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor8_3394(x, y);
}
class FDHangarWall4_3395 : public Backdrop
{
public:
    FDHangarWall4_3395(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarWall 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14304);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarwall4_3395(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarWall4_3395(x, y);
}
class FDHangarFloor1_3396 : public Backdrop
{
public:
    FDHangarFloor1_3396(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12770);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor1_3396(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor1_3396(x, y);
}
class FDHangarFloor2_3397 : public Backdrop
{
public:
    FDHangarFloor2_3397(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2948);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor2_3397(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor2_3397(x, y);
}
class FDHangarFloor5_3398 : public Backdrop
{
public:
    FDHangarFloor5_3398(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 5", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10652);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor5_3398(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor5_3398(x, y);
}
class FDHangarFloor7_3399 : public Backdrop
{
public:
    FDHangarFloor7_3399(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 7", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3684);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor7_3399(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor7_3399(x, y);
}
class FDHangarFloor6_3400 : public Backdrop
{
public:
    FDHangarFloor6_3400(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 6", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11705);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor6_3400(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor6_3400(x, y);
}
class FDHangarFloor3_3401 : public Backdrop
{
public:
    FDHangarFloor3_3401(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2946);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor3_3401(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor3_3401(x, y);
}
class FDHangarFloor9_3402 : public Backdrop
{
public:
    FDHangarFloor9_3402(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 9", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12603);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarfloor9_3402(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor9_3402(x, y);
}
class FDHangarFloor10_3403 : public Backdrop
{
public:
    FDHangarFloor10_3403(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 10", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4030);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor10_3403(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor10_3403(x, y);
}
class FDHangarFloor11_3404 : public Backdrop
{
public:
    FDHangarFloor11_3404(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 11", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3182);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdhangarfloor11_3404(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor11_3404(x, y);
}
class FDSpiralSparkTower_3405 : public Backdrop
{
public:
    FDSpiralSparkTower_3405(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_SpiralSparkTower", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3975);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdspiralsparktower_3405(int x, int y)
{
    return new (Backdrop::pool.create()) FDSpiralSparkTower_3405(x, y);
}
class FDLaserCannonLeft_3406 : public Backdrop
{
public:
    FDLaserCannonLeft_3406(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LaserCannonLeft", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3971);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlasercannonleft_3406(int x, int y)
{
    return new (Backdrop::pool.create()) FDLaserCannonLeft_3406(x, y);
}
class FDHangarFloor12_3407 : public Backdrop
{
public:
    FDHangarFloor12_3407(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 12", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7058);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarfloor12_3407(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor12_3407(x, y);
}
class FDHangarFloor13_3408 : public Backdrop
{
public:
    FDHangarFloor13_3408(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarFloor 13", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7060);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarfloor13_3408(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarFloor13_3408(x, y);
}
class FDDownhillPlatformRail_3409 : public Backdrop
{
public:
    FDDownhillPlatformRail_3409(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DownhillPlatformRail", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9062);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fddownhillplatformrail_3409(int x, int y)
{
    return new (Backdrop::pool.create()) FDDownhillPlatformRail_3409(x, y);
}
class FDHangarCurve2_3410 : public Backdrop
{
public:
    FDHangarCurve2_3410(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarCurve 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14373);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarcurve2_3410(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarCurve2_3410(x, y);
}
class FDHangarCurve4_3411 : public Backdrop
{
public:
    FDHangarCurve4_3411(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_HangarCurve 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14807);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdhangarcurve4_3411(int x, int y)
{
    return new (Backdrop::pool.create()) FDHangarCurve4_3411(x, y);
}
static Image* images_objecttransporterstart_3412_0_0[6];
static Direction direction_objecttransporterstart_3412_0_0 = {0, 35, 35, 0, -1, images_objecttransporterstart_3412_0_0, 6};
static Animation anim_objecttransporterstart_3412_0 = {&direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, NULL, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0, &direction_objecttransporterstart_3412_0_0};
static Animation * anim_array_objecttransporterstart_3412[1] = {&anim_objecttransporterstart_3412_0};
static Animations anim_objecttransporterstart_3412 = {1, &anim_array_objecttransporterstart_3412[0]};
static bool anim_objecttransporterstart_3412_initialized;
class ObjectTransporterStart_3412 : public Active
{
public:
    ObjectTransporterStart_3412(int x, int y) : Active(x, y, ObjectTransporterStart_3412_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TransporterStart", 23);
#endif
        this->animations = &anim_objecttransporterstart_3412;
        if (!anim_objecttransporterstart_3412_initialized) {
            anim_objecttransporterstart_3412_initialized = true;
            images_objecttransporterstart_3412_0_0[0] = get_internal_image(13625);
            images_objecttransporterstart_3412_0_0[1] = get_internal_image(13610);
            images_objecttransporterstart_3412_0_0[2] = get_internal_image(3214);
            images_objecttransporterstart_3412_0_0[3] = get_internal_image(3231);
            images_objecttransporterstart_3412_0_0[4] = get_internal_image(3214);
            images_objecttransporterstart_3412_0_0[5] = get_internal_image(13610);
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
FrameObject * create_objecttransporterstart_3412(int x, int y)
{
    return new (Active::pool.create()) ObjectTransporterStart_3412(x, y);
}
static Image* images_gimmickdownhillplatformwheel_3413_0_0[1];
static Direction direction_gimmickdownhillplatformwheel_3413_0_0 = {0, 50, 50, 0, 1, images_gimmickdownhillplatformwheel_3413_0_0, 1};
static Image* images_gimmickdownhillplatformwheel_3413_0_1[1];
static Direction direction_gimmickdownhillplatformwheel_3413_0_1 = {1, 50, 50, 0, 1, images_gimmickdownhillplatformwheel_3413_0_1, 1};
static Animation anim_gimmickdownhillplatformwheel_3413_0 = {&direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_1, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0, &direction_gimmickdownhillplatformwheel_3413_0_0};
static Animation * anim_array_gimmickdownhillplatformwheel_3413[1] = {&anim_gimmickdownhillplatformwheel_3413_0};
static Animations anim_gimmickdownhillplatformwheel_3413 = {1, &anim_array_gimmickdownhillplatformwheel_3413[0]};
static bool anim_gimmickdownhillplatformwheel_3413_initialized;
class GimmickDownhillPlatformWheel_3413 : public Active
{
public:
    GimmickDownhillPlatformWheel_3413(int x, int y) : Active(x, y, GimmickDownhillPlatformWheel_3413_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_DownhillPlatformWheel", 29);
#endif
        this->animations = &anim_gimmickdownhillplatformwheel_3413;
        if (!anim_gimmickdownhillplatformwheel_3413_initialized) {
            anim_gimmickdownhillplatformwheel_3413_initialized = true;
            images_gimmickdownhillplatformwheel_3413_0_0[0] = get_internal_image(8582);
            images_gimmickdownhillplatformwheel_3413_0_1[0] = get_internal_image(8607);
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
FrameObject * create_gimmickdownhillplatformwheel_3413(int x, int y)
{
    return new (Active::pool.create()) GimmickDownhillPlatformWheel_3413(x, y);
}
