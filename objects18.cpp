#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class LamppostBack_1709 : public Backdrop
{
public:
    LamppostBack_1709(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Lamppost_Back", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4284);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_lamppostback_1709(int x, int y)
{
    return new (Backdrop::pool.create()) LamppostBack_1709(x, y);
}
class FNFloor35_1710 : public Backdrop
{
public:
    FNFloor35_1710(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor35", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7482);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor35_1710(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor35_1710(x, y);
}
class FNFloor36_1711 : public Backdrop
{
public:
    FNFloor36_1711(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor36", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8042);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor36_1711(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor36_1711(x, y);
}
class Poster1_1712 : public Backdrop
{
public:
    Poster1_1712(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Poster 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13681);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_poster1_1712(int x, int y)
{
    return new (Backdrop::pool.create()) Poster1_1712(x, y);
}
class Poster2_1713 : public Backdrop
{
public:
    Poster2_1713(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Poster 2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11676);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_poster2_1713(int x, int y)
{
    return new (Backdrop::pool.create()) Poster2_1713(x, y);
}
class FNStatue_1714 : public Backdrop
{
public:
    FNStatue_1714(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Statue", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6249);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnstatue_1714(int x, int y)
{
    return new (Backdrop::pool.create()) FNStatue_1714(x, y);
}
static Image* images_gimmickrollingarch_1715_0_0[1];
static Direction direction_gimmickrollingarch_1715_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingarch_1715_0_0, 1};
static Animation anim_gimmickrollingarch_1715_0 = {&direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, NULL, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0, &direction_gimmickrollingarch_1715_0_0};
static Animation * anim_array_gimmickrollingarch_1715[1] = {&anim_gimmickrollingarch_1715_0};
static Animations anim_gimmickrollingarch_1715 = {1, &anim_array_gimmickrollingarch_1715[0]};
static bool anim_gimmickrollingarch_1715_initialized;
class GimmickRollingArch_1715 : public Active
{
public:
    GimmickRollingArch_1715(int x, int y) : Active(x, y, GimmickRollingArch_1715_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RollingArch", 19);
#endif
        this->animations = &anim_gimmickrollingarch_1715;
        if (!anim_gimmickrollingarch_1715_initialized) {
            anim_gimmickrollingarch_1715_initialized = true;
            images_gimmickrollingarch_1715_0_0[0] = get_internal_image(11144);
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
FrameObject * create_gimmickrollingarch_1715(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingArch_1715(x, y);
}
static Image* images_signstop_1716_0_0[16];
static Direction direction_signstop_1716_0_0 = {0, 0, 0, 0, -1, images_signstop_1716_0_0, 16};
static Animation anim_signstop_1716_0 = {&direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, NULL, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0, &direction_signstop_1716_0_0};
static Animation * anim_array_signstop_1716[1] = {&anim_signstop_1716_0};
static Animations anim_signstop_1716 = {1, &anim_array_signstop_1716[0]};
static bool anim_signstop_1716_initialized;
class SignStop_1716 : public Active
{
public:
    SignStop_1716(int x, int y) : Active(x, y, SignStop_1716_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sign_Stop", 9);
#endif
        this->animations = &anim_signstop_1716;
        if (!anim_signstop_1716_initialized) {
            anim_signstop_1716_initialized = true;
            images_signstop_1716_0_0[0] = get_internal_image(4287);
            images_signstop_1716_0_0[1] = get_internal_image(4288);
            images_signstop_1716_0_0[2] = get_internal_image(4299);
            images_signstop_1716_0_0[3] = get_internal_image(4302);
            images_signstop_1716_0_0[4] = get_internal_image(4304);
            images_signstop_1716_0_0[5] = get_internal_image(4290);
            images_signstop_1716_0_0[6] = get_internal_image(4294);
            images_signstop_1716_0_0[7] = get_internal_image(4292);
            images_signstop_1716_0_0[8] = get_internal_image(4293);
            images_signstop_1716_0_0[9] = get_internal_image(4295);
            images_signstop_1716_0_0[10] = get_internal_image(4291);
            images_signstop_1716_0_0[11] = get_internal_image(4296);
            images_signstop_1716_0_0[12] = get_internal_image(4297);
            images_signstop_1716_0_0[13] = get_internal_image(4300);
            images_signstop_1716_0_0[14] = get_internal_image(4298);
            images_signstop_1716_0_0[15] = get_internal_image(4303);
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
FrameObject * create_signstop_1716(int x, int y)
{
    return new (Active::pool.create()) SignStop_1716(x, y);
}
static Image* images_enemytrafficle_1717_0_0[4];
static Direction direction_enemytrafficle_1717_0_0 = {0, 50, 50, 0, -1, images_enemytrafficle_1717_0_0, 4};
static Animation anim_enemytrafficle_1717_0 = {&direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, NULL, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0, &direction_enemytrafficle_1717_0_0};
static Animation * anim_array_enemytrafficle_1717[1] = {&anim_enemytrafficle_1717_0};
static Animations anim_enemytrafficle_1717 = {1, &anim_array_enemytrafficle_1717[0]};
static bool anim_enemytrafficle_1717_initialized;
class EnemyTrafficle_1717 : public Active
{
public:
    EnemyTrafficle_1717(int x, int y) : Active(x, y, EnemyTrafficle_1717_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Trafficle", 15);
#endif
        this->animations = &anim_enemytrafficle_1717;
        if (!anim_enemytrafficle_1717_initialized) {
            anim_enemytrafficle_1717_initialized = true;
            images_enemytrafficle_1717_0_0[0] = get_internal_image(6822);
            images_enemytrafficle_1717_0_0[1] = get_internal_image(6821);
            images_enemytrafficle_1717_0_0[2] = get_internal_image(6823);
            images_enemytrafficle_1717_0_0[3] = get_internal_image(6824);
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
FrameObject * create_enemytrafficle_1717(int x, int y)
{
    return new (Active::pool.create()) EnemyTrafficle_1717(x, y);
}
static Image* images_minibossbulldozerdoor_1718_0_0[5];
static Direction direction_minibossbulldozerdoor_1718_0_0 = {0, 100, 100, 4, 1, images_minibossbulldozerdoor_1718_0_0, 5};
static Image* images_minibossbulldozerdoor_1718_0_16[5];
static Direction direction_minibossbulldozerdoor_1718_0_16 = {16, 100, 100, 4, 1, images_minibossbulldozerdoor_1718_0_16, 5};
static Animation anim_minibossbulldozerdoor_1718_0 = {&direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, NULL, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, &direction_minibossbulldozerdoor_1718_0_16, NULL, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0, &direction_minibossbulldozerdoor_1718_0_0};
static Image* images_minibossbulldozerdoor_1718_7_0[5];
static Direction direction_minibossbulldozerdoor_1718_7_0 = {0, 20, 20, 4, 1, images_minibossbulldozerdoor_1718_7_0, 5};
static Image* images_minibossbulldozerdoor_1718_7_16[5];
static Direction direction_minibossbulldozerdoor_1718_7_16 = {16, 20, 20, 4, 1, images_minibossbulldozerdoor_1718_7_16, 5};
static Animation anim_minibossbulldozerdoor_1718_7 = {&direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, NULL, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, &direction_minibossbulldozerdoor_1718_7_16, NULL, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0, &direction_minibossbulldozerdoor_1718_7_0};
static Image* images_minibossbulldozerdoor_1718_8_0[5];
static Direction direction_minibossbulldozerdoor_1718_8_0 = {0, 100, 100, 4, -1, images_minibossbulldozerdoor_1718_8_0, 5};
static Image* images_minibossbulldozerdoor_1718_8_16[5];
static Direction direction_minibossbulldozerdoor_1718_8_16 = {16, 100, 100, 4, -1, images_minibossbulldozerdoor_1718_8_16, 5};
static Animation anim_minibossbulldozerdoor_1718_8 = {&direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, NULL, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, &direction_minibossbulldozerdoor_1718_8_16, NULL, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0, &direction_minibossbulldozerdoor_1718_8_0};
static Image* images_minibossbulldozerdoor_1718_10_0[2];
static Direction direction_minibossbulldozerdoor_1718_10_0 = {0, 50, 50, 0, -1, images_minibossbulldozerdoor_1718_10_0, 2};
static Image* images_minibossbulldozerdoor_1718_10_16[2];
static Direction direction_minibossbulldozerdoor_1718_10_16 = {16, 50, 50, 0, -1, images_minibossbulldozerdoor_1718_10_16, 2};
static Animation anim_minibossbulldozerdoor_1718_10 = {&direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, NULL, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, &direction_minibossbulldozerdoor_1718_10_16, NULL, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0, &direction_minibossbulldozerdoor_1718_10_0};
static Animation * anim_array_minibossbulldozerdoor_1718[11] = {&anim_minibossbulldozerdoor_1718_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossbulldozerdoor_1718_7, &anim_minibossbulldozerdoor_1718_8, NULL, &anim_minibossbulldozerdoor_1718_10};
static Animations anim_minibossbulldozerdoor_1718 = {11, &anim_array_minibossbulldozerdoor_1718[0]};
static bool anim_minibossbulldozerdoor_1718_initialized;
class MinibossBulldozerDoor_1718 : public Active
{
public:
    MinibossBulldozerDoor_1718(int x, int y) : Active(x, y, MinibossBulldozerDoor_1718_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerDoor", 22);
#endif
        this->animations = &anim_minibossbulldozerdoor_1718;
        if (!anim_minibossbulldozerdoor_1718_initialized) {
            anim_minibossbulldozerdoor_1718_initialized = true;
            images_minibossbulldozerdoor_1718_0_0[0] = get_internal_image(6462);
            images_minibossbulldozerdoor_1718_0_0[1] = get_internal_image(6464);
            images_minibossbulldozerdoor_1718_0_0[2] = get_internal_image(6487);
            images_minibossbulldozerdoor_1718_0_0[3] = get_internal_image(6507);
            images_minibossbulldozerdoor_1718_0_0[4] = get_internal_image(6508);
            images_minibossbulldozerdoor_1718_0_16[0] = get_internal_image(1531);
            images_minibossbulldozerdoor_1718_0_16[1] = get_internal_image(1797);
            images_minibossbulldozerdoor_1718_0_16[2] = get_internal_image(6476);
            images_minibossbulldozerdoor_1718_0_16[3] = get_internal_image(6479);
            images_minibossbulldozerdoor_1718_0_16[4] = get_internal_image(1439);
            images_minibossbulldozerdoor_1718_7_0[0] = get_internal_image(6508);
            images_minibossbulldozerdoor_1718_7_0[1] = get_internal_image(6507);
            images_minibossbulldozerdoor_1718_7_0[2] = get_internal_image(6487);
            images_minibossbulldozerdoor_1718_7_0[3] = get_internal_image(6464);
            images_minibossbulldozerdoor_1718_7_0[4] = get_internal_image(6462);
            images_minibossbulldozerdoor_1718_7_16[0] = get_internal_image(1439);
            images_minibossbulldozerdoor_1718_7_16[1] = get_internal_image(6479);
            images_minibossbulldozerdoor_1718_7_16[2] = get_internal_image(6476);
            images_minibossbulldozerdoor_1718_7_16[3] = get_internal_image(1797);
            images_minibossbulldozerdoor_1718_7_16[4] = get_internal_image(1531);
            images_minibossbulldozerdoor_1718_8_0[0] = get_internal_image(6462);
            images_minibossbulldozerdoor_1718_8_0[1] = get_internal_image(6531);
            images_minibossbulldozerdoor_1718_8_0[2] = get_internal_image(6487);
            images_minibossbulldozerdoor_1718_8_0[3] = get_internal_image(6533);
            images_minibossbulldozerdoor_1718_8_0[4] = get_internal_image(6508);
            images_minibossbulldozerdoor_1718_8_16[0] = get_internal_image(1531);
            images_minibossbulldozerdoor_1718_8_16[1] = get_internal_image(1606);
            images_minibossbulldozerdoor_1718_8_16[2] = get_internal_image(6476);
            images_minibossbulldozerdoor_1718_8_16[3] = get_internal_image(6481);
            images_minibossbulldozerdoor_1718_8_16[4] = get_internal_image(1439);
            images_minibossbulldozerdoor_1718_10_0[0] = get_internal_image(6462);
            images_minibossbulldozerdoor_1718_10_0[1] = get_internal_image(6534);
            images_minibossbulldozerdoor_1718_10_16[0] = get_internal_image(1531);
            images_minibossbulldozerdoor_1718_10_16[1] = get_internal_image(6504);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_minibossbulldozerdoor_1718(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerDoor_1718(x, y);
}
static Image* images_minibossbulldozer_1719_0_0[4];
static Direction direction_minibossbulldozer_1719_0_0 = {0, 0, 0, 0, -1, images_minibossbulldozer_1719_0_0, 4};
static Image* images_minibossbulldozer_1719_0_16[4];
static Direction direction_minibossbulldozer_1719_0_16 = {16, 0, 0, 0, -1, images_minibossbulldozer_1719_0_16, 4};
static Animation anim_minibossbulldozer_1719_0 = {&direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, NULL, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, &direction_minibossbulldozer_1719_0_16, NULL, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0, &direction_minibossbulldozer_1719_0_0};
static Image* images_minibossbulldozer_1719_8_0[2];
static Direction direction_minibossbulldozer_1719_8_0 = {0, 50, 50, 0, -1, images_minibossbulldozer_1719_8_0, 2};
static Image* images_minibossbulldozer_1719_8_16[2];
static Direction direction_minibossbulldozer_1719_8_16 = {16, 50, 50, 0, -1, images_minibossbulldozer_1719_8_16, 2};
static Animation anim_minibossbulldozer_1719_8 = {&direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, NULL, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, &direction_minibossbulldozer_1719_8_16, NULL, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0, &direction_minibossbulldozer_1719_8_0};
static Image* images_minibossbulldozer_1719_10_0[1];
static Direction direction_minibossbulldozer_1719_10_0 = {0, 50, 50, 0, -1, images_minibossbulldozer_1719_10_0, 1};
static Image* images_minibossbulldozer_1719_10_16[1];
static Direction direction_minibossbulldozer_1719_10_16 = {16, 50, 50, 0, -1, images_minibossbulldozer_1719_10_16, 1};
static Animation anim_minibossbulldozer_1719_10 = {&direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, NULL, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, &direction_minibossbulldozer_1719_10_16, NULL, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0, &direction_minibossbulldozer_1719_10_0};
static Animation * anim_array_minibossbulldozer_1719[11] = {&anim_minibossbulldozer_1719_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossbulldozer_1719_8, NULL, &anim_minibossbulldozer_1719_10};
static Animations anim_minibossbulldozer_1719 = {11, &anim_array_minibossbulldozer_1719[0]};
static bool anim_minibossbulldozer_1719_initialized;
class MinibossBulldozer_1719 : public Active
{
public:
    MinibossBulldozer_1719(int x, int y) : Active(x, y, MinibossBulldozer_1719_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_Bulldozer", 18);
#endif
        this->animations = &anim_minibossbulldozer_1719;
        if (!anim_minibossbulldozer_1719_initialized) {
            anim_minibossbulldozer_1719_initialized = true;
            images_minibossbulldozer_1719_0_0[0] = get_internal_image(11179);
            images_minibossbulldozer_1719_0_0[1] = get_internal_image(11098);
            images_minibossbulldozer_1719_0_0[2] = get_internal_image(11184);
            images_minibossbulldozer_1719_0_0[3] = get_internal_image(11185);
            images_minibossbulldozer_1719_0_16[0] = get_internal_image(11086);
            images_minibossbulldozer_1719_0_16[1] = get_internal_image(11092);
            images_minibossbulldozer_1719_0_16[2] = get_internal_image(11093);
            images_minibossbulldozer_1719_0_16[3] = get_internal_image(11094);
            images_minibossbulldozer_1719_8_0[0] = get_internal_image(11179);
            images_minibossbulldozer_1719_8_0[1] = get_internal_image(11188);
            images_minibossbulldozer_1719_8_16[0] = get_internal_image(11086);
            images_minibossbulldozer_1719_8_16[1] = get_internal_image(11189);
            images_minibossbulldozer_1719_10_0[0] = get_internal_image(11095);
            images_minibossbulldozer_1719_10_16[0] = get_internal_image(11187);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 200);
        alterables->values.set(4, -1);
        alterables->values.set(12, -1);
    }
};
FrameObject * create_minibossbulldozer_1719(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozer_1719(x, y);
}
static Image* images_levelferriswheelpiece_1720_0_0[1];
static Direction direction_levelferriswheelpiece_1720_0_0 = {0, 50, 50, 0, 1, images_levelferriswheelpiece_1720_0_0, 1};
static Animation anim_levelferriswheelpiece_1720_0 = {&direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, NULL, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0, &direction_levelferriswheelpiece_1720_0_0};
static Animation * anim_array_levelferriswheelpiece_1720[1] = {&anim_levelferriswheelpiece_1720_0};
static Animations anim_levelferriswheelpiece_1720 = {1, &anim_array_levelferriswheelpiece_1720[0]};
static bool anim_levelferriswheelpiece_1720_initialized;
class LevelFerrisWheelPiece_1720 : public Active
{
public:
    LevelFerrisWheelPiece_1720(int x, int y) : Active(x, y, LevelFerrisWheelPiece_1720_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FerrisWheelPiece", 22);
#endif
        this->animations = &anim_levelferriswheelpiece_1720;
        if (!anim_levelferriswheelpiece_1720_initialized) {
            anim_levelferriswheelpiece_1720_initialized = true;
            images_levelferriswheelpiece_1720_0_0[0] = get_internal_image(6294);
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
FrameObject * create_levelferriswheelpiece_1720(int x, int y)
{
    return new (Active::pool.create()) LevelFerrisWheelPiece_1720(x, y);
}
static Image* images_minibossufobeam_1721_0_0[2];
static Direction direction_minibossufobeam_1721_0_0 = {0, 75, 75, 0, -1, images_minibossufobeam_1721_0_0, 2};
static Animation anim_minibossufobeam_1721_0 = {&direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, NULL, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0, &direction_minibossufobeam_1721_0_0};
static Animation * anim_array_minibossufobeam_1721[1] = {&anim_minibossufobeam_1721_0};
static Animations anim_minibossufobeam_1721 = {1, &anim_array_minibossufobeam_1721[0]};
static bool anim_minibossufobeam_1721_initialized;
class MinibossUFOBeam_1721 : public Active
{
public:
    MinibossUFOBeam_1721(int x, int y) : Active(x, y, MinibossUFOBeam_1721_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFOBeam", 16);
#endif
        set_visible(false);
        this->animations = &anim_minibossufobeam_1721;
        if (!anim_minibossufobeam_1721_initialized) {
            anim_minibossufobeam_1721_initialized = true;
            images_minibossufobeam_1721_0_0[0] = get_internal_image(1417);
            images_minibossufobeam_1721_0_0[1] = get_internal_image(1567);
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
FrameObject * create_minibossufobeam_1721(int x, int y)
{
    return new (Active::pool.create()) MinibossUFOBeam_1721(x, y);
}
static Image* images_minibossufohatch1_1722_0_0[1];
static Direction direction_minibossufohatch1_1722_0_0 = {0, 50, 50, 0, 1, images_minibossufohatch1_1722_0_0, 1};
static Animation anim_minibossufohatch1_1722_0 = {&direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, NULL, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0, &direction_minibossufohatch1_1722_0_0};
static Animation * anim_array_minibossufohatch1_1722[1] = {&anim_minibossufohatch1_1722_0};
static Animations anim_minibossufohatch1_1722 = {1, &anim_array_minibossufohatch1_1722[0]};
static bool anim_minibossufohatch1_1722_initialized;
class MinibossUFOHatch1_1722 : public Active
{
public:
    MinibossUFOHatch1_1722(int x, int y) : Active(x, y, MinibossUFOHatch1_1722_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFOHatch 1", 19);
#endif
        set_visible(false);
        this->animations = &anim_minibossufohatch1_1722;
        if (!anim_minibossufohatch1_1722_initialized) {
            anim_minibossufohatch1_1722_initialized = true;
            images_minibossufohatch1_1722_0_0[0] = get_internal_image(11231);
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
FrameObject * create_minibossufohatch1_1722(int x, int y)
{
    return new (Active::pool.create()) MinibossUFOHatch1_1722(x, y);
}
static Image* images_minibossufohatch2_1723_0_0[1];
static Direction direction_minibossufohatch2_1723_0_0 = {0, 50, 50, 0, 1, images_minibossufohatch2_1723_0_0, 1};
static Animation anim_minibossufohatch2_1723_0 = {&direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, NULL, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0, &direction_minibossufohatch2_1723_0_0};
static Animation * anim_array_minibossufohatch2_1723[1] = {&anim_minibossufohatch2_1723_0};
static Animations anim_minibossufohatch2_1723 = {1, &anim_array_minibossufohatch2_1723[0]};
static bool anim_minibossufohatch2_1723_initialized;
class MinibossUFOHatch2_1723 : public Active
{
public:
    MinibossUFOHatch2_1723(int x, int y) : Active(x, y, MinibossUFOHatch2_1723_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFOHatch 2", 19);
#endif
        set_visible(false);
        this->animations = &anim_minibossufohatch2_1723;
        if (!anim_minibossufohatch2_1723_initialized) {
            anim_minibossufohatch2_1723_initialized = true;
            images_minibossufohatch2_1723_0_0[0] = get_internal_image(11230);
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
FrameObject * create_minibossufohatch2_1723(int x, int y)
{
    return new (Active::pool.create()) MinibossUFOHatch2_1723(x, y);
}
static Image* images_pigeon_1724_0_0[1];
static Direction direction_pigeon_1724_0_0 = {0, 50, 50, 0, 1, images_pigeon_1724_0_0, 1};
static Image* images_pigeon_1724_0_16[1];
static Direction direction_pigeon_1724_0_16 = {16, 50, 50, 0, 1, images_pigeon_1724_0_16, 1};
static Animation anim_pigeon_1724_0 = {&direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, NULL, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, &direction_pigeon_1724_0_16, NULL, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0, &direction_pigeon_1724_0_0};
static Image* images_pigeon_1724_1_0[4];
static Direction direction_pigeon_1724_1_0 = {0, 50, 50, 0, -1, images_pigeon_1724_1_0, 4};
static Image* images_pigeon_1724_1_16[4];
static Direction direction_pigeon_1724_1_16 = {16, 50, 50, 0, -1, images_pigeon_1724_1_16, 4};
static Animation anim_pigeon_1724_1 = {&direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, NULL, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, &direction_pigeon_1724_1_16, NULL, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0, &direction_pigeon_1724_1_0};
static Image* images_pigeon_1724_7_0[6];
static Direction direction_pigeon_1724_7_0 = {0, 25, 25, 0, 1, images_pigeon_1724_7_0, 6};
static Image* images_pigeon_1724_7_1[6];
static Direction direction_pigeon_1724_7_1 = {1, 12, 12, 0, 1, images_pigeon_1724_7_1, 6};
static Image* images_pigeon_1724_7_16[6];
static Direction direction_pigeon_1724_7_16 = {16, 25, 25, 0, 1, images_pigeon_1724_7_16, 6};
static Image* images_pigeon_1724_7_17[6];
static Direction direction_pigeon_1724_7_17 = {17, 12, 12, 0, 1, images_pigeon_1724_7_17, 6};
static Animation anim_pigeon_1724_7 = {&direction_pigeon_1724_7_0, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_1, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_16, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_17, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0, &direction_pigeon_1724_7_0};
static Animation * anim_array_pigeon_1724[8] = {&anim_pigeon_1724_0, &anim_pigeon_1724_1, NULL, NULL, NULL, NULL, NULL, &anim_pigeon_1724_7};
static Animations anim_pigeon_1724 = {8, &anim_array_pigeon_1724[0]};
static bool anim_pigeon_1724_initialized;
class Pigeon_1724 : public Active
{
public:
    Pigeon_1724(int x, int y) : Active(x, y, Pigeon_1724_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("pigeon", 6);
#endif
        this->animations = &anim_pigeon_1724;
        if (!anim_pigeon_1724_initialized) {
            anim_pigeon_1724_initialized = true;
            images_pigeon_1724_0_0[0] = get_internal_image(4021);
            images_pigeon_1724_0_16[0] = get_internal_image(4212);
            images_pigeon_1724_1_0[0] = get_internal_image(3970);
            images_pigeon_1724_1_0[1] = get_internal_image(4067);
            images_pigeon_1724_1_0[2] = get_internal_image(4150);
            images_pigeon_1724_1_0[3] = get_internal_image(3968);
            images_pigeon_1724_1_16[0] = get_internal_image(4060);
            images_pigeon_1724_1_16[1] = get_internal_image(4153);
            images_pigeon_1724_1_16[2] = get_internal_image(4191);
            images_pigeon_1724_1_16[3] = get_internal_image(4205);
            images_pigeon_1724_7_0[0] = get_internal_image(4021);
            images_pigeon_1724_7_0[1] = get_internal_image(4213);
            images_pigeon_1724_7_0[2] = get_internal_image(4216);
            images_pigeon_1724_7_0[3] = get_internal_image(4216);
            images_pigeon_1724_7_0[4] = get_internal_image(4216);
            images_pigeon_1724_7_0[5] = get_internal_image(4213);
            images_pigeon_1724_7_1[0] = get_internal_image(4021);
            images_pigeon_1724_7_1[1] = get_internal_image(4225);
            images_pigeon_1724_7_1[2] = get_internal_image(4219);
            images_pigeon_1724_7_1[3] = get_internal_image(4219);
            images_pigeon_1724_7_1[4] = get_internal_image(4219);
            images_pigeon_1724_7_1[5] = get_internal_image(4225);
            images_pigeon_1724_7_16[0] = get_internal_image(4212);
            images_pigeon_1724_7_16[1] = get_internal_image(4214);
            images_pigeon_1724_7_16[2] = get_internal_image(4218);
            images_pigeon_1724_7_16[3] = get_internal_image(4218);
            images_pigeon_1724_7_16[4] = get_internal_image(4218);
            images_pigeon_1724_7_16[5] = get_internal_image(4214);
            images_pigeon_1724_7_17[0] = get_internal_image(4212);
            images_pigeon_1724_7_17[1] = get_internal_image(4220);
            images_pigeon_1724_7_17[2] = get_internal_image(4228);
            images_pigeon_1724_7_17[3] = get_internal_image(4228);
            images_pigeon_1724_7_17[4] = get_internal_image(4228);
            images_pigeon_1724_7_17[5] = get_internal_image(4220);
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
FrameObject * create_pigeon_1724(int x, int y)
{
    return new (Active::pool.create()) Pigeon_1724(x, y);
}
static Image* images_gimmickrollingarchbase_1725_0_0[1];
static Direction direction_gimmickrollingarchbase_1725_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingarchbase_1725_0_0, 1};
static Animation anim_gimmickrollingarchbase_1725_0 = {&direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, NULL, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0, &direction_gimmickrollingarchbase_1725_0_0};
static Animation * anim_array_gimmickrollingarchbase_1725[1] = {&anim_gimmickrollingarchbase_1725_0};
static Animations anim_gimmickrollingarchbase_1725 = {1, &anim_array_gimmickrollingarchbase_1725[0]};
static bool anim_gimmickrollingarchbase_1725_initialized;
class GimmickRollingArchBase_1725 : public Active
{
public:
    GimmickRollingArchBase_1725(int x, int y) : Active(x, y, GimmickRollingArchBase_1725_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_RollingArchBase", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickrollingarchbase_1725;
        if (!anim_gimmickrollingarchbase_1725_initialized) {
            anim_gimmickrollingarchbase_1725_initialized = true;
            images_gimmickrollingarchbase_1725_0_0[0] = get_internal_image(6309);
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
FrameObject * create_gimmickrollingarchbase_1725(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingArchBase_1725(x, y);
}
static Image* images_gimmickrollingarch2_1726_0_0[1];
static Direction direction_gimmickrollingarch2_1726_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingarch2_1726_0_0, 1};
static Animation anim_gimmickrollingarch2_1726_0 = {&direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, NULL, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0, &direction_gimmickrollingarch2_1726_0_0};
static Animation * anim_array_gimmickrollingarch2_1726[1] = {&anim_gimmickrollingarch2_1726_0};
static Animations anim_gimmickrollingarch2_1726 = {1, &anim_array_gimmickrollingarch2_1726[0]};
static bool anim_gimmickrollingarch2_1726_initialized;
class GimmickRollingArch2_1726 : public Active
{
public:
    GimmickRollingArch2_1726(int x, int y) : Active(x, y, GimmickRollingArch2_1726_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RollingArch 2", 21);
#endif
        this->animations = &anim_gimmickrollingarch2_1726;
        if (!anim_gimmickrollingarch2_1726_initialized) {
            anim_gimmickrollingarch2_1726_initialized = true;
            images_gimmickrollingarch2_1726_0_0[0] = get_internal_image(11145);
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
FrameObject * create_gimmickrollingarch2_1726(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingArch2_1726(x, y);
}
static Image* images_gimmicklanternbridge1_1727_0_0[1];
static Direction direction_gimmicklanternbridge1_1727_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_0, 1};
static Image* images_gimmicklanternbridge1_1727_0_1[1];
static Direction direction_gimmicklanternbridge1_1727_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_1, 1};
static Image* images_gimmicklanternbridge1_1727_0_2[1];
static Direction direction_gimmicklanternbridge1_1727_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_2, 1};
static Image* images_gimmicklanternbridge1_1727_0_3[1];
static Direction direction_gimmicklanternbridge1_1727_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_3, 1};
static Image* images_gimmicklanternbridge1_1727_0_4[1];
static Direction direction_gimmicklanternbridge1_1727_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_4, 1};
static Image* images_gimmicklanternbridge1_1727_0_5[1];
static Direction direction_gimmicklanternbridge1_1727_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_5, 1};
static Image* images_gimmicklanternbridge1_1727_0_6[1];
static Direction direction_gimmicklanternbridge1_1727_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_6, 1};
static Image* images_gimmicklanternbridge1_1727_0_7[1];
static Direction direction_gimmicklanternbridge1_1727_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge1_1727_0_7, 1};
static Animation anim_gimmicklanternbridge1_1727_0 = {&direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_1, &direction_gimmicklanternbridge1_1727_0_2, &direction_gimmicklanternbridge1_1727_0_3, &direction_gimmicklanternbridge1_1727_0_4, &direction_gimmicklanternbridge1_1727_0_5, &direction_gimmicklanternbridge1_1727_0_6, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_7, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0, &direction_gimmicklanternbridge1_1727_0_0};
static Animation * anim_array_gimmicklanternbridge1_1727[1] = {&anim_gimmicklanternbridge1_1727_0};
static Animations anim_gimmicklanternbridge1_1727 = {1, &anim_array_gimmicklanternbridge1_1727[0]};
static bool anim_gimmicklanternbridge1_1727_initialized;
class GimmickLanternBridge1_1727 : public Active
{
public:
    GimmickLanternBridge1_1727(int x, int y) : Active(x, y, GimmickLanternBridge1_1727_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 1", 23);
#endif
        this->animations = &anim_gimmicklanternbridge1_1727;
        if (!anim_gimmicklanternbridge1_1727_initialized) {
            anim_gimmicklanternbridge1_1727_initialized = true;
            images_gimmicklanternbridge1_1727_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge1_1727_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge1_1727_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge1_1727_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge1_1727_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge1_1727_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge1_1727_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge1_1727_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge1_1727(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge1_1727(x, y);
}
static Image* images_gimmicklanternbridge2_1728_0_0[1];
static Direction direction_gimmicklanternbridge2_1728_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_0, 1};
static Image* images_gimmicklanternbridge2_1728_0_1[1];
static Direction direction_gimmicklanternbridge2_1728_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_1, 1};
static Image* images_gimmicklanternbridge2_1728_0_2[1];
static Direction direction_gimmicklanternbridge2_1728_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_2, 1};
static Image* images_gimmicklanternbridge2_1728_0_3[1];
static Direction direction_gimmicklanternbridge2_1728_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_3, 1};
static Image* images_gimmicklanternbridge2_1728_0_4[1];
static Direction direction_gimmicklanternbridge2_1728_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_4, 1};
static Image* images_gimmicklanternbridge2_1728_0_5[1];
static Direction direction_gimmicklanternbridge2_1728_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_5, 1};
static Image* images_gimmicklanternbridge2_1728_0_6[1];
static Direction direction_gimmicklanternbridge2_1728_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_6, 1};
static Image* images_gimmicklanternbridge2_1728_0_7[1];
static Direction direction_gimmicklanternbridge2_1728_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge2_1728_0_7, 1};
static Animation anim_gimmicklanternbridge2_1728_0 = {&direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_1, &direction_gimmicklanternbridge2_1728_0_2, &direction_gimmicklanternbridge2_1728_0_3, &direction_gimmicklanternbridge2_1728_0_4, &direction_gimmicklanternbridge2_1728_0_5, &direction_gimmicklanternbridge2_1728_0_6, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_7, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0, &direction_gimmicklanternbridge2_1728_0_0};
static Animation * anim_array_gimmicklanternbridge2_1728[1] = {&anim_gimmicklanternbridge2_1728_0};
static Animations anim_gimmicklanternbridge2_1728 = {1, &anim_array_gimmicklanternbridge2_1728[0]};
static bool anim_gimmicklanternbridge2_1728_initialized;
class GimmickLanternBridge2_1728 : public Active
{
public:
    GimmickLanternBridge2_1728(int x, int y) : Active(x, y, GimmickLanternBridge2_1728_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 2", 23);
#endif
        this->animations = &anim_gimmicklanternbridge2_1728;
        if (!anim_gimmicklanternbridge2_1728_initialized) {
            anim_gimmicklanternbridge2_1728_initialized = true;
            images_gimmicklanternbridge2_1728_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge2_1728_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge2_1728_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge2_1728_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge2_1728_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge2_1728_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge2_1728_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge2_1728_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge2_1728(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge2_1728(x, y);
}
static Image* images_gimmicklanternbridge3_1729_0_0[1];
static Direction direction_gimmicklanternbridge3_1729_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_0, 1};
static Image* images_gimmicklanternbridge3_1729_0_1[1];
static Direction direction_gimmicklanternbridge3_1729_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_1, 1};
static Image* images_gimmicklanternbridge3_1729_0_2[1];
static Direction direction_gimmicklanternbridge3_1729_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_2, 1};
static Image* images_gimmicklanternbridge3_1729_0_3[1];
static Direction direction_gimmicklanternbridge3_1729_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_3, 1};
static Image* images_gimmicklanternbridge3_1729_0_4[1];
static Direction direction_gimmicklanternbridge3_1729_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_4, 1};
static Image* images_gimmicklanternbridge3_1729_0_5[1];
static Direction direction_gimmicklanternbridge3_1729_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_5, 1};
static Image* images_gimmicklanternbridge3_1729_0_6[1];
static Direction direction_gimmicklanternbridge3_1729_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_6, 1};
static Image* images_gimmicklanternbridge3_1729_0_7[1];
static Direction direction_gimmicklanternbridge3_1729_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge3_1729_0_7, 1};
static Animation anim_gimmicklanternbridge3_1729_0 = {&direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_1, &direction_gimmicklanternbridge3_1729_0_2, &direction_gimmicklanternbridge3_1729_0_3, &direction_gimmicklanternbridge3_1729_0_4, &direction_gimmicklanternbridge3_1729_0_5, &direction_gimmicklanternbridge3_1729_0_6, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_7, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0, &direction_gimmicklanternbridge3_1729_0_0};
static Animation * anim_array_gimmicklanternbridge3_1729[1] = {&anim_gimmicklanternbridge3_1729_0};
static Animations anim_gimmicklanternbridge3_1729 = {1, &anim_array_gimmicklanternbridge3_1729[0]};
static bool anim_gimmicklanternbridge3_1729_initialized;
class GimmickLanternBridge3_1729 : public Active
{
public:
    GimmickLanternBridge3_1729(int x, int y) : Active(x, y, GimmickLanternBridge3_1729_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 3", 23);
#endif
        this->animations = &anim_gimmicklanternbridge3_1729;
        if (!anim_gimmicklanternbridge3_1729_initialized) {
            anim_gimmicklanternbridge3_1729_initialized = true;
            images_gimmicklanternbridge3_1729_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge3_1729_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge3_1729_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge3_1729_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge3_1729_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge3_1729_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge3_1729_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge3_1729_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge3_1729(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge3_1729(x, y);
}
static Image* images_gimmicklanternbridge4_1730_0_0[1];
static Direction direction_gimmicklanternbridge4_1730_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_0, 1};
static Image* images_gimmicklanternbridge4_1730_0_1[1];
static Direction direction_gimmicklanternbridge4_1730_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_1, 1};
static Image* images_gimmicklanternbridge4_1730_0_2[1];
static Direction direction_gimmicklanternbridge4_1730_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_2, 1};
static Image* images_gimmicklanternbridge4_1730_0_3[1];
static Direction direction_gimmicklanternbridge4_1730_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_3, 1};
static Image* images_gimmicklanternbridge4_1730_0_4[1];
static Direction direction_gimmicklanternbridge4_1730_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_4, 1};
static Image* images_gimmicklanternbridge4_1730_0_5[1];
static Direction direction_gimmicklanternbridge4_1730_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_5, 1};
static Image* images_gimmicklanternbridge4_1730_0_6[1];
static Direction direction_gimmicklanternbridge4_1730_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_6, 1};
static Image* images_gimmicklanternbridge4_1730_0_7[1];
static Direction direction_gimmicklanternbridge4_1730_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge4_1730_0_7, 1};
static Animation anim_gimmicklanternbridge4_1730_0 = {&direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_1, &direction_gimmicklanternbridge4_1730_0_2, &direction_gimmicklanternbridge4_1730_0_3, &direction_gimmicklanternbridge4_1730_0_4, &direction_gimmicklanternbridge4_1730_0_5, &direction_gimmicklanternbridge4_1730_0_6, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_7, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0, &direction_gimmicklanternbridge4_1730_0_0};
static Animation * anim_array_gimmicklanternbridge4_1730[1] = {&anim_gimmicklanternbridge4_1730_0};
static Animations anim_gimmicklanternbridge4_1730 = {1, &anim_array_gimmicklanternbridge4_1730[0]};
static bool anim_gimmicklanternbridge4_1730_initialized;
class GimmickLanternBridge4_1730 : public Active
{
public:
    GimmickLanternBridge4_1730(int x, int y) : Active(x, y, GimmickLanternBridge4_1730_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 4", 23);
#endif
        this->animations = &anim_gimmicklanternbridge4_1730;
        if (!anim_gimmicklanternbridge4_1730_initialized) {
            anim_gimmicklanternbridge4_1730_initialized = true;
            images_gimmicklanternbridge4_1730_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge4_1730_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge4_1730_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge4_1730_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge4_1730_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge4_1730_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge4_1730_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge4_1730_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge4_1730(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge4_1730(x, y);
}
static Image* images_gimmicklanternbridge5_1731_0_0[1];
static Direction direction_gimmicklanternbridge5_1731_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_0, 1};
static Image* images_gimmicklanternbridge5_1731_0_1[1];
static Direction direction_gimmicklanternbridge5_1731_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_1, 1};
static Image* images_gimmicklanternbridge5_1731_0_2[1];
static Direction direction_gimmicklanternbridge5_1731_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_2, 1};
static Image* images_gimmicklanternbridge5_1731_0_3[1];
static Direction direction_gimmicklanternbridge5_1731_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_3, 1};
static Image* images_gimmicklanternbridge5_1731_0_4[1];
static Direction direction_gimmicklanternbridge5_1731_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_4, 1};
static Image* images_gimmicklanternbridge5_1731_0_5[1];
static Direction direction_gimmicklanternbridge5_1731_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_5, 1};
static Image* images_gimmicklanternbridge5_1731_0_6[1];
static Direction direction_gimmicklanternbridge5_1731_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_6, 1};
static Image* images_gimmicklanternbridge5_1731_0_7[1];
static Direction direction_gimmicklanternbridge5_1731_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge5_1731_0_7, 1};
static Animation anim_gimmicklanternbridge5_1731_0 = {&direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_1, &direction_gimmicklanternbridge5_1731_0_2, &direction_gimmicklanternbridge5_1731_0_3, &direction_gimmicklanternbridge5_1731_0_4, &direction_gimmicklanternbridge5_1731_0_5, &direction_gimmicklanternbridge5_1731_0_6, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_7, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0, &direction_gimmicklanternbridge5_1731_0_0};
static Animation * anim_array_gimmicklanternbridge5_1731[1] = {&anim_gimmicklanternbridge5_1731_0};
static Animations anim_gimmicklanternbridge5_1731 = {1, &anim_array_gimmicklanternbridge5_1731[0]};
static bool anim_gimmicklanternbridge5_1731_initialized;
class GimmickLanternBridge5_1731 : public Active
{
public:
    GimmickLanternBridge5_1731(int x, int y) : Active(x, y, GimmickLanternBridge5_1731_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 5", 23);
#endif
        this->animations = &anim_gimmicklanternbridge5_1731;
        if (!anim_gimmicklanternbridge5_1731_initialized) {
            anim_gimmicklanternbridge5_1731_initialized = true;
            images_gimmicklanternbridge5_1731_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge5_1731_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge5_1731_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge5_1731_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge5_1731_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge5_1731_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge5_1731_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge5_1731_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge5_1731(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge5_1731(x, y);
}
static Image* images_gimmicklanternbridge6_1732_0_0[1];
static Direction direction_gimmicklanternbridge6_1732_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_0, 1};
static Image* images_gimmicklanternbridge6_1732_0_1[1];
static Direction direction_gimmicklanternbridge6_1732_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_1, 1};
static Image* images_gimmicklanternbridge6_1732_0_2[1];
static Direction direction_gimmicklanternbridge6_1732_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_2, 1};
static Image* images_gimmicklanternbridge6_1732_0_3[1];
static Direction direction_gimmicklanternbridge6_1732_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_3, 1};
static Image* images_gimmicklanternbridge6_1732_0_4[1];
static Direction direction_gimmicklanternbridge6_1732_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_4, 1};
static Image* images_gimmicklanternbridge6_1732_0_5[1];
static Direction direction_gimmicklanternbridge6_1732_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_5, 1};
static Image* images_gimmicklanternbridge6_1732_0_6[1];
static Direction direction_gimmicklanternbridge6_1732_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_6, 1};
static Image* images_gimmicklanternbridge6_1732_0_7[1];
static Direction direction_gimmicklanternbridge6_1732_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge6_1732_0_7, 1};
static Animation anim_gimmicklanternbridge6_1732_0 = {&direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_1, &direction_gimmicklanternbridge6_1732_0_2, &direction_gimmicklanternbridge6_1732_0_3, &direction_gimmicklanternbridge6_1732_0_4, &direction_gimmicklanternbridge6_1732_0_5, &direction_gimmicklanternbridge6_1732_0_6, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_7, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0, &direction_gimmicklanternbridge6_1732_0_0};
static Animation * anim_array_gimmicklanternbridge6_1732[1] = {&anim_gimmicklanternbridge6_1732_0};
static Animations anim_gimmicklanternbridge6_1732 = {1, &anim_array_gimmicklanternbridge6_1732[0]};
static bool anim_gimmicklanternbridge6_1732_initialized;
class GimmickLanternBridge6_1732 : public Active
{
public:
    GimmickLanternBridge6_1732(int x, int y) : Active(x, y, GimmickLanternBridge6_1732_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 6", 23);
#endif
        this->animations = &anim_gimmicklanternbridge6_1732;
        if (!anim_gimmicklanternbridge6_1732_initialized) {
            anim_gimmicklanternbridge6_1732_initialized = true;
            images_gimmicklanternbridge6_1732_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge6_1732_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge6_1732_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge6_1732_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge6_1732_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge6_1732_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge6_1732_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge6_1732_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge6_1732(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge6_1732(x, y);
}
static Image* images_gimmicklanternbridge7_1733_0_0[1];
static Direction direction_gimmicklanternbridge7_1733_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_0, 1};
static Image* images_gimmicklanternbridge7_1733_0_1[1];
static Direction direction_gimmicklanternbridge7_1733_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_1, 1};
static Image* images_gimmicklanternbridge7_1733_0_2[1];
static Direction direction_gimmicklanternbridge7_1733_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_2, 1};
static Image* images_gimmicklanternbridge7_1733_0_3[1];
static Direction direction_gimmicklanternbridge7_1733_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_3, 1};
static Image* images_gimmicklanternbridge7_1733_0_4[1];
static Direction direction_gimmicklanternbridge7_1733_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_4, 1};
static Image* images_gimmicklanternbridge7_1733_0_5[1];
static Direction direction_gimmicklanternbridge7_1733_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_5, 1};
static Image* images_gimmicklanternbridge7_1733_0_6[1];
static Direction direction_gimmicklanternbridge7_1733_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_6, 1};
static Image* images_gimmicklanternbridge7_1733_0_7[1];
static Direction direction_gimmicklanternbridge7_1733_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge7_1733_0_7, 1};
static Animation anim_gimmicklanternbridge7_1733_0 = {&direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_1, &direction_gimmicklanternbridge7_1733_0_2, &direction_gimmicklanternbridge7_1733_0_3, &direction_gimmicklanternbridge7_1733_0_4, &direction_gimmicklanternbridge7_1733_0_5, &direction_gimmicklanternbridge7_1733_0_6, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_7, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0, &direction_gimmicklanternbridge7_1733_0_0};
static Animation * anim_array_gimmicklanternbridge7_1733[1] = {&anim_gimmicklanternbridge7_1733_0};
static Animations anim_gimmicklanternbridge7_1733 = {1, &anim_array_gimmicklanternbridge7_1733[0]};
static bool anim_gimmicklanternbridge7_1733_initialized;
class GimmickLanternBridge7_1733 : public Active
{
public:
    GimmickLanternBridge7_1733(int x, int y) : Active(x, y, GimmickLanternBridge7_1733_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 7", 23);
#endif
        this->animations = &anim_gimmicklanternbridge7_1733;
        if (!anim_gimmicklanternbridge7_1733_initialized) {
            anim_gimmicklanternbridge7_1733_initialized = true;
            images_gimmicklanternbridge7_1733_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge7_1733_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge7_1733_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge7_1733_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge7_1733_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge7_1733_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge7_1733_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge7_1733_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge7_1733(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge7_1733(x, y);
}
static Image* images_gimmicklanternbridge8_1734_0_0[1];
static Direction direction_gimmicklanternbridge8_1734_0_0 = {0, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_0, 1};
static Image* images_gimmicklanternbridge8_1734_0_1[1];
static Direction direction_gimmicklanternbridge8_1734_0_1 = {1, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_1, 1};
static Image* images_gimmicklanternbridge8_1734_0_2[1];
static Direction direction_gimmicklanternbridge8_1734_0_2 = {2, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_2, 1};
static Image* images_gimmicklanternbridge8_1734_0_3[1];
static Direction direction_gimmicklanternbridge8_1734_0_3 = {3, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_3, 1};
static Image* images_gimmicklanternbridge8_1734_0_4[1];
static Direction direction_gimmicklanternbridge8_1734_0_4 = {4, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_4, 1};
static Image* images_gimmicklanternbridge8_1734_0_5[1];
static Direction direction_gimmicklanternbridge8_1734_0_5 = {5, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_5, 1};
static Image* images_gimmicklanternbridge8_1734_0_6[1];
static Direction direction_gimmicklanternbridge8_1734_0_6 = {6, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_6, 1};
static Image* images_gimmicklanternbridge8_1734_0_7[1];
static Direction direction_gimmicklanternbridge8_1734_0_7 = {7, 50, 50, 0, 1, images_gimmicklanternbridge8_1734_0_7, 1};
static Animation anim_gimmicklanternbridge8_1734_0 = {&direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_1, &direction_gimmicklanternbridge8_1734_0_2, &direction_gimmicklanternbridge8_1734_0_3, &direction_gimmicklanternbridge8_1734_0_4, &direction_gimmicklanternbridge8_1734_0_5, &direction_gimmicklanternbridge8_1734_0_6, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_7, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0, &direction_gimmicklanternbridge8_1734_0_0};
static Animation * anim_array_gimmicklanternbridge8_1734[1] = {&anim_gimmicklanternbridge8_1734_0};
static Animations anim_gimmicklanternbridge8_1734 = {1, &anim_array_gimmicklanternbridge8_1734[0]};
static bool anim_gimmicklanternbridge8_1734_initialized;
class GimmickLanternBridge8_1734 : public Active
{
public:
    GimmickLanternBridge8_1734(int x, int y) : Active(x, y, GimmickLanternBridge8_1734_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_LanternBridge 8", 23);
#endif
        this->animations = &anim_gimmicklanternbridge8_1734;
        if (!anim_gimmicklanternbridge8_1734_initialized) {
            anim_gimmicklanternbridge8_1734_initialized = true;
            images_gimmicklanternbridge8_1734_0_0[0] = get_internal_image(8408);
            images_gimmicklanternbridge8_1734_0_1[0] = get_internal_image(8407);
            images_gimmicklanternbridge8_1734_0_2[0] = get_internal_image(8410);
            images_gimmicklanternbridge8_1734_0_3[0] = get_internal_image(8411);
            images_gimmicklanternbridge8_1734_0_4[0] = get_internal_image(8467);
            images_gimmicklanternbridge8_1734_0_5[0] = get_internal_image(8468);
            images_gimmicklanternbridge8_1734_0_6[0] = get_internal_image(8469);
            images_gimmicklanternbridge8_1734_0_7[0] = get_internal_image(8470);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_gimmicklanternbridge8_1734(int x, int y)
{
    return new (Active::pool.create()) GimmickLanternBridge8_1734(x, y);
}
static Image* images_goldplatform1_1735_0_0[1];
static Direction direction_goldplatform1_1735_0_0 = {0, 50, 50, 0, 1, images_goldplatform1_1735_0_0, 1};
static Animation anim_goldplatform1_1735_0 = {&direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, NULL, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0, &direction_goldplatform1_1735_0_0};
static Animation * anim_array_goldplatform1_1735[1] = {&anim_goldplatform1_1735_0};
static Animations anim_goldplatform1_1735 = {1, &anim_array_goldplatform1_1735[0]};
static bool anim_goldplatform1_1735_initialized;
class GoldPlatform1_1735 : public Active
{
public:
    GoldPlatform1_1735(int x, int y) : Active(x, y, GoldPlatform1_1735_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gold platform 1", 15);
#endif
        this->animations = &anim_goldplatform1_1735;
        if (!anim_goldplatform1_1735_initialized) {
            anim_goldplatform1_1735_initialized = true;
            images_goldplatform1_1735_0_0[0] = get_internal_image(6312);
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
FrameObject * create_goldplatform1_1735(int x, int y)
{
    return new (Active::pool.create()) GoldPlatform1_1735(x, y);
}
static Image* images_goldplatform2_1736_0_0[1];
static Direction direction_goldplatform2_1736_0_0 = {0, 50, 50, 0, 1, images_goldplatform2_1736_0_0, 1};
static Animation anim_goldplatform2_1736_0 = {&direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, NULL, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0, &direction_goldplatform2_1736_0_0};
static Animation * anim_array_goldplatform2_1736[1] = {&anim_goldplatform2_1736_0};
static Animations anim_goldplatform2_1736 = {1, &anim_array_goldplatform2_1736[0]};
static bool anim_goldplatform2_1736_initialized;
class GoldPlatform2_1736 : public Active
{
public:
    GoldPlatform2_1736(int x, int y) : Active(x, y, GoldPlatform2_1736_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gold platform 2", 15);
#endif
        this->animations = &anim_goldplatform2_1736;
        if (!anim_goldplatform2_1736_initialized) {
            anim_goldplatform2_1736_initialized = true;
            images_goldplatform2_1736_0_0[0] = get_internal_image(3050);
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
FrameObject * create_goldplatform2_1736(int x, int y)
{
    return new (Active::pool.create()) GoldPlatform2_1736(x, y);
}
static Image* images_goldplatform3_1737_0_0[1];
static Direction direction_goldplatform3_1737_0_0 = {0, 50, 50, 0, 1, images_goldplatform3_1737_0_0, 1};
static Animation anim_goldplatform3_1737_0 = {&direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, NULL, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0, &direction_goldplatform3_1737_0_0};
static Animation * anim_array_goldplatform3_1737[1] = {&anim_goldplatform3_1737_0};
static Animations anim_goldplatform3_1737 = {1, &anim_array_goldplatform3_1737[0]};
static bool anim_goldplatform3_1737_initialized;
class GoldPlatform3_1737 : public Active
{
public:
    GoldPlatform3_1737(int x, int y) : Active(x, y, GoldPlatform3_1737_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gold platform 3", 15);
#endif
        this->animations = &anim_goldplatform3_1737;
        if (!anim_goldplatform3_1737_initialized) {
            anim_goldplatform3_1737_initialized = true;
            images_goldplatform3_1737_0_0[0] = get_internal_image(6397);
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
FrameObject * create_goldplatform3_1737(int x, int y)
{
    return new (Active::pool.create()) GoldPlatform3_1737(x, y);
}
static Image* images_signyield_1738_0_0[16];
static Direction direction_signyield_1738_0_0 = {0, 0, 0, 0, -1, images_signyield_1738_0_0, 16};
static Animation anim_signyield_1738_0 = {&direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, NULL, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0, &direction_signyield_1738_0_0};
static Animation * anim_array_signyield_1738[1] = {&anim_signyield_1738_0};
static Animations anim_signyield_1738 = {1, &anim_array_signyield_1738[0]};
static bool anim_signyield_1738_initialized;
class SignYield_1738 : public Active
{
public:
    SignYield_1738(int x, int y) : Active(x, y, SignYield_1738_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sign_Yield", 10);
#endif
        this->animations = &anim_signyield_1738;
        if (!anim_signyield_1738_initialized) {
            anim_signyield_1738_initialized = true;
            images_signyield_1738_0_0[0] = get_internal_image(4289);
            images_signyield_1738_0_0[1] = get_internal_image(4305);
            images_signyield_1738_0_0[2] = get_internal_image(4306);
            images_signyield_1738_0_0[3] = get_internal_image(4307);
            images_signyield_1738_0_0[4] = get_internal_image(4308);
            images_signyield_1738_0_0[5] = get_internal_image(4309);
            images_signyield_1738_0_0[6] = get_internal_image(4310);
            images_signyield_1738_0_0[7] = get_internal_image(4311);
            images_signyield_1738_0_0[8] = get_internal_image(4312);
            images_signyield_1738_0_0[9] = get_internal_image(4313);
            images_signyield_1738_0_0[10] = get_internal_image(4314);
            images_signyield_1738_0_0[11] = get_internal_image(4315);
            images_signyield_1738_0_0[12] = get_internal_image(4316);
            images_signyield_1738_0_0[13] = get_internal_image(4317);
            images_signyield_1738_0_0[14] = get_internal_image(4318);
            images_signyield_1738_0_0[15] = get_internal_image(4319);
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
FrameObject * create_signyield_1738(int x, int y)
{
    return new (Active::pool.create()) SignYield_1738(x, y);
}
static Image* images_flag_1739_0_0[5];
static Direction direction_flag_1739_0_0 = {0, 15, 15, 0, -1, images_flag_1739_0_0, 5};
static Animation anim_flag_1739_0 = {&direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, NULL, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0, &direction_flag_1739_0_0};
static Animation * anim_array_flag_1739[1] = {&anim_flag_1739_0};
static Animations anim_flag_1739 = {1, &anim_array_flag_1739[0]};
static bool anim_flag_1739_initialized;
class Flag_1739 : public Active
{
public:
    Flag_1739(int x, int y) : Active(x, y, Flag_1739_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Flag", 4);
#endif
        this->animations = &anim_flag_1739;
        if (!anim_flag_1739_initialized) {
            anim_flag_1739_initialized = true;
            images_flag_1739_0_0[0] = get_internal_image(6387);
            images_flag_1739_0_0[1] = get_internal_image(6382);
            images_flag_1739_0_0[2] = get_internal_image(6383);
            images_flag_1739_0_0[3] = get_internal_image(6384);
            images_flag_1739_0_0[4] = get_internal_image(6386);
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
FrameObject * create_flag_1739(int x, int y)
{
    return new (Active::pool.create()) Flag_1739(x, y);
}
static Image* images_gimmickclothesline2_1740_0_0[1];
static Direction direction_gimmickclothesline2_1740_0_0 = {0, 50, 50, 0, 1, images_gimmickclothesline2_1740_0_0, 1};
static Animation anim_gimmickclothesline2_1740_0 = {&direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, NULL, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0, &direction_gimmickclothesline2_1740_0_0};
static Animation * anim_array_gimmickclothesline2_1740[1] = {&anim_gimmickclothesline2_1740_0};
static Animations anim_gimmickclothesline2_1740 = {1, &anim_array_gimmickclothesline2_1740[0]};
static bool anim_gimmickclothesline2_1740_initialized;
class GimmickClothesline2_1740 : public Active
{
public:
    GimmickClothesline2_1740(int x, int y) : Active(x, y, GimmickClothesline2_1740_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Clothesline 2", 21);
#endif
        set_visible(false);
        this->animations = &anim_gimmickclothesline2_1740;
        if (!anim_gimmickclothesline2_1740_initialized) {
            anim_gimmickclothesline2_1740_initialized = true;
            images_gimmickclothesline2_1740_0_0[0] = get_internal_image(6362);
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
FrameObject * create_gimmickclothesline2_1740(int x, int y)
{
    return new (Active::pool.create()) GimmickClothesline2_1740(x, y);
}
static Image* images_gimmickhanginglongsensor2_1741_0_0[1];
static Direction direction_gimmickhanginglongsensor2_1741_0_0 = {0, 50, 50, 0, 1, images_gimmickhanginglongsensor2_1741_0_0, 1};
static Animation anim_gimmickhanginglongsensor2_1741_0 = {&direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, NULL, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0, &direction_gimmickhanginglongsensor2_1741_0_0};
static Animation * anim_array_gimmickhanginglongsensor2_1741[1] = {&anim_gimmickhanginglongsensor2_1741_0};
static Animations anim_gimmickhanginglongsensor2_1741 = {1, &anim_array_gimmickhanginglongsensor2_1741[0]};
static bool anim_gimmickhanginglongsensor2_1741_initialized;
class GimmickHangingLongSensor2_1741 : public Active
{
public:
    GimmickHangingLongSensor2_1741(int x, int y) : Active(x, y, GimmickHangingLongSensor2_1741_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingLong_Sensor 2", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhanginglongsensor2_1741;
        if (!anim_gimmickhanginglongsensor2_1741_initialized) {
            anim_gimmickhanginglongsensor2_1741_initialized = true;
            images_gimmickhanginglongsensor2_1741_0_0[0] = get_internal_image(6323);
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
FrameObject * create_gimmickhanginglongsensor2_1741(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingLongSensor2_1741(x, y);
}
static Image* images_layer0loop_1742_0_0[1];
static Direction direction_layer0loop_1742_0_0 = {0, 50, 50, 0, 1, images_layer0loop_1742_0_0, 1};
static Animation anim_layer0loop_1742_0 = {&direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, NULL, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0, &direction_layer0loop_1742_0_0};
static Animation * anim_array_layer0loop_1742[1] = {&anim_layer0loop_1742_0};
static Animations anim_layer0loop_1742 = {1, &anim_array_layer0loop_1742[0]};
static bool anim_layer0loop_1742_initialized;
class Layer0Loop_1742 : public Active
{
public:
    Layer0Loop_1742(int x, int y) : Active(x, y, Layer0Loop_1742_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop", 11);
#endif
        this->animations = &anim_layer0loop_1742;
        if (!anim_layer0loop_1742_initialized) {
            anim_layer0loop_1742_initialized = true;
            images_layer0loop_1742_0_0[0] = get_internal_image(6441);
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
FrameObject * create_layer0loop_1742(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop_1742(x, y);
}
static Image* images_layer0loop2_1743_0_0[1];
static Direction direction_layer0loop2_1743_0_0 = {0, 50, 50, 0, 1, images_layer0loop2_1743_0_0, 1};
static Animation anim_layer0loop2_1743_0 = {&direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, NULL, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0, &direction_layer0loop2_1743_0_0};
static Animation * anim_array_layer0loop2_1743[1] = {&anim_layer0loop2_1743_0};
static Animations anim_layer0loop2_1743 = {1, &anim_array_layer0loop2_1743[0]};
static bool anim_layer0loop2_1743_initialized;
class Layer0Loop2_1743 : public Active
{
public:
    Layer0Loop2_1743(int x, int y) : Active(x, y, Layer0Loop2_1743_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop 2", 13);
#endif
        this->animations = &anim_layer0loop2_1743;
        if (!anim_layer0loop2_1743_initialized) {
            anim_layer0loop2_1743_initialized = true;
            images_layer0loop2_1743_0_0[0] = get_internal_image(6436);
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
FrameObject * create_layer0loop2_1743(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop2_1743(x, y);
}
static Image* images_layer1loop2_1744_0_0[1];
static Direction direction_layer1loop2_1744_0_0 = {0, 50, 50, 0, 1, images_layer1loop2_1744_0_0, 1};
static Animation anim_layer1loop2_1744_0 = {&direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, NULL, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0, &direction_layer1loop2_1744_0_0};
static Animation * anim_array_layer1loop2_1744[1] = {&anim_layer1loop2_1744_0};
static Animations anim_layer1loop2_1744 = {1, &anim_array_layer1loop2_1744[0]};
static bool anim_layer1loop2_1744_initialized;
class Layer1Loop2_1744 : public Active
{
public:
    Layer1Loop2_1744(int x, int y) : Active(x, y, Layer1Loop2_1744_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Layer1_Loop 2", 13);
#endif
        this->animations = &anim_layer1loop2_1744;
        if (!anim_layer1loop2_1744_initialized) {
            anim_layer1loop2_1744_initialized = true;
            images_layer1loop2_1744_0_0[0] = get_internal_image(6434);
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
FrameObject * create_layer1loop2_1744(int x, int y)
{
    return new (Active::pool.create()) Layer1Loop2_1744(x, y);
}
static Image* images_layer1loop_1745_0_0[1];
static Direction direction_layer1loop_1745_0_0 = {0, 50, 50, 0, 1, images_layer1loop_1745_0_0, 1};
static Animation anim_layer1loop_1745_0 = {&direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, NULL, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0, &direction_layer1loop_1745_0_0};
static Animation * anim_array_layer1loop_1745[1] = {&anim_layer1loop_1745_0};
static Animations anim_layer1loop_1745 = {1, &anim_array_layer1loop_1745[0]};
static bool anim_layer1loop_1745_initialized;
class Layer1Loop_1745 : public Active
{
public:
    Layer1Loop_1745(int x, int y) : Active(x, y, Layer1Loop_1745_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Layer1_Loop", 11);
#endif
        this->animations = &anim_layer1loop_1745;
        if (!anim_layer1loop_1745_initialized) {
            anim_layer1loop_1745_initialized = true;
            images_layer1loop_1745_0_0[0] = get_internal_image(6427);
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
FrameObject * create_layer1loop_1745(int x, int y)
{
    return new (Active::pool.create()) Layer1Loop_1745(x, y);
}
static Image* images_layer1loop3_1746_0_0[3];
static Direction direction_layer1loop3_1746_0_0 = {0, 0, 0, 0, 1, images_layer1loop3_1746_0_0, 3};
static Animation anim_layer1loop3_1746_0 = {&direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, NULL, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0, &direction_layer1loop3_1746_0_0};
static Animation * anim_array_layer1loop3_1746[1] = {&anim_layer1loop3_1746_0};
static Animations anim_layer1loop3_1746 = {1, &anim_array_layer1loop3_1746[0]};
static bool anim_layer1loop3_1746_initialized;
class Layer1Loop3_1746 : public Active
{
public:
    Layer1Loop3_1746(int x, int y) : Active(x, y, Layer1Loop3_1746_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Layer1_Loop 3", 13);
#endif
        this->animations = &anim_layer1loop3_1746;
        if (!anim_layer1loop3_1746_initialized) {
            anim_layer1loop3_1746_initialized = true;
            images_layer1loop3_1746_0_0[0] = get_internal_image(6385);
            images_layer1loop3_1746_0_0[1] = get_internal_image(6443);
            images_layer1loop3_1746_0_0[2] = get_internal_image(6442);
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
FrameObject * create_layer1loop3_1746(int x, int y)
{
    return new (Active::pool.create()) Layer1Loop3_1746(x, y);
}
static Image* images_gimmickboostblock_1747_0_0[1];
static Direction direction_gimmickboostblock_1747_0_0 = {0, 50, 50, 0, 1, images_gimmickboostblock_1747_0_0, 1};
static Animation anim_gimmickboostblock_1747_0 = {&direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, NULL, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0, &direction_gimmickboostblock_1747_0_0};
static Image* images_gimmickboostblock_1747_7_0[19];
static Direction direction_gimmickboostblock_1747_7_0 = {0, 100, 100, 0, 1, images_gimmickboostblock_1747_7_0, 19};
static Image* images_gimmickboostblock_1747_7_8[19];
static Direction direction_gimmickboostblock_1747_7_8 = {8, 100, 100, 0, 1, images_gimmickboostblock_1747_7_8, 19};
static Image* images_gimmickboostblock_1747_7_16[19];
static Direction direction_gimmickboostblock_1747_7_16 = {16, 100, 100, 0, 1, images_gimmickboostblock_1747_7_16, 19};
static Image* images_gimmickboostblock_1747_7_24[19];
static Direction direction_gimmickboostblock_1747_7_24 = {24, 100, 100, 0, 1, images_gimmickboostblock_1747_7_24, 19};
static Animation anim_gimmickboostblock_1747_7 = {&direction_gimmickboostblock_1747_7_0, &direction_gimmickboostblock_1747_7_0, &direction_gimmickboostblock_1747_7_0, &direction_gimmickboostblock_1747_7_0, NULL, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, &direction_gimmickboostblock_1747_7_8, NULL, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, &direction_gimmickboostblock_1747_7_16, NULL, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, &direction_gimmickboostblock_1747_7_24, NULL, &direction_gimmickboostblock_1747_7_0, &direction_gimmickboostblock_1747_7_0, &direction_gimmickboostblock_1747_7_0};
static Animation * anim_array_gimmickboostblock_1747[8] = {&anim_gimmickboostblock_1747_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickboostblock_1747_7};
static Animations anim_gimmickboostblock_1747 = {8, &anim_array_gimmickboostblock_1747[0]};
static bool anim_gimmickboostblock_1747_initialized;
class GimmickBoostBlock_1747 : public Active
{
public:
    GimmickBoostBlock_1747(int x, int y) : Active(x, y, GimmickBoostBlock_1747_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Gimmick_BoostBlock", 18);
#endif
        this->animations = &anim_gimmickboostblock_1747;
        if (!anim_gimmickboostblock_1747_initialized) {
            anim_gimmickboostblock_1747_initialized = true;
            images_gimmickboostblock_1747_0_0[0] = get_internal_image(6392);
            images_gimmickboostblock_1747_7_0[0] = get_internal_image(6392);
            images_gimmickboostblock_1747_7_0[1] = get_internal_image(6455);
            images_gimmickboostblock_1747_7_0[2] = get_internal_image(6455);
            images_gimmickboostblock_1747_7_0[3] = get_internal_image(6448);
            images_gimmickboostblock_1747_7_0[4] = get_internal_image(6448);
            images_gimmickboostblock_1747_7_0[5] = get_internal_image(6454);
            images_gimmickboostblock_1747_7_0[6] = get_internal_image(6456);
            images_gimmickboostblock_1747_7_0[7] = get_internal_image(6459);
            images_gimmickboostblock_1747_7_0[8] = get_internal_image(6458);
            images_gimmickboostblock_1747_7_0[9] = get_internal_image(6460);
            images_gimmickboostblock_1747_7_0[10] = get_internal_image(6450);
            images_gimmickboostblock_1747_7_0[11] = get_internal_image(6451);
            images_gimmickboostblock_1747_7_0[12] = get_internal_image(6452);
            images_gimmickboostblock_1747_7_0[13] = get_internal_image(6453);
            images_gimmickboostblock_1747_7_0[14] = get_internal_image(6454);
            images_gimmickboostblock_1747_7_0[15] = get_internal_image(6448);
            images_gimmickboostblock_1747_7_0[16] = get_internal_image(6448);
            images_gimmickboostblock_1747_7_0[17] = get_internal_image(6455);
            images_gimmickboostblock_1747_7_0[18] = get_internal_image(6455);
            images_gimmickboostblock_1747_7_8[0] = get_internal_image(6392);
            images_gimmickboostblock_1747_7_8[1] = get_internal_image(6457);
            images_gimmickboostblock_1747_7_8[2] = get_internal_image(6457);
            images_gimmickboostblock_1747_7_8[3] = get_internal_image(6449);
            images_gimmickboostblock_1747_7_8[4] = get_internal_image(6449);
            images_gimmickboostblock_1747_7_8[5] = get_internal_image(6491);
            images_gimmickboostblock_1747_7_8[6] = get_internal_image(6495);
            images_gimmickboostblock_1747_7_8[7] = get_internal_image(6461);
            images_gimmickboostblock_1747_7_8[8] = get_internal_image(6482);
            images_gimmickboostblock_1747_7_8[9] = get_internal_image(6483);
            images_gimmickboostblock_1747_7_8[10] = get_internal_image(6484);
            images_gimmickboostblock_1747_7_8[11] = get_internal_image(6486);
            images_gimmickboostblock_1747_7_8[12] = get_internal_image(6488);
            images_gimmickboostblock_1747_7_8[13] = get_internal_image(6490);
            images_gimmickboostblock_1747_7_8[14] = get_internal_image(6491);
            images_gimmickboostblock_1747_7_8[15] = get_internal_image(6449);
            images_gimmickboostblock_1747_7_8[16] = get_internal_image(6449);
            images_gimmickboostblock_1747_7_8[17] = get_internal_image(6457);
            images_gimmickboostblock_1747_7_8[18] = get_internal_image(6457);
            images_gimmickboostblock_1747_7_16[0] = get_internal_image(6392);
            images_gimmickboostblock_1747_7_16[1] = get_internal_image(6494);
            images_gimmickboostblock_1747_7_16[2] = get_internal_image(6494);
            images_gimmickboostblock_1747_7_16[3] = get_internal_image(6493);
            images_gimmickboostblock_1747_7_16[4] = get_internal_image(6493);
            images_gimmickboostblock_1747_7_16[5] = get_internal_image(6514);
            images_gimmickboostblock_1747_7_16[6] = get_internal_image(6518);
            images_gimmickboostblock_1747_7_16[7] = get_internal_image(6496);
            images_gimmickboostblock_1747_7_16[8] = get_internal_image(6497);
            images_gimmickboostblock_1747_7_16[9] = get_internal_image(6499);
            images_gimmickboostblock_1747_7_16[10] = get_internal_image(6509);
            images_gimmickboostblock_1747_7_16[11] = get_internal_image(6510);
            images_gimmickboostblock_1747_7_16[12] = get_internal_image(6512);
            images_gimmickboostblock_1747_7_16[13] = get_internal_image(6513);
            images_gimmickboostblock_1747_7_16[14] = get_internal_image(6514);
            images_gimmickboostblock_1747_7_16[15] = get_internal_image(6493);
            images_gimmickboostblock_1747_7_16[16] = get_internal_image(6493);
            images_gimmickboostblock_1747_7_16[17] = get_internal_image(6494);
            images_gimmickboostblock_1747_7_16[18] = get_internal_image(6494);
            images_gimmickboostblock_1747_7_24[0] = get_internal_image(6392);
            images_gimmickboostblock_1747_7_24[1] = get_internal_image(6519);
            images_gimmickboostblock_1747_7_24[2] = get_internal_image(6519);
            images_gimmickboostblock_1747_7_24[3] = get_internal_image(6431);
            images_gimmickboostblock_1747_7_24[4] = get_internal_image(6431);
            images_gimmickboostblock_1747_7_24[5] = get_internal_image(6547);
            images_gimmickboostblock_1747_7_24[6] = get_internal_image(6550);
            images_gimmickboostblock_1747_7_24[7] = get_internal_image(6444);
            images_gimmickboostblock_1747_7_24[8] = get_internal_image(6520);
            images_gimmickboostblock_1747_7_24[9] = get_internal_image(6521);
            images_gimmickboostblock_1747_7_24[10] = get_internal_image(6522);
            images_gimmickboostblock_1747_7_24[11] = get_internal_image(6523);
            images_gimmickboostblock_1747_7_24[12] = get_internal_image(6524);
            images_gimmickboostblock_1747_7_24[13] = get_internal_image(6545);
            images_gimmickboostblock_1747_7_24[14] = get_internal_image(6547);
            images_gimmickboostblock_1747_7_24[15] = get_internal_image(6431);
            images_gimmickboostblock_1747_7_24[16] = get_internal_image(6431);
            images_gimmickboostblock_1747_7_24[17] = get_internal_image(6519);
            images_gimmickboostblock_1747_7_24[18] = get_internal_image(6519);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 99);
        alterables->values.set(4, -5);
    }
};
FrameObject * create_gimmickboostblock_1747(int x, int y)
{
    return new (Active::pool.create()) GimmickBoostBlock_1747(x, y);
}
static Image* images_breakablewall_1748_0_0[1];
static Direction direction_breakablewall_1748_0_0 = {0, 50, 50, 0, 1, images_breakablewall_1748_0_0, 1};
static Animation anim_breakablewall_1748_0 = {&direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, NULL, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0, &direction_breakablewall_1748_0_0};
static Animation * anim_array_breakablewall_1748[1] = {&anim_breakablewall_1748_0};
static Animations anim_breakablewall_1748 = {1, &anim_array_breakablewall_1748[0]};
static bool anim_breakablewall_1748_initialized;
class BreakableWall_1748 : public Active
{
public:
    BreakableWall_1748(int x, int y) : Active(x, y, BreakableWall_1748_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableWall", 13);
#endif
        this->animations = &anim_breakablewall_1748;
        if (!anim_breakablewall_1748_initialized) {
            anim_breakablewall_1748_initialized = true;
            images_breakablewall_1748_0_0[0] = get_internal_image(2994);
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
FrameObject * create_breakablewall_1748(int x, int y)
{
    return new (Active::pool.create()) BreakableWall_1748(x, y);
}
static Image* images_gimmickboostblockturn_1749_0_0[1];
static Direction direction_gimmickboostblockturn_1749_0_0 = {0, 50, 50, 0, 1, images_gimmickboostblockturn_1749_0_0, 1};
static Animation anim_gimmickboostblockturn_1749_0 = {&direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, NULL, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0, &direction_gimmickboostblockturn_1749_0_0};
static Animation * anim_array_gimmickboostblockturn_1749[1] = {&anim_gimmickboostblockturn_1749_0};
static Animations anim_gimmickboostblockturn_1749 = {1, &anim_array_gimmickboostblockturn_1749[0]};
static bool anim_gimmickboostblockturn_1749_initialized;
class GimmickBoostBlockTurn_1749 : public Active
{
public:
    GimmickBoostBlockTurn_1749(int x, int y) : Active(x, y, GimmickBoostBlockTurn_1749_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BoostBlockTurn", 22);
#endif
        set_visible(false);
        this->animations = &anim_gimmickboostblockturn_1749;
        if (!anim_gimmickboostblockturn_1749_initialized) {
            anim_gimmickboostblockturn_1749_initialized = true;
            images_gimmickboostblockturn_1749_0_0[0] = get_internal_image(6429);
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
FrameObject * create_gimmickboostblockturn_1749(int x, int y)
{
    return new (Active::pool.create()) GimmickBoostBlockTurn_1749(x, y);
}
static Image* images_gimmickboostblockflame_1750_0_0[3];
static Direction direction_gimmickboostblockflame_1750_0_0 = {0, 50, 50, 0, -1, images_gimmickboostblockflame_1750_0_0, 3};
static Image* images_gimmickboostblockflame_1750_0_8[3];
static Direction direction_gimmickboostblockflame_1750_0_8 = {8, 50, 50, 0, -1, images_gimmickboostblockflame_1750_0_8, 3};
static Image* images_gimmickboostblockflame_1750_0_16[3];
static Direction direction_gimmickboostblockflame_1750_0_16 = {16, 50, 50, 0, -1, images_gimmickboostblockflame_1750_0_16, 3};
static Image* images_gimmickboostblockflame_1750_0_24[3];
static Direction direction_gimmickboostblockflame_1750_0_24 = {24, 50, 50, 0, -1, images_gimmickboostblockflame_1750_0_24, 3};
static Animation anim_gimmickboostblockflame_1750_0 = {&direction_gimmickboostblockflame_1750_0_0, &direction_gimmickboostblockflame_1750_0_0, &direction_gimmickboostblockflame_1750_0_0, &direction_gimmickboostblockflame_1750_0_0, NULL, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, &direction_gimmickboostblockflame_1750_0_8, NULL, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, &direction_gimmickboostblockflame_1750_0_16, NULL, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, &direction_gimmickboostblockflame_1750_0_24, NULL, &direction_gimmickboostblockflame_1750_0_0, &direction_gimmickboostblockflame_1750_0_0, &direction_gimmickboostblockflame_1750_0_0};
static Animation * anim_array_gimmickboostblockflame_1750[1] = {&anim_gimmickboostblockflame_1750_0};
static Animations anim_gimmickboostblockflame_1750 = {1, &anim_array_gimmickboostblockflame_1750[0]};
static bool anim_gimmickboostblockflame_1750_initialized;
class GimmickBoostBlockFlame_1750 : public Active
{
public:
    GimmickBoostBlockFlame_1750(int x, int y) : Active(x, y, GimmickBoostBlockFlame_1750_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BoostBlockFlame", 23);
#endif
        set_visible(false);
        this->animations = &anim_gimmickboostblockflame_1750;
        if (!anim_gimmickboostblockflame_1750_initialized) {
            anim_gimmickboostblockflame_1750_initialized = true;
            images_gimmickboostblockflame_1750_0_0[0] = get_internal_image(6440);
            images_gimmickboostblockflame_1750_0_0[1] = get_internal_image(6439);
            images_gimmickboostblockflame_1750_0_0[2] = get_internal_image(6445);
            images_gimmickboostblockflame_1750_0_8[0] = get_internal_image(6516);
            images_gimmickboostblockflame_1750_0_8[1] = get_internal_image(6548);
            images_gimmickboostblockflame_1750_0_8[2] = get_internal_image(6551);
            images_gimmickboostblockflame_1750_0_16[0] = get_internal_image(6576);
            images_gimmickboostblockflame_1750_0_16[1] = get_internal_image(6577);
            images_gimmickboostblockflame_1750_0_16[2] = get_internal_image(6578);
            images_gimmickboostblockflame_1750_0_24[0] = get_internal_image(6579);
            images_gimmickboostblockflame_1750_0_24[1] = get_internal_image(6580);
            images_gimmickboostblockflame_1750_0_24[2] = get_internal_image(6581);
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
FrameObject * create_gimmickboostblockflame_1750(int x, int y)
{
    return new (Active::pool.create()) GimmickBoostBlockFlame_1750(x, y);
}
static Image* images_enemycoilpiece1_1751_0_0[1];
static Direction direction_enemycoilpiece1_1751_0_0 = {0, 50, 50, 0, 1, images_enemycoilpiece1_1751_0_0, 1};
static Animation anim_enemycoilpiece1_1751_0 = {&direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, NULL, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0, &direction_enemycoilpiece1_1751_0_0};
static Animation * anim_array_enemycoilpiece1_1751[1] = {&anim_enemycoilpiece1_1751_0};
static Animations anim_enemycoilpiece1_1751 = {1, &anim_array_enemycoilpiece1_1751[0]};
static bool anim_enemycoilpiece1_1751_initialized;
class EnemyCoilPiece1_1751 : public Active
{
public:
    EnemyCoilPiece1_1751(int x, int y) : Active(x, y, EnemyCoilPiece1_1751_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_CoilPiece 1", 17);
#endif
        this->animations = &anim_enemycoilpiece1_1751;
        if (!anim_enemycoilpiece1_1751_initialized) {
            anim_enemycoilpiece1_1751_initialized = true;
            images_enemycoilpiece1_1751_0_0[0] = get_internal_image(872);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_enemycoilpiece1_1751(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilPiece1_1751(x, y);
}
static Image* images_enemycoilpiece3_1752_0_0[1];
static Direction direction_enemycoilpiece3_1752_0_0 = {0, 50, 50, 0, 1, images_enemycoilpiece3_1752_0_0, 1};
static Animation anim_enemycoilpiece3_1752_0 = {&direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, NULL, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0, &direction_enemycoilpiece3_1752_0_0};
static Animation * anim_array_enemycoilpiece3_1752[1] = {&anim_enemycoilpiece3_1752_0};
static Animations anim_enemycoilpiece3_1752 = {1, &anim_array_enemycoilpiece3_1752[0]};
static bool anim_enemycoilpiece3_1752_initialized;
class EnemyCoilPiece3_1752 : public Active
{
public:
    EnemyCoilPiece3_1752(int x, int y) : Active(x, y, EnemyCoilPiece3_1752_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_CoilPiece 3", 17);
#endif
        this->animations = &anim_enemycoilpiece3_1752;
        if (!anim_enemycoilpiece3_1752_initialized) {
            anim_enemycoilpiece3_1752_initialized = true;
            images_enemycoilpiece3_1752_0_0[0] = get_internal_image(874);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_enemycoilpiece3_1752(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilPiece3_1752(x, y);
}
static Image* images_enemycoilpiece2_1753_0_0[1];
static Direction direction_enemycoilpiece2_1753_0_0 = {0, 50, 50, 0, 1, images_enemycoilpiece2_1753_0_0, 1};
static Animation anim_enemycoilpiece2_1753_0 = {&direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, NULL, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0, &direction_enemycoilpiece2_1753_0_0};
static Animation * anim_array_enemycoilpiece2_1753[1] = {&anim_enemycoilpiece2_1753_0};
static Animations anim_enemycoilpiece2_1753 = {1, &anim_array_enemycoilpiece2_1753[0]};
static bool anim_enemycoilpiece2_1753_initialized;
class EnemyCoilPiece2_1753 : public Active
{
public:
    EnemyCoilPiece2_1753(int x, int y) : Active(x, y, EnemyCoilPiece2_1753_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_CoilPiece 2", 17);
#endif
        this->animations = &anim_enemycoilpiece2_1753;
        if (!anim_enemycoilpiece2_1753_initialized) {
            anim_enemycoilpiece2_1753_initialized = true;
            images_enemycoilpiece2_1753_0_0[0] = get_internal_image(943);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_enemycoilpiece2_1753(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilPiece2_1753(x, y);
}
static Image* images_enemycoilpiece4_1754_0_0[1];
static Direction direction_enemycoilpiece4_1754_0_0 = {0, 50, 50, 0, 1, images_enemycoilpiece4_1754_0_0, 1};
static Animation anim_enemycoilpiece4_1754_0 = {&direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, NULL, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0, &direction_enemycoilpiece4_1754_0_0};
static Animation * anim_array_enemycoilpiece4_1754[1] = {&anim_enemycoilpiece4_1754_0};
static Animations anim_enemycoilpiece4_1754 = {1, &anim_array_enemycoilpiece4_1754[0]};
static bool anim_enemycoilpiece4_1754_initialized;
class EnemyCoilPiece4_1754 : public Active
{
public:
    EnemyCoilPiece4_1754(int x, int y) : Active(x, y, EnemyCoilPiece4_1754_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_CoilPiece 4", 17);
#endif
        this->animations = &anim_enemycoilpiece4_1754;
        if (!anim_enemycoilpiece4_1754_initialized) {
            anim_enemycoilpiece4_1754_initialized = true;
            images_enemycoilpiece4_1754_0_0[0] = get_internal_image(875);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_enemycoilpiece4_1754(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilPiece4_1754(x, y);
}
static Image* images_enemycoil_1755_0_0[1];
static Direction direction_enemycoil_1755_0_0 = {0, 50, 50, 0, 1, images_enemycoil_1755_0_0, 1};
static Animation anim_enemycoil_1755_0 = {&direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, NULL, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0, &direction_enemycoil_1755_0_0};
static Animation * anim_array_enemycoil_1755[1] = {&anim_enemycoil_1755_0};
static Animations anim_enemycoil_1755 = {1, &anim_array_enemycoil_1755[0]};
static bool anim_enemycoil_1755_initialized;
class EnemyCoil_1755 : public Active
{
public:
    EnemyCoil_1755(int x, int y) : Active(x, y, EnemyCoil_1755_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Coil", 10);
#endif
        set_visible(false);
        this->animations = &anim_enemycoil_1755;
        if (!anim_enemycoil_1755_initialized) {
            anim_enemycoil_1755_initialized = true;
            images_enemycoil_1755_0_0[0] = get_internal_image(6282);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(6, 1);
    }
};
FrameObject * create_enemycoil_1755(int x, int y)
{
    return new (Active::pool.create()) EnemyCoil_1755(x, y);
}
static Image* images_enemycoilflip_1756_0_0[1];
static Direction direction_enemycoilflip_1756_0_0 = {0, 50, 50, 0, 1, images_enemycoilflip_1756_0_0, 1};
static Animation anim_enemycoilflip_1756_0 = {&direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, NULL, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0, &direction_enemycoilflip_1756_0_0};
static Animation * anim_array_enemycoilflip_1756[1] = {&anim_enemycoilflip_1756_0};
static Animations anim_enemycoilflip_1756 = {1, &anim_array_enemycoilflip_1756[0]};
static bool anim_enemycoilflip_1756_initialized;
class EnemyCoilFlip_1756 : public Active
{
public:
    EnemyCoilFlip_1756(int x, int y) : Active(x, y, EnemyCoilFlip_1756_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_CoilFlip", 14);
#endif
        this->animations = &anim_enemycoilflip_1756;
        if (!anim_enemycoilflip_1756_initialized) {
            anim_enemycoilflip_1756_initialized = true;
            images_enemycoilflip_1756_0_0[0] = get_internal_image(967);
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
FrameObject * create_enemycoilflip_1756(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilFlip_1756(x, y);
}
static Image* images_enemytrafficle1_1757_0_0[9];
static Direction direction_enemytrafficle1_1757_0_0 = {0, 0, 0, 0, 1, images_enemytrafficle1_1757_0_0, 9};
static Image* images_enemytrafficle1_1757_0_16[9];
static Direction direction_enemytrafficle1_1757_0_16 = {16, 0, 0, 0, 1, images_enemytrafficle1_1757_0_16, 9};
static Animation anim_enemytrafficle1_1757_0 = {&direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, NULL, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, &direction_enemytrafficle1_1757_0_16, NULL, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0, &direction_enemytrafficle1_1757_0_0};
static Image* images_enemytrafficle1_1757_8_0[1];
static Direction direction_enemytrafficle1_1757_8_0 = {0, 50, 50, 0, -1, images_enemytrafficle1_1757_8_0, 1};
static Animation anim_enemytrafficle1_1757_8 = {&direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, NULL, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0, &direction_enemytrafficle1_1757_8_0};
static Animation * anim_array_enemytrafficle1_1757[9] = {&anim_enemytrafficle1_1757_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemytrafficle1_1757_8};
static Animations anim_enemytrafficle1_1757 = {9, &anim_array_enemytrafficle1_1757[0]};
static bool anim_enemytrafficle1_1757_initialized;
class EnemyTrafficle1_1757 : public Active
{
public:
    EnemyTrafficle1_1757(int x, int y) : Active(x, y, EnemyTrafficle1_1757_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Trafficle 1", 17);
#endif
        this->animations = &anim_enemytrafficle1_1757;
        if (!anim_enemytrafficle1_1757_initialized) {
            anim_enemytrafficle1_1757_initialized = true;
            images_enemytrafficle1_1757_0_0[0] = get_internal_image(6825);
            images_enemytrafficle1_1757_0_0[1] = get_internal_image(6859);
            images_enemytrafficle1_1757_0_0[2] = get_internal_image(6826);
            images_enemytrafficle1_1757_0_0[3] = get_internal_image(6857);
            images_enemytrafficle1_1757_0_0[4] = get_internal_image(6827);
            images_enemytrafficle1_1757_0_0[5] = get_internal_image(6855);
            images_enemytrafficle1_1757_0_0[6] = get_internal_image(6828);
            images_enemytrafficle1_1757_0_0[7] = get_internal_image(6861);
            images_enemytrafficle1_1757_0_0[8] = get_internal_image(6829);
            images_enemytrafficle1_1757_0_16[0] = get_internal_image(6832);
            images_enemytrafficle1_1757_0_16[1] = get_internal_image(6859);
            images_enemytrafficle1_1757_0_16[2] = get_internal_image(6826);
            images_enemytrafficle1_1757_0_16[3] = get_internal_image(6857);
            images_enemytrafficle1_1757_0_16[4] = get_internal_image(6827);
            images_enemytrafficle1_1757_0_16[5] = get_internal_image(6855);
            images_enemytrafficle1_1757_0_16[6] = get_internal_image(6828);
            images_enemytrafficle1_1757_0_16[7] = get_internal_image(6861);
            images_enemytrafficle1_1757_0_16[8] = get_internal_image(6856);
            images_enemytrafficle1_1757_8_0[0] = get_internal_image(6850);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(4, 1);
    }
};
FrameObject * create_enemytrafficle1_1757(int x, int y)
{
    return new (Active::pool.create()) EnemyTrafficle1_1757(x, y);
}
static Image* images_enemytrafficle2_1758_0_0[9];
static Direction direction_enemytrafficle2_1758_0_0 = {0, 0, 0, 0, 1, images_enemytrafficle2_1758_0_0, 9};
static Image* images_enemytrafficle2_1758_0_16[9];
static Direction direction_enemytrafficle2_1758_0_16 = {16, 0, 0, 0, 1, images_enemytrafficle2_1758_0_16, 9};
static Animation anim_enemytrafficle2_1758_0 = {&direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, NULL, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, &direction_enemytrafficle2_1758_0_16, NULL, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0, &direction_enemytrafficle2_1758_0_0};
static Image* images_enemytrafficle2_1758_8_0[1];
static Direction direction_enemytrafficle2_1758_8_0 = {0, 50, 50, 0, -1, images_enemytrafficle2_1758_8_0, 1};
static Animation anim_enemytrafficle2_1758_8 = {&direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, NULL, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0, &direction_enemytrafficle2_1758_8_0};
static Animation * anim_array_enemytrafficle2_1758[9] = {&anim_enemytrafficle2_1758_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemytrafficle2_1758_8};
static Animations anim_enemytrafficle2_1758 = {9, &anim_array_enemytrafficle2_1758[0]};
static bool anim_enemytrafficle2_1758_initialized;
class EnemyTrafficle2_1758 : public Active
{
public:
    EnemyTrafficle2_1758(int x, int y) : Active(x, y, EnemyTrafficle2_1758_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Trafficle 2", 17);
#endif
        this->animations = &anim_enemytrafficle2_1758;
        if (!anim_enemytrafficle2_1758_initialized) {
            anim_enemytrafficle2_1758_initialized = true;
            images_enemytrafficle2_1758_0_0[0] = get_internal_image(6830);
            images_enemytrafficle2_1758_0_0[1] = get_internal_image(6872);
            images_enemytrafficle2_1758_0_0[2] = get_internal_image(6874);
            images_enemytrafficle2_1758_0_0[3] = get_internal_image(6858);
            images_enemytrafficle2_1758_0_0[4] = get_internal_image(6876);
            images_enemytrafficle2_1758_0_0[5] = get_internal_image(6875);
            images_enemytrafficle2_1758_0_0[6] = get_internal_image(6878);
            images_enemytrafficle2_1758_0_0[7] = get_internal_image(6879);
            images_enemytrafficle2_1758_0_0[8] = get_internal_image(6877);
            images_enemytrafficle2_1758_0_16[0] = get_internal_image(6880);
            images_enemytrafficle2_1758_0_16[1] = get_internal_image(6872);
            images_enemytrafficle2_1758_0_16[2] = get_internal_image(6874);
            images_enemytrafficle2_1758_0_16[3] = get_internal_image(6858);
            images_enemytrafficle2_1758_0_16[4] = get_internal_image(6876);
            images_enemytrafficle2_1758_0_16[5] = get_internal_image(6875);
            images_enemytrafficle2_1758_0_16[6] = get_internal_image(6878);
            images_enemytrafficle2_1758_0_16[7] = get_internal_image(6879);
            images_enemytrafficle2_1758_0_16[8] = get_internal_image(6881);
            images_enemytrafficle2_1758_8_0[0] = get_internal_image(6853);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(3, 7);
        alterables->values.set(4, 1);
    }
};
FrameObject * create_enemytrafficle2_1758(int x, int y)
{
    return new (Active::pool.create()) EnemyTrafficle2_1758(x, y);
}
static Image* images_enemytrafficle3_1759_0_0[9];
static Direction direction_enemytrafficle3_1759_0_0 = {0, 0, 0, 0, 1, images_enemytrafficle3_1759_0_0, 9};
static Image* images_enemytrafficle3_1759_0_16[9];
static Direction direction_enemytrafficle3_1759_0_16 = {16, 0, 0, 0, 1, images_enemytrafficle3_1759_0_16, 9};
static Animation anim_enemytrafficle3_1759_0 = {&direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, NULL, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, &direction_enemytrafficle3_1759_0_16, NULL, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0, &direction_enemytrafficle3_1759_0_0};
static Image* images_enemytrafficle3_1759_8_0[1];
static Direction direction_enemytrafficle3_1759_8_0 = {0, 50, 50, 0, -1, images_enemytrafficle3_1759_8_0, 1};
static Animation anim_enemytrafficle3_1759_8 = {&direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, NULL, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0, &direction_enemytrafficle3_1759_8_0};
static Animation * anim_array_enemytrafficle3_1759[9] = {&anim_enemytrafficle3_1759_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemytrafficle3_1759_8};
static Animations anim_enemytrafficle3_1759 = {9, &anim_array_enemytrafficle3_1759[0]};
static bool anim_enemytrafficle3_1759_initialized;
class EnemyTrafficle3_1759 : public Active
{
public:
    EnemyTrafficle3_1759(int x, int y) : Active(x, y, EnemyTrafficle3_1759_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Trafficle 3", 17);
#endif
        this->animations = &anim_enemytrafficle3_1759;
        if (!anim_enemytrafficle3_1759_initialized) {
            anim_enemytrafficle3_1759_initialized = true;
            images_enemytrafficle3_1759_0_0[0] = get_internal_image(6831);
            images_enemytrafficle3_1759_0_0[1] = get_internal_image(6883);
            images_enemytrafficle3_1759_0_0[2] = get_internal_image(6884);
            images_enemytrafficle3_1759_0_0[3] = get_internal_image(6882);
            images_enemytrafficle3_1759_0_0[4] = get_internal_image(6886);
            images_enemytrafficle3_1759_0_0[5] = get_internal_image(6885);
            images_enemytrafficle3_1759_0_0[6] = get_internal_image(6888);
            images_enemytrafficle3_1759_0_0[7] = get_internal_image(6889);
            images_enemytrafficle3_1759_0_0[8] = get_internal_image(6887);
            images_enemytrafficle3_1759_0_16[0] = get_internal_image(6891);
            images_enemytrafficle3_1759_0_16[1] = get_internal_image(6883);
            images_enemytrafficle3_1759_0_16[2] = get_internal_image(6884);
            images_enemytrafficle3_1759_0_16[3] = get_internal_image(6882);
            images_enemytrafficle3_1759_0_16[4] = get_internal_image(6886);
            images_enemytrafficle3_1759_0_16[5] = get_internal_image(6885);
            images_enemytrafficle3_1759_0_16[6] = get_internal_image(6888);
            images_enemytrafficle3_1759_0_16[7] = get_internal_image(6889);
            images_enemytrafficle3_1759_0_16[8] = get_internal_image(6890);
            images_enemytrafficle3_1759_8_0[0] = get_internal_image(6854);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(3, 8);
        alterables->values.set(4, -1);
        alterables->values.set(5, 16);
    }
};
FrameObject * create_enemytrafficle3_1759(int x, int y)
{
    return new (Active::pool.create()) EnemyTrafficle3_1759(x, y);
}
static Image* images_breakablefloor1_1760_0_0[1];
static Direction direction_breakablefloor1_1760_0_0 = {0, 50, 50, 0, 1, images_breakablefloor1_1760_0_0, 1};
static Animation anim_breakablefloor1_1760_0 = {&direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, NULL, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0, &direction_breakablefloor1_1760_0_0};
static Animation * anim_array_breakablefloor1_1760[1] = {&anim_breakablefloor1_1760_0};
static Animations anim_breakablefloor1_1760 = {1, &anim_array_breakablefloor1_1760[0]};
static bool anim_breakablefloor1_1760_initialized;
class BreakableFloor1_1760 : public Active
{
public:
    BreakableFloor1_1760(int x, int y) : Active(x, y, BreakableFloor1_1760_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 1", 16);
#endif
        this->animations = &anim_breakablefloor1_1760;
        if (!anim_breakablefloor1_1760_initialized) {
            anim_breakablefloor1_1760_initialized = true;
            images_breakablefloor1_1760_0_0[0] = get_internal_image(3384);
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
FrameObject * create_breakablefloor1_1760(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor1_1760(x, y);
}
static Image* images_breakablefloor2_1761_0_0[1];
static Direction direction_breakablefloor2_1761_0_0 = {0, 50, 50, 0, 1, images_breakablefloor2_1761_0_0, 1};
static Animation anim_breakablefloor2_1761_0 = {&direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, NULL, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0, &direction_breakablefloor2_1761_0_0};
static Animation * anim_array_breakablefloor2_1761[1] = {&anim_breakablefloor2_1761_0};
static Animations anim_breakablefloor2_1761 = {1, &anim_array_breakablefloor2_1761[0]};
static bool anim_breakablefloor2_1761_initialized;
class BreakableFloor2_1761 : public Active
{
public:
    BreakableFloor2_1761(int x, int y) : Active(x, y, BreakableFloor2_1761_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableFloor 2", 16);
#endif
        this->animations = &anim_breakablefloor2_1761;
        if (!anim_breakablefloor2_1761_initialized) {
            anim_breakablefloor2_1761_initialized = true;
            images_breakablefloor2_1761_0_0[0] = get_internal_image(3030);
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
FrameObject * create_breakablefloor2_1761(int x, int y)
{
    return new (Active::pool.create()) BreakableFloor2_1761(x, y);
}
static Image* images_minibossufoborder_1762_0_0[1];
static Direction direction_minibossufoborder_1762_0_0 = {0, 50, 50, 0, 1, images_minibossufoborder_1762_0_0, 1};
static Animation anim_minibossufoborder_1762_0 = {&direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, NULL, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0, &direction_minibossufoborder_1762_0_0};
static Animation * anim_array_minibossufoborder_1762[1] = {&anim_minibossufoborder_1762_0};
static Animations anim_minibossufoborder_1762 = {1, &anim_array_minibossufoborder_1762[0]};
static bool anim_minibossufoborder_1762_initialized;
class MinibossUFOBorder_1762 : public Active
{
public:
    MinibossUFOBorder_1762(int x, int y) : Active(x, y, MinibossUFOBorder_1762_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFOBorder", 18);
#endif
        set_visible(false);
        this->animations = &anim_minibossufoborder_1762;
        if (!anim_minibossufoborder_1762_initialized) {
            anim_minibossufoborder_1762_initialized = true;
            images_minibossufoborder_1762_0_0[0] = get_internal_image(1117);
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
FrameObject * create_minibossufoborder_1762(int x, int y)
{
    return new (Active::pool.create()) MinibossUFOBorder_1762(x, y);
}
static Image* images_minibossufo_1763_0_0[1];
static Direction direction_minibossufo_1763_0_0 = {0, 50, 50, 0, 1, images_minibossufo_1763_0_0, 1};
static Animation anim_minibossufo_1763_0 = {&direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, NULL, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0, &direction_minibossufo_1763_0_0};
static Image* images_minibossufo_1763_7_0[6];
static Direction direction_minibossufo_1763_7_0 = {0, 50, 50, 4, -1, images_minibossufo_1763_7_0, 6};
static Animation anim_minibossufo_1763_7 = {&direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, NULL, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0, &direction_minibossufo_1763_7_0};
static Image* images_minibossufo_1763_8_0[1];
static Direction direction_minibossufo_1763_8_0 = {0, 50, 50, 0, -1, images_minibossufo_1763_8_0, 1};
static Animation anim_minibossufo_1763_8 = {&direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, NULL, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0, &direction_minibossufo_1763_8_0};
static Animation * anim_array_minibossufo_1763[9] = {&anim_minibossufo_1763_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossufo_1763_7, &anim_minibossufo_1763_8};
static Animations anim_minibossufo_1763 = {9, &anim_array_minibossufo_1763[0]};
static bool anim_minibossufo_1763_initialized;
class MinibossUFO_1763 : public Active
{
public:
    MinibossUFO_1763(int x, int y) : Active(x, y, MinibossUFO_1763_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_UFO", 12);
#endif
        set_visible(false);
        this->animations = &anim_minibossufo_1763;
        if (!anim_minibossufo_1763_initialized) {
            anim_minibossufo_1763_initialized = true;
            images_minibossufo_1763_0_0[0] = get_internal_image(11224);
            images_minibossufo_1763_7_0[0] = get_internal_image(11227);
            images_minibossufo_1763_7_0[1] = get_internal_image(11227);
            images_minibossufo_1763_7_0[2] = get_internal_image(11227);
            images_minibossufo_1763_7_0[3] = get_internal_image(11227);
            images_minibossufo_1763_7_0[4] = get_internal_image(11227);
            images_minibossufo_1763_7_0[5] = get_internal_image(11228);
            images_minibossufo_1763_8_0[0] = get_internal_image(11229);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 200);
        alterables->values.set(3, -90);
    }
};
FrameObject * create_minibossufo_1763(int x, int y)
{
    return new (Active::pool.create()) MinibossUFO_1763(x, y);
}
static Image* images_minibossufo2_1764_0_0[3];
static Direction direction_minibossufo2_1764_0_0 = {0, 50, 50, 0, -1, images_minibossufo2_1764_0_0, 3};
static Animation anim_minibossufo2_1764_0 = {&direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, NULL, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0, &direction_minibossufo2_1764_0_0};
static Animation * anim_array_minibossufo2_1764[1] = {&anim_minibossufo2_1764_0};
static Animations anim_minibossufo2_1764 = {1, &anim_array_minibossufo2_1764[0]};
static bool anim_minibossufo2_1764_initialized;
class MinibossUFO2_1764 : public Active
{
public:
    MinibossUFO2_1764(int x, int y) : Active(x, y, MinibossUFO2_1764_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_UFO 2", 14);
#endif
        set_visible(false);
        this->animations = &anim_minibossufo2_1764;
        if (!anim_minibossufo2_1764_initialized) {
            anim_minibossufo2_1764_initialized = true;
            images_minibossufo2_1764_0_0[0] = get_internal_image(11233);
            images_minibossufo2_1764_0_0[1] = get_internal_image(11232);
            images_minibossufo2_1764_0_0[2] = get_internal_image(11234);
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
FrameObject * create_minibossufo2_1764(int x, int y)
{
    return new (Active::pool.create()) MinibossUFO2_1764(x, y);
}
static Image* images_levelferriswheel1_1765_0_0[1];
static Direction direction_levelferriswheel1_1765_0_0 = {0, 50, 50, 0, 1, images_levelferriswheel1_1765_0_0, 1};
static Animation anim_levelferriswheel1_1765_0 = {&direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, NULL, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0, &direction_levelferriswheel1_1765_0_0};
static Animation * anim_array_levelferriswheel1_1765[1] = {&anim_levelferriswheel1_1765_0};
static Animations anim_levelferriswheel1_1765 = {1, &anim_array_levelferriswheel1_1765[0]};
static bool anim_levelferriswheel1_1765_initialized;
class LevelFerrisWheel1_1765 : public Active
{
public:
    LevelFerrisWheel1_1765(int x, int y) : Active(x, y, LevelFerrisWheel1_1765_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_FerrisWheel 1", 19);
#endif
        this->animations = &anim_levelferriswheel1_1765;
        if (!anim_levelferriswheel1_1765_initialized) {
            anim_levelferriswheel1_1765_initialized = true;
            images_levelferriswheel1_1765_0_0[0] = get_internal_image(11132);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 128);
        alterables->values.set(5, 1);
        alterables->values.set(6, 128);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelferriswheel1_1765(int x, int y)
{
    return new (Active::pool.create()) LevelFerrisWheel1_1765(x, y);
}
static Image* images_levelferriswheel2_1766_0_0[1];
static Direction direction_levelferriswheel2_1766_0_0 = {0, 50, 50, 0, 1, images_levelferriswheel2_1766_0_0, 1};
static Animation anim_levelferriswheel2_1766_0 = {&direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, NULL, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0, &direction_levelferriswheel2_1766_0_0};
static Animation * anim_array_levelferriswheel2_1766[1] = {&anim_levelferriswheel2_1766_0};
static Animations anim_levelferriswheel2_1766 = {1, &anim_array_levelferriswheel2_1766[0]};
static bool anim_levelferriswheel2_1766_initialized;
class LevelFerrisWheel2_1766 : public Active
{
public:
    LevelFerrisWheel2_1766(int x, int y) : Active(x, y, LevelFerrisWheel2_1766_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_FerrisWheel 2", 19);
#endif
        this->animations = &anim_levelferriswheel2_1766;
        if (!anim_levelferriswheel2_1766_initialized) {
            anim_levelferriswheel2_1766_initialized = true;
            images_levelferriswheel2_1766_0_0[0] = get_internal_image(4322);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
        alterables->values.set(1, 1);
        alterables->values.set(2, 128);
        alterables->values.set(4, 90);
        alterables->values.set(5, 1);
        alterables->values.set(6, 128);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelferriswheel2_1766(int x, int y)
{
    return new (Active::pool.create()) LevelFerrisWheel2_1766(x, y);
}
static Image* images_levelferriswheel3_1767_0_0[1];
static Direction direction_levelferriswheel3_1767_0_0 = {0, 50, 50, 0, 1, images_levelferriswheel3_1767_0_0, 1};
static Animation anim_levelferriswheel3_1767_0 = {&direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, NULL, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0, &direction_levelferriswheel3_1767_0_0};
static Animation * anim_array_levelferriswheel3_1767[1] = {&anim_levelferriswheel3_1767_0};
static Animations anim_levelferriswheel3_1767 = {1, &anim_array_levelferriswheel3_1767[0]};
static bool anim_levelferriswheel3_1767_initialized;
class LevelFerrisWheel3_1767 : public Active
{
public:
    LevelFerrisWheel3_1767(int x, int y) : Active(x, y, LevelFerrisWheel3_1767_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_FerrisWheel 3", 19);
#endif
        this->animations = &anim_levelferriswheel3_1767;
        if (!anim_levelferriswheel3_1767_initialized) {
            anim_levelferriswheel3_1767_initialized = true;
            images_levelferriswheel3_1767_0_0[0] = get_internal_image(11133);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
        alterables->values.set(1, 1);
        alterables->values.set(2, 128);
        alterables->values.set(4, 180);
        alterables->values.set(5, 1);
        alterables->values.set(6, 128);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelferriswheel3_1767(int x, int y)
{
    return new (Active::pool.create()) LevelFerrisWheel3_1767(x, y);
}
static Image* images_levelferriswheel4_1768_0_0[1];
static Direction direction_levelferriswheel4_1768_0_0 = {0, 50, 50, 0, 1, images_levelferriswheel4_1768_0_0, 1};
static Animation anim_levelferriswheel4_1768_0 = {&direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, NULL, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0, &direction_levelferriswheel4_1768_0_0};
static Animation * anim_array_levelferriswheel4_1768[1] = {&anim_levelferriswheel4_1768_0};
static Animations anim_levelferriswheel4_1768 = {1, &anim_array_levelferriswheel4_1768[0]};
static bool anim_levelferriswheel4_1768_initialized;
class LevelFerrisWheel4_1768 : public Active
{
public:
    LevelFerrisWheel4_1768(int x, int y) : Active(x, y, LevelFerrisWheel4_1768_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_FerrisWheel 4", 19);
#endif
        this->animations = &anim_levelferriswheel4_1768;
        if (!anim_levelferriswheel4_1768_initialized) {
            anim_levelferriswheel4_1768_initialized = true;
            images_levelferriswheel4_1768_0_0[0] = get_internal_image(3629);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 270);
        alterables->values.set(1, 1);
        alterables->values.set(2, 128);
        alterables->values.set(4, 270);
        alterables->values.set(5, 1);
        alterables->values.set(6, 128);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelferriswheel4_1768(int x, int y)
{
    return new (Active::pool.create()) LevelFerrisWheel4_1768(x, y);
}
static Image* images_hazardspikesup_1769_0_0[1];
static Direction direction_hazardspikesup_1769_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_1769_0_0, 1};
static Animation anim_hazardspikesup_1769_0 = {&direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, NULL, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0, &direction_hazardspikesup_1769_0_0};
static Animation * anim_array_hazardspikesup_1769[1] = {&anim_hazardspikesup_1769_0};
static Animations anim_hazardspikesup_1769 = {1, &anim_array_hazardspikesup_1769[0]};
static bool anim_hazardspikesup_1769_initialized;
class HazardSpikesUp_1769 : public Active
{
public:
    HazardSpikesUp_1769(int x, int y) : Active(x, y, HazardSpikesUp_1769_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_1769;
        if (!anim_hazardspikesup_1769_initialized) {
            anim_hazardspikesup_1769_initialized = true;
            images_hazardspikesup_1769_0_0[0] = get_internal_image(11191);
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
FrameObject * create_hazardspikesup_1769(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_1769(x, y);
}
static Image* images_dragontunnelhide3_1770_0_0[1];
static Direction direction_dragontunnelhide3_1770_0_0 = {0, 50, 50, 0, 1, images_dragontunnelhide3_1770_0_0, 1};
static Animation anim_dragontunnelhide3_1770_0 = {&direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, NULL, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0, &direction_dragontunnelhide3_1770_0_0};
static Animation * anim_array_dragontunnelhide3_1770[1] = {&anim_dragontunnelhide3_1770_0};
static Animations anim_dragontunnelhide3_1770 = {1, &anim_array_dragontunnelhide3_1770[0]};
static bool anim_dragontunnelhide3_1770_initialized;
class DragonTunnelHide3_1770 : public Active
{
public:
    DragonTunnelHide3_1770(int x, int y) : Active(x, y, DragonTunnelHide3_1770_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DragonTunnelHide 3", 18);
#endif
        this->animations = &anim_dragontunnelhide3_1770;
        if (!anim_dragontunnelhide3_1770_initialized) {
            anim_dragontunnelhide3_1770_initialized = true;
            images_dragontunnelhide3_1770_0_0[0] = get_internal_image(3051);
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
FrameObject * create_dragontunnelhide3_1770(int x, int y)
{
    return new (Active::pool.create()) DragonTunnelHide3_1770(x, y);
}
static Image* images_minibosslimiter_1771_0_0[1];
static Direction direction_minibosslimiter_1771_0_0 = {0, 50, 50, 0, 1, images_minibosslimiter_1771_0_0, 1};
static Animation anim_minibosslimiter_1771_0 = {&direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, NULL, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0, &direction_minibosslimiter_1771_0_0};
static Animation * anim_array_minibosslimiter_1771[1] = {&anim_minibosslimiter_1771_0};
static Animations anim_minibosslimiter_1771 = {1, &anim_array_minibosslimiter_1771[0]};
static bool anim_minibosslimiter_1771_initialized;
class MinibossLimiter_1771 : public Active
{
public:
    MinibossLimiter_1771(int x, int y) : Active(x, y, MinibossLimiter_1771_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Limiter", 16);
#endif
        set_visible(false);
        this->animations = &anim_minibosslimiter_1771;
        if (!anim_minibosslimiter_1771_initialized) {
            anim_minibosslimiter_1771_initialized = true;
            images_minibosslimiter_1771_0_0[0] = get_internal_image(6480);
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
FrameObject * create_minibosslimiter_1771(int x, int y)
{
    return new (Active::pool.create()) MinibossLimiter_1771(x, y);
}
static Image* images_minibossbulldozerarm_1772_0_0[1];
static Direction direction_minibossbulldozerarm_1772_0_0 = {0, 50, 50, 0, 1, images_minibossbulldozerarm_1772_0_0, 1};
static Image* images_minibossbulldozerarm_1772_0_16[1];
static Direction direction_minibossbulldozerarm_1772_0_16 = {16, 50, 50, 0, 1, images_minibossbulldozerarm_1772_0_16, 1};
static Animation anim_minibossbulldozerarm_1772_0 = {&direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, NULL, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, &direction_minibossbulldozerarm_1772_0_16, NULL, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0, &direction_minibossbulldozerarm_1772_0_0};
static Animation * anim_array_minibossbulldozerarm_1772[1] = {&anim_minibossbulldozerarm_1772_0};
static Animations anim_minibossbulldozerarm_1772 = {1, &anim_array_minibossbulldozerarm_1772[0]};
static bool anim_minibossbulldozerarm_1772_initialized;
class MinibossBulldozerArm_1772 : public Active
{
public:
    MinibossBulldozerArm_1772(int x, int y) : Active(x, y, MinibossBulldozerArm_1772_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerArm", 21);
#endif
        this->animations = &anim_minibossbulldozerarm_1772;
        if (!anim_minibossbulldozerarm_1772_initialized) {
            anim_minibossbulldozerarm_1772_initialized = true;
            images_minibossbulldozerarm_1772_0_0[0] = get_internal_image(11219);
            images_minibossbulldozerarm_1772_0_16[0] = get_internal_image(11218);
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
FrameObject * create_minibossbulldozerarm_1772(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerArm_1772(x, y);
}
static Image* images_minibossbulldozerwheel1_1773_0_16[1];
static Direction direction_minibossbulldozerwheel1_1773_0_16 = {16, 50, 50, 0, 1, images_minibossbulldozerwheel1_1773_0_16, 1};
static Animation anim_minibossbulldozerwheel1_1773_0 = {NULL, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16, &direction_minibossbulldozerwheel1_1773_0_16};
static Animation * anim_array_minibossbulldozerwheel1_1773[1] = {&anim_minibossbulldozerwheel1_1773_0};
static Animations anim_minibossbulldozerwheel1_1773 = {1, &anim_array_minibossbulldozerwheel1_1773[0]};
static bool anim_minibossbulldozerwheel1_1773_initialized;
class MinibossBulldozerWheel1_1773 : public Active
{
public:
    MinibossBulldozerWheel1_1773(int x, int y) : Active(x, y, MinibossBulldozerWheel1_1773_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerWheel 1", 25);
#endif
        this->animations = &anim_minibossbulldozerwheel1_1773;
        if (!anim_minibossbulldozerwheel1_1773_initialized) {
            anim_minibossbulldozerwheel1_1773_initialized = true;
            images_minibossbulldozerwheel1_1773_0_16[0] = get_internal_image(11237);
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
FrameObject * create_minibossbulldozerwheel1_1773(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerWheel1_1773(x, y);
}
static Image* images_minibossbulldozerwheel2_1774_0_16[1];
static Direction direction_minibossbulldozerwheel2_1774_0_16 = {16, 50, 50, 0, 1, images_minibossbulldozerwheel2_1774_0_16, 1};
static Animation anim_minibossbulldozerwheel2_1774_0 = {NULL, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16, &direction_minibossbulldozerwheel2_1774_0_16};
static Animation * anim_array_minibossbulldozerwheel2_1774[1] = {&anim_minibossbulldozerwheel2_1774_0};
static Animations anim_minibossbulldozerwheel2_1774 = {1, &anim_array_minibossbulldozerwheel2_1774[0]};
static bool anim_minibossbulldozerwheel2_1774_initialized;
class MinibossBulldozerWheel2_1774 : public Active
{
public:
    MinibossBulldozerWheel2_1774(int x, int y) : Active(x, y, MinibossBulldozerWheel2_1774_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerWheel 2", 25);
#endif
        this->animations = &anim_minibossbulldozerwheel2_1774;
        if (!anim_minibossbulldozerwheel2_1774_initialized) {
            anim_minibossbulldozerwheel2_1774_initialized = true;
            images_minibossbulldozerwheel2_1774_0_16[0] = get_internal_image(11238);
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
FrameObject * create_minibossbulldozerwheel2_1774(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerWheel2_1774(x, y);
}
static Image* images_minibossbulldozerclaw_1775_0_0[1];
static Direction direction_minibossbulldozerclaw_1775_0_0 = {0, 100, 100, 0, 1, images_minibossbulldozerclaw_1775_0_0, 1};
static Image* images_minibossbulldozerclaw_1775_0_16[1];
static Direction direction_minibossbulldozerclaw_1775_0_16 = {16, 100, 100, 0, 1, images_minibossbulldozerclaw_1775_0_16, 1};
static Animation anim_minibossbulldozerclaw_1775_0 = {&direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, NULL, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, &direction_minibossbulldozerclaw_1775_0_16, NULL, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0, &direction_minibossbulldozerclaw_1775_0_0};
static Animation * anim_array_minibossbulldozerclaw_1775[1] = {&anim_minibossbulldozerclaw_1775_0};
static Animations anim_minibossbulldozerclaw_1775 = {1, &anim_array_minibossbulldozerclaw_1775[0]};
static bool anim_minibossbulldozerclaw_1775_initialized;
class MinibossBulldozerClaw_1775 : public Active
{
public:
    MinibossBulldozerClaw_1775(int x, int y) : Active(x, y, MinibossBulldozerClaw_1775_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerClaw", 22);
#endif
        this->animations = &anim_minibossbulldozerclaw_1775;
        if (!anim_minibossbulldozerclaw_1775_initialized) {
            anim_minibossbulldozerclaw_1775_initialized = true;
            images_minibossbulldozerclaw_1775_0_0[0] = get_internal_image(11220);
            images_minibossbulldozerclaw_1775_0_16[0] = get_internal_image(11223);
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
FrameObject * create_minibossbulldozerclaw_1775(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerClaw_1775(x, y);
}
static Image* images_minibossbulldozerhitbox_1776_0_0[1];
static Direction direction_minibossbulldozerhitbox_1776_0_0 = {0, 50, 50, 0, 1, images_minibossbulldozerhitbox_1776_0_0, 1};
static Image* images_minibossbulldozerhitbox_1776_0_16[1];
static Direction direction_minibossbulldozerhitbox_1776_0_16 = {16, 50, 50, 0, 1, images_minibossbulldozerhitbox_1776_0_16, 1};
static Animation anim_minibossbulldozerhitbox_1776_0 = {&direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, NULL, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, &direction_minibossbulldozerhitbox_1776_0_16, NULL, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0, &direction_minibossbulldozerhitbox_1776_0_0};
static Image* images_minibossbulldozerhitbox_1776_8_0[1];
static Direction direction_minibossbulldozerhitbox_1776_8_0 = {0, 50, 50, 0, -1, images_minibossbulldozerhitbox_1776_8_0, 1};
static Image* images_minibossbulldozerhitbox_1776_8_16[1];
static Direction direction_minibossbulldozerhitbox_1776_8_16 = {16, 50, 50, 0, -1, images_minibossbulldozerhitbox_1776_8_16, 1};
static Animation anim_minibossbulldozerhitbox_1776_8 = {&direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, NULL, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, &direction_minibossbulldozerhitbox_1776_8_16, NULL, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0, &direction_minibossbulldozerhitbox_1776_8_0};
static Animation * anim_array_minibossbulldozerhitbox_1776[9] = {&anim_minibossbulldozerhitbox_1776_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossbulldozerhitbox_1776_8};
static Animations anim_minibossbulldozerhitbox_1776 = {9, &anim_array_minibossbulldozerhitbox_1776[0]};
static bool anim_minibossbulldozerhitbox_1776_initialized;
class MinibossBulldozerHitbox_1776 : public Active
{
public:
    MinibossBulldozerHitbox_1776(int x, int y) : Active(x, y, MinibossBulldozerHitbox_1776_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerHitbox", 24);
#endif
        set_visible(false);
        this->animations = &anim_minibossbulldozerhitbox_1776;
        if (!anim_minibossbulldozerhitbox_1776_initialized) {
            anim_minibossbulldozerhitbox_1776_initialized = true;
            images_minibossbulldozerhitbox_1776_0_0[0] = get_internal_image(6535);
            images_minibossbulldozerhitbox_1776_0_16[0] = get_internal_image(1585);
            images_minibossbulldozerhitbox_1776_8_0[0] = get_internal_image(6659);
            images_minibossbulldozerhitbox_1776_8_16[0] = get_internal_image(6660);
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
FrameObject * create_minibossbulldozerhitbox_1776(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerHitbox_1776(x, y);
}
static Image* images_dragontunnelhide1_1777_0_0[1];
static Direction direction_dragontunnelhide1_1777_0_0 = {0, 50, 50, 0, 1, images_dragontunnelhide1_1777_0_0, 1};
static Animation anim_dragontunnelhide1_1777_0 = {&direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, NULL, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0, &direction_dragontunnelhide1_1777_0_0};
static Animation * anim_array_dragontunnelhide1_1777[1] = {&anim_dragontunnelhide1_1777_0};
static Animations anim_dragontunnelhide1_1777 = {1, &anim_array_dragontunnelhide1_1777[0]};
static bool anim_dragontunnelhide1_1777_initialized;
class DragonTunnelHide1_1777 : public Active
{
public:
    DragonTunnelHide1_1777(int x, int y) : Active(x, y, DragonTunnelHide1_1777_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DragonTunnelHide 1", 18);
#endif
        this->animations = &anim_dragontunnelhide1_1777;
        if (!anim_dragontunnelhide1_1777_initialized) {
            anim_dragontunnelhide1_1777_initialized = true;
            images_dragontunnelhide1_1777_0_0[0] = get_internal_image(11114);
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
FrameObject * create_dragontunnelhide1_1777(int x, int y)
{
    return new (Active::pool.create()) DragonTunnelHide1_1777(x, y);
}
static Image* images_lamppostfront_1778_0_0[1];
static Direction direction_lamppostfront_1778_0_0 = {0, 50, 50, 0, 1, images_lamppostfront_1778_0_0, 1};
static Animation anim_lamppostfront_1778_0 = {&direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, NULL, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0, &direction_lamppostfront_1778_0_0};
static Image* images_lamppostfront_1778_8_0[1];
static Direction direction_lamppostfront_1778_8_0 = {0, 50, 50, 0, -1, images_lamppostfront_1778_8_0, 1};
static Animation anim_lamppostfront_1778_8 = {&direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, NULL, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0, &direction_lamppostfront_1778_8_0};
static Animation * anim_array_lamppostfront_1778[9] = {&anim_lamppostfront_1778_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_lamppostfront_1778_8};
static Animations anim_lamppostfront_1778 = {9, &anim_array_lamppostfront_1778[0]};
static bool anim_lamppostfront_1778_initialized;
class LamppostFront_1778 : public Active
{
public:
    LamppostFront_1778(int x, int y) : Active(x, y, LamppostFront_1778_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Lamppost_Front", 14);
#endif
        this->animations = &anim_lamppostfront_1778;
        if (!anim_lamppostfront_1778_initialized) {
            anim_lamppostfront_1778_initialized = true;
            images_lamppostfront_1778_0_0[0] = get_internal_image(3495);
            images_lamppostfront_1778_8_0[0] = get_internal_image(11147);
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
FrameObject * create_lamppostfront_1778(int x, int y)
{
    return new (Active::pool.create()) LamppostFront_1778(x, y);
}
static Image* images_objectchair_1779_0_0[1];
static Direction direction_objectchair_1779_0_0 = {0, 50, 50, 0, 1, images_objectchair_1779_0_0, 1};
static Animation anim_objectchair_1779_0 = {&direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, NULL, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0, &direction_objectchair_1779_0_0};
static Animation * anim_array_objectchair_1779[1] = {&anim_objectchair_1779_0};
static Animations anim_objectchair_1779 = {1, &anim_array_objectchair_1779[0]};
static bool anim_objectchair_1779_initialized;
class ObjectChair_1779 : public Active
{
public:
    ObjectChair_1779(int x, int y) : Active(x, y, ObjectChair_1779_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Object_Chair", 12);
#endif
        this->animations = &anim_objectchair_1779;
        if (!anim_objectchair_1779_initialized) {
            anim_objectchair_1779_initialized = true;
            images_objectchair_1779_0_0[0] = get_internal_image(3388);
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
FrameObject * create_objectchair_1779(int x, int y)
{
    return new (Active::pool.create()) ObjectChair_1779(x, y);
}
static Image* images_gimmickdragontunnelmask1_1780_0_0[9];
static Direction direction_gimmickdragontunnelmask1_1780_0_0 = {0, 0, 0, 0, 1, images_gimmickdragontunnelmask1_1780_0_0, 9};
static Animation anim_gimmickdragontunnelmask1_1780_0 = {&direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, NULL, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0, &direction_gimmickdragontunnelmask1_1780_0_0};
static Animation * anim_array_gimmickdragontunnelmask1_1780[1] = {&anim_gimmickdragontunnelmask1_1780_0};
static Animations anim_gimmickdragontunnelmask1_1780 = {1, &anim_array_gimmickdragontunnelmask1_1780[0]};
static bool anim_gimmickdragontunnelmask1_1780_initialized;
class GimmickDragonTunnelMask1_1780 : public Active
{
public:
    GimmickDragonTunnelMask1_1780(int x, int y) : Active(x, y, GimmickDragonTunnelMask1_1780_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnelMask 1", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickdragontunnelmask1_1780;
        if (!anim_gimmickdragontunnelmask1_1780_initialized) {
            anim_gimmickdragontunnelmask1_1780_initialized = true;
            images_gimmickdragontunnelmask1_1780_0_0[0] = get_internal_image(808);
            images_gimmickdragontunnelmask1_1780_0_0[1] = get_internal_image(810);
            images_gimmickdragontunnelmask1_1780_0_0[2] = get_internal_image(811);
            images_gimmickdragontunnelmask1_1780_0_0[3] = get_internal_image(812);
            images_gimmickdragontunnelmask1_1780_0_0[4] = get_internal_image(813);
            images_gimmickdragontunnelmask1_1780_0_0[5] = get_internal_image(814);
            images_gimmickdragontunnelmask1_1780_0_0[6] = get_internal_image(815);
            images_gimmickdragontunnelmask1_1780_0_0[7] = get_internal_image(816);
            images_gimmickdragontunnelmask1_1780_0_0[8] = get_internal_image(817);
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
FrameObject * create_gimmickdragontunnelmask1_1780(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnelMask1_1780(x, y);
}
static Image* images_gimmickdragontunnelmask2_1781_0_0[9];
static Direction direction_gimmickdragontunnelmask2_1781_0_0 = {0, 0, 0, 0, 1, images_gimmickdragontunnelmask2_1781_0_0, 9};
static Animation anim_gimmickdragontunnelmask2_1781_0 = {&direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, NULL, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0, &direction_gimmickdragontunnelmask2_1781_0_0};
static Animation * anim_array_gimmickdragontunnelmask2_1781[1] = {&anim_gimmickdragontunnelmask2_1781_0};
static Animations anim_gimmickdragontunnelmask2_1781 = {1, &anim_array_gimmickdragontunnelmask2_1781[0]};
static bool anim_gimmickdragontunnelmask2_1781_initialized;
class GimmickDragonTunnelMask2_1781 : public Active
{
public:
    GimmickDragonTunnelMask2_1781(int x, int y) : Active(x, y, GimmickDragonTunnelMask2_1781_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnelMask 2", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickdragontunnelmask2_1781;
        if (!anim_gimmickdragontunnelmask2_1781_initialized) {
            anim_gimmickdragontunnelmask2_1781_initialized = true;
            images_gimmickdragontunnelmask2_1781_0_0[0] = get_internal_image(818);
            images_gimmickdragontunnelmask2_1781_0_0[1] = get_internal_image(819);
            images_gimmickdragontunnelmask2_1781_0_0[2] = get_internal_image(820);
            images_gimmickdragontunnelmask2_1781_0_0[3] = get_internal_image(821);
            images_gimmickdragontunnelmask2_1781_0_0[4] = get_internal_image(822);
            images_gimmickdragontunnelmask2_1781_0_0[5] = get_internal_image(823);
            images_gimmickdragontunnelmask2_1781_0_0[6] = get_internal_image(824);
            images_gimmickdragontunnelmask2_1781_0_0[7] = get_internal_image(825);
            images_gimmickdragontunnelmask2_1781_0_0[8] = get_internal_image(826);
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
FrameObject * create_gimmickdragontunnelmask2_1781(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnelMask2_1781(x, y);
}
static Image* images_enemycoilhead_1782_0_0[1];
static Direction direction_enemycoilhead_1782_0_0 = {0, 50, 50, 0, 1, images_enemycoilhead_1782_0_0, 1};
static Animation anim_enemycoilhead_1782_0 = {&direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, NULL, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0, &direction_enemycoilhead_1782_0_0};
static Image* images_enemycoilhead_1782_7_0[4];
static Direction direction_enemycoilhead_1782_7_0 = {0, 75, 75, 0, 10, images_enemycoilhead_1782_7_0, 4};
static Animation anim_enemycoilhead_1782_7 = {&direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, NULL, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0, &direction_enemycoilhead_1782_7_0};
static Image* images_enemycoilhead_1782_8_0[4];
static Direction direction_enemycoilhead_1782_8_0 = {0, 50, 50, 0, 3, images_enemycoilhead_1782_8_0, 4};
static Animation anim_enemycoilhead_1782_8 = {&direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, NULL, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0, &direction_enemycoilhead_1782_8_0};
static Image* images_enemycoilhead_1782_10_0[4];
static Direction direction_enemycoilhead_1782_10_0 = {0, 25, 25, 0, 1, images_enemycoilhead_1782_10_0, 4};
static Animation anim_enemycoilhead_1782_10 = {&direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, NULL, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0, &direction_enemycoilhead_1782_10_0};
static Image* images_enemycoilhead_1782_11_0[1];
static Direction direction_enemycoilhead_1782_11_0 = {0, 50, 50, 0, -1, images_enemycoilhead_1782_11_0, 1};
static Animation anim_enemycoilhead_1782_11 = {&direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, NULL, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0, &direction_enemycoilhead_1782_11_0};
static Animation * anim_array_enemycoilhead_1782[12] = {&anim_enemycoilhead_1782_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemycoilhead_1782_7, &anim_enemycoilhead_1782_8, NULL, &anim_enemycoilhead_1782_10, &anim_enemycoilhead_1782_11};
static Animations anim_enemycoilhead_1782 = {12, &anim_array_enemycoilhead_1782[0]};
static bool anim_enemycoilhead_1782_initialized;
class EnemyCoilHead_1782 : public Active
{
public:
    EnemyCoilHead_1782(int x, int y) : Active(x, y, EnemyCoilHead_1782_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_CoilHead", 14);
#endif
        this->animations = &anim_enemycoilhead_1782;
        if (!anim_enemycoilhead_1782_initialized) {
            anim_enemycoilhead_1782_initialized = true;
            images_enemycoilhead_1782_0_0[0] = get_internal_image(975);
            images_enemycoilhead_1782_7_0[0] = get_internal_image(999);
            images_enemycoilhead_1782_7_0[1] = get_internal_image(976);
            images_enemycoilhead_1782_7_0[2] = get_internal_image(998);
            images_enemycoilhead_1782_7_0[3] = get_internal_image(997);
            images_enemycoilhead_1782_8_0[0] = get_internal_image(977);
            images_enemycoilhead_1782_8_0[1] = get_internal_image(975);
            images_enemycoilhead_1782_8_0[2] = get_internal_image(991);
            images_enemycoilhead_1782_8_0[3] = get_internal_image(977);
            images_enemycoilhead_1782_10_0[0] = get_internal_image(976);
            images_enemycoilhead_1782_10_0[1] = get_internal_image(999);
            images_enemycoilhead_1782_10_0[2] = get_internal_image(991);
            images_enemycoilhead_1782_10_0[3] = get_internal_image(977);
            images_enemycoilhead_1782_11_0[0] = get_internal_image(978);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_enemycoilhead_1782(int x, int y)
{
    return new (Active::pool.create()) EnemyCoilHead_1782(x, y);
}
class FNRailing_1784 : public Backdrop
{
public:
    FNRailing_1784(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Railing", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4362);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnrailing_1784(int x, int y)
{
    return new (Backdrop::pool.create()) FNRailing_1784(x, y);
}
class FNRailingSlope_1785 : public Backdrop
{
public:
    FNRailingSlope_1785(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_RailingSlope", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4363);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnrailingslope_1785(int x, int y)
{
    return new (Backdrop::pool.create()) FNRailingSlope_1785(x, y);
}
class LevelParallaxPiece5_1786 : public SystemBox
{
public:
    LevelParallaxPiece5_1786(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_1786_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 380;
        height = 460;
        type = PATTERN_IMAGE;
        image = get_internal_image(3593);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_1786(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_1786(x, y);
}
static Image* images_enemyflare_1787_0_0[4];
static Direction direction_enemyflare_1787_0_0 = {0, 50, 50, 0, -1, images_enemyflare_1787_0_0, 4};
static Animation anim_enemyflare_1787_0 = {&direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, NULL, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0, &direction_enemyflare_1787_0_0};
static Image* images_enemyflare_1787_7_0[4];
static Direction direction_enemyflare_1787_7_0 = {0, 50, 50, 0, -1, images_enemyflare_1787_7_0, 4};
static Animation anim_enemyflare_1787_7 = {&direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, NULL, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0, &direction_enemyflare_1787_7_0};
static Image* images_enemyflare_1787_8_0[1];
static Direction direction_enemyflare_1787_8_0 = {0, 50, 50, 0, -1, images_enemyflare_1787_8_0, 1};
static Animation anim_enemyflare_1787_8 = {&direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, NULL, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0, &direction_enemyflare_1787_8_0};
static Animation * anim_array_enemyflare_1787[9] = {&anim_enemyflare_1787_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyflare_1787_7, &anim_enemyflare_1787_8};
static Animations anim_enemyflare_1787 = {9, &anim_array_enemyflare_1787[0]};
static bool anim_enemyflare_1787_initialized;
class EnemyFlare_1787 : public Active
{
public:
    EnemyFlare_1787(int x, int y) : Active(x, y, EnemyFlare_1787_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Flare", 11);
#endif
        this->animations = &anim_enemyflare_1787;
        if (!anim_enemyflare_1787_initialized) {
            anim_enemyflare_1787_initialized = true;
            images_enemyflare_1787_0_0[0] = get_internal_image(6994);
            images_enemyflare_1787_0_0[1] = get_internal_image(7000);
            images_enemyflare_1787_0_0[2] = get_internal_image(6998);
            images_enemyflare_1787_0_0[3] = get_internal_image(7000);
            images_enemyflare_1787_7_0[0] = get_internal_image(6995);
            images_enemyflare_1787_7_0[1] = get_internal_image(6988);
            images_enemyflare_1787_7_0[2] = get_internal_image(6996);
            images_enemyflare_1787_7_0[3] = get_internal_image(6988);
            images_enemyflare_1787_8_0[0] = get_internal_image(6993);
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
FrameObject * create_enemyflare_1787(int x, int y)
{
    return new (Active::pool.create()) EnemyFlare_1787(x, y);
}
static Image* images_effectflareburst_1788_4_0[7];
static Direction direction_effectflareburst_1788_4_0 = {0, 50, 50, 0, 1, images_effectflareburst_1788_4_0, 7};
static Animation anim_effectflareburst_1788_4 = {&direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, NULL, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0, &direction_effectflareburst_1788_4_0};
static Animation * anim_array_effectflareburst_1788[5] = {NULL, NULL, NULL, NULL, &anim_effectflareburst_1788_4};
static Animations anim_effectflareburst_1788 = {5, &anim_array_effectflareburst_1788[0]};
static bool anim_effectflareburst_1788_initialized;
class EffectFlareBurst_1788 : public Active
{
public:
    EffectFlareBurst_1788(int x, int y) : Active(x, y, EffectFlareBurst_1788_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_FlareBurst", 17);
#endif
        this->animations = &anim_effectflareburst_1788;
        if (!anim_effectflareburst_1788_initialized) {
            anim_effectflareburst_1788_initialized = true;
            images_effectflareburst_1788_4_0[0] = get_internal_image(7014);
            images_effectflareburst_1788_4_0[1] = get_internal_image(7015);
            images_effectflareburst_1788_4_0[2] = get_internal_image(7019);
            images_effectflareburst_1788_4_0[3] = get_internal_image(6989);
            images_effectflareburst_1788_4_0[4] = get_internal_image(6991);
            images_effectflareburst_1788_4_0[5] = get_internal_image(6992);
            images_effectflareburst_1788_4_0[6] = get_internal_image(7016);
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
FrameObject * create_effectflareburst_1788(int x, int y)
{
    return new (Active::pool.create()) EffectFlareBurst_1788(x, y);
}
class Railroad2_1789 : public QuickBackdrop
{
public:
    Railroad2_1789(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Railroad 2", 10);
#endif
        flags |= BACKGROUND;
        width = 7168;
        height = 256;
        image = get_internal_image(7478);
        outline = 0;
    }
};
FrameObject * create_railroad2_1789(int x, int y)
{
    return new (QuickBackdrop::pool.create()) Railroad2_1789(x, y);
}
class Railroad1_1790 : public QuickBackdrop
{
public:
    Railroad1_1790(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Railroad 1", 10);
#endif
        flags |= BACKGROUND;
        width = 7168;
        height = 64;
        image = get_internal_image(6893);
        outline = 0;
    }
};
FrameObject * create_railroad1_1790(int x, int y)
{
    return new (QuickBackdrop::pool.create()) Railroad1_1790(x, y);
}
class LevelTrollyCar_1791 : public SystemBox
{
public:
    LevelTrollyCar_1791(int x, int y) : SystemBox(x, y, LevelTrollyCar_1791_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_TrollyCar", 15);
#endif
        flags |= BACKGROUND;
        width = 430;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(6900);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_leveltrollycar_1791(int x, int y)
{
    return new (SystemBox::pool.create()) LevelTrollyCar_1791(x, y);
}
static Image* images_leveltrollycarlight_1792_0_0[1];
static Direction direction_leveltrollycarlight_1792_0_0 = {0, 50, 50, 0, 1, images_leveltrollycarlight_1792_0_0, 1};
static Animation anim_leveltrollycarlight_1792_0 = {&direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, NULL, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0, &direction_leveltrollycarlight_1792_0_0};
static Animation * anim_array_leveltrollycarlight_1792[1] = {&anim_leveltrollycarlight_1792_0};
static Animations anim_leveltrollycarlight_1792 = {1, &anim_array_leveltrollycarlight_1792[0]};
static bool anim_leveltrollycarlight_1792_initialized;
class LevelTrollyCarLight_1792 : public Active
{
public:
    LevelTrollyCarLight_1792(int x, int y) : Active(x, y, LevelTrollyCarLight_1792_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_TrollyCarLight", 20);
#endif
        this->animations = &anim_leveltrollycarlight_1792;
        if (!anim_leveltrollycarlight_1792_initialized) {
            anim_leveltrollycarlight_1792_initialized = true;
            images_leveltrollycarlight_1792_0_0[0] = get_internal_image(62);
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
FrameObject * create_leveltrollycarlight_1792(int x, int y)
{
    return new (Active::pool.create()) LevelTrollyCarLight_1792(x, y);
}
static Image* images_leveltrollycarlight2_1793_0_0[1];
static Direction direction_leveltrollycarlight2_1793_0_0 = {0, 50, 50, 0, 1, images_leveltrollycarlight2_1793_0_0, 1};
static Animation anim_leveltrollycarlight2_1793_0 = {&direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, NULL, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0, &direction_leveltrollycarlight2_1793_0_0};
static Animation * anim_array_leveltrollycarlight2_1793[1] = {&anim_leveltrollycarlight2_1793_0};
static Animations anim_leveltrollycarlight2_1793 = {1, &anim_array_leveltrollycarlight2_1793[0]};
static bool anim_leveltrollycarlight2_1793_initialized;
class LevelTrollyCarLight2_1793 : public Active
{
public:
    LevelTrollyCarLight2_1793(int x, int y) : Active(x, y, LevelTrollyCarLight2_1793_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_TrollyCarLight 2", 22);
#endif
        this->animations = &anim_leveltrollycarlight2_1793;
        if (!anim_leveltrollycarlight2_1793_initialized) {
            anim_leveltrollycarlight2_1793_initialized = true;
            images_leveltrollycarlight2_1793_0_0[0] = get_internal_image(2592);
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
FrameObject * create_leveltrollycarlight2_1793(int x, int y)
{
    return new (Active::pool.create()) LevelTrollyCarLight2_1793(x, y);
}
static Image* images_largesign3_1794_0_0[6];
static Direction direction_largesign3_1794_0_0 = {0, 70, 70, 0, -1, images_largesign3_1794_0_0, 6};
static Animation anim_largesign3_1794_0 = {&direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, NULL, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0, &direction_largesign3_1794_0_0};
static Animation * anim_array_largesign3_1794[1] = {&anim_largesign3_1794_0};
static Animations anim_largesign3_1794 = {1, &anim_array_largesign3_1794[0]};
static bool anim_largesign3_1794_initialized;
class LargeSign3_1794 : public Active
{
public:
    LargeSign3_1794(int x, int y) : Active(x, y, LargeSign3_1794_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Large_sign 3", 12);
#endif
        this->animations = &anim_largesign3_1794;
        if (!anim_largesign3_1794_initialized) {
            anim_largesign3_1794_initialized = true;
            images_largesign3_1794_0_0[0] = get_internal_image(3360);
            images_largesign3_1794_0_0[1] = get_internal_image(4463);
            images_largesign3_1794_0_0[2] = get_internal_image(4323);
            images_largesign3_1794_0_0[3] = get_internal_image(4463);
            images_largesign3_1794_0_0[4] = get_internal_image(3360);
            images_largesign3_1794_0_0[5] = get_internal_image(4456);
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
FrameObject * create_largesign3_1794(int x, int y)
{
    return new (Active::pool.create()) LargeSign3_1794(x, y);
}
class DragonSlope2_1795 : public Backdrop
{
public:
    DragonSlope2_1795(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dragon Slope 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7101);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dragonslope2_1795(int x, int y)
{
    return new (Backdrop::pool.create()) DragonSlope2_1795(x, y);
}
class VerticalHalfPipe1_1796 : public Backdrop
{
public:
    VerticalHalfPipe1_1796(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 1", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8329);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe1_1796(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe1_1796(x, y);
}
class VerticalHalfPipe3_1797 : public Backdrop
{
public:
    VerticalHalfPipe3_1797(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8331);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe3_1797(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe3_1797(x, y);
}
class VerticalHalfPipe2_1798 : public Backdrop
{
public:
    VerticalHalfPipe2_1798(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8330);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe2_1798(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe2_1798(x, y);
}
class RiverBridge2_1799 : public Backdrop
{
public:
    RiverBridge2_1799(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6957);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge2_1799(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge2_1799(x, y);
}
class RiverBridge8_1800 : public Backdrop
{
public:
    RiverBridge8_1800(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6696);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge8_1800(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge8_1800(x, y);
}
class RiverBridge7_1801 : public Backdrop
{
public:
    RiverBridge7_1801(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6956);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge7_1801(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge7_1801(x, y);
}
class RiverBridge6_1802 : public Backdrop
{
public:
    RiverBridge6_1802(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridge 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6955);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_riverbridge6_1802(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridge6_1802(x, y);
}
class HangingClothes1_1803 : public Backdrop
{
public:
    HangingClothes1_1803(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HangingClothes 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3503);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hangingclothes1_1803(int x, int y)
{
    return new (Backdrop::pool.create()) HangingClothes1_1803(x, y);
}
class HangingClothes2_1804 : public Backdrop
{
public:
    HangingClothes2_1804(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HangingClothes 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4321);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hangingclothes2_1804(int x, int y)
{
    return new (Backdrop::pool.create()) HangingClothes2_1804(x, y);
}
class EdgeOverlay_1805 : public Backdrop
{
public:
    EdgeOverlay_1805(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Edge_Overlay", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7021);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_edgeoverlay_1805(int x, int y)
{
    return new (Backdrop::pool.create()) EdgeOverlay_1805(x, y);
}
class RiverBridgeBase1_1806 : public Backdrop
{
public:
    RiverBridgeBase1_1806(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridgeBase 1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6946);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_riverbridgebase1_1806(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridgeBase1_1806(x, y);
}
class RiverBridgeBase2_1807 : public Backdrop
{
public:
    RiverBridgeBase2_1807(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridgeBase 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6954);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_riverbridgebase2_1807(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridgeBase2_1807(x, y);
}
class RiverBridgeBase3_1808 : public Backdrop
{
public:
    RiverBridgeBase3_1808(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RiverBridgeBase 3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6809);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_riverbridgebase3_1808(int x, int y)
{
    return new (Backdrop::pool.create()) RiverBridgeBase3_1808(x, y);
}
class VerticalHalfPipe4_1809 : public Backdrop
{
public:
    VerticalHalfPipe4_1809(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VerticalHalfPipe 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8334);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_verticalhalfpipe4_1809(int x, int y)
{
    return new (Backdrop::pool.create()) VerticalHalfPipe4_1809(x, y);
}
