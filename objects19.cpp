#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class VerticalHalfPipe5_1810 : public Backdrop
{
public:
    VerticalHalfPipe5_1810(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 5", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8337);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe5_1810(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe5_1810(x, y);
}
class VerticalHalfPipe6_1811 : public Backdrop
{
public:
    VerticalHalfPipe6_1811(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 6", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8338);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe6_1811(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe6_1811(x, y);
}
class FNLockedBike_1812 : public Backdrop
{
public:
    FNLockedBike_1812(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_LockedBike", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1414);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnlockedbike_1812(int x, int y)
{
    return new (Backdrop::pool.create()) FNLockedBike_1812(x, y);
}
class Floor37_1813 : public Backdrop
{
public:
    Floor37_1813(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 37", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7106);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor37_1813(int x, int y)
{
    return new (Backdrop::pool.create()) Floor37_1813(x, y);
}
class FNBigSign1_1814 : public Backdrop
{
public:
    FNBigSign1_1814(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BigSign1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7479);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbigsign1_1814(int x, int y)
{
    return new (Backdrop::pool.create()) FNBigSign1_1814(x, y);
}
class FNBigSign2_1815 : public Backdrop
{
public:
    FNBigSign2_1815(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BigSign2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7480);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbigsign2_1815(int x, int y)
{
    return new (Backdrop::pool.create()) FNBigSign2_1815(x, y);
}
class BigSign3_1816 : public Backdrop
{
public:
    BigSign3_1816(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Big sign 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(641);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bigsign3_1816(int x, int y)
{
    return new (Backdrop::pool.create()) BigSign3_1816(x, y);
}
class BigSign4_1817 : public Backdrop
{
public:
    BigSign4_1817(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Big sign 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1224);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bigsign4_1817(int x, int y)
{
    return new (Backdrop::pool.create()) BigSign4_1817(x, y);
}
static Image* images_leveltrolleyplatform_1818_0_0[1];
static Direction direction_leveltrolleyplatform_1818_0_0 = {0, 50, 50, 0, 1, images_leveltrolleyplatform_1818_0_0, 1};
static Animation anim_leveltrolleyplatform_1818_0 = {&direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, NULL, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0, &direction_leveltrolleyplatform_1818_0_0};
static Animation * anim_array_leveltrolleyplatform_1818[1] = {&anim_leveltrolleyplatform_1818_0};
static Animations anim_leveltrolleyplatform_1818 = {1, &anim_array_leveltrolleyplatform_1818[0]};
static bool anim_leveltrolleyplatform_1818_initialized;
class LevelTrolleyPlatform_1818 : public Active
{
public:
    LevelTrolleyPlatform_1818(int x, int y) : Active(x, y, LevelTrolleyPlatform_1818_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_TrolleyPlatform", 21);
#endif
        set_visible(false);
        this->animations = &anim_leveltrolleyplatform_1818;
        if (!anim_leveltrolleyplatform_1818_initialized) {
            anim_leveltrolleyplatform_1818_initialized = true;
            images_leveltrolleyplatform_1818_0_0[0] = get_internal_image(6689);
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
FrameObject * create_leveltrolleyplatform_1818(int x, int y)
{
    return new (Active::pool.create()) LevelTrolleyPlatform_1818(x, y);
}
static Image* images_leveltrolleyplatform2_1819_0_0[1];
static Direction direction_leveltrolleyplatform2_1819_0_0 = {0, 50, 50, 0, 1, images_leveltrolleyplatform2_1819_0_0, 1};
static Animation anim_leveltrolleyplatform2_1819_0 = {&direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, NULL, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0, &direction_leveltrolleyplatform2_1819_0_0};
static Animation * anim_array_leveltrolleyplatform2_1819[1] = {&anim_leveltrolleyplatform2_1819_0};
static Animations anim_leveltrolleyplatform2_1819 = {1, &anim_array_leveltrolleyplatform2_1819[0]};
static bool anim_leveltrolleyplatform2_1819_initialized;
class LevelTrolleyPlatform2_1819 : public Active
{
public:
    LevelTrolleyPlatform2_1819(int x, int y) : Active(x, y, LevelTrolleyPlatform2_1819_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_TrolleyPlatform 2", 23);
#endif
        set_visible(false);
        this->animations = &anim_leveltrolleyplatform2_1819;
        if (!anim_leveltrolleyplatform2_1819_initialized) {
            anim_leveltrolleyplatform2_1819_initialized = true;
            images_leveltrolleyplatform2_1819_0_0[0] = get_internal_image(6740);
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
FrameObject * create_leveltrolleyplatform2_1819(int x, int y)
{
    return new (Active::pool.create()) LevelTrolleyPlatform2_1819(x, y);
}
static Image* images_enemyflarecannon_1820_0_0[7];
static Direction direction_enemyflarecannon_1820_0_0 = {0, 20, 20, 0, -1, images_enemyflarecannon_1820_0_0, 7};
static Animation anim_enemyflarecannon_1820_0 = {&direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, NULL, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0, &direction_enemyflarecannon_1820_0_0};
static Image* images_enemyflarecannon_1820_7_0[22];
static Direction direction_enemyflarecannon_1820_7_0 = {0, 25, 25, 0, 1, images_enemyflarecannon_1820_7_0, 22};
static Animation anim_enemyflarecannon_1820_7 = {&direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, NULL, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0, &direction_enemyflarecannon_1820_7_0};
static Image* images_enemyflarecannon_1820_8_0[1];
static Direction direction_enemyflarecannon_1820_8_0 = {0, 50, 50, 0, -1, images_enemyflarecannon_1820_8_0, 1};
static Animation anim_enemyflarecannon_1820_8 = {&direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, NULL, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0, &direction_enemyflarecannon_1820_8_0};
static Animation * anim_array_enemyflarecannon_1820[9] = {&anim_enemyflarecannon_1820_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyflarecannon_1820_7, &anim_enemyflarecannon_1820_8};
static Animations anim_enemyflarecannon_1820 = {9, &anim_array_enemyflarecannon_1820[0]};
static bool anim_enemyflarecannon_1820_initialized;
class EnemyFlareCannon_1820 : public Active
{
public:
    EnemyFlareCannon_1820(int x, int y) : Active(x, y, EnemyFlareCannon_1820_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_FlareCannon", 17);
#endif
        this->animations = &anim_enemyflarecannon_1820;
        if (!anim_enemyflarecannon_1820_initialized) {
            anim_enemyflarecannon_1820_initialized = true;
            images_enemyflarecannon_1820_0_0[0] = get_internal_image(13224);
            images_enemyflarecannon_1820_0_0[1] = get_internal_image(13242);
            images_enemyflarecannon_1820_0_0[2] = get_internal_image(13225);
            images_enemyflarecannon_1820_0_0[3] = get_internal_image(13226);
            images_enemyflarecannon_1820_0_0[4] = get_internal_image(13227);
            images_enemyflarecannon_1820_0_0[5] = get_internal_image(13243);
            images_enemyflarecannon_1820_0_0[6] = get_internal_image(13244);
            images_enemyflarecannon_1820_7_0[0] = get_internal_image(13224);
            images_enemyflarecannon_1820_7_0[1] = get_internal_image(13229);
            images_enemyflarecannon_1820_7_0[2] = get_internal_image(13232);
            images_enemyflarecannon_1820_7_0[3] = get_internal_image(13233);
            images_enemyflarecannon_1820_7_0[4] = get_internal_image(13234);
            images_enemyflarecannon_1820_7_0[5] = get_internal_image(13233);
            images_enemyflarecannon_1820_7_0[6] = get_internal_image(13236);
            images_enemyflarecannon_1820_7_0[7] = get_internal_image(13233);
            images_enemyflarecannon_1820_7_0[8] = get_internal_image(13236);
            images_enemyflarecannon_1820_7_0[9] = get_internal_image(13233);
            images_enemyflarecannon_1820_7_0[10] = get_internal_image(13236);
            images_enemyflarecannon_1820_7_0[11] = get_internal_image(13233);
            images_enemyflarecannon_1820_7_0[12] = get_internal_image(13240);
            images_enemyflarecannon_1820_7_0[13] = get_internal_image(13237);
            images_enemyflarecannon_1820_7_0[14] = get_internal_image(13235);
            images_enemyflarecannon_1820_7_0[15] = get_internal_image(13228);
            images_enemyflarecannon_1820_7_0[16] = get_internal_image(13230);
            images_enemyflarecannon_1820_7_0[17] = get_internal_image(13230);
            images_enemyflarecannon_1820_7_0[18] = get_internal_image(13241);
            images_enemyflarecannon_1820_7_0[19] = get_internal_image(13238);
            images_enemyflarecannon_1820_7_0[20] = get_internal_image(13239);
            images_enemyflarecannon_1820_7_0[21] = get_internal_image(13224);
            images_enemyflarecannon_1820_8_0[0] = get_internal_image(13231);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 25);
    }
};
FrameObject * create_enemyflarecannon_1820(int x, int y)
{
    return new (Active::pool.create()) EnemyFlareCannon_1820(x, y);
}
static Image* images_gimmickverticalhalfpipe1_1821_0_0[1];
static Direction direction_gimmickverticalhalfpipe1_1821_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe1_1821_0_0, 1};
static Animation anim_gimmickverticalhalfpipe1_1821_0 = {&direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, NULL, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0, &direction_gimmickverticalhalfpipe1_1821_0_0};
static Animation * anim_array_gimmickverticalhalfpipe1_1821[1] = {&anim_gimmickverticalhalfpipe1_1821_0};
static Animations anim_gimmickverticalhalfpipe1_1821 = {1, &anim_array_gimmickverticalhalfpipe1_1821[0]};
static bool anim_gimmickverticalhalfpipe1_1821_initialized;
class GimmickVerticalHalfpipe1_1821 : public Active
{
public:
    GimmickVerticalHalfpipe1_1821(int x, int y) : Active(x, y, GimmickVerticalHalfpipe1_1821_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 1", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe1_1821;
        if (!anim_gimmickverticalhalfpipe1_1821_initialized) {
            anim_gimmickverticalhalfpipe1_1821_initialized = true;
            images_gimmickverticalhalfpipe1_1821_0_0[0] = get_internal_image(7082);
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
FrameObject * create_gimmickverticalhalfpipe1_1821(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe1_1821(x, y);
}
static Image* images_gimmickverticalhalfpipe4_1822_0_0[1];
static Direction direction_gimmickverticalhalfpipe4_1822_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe4_1822_0_0, 1};
static Animation anim_gimmickverticalhalfpipe4_1822_0 = {&direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, NULL, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0, &direction_gimmickverticalhalfpipe4_1822_0_0};
static Animation * anim_array_gimmickverticalhalfpipe4_1822[1] = {&anim_gimmickverticalhalfpipe4_1822_0};
static Animations anim_gimmickverticalhalfpipe4_1822 = {1, &anim_array_gimmickverticalhalfpipe4_1822[0]};
static bool anim_gimmickverticalhalfpipe4_1822_initialized;
class GimmickVerticalHalfpipe4_1822 : public Active
{
public:
    GimmickVerticalHalfpipe4_1822(int x, int y) : Active(x, y, GimmickVerticalHalfpipe4_1822_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 4", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe4_1822;
        if (!anim_gimmickverticalhalfpipe4_1822_initialized) {
            anim_gimmickverticalhalfpipe4_1822_initialized = true;
            images_gimmickverticalhalfpipe4_1822_0_0[0] = get_internal_image(7099);
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
FrameObject * create_gimmickverticalhalfpipe4_1822(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe4_1822(x, y);
}
static Image* images_gimmickverticalhalfpipe3_1823_0_0[1];
static Direction direction_gimmickverticalhalfpipe3_1823_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe3_1823_0_0, 1};
static Animation anim_gimmickverticalhalfpipe3_1823_0 = {&direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, NULL, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0, &direction_gimmickverticalhalfpipe3_1823_0_0};
static Animation * anim_array_gimmickverticalhalfpipe3_1823[1] = {&anim_gimmickverticalhalfpipe3_1823_0};
static Animations anim_gimmickverticalhalfpipe3_1823 = {1, &anim_array_gimmickverticalhalfpipe3_1823[0]};
static bool anim_gimmickverticalhalfpipe3_1823_initialized;
class GimmickVerticalHalfpipe3_1823 : public Active
{
public:
    GimmickVerticalHalfpipe3_1823(int x, int y) : Active(x, y, GimmickVerticalHalfpipe3_1823_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 3", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe3_1823;
        if (!anim_gimmickverticalhalfpipe3_1823_initialized) {
            anim_gimmickverticalhalfpipe3_1823_initialized = true;
            images_gimmickverticalhalfpipe3_1823_0_0[0] = get_internal_image(6949);
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
FrameObject * create_gimmickverticalhalfpipe3_1823(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe3_1823(x, y);
}
static Image* images_gimmickverticalhalfpipe6_1824_0_0[1];
static Direction direction_gimmickverticalhalfpipe6_1824_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe6_1824_0_0, 1};
static Animation anim_gimmickverticalhalfpipe6_1824_0 = {&direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, NULL, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0, &direction_gimmickverticalhalfpipe6_1824_0_0};
static Animation * anim_array_gimmickverticalhalfpipe6_1824[1] = {&anim_gimmickverticalhalfpipe6_1824_0};
static Animations anim_gimmickverticalhalfpipe6_1824 = {1, &anim_array_gimmickverticalhalfpipe6_1824[0]};
static bool anim_gimmickverticalhalfpipe6_1824_initialized;
class GimmickVerticalHalfpipe6_1824 : public Active
{
public:
    GimmickVerticalHalfpipe6_1824(int x, int y) : Active(x, y, GimmickVerticalHalfpipe6_1824_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 6", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe6_1824;
        if (!anim_gimmickverticalhalfpipe6_1824_initialized) {
            anim_gimmickverticalhalfpipe6_1824_initialized = true;
            images_gimmickverticalhalfpipe6_1824_0_0[0] = get_internal_image(7100);
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
FrameObject * create_gimmickverticalhalfpipe6_1824(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe6_1824(x, y);
}
static Image* images_gimmickverticalhalfpipe2_1825_0_0[1];
static Direction direction_gimmickverticalhalfpipe2_1825_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe2_1825_0_0, 1};
static Animation anim_gimmickverticalhalfpipe2_1825_0 = {&direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, NULL, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0, &direction_gimmickverticalhalfpipe2_1825_0_0};
static Animation * anim_array_gimmickverticalhalfpipe2_1825[1] = {&anim_gimmickverticalhalfpipe2_1825_0};
static Animations anim_gimmickverticalhalfpipe2_1825 = {1, &anim_array_gimmickverticalhalfpipe2_1825[0]};
static bool anim_gimmickverticalhalfpipe2_1825_initialized;
class GimmickVerticalHalfpipe2_1825 : public Active
{
public:
    GimmickVerticalHalfpipe2_1825(int x, int y) : Active(x, y, GimmickVerticalHalfpipe2_1825_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 2", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe2_1825;
        if (!anim_gimmickverticalhalfpipe2_1825_initialized) {
            anim_gimmickverticalhalfpipe2_1825_initialized = true;
            images_gimmickverticalhalfpipe2_1825_0_0[0] = get_internal_image(6911);
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
FrameObject * create_gimmickverticalhalfpipe2_1825(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe2_1825(x, y);
}
static Image* images_gimmickverticalhalfpipe5_1826_0_0[1];
static Direction direction_gimmickverticalhalfpipe5_1826_0_0 = {0, 50, 50, 0, 1, images_gimmickverticalhalfpipe5_1826_0_0, 1};
static Animation anim_gimmickverticalhalfpipe5_1826_0 = {&direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, NULL, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0, &direction_gimmickverticalhalfpipe5_1826_0_0};
static Animation * anim_array_gimmickverticalhalfpipe5_1826[1] = {&anim_gimmickverticalhalfpipe5_1826_0};
static Animations anim_gimmickverticalhalfpipe5_1826 = {1, &anim_array_gimmickverticalhalfpipe5_1826[0]};
static bool anim_gimmickverticalhalfpipe5_1826_initialized;
class GimmickVerticalHalfpipe5_1826 : public Active
{
public:
    GimmickVerticalHalfpipe5_1826(int x, int y) : Active(x, y, GimmickVerticalHalfpipe5_1826_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_VerticalHalfpipe 5", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickverticalhalfpipe5_1826;
        if (!anim_gimmickverticalhalfpipe5_1826_initialized) {
            anim_gimmickverticalhalfpipe5_1826_initialized = true;
            images_gimmickverticalhalfpipe5_1826_0_0[0] = get_internal_image(7098);
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
FrameObject * create_gimmickverticalhalfpipe5_1826(int x, int y)
{
    return new (Active::pool.create()) GimmickVerticalHalfpipe5_1826(x, y);
}
static Image* images_gimmickteetertotter_1827_0_0[1];
static Direction direction_gimmickteetertotter_1827_0_0 = {0, 50, 50, 0, 1, images_gimmickteetertotter_1827_0_0, 1};
static Image* images_gimmickteetertotter_1827_0_16[1];
static Direction direction_gimmickteetertotter_1827_0_16 = {16, 50, 50, 0, 1, images_gimmickteetertotter_1827_0_16, 1};
static Animation anim_gimmickteetertotter_1827_0 = {&direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, NULL, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, &direction_gimmickteetertotter_1827_0_16, NULL, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0, &direction_gimmickteetertotter_1827_0_0};
static Animation * anim_array_gimmickteetertotter_1827[1] = {&anim_gimmickteetertotter_1827_0};
static Animations anim_gimmickteetertotter_1827 = {1, &anim_array_gimmickteetertotter_1827[0]};
static bool anim_gimmickteetertotter_1827_initialized;
class GimmickTeeterTotter_1827 : public Active
{
public:
    GimmickTeeterTotter_1827(int x, int y) : Active(x, y, GimmickTeeterTotter_1827_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_TeeterTotter", 20);
#endif
        this->animations = &anim_gimmickteetertotter_1827;
        if (!anim_gimmickteetertotter_1827_initialized) {
            anim_gimmickteetertotter_1827_initialized = true;
            images_gimmickteetertotter_1827_0_0[0] = get_internal_image(4850);
            images_gimmickteetertotter_1827_0_16[0] = get_internal_image(4035);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
    }
};
FrameObject * create_gimmickteetertotter_1827(int x, int y)
{
    return new (Active::pool.create()) GimmickTeeterTotter_1827(x, y);
}
static Image* images_enemysuperturretus_1828_0_0[5];
static Direction direction_enemysuperturretus_1828_0_0 = {0, 100, 100, 0, -1, images_enemysuperturretus_1828_0_0, 5};
static Image* images_enemysuperturretus_1828_0_16[5];
static Direction direction_enemysuperturretus_1828_0_16 = {16, 100, 100, 0, -1, images_enemysuperturretus_1828_0_16, 5};
static Animation anim_enemysuperturretus_1828_0 = {&direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, NULL, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, &direction_enemysuperturretus_1828_0_16, NULL, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0, &direction_enemysuperturretus_1828_0_0};
static Image* images_enemysuperturretus_1828_7_0[12];
static Direction direction_enemysuperturretus_1828_7_0 = {0, 25, 25, 7, 3, images_enemysuperturretus_1828_7_0, 12};
static Image* images_enemysuperturretus_1828_7_16[12];
static Direction direction_enemysuperturretus_1828_7_16 = {16, 25, 25, 7, 3, images_enemysuperturretus_1828_7_16, 12};
static Animation anim_enemysuperturretus_1828_7 = {&direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, NULL, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, &direction_enemysuperturretus_1828_7_16, NULL, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0, &direction_enemysuperturretus_1828_7_0};
static Image* images_enemysuperturretus_1828_8_0[1];
static Direction direction_enemysuperturretus_1828_8_0 = {0, 50, 50, 0, -1, images_enemysuperturretus_1828_8_0, 1};
static Image* images_enemysuperturretus_1828_8_16[1];
static Direction direction_enemysuperturretus_1828_8_16 = {16, 50, 50, 0, -1, images_enemysuperturretus_1828_8_16, 1};
static Animation anim_enemysuperturretus_1828_8 = {&direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, NULL, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, &direction_enemysuperturretus_1828_8_16, NULL, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0, &direction_enemysuperturretus_1828_8_0};
static Image* images_enemysuperturretus_1828_10_0[7];
static Direction direction_enemysuperturretus_1828_10_0 = {0, 25, 25, 5, -1, images_enemysuperturretus_1828_10_0, 7};
static Image* images_enemysuperturretus_1828_10_16[7];
static Direction direction_enemysuperturretus_1828_10_16 = {16, 25, 25, 5, -1, images_enemysuperturretus_1828_10_16, 7};
static Animation anim_enemysuperturretus_1828_10 = {&direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, NULL, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, &direction_enemysuperturretus_1828_10_16, NULL, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0, &direction_enemysuperturretus_1828_10_0};
static Image* images_enemysuperturretus_1828_11_0[6];
static Direction direction_enemysuperturretus_1828_11_0 = {0, 25, 25, 5, 1, images_enemysuperturretus_1828_11_0, 6};
static Image* images_enemysuperturretus_1828_11_16[6];
static Direction direction_enemysuperturretus_1828_11_16 = {16, 25, 25, 5, 1, images_enemysuperturretus_1828_11_16, 6};
static Animation anim_enemysuperturretus_1828_11 = {&direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, NULL, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, &direction_enemysuperturretus_1828_11_16, NULL, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0, &direction_enemysuperturretus_1828_11_0};
static Animation * anim_array_enemysuperturretus_1828[12] = {&anim_enemysuperturretus_1828_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemysuperturretus_1828_7, &anim_enemysuperturretus_1828_8, NULL, &anim_enemysuperturretus_1828_10, &anim_enemysuperturretus_1828_11};
static Animations anim_enemysuperturretus_1828 = {12, &anim_array_enemysuperturretus_1828[0]};
static bool anim_enemysuperturretus_1828_initialized;
class EnemySuperTurretus_1828 : public Active
{
public:
    EnemySuperTurretus_1828(int x, int y) : Active(x, y, EnemySuperTurretus_1828_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_SuperTurretus", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemysuperturretus_1828;
        if (!anim_enemysuperturretus_1828_initialized) {
            anim_enemysuperturretus_1828_initialized = true;
            images_enemysuperturretus_1828_0_0[0] = get_internal_image(12217);
            images_enemysuperturretus_1828_0_0[1] = get_internal_image(12218);
            images_enemysuperturretus_1828_0_0[2] = get_internal_image(13875);
            images_enemysuperturretus_1828_0_0[3] = get_internal_image(14850);
            images_enemysuperturretus_1828_0_0[4] = get_internal_image(14851);
            images_enemysuperturretus_1828_0_16[0] = get_internal_image(14878);
            images_enemysuperturretus_1828_0_16[1] = get_internal_image(14879);
            images_enemysuperturretus_1828_0_16[2] = get_internal_image(14880);
            images_enemysuperturretus_1828_0_16[3] = get_internal_image(14881);
            images_enemysuperturretus_1828_0_16[4] = get_internal_image(14882);
            images_enemysuperturretus_1828_7_0[0] = get_internal_image(14863);
            images_enemysuperturretus_1828_7_0[1] = get_internal_image(14865);
            images_enemysuperturretus_1828_7_0[2] = get_internal_image(14866);
            images_enemysuperturretus_1828_7_0[3] = get_internal_image(14867);
            images_enemysuperturretus_1828_7_0[4] = get_internal_image(14868);
            images_enemysuperturretus_1828_7_0[5] = get_internal_image(14869);
            images_enemysuperturretus_1828_7_0[6] = get_internal_image(14870);
            images_enemysuperturretus_1828_7_0[7] = get_internal_image(14871);
            images_enemysuperturretus_1828_7_0[8] = get_internal_image(14872);
            images_enemysuperturretus_1828_7_0[9] = get_internal_image(14873);
            images_enemysuperturretus_1828_7_0[10] = get_internal_image(14874);
            images_enemysuperturretus_1828_7_0[11] = get_internal_image(14875);
            images_enemysuperturretus_1828_7_16[0] = get_internal_image(14852);
            images_enemysuperturretus_1828_7_16[1] = get_internal_image(14853);
            images_enemysuperturretus_1828_7_16[2] = get_internal_image(14854);
            images_enemysuperturretus_1828_7_16[3] = get_internal_image(14864);
            images_enemysuperturretus_1828_7_16[4] = get_internal_image(14855);
            images_enemysuperturretus_1828_7_16[5] = get_internal_image(14856);
            images_enemysuperturretus_1828_7_16[6] = get_internal_image(14857);
            images_enemysuperturretus_1828_7_16[7] = get_internal_image(14858);
            images_enemysuperturretus_1828_7_16[8] = get_internal_image(14859);
            images_enemysuperturretus_1828_7_16[9] = get_internal_image(14860);
            images_enemysuperturretus_1828_7_16[10] = get_internal_image(14861);
            images_enemysuperturretus_1828_7_16[11] = get_internal_image(14862);
            images_enemysuperturretus_1828_8_0[0] = get_internal_image(14876);
            images_enemysuperturretus_1828_8_16[0] = get_internal_image(14877);
            images_enemysuperturretus_1828_10_0[0] = get_internal_image(12217);
            images_enemysuperturretus_1828_10_0[1] = get_internal_image(14883);
            images_enemysuperturretus_1828_10_0[2] = get_internal_image(14884);
            images_enemysuperturretus_1828_10_0[3] = get_internal_image(14885);
            images_enemysuperturretus_1828_10_0[4] = get_internal_image(14886);
            images_enemysuperturretus_1828_10_0[5] = get_internal_image(14887);
            images_enemysuperturretus_1828_10_0[6] = get_internal_image(14865);
            images_enemysuperturretus_1828_10_16[0] = get_internal_image(14878);
            images_enemysuperturretus_1828_10_16[1] = get_internal_image(14888);
            images_enemysuperturretus_1828_10_16[2] = get_internal_image(14889);
            images_enemysuperturretus_1828_10_16[3] = get_internal_image(14890);
            images_enemysuperturretus_1828_10_16[4] = get_internal_image(14891);
            images_enemysuperturretus_1828_10_16[5] = get_internal_image(14892);
            images_enemysuperturretus_1828_10_16[6] = get_internal_image(14853);
            images_enemysuperturretus_1828_11_0[0] = get_internal_image(14887);
            images_enemysuperturretus_1828_11_0[1] = get_internal_image(14893);
            images_enemysuperturretus_1828_11_0[2] = get_internal_image(14894);
            images_enemysuperturretus_1828_11_0[3] = get_internal_image(14895);
            images_enemysuperturretus_1828_11_0[4] = get_internal_image(14896);
            images_enemysuperturretus_1828_11_0[5] = get_internal_image(14898);
            images_enemysuperturretus_1828_11_16[0] = get_internal_image(14892);
            images_enemysuperturretus_1828_11_16[1] = get_internal_image(14897);
            images_enemysuperturretus_1828_11_16[2] = get_internal_image(14899);
            images_enemysuperturretus_1828_11_16[3] = get_internal_image(14900);
            images_enemysuperturretus_1828_11_16[4] = get_internal_image(14901);
            images_enemysuperturretus_1828_11_16[5] = get_internal_image(14902);
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
        alterables->values.set(8, 1);
    }
};
FrameObject * create_enemysuperturretus_1828(int x, int y)
{
    return new (Active::pool.create()) EnemySuperTurretus_1828(x, y);
}
static Image* images_floatinglantern_1829_0_0[8];
static Direction direction_floatinglantern_1829_0_0 = {0, 20, 20, 0, -1, images_floatinglantern_1829_0_0, 8};
static Image* images_floatinglantern_1829_0_8[2];
static Direction direction_floatinglantern_1829_0_8 = {8, 50, 50, 0, 1, images_floatinglantern_1829_0_8, 2};
static Animation anim_floatinglantern_1829_0 = {&direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, NULL, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, &direction_floatinglantern_1829_0_8, NULL, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0, &direction_floatinglantern_1829_0_0};
static Animation * anim_array_floatinglantern_1829[1] = {&anim_floatinglantern_1829_0};
static Animations anim_floatinglantern_1829 = {1, &anim_array_floatinglantern_1829[0]};
static bool anim_floatinglantern_1829_initialized;
class FloatingLantern_1829 : public Active
{
public:
    FloatingLantern_1829(int x, int y) : Active(x, y, FloatingLantern_1829_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FloatingLantern", 15);
#endif
        this->animations = &anim_floatinglantern_1829;
        if (!anim_floatinglantern_1829_initialized) {
            anim_floatinglantern_1829_initialized = true;
            images_floatinglantern_1829_0_0[0] = get_internal_image(8339);
            images_floatinglantern_1829_0_0[1] = get_internal_image(8340);
            images_floatinglantern_1829_0_0[2] = get_internal_image(8341);
            images_floatinglantern_1829_0_0[3] = get_internal_image(8342);
            images_floatinglantern_1829_0_0[4] = get_internal_image(8406);
            images_floatinglantern_1829_0_0[5] = get_internal_image(8342);
            images_floatinglantern_1829_0_0[6] = get_internal_image(8341);
            images_floatinglantern_1829_0_0[7] = get_internal_image(8340);
            images_floatinglantern_1829_0_8[0] = get_internal_image(6944);
            images_floatinglantern_1829_0_8[1] = get_internal_image(6945);
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
FrameObject * create_floatinglantern_1829(int x, int y)
{
    return new (Active::pool.create()) FloatingLantern_1829(x, y);
}
class RiverBridge3_1830 : public Backdrop
{
public:
    RiverBridge3_1830(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6907);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge3_1830(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge3_1830(x, y);
}
class RiverBridge4_1831 : public Backdrop
{
public:
    RiverBridge4_1831(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6943);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge4_1831(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge4_1831(x, y);
}
class RiverBridge1_1832 : public Backdrop
{
public:
    RiverBridge1_1832(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6958);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge1_1832(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge1_1832(x, y);
}
class RiverBridge5_1833 : public Backdrop
{
public:
    RiverBridge5_1833(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6695);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge5_1833(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge5_1833(x, y);
}
static Image* images_bossrapidbullet_1834_0_8[1];
static Direction direction_bossrapidbullet_1834_0_8 = {8, 50, 50, 0, 1, images_bossrapidbullet_1834_0_8, 1};
static Image* images_bossrapidbullet_1834_0_24[1];
static Direction direction_bossrapidbullet_1834_0_24 = {24, 50, 50, 0, 1, images_bossrapidbullet_1834_0_24, 1};
static Animation anim_bossrapidbullet_1834_0 = {NULL, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, &direction_bossrapidbullet_1834_0_8, NULL, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24, &direction_bossrapidbullet_1834_0_24};
static Animation * anim_array_bossrapidbullet_1834[1] = {&anim_bossrapidbullet_1834_0};
static Animations anim_bossrapidbullet_1834 = {1, &anim_array_bossrapidbullet_1834[0]};
static bool anim_bossrapidbullet_1834_initialized;
class BossRapidBullet_1834 : public Active
{
public:
    BossRapidBullet_1834(int x, int y) : Active(x, y, BossRapidBullet_1834_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RapidBullet", 16);
#endif
        this->animations = &anim_bossrapidbullet_1834;
        if (!anim_bossrapidbullet_1834_initialized) {
            anim_bossrapidbullet_1834_initialized = true;
            images_bossrapidbullet_1834_0_8[0] = get_internal_image(7234);
            images_bossrapidbullet_1834_0_24[0] = get_internal_image(7235);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_bossrapidbullet_1834(int x, int y)
{
    return new (Active::pool.create()) BossRapidBullet_1834(x, y);
}
static Image* images_bossmissile_1835_0_0[4];
static Direction direction_bossmissile_1835_0_0 = {0, 50, 50, 0, -1, images_bossmissile_1835_0_0, 4};
static Image* images_bossmissile_1835_0_16[4];
static Direction direction_bossmissile_1835_0_16 = {16, 50, 50, 0, -1, images_bossmissile_1835_0_16, 4};
static Animation anim_bossmissile_1835_0 = {&direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, NULL, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, &direction_bossmissile_1835_0_16, NULL, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0, &direction_bossmissile_1835_0_0};
static Image* images_bossmissile_1835_8_0[1];
static Direction direction_bossmissile_1835_8_0 = {0, 50, 50, 0, -1, images_bossmissile_1835_8_0, 1};
static Animation anim_bossmissile_1835_8 = {&direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, NULL, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0, &direction_bossmissile_1835_8_0};
static Animation * anim_array_bossmissile_1835[9] = {&anim_bossmissile_1835_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmissile_1835_8};
static Animations anim_bossmissile_1835 = {9, &anim_array_bossmissile_1835[0]};
static bool anim_bossmissile_1835_initialized;
class BossMissile_1835 : public Active
{
public:
    BossMissile_1835(int x, int y) : Active(x, y, BossMissile_1835_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Missile", 12);
#endif
        this->animations = &anim_bossmissile_1835;
        if (!anim_bossmissile_1835_initialized) {
            anim_bossmissile_1835_initialized = true;
            images_bossmissile_1835_0_0[0] = get_internal_image(7236);
            images_bossmissile_1835_0_0[1] = get_internal_image(7237);
            images_bossmissile_1835_0_0[2] = get_internal_image(7238);
            images_bossmissile_1835_0_0[3] = get_internal_image(7239);
            images_bossmissile_1835_0_16[0] = get_internal_image(7240);
            images_bossmissile_1835_0_16[1] = get_internal_image(7241);
            images_bossmissile_1835_0_16[2] = get_internal_image(7242);
            images_bossmissile_1835_0_16[3] = get_internal_image(7243);
            images_bossmissile_1835_8_0[0] = get_internal_image(3049);
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
FrameObject * create_bossmissile_1835(int x, int y)
{
    return new (Active::pool.create()) BossMissile_1835(x, y);
}
static Image* images_effectgunspark_1836_4_0[5];
static Direction direction_effectgunspark_1836_4_0 = {0, 100, 100, 0, 1, images_effectgunspark_1836_4_0, 5};
static Animation anim_effectgunspark_1836_4 = {&direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, NULL, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0, &direction_effectgunspark_1836_4_0};
static Animation * anim_array_effectgunspark_1836[5] = {NULL, NULL, NULL, NULL, &anim_effectgunspark_1836_4};
static Animations anim_effectgunspark_1836 = {5, &anim_array_effectgunspark_1836[0]};
static bool anim_effectgunspark_1836_initialized;
class EffectGunSpark_1836 : public Active
{
public:
    EffectGunSpark_1836(int x, int y) : Active(x, y, EffectGunSpark_1836_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_GunSpark", 15);
#endif
        this->animations = &anim_effectgunspark_1836;
        if (!anim_effectgunspark_1836_initialized) {
            anim_effectgunspark_1836_initialized = true;
            images_effectgunspark_1836_4_0[0] = get_internal_image(7543);
            images_effectgunspark_1836_4_0[1] = get_internal_image(7544);
            images_effectgunspark_1836_4_0[2] = get_internal_image(7545);
            images_effectgunspark_1836_4_0[3] = get_internal_image(7546);
            images_effectgunspark_1836_4_0[4] = get_internal_image(7547);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_effectgunspark_1836(int x, int y)
{
    return new (Active::pool.create()) EffectGunSpark_1836(x, y);
}
static Image* images_minibosssamudebris_1837_0_0[5];
static Direction direction_minibosssamudebris_1837_0_0 = {0, 0, 0, 0, 1, images_minibosssamudebris_1837_0_0, 5};
static Animation anim_minibosssamudebris_1837_0 = {&direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, NULL, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0, &direction_minibosssamudebris_1837_0_0};
static Animation * anim_array_minibosssamudebris_1837[1] = {&anim_minibosssamudebris_1837_0};
static Animations anim_minibosssamudebris_1837 = {1, &anim_array_minibosssamudebris_1837[0]};
static bool anim_minibosssamudebris_1837_initialized;
class MinibossSamuDebris_1837 : public Active
{
public:
    MinibossSamuDebris_1837(int x, int y) : Active(x, y, MinibossSamuDebris_1837_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_SamuDebris", 19);
#endif
        this->animations = &anim_minibosssamudebris_1837;
        if (!anim_minibosssamudebris_1837_initialized) {
            anim_minibosssamudebris_1837_initialized = true;
            images_minibosssamudebris_1837_0_0[0] = get_internal_image(7576);
            images_minibosssamudebris_1837_0_0[1] = get_internal_image(7577);
            images_minibosssamudebris_1837_0_0[2] = get_internal_image(7571);
            images_minibosssamudebris_1837_0_0[3] = get_internal_image(7578);
            images_minibosssamudebris_1837_0_0[4] = get_internal_image(7579);
        }
        collision_box = false;
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
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_minibosssamudebris_1837(int x, int y)
{
    return new (Active::pool.create()) MinibossSamuDebris_1837(x, y);
}
class BirchTree2_1838 : public Backdrop
{
public:
    BirchTree2_1838(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Birch tree 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(537);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_birchtree2_1838(int x, int y)
{
    return new (Backdrop::pool.create()) BirchTree2_1838(x, y);
}
class Floor21_1839 : public Backdrop
{
public:
    Floor21_1839(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 21", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7175);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_floor21_1839(int x, int y)
{
    return new (Backdrop::pool.create()) Floor21_1839(x, y);
}
static Image* images_strobelight_1840_0_0[6];
static Direction direction_strobelight_1840_0_0 = {0, 50, 50, 0, -1, images_strobelight_1840_0_0, 6};
static Animation anim_strobelight_1840_0 = {&direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, NULL, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0, &direction_strobelight_1840_0_0};
static Animation * anim_array_strobelight_1840[1] = {&anim_strobelight_1840_0};
static Animations anim_strobelight_1840 = {1, &anim_array_strobelight_1840[0]};
static bool anim_strobelight_1840_initialized;
class Strobelight_1840 : public Active
{
public:
    Strobelight_1840(int x, int y) : Active(x, y, Strobelight_1840_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Strobelight", 11);
#endif
        this->animations = &anim_strobelight_1840;
        if (!anim_strobelight_1840_initialized) {
            anim_strobelight_1840_initialized = true;
            images_strobelight_1840_0_0[0] = get_internal_image(7185);
            images_strobelight_1840_0_0[1] = get_internal_image(7182);
            images_strobelight_1840_0_0[2] = get_internal_image(7183);
            images_strobelight_1840_0_0[3] = get_internal_image(7184);
            images_strobelight_1840_0_0[4] = get_internal_image(7183);
            images_strobelight_1840_0_0[5] = get_internal_image(7182);
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
FrameObject * create_strobelight_1840(int x, int y)
{
    return new (Active::pool.create()) Strobelight_1840(x, y);
}
class MallEntrance4_1841 : public Backdrop
{
public:
    MallEntrance4_1841(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7262);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance4_1841(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance4_1841(x, y);
}
static Image* images_gimmickhangingswitch_1842_0_0[1];
static Direction direction_gimmickhangingswitch_1842_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingswitch_1842_0_0, 1};
static Animation anim_gimmickhangingswitch_1842_0 = {&direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, NULL, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0, &direction_gimmickhangingswitch_1842_0_0};
static Animation * anim_array_gimmickhangingswitch_1842[1] = {&anim_gimmickhangingswitch_1842_0};
static Animations anim_gimmickhangingswitch_1842 = {1, &anim_array_gimmickhangingswitch_1842[0]};
static bool anim_gimmickhangingswitch_1842_initialized;
class GimmickHangingSwitch_1842 : public Active
{
public:
    GimmickHangingSwitch_1842(int x, int y) : Active(x, y, GimmickHangingSwitch_1842_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingSwitch", 21);
#endif
        this->animations = &anim_gimmickhangingswitch_1842;
        if (!anim_gimmickhangingswitch_1842_initialized) {
            anim_gimmickhangingswitch_1842_initialized = true;
            images_gimmickhangingswitch_1842_0_0[0] = get_internal_image(8483);
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
FrameObject * create_gimmickhangingswitch_1842(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingSwitch_1842(x, y);
}
static Image* images_gachaponwheel_1843_0_0[2];
static Direction direction_gachaponwheel_1843_0_0 = {0, 3, 3, 0, -1, images_gachaponwheel_1843_0_0, 2};
static Image* images_gachaponwheel_1843_0_1[1];
static Direction direction_gachaponwheel_1843_0_1 = {1, 100, 100, 0, 1, images_gachaponwheel_1843_0_1, 1};
static Image* images_gachaponwheel_1843_0_2[8];
static Direction direction_gachaponwheel_1843_0_2 = {2, 0, 0, 0, -1, images_gachaponwheel_1843_0_2, 8};
static Image* images_gachaponwheel_1843_0_4[1];
static Direction direction_gachaponwheel_1843_0_4 = {4, 100, 100, 0, 1, images_gachaponwheel_1843_0_4, 1};
static Animation anim_gachaponwheel_1843_0 = {&direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_1, &direction_gachaponwheel_1843_0_2, NULL, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, &direction_gachaponwheel_1843_0_4, NULL, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0, &direction_gachaponwheel_1843_0_0};
static Animation * anim_array_gachaponwheel_1843[1] = {&anim_gachaponwheel_1843_0};
static Animations anim_gachaponwheel_1843 = {1, &anim_array_gachaponwheel_1843[0]};
static bool anim_gachaponwheel_1843_initialized;
class GachaponWheel_1843 : public Active
{
public:
    GachaponWheel_1843(int x, int y) : Active(x, y, GachaponWheel_1843_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GachaponWheel", 13);
#endif
        this->animations = &anim_gachaponwheel_1843;
        if (!anim_gachaponwheel_1843_initialized) {
            anim_gachaponwheel_1843_initialized = true;
            images_gachaponwheel_1843_0_0[0] = get_internal_image(412);
            images_gachaponwheel_1843_0_0[1] = get_internal_image(411);
            images_gachaponwheel_1843_0_1[0] = get_internal_image(412);
            images_gachaponwheel_1843_0_2[0] = get_internal_image(413);
            images_gachaponwheel_1843_0_2[1] = get_internal_image(8883);
            images_gachaponwheel_1843_0_2[2] = get_internal_image(8877);
            images_gachaponwheel_1843_0_2[3] = get_internal_image(8842);
            images_gachaponwheel_1843_0_2[4] = get_internal_image(417);
            images_gachaponwheel_1843_0_2[5] = get_internal_image(416);
            images_gachaponwheel_1843_0_2[6] = get_internal_image(415);
            images_gachaponwheel_1843_0_2[7] = get_internal_image(414);
            images_gachaponwheel_1843_0_4[0] = get_internal_image(360);
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
FrameObject * create_gachaponwheel_1843(int x, int y)
{
    return new (Active::pool.create()) GachaponWheel_1843(x, y);
}
static Image* images_largesign3_1844_0_0[4];
static Direction direction_largesign3_1844_0_0 = {0, 15, 15, 0, -1, images_largesign3_1844_0_0, 4};
static Animation anim_largesign3_1844_0 = {&direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, NULL, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0, &direction_largesign3_1844_0_0};
static Animation * anim_array_largesign3_1844[1] = {&anim_largesign3_1844_0};
static Animations anim_largesign3_1844 = {1, &anim_array_largesign3_1844[0]};
static bool anim_largesign3_1844_initialized;
class LargeSign3_1844 : public Active
{
public:
    LargeSign3_1844(int x, int y) : Active(x, y, LargeSign3_1844_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Large_sign 3", 12);
#endif
        this->animations = &anim_largesign3_1844;
        if (!anim_largesign3_1844_initialized) {
            anim_largesign3_1844_initialized = true;
            images_largesign3_1844_0_0[0] = get_internal_image(240);
            images_largesign3_1844_0_0[1] = get_internal_image(235);
            images_largesign3_1844_0_0[2] = get_internal_image(6564);
            images_largesign3_1844_0_0[3] = get_internal_image(6567);
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
FrameObject * create_largesign3_1844(int x, int y)
{
    return new (Active::pool.create()) LargeSign3_1844(x, y);
}
static Image* images_gimmickdragontunnel1_1845_0_0[1];
static Direction direction_gimmickdragontunnel1_1845_0_0 = {0, 0, 0, 0, 1, images_gimmickdragontunnel1_1845_0_0, 1};
static Animation anim_gimmickdragontunnel1_1845_0 = {&direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, NULL, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0, &direction_gimmickdragontunnel1_1845_0_0};
static Animation * anim_array_gimmickdragontunnel1_1845[1] = {&anim_gimmickdragontunnel1_1845_0};
static Animations anim_gimmickdragontunnel1_1845 = {1, &anim_array_gimmickdragontunnel1_1845[0]};
static bool anim_gimmickdragontunnel1_1845_initialized;
class GimmickDragonTunnel1_1845 : public Active
{
public:
    GimmickDragonTunnel1_1845(int x, int y) : Active(x, y, GimmickDragonTunnel1_1845_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnel 1", 22);
#endif
        this->animations = &anim_gimmickdragontunnel1_1845;
        if (!anim_gimmickdragontunnel1_1845_initialized) {
            anim_gimmickdragontunnel1_1845_initialized = true;
            images_gimmickdragontunnel1_1845_0_0[0] = get_internal_image(8482);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 4);
        alterables->values.set(6, 32);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickdragontunnel1_1845(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnel1_1845(x, y);
}
class BirchTree_1846 : public Backdrop
{
public:
    BirchTree_1846(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Birch tree", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(37);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_birchtree_1846(int x, int y)
{
    return new (Backdrop::pool.create()) BirchTree_1846(x, y);
}
class MallEntrance5_1847 : public Backdrop
{
public:
    MallEntrance5_1847(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7265);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance5_1847(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance5_1847(x, y);
}
class MallEntrance7_1848 : public Backdrop
{
public:
    MallEntrance7_1848(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 7", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(407);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance7_1848(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance7_1848(x, y);
}
class MallEntrance6_1849 : public Backdrop
{
public:
    MallEntrance6_1849(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(650);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance6_1849(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance6_1849(x, y);
}
class GachaponBase_1850 : public Backdrop
{
public:
    GachaponBase_1850(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("GachaponBase", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3329);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gachaponbase_1850(int x, int y)
{
    return new (Backdrop::pool.create()) GachaponBase_1850(x, y);
}
class DragonSlope3_1851 : public Backdrop
{
public:
    DragonSlope3_1851(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dragon Slope 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7173);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dragonslope3_1851(int x, int y)
{
    return new (Backdrop::pool.create()) DragonSlope3_1851(x, y);
}
class UFOWreckage_1852 : public Backdrop
{
public:
    UFOWreckage_1852(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("UFO_Wreckage", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(72);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ufowreckage_1852(int x, int y)
{
    return new (Backdrop::pool.create()) UFOWreckage_1852(x, y);
}
class MallEntrance2_1853 : public Backdrop
{
public:
    MallEntrance2_1853(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11182);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance2_1853(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance2_1853(x, y);
}
class MallEntrance1_1854 : public Backdrop
{
public:
    MallEntrance1_1854(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(902);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance1_1854(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance1_1854(x, y);
}
class Backdrop2_1855 : public Backdrop
{
public:
    Backdrop2_1855(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11148);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_1855(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_1855(x, y);
}
static Image* images_ramp2_1856_0_0[1];
static Direction direction_ramp2_1856_0_0 = {0, 50, 50, 0, 1, images_ramp2_1856_0_0, 1};
static Animation anim_ramp2_1856_0 = {&direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, NULL, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0, &direction_ramp2_1856_0_0};
static Animation * anim_array_ramp2_1856[1] = {&anim_ramp2_1856_0};
static Animations anim_ramp2_1856 = {1, &anim_array_ramp2_1856[0]};
static bool anim_ramp2_1856_initialized;
class Ramp2_1856 : public Active
{
public:
    Ramp2_1856(int x, int y) : Active(x, y, Ramp2_1856_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Ramp 2", 6);
#endif
        this->animations = &anim_ramp2_1856;
        if (!anim_ramp2_1856_initialized) {
            anim_ramp2_1856_initialized = true;
            images_ramp2_1856_0_0[0] = get_internal_image(7247);
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
FrameObject * create_ramp2_1856(int x, int y)
{
    return new (Active::pool.create()) Ramp2_1856(x, y);
}
static Image* images_layer0loop3_1857_0_0[1];
static Direction direction_layer0loop3_1857_0_0 = {0, 50, 50, 0, 1, images_layer0loop3_1857_0_0, 1};
static Animation anim_layer0loop3_1857_0 = {&direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, NULL, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0, &direction_layer0loop3_1857_0_0};
static Animation * anim_array_layer0loop3_1857[1] = {&anim_layer0loop3_1857_0};
static Animations anim_layer0loop3_1857 = {1, &anim_array_layer0loop3_1857[0]};
static bool anim_layer0loop3_1857_initialized;
class Layer0Loop3_1857 : public Active
{
public:
    Layer0Loop3_1857(int x, int y) : Active(x, y, Layer0Loop3_1857_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop 3", 13);
#endif
        this->animations = &anim_layer0loop3_1857;
        if (!anim_layer0loop3_1857_initialized) {
            anim_layer0loop3_1857_initialized = true;
            images_layer0loop3_1857_0_0[0] = get_internal_image(7164);
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
FrameObject * create_layer0loop3_1857(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop3_1857(x, y);
}
static Image* images_gachapondoor_1858_0_0[1];
static Direction direction_gachapondoor_1858_0_0 = {0, 3, 3, 0, -1, images_gachapondoor_1858_0_0, 1};
static Animation anim_gachapondoor_1858_0 = {&direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, NULL, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0, &direction_gachapondoor_1858_0_0};
static Animation * anim_array_gachapondoor_1858[1] = {&anim_gachapondoor_1858_0};
static Animations anim_gachapondoor_1858 = {1, &anim_array_gachapondoor_1858[0]};
static bool anim_gachapondoor_1858_initialized;
class GachaponDoor_1858 : public Active
{
public:
    GachaponDoor_1858(int x, int y) : Active(x, y, GachaponDoor_1858_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GachaponDoor", 12);
#endif
        this->animations = &anim_gachapondoor_1858;
        if (!anim_gachapondoor_1858_initialized) {
            anim_gachapondoor_1858_initialized = true;
            images_gachapondoor_1858_0_0[0] = get_internal_image(7161);
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
FrameObject * create_gachapondoor_1858(int x, int y)
{
    return new (Active::pool.create()) GachaponDoor_1858(x, y);
}
static Image* images_gachaponfront_1859_0_0[2];
static Direction direction_gachaponfront_1859_0_0 = {0, 5, 5, 0, -1, images_gachaponfront_1859_0_0, 2};
static Image* images_gachaponfront_1859_0_1[1];
static Direction direction_gachaponfront_1859_0_1 = {1, 50, 50, 0, 1, images_gachaponfront_1859_0_1, 1};
static Animation anim_gachaponfront_1859_0 = {&direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_1, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0, &direction_gachaponfront_1859_0_0};
static Animation * anim_array_gachaponfront_1859[1] = {&anim_gachaponfront_1859_0};
static Animations anim_gachaponfront_1859 = {1, &anim_array_gachaponfront_1859[0]};
static bool anim_gachaponfront_1859_initialized;
class GachaponFront_1859 : public Active
{
public:
    GachaponFront_1859(int x, int y) : Active(x, y, GachaponFront_1859_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GachaponFront", 13);
#endif
        this->animations = &anim_gachaponfront_1859;
        if (!anim_gachaponfront_1859_initialized) {
            anim_gachaponfront_1859_initialized = true;
            images_gachaponfront_1859_0_0[0] = get_internal_image(7167);
            images_gachaponfront_1859_0_0[1] = get_internal_image(7162);
            images_gachaponfront_1859_0_1[0] = get_internal_image(7167);
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
FrameObject * create_gachaponfront_1859(int x, int y)
{
    return new (Active::pool.create()) GachaponFront_1859(x, y);
}
static Image* images_largecolumn_1861_0_0[1];
static Direction direction_largecolumn_1861_0_0 = {0, 50, 50, 0, 1, images_largecolumn_1861_0_0, 1};
static Animation anim_largecolumn_1861_0 = {&direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, NULL, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0, &direction_largecolumn_1861_0_0};
static Animation * anim_array_largecolumn_1861[1] = {&anim_largecolumn_1861_0};
static Animations anim_largecolumn_1861 = {1, &anim_array_largecolumn_1861[0]};
static bool anim_largecolumn_1861_initialized;
class LargeColumn_1861 : public Active
{
public:
    LargeColumn_1861(int x, int y) : Active(x, y, LargeColumn_1861_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Large_Column", 12);
#endif
        this->animations = &anim_largecolumn_1861;
        if (!anim_largecolumn_1861_initialized) {
            anim_largecolumn_1861_initialized = true;
            images_largecolumn_1861_0_0[0] = get_internal_image(11183);
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
FrameObject * create_largecolumn_1861(int x, int y)
{
    return new (Active::pool.create()) LargeColumn_1861(x, y);
}
static Image* images_largecolumn2_1862_0_0[1];
static Direction direction_largecolumn2_1862_0_0 = {0, 50, 50, 0, 1, images_largecolumn2_1862_0_0, 1};
static Animation anim_largecolumn2_1862_0 = {&direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, NULL, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0, &direction_largecolumn2_1862_0_0};
static Animation * anim_array_largecolumn2_1862[1] = {&anim_largecolumn2_1862_0};
static Animations anim_largecolumn2_1862 = {1, &anim_array_largecolumn2_1862[0]};
static bool anim_largecolumn2_1862_initialized;
class LargeColumn2_1862 : public Active
{
public:
    LargeColumn2_1862(int x, int y) : Active(x, y, LargeColumn2_1862_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Large_Column 2", 14);
#endif
        this->animations = &anim_largecolumn2_1862;
        if (!anim_largecolumn2_1862_initialized) {
            anim_largecolumn2_1862_initialized = true;
            images_largecolumn2_1862_0_0[0] = get_internal_image(11181);
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
FrameObject * create_largecolumn2_1862(int x, int y)
{
    return new (Active::pool.create()) LargeColumn2_1862(x, y);
}
static Image* images_bossserpentinearm_1863_0_1[1];
static Direction direction_bossserpentinearm_1863_0_1 = {1, 50, 50, 0, 1, images_bossserpentinearm_1863_0_1, 1};
static Image* images_bossserpentinearm_1863_0_2[1];
static Direction direction_bossserpentinearm_1863_0_2 = {2, 50, 50, 0, 1, images_bossserpentinearm_1863_0_2, 1};
static Image* images_bossserpentinearm_1863_0_3[1];
static Direction direction_bossserpentinearm_1863_0_3 = {3, 50, 50, 0, 1, images_bossserpentinearm_1863_0_3, 1};
static Image* images_bossserpentinearm_1863_0_17[1];
static Direction direction_bossserpentinearm_1863_0_17 = {17, 50, 50, 0, 1, images_bossserpentinearm_1863_0_17, 1};
static Image* images_bossserpentinearm_1863_0_18[1];
static Direction direction_bossserpentinearm_1863_0_18 = {18, 50, 50, 0, 1, images_bossserpentinearm_1863_0_18, 1};
static Image* images_bossserpentinearm_1863_0_19[1];
static Direction direction_bossserpentinearm_1863_0_19 = {19, 50, 50, 0, 1, images_bossserpentinearm_1863_0_19, 1};
static Animation anim_bossserpentinearm_1863_0 = {&direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_2, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, &direction_bossserpentinearm_1863_0_3, NULL, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_17, &direction_bossserpentinearm_1863_0_18, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, &direction_bossserpentinearm_1863_0_19, NULL, &direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_1, &direction_bossserpentinearm_1863_0_1};
static Animation * anim_array_bossserpentinearm_1863[1] = {&anim_bossserpentinearm_1863_0};
static Animations anim_bossserpentinearm_1863 = {1, &anim_array_bossserpentinearm_1863[0]};
static bool anim_bossserpentinearm_1863_initialized;
class BossSerpentineArm_1863 : public Active
{
public:
    BossSerpentineArm_1863(int x, int y) : Active(x, y, BossSerpentineArm_1863_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SerpentineArm", 18);
#endif
        set_visible(false);
        this->animations = &anim_bossserpentinearm_1863;
        if (!anim_bossserpentinearm_1863_initialized) {
            anim_bossserpentinearm_1863_initialized = true;
            images_bossserpentinearm_1863_0_1[0] = get_internal_image(7228);
            images_bossserpentinearm_1863_0_2[0] = get_internal_image(7229);
            images_bossserpentinearm_1863_0_3[0] = get_internal_image(7230);
            images_bossserpentinearm_1863_0_17[0] = get_internal_image(7231);
            images_bossserpentinearm_1863_0_18[0] = get_internal_image(7232);
            images_bossserpentinearm_1863_0_19[0] = get_internal_image(7233);
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
FrameObject * create_bossserpentinearm_1863(int x, int y)
{
    return new (Active::pool.create()) BossSerpentineArm_1863(x, y);
}
static Image* images_effectwarning2_1864_0_0[3];
static Direction direction_effectwarning2_1864_0_0 = {0, 50, 50, 0, -1, images_effectwarning2_1864_0_0, 3};
static Animation anim_effectwarning2_1864_0 = {&direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, NULL, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0, &direction_effectwarning2_1864_0_0};
static Animation * anim_array_effectwarning2_1864[1] = {&anim_effectwarning2_1864_0};
static Animations anim_effectwarning2_1864 = {1, &anim_array_effectwarning2_1864[0]};
static bool anim_effectwarning2_1864_initialized;
class EffectWarning2_1864 : public Active
{
public:
    EffectWarning2_1864(int x, int y) : Active(x, y, EffectWarning2_1864_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Warning 2", 16);
#endif
        set_visible(false);
        this->animations = &anim_effectwarning2_1864;
        if (!anim_effectwarning2_1864_initialized) {
            anim_effectwarning2_1864_initialized = true;
            images_effectwarning2_1864_0_0[0] = get_internal_image(11988);
            images_effectwarning2_1864_0_0[1] = get_internal_image(11989);
            images_effectwarning2_1864_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectwarning2_1864(int x, int y)
{
    return new (Active::pool.create()) EffectWarning2_1864(x, y);
}
static Image* images_bosschargeglow_1865_0_0[1];
static Direction direction_bosschargeglow_1865_0_0 = {0, 50, 50, 0, 1, images_bosschargeglow_1865_0_0, 1};
static Animation anim_bosschargeglow_1865_0 = {&direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, NULL, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0, &direction_bosschargeglow_1865_0_0};
static Animation * anim_array_bosschargeglow_1865[1] = {&anim_bosschargeglow_1865_0};
static Animations anim_bosschargeglow_1865 = {1, &anim_array_bosschargeglow_1865[0]};
static bool anim_bosschargeglow_1865_initialized;
class BossChargeglow_1865 : public Active
{
public:
    BossChargeglow_1865(int x, int y) : Active(x, y, BossChargeglow_1865_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Chargeglow", 15);
#endif
        this->animations = &anim_bosschargeglow_1865;
        if (!anim_bosschargeglow_1865_initialized) {
            anim_bosschargeglow_1865_initialized = true;
            images_bosschargeglow_1865_0_0[0] = get_internal_image(7244);
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
FrameObject * create_bosschargeglow_1865(int x, int y)
{
    return new (Active::pool.create()) BossChargeglow_1865(x, y);
}
static Image* images_bossserpfloorcheck_1866_0_0[1];
static Direction direction_bossserpfloorcheck_1866_0_0 = {0, 50, 50, 0, 1, images_bossserpfloorcheck_1866_0_0, 1};
static Animation anim_bossserpfloorcheck_1866_0 = {&direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, NULL, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0, &direction_bossserpfloorcheck_1866_0_0};
static Animation * anim_array_bossserpfloorcheck_1866[1] = {&anim_bossserpfloorcheck_1866_0};
static Animations anim_bossserpfloorcheck_1866 = {1, &anim_array_bossserpfloorcheck_1866[0]};
static bool anim_bossserpfloorcheck_1866_initialized;
class BossSerpFloorCheck_1866 : public Active
{
public:
    BossSerpFloorCheck_1866(int x, int y) : Active(x, y, BossSerpFloorCheck_1866_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SerpFloorCheck", 19);
#endif
        set_visible(false);
        this->animations = &anim_bossserpfloorcheck_1866;
        if (!anim_bossserpfloorcheck_1866_initialized) {
            anim_bossserpfloorcheck_1866_initialized = true;
            images_bossserpfloorcheck_1866_0_0[0] = get_internal_image(7765);
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
FrameObject * create_bossserpfloorcheck_1866(int x, int y)
{
    return new (Active::pool.create()) BossSerpFloorCheck_1866(x, y);
}
static Image* images_bossserphitbox_1867_0_0[1];
static Direction direction_bossserphitbox_1867_0_0 = {0, 50, 50, 0, 1, images_bossserphitbox_1867_0_0, 1};
static Animation anim_bossserphitbox_1867_0 = {&direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, NULL, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0, &direction_bossserphitbox_1867_0_0};
static Animation * anim_array_bossserphitbox_1867[1] = {&anim_bossserphitbox_1867_0};
static Animations anim_bossserphitbox_1867 = {1, &anim_array_bossserphitbox_1867[0]};
static bool anim_bossserphitbox_1867_initialized;
class BossSerpHitbox_1867 : public Active
{
public:
    BossSerpHitbox_1867(int x, int y) : Active(x, y, BossSerpHitbox_1867_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_SerpHitbox", 15);
#endif
        set_visible(false);
        this->animations = &anim_bossserphitbox_1867;
        if (!anim_bossserphitbox_1867_initialized) {
            anim_bossserphitbox_1867_initialized = true;
            images_bossserphitbox_1867_0_0[0] = get_internal_image(7764);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 135);
        alterables->values.set(3, 4);
    }
};
FrameObject * create_bossserphitbox_1867(int x, int y)
{
    return new (Active::pool.create()) BossSerpHitbox_1867(x, y);
}
static Image* images_shieldserpentine_1868_0_0[5];
static Direction direction_shieldserpentine_1868_0_0 = {0, 50, 50, 0, -1, images_shieldserpentine_1868_0_0, 5};
static Animation anim_shieldserpentine_1868_0 = {&direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, NULL, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0, &direction_shieldserpentine_1868_0_0};
static Animation * anim_array_shieldserpentine_1868[1] = {&anim_shieldserpentine_1868_0};
static Animations anim_shieldserpentine_1868 = {1, &anim_array_shieldserpentine_1868[0]};
static bool anim_shieldserpentine_1868_initialized;
class ShieldSerpentine_1868 : public Active
{
public:
    ShieldSerpentine_1868(int x, int y) : Active(x, y, ShieldSerpentine_1868_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shield_Serpentine", 17);
#endif
        set_visible(false);
        this->animations = &anim_shieldserpentine_1868;
        if (!anim_shieldserpentine_1868_initialized) {
            anim_shieldserpentine_1868_initialized = true;
            images_shieldserpentine_1868_0_0[0] = get_internal_image(7248);
            images_shieldserpentine_1868_0_0[1] = get_internal_image(7249);
            images_shieldserpentine_1868_0_0[2] = get_internal_image(7250);
            images_shieldserpentine_1868_0_0[3] = get_internal_image(7251);
            images_shieldserpentine_1868_0_0[4] = get_internal_image(7252);
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
FrameObject * create_shieldserpentine_1868(int x, int y)
{
    return new (Active::pool.create()) ShieldSerpentine_1868(x, y);
}
static Image* images_ramp1_1869_0_0[1];
static Direction direction_ramp1_1869_0_0 = {0, 50, 50, 0, 1, images_ramp1_1869_0_0, 1};
static Animation anim_ramp1_1869_0 = {&direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, NULL, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0, &direction_ramp1_1869_0_0};
static Animation * anim_array_ramp1_1869[1] = {&anim_ramp1_1869_0};
static Animations anim_ramp1_1869 = {1, &anim_array_ramp1_1869[0]};
static bool anim_ramp1_1869_initialized;
class Ramp1_1869 : public Active
{
public:
    Ramp1_1869(int x, int y) : Active(x, y, Ramp1_1869_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Ramp 1", 6);
#endif
        this->animations = &anim_ramp1_1869;
        if (!anim_ramp1_1869_initialized) {
            anim_ramp1_1869_initialized = true;
            images_ramp1_1869_0_0[0] = get_internal_image(7246);
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
FrameObject * create_ramp1_1869(int x, int y)
{
    return new (Active::pool.create()) Ramp1_1869(x, y);
}
static Image* images_minibossufodebris_1870_0_0[1];
static Direction direction_minibossufodebris_1870_0_0 = {0, 50, 50, 0, -1, images_minibossufodebris_1870_0_0, 1};
static Animation anim_minibossufodebris_1870_0 = {&direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, NULL, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0, &direction_minibossufodebris_1870_0_0};
static Animation * anim_array_minibossufodebris_1870[1] = {&anim_minibossufodebris_1870_0};
static Animations anim_minibossufodebris_1870 = {1, &anim_array_minibossufodebris_1870[0]};
static bool anim_minibossufodebris_1870_initialized;
class MinibossUFODebris_1870 : public Active
{
public:
    MinibossUFODebris_1870(int x, int y) : Active(x, y, MinibossUFODebris_1870_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFODebris", 18);
#endif
        this->animations = &anim_minibossufodebris_1870;
        if (!anim_minibossufodebris_1870_initialized) {
            anim_minibossufodebris_1870_initialized = true;
            images_minibossufodebris_1870_0_0[0] = get_internal_image(516);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -4);
    }
};
FrameObject * create_minibossufodebris_1870(int x, int y)
{
    return new (Active::pool.create()) MinibossUFODebris_1870(x, y);
}
static Image* images_dragontunnelhide2_1871_0_0[1];
static Direction direction_dragontunnelhide2_1871_0_0 = {0, 50, 50, 0, 1, images_dragontunnelhide2_1871_0_0, 1};
static Animation anim_dragontunnelhide2_1871_0 = {&direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, NULL, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0, &direction_dragontunnelhide2_1871_0_0};
static Animation * anim_array_dragontunnelhide2_1871[1] = {&anim_dragontunnelhide2_1871_0};
static Animations anim_dragontunnelhide2_1871 = {1, &anim_array_dragontunnelhide2_1871[0]};
static bool anim_dragontunnelhide2_1871_initialized;
class DragonTunnelHide2_1871 : public Active
{
public:
    DragonTunnelHide2_1871(int x, int y) : Active(x, y, DragonTunnelHide2_1871_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DragonTunnelHide 2", 18);
#endif
        this->animations = &anim_dragontunnelhide2_1871;
        if (!anim_dragontunnelhide2_1871_initialized) {
            anim_dragontunnelhide2_1871_initialized = true;
            images_dragontunnelhide2_1871_0_0[0] = get_internal_image(3095);
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
FrameObject * create_dragontunnelhide2_1871(int x, int y)
{
    return new (Active::pool.create()) DragonTunnelHide2_1871(x, y);
}
static Image* images_layer0block_1872_0_0[1];
static Direction direction_layer0block_1872_0_0 = {0, 50, 50, 0, 1, images_layer0block_1872_0_0, 1};
static Animation anim_layer0block_1872_0 = {&direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, NULL, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0, &direction_layer0block_1872_0_0};
static Animation * anim_array_layer0block_1872[1] = {&anim_layer0block_1872_0};
static Animations anim_layer0block_1872 = {1, &anim_array_layer0block_1872[0]};
static bool anim_layer0block_1872_initialized;
class Layer0Block_1872 : public Active
{
public:
    Layer0Block_1872(int x, int y) : Active(x, y, Layer0Block_1872_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Block", 12);
#endif
        this->animations = &anim_layer0block_1872;
        if (!anim_layer0block_1872_initialized) {
            anim_layer0block_1872_initialized = true;
            images_layer0block_1872_0_0[0] = get_internal_image(11150);
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
FrameObject * create_layer0block_1872(int x, int y)
{
    return new (Active::pool.create()) Layer0Block_1872(x, y);
}
static Image* images_minibosssamuwheel_1873_0_0[1];
static Direction direction_minibosssamuwheel_1873_0_0 = {0, 50, 50, 0, 1, images_minibosssamuwheel_1873_0_0, 1};
static Animation anim_minibosssamuwheel_1873_0 = {&direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, NULL, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0, &direction_minibosssamuwheel_1873_0_0};
static Image* images_minibosssamuwheel_1873_7_0[2];
static Direction direction_minibosssamuwheel_1873_7_0 = {0, 50, 50, 0, -1, images_minibosssamuwheel_1873_7_0, 2};
static Animation anim_minibosssamuwheel_1873_7 = {&direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, NULL, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0, &direction_minibosssamuwheel_1873_7_0};
static Animation * anim_array_minibosssamuwheel_1873[8] = {&anim_minibosssamuwheel_1873_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosssamuwheel_1873_7};
static Animations anim_minibosssamuwheel_1873 = {8, &anim_array_minibosssamuwheel_1873[0]};
static bool anim_minibosssamuwheel_1873_initialized;
class MinibossSamuWheel_1873 : public Active
{
public:
    MinibossSamuWheel_1873(int x, int y) : Active(x, y, MinibossSamuWheel_1873_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_SamuWheel", 18);
#endif
        set_visible(false);
        this->animations = &anim_minibosssamuwheel_1873;
        if (!anim_minibosssamuwheel_1873_initialized) {
            anim_minibosssamuwheel_1873_initialized = true;
            images_minibosssamuwheel_1873_0_0[0] = get_internal_image(7541);
            images_minibosssamuwheel_1873_7_0[0] = get_internal_image(7542);
            images_minibosssamuwheel_1873_7_0[1] = get_internal_image(7541);
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
FrameObject * create_minibosssamuwheel_1873(int x, int y)
{
    return new (Active::pool.create()) MinibossSamuWheel_1873(x, y);
}
static Image* images_minibosssamulefthand_1874_0_0[1];
static Direction direction_minibosssamulefthand_1874_0_0 = {0, 0, 0, 0, 1, images_minibosssamulefthand_1874_0_0, 1};
static Animation anim_minibosssamulefthand_1874_0 = {&direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, NULL, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0, &direction_minibosssamulefthand_1874_0_0};
static Image* images_minibosssamulefthand_1874_8_0[2];
static Direction direction_minibosssamulefthand_1874_8_0 = {0, 50, 50, 0, -1, images_minibosssamulefthand_1874_8_0, 2};
static Animation anim_minibosssamulefthand_1874_8 = {&direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, NULL, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0, &direction_minibosssamulefthand_1874_8_0};
static Animation * anim_array_minibosssamulefthand_1874[9] = {&anim_minibosssamulefthand_1874_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosssamulefthand_1874_8};
static Animations anim_minibosssamulefthand_1874 = {9, &anim_array_minibosssamulefthand_1874[0]};
static bool anim_minibosssamulefthand_1874_initialized;
class MinibossSamuLeftHand_1874 : public Active
{
public:
    MinibossSamuLeftHand_1874(int x, int y) : Active(x, y, MinibossSamuLeftHand_1874_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_SamuLeftHand", 21);
#endif
        set_visible(false);
        this->animations = &anim_minibosssamulefthand_1874;
        if (!anim_minibosssamulefthand_1874_initialized) {
            anim_minibosssamulefthand_1874_initialized = true;
            images_minibosssamulefthand_1874_0_0[0] = get_internal_image(10221);
            images_minibosssamulefthand_1874_8_0[0] = get_internal_image(10221);
            images_minibosssamulefthand_1874_8_0[1] = get_internal_image(10222);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -56);
        alterables->values.set(1, 40);
    }
};
FrameObject * create_minibosssamulefthand_1874(int x, int y)
{
    return new (Active::pool.create()) MinibossSamuLeftHand_1874(x, y);
}
static Image* images_minibosssamurighthand_1875_0_0[1];
static Direction direction_minibosssamurighthand_1875_0_0 = {0, 0, 0, 0, 1, images_minibosssamurighthand_1875_0_0, 1};
static Animation anim_minibosssamurighthand_1875_0 = {&direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, NULL, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0, &direction_minibosssamurighthand_1875_0_0};
static Image* images_minibosssamurighthand_1875_8_0[2];
static Direction direction_minibosssamurighthand_1875_8_0 = {0, 50, 50, 0, -1, images_minibosssamurighthand_1875_8_0, 2};
static Animation anim_minibosssamurighthand_1875_8 = {&direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, NULL, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0, &direction_minibosssamurighthand_1875_8_0};
static Animation * anim_array_minibosssamurighthand_1875[9] = {&anim_minibosssamurighthand_1875_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosssamurighthand_1875_8};
static Animations anim_minibosssamurighthand_1875 = {9, &anim_array_minibosssamurighthand_1875[0]};
static bool anim_minibosssamurighthand_1875_initialized;
class MinibossSamuRightHand_1875 : public Active
{
public:
    MinibossSamuRightHand_1875(int x, int y) : Active(x, y, MinibossSamuRightHand_1875_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_SamuRightHand", 22);
#endif
        set_visible(false);
        this->animations = &anim_minibosssamurighthand_1875;
        if (!anim_minibosssamurighthand_1875_initialized) {
            anim_minibosssamurighthand_1875_initialized = true;
            images_minibosssamurighthand_1875_0_0[0] = get_internal_image(10223);
            images_minibosssamurighthand_1875_8_0[0] = get_internal_image(10223);
            images_minibosssamurighthand_1875_8_0[1] = get_internal_image(10224);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 56);
        alterables->values.set(1, 40);
    }
};
FrameObject * create_minibosssamurighthand_1875(int x, int y)
{
    return new (Active::pool.create()) MinibossSamuRightHand_1875(x, y);
}
static Image* images_minibosssamu_1876_0_0[1];
static Direction direction_minibosssamu_1876_0_0 = {0, 0, 0, 0, 1, images_minibosssamu_1876_0_0, 1};
static Image* images_minibosssamu_1876_0_16[1];
static Direction direction_minibosssamu_1876_0_16 = {16, 0, 0, 0, 1, images_minibosssamu_1876_0_16, 1};
static Image* images_minibosssamu_1876_0_24[1];
static Direction direction_minibosssamu_1876_0_24 = {24, 0, 0, 0, 1, images_minibosssamu_1876_0_24, 1};
static Animation anim_minibosssamu_1876_0 = {&direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, NULL, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, &direction_minibosssamu_1876_0_16, NULL, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, &direction_minibosssamu_1876_0_24, NULL, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0, &direction_minibosssamu_1876_0_0};
static Image* images_minibosssamu_1876_8_24[2];
static Direction direction_minibosssamu_1876_8_24 = {24, 50, 50, 0, -1, images_minibosssamu_1876_8_24, 2};
static Animation anim_minibosssamu_1876_8 = {&direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, NULL, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24, &direction_minibosssamu_1876_8_24};
static Image* images_minibosssamu_1876_9_0[1];
static Direction direction_minibosssamu_1876_9_0 = {0, 50, 50, 0, -1, images_minibosssamu_1876_9_0, 1};
static Animation anim_minibosssamu_1876_9 = {&direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, NULL, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0, &direction_minibosssamu_1876_9_0};
static Image* images_minibosssamu_1876_10_24[2];
static Direction direction_minibosssamu_1876_10_24 = {24, 50, 50, 0, -1, images_minibosssamu_1876_10_24, 2};
static Animation anim_minibosssamu_1876_10 = {&direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, NULL, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24, &direction_minibosssamu_1876_10_24};
static Animation * anim_array_minibosssamu_1876[11] = {&anim_minibosssamu_1876_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosssamu_1876_8, &anim_minibosssamu_1876_9, &anim_minibosssamu_1876_10};
static Animations anim_minibosssamu_1876 = {11, &anim_array_minibosssamu_1876[0]};
static bool anim_minibosssamu_1876_initialized;
class MinibossSamu_1876 : public Active
{
public:
    MinibossSamu_1876(int x, int y) : Active(x, y, MinibossSamu_1876_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_Samu", 13);
#endif
        set_visible(false);
        this->animations = &anim_minibosssamu_1876;
        if (!anim_minibosssamu_1876_initialized) {
            anim_minibosssamu_1876_initialized = true;
            images_minibosssamu_1876_0_0[0] = get_internal_image(10219);
            images_minibosssamu_1876_0_16[0] = get_internal_image(10216);
            images_minibosssamu_1876_0_24[0] = get_internal_image(4385);
            images_minibosssamu_1876_8_24[0] = get_internal_image(7557);
            images_minibosssamu_1876_8_24[1] = get_internal_image(7558);
            images_minibosssamu_1876_9_0[0] = get_internal_image(7549);
            images_minibosssamu_1876_10_24[0] = get_internal_image(4385);
            images_minibosssamu_1876_10_24[1] = get_internal_image(10217);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(0, 90);
        alterables->values.set(6, 8);
        alterables->values.set(14, 1);
        alterables->values.set(15, 1);
        alterables->values.set(17, 65);
    }
};
FrameObject * create_minibosssamu_1876(int x, int y)
{
    return new (Active::pool.create()) MinibossSamu_1876(x, y);
}
static Image* images_minibosssamufloorcheck_1877_0_0[1];
static Direction direction_minibosssamufloorcheck_1877_0_0 = {0, 50, 50, 0, 1, images_minibosssamufloorcheck_1877_0_0, 1};
static Animation anim_minibosssamufloorcheck_1877_0 = {&direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, NULL, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0, &direction_minibosssamufloorcheck_1877_0_0};
static Animation * anim_array_minibosssamufloorcheck_1877[1] = {&anim_minibosssamufloorcheck_1877_0};
static Animations anim_minibosssamufloorcheck_1877 = {1, &anim_array_minibosssamufloorcheck_1877[0]};
static bool anim_minibosssamufloorcheck_1877_initialized;
class MinibossSamuFloorCheck_1877 : public Active
{
public:
    MinibossSamuFloorCheck_1877(int x, int y) : Active(x, y, MinibossSamuFloorCheck_1877_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_SamuFloorCheck", 23);
#endif
        set_visible(false);
        this->animations = &anim_minibosssamufloorcheck_1877;
        if (!anim_minibosssamufloorcheck_1877_initialized) {
            anim_minibosssamufloorcheck_1877_initialized = true;
            images_minibosssamufloorcheck_1877_0_0[0] = get_internal_image(7560);
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
FrameObject * create_minibosssamufloorcheck_1877(int x, int y)
{
    return new (Active::pool.create()) MinibossSamuFloorCheck_1877(x, y);
}
static Image* images_bossgate_1878_0_0[1];
static Direction direction_bossgate_1878_0_0 = {0, 50, 50, 0, 1, images_bossgate_1878_0_0, 1};
static Animation anim_bossgate_1878_0 = {&direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, NULL, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0, &direction_bossgate_1878_0_0};
static Animation * anim_array_bossgate_1878[1] = {&anim_bossgate_1878_0};
static Animations anim_bossgate_1878 = {1, &anim_array_bossgate_1878[0]};
static bool anim_bossgate_1878_initialized;
class BossGate_1878 : public Active
{
public:
    BossGate_1878(int x, int y) : Active(x, y, BossGate_1878_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BossGate", 8);
#endif
        this->animations = &anim_bossgate_1878;
        if (!anim_bossgate_1878_initialized) {
            anim_bossgate_1878_initialized = true;
            images_bossgate_1878_0_0[0] = get_internal_image(11180);
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
FrameObject * create_bossgate_1878(int x, int y)
{
    return new (Active::pool.create()) BossGate_1878(x, y);
}
class MallEntrance3_1879 : public Backdrop
{
public:
    MallEntrance3_1879(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_Entrance 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7154);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallentrance3_1879(int x, int y)
{
    return new (Backdrop::pool.create()) MallEntrance3_1879(x, y);
}
class DialogData_1880 : public Text
{
public:
    DialogData_1880(int x, int y) : Text(x, y, DialogData_1880_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("06 06 se_02_01 Hold it right there you sparkly twit!", 52));
        add_line(std::string("01 24 li_11_01 What did you call me\?!", 37));
        add_line(std::string("06 06 se_02_02 You think you can just walk into this conflict, don't you\? Well I have news for you... this isn't your fight!", 124));
        add_line(std::string("01 66 li_11_02 It was the moment you brought it to our homeworld!", 65));
        add_line(std::string("06 09 se_02_03 So the duck man couldn't keep his mouth shut...", 62));
        add_line(std::string("06 09 se_02_04 Well I hope he realizes that he just cost you your life!", 71));
        add_line(std::string("01 12 li_11_03 You'll have to take it first, snake man!", 55));
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
FrameObject * create_dialogdata_1880(int x, int y)
{
    return new (Text::pool.create()) DialogData_1880(x, y);
}
class LevelParallaxPiece0m_1881 : public SystemBox
{
public:
    LevelParallaxPiece0m_1881(int x, int y) : SystemBox(x, y, LevelParallaxPiece0m_1881_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0m", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3634);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0m_1881(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0m_1881(x, y);
}
class LevelParallaxPiece1_1882 : public SystemBox
{
public:
    LevelParallaxPiece1_1882(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_1882_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 528;
        height = 528;
        type = PATTERN_IMAGE;
        image = get_internal_image(4332);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_1882(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_1882(x, y);
}
class LevelParallaxPiece2_1883 : public SystemBox
{
public:
    LevelParallaxPiece2_1883(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_1883_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 224;
        type = PATTERN_IMAGE;
        image = get_internal_image(4343);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_1883(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_1883(x, y);
}
static Image* images_gimmickpolepoddoor_1884_1_16[12];
static Direction direction_gimmickpolepoddoor_1884_1_16 = {16, 20, 20, 0, -1, images_gimmickpolepoddoor_1884_1_16, 12};
static Animation anim_gimmickpolepoddoor_1884_1 = {NULL, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16, &direction_gimmickpolepoddoor_1884_1_16};
static Animation * anim_array_gimmickpolepoddoor_1884[2] = {NULL, &anim_gimmickpolepoddoor_1884_1};
static Animations anim_gimmickpolepoddoor_1884 = {2, &anim_array_gimmickpolepoddoor_1884[0]};
static bool anim_gimmickpolepoddoor_1884_initialized;
class GimmickPolePodDoor_1884 : public Active
{
public:
    GimmickPolePodDoor_1884(int x, int y) : Active(x, y, GimmickPolePodDoor_1884_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PolePod_Door", 20);
#endif
        this->animations = &anim_gimmickpolepoddoor_1884;
        if (!anim_gimmickpolepoddoor_1884_initialized) {
            anim_gimmickpolepoddoor_1884_initialized = true;
            images_gimmickpolepoddoor_1884_1_16[0] = get_internal_image(7324);
            images_gimmickpolepoddoor_1884_1_16[1] = get_internal_image(7325);
            images_gimmickpolepoddoor_1884_1_16[2] = get_internal_image(7326);
            images_gimmickpolepoddoor_1884_1_16[3] = get_internal_image(7323);
            images_gimmickpolepoddoor_1884_1_16[4] = get_internal_image(7327);
            images_gimmickpolepoddoor_1884_1_16[5] = get_internal_image(7328);
            images_gimmickpolepoddoor_1884_1_16[6] = get_internal_image(7329);
            images_gimmickpolepoddoor_1884_1_16[7] = get_internal_image(7330);
            images_gimmickpolepoddoor_1884_1_16[8] = get_internal_image(7331);
            images_gimmickpolepoddoor_1884_1_16[9] = get_internal_image(7323);
            images_gimmickpolepoddoor_1884_1_16[10] = get_internal_image(7332);
            images_gimmickpolepoddoor_1884_1_16[11] = get_internal_image(7334);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = WALKING;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickpolepoddoor_1884(int x, int y)
{
    return new (Active::pool.create()) GimmickPolePodDoor_1884(x, y);
}
static Image* images_enemysoundwave_1885_0_0[1];
static Direction direction_enemysoundwave_1885_0_0 = {0, 50, 50, 0, 1, images_enemysoundwave_1885_0_0, 1};
static Image* images_enemysoundwave_1885_0_16[1];
static Direction direction_enemysoundwave_1885_0_16 = {16, 50, 50, 0, 1, images_enemysoundwave_1885_0_16, 1};
static Animation anim_enemysoundwave_1885_0 = {&direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, NULL, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, &direction_enemysoundwave_1885_0_16, NULL, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0, &direction_enemysoundwave_1885_0_0};
static Animation * anim_array_enemysoundwave_1885[1] = {&anim_enemysoundwave_1885_0};
static Animations anim_enemysoundwave_1885 = {1, &anim_array_enemysoundwave_1885[0]};
static bool anim_enemysoundwave_1885_initialized;
class EnemySoundwave_1885 : public Active
{
public:
    EnemySoundwave_1885(int x, int y) : Active(x, y, EnemySoundwave_1885_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Soundwave", 15);
#endif
        this->animations = &anim_enemysoundwave_1885;
        if (!anim_enemysoundwave_1885_initialized) {
            anim_enemysoundwave_1885_initialized = true;
            images_enemysoundwave_1885_0_0[0] = get_internal_image(1800);
            images_enemysoundwave_1885_0_16[0] = get_internal_image(5409);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, -1);
    }
};
FrameObject * create_enemysoundwave_1885(int x, int y)
{
    return new (Active::pool.create()) EnemySoundwave_1885(x, y);
}
class MosaicWall1_1886 : public Backdrop
{
public:
    MosaicWall1_1886(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MosaicWall 1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11447);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mosaicwall1_1886(int x, int y)
{
    return new (Backdrop::pool.create()) MosaicWall1_1886(x, y);
}
class MosaicWall2_1887 : public Backdrop
{
public:
    MosaicWall2_1887(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MosaicWall 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11456);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mosaicwall2_1887(int x, int y)
{
    return new (Backdrop::pool.create()) MosaicWall2_1887(x, y);
}
class MallScaleColumn1_1888 : public Backdrop
{
public:
    MallScaleColumn1_1888(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_ScaleColumn 1", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7305);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallscalecolumn1_1888(int x, int y)
{
    return new (Backdrop::pool.create()) MallScaleColumn1_1888(x, y);
}
class MallScaleColumn2_1889 : public Backdrop
{
public:
    MallScaleColumn2_1889(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_ScaleColumn 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11458);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallscalecolumn2_1889(int x, int y)
{
    return new (Backdrop::pool.create()) MallScaleColumn2_1889(x, y);
}
class MallFloor3_1890 : public Backdrop
{
public:
    MallFloor3_1890(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4881);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_mallfloor3_1890(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor3_1890(x, y);
}
class MallFloor1_1891 : public Backdrop
{
public:
    MallFloor1_1891(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2793);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_mallfloor1_1891(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor1_1891(x, y);
}
static Image* images_platformstilt1_1892_0_0[1];
static Direction direction_platformstilt1_1892_0_0 = {0, 50, 50, 0, 1, images_platformstilt1_1892_0_0, 1};
static Animation anim_platformstilt1_1892_0 = {&direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, NULL, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0, &direction_platformstilt1_1892_0_0};
static Animation * anim_array_platformstilt1_1892[1] = {&anim_platformstilt1_1892_0};
static Animations anim_platformstilt1_1892 = {1, &anim_array_platformstilt1_1892[0]};
static bool anim_platformstilt1_1892_initialized;
class PlatformStilt1_1892 : public Active
{
public:
    PlatformStilt1_1892(int x, int y) : Active(x, y, PlatformStilt1_1892_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Platform_Stilt 1", 16);
#endif
        this->animations = &anim_platformstilt1_1892;
        if (!anim_platformstilt1_1892_initialized) {
            anim_platformstilt1_1892_initialized = true;
            images_platformstilt1_1892_0_0[0] = get_internal_image(3125);
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
FrameObject * create_platformstilt1_1892(int x, int y)
{
    return new (Active::pool.create()) PlatformStilt1_1892(x, y);
}
static Image* images_platformstilt2_1893_0_0[1];
static Direction direction_platformstilt2_1893_0_0 = {0, 50, 50, 0, 1, images_platformstilt2_1893_0_0, 1};
static Animation anim_platformstilt2_1893_0 = {&direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, NULL, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0, &direction_platformstilt2_1893_0_0};
static Animation * anim_array_platformstilt2_1893[1] = {&anim_platformstilt2_1893_0};
static Animations anim_platformstilt2_1893 = {1, &anim_array_platformstilt2_1893[0]};
static bool anim_platformstilt2_1893_initialized;
class PlatformStilt2_1893 : public Active
{
public:
    PlatformStilt2_1893(int x, int y) : Active(x, y, PlatformStilt2_1893_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Platform_Stilt 2", 16);
#endif
        this->animations = &anim_platformstilt2_1893;
        if (!anim_platformstilt2_1893_initialized) {
            anim_platformstilt2_1893_initialized = true;
            images_platformstilt2_1893_0_0[0] = get_internal_image(3123);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -8);
    }
};
FrameObject * create_platformstilt2_1893(int x, int y)
{
    return new (Active::pool.create()) PlatformStilt2_1893(x, y);
}
static Image* images_platformstilt3_1894_0_0[1];
static Direction direction_platformstilt3_1894_0_0 = {0, 50, 50, 0, 1, images_platformstilt3_1894_0_0, 1};
static Animation anim_platformstilt3_1894_0 = {&direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, NULL, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0, &direction_platformstilt3_1894_0_0};
static Animation * anim_array_platformstilt3_1894[1] = {&anim_platformstilt3_1894_0};
static Animations anim_platformstilt3_1894 = {1, &anim_array_platformstilt3_1894[0]};
static bool anim_platformstilt3_1894_initialized;
class PlatformStilt3_1894 : public Active
{
public:
    PlatformStilt3_1894(int x, int y) : Active(x, y, PlatformStilt3_1894_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Platform_Stilt 3", 16);
#endif
        this->animations = &anim_platformstilt3_1894;
        if (!anim_platformstilt3_1894_initialized) {
            anim_platformstilt3_1894_initialized = true;
            images_platformstilt3_1894_0_0[0] = get_internal_image(3123);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -8);
    }
};
FrameObject * create_platformstilt3_1894(int x, int y)
{
    return new (Active::pool.create()) PlatformStilt3_1894(x, y);
}
static Image* images_platformstilt4_1895_0_0[1];
static Direction direction_platformstilt4_1895_0_0 = {0, 50, 50, 0, 1, images_platformstilt4_1895_0_0, 1};
static Animation anim_platformstilt4_1895_0 = {&direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, NULL, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0, &direction_platformstilt4_1895_0_0};
static Animation * anim_array_platformstilt4_1895[1] = {&anim_platformstilt4_1895_0};
static Animations anim_platformstilt4_1895 = {1, &anim_array_platformstilt4_1895[0]};
static bool anim_platformstilt4_1895_initialized;
class PlatformStilt4_1895 : public Active
{
public:
    PlatformStilt4_1895(int x, int y) : Active(x, y, PlatformStilt4_1895_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Platform_Stilt 4", 16);
#endif
        this->animations = &anim_platformstilt4_1895;
        if (!anim_platformstilt4_1895_initialized) {
            anim_platformstilt4_1895_initialized = true;
            images_platformstilt4_1895_0_0[0] = get_internal_image(3125);
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
FrameObject * create_platformstilt4_1895(int x, int y)
{
    return new (Active::pool.create()) PlatformStilt4_1895(x, y);
}
static Image* images_arrowlight_1896_0_0[12];
static Direction direction_arrowlight_1896_0_0 = {0, 25, 25, 0, -1, images_arrowlight_1896_0_0, 12};
static Animation anim_arrowlight_1896_0 = {&direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, NULL, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0, &direction_arrowlight_1896_0_0};
static Animation * anim_array_arrowlight_1896[1] = {&anim_arrowlight_1896_0};
static Animations anim_arrowlight_1896 = {1, &anim_array_arrowlight_1896[0]};
static bool anim_arrowlight_1896_initialized;
class ArrowLight_1896 : public Active
{
public:
    ArrowLight_1896(int x, int y) : Active(x, y, ArrowLight_1896_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ArrowLight", 10);
#endif
        this->animations = &anim_arrowlight_1896;
        if (!anim_arrowlight_1896_initialized) {
            anim_arrowlight_1896_initialized = true;
            images_arrowlight_1896_0_0[0] = get_internal_image(1533);
            images_arrowlight_1896_0_0[1] = get_internal_image(1556);
            images_arrowlight_1896_0_0[2] = get_internal_image(1555);
            images_arrowlight_1896_0_0[3] = get_internal_image(1547);
            images_arrowlight_1896_0_0[4] = get_internal_image(1557);
            images_arrowlight_1896_0_0[5] = get_internal_image(1558);
            images_arrowlight_1896_0_0[6] = get_internal_image(1549);
            images_arrowlight_1896_0_0[7] = get_internal_image(1536);
            images_arrowlight_1896_0_0[8] = get_internal_image(1576);
            images_arrowlight_1896_0_0[9] = get_internal_image(1552);
            images_arrowlight_1896_0_0[10] = get_internal_image(1579);
            images_arrowlight_1896_0_0[11] = get_internal_image(1577);
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
FrameObject * create_arrowlight_1896(int x, int y)
{
    return new (Active::pool.create()) ArrowLight_1896(x, y);
}
class MallFloor4_1897 : public Backdrop
{
public:
    MallFloor4_1897(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4542);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfloor4_1897(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor4_1897(x, y);
}
class FNStoneTreeBase_1898 : public Backdrop
{
public:
    FNStoneTreeBase_1898(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_StoneTreeBase", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(23);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnstonetreebase_1898(int x, int y)
{
    return new (Backdrop::pool.create()) FNStoneTreeBase_1898(x, y);
}
class FNGiantTV_1899 : public Backdrop
{
public:
    FNGiantTV_1899(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_GiantTV", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13206);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fngianttv_1899(int x, int y)
{
    return new (Backdrop::pool.create()) FNGiantTV_1899(x, y);
}
class FNLullaby_1900 : public QuickBackdrop
{
public:
    FNLullaby_1900(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Lullaby", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 64;
        image = get_internal_image(7744);
        outline = 0;
    }
};
FrameObject * create_fnlullaby_1900(int x, int y)
{
    return new (QuickBackdrop::pool.create()) FNLullaby_1900(x, y);
}
class LabstarPoster_1901 : public Backdrop
{
public:
    LabstarPoster_1901(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LabstarPoster", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7527);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_labstarposter_1901(int x, int y)
{
    return new (Backdrop::pool.create()) LabstarPoster_1901(x, y);
}
class HamsterTunnel9_1902 : public Backdrop
{
public:
    HamsterTunnel9_1902(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 9", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3255);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel9_1902(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel9_1902(x, y);
}
class HamsterTunnel10_1903 : public Backdrop
{
public:
    HamsterTunnel10_1903(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 10", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4032);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_hamstertunnel10_1903(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel10_1903(x, y);
}
class MallFloor7_1904 : public Backdrop
{
public:
    MallFloor7_1904(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 7", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11441);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_mallfloor7_1904(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor7_1904(x, y);
}
class HamsterTunnel8_1905 : public Backdrop
{
public:
    HamsterTunnel8_1905(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 8", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3254);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel8_1905(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel8_1905(x, y);
}
class ParasolBase_1906 : public Backdrop
{
public:
    ParasolBase_1906(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ParasolBase", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11439);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_parasolbase_1906(int x, int y)
{
    return new (Backdrop::pool.create()) ParasolBase_1906(x, y);
}
class ParasolBase2_1907 : public Backdrop
{
public:
    ParasolBase2_1907(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("ParasolBase 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11440);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_parasolbase2_1907(int x, int y)
{
    return new (Backdrop::pool.create()) ParasolBase2_1907(x, y);
}
class DiscoBallBase_1908 : public Backdrop
{
public:
    DiscoBallBase_1908(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DiscoBall_Base", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1139);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_discoballbase_1908(int x, int y)
{
    return new (Backdrop::pool.create()) DiscoBallBase_1908(x, y);
}
class FNTreeShadow_1909 : public Backdrop
{
public:
    FNTreeShadow_1909(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_TreeShadow", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7312);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 63);
    }
};
FrameObject * create_fntreeshadow_1909(int x, int y)
{
    return new (Backdrop::pool.create()) FNTreeShadow_1909(x, y);
}
class MallFountain1_1910 : public Backdrop
{
public:
    MallFountain1_1910(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFountain 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(437);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfountain1_1910(int x, int y)
{
    return new (Backdrop::pool.create()) MallFountain1_1910(x, y);
}
