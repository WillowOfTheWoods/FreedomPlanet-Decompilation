#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_gatewayfront2_1509_0_0[1];
static Direction direction_gatewayfront2_1509_0_0 = {0, 50, 50, 0, 1, images_gatewayfront2_1509_0_0, 1};
static Animation anim_gatewayfront2_1509_0 = {&direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, NULL, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0, &direction_gatewayfront2_1509_0_0};
static Animation * anim_array_gatewayfront2_1509[1] = {&anim_gatewayfront2_1509_0};
static Animations anim_gatewayfront2_1509 = {1, &anim_array_gatewayfront2_1509[0]};
static bool anim_gatewayfront2_1509_initialized;
class GatewayFront2_1509 : public Active
{
public:
    GatewayFront2_1509(int x, int y) : Active(x, y, GatewayFront2_1509_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gateway front 2", 15);
#endif
        this->animations = &anim_gatewayfront2_1509;
        if (!anim_gatewayfront2_1509_initialized) {
            anim_gatewayfront2_1509_initialized = true;
            images_gatewayfront2_1509_0_0[0] = get_internal_image(505);
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
FrameObject * create_gatewayfront2_1509(int x, int y)
{
    return new (Active::pool.create()) GatewayFront2_1509(x, y);
}
static Image* images_objectjumppad_1510_0_0[1];
static Direction direction_objectjumppad_1510_0_0 = {0, 25, 25, 0, -1, images_objectjumppad_1510_0_0, 1};
static Image* images_objectjumppad_1510_0_1[4];
static Direction direction_objectjumppad_1510_0_1 = {1, 25, 25, 0, -1, images_objectjumppad_1510_0_1, 4};
static Image* images_objectjumppad_1510_0_2[1];
static Direction direction_objectjumppad_1510_0_2 = {2, 25, 25, 0, -1, images_objectjumppad_1510_0_2, 1};
static Animation anim_objectjumppad_1510_0 = {&direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_1, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, &direction_objectjumppad_1510_0_2, NULL, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0, &direction_objectjumppad_1510_0_0};
static Animation * anim_array_objectjumppad_1510[1] = {&anim_objectjumppad_1510_0};
static Animations anim_objectjumppad_1510 = {1, &anim_array_objectjumppad_1510[0]};
static bool anim_objectjumppad_1510_initialized;
class ObjectJumppad_1510 : public Active
{
public:
    ObjectJumppad_1510(int x, int y) : Active(x, y, ObjectJumppad_1510_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Jumppad", 14);
#endif
        this->animations = &anim_objectjumppad_1510;
        if (!anim_objectjumppad_1510_initialized) {
            anim_objectjumppad_1510_initialized = true;
            images_objectjumppad_1510_0_0[0] = get_internal_image(4929);
            images_objectjumppad_1510_0_1[0] = get_internal_image(4928);
            images_objectjumppad_1510_0_1[1] = get_internal_image(4930);
            images_objectjumppad_1510_0_1[2] = get_internal_image(4933);
            images_objectjumppad_1510_0_1[3] = get_internal_image(4935);
            images_objectjumppad_1510_0_2[0] = get_internal_image(4929);
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
FrameObject * create_objectjumppad_1510(int x, int y)
{
    return new (Active::pool.create()) ObjectJumppad_1510(x, y);
}
static Image* images_gatewayfront_1511_0_0[1];
static Direction direction_gatewayfront_1511_0_0 = {0, 50, 50, 0, 1, images_gatewayfront_1511_0_0, 1};
static Animation anim_gatewayfront_1511_0 = {&direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, NULL, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0, &direction_gatewayfront_1511_0_0};
static Animation * anim_array_gatewayfront_1511[1] = {&anim_gatewayfront_1511_0};
static Animations anim_gatewayfront_1511 = {1, &anim_array_gatewayfront_1511[0]};
static bool anim_gatewayfront_1511_initialized;
class GatewayFront_1511 : public Active
{
public:
    GatewayFront_1511(int x, int y) : Active(x, y, GatewayFront_1511_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gateway front", 13);
#endif
        this->animations = &anim_gatewayfront_1511;
        if (!anim_gatewayfront_1511_initialized) {
            anim_gatewayfront_1511_initialized = true;
            images_gatewayfront_1511_0_0[0] = get_internal_image(436);
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
FrameObject * create_gatewayfront_1511(int x, int y)
{
    return new (Active::pool.create()) GatewayFront_1511(x, y);
}
static Image* images_switchwallplate_1512_0_0[1];
static Direction direction_switchwallplate_1512_0_0 = {0, 50, 50, 0, 1, images_switchwallplate_1512_0_0, 1};
static Animation anim_switchwallplate_1512_0 = {&direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, NULL, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0, &direction_switchwallplate_1512_0_0};
static Animation * anim_array_switchwallplate_1512[1] = {&anim_switchwallplate_1512_0};
static Animations anim_switchwallplate_1512 = {1, &anim_array_switchwallplate_1512[0]};
static bool anim_switchwallplate_1512_initialized;
class SwitchWallPlate_1512 : public Active
{
public:
    SwitchWallPlate_1512(int x, int y) : Active(x, y, SwitchWallPlate_1512_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate", 16);
#endif
        this->animations = &anim_switchwallplate_1512;
        if (!anim_switchwallplate_1512_initialized) {
            anim_switchwallplate_1512_initialized = true;
            images_switchwallplate_1512_0_0[0] = get_internal_image(582);
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
FrameObject * create_switchwallplate_1512(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate_1512(x, y);
}
static Image* images_effectwarning_1513_0_0[3];
static Direction direction_effectwarning_1513_0_0 = {0, 50, 50, 0, -1, images_effectwarning_1513_0_0, 3};
static Animation anim_effectwarning_1513_0 = {&direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, NULL, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0, &direction_effectwarning_1513_0_0};
static Animation * anim_array_effectwarning_1513[1] = {&anim_effectwarning_1513_0};
static Animations anim_effectwarning_1513 = {1, &anim_array_effectwarning_1513[0]};
static bool anim_effectwarning_1513_initialized;
class EffectWarning_1513 : public Active
{
public:
    EffectWarning_1513(int x, int y) : Active(x, y, EffectWarning_1513_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Warning", 14);
#endif
        set_visible(false);
        this->animations = &anim_effectwarning_1513;
        if (!anim_effectwarning_1513_initialized) {
            anim_effectwarning_1513_initialized = true;
            images_effectwarning_1513_0_0[0] = get_internal_image(11988);
            images_effectwarning_1513_0_0[1] = get_internal_image(11989);
            images_effectwarning_1513_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectwarning_1513(int x, int y)
{
    return new (Active::pool.create()) EffectWarning_1513(x, y);
}
class CaveColumn1_1514 : public Backdrop
{
public:
    CaveColumn1_1514(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(941);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn1_1514(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn1_1514(x, y);
}
class CaveColumn2_1515 : public Backdrop
{
public:
    CaveColumn2_1515(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(457);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn2_1515(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn2_1515(x, y);
}
class LevelParallaxPiece6_1516 : public SystemBox
{
public:
    LevelParallaxPiece6_1516(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_1516_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 360;
        type = PATTERN_IMAGE;
        image = get_internal_image(2037);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_1516(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_1516(x, y);
}
class LevelParallaxPiece7_1517 : public SystemBox
{
public:
    LevelParallaxPiece7_1517(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_1517_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1580);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_1517(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_1517(x, y);
}
class LevelParallaxPiece9_1518 : public SystemBox
{
public:
    LevelParallaxPiece9_1518(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_1518_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(969);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_1518(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_1518(x, y);
}
class RMPurpleBrickBack_1519 : public QuickBackdrop
{
public:
    RMPurpleBrickBack_1519(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_PurpleBrickBack", 18);
#endif
        flags |= BACKGROUND;
        width = 1920;
        height = 2048;
        image = get_internal_image(289);
        outline = 0;
    }
};
FrameObject * create_rmpurplebrickback_1519(int x, int y)
{
    return new (QuickBackdrop::pool.create()) RMPurpleBrickBack_1519(x, y);
}
class RMBookshelf3_1520 : public Backdrop
{
public:
    RMBookshelf3_1520(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1434);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf3_1520(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf3_1520(x, y);
}
class RMBookshelf_1521 : public Backdrop
{
public:
    RMBookshelf_1521(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1431);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf_1521(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf_1521(x, y);
}
class RMBookshelf2_1522 : public Backdrop
{
public:
    RMBookshelf2_1522(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1435);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf2_1522(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf2_1522(x, y);
}
static Image* images_minibossgansekidebris_1523_0_0[4];
static Direction direction_minibossgansekidebris_1523_0_0 = {0, 0, 0, 0, 1, images_minibossgansekidebris_1523_0_0, 4};
static Animation anim_minibossgansekidebris_1523_0 = {&direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, NULL, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0, &direction_minibossgansekidebris_1523_0_0};
static Animation * anim_array_minibossgansekidebris_1523[1] = {&anim_minibossgansekidebris_1523_0};
static Animations anim_minibossgansekidebris_1523 = {1, &anim_array_minibossgansekidebris_1523[0]};
static bool anim_minibossgansekidebris_1523_initialized;
class MinibossGansekiDebris_1523 : public Active
{
public:
    MinibossGansekiDebris_1523(int x, int y) : Active(x, y, MinibossGansekiDebris_1523_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_GansekiDebris", 22);
#endif
        this->animations = &anim_minibossgansekidebris_1523;
        if (!anim_minibossgansekidebris_1523_initialized) {
            anim_minibossgansekidebris_1523_initialized = true;
            images_minibossgansekidebris_1523_0_0[0] = get_internal_image(2727);
            images_minibossgansekidebris_1523_0_0[1] = get_internal_image(3735);
            images_minibossgansekidebris_1523_0_0[2] = get_internal_image(2724);
            images_minibossgansekidebris_1523_0_0[3] = get_internal_image(2744);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_minibossgansekidebris_1523(int x, int y)
{
    return new (Active::pool.create()) MinibossGansekiDebris_1523(x, y);
}
static Image* images_hazardshockwave_1524_0_0[3];
static Direction direction_hazardshockwave_1524_0_0 = {0, 80, 80, 0, -1, images_hazardshockwave_1524_0_0, 3};
static Image* images_hazardshockwave_1524_0_16[3];
static Direction direction_hazardshockwave_1524_0_16 = {16, 80, 80, 0, -1, images_hazardshockwave_1524_0_16, 3};
static Animation anim_hazardshockwave_1524_0 = {&direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, NULL, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, &direction_hazardshockwave_1524_0_16, NULL, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0, &direction_hazardshockwave_1524_0_0};
static Image* images_hazardshockwave_1524_4_0[3];
static Direction direction_hazardshockwave_1524_4_0 = {0, 25, 25, 0, 1, images_hazardshockwave_1524_4_0, 3};
static Image* images_hazardshockwave_1524_4_16[3];
static Direction direction_hazardshockwave_1524_4_16 = {16, 25, 25, 0, 1, images_hazardshockwave_1524_4_16, 3};
static Animation anim_hazardshockwave_1524_4 = {&direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, NULL, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, &direction_hazardshockwave_1524_4_16, NULL, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0, &direction_hazardshockwave_1524_4_0};
static Animation * anim_array_hazardshockwave_1524[5] = {&anim_hazardshockwave_1524_0, NULL, NULL, NULL, &anim_hazardshockwave_1524_4};
static Animations anim_hazardshockwave_1524 = {5, &anim_array_hazardshockwave_1524[0]};
static bool anim_hazardshockwave_1524_initialized;
class HazardShockwave_1524 : public Active
{
public:
    HazardShockwave_1524(int x, int y) : Active(x, y, HazardShockwave_1524_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_Shockwave", 16);
#endif
        this->animations = &anim_hazardshockwave_1524;
        if (!anim_hazardshockwave_1524_initialized) {
            anim_hazardshockwave_1524_initialized = true;
            images_hazardshockwave_1524_0_0[0] = get_internal_image(5164);
            images_hazardshockwave_1524_0_0[1] = get_internal_image(5165);
            images_hazardshockwave_1524_0_0[2] = get_internal_image(5166);
            images_hazardshockwave_1524_0_16[0] = get_internal_image(5167);
            images_hazardshockwave_1524_0_16[1] = get_internal_image(5168);
            images_hazardshockwave_1524_0_16[2] = get_internal_image(5169);
            images_hazardshockwave_1524_4_0[0] = get_internal_image(5166);
            images_hazardshockwave_1524_4_0[1] = get_internal_image(5170);
            images_hazardshockwave_1524_4_0[2] = get_internal_image(5171);
            images_hazardshockwave_1524_4_16[0] = get_internal_image(5169);
            images_hazardshockwave_1524_4_16[1] = get_internal_image(5173);
            images_hazardshockwave_1524_4_16[2] = get_internal_image(5189);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(50);
        ((BallMovement*)movements[0])->set_deceleration(0);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_hazardshockwave_1524(int x, int y)
{
    return new (Active::pool.create()) HazardShockwave_1524(x, y);
}
static Image* images_ksprojectile1_1525_0_0[1];
static Direction direction_ksprojectile1_1525_0_0 = {0, 100, 100, 0, -1, images_ksprojectile1_1525_0_0, 1};
static Image* images_ksprojectile1_1525_0_8[4];
static Direction direction_ksprojectile1_1525_0_8 = {8, 100, 100, 0, -1, images_ksprojectile1_1525_0_8, 4};
static Animation anim_ksprojectile1_1525_0 = {&direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, NULL, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, &direction_ksprojectile1_1525_0_8, NULL, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0, &direction_ksprojectile1_1525_0_0};
static Animation * anim_array_ksprojectile1_1525[1] = {&anim_ksprojectile1_1525_0};
static Animations anim_ksprojectile1_1525 = {1, &anim_array_ksprojectile1_1525[0]};
static bool anim_ksprojectile1_1525_initialized;
class KSProjectile1_1525 : public Active
{
public:
    KSProjectile1_1525(int x, int y) : Active(x, y, KSProjectile1_1525_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("KS_Projectile 1", 15);
#endif
        set_visible(false);
        this->animations = &anim_ksprojectile1_1525;
        if (!anim_ksprojectile1_1525_initialized) {
            anim_ksprojectile1_1525_initialized = true;
            images_ksprojectile1_1525_0_0[0] = get_internal_image(926);
            images_ksprojectile1_1525_0_8[0] = get_internal_image(3062);
            images_ksprojectile1_1525_0_8[1] = get_internal_image(3208);
            images_ksprojectile1_1525_0_8[2] = get_internal_image(3207);
            images_ksprojectile1_1525_0_8[3] = get_internal_image(3210);
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
FrameObject * create_ksprojectile1_1525(int x, int y)
{
    return new (Active::pool.create()) KSProjectile1_1525(x, y);
}
static Image* images_bosschomp_1526_4_0[6];
static Direction direction_bosschomp_1526_4_0 = {0, 100, 100, 0, 1, images_bosschomp_1526_4_0, 6};
static Animation anim_bosschomp_1526_4 = {&direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, NULL, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0, &direction_bosschomp_1526_4_0};
static Animation * anim_array_bosschomp_1526[5] = {NULL, NULL, NULL, NULL, &anim_bosschomp_1526_4};
static Animations anim_bosschomp_1526 = {5, &anim_array_bosschomp_1526[0]};
static bool anim_bosschomp_1526_initialized;
class BossChomp_1526 : public Active
{
public:
    BossChomp_1526(int x, int y) : Active(x, y, BossChomp_1526_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Chomp", 10);
#endif
        this->animations = &anim_bosschomp_1526;
        if (!anim_bosschomp_1526_initialized) {
            anim_bosschomp_1526_initialized = true;
            images_bosschomp_1526_4_0[0] = get_internal_image(4626);
            images_bosschomp_1526_4_0[1] = get_internal_image(4626);
            images_bosschomp_1526_4_0[2] = get_internal_image(4627);
            images_bosschomp_1526_4_0[3] = get_internal_image(4628);
            images_bosschomp_1526_4_0[4] = get_internal_image(4629);
            images_bosschomp_1526_4_0[5] = get_internal_image(4630);
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
FrameObject * create_bosschomp_1526(int x, int y)
{
    return new (Active::pool.create()) BossChomp_1526(x, y);
}
static Image* images_bossslash_1527_0_0[8];
static Direction direction_bossslash_1527_0_0 = {0, 100, 100, 0, -1, images_bossslash_1527_0_0, 8};
static Animation anim_bossslash_1527_0 = {&direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, NULL, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0, &direction_bossslash_1527_0_0};
static Animation * anim_array_bossslash_1527[1] = {&anim_bossslash_1527_0};
static Animations anim_bossslash_1527 = {1, &anim_array_bossslash_1527[0]};
static bool anim_bossslash_1527_initialized;
class BossSlash_1527 : public Active
{
public:
    BossSlash_1527(int x, int y) : Active(x, y, BossSlash_1527_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Slash", 10);
#endif
        this->animations = &anim_bossslash_1527;
        if (!anim_bossslash_1527_initialized) {
            anim_bossslash_1527_initialized = true;
            images_bossslash_1527_0_0[0] = get_internal_image(1519);
            images_bossslash_1527_0_0[1] = get_internal_image(4615);
            images_bossslash_1527_0_0[2] = get_internal_image(4616);
            images_bossslash_1527_0_0[3] = get_internal_image(4618);
            images_bossslash_1527_0_0[4] = get_internal_image(4619);
            images_bossslash_1527_0_0[5] = get_internal_image(4623);
            images_bossslash_1527_0_0[6] = get_internal_image(4624);
            images_bossslash_1527_0_0[7] = get_internal_image(4625);
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
FrameObject * create_bossslash_1527(int x, int y)
{
    return new (Active::pool.create()) BossSlash_1527(x, y);
}
static Image* images_bossmantalithleg1_1528_0_0[1];
static Direction direction_bossmantalithleg1_1528_0_0 = {0, 50, 50, 0, 1, images_bossmantalithleg1_1528_0_0, 1};
static Image* images_bossmantalithleg1_1528_0_1[1];
static Direction direction_bossmantalithleg1_1528_0_1 = {1, 50, 50, 0, 1, images_bossmantalithleg1_1528_0_1, 1};
static Image* images_bossmantalithleg1_1528_0_2[1];
static Direction direction_bossmantalithleg1_1528_0_2 = {2, 50, 50, 0, 1, images_bossmantalithleg1_1528_0_2, 1};
static Image* images_bossmantalithleg1_1528_0_3[1];
static Direction direction_bossmantalithleg1_1528_0_3 = {3, 50, 50, 0, 1, images_bossmantalithleg1_1528_0_3, 1};
static Image* images_bossmantalithleg1_1528_0_31[8];
static Direction direction_bossmantalithleg1_1528_0_31 = {31, 14, 14, 0, -1, images_bossmantalithleg1_1528_0_31, 8};
static Animation anim_bossmantalithleg1_1528_0 = {&direction_bossmantalithleg1_1528_0_0, &direction_bossmantalithleg1_1528_0_1, &direction_bossmantalithleg1_1528_0_2, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, &direction_bossmantalithleg1_1528_0_3, NULL, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31, &direction_bossmantalithleg1_1528_0_31};
static Animation * anim_array_bossmantalithleg1_1528[1] = {&anim_bossmantalithleg1_1528_0};
static Animations anim_bossmantalithleg1_1528 = {1, &anim_array_bossmantalithleg1_1528[0]};
static bool anim_bossmantalithleg1_1528_initialized;
class BossMantalithLeg1_1528 : public Active
{
public:
    BossMantalithLeg1_1528(int x, int y) : Active(x, y, BossMantalithLeg1_1528_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithLeg 1", 19);
#endif
        this->animations = &anim_bossmantalithleg1_1528;
        if (!anim_bossmantalithleg1_1528_initialized) {
            anim_bossmantalithleg1_1528_initialized = true;
            images_bossmantalithleg1_1528_0_0[0] = get_internal_image(7445);
            images_bossmantalithleg1_1528_0_1[0] = get_internal_image(7472);
            images_bossmantalithleg1_1528_0_2[0] = get_internal_image(7473);
            images_bossmantalithleg1_1528_0_3[0] = get_internal_image(7471);
            images_bossmantalithleg1_1528_0_31[0] = get_internal_image(5712);
            images_bossmantalithleg1_1528_0_31[1] = get_internal_image(5711);
            images_bossmantalithleg1_1528_0_31[2] = get_internal_image(5718);
            images_bossmantalithleg1_1528_0_31[3] = get_internal_image(5721);
            images_bossmantalithleg1_1528_0_31[4] = get_internal_image(5723);
            images_bossmantalithleg1_1528_0_31[5] = get_internal_image(5724);
            images_bossmantalithleg1_1528_0_31[6] = get_internal_image(5725);
            images_bossmantalithleg1_1528_0_31[7] = get_internal_image(5726);
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
FrameObject * create_bossmantalithleg1_1528(int x, int y)
{
    return new (Active::pool.create()) BossMantalithLeg1_1528(x, y);
}
static Image* images_bossmantalithbody_1529_0_0[1];
static Direction direction_bossmantalithbody_1529_0_0 = {0, 50, 50, 0, 1, images_bossmantalithbody_1529_0_0, 1};
static Image* images_bossmantalithbody_1529_0_8[1];
static Direction direction_bossmantalithbody_1529_0_8 = {8, 50, 50, 0, 1, images_bossmantalithbody_1529_0_8, 1};
static Animation anim_bossmantalithbody_1529_0 = {&direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, NULL, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, &direction_bossmantalithbody_1529_0_8, NULL, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0, &direction_bossmantalithbody_1529_0_0};
static Animation * anim_array_bossmantalithbody_1529[1] = {&anim_bossmantalithbody_1529_0};
static Animations anim_bossmantalithbody_1529 = {1, &anim_array_bossmantalithbody_1529[0]};
static bool anim_bossmantalithbody_1529_initialized;
class BossMantalithBody_1529 : public Active
{
public:
    BossMantalithBody_1529(int x, int y) : Active(x, y, BossMantalithBody_1529_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithBody", 18);
#endif
        this->animations = &anim_bossmantalithbody_1529;
        if (!anim_bossmantalithbody_1529_initialized) {
            anim_bossmantalithbody_1529_initialized = true;
            images_bossmantalithbody_1529_0_0[0] = get_internal_image(4688);
            images_bossmantalithbody_1529_0_8[0] = get_internal_image(4703);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(8, 260);
        alterables->values.set(9, 200);
        alterables->values.set(13, 8);
    }
};
FrameObject * create_bossmantalithbody_1529(int x, int y)
{
    return new (Active::pool.create()) BossMantalithBody_1529(x, y);
}
static Image* images_bossmantalithneck4_1530_0_0[1];
static Direction direction_bossmantalithneck4_1530_0_0 = {0, 50, 50, 0, 1, images_bossmantalithneck4_1530_0_0, 1};
static Animation anim_bossmantalithneck4_1530_0 = {&direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, NULL, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0, &direction_bossmantalithneck4_1530_0_0};
static Animation * anim_array_bossmantalithneck4_1530[1] = {&anim_bossmantalithneck4_1530_0};
static Animations anim_bossmantalithneck4_1530 = {1, &anim_array_bossmantalithneck4_1530[0]};
static bool anim_bossmantalithneck4_1530_initialized;
class BossMantalithNeck4_1530 : public Active
{
public:
    BossMantalithNeck4_1530(int x, int y) : Active(x, y, BossMantalithNeck4_1530_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithNeck 4", 20);
#endif
        this->animations = &anim_bossmantalithneck4_1530;
        if (!anim_bossmantalithneck4_1530_initialized) {
            anim_bossmantalithneck4_1530_initialized = true;
            images_bossmantalithneck4_1530_0_0[0] = get_internal_image(4731);
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
FrameObject * create_bossmantalithneck4_1530(int x, int y)
{
    return new (Active::pool.create()) BossMantalithNeck4_1530(x, y);
}
static Image* images_bossmantalithneck3_1531_0_0[1];
static Direction direction_bossmantalithneck3_1531_0_0 = {0, 50, 50, 0, 1, images_bossmantalithneck3_1531_0_0, 1};
static Animation anim_bossmantalithneck3_1531_0 = {&direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, NULL, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0, &direction_bossmantalithneck3_1531_0_0};
static Animation * anim_array_bossmantalithneck3_1531[1] = {&anim_bossmantalithneck3_1531_0};
static Animations anim_bossmantalithneck3_1531 = {1, &anim_array_bossmantalithneck3_1531[0]};
static bool anim_bossmantalithneck3_1531_initialized;
class BossMantalithNeck3_1531 : public Active
{
public:
    BossMantalithNeck3_1531(int x, int y) : Active(x, y, BossMantalithNeck3_1531_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithNeck 3", 20);
#endif
        this->animations = &anim_bossmantalithneck3_1531;
        if (!anim_bossmantalithneck3_1531_initialized) {
            anim_bossmantalithneck3_1531_initialized = true;
            images_bossmantalithneck3_1531_0_0[0] = get_internal_image(5777);
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
FrameObject * create_bossmantalithneck3_1531(int x, int y)
{
    return new (Active::pool.create()) BossMantalithNeck3_1531(x, y);
}
static Image* images_bossmantalithleftknee_1532_0_0[1];
static Direction direction_bossmantalithleftknee_1532_0_0 = {0, 50, 50, 0, 1, images_bossmantalithleftknee_1532_0_0, 1};
static Animation anim_bossmantalithleftknee_1532_0 = {&direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, NULL, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0, &direction_bossmantalithleftknee_1532_0_0};
static Animation * anim_array_bossmantalithleftknee_1532[1] = {&anim_bossmantalithleftknee_1532_0};
static Animations anim_bossmantalithleftknee_1532 = {1, &anim_array_bossmantalithleftknee_1532[0]};
static bool anim_bossmantalithleftknee_1532_initialized;
class BossMantalithLeftKnee_1532 : public Active
{
public:
    BossMantalithLeftKnee_1532(int x, int y) : Active(x, y, BossMantalithLeftKnee_1532_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithLeftKnee", 22);
#endif
        this->animations = &anim_bossmantalithleftknee_1532;
        if (!anim_bossmantalithleftknee_1532_initialized) {
            anim_bossmantalithleftknee_1532_initialized = true;
            images_bossmantalithleftknee_1532_0_0[0] = get_internal_image(4689);
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
FrameObject * create_bossmantalithleftknee_1532(int x, int y)
{
    return new (Active::pool.create()) BossMantalithLeftKnee_1532(x, y);
}
static Image* images_bossmantalithrightknee_1533_0_0[1];
static Direction direction_bossmantalithrightknee_1533_0_0 = {0, 50, 50, 0, 1, images_bossmantalithrightknee_1533_0_0, 1};
static Animation anim_bossmantalithrightknee_1533_0 = {&direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, NULL, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0, &direction_bossmantalithrightknee_1533_0_0};
static Animation * anim_array_bossmantalithrightknee_1533[1] = {&anim_bossmantalithrightknee_1533_0};
static Animations anim_bossmantalithrightknee_1533 = {1, &anim_array_bossmantalithrightknee_1533[0]};
static bool anim_bossmantalithrightknee_1533_initialized;
class BossMantalithRightKnee_1533 : public Active
{
public:
    BossMantalithRightKnee_1533(int x, int y) : Active(x, y, BossMantalithRightKnee_1533_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithRightKnee", 23);
#endif
        this->animations = &anim_bossmantalithrightknee_1533;
        if (!anim_bossmantalithrightknee_1533_initialized) {
            anim_bossmantalithrightknee_1533_initialized = true;
            images_bossmantalithrightknee_1533_0_0[0] = get_internal_image(4689);
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
FrameObject * create_bossmantalithrightknee_1533(int x, int y)
{
    return new (Active::pool.create()) BossMantalithRightKnee_1533(x, y);
}
static Image* images_bossmantalithleg3_1534_0_0[1];
static Direction direction_bossmantalithleg3_1534_0_0 = {0, 50, 50, 0, 1, images_bossmantalithleg3_1534_0_0, 1};
static Animation anim_bossmantalithleg3_1534_0 = {&direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, NULL, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0, &direction_bossmantalithleg3_1534_0_0};
static Animation * anim_array_bossmantalithleg3_1534[1] = {&anim_bossmantalithleg3_1534_0};
static Animations anim_bossmantalithleg3_1534 = {1, &anim_array_bossmantalithleg3_1534[0]};
static bool anim_bossmantalithleg3_1534_initialized;
class BossMantalithLeg3_1534 : public Active
{
public:
    BossMantalithLeg3_1534(int x, int y) : Active(x, y, BossMantalithLeg3_1534_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithLeg 3", 19);
#endif
        this->animations = &anim_bossmantalithleg3_1534;
        if (!anim_bossmantalithleg3_1534_initialized) {
            anim_bossmantalithleg3_1534_initialized = true;
            images_bossmantalithleg3_1534_0_0[0] = get_internal_image(6786);
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
FrameObject * create_bossmantalithleg3_1534(int x, int y)
{
    return new (Active::pool.create()) BossMantalithLeg3_1534(x, y);
}
static Image* images_bossmantalithleg2_1535_0_0[1];
static Direction direction_bossmantalithleg2_1535_0_0 = {0, 50, 50, 0, 1, images_bossmantalithleg2_1535_0_0, 1};
static Animation anim_bossmantalithleg2_1535_0 = {&direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, NULL, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0, &direction_bossmantalithleg2_1535_0_0};
static Animation * anim_array_bossmantalithleg2_1535[1] = {&anim_bossmantalithleg2_1535_0};
static Animations anim_bossmantalithleg2_1535 = {1, &anim_array_bossmantalithleg2_1535[0]};
static bool anim_bossmantalithleg2_1535_initialized;
class BossMantalithLeg2_1535 : public Active
{
public:
    BossMantalithLeg2_1535(int x, int y) : Active(x, y, BossMantalithLeg2_1535_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithLeg 2", 19);
#endif
        this->animations = &anim_bossmantalithleg2_1535;
        if (!anim_bossmantalithleg2_1535_initialized) {
            anim_bossmantalithleg2_1535_initialized = true;
            images_bossmantalithleg2_1535_0_0[0] = get_internal_image(6784);
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
FrameObject * create_bossmantalithleg2_1535(int x, int y)
{
    return new (Active::pool.create()) BossMantalithLeg2_1535(x, y);
}
static Image* images_bossmantalithneck2_1536_0_0[1];
static Direction direction_bossmantalithneck2_1536_0_0 = {0, 50, 50, 0, 1, images_bossmantalithneck2_1536_0_0, 1};
static Animation anim_bossmantalithneck2_1536_0 = {&direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, NULL, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0, &direction_bossmantalithneck2_1536_0_0};
static Animation * anim_array_bossmantalithneck2_1536[1] = {&anim_bossmantalithneck2_1536_0};
static Animations anim_bossmantalithneck2_1536 = {1, &anim_array_bossmantalithneck2_1536[0]};
static bool anim_bossmantalithneck2_1536_initialized;
class BossMantalithNeck2_1536 : public Active
{
public:
    BossMantalithNeck2_1536(int x, int y) : Active(x, y, BossMantalithNeck2_1536_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithNeck 2", 20);
#endif
        this->animations = &anim_bossmantalithneck2_1536;
        if (!anim_bossmantalithneck2_1536_initialized) {
            anim_bossmantalithneck2_1536_initialized = true;
            images_bossmantalithneck2_1536_0_0[0] = get_internal_image(6541);
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
FrameObject * create_bossmantalithneck2_1536(int x, int y)
{
    return new (Active::pool.create()) BossMantalithNeck2_1536(x, y);
}
static Image* images_bossmantalithneck1_1537_0_0[1];
static Direction direction_bossmantalithneck1_1537_0_0 = {0, 50, 50, 0, 1, images_bossmantalithneck1_1537_0_0, 1};
static Animation anim_bossmantalithneck1_1537_0 = {&direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, NULL, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0, &direction_bossmantalithneck1_1537_0_0};
static Animation * anim_array_bossmantalithneck1_1537[1] = {&anim_bossmantalithneck1_1537_0};
static Animations anim_bossmantalithneck1_1537 = {1, &anim_array_bossmantalithneck1_1537[0]};
static bool anim_bossmantalithneck1_1537_initialized;
class BossMantalithNeck1_1537 : public Active
{
public:
    BossMantalithNeck1_1537(int x, int y) : Active(x, y, BossMantalithNeck1_1537_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithNeck 1", 20);
#endif
        this->animations = &anim_bossmantalithneck1_1537;
        if (!anim_bossmantalithneck1_1537_initialized) {
            anim_bossmantalithneck1_1537_initialized = true;
            images_bossmantalithneck1_1537_0_0[0] = get_internal_image(7451);
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
FrameObject * create_bossmantalithneck1_1537(int x, int y)
{
    return new (Active::pool.create()) BossMantalithNeck1_1537(x, y);
}
class Shrine1_1538 : public Backdrop
{
public:
    Shrine1_1538(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shrine 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9443);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shrine1_1538(int x, int y)
{
    return new (Backdrop::pool.create()) Shrine1_1538(x, y);
}
class RMBossCorpse3_1539 : public Backdrop
{
public:
    RMBossCorpse3_1539(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BossCorpse 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4400);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbosscorpse3_1539(int x, int y)
{
    return new (Backdrop::pool.create()) RMBossCorpse3_1539(x, y);
}
class RMBossCorpse1_1540 : public Backdrop
{
public:
    RMBossCorpse1_1540(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BossCorpse 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14458);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbosscorpse1_1540(int x, int y)
{
    return new (Backdrop::pool.create()) RMBossCorpse1_1540(x, y);
}
class RMBossCorpse2_1541 : public Backdrop
{
public:
    RMBossCorpse2_1541(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BossCorpse 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14459);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbosscorpse2_1541(int x, int y)
{
    return new (Backdrop::pool.create()) RMBossCorpse2_1541(x, y);
}
class RMCaveBrick20_1542 : public Backdrop
{
public:
    RMCaveBrick20_1542(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick20", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3814);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcavebrick20_1542(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick20_1542(x, y);
}
class RMPurpleCrystal3_1543 : public Backdrop
{
public:
    RMPurpleCrystal3_1543(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_PurpleCrystal 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10898);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmpurplecrystal3_1543(int x, int y)
{
    return new (Backdrop::pool.create()) RMPurpleCrystal3_1543(x, y);
}
class RMPurpleCrystal1_1544 : public Backdrop
{
public:
    RMPurpleCrystal1_1544(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_PurpleCrystal 1", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10897);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmpurplecrystal1_1544(int x, int y)
{
    return new (Backdrop::pool.create()) RMPurpleCrystal1_1544(x, y);
}
class RMPurpleCrystal2_1545 : public Backdrop
{
public:
    RMPurpleCrystal2_1545(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_PurpleCrystal 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(886);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmpurplecrystal2_1545(int x, int y)
{
    return new (Backdrop::pool.create()) RMPurpleCrystal2_1545(x, y);
}
class RMPurpleCrystal4_1546 : public Backdrop
{
public:
    RMPurpleCrystal4_1546(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_PurpleCrystal 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10899);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmpurplecrystal4_1546(int x, int y)
{
    return new (Backdrop::pool.create()) RMPurpleCrystal4_1546(x, y);
}
class RMCaveBrick12_1547 : public Backdrop
{
public:
    RMCaveBrick12_1547(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10884);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick12_1547(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick12_1547(x, y);
}
class RMCaveBrick8_1548 : public Backdrop
{
public:
    RMCaveBrick8_1548(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10882);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick8_1548(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick8_1548(x, y);
}
class RMCaveBrick9_1549 : public Backdrop
{
public:
    RMCaveBrick9_1549(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10881);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick9_1549(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick9_1549(x, y);
}
class RMBookshelf6_1550 : public Backdrop
{
public:
    RMBookshelf6_1550(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2599);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf6_1550(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf6_1550(x, y);
}
class RMBookshelf4_1551 : public Backdrop
{
public:
    RMBookshelf4_1551(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1545);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf4_1551(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf4_1551(x, y);
}
class RMBookshelf5_1552 : public Backdrop
{
public:
    RMBookshelf5_1552(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bookshelf 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10885);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbookshelf5_1552(int x, int y)
{
    return new (Backdrop::pool.create()) RMBookshelf5_1552(x, y);
}
class RMBlueEntrywayRight_1553 : public Backdrop
{
public:
    RMBlueEntrywayRight_1553(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayRight", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10905);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmblueentrywayright_1553(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayRight_1553(x, y);
}
class RMBlueEntrywayRight2_1554 : public Backdrop
{
public:
    RMBlueEntrywayRight2_1554(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayRight2", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10907);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmblueentrywayright2_1554(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayRight2_1554(x, y);
}
class RMBlueEntrywayLeft_1555 : public Backdrop
{
public:
    RMBlueEntrywayLeft_1555(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayLeft", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10904);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmblueentrywayleft_1555(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayLeft_1555(x, y);
}
class RMBlueEntrywayLeft2_1556 : public Backdrop
{
public:
    RMBlueEntrywayLeft2_1556(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayLeft2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10906);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmblueentrywayleft2_1556(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayLeft2_1556(x, y);
}
class RMCaveBrick16_1557 : public Backdrop
{
public:
    RMCaveBrick16_1557(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick16", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10901);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick16_1557(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick16_1557(x, y);
}
class RMCaveBrick17_1558 : public Backdrop
{
public:
    RMCaveBrick17_1558(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick17", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10902);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmcavebrick17_1558(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick17_1558(x, y);
}
class RMCaveBrick19_1559 : public Backdrop
{
public:
    RMCaveBrick19_1559(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick19", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10886);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmcavebrick19_1559(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick19_1559(x, y);
}
class RMCaveBrick18_1560 : public Backdrop
{
public:
    RMCaveBrick18_1560(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrick18", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2730);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmcavebrick18_1560(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrick18_1560(x, y);
}
class Loop7Back_1561 : public Backdrop
{
public:
    Loop7Back_1561(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 7 back", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2541);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_loop7back_1561(int x, int y)
{
    return new (Backdrop::pool.create()) Loop7Back_1561(x, y);
}
class RMCaveBrickWall_1562 : public Backdrop
{
public:
    RMCaveBrickWall_1562(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_CaveBrickWall", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10874);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmcavebrickwall_1562(int x, int y)
{
    return new (Backdrop::pool.create()) RMCaveBrickWall_1562(x, y);
}
class SwitchWallBase_1563 : public Backdrop
{
public:
    SwitchWallBase_1563(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2751);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1563(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1563(x, y);
}
class SwitchWallBase2_1564 : public Backdrop
{
public:
    SwitchWallBase2_1564(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5193);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase2_1564(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase2_1564(x, y);
}
static Image* images_objectbluepot_1565_0_0[1];
static Direction direction_objectbluepot_1565_0_0 = {0, 50, 50, 0, -1, images_objectbluepot_1565_0_0, 1};
static Image* images_objectbluepot_1565_0_8[1];
static Direction direction_objectbluepot_1565_0_8 = {8, 50, 50, 0, -1, images_objectbluepot_1565_0_8, 1};
static Animation anim_objectbluepot_1565_0 = {&direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, NULL, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, &direction_objectbluepot_1565_0_8, NULL, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0, &direction_objectbluepot_1565_0_0};
static Animation * anim_array_objectbluepot_1565[1] = {&anim_objectbluepot_1565_0};
static Animations anim_objectbluepot_1565 = {1, &anim_array_objectbluepot_1565[0]};
static bool anim_objectbluepot_1565_initialized;
class ObjectBluePot_1565 : public Active
{
public:
    ObjectBluePot_1565(int x, int y) : Active(x, y, ObjectBluePot_1565_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Object_BluePot", 14);
#endif
        this->animations = &anim_objectbluepot_1565;
        if (!anim_objectbluepot_1565_initialized) {
            anim_objectbluepot_1565_initialized = true;
            images_objectbluepot_1565_0_0[0] = get_internal_image(3020);
            images_objectbluepot_1565_0_8[0] = get_internal_image(2914);
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
FrameObject * create_objectbluepot_1565(int x, int y)
{
    return new (Active::pool.create()) ObjectBluePot_1565(x, y);
}
static Image* images_gimmickhangingmovingsensor_1566_0_0[1];
static Direction direction_gimmickhangingmovingsensor_1566_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_1566_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_1566_0 = {&direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, NULL, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0, &direction_gimmickhangingmovingsensor_1566_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_1566[1] = {&anim_gimmickhangingmovingsensor_1566_0};
static Animations anim_gimmickhangingmovingsensor_1566 = {1, &anim_array_gimmickhangingmovingsensor_1566[0]};
static bool anim_gimmickhangingmovingsensor_1566_initialized;
class GimmickHangingMovingSensor_1566 : public Active
{
public:
    GimmickHangingMovingSensor_1566(int x, int y) : Active(x, y, GimmickHangingMovingSensor_1566_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_1566;
        if (!anim_gimmickhangingmovingsensor_1566_initialized) {
            anim_gimmickhangingmovingsensor_1566_initialized = true;
            images_gimmickhangingmovingsensor_1566_0_0[0] = get_internal_image(38);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 100);
        alterables->values.set(5, 1);
        alterables->values.set(6, 150);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingsensor_1566(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_1566(x, y);
}
static Image* images_gimmickhangingswitch_1567_0_0[1];
static Direction direction_gimmickhangingswitch_1567_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingswitch_1567_0_0, 1};
static Animation anim_gimmickhangingswitch_1567_0 = {&direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, NULL, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0, &direction_gimmickhangingswitch_1567_0_0};
static Animation * anim_array_gimmickhangingswitch_1567[1] = {&anim_gimmickhangingswitch_1567_0};
static Animations anim_gimmickhangingswitch_1567 = {1, &anim_array_gimmickhangingswitch_1567[0]};
static bool anim_gimmickhangingswitch_1567_initialized;
class GimmickHangingSwitch_1567 : public Active
{
public:
    GimmickHangingSwitch_1567(int x, int y) : Active(x, y, GimmickHangingSwitch_1567_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingSwitch", 21);
#endif
        this->animations = &anim_gimmickhangingswitch_1567;
        if (!anim_gimmickhangingswitch_1567_initialized) {
            anim_gimmickhangingswitch_1567_initialized = true;
            images_gimmickhangingswitch_1567_0_0[0] = get_internal_image(157);
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
FrameObject * create_gimmickhangingswitch_1567(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingSwitch_1567(x, y);
}
static Image* images_spikeceiling_1568_0_0[1];
static Direction direction_spikeceiling_1568_0_0 = {0, 50, 50, 0, 1, images_spikeceiling_1568_0_0, 1};
static Image* images_spikeceiling_1568_0_1[1];
static Direction direction_spikeceiling_1568_0_1 = {1, 50, 50, 0, 1, images_spikeceiling_1568_0_1, 1};
static Image* images_spikeceiling_1568_0_2[1];
static Direction direction_spikeceiling_1568_0_2 = {2, 50, 50, 0, 1, images_spikeceiling_1568_0_2, 1};
static Image* images_spikeceiling_1568_0_3[1];
static Direction direction_spikeceiling_1568_0_3 = {3, 50, 50, 0, 1, images_spikeceiling_1568_0_3, 1};
static Image* images_spikeceiling_1568_0_4[1];
static Direction direction_spikeceiling_1568_0_4 = {4, 50, 50, 0, 1, images_spikeceiling_1568_0_4, 1};
static Animation anim_spikeceiling_1568_0 = {&direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_1, &direction_spikeceiling_1568_0_2, &direction_spikeceiling_1568_0_3, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, &direction_spikeceiling_1568_0_4, NULL, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0, &direction_spikeceiling_1568_0_0};
static Animation * anim_array_spikeceiling_1568[1] = {&anim_spikeceiling_1568_0};
static Animations anim_spikeceiling_1568 = {1, &anim_array_spikeceiling_1568[0]};
static bool anim_spikeceiling_1568_initialized;
class SpikeCeiling_1568 : public Active
{
public:
    SpikeCeiling_1568(int x, int y) : Active(x, y, SpikeCeiling_1568_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Spike ceiling", 13);
#endif
        this->animations = &anim_spikeceiling_1568;
        if (!anim_spikeceiling_1568_initialized) {
            anim_spikeceiling_1568_initialized = true;
            images_spikeceiling_1568_0_0[0] = get_internal_image(7938);
            images_spikeceiling_1568_0_1[0] = get_internal_image(7942);
            images_spikeceiling_1568_0_2[0] = get_internal_image(7902);
            images_spikeceiling_1568_0_3[0] = get_internal_image(7939);
            images_spikeceiling_1568_0_4[0] = get_internal_image(7940);
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
FrameObject * create_spikeceiling_1568(int x, int y)
{
    return new (Active::pool.create()) SpikeCeiling_1568(x, y);
}
static Image* images_lightstonebase_1569_0_0[1];
static Direction direction_lightstonebase_1569_0_0 = {0, 50, 50, 0, 1, images_lightstonebase_1569_0_0, 1};
static Image* images_lightstonebase_1569_0_5[1];
static Direction direction_lightstonebase_1569_0_5 = {5, 50, 50, 0, 1, images_lightstonebase_1569_0_5, 1};
static Animation anim_lightstonebase_1569_0 = {&direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_5, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0, &direction_lightstonebase_1569_0_0};
static Image* images_lightstonebase_1569_7_0[2];
static Direction direction_lightstonebase_1569_7_0 = {0, 50, 50, 0, -1, images_lightstonebase_1569_7_0, 2};
static Image* images_lightstonebase_1569_7_1[2];
static Direction direction_lightstonebase_1569_7_1 = {1, 50, 50, 0, -1, images_lightstonebase_1569_7_1, 2};
static Image* images_lightstonebase_1569_7_2[2];
static Direction direction_lightstonebase_1569_7_2 = {2, 50, 50, 0, -1, images_lightstonebase_1569_7_2, 2};
static Image* images_lightstonebase_1569_7_3[2];
static Direction direction_lightstonebase_1569_7_3 = {3, 50, 50, 0, -1, images_lightstonebase_1569_7_3, 2};
static Image* images_lightstonebase_1569_7_4[2];
static Direction direction_lightstonebase_1569_7_4 = {4, 50, 50, 0, -1, images_lightstonebase_1569_7_4, 2};
static Image* images_lightstonebase_1569_7_5[2];
static Direction direction_lightstonebase_1569_7_5 = {5, 50, 50, 0, -1, images_lightstonebase_1569_7_5, 2};
static Animation anim_lightstonebase_1569_7 = {&direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_1, &direction_lightstonebase_1569_7_2, &direction_lightstonebase_1569_7_3, &direction_lightstonebase_1569_7_4, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_5, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0, &direction_lightstonebase_1569_7_0};
static Animation * anim_array_lightstonebase_1569[8] = {&anim_lightstonebase_1569_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_lightstonebase_1569_7};
static Animations anim_lightstonebase_1569 = {8, &anim_array_lightstonebase_1569[0]};
static bool anim_lightstonebase_1569_initialized;
class LightstoneBase_1569 : public Active
{
public:
    LightstoneBase_1569(int x, int y) : Active(x, y, LightstoneBase_1569_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lightstone_base", 15);
#endif
        this->animations = &anim_lightstonebase_1569;
        if (!anim_lightstonebase_1569_initialized) {
            anim_lightstonebase_1569_initialized = true;
            images_lightstonebase_1569_0_0[0] = get_internal_image(13146);
            images_lightstonebase_1569_0_5[0] = get_internal_image(13148);
            images_lightstonebase_1569_7_0[0] = get_internal_image(13147);
            images_lightstonebase_1569_7_0[1] = get_internal_image(13146);
            images_lightstonebase_1569_7_1[0] = get_internal_image(13153);
            images_lightstonebase_1569_7_1[1] = get_internal_image(13146);
            images_lightstonebase_1569_7_2[0] = get_internal_image(13152);
            images_lightstonebase_1569_7_2[1] = get_internal_image(13146);
            images_lightstonebase_1569_7_3[0] = get_internal_image(13151);
            images_lightstonebase_1569_7_3[1] = get_internal_image(13146);
            images_lightstonebase_1569_7_4[0] = get_internal_image(13150);
            images_lightstonebase_1569_7_4[1] = get_internal_image(13146);
            images_lightstonebase_1569_7_5[0] = get_internal_image(13149);
            images_lightstonebase_1569_7_5[1] = get_internal_image(13146);
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
FrameObject * create_lightstonebase_1569(int x, int y)
{
    return new (Active::pool.create()) LightstoneBase_1569(x, y);
}
static Image* images_lightstonebase2_1570_0_0[1];
static Direction direction_lightstonebase2_1570_0_0 = {0, 50, 50, 0, 1, images_lightstonebase2_1570_0_0, 1};
static Image* images_lightstonebase2_1570_0_5[1];
static Direction direction_lightstonebase2_1570_0_5 = {5, 50, 50, 0, 1, images_lightstonebase2_1570_0_5, 1};
static Animation anim_lightstonebase2_1570_0 = {&direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_5, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0, &direction_lightstonebase2_1570_0_0};
static Image* images_lightstonebase2_1570_7_0[2];
static Direction direction_lightstonebase2_1570_7_0 = {0, 50, 50, 0, -1, images_lightstonebase2_1570_7_0, 2};
static Image* images_lightstonebase2_1570_7_1[2];
static Direction direction_lightstonebase2_1570_7_1 = {1, 50, 50, 0, -1, images_lightstonebase2_1570_7_1, 2};
static Image* images_lightstonebase2_1570_7_2[2];
static Direction direction_lightstonebase2_1570_7_2 = {2, 50, 50, 0, -1, images_lightstonebase2_1570_7_2, 2};
static Image* images_lightstonebase2_1570_7_3[2];
static Direction direction_lightstonebase2_1570_7_3 = {3, 50, 50, 0, -1, images_lightstonebase2_1570_7_3, 2};
static Image* images_lightstonebase2_1570_7_4[2];
static Direction direction_lightstonebase2_1570_7_4 = {4, 50, 50, 0, -1, images_lightstonebase2_1570_7_4, 2};
static Image* images_lightstonebase2_1570_7_5[2];
static Direction direction_lightstonebase2_1570_7_5 = {5, 50, 50, 0, -1, images_lightstonebase2_1570_7_5, 2};
static Animation anim_lightstonebase2_1570_7 = {&direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_1, &direction_lightstonebase2_1570_7_2, &direction_lightstonebase2_1570_7_3, &direction_lightstonebase2_1570_7_4, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_5, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0, &direction_lightstonebase2_1570_7_0};
static Animation * anim_array_lightstonebase2_1570[8] = {&anim_lightstonebase2_1570_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_lightstonebase2_1570_7};
static Animations anim_lightstonebase2_1570 = {8, &anim_array_lightstonebase2_1570[0]};
static bool anim_lightstonebase2_1570_initialized;
class LightstoneBase2_1570 : public Active
{
public:
    LightstoneBase2_1570(int x, int y) : Active(x, y, LightstoneBase2_1570_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lightstone_base 2", 17);
#endif
        this->animations = &anim_lightstonebase2_1570;
        if (!anim_lightstonebase2_1570_initialized) {
            anim_lightstonebase2_1570_initialized = true;
            images_lightstonebase2_1570_0_0[0] = get_internal_image(13154);
            images_lightstonebase2_1570_0_5[0] = get_internal_image(13161);
            images_lightstonebase2_1570_7_0[0] = get_internal_image(13160);
            images_lightstonebase2_1570_7_0[1] = get_internal_image(13154);
            images_lightstonebase2_1570_7_1[0] = get_internal_image(13159);
            images_lightstonebase2_1570_7_1[1] = get_internal_image(13154);
            images_lightstonebase2_1570_7_2[0] = get_internal_image(13158);
            images_lightstonebase2_1570_7_2[1] = get_internal_image(13154);
            images_lightstonebase2_1570_7_3[0] = get_internal_image(13157);
            images_lightstonebase2_1570_7_3[1] = get_internal_image(13154);
            images_lightstonebase2_1570_7_4[0] = get_internal_image(13156);
            images_lightstonebase2_1570_7_4[1] = get_internal_image(13154);
            images_lightstonebase2_1570_7_5[0] = get_internal_image(13155);
            images_lightstonebase2_1570_7_5[1] = get_internal_image(13154);
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
FrameObject * create_lightstonebase2_1570(int x, int y)
{
    return new (Active::pool.create()) LightstoneBase2_1570(x, y);
}
static Image* images_lightstonetop_1571_0_0[1];
static Direction direction_lightstonetop_1571_0_0 = {0, 50, 50, 0, -1, images_lightstonetop_1571_0_0, 1};
static Image* images_lightstonetop_1571_0_8[1];
static Direction direction_lightstonetop_1571_0_8 = {8, 50, 50, 0, 1, images_lightstonetop_1571_0_8, 1};
static Animation anim_lightstonetop_1571_0 = {&direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, NULL, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, &direction_lightstonetop_1571_0_8, NULL, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0, &direction_lightstonetop_1571_0_0};
static Animation * anim_array_lightstonetop_1571[1] = {&anim_lightstonetop_1571_0};
static Animations anim_lightstonetop_1571 = {1, &anim_array_lightstonetop_1571[0]};
static bool anim_lightstonetop_1571_initialized;
class LightstoneTop_1571 : public Active
{
public:
    LightstoneTop_1571(int x, int y) : Active(x, y, LightstoneTop_1571_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lightstone_top", 14);
#endif
        this->animations = &anim_lightstonetop_1571;
        if (!anim_lightstonetop_1571_initialized) {
            anim_lightstonetop_1571_initialized = true;
            images_lightstonetop_1571_0_0[0] = get_internal_image(2968);
            images_lightstonetop_1571_0_8[0] = get_internal_image(10911);
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
FrameObject * create_lightstonetop_1571(int x, int y)
{
    return new (Active::pool.create()) LightstoneTop_1571(x, y);
}
static Image* images_switchwallplate_1572_0_0[1];
static Direction direction_switchwallplate_1572_0_0 = {0, 50, 50, 0, 1, images_switchwallplate_1572_0_0, 1};
static Animation anim_switchwallplate_1572_0 = {&direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, NULL, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0, &direction_switchwallplate_1572_0_0};
static Animation * anim_array_switchwallplate_1572[1] = {&anim_switchwallplate_1572_0};
static Animations anim_switchwallplate_1572 = {1, &anim_array_switchwallplate_1572[0]};
static bool anim_switchwallplate_1572_initialized;
class SwitchWallPlate_1572 : public Active
{
public:
    SwitchWallPlate_1572(int x, int y) : Active(x, y, SwitchWallPlate_1572_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate", 16);
#endif
        this->animations = &anim_switchwallplate_1572;
        if (!anim_switchwallplate_1572_initialized) {
            anim_switchwallplate_1572_initialized = true;
            images_switchwallplate_1572_0_0[0] = get_internal_image(3274);
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
FrameObject * create_switchwallplate_1572(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate_1572(x, y);
}
static Image* images_switchwallplate2_1573_0_0[1];
static Direction direction_switchwallplate2_1573_0_0 = {0, 50, 50, 0, 1, images_switchwallplate2_1573_0_0, 1};
static Animation anim_switchwallplate2_1573_0 = {&direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, NULL, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0, &direction_switchwallplate2_1573_0_0};
static Animation * anim_array_switchwallplate2_1573[1] = {&anim_switchwallplate2_1573_0};
static Animations anim_switchwallplate2_1573 = {1, &anim_array_switchwallplate2_1573[0]};
static bool anim_switchwallplate2_1573_initialized;
class SwitchWallPlate2_1573 : public Active
{
public:
    SwitchWallPlate2_1573(int x, int y) : Active(x, y, SwitchWallPlate2_1573_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate 2", 18);
#endif
        this->animations = &anim_switchwallplate2_1573;
        if (!anim_switchwallplate2_1573_initialized) {
            anim_switchwallplate2_1573_initialized = true;
            images_switchwallplate2_1573_0_0[0] = get_internal_image(582);
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
FrameObject * create_switchwallplate2_1573(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate2_1573(x, y);
}
static Image* images_lightstonetop2_1574_0_0[1];
static Direction direction_lightstonetop2_1574_0_0 = {0, 50, 50, 0, -1, images_lightstonetop2_1574_0_0, 1};
static Image* images_lightstonetop2_1574_0_8[1];
static Direction direction_lightstonetop2_1574_0_8 = {8, 50, 50, 0, 1, images_lightstonetop2_1574_0_8, 1};
static Animation anim_lightstonetop2_1574_0 = {&direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, NULL, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, &direction_lightstonetop2_1574_0_8, NULL, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0, &direction_lightstonetop2_1574_0_0};
static Animation * anim_array_lightstonetop2_1574[1] = {&anim_lightstonetop2_1574_0};
static Animations anim_lightstonetop2_1574 = {1, &anim_array_lightstonetop2_1574[0]};
static bool anim_lightstonetop2_1574_initialized;
class LightstoneTop2_1574 : public Active
{
public:
    LightstoneTop2_1574(int x, int y) : Active(x, y, LightstoneTop2_1574_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lightstone_top 2", 16);
#endif
        this->animations = &anim_lightstonetop2_1574;
        if (!anim_lightstonetop2_1574_initialized) {
            anim_lightstonetop2_1574_initialized = true;
            images_lightstonetop2_1574_0_0[0] = get_internal_image(4059);
            images_lightstonetop2_1574_0_8[0] = get_internal_image(10910);
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
FrameObject * create_lightstonetop2_1574(int x, int y)
{
    return new (Active::pool.create()) LightstoneTop2_1574(x, y);
}
static Image* images_minibossbonegolempiece3_1575_0_0[1];
static Direction direction_minibossbonegolempiece3_1575_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolempiece3_1575_0_0, 1};
static Image* images_minibossbonegolempiece3_1575_0_16[1];
static Direction direction_minibossbonegolempiece3_1575_0_16 = {16, 7, 7, 0, -1, images_minibossbonegolempiece3_1575_0_16, 1};
static Animation anim_minibossbonegolempiece3_1575_0 = {&direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, NULL, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, &direction_minibossbonegolempiece3_1575_0_16, NULL, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0, &direction_minibossbonegolempiece3_1575_0_0};
static Animation * anim_array_minibossbonegolempiece3_1575[1] = {&anim_minibossbonegolempiece3_1575_0};
static Animations anim_minibossbonegolempiece3_1575 = {1, &anim_array_minibossbonegolempiece3_1575[0]};
static bool anim_minibossbonegolempiece3_1575_initialized;
class MinibossBoneGolemPiece3_1575 : public Active
{
public:
    MinibossBoneGolemPiece3_1575(int x, int y) : Active(x, y, MinibossBoneGolemPiece3_1575_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemPiece 3", 25);
#endif
        this->animations = &anim_minibossbonegolempiece3_1575;
        if (!anim_minibossbonegolempiece3_1575_initialized) {
            anim_minibossbonegolempiece3_1575_initialized = true;
            images_minibossbonegolempiece3_1575_0_0[0] = get_internal_image(13166);
            images_minibossbonegolempiece3_1575_0_16[0] = get_internal_image(13173);
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
FrameObject * create_minibossbonegolempiece3_1575(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemPiece3_1575(x, y);
}
static Image* images_minibossbonegolem_1576_0_0[8];
static Direction direction_minibossbonegolem_1576_0_0 = {0, 14, 14, 0, -1, images_minibossbonegolem_1576_0_0, 8};
static Animation anim_minibossbonegolem_1576_0 = {&direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, NULL, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0, &direction_minibossbonegolem_1576_0_0};
static Animation * anim_array_minibossbonegolem_1576[1] = {&anim_minibossbonegolem_1576_0};
static Animations anim_minibossbonegolem_1576 = {1, &anim_array_minibossbonegolem_1576[0]};
static bool anim_minibossbonegolem_1576_initialized;
class MinibossBoneGolem_1576 : public Active
{
public:
    MinibossBoneGolem_1576(int x, int y) : Active(x, y, MinibossBoneGolem_1576_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolem", 18);
#endif
        this->animations = &anim_minibossbonegolem_1576;
        if (!anim_minibossbonegolem_1576_initialized) {
            anim_minibossbonegolem_1576_initialized = true;
            images_minibossbonegolem_1576_0_0[0] = get_internal_image(13184);
            images_minibossbonegolem_1576_0_0[1] = get_internal_image(13177);
            images_minibossbonegolem_1576_0_0[2] = get_internal_image(13178);
            images_minibossbonegolem_1576_0_0[3] = get_internal_image(13179);
            images_minibossbonegolem_1576_0_0[4] = get_internal_image(13180);
            images_minibossbonegolem_1576_0_0[5] = get_internal_image(13181);
            images_minibossbonegolem_1576_0_0[6] = get_internal_image(13183);
            images_minibossbonegolem_1576_0_0[7] = get_internal_image(13182);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 70);
    }
};
FrameObject * create_minibossbonegolem_1576(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolem_1576(x, y);
}
static Image* images_minibossbonegolempiece_1577_0_0[1];
static Direction direction_minibossbonegolempiece_1577_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolempiece_1577_0_0, 1};
static Image* images_minibossbonegolempiece_1577_0_8[2];
static Direction direction_minibossbonegolempiece_1577_0_8 = {8, 50, 50, 0, 1, images_minibossbonegolempiece_1577_0_8, 2};
static Image* images_minibossbonegolempiece_1577_0_16[1];
static Direction direction_minibossbonegolempiece_1577_0_16 = {16, 7, 7, 0, -1, images_minibossbonegolempiece_1577_0_16, 1};
static Animation anim_minibossbonegolempiece_1577_0 = {&direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, NULL, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, &direction_minibossbonegolempiece_1577_0_8, NULL, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, &direction_minibossbonegolempiece_1577_0_16, NULL, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0, &direction_minibossbonegolempiece_1577_0_0};
static Animation * anim_array_minibossbonegolempiece_1577[1] = {&anim_minibossbonegolempiece_1577_0};
static Animations anim_minibossbonegolempiece_1577 = {1, &anim_array_minibossbonegolempiece_1577[0]};
static bool anim_minibossbonegolempiece_1577_initialized;
class MinibossBoneGolemPiece_1577 : public Active
{
public:
    MinibossBoneGolemPiece_1577(int x, int y) : Active(x, y, MinibossBoneGolemPiece_1577_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemPiece", 23);
#endif
        this->animations = &anim_minibossbonegolempiece_1577;
        if (!anim_minibossbonegolempiece_1577_initialized) {
            anim_minibossbonegolempiece_1577_initialized = true;
            images_minibossbonegolempiece_1577_0_0[0] = get_internal_image(13165);
            images_minibossbonegolempiece_1577_0_8[0] = get_internal_image(1861);
            images_minibossbonegolempiece_1577_0_8[1] = get_internal_image(4922);
            images_minibossbonegolempiece_1577_0_16[0] = get_internal_image(13174);
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
FrameObject * create_minibossbonegolempiece_1577(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemPiece_1577(x, y);
}
static Image* images_minibossbonegolempiece6_1578_0_0[1];
static Direction direction_minibossbonegolempiece6_1578_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolempiece6_1578_0_0, 1};
static Image* images_minibossbonegolempiece6_1578_0_16[1];
static Direction direction_minibossbonegolempiece6_1578_0_16 = {16, 7, 7, 0, -1, images_minibossbonegolempiece6_1578_0_16, 1};
static Image* images_minibossbonegolempiece6_1578_0_24[1];
static Direction direction_minibossbonegolempiece6_1578_0_24 = {24, 7, 7, 0, -1, images_minibossbonegolempiece6_1578_0_24, 1};
static Animation anim_minibossbonegolempiece6_1578_0 = {&direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, NULL, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, &direction_minibossbonegolempiece6_1578_0_16, NULL, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, &direction_minibossbonegolempiece6_1578_0_24, NULL, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0, &direction_minibossbonegolempiece6_1578_0_0};
static Animation * anim_array_minibossbonegolempiece6_1578[1] = {&anim_minibossbonegolempiece6_1578_0};
static Animations anim_minibossbonegolempiece6_1578 = {1, &anim_array_minibossbonegolempiece6_1578[0]};
static bool anim_minibossbonegolempiece6_1578_initialized;
class MinibossBoneGolemPiece6_1578 : public Active
{
public:
    MinibossBoneGolemPiece6_1578(int x, int y) : Active(x, y, MinibossBoneGolemPiece6_1578_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemPiece 6", 25);
#endif
        this->animations = &anim_minibossbonegolempiece6_1578;
        if (!anim_minibossbonegolempiece6_1578_initialized) {
            anim_minibossbonegolempiece6_1578_initialized = true;
            images_minibossbonegolempiece6_1578_0_0[0] = get_internal_image(13168);
            images_minibossbonegolempiece6_1578_0_16[0] = get_internal_image(13169);
            images_minibossbonegolempiece6_1578_0_24[0] = get_internal_image(13171);
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
FrameObject * create_minibossbonegolempiece6_1578(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemPiece6_1578(x, y);
}
static Image* images_minibossbonegolempiece5_1579_0_0[1];
static Direction direction_minibossbonegolempiece5_1579_0_0 = {0, 50, 50, 0, 1, images_minibossbonegolempiece5_1579_0_0, 1};
static Image* images_minibossbonegolempiece5_1579_0_16[1];
static Direction direction_minibossbonegolempiece5_1579_0_16 = {16, 50, 50, 0, 1, images_minibossbonegolempiece5_1579_0_16, 1};
static Image* images_minibossbonegolempiece5_1579_0_24[1];
static Direction direction_minibossbonegolempiece5_1579_0_24 = {24, 50, 50, 0, 1, images_minibossbonegolempiece5_1579_0_24, 1};
static Animation anim_minibossbonegolempiece5_1579_0 = {&direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, NULL, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, &direction_minibossbonegolempiece5_1579_0_16, NULL, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, &direction_minibossbonegolempiece5_1579_0_24, NULL, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0, &direction_minibossbonegolempiece5_1579_0_0};
static Animation * anim_array_minibossbonegolempiece5_1579[1] = {&anim_minibossbonegolempiece5_1579_0};
static Animations anim_minibossbonegolempiece5_1579 = {1, &anim_array_minibossbonegolempiece5_1579[0]};
static bool anim_minibossbonegolempiece5_1579_initialized;
class MinibossBoneGolemPiece5_1579 : public Active
{
public:
    MinibossBoneGolemPiece5_1579(int x, int y) : Active(x, y, MinibossBoneGolemPiece5_1579_type)
    {
        // qualifiers: 15, 16, 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemPiece 5", 25);
#endif
        this->animations = &anim_minibossbonegolempiece5_1579;
        if (!anim_minibossbonegolempiece5_1579_initialized) {
            anim_minibossbonegolempiece5_1579_initialized = true;
            images_minibossbonegolempiece5_1579_0_0[0] = get_internal_image(13167);
            images_minibossbonegolempiece5_1579_0_16[0] = get_internal_image(13170);
            images_minibossbonegolempiece5_1579_0_24[0] = get_internal_image(13172);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(4, 256);
        alterables->values.set(5, 800);
        alterables->values.set(6, 1);
    }
};
FrameObject * create_minibossbonegolempiece5_1579(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemPiece5_1579(x, y);
}
static Image* images_minibossbonegolemneck1_1580_0_0[1];
static Direction direction_minibossbonegolemneck1_1580_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolemneck1_1580_0_0, 1};
static Animation anim_minibossbonegolemneck1_1580_0 = {&direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, NULL, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0, &direction_minibossbonegolemneck1_1580_0_0};
static Animation * anim_array_minibossbonegolemneck1_1580[1] = {&anim_minibossbonegolemneck1_1580_0};
static Animations anim_minibossbonegolemneck1_1580 = {1, &anim_array_minibossbonegolemneck1_1580[0]};
static bool anim_minibossbonegolemneck1_1580_initialized;
class MinibossBoneGolemNeck1_1580 : public Active
{
public:
    MinibossBoneGolemNeck1_1580(int x, int y) : Active(x, y, MinibossBoneGolemNeck1_1580_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemNeck 1", 24);
#endif
        this->animations = &anim_minibossbonegolemneck1_1580;
        if (!anim_minibossbonegolemneck1_1580_initialized) {
            anim_minibossbonegolemneck1_1580_initialized = true;
            images_minibossbonegolemneck1_1580_0_0[0] = get_internal_image(13163);
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
FrameObject * create_minibossbonegolemneck1_1580(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemNeck1_1580(x, y);
}
static Image* images_minibossbonegolemneck2_1581_0_0[1];
static Direction direction_minibossbonegolemneck2_1581_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolemneck2_1581_0_0, 1};
static Animation anim_minibossbonegolemneck2_1581_0 = {&direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, NULL, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0, &direction_minibossbonegolemneck2_1581_0_0};
static Animation * anim_array_minibossbonegolemneck2_1581[1] = {&anim_minibossbonegolemneck2_1581_0};
static Animations anim_minibossbonegolemneck2_1581 = {1, &anim_array_minibossbonegolemneck2_1581[0]};
static bool anim_minibossbonegolemneck2_1581_initialized;
class MinibossBoneGolemNeck2_1581 : public Active
{
public:
    MinibossBoneGolemNeck2_1581(int x, int y) : Active(x, y, MinibossBoneGolemNeck2_1581_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemNeck 2", 24);
#endif
        this->animations = &anim_minibossbonegolemneck2_1581;
        if (!anim_minibossbonegolemneck2_1581_initialized) {
            anim_minibossbonegolemneck2_1581_initialized = true;
            images_minibossbonegolemneck2_1581_0_0[0] = get_internal_image(13163);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 60);
    }
};
FrameObject * create_minibossbonegolemneck2_1581(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemNeck2_1581(x, y);
}
static Image* images_minibossbonegolemneck3_1582_0_0[1];
static Direction direction_minibossbonegolemneck3_1582_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolemneck3_1582_0_0, 1};
static Animation anim_minibossbonegolemneck3_1582_0 = {&direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, NULL, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0, &direction_minibossbonegolemneck3_1582_0_0};
static Animation * anim_array_minibossbonegolemneck3_1582[1] = {&anim_minibossbonegolemneck3_1582_0};
static Animations anim_minibossbonegolemneck3_1582 = {1, &anim_array_minibossbonegolemneck3_1582[0]};
static bool anim_minibossbonegolemneck3_1582_initialized;
class MinibossBoneGolemNeck3_1582 : public Active
{
public:
    MinibossBoneGolemNeck3_1582(int x, int y) : Active(x, y, MinibossBoneGolemNeck3_1582_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemNeck 3", 24);
#endif
        this->animations = &anim_minibossbonegolemneck3_1582;
        if (!anim_minibossbonegolemneck3_1582_initialized) {
            anim_minibossbonegolemneck3_1582_initialized = true;
            images_minibossbonegolemneck3_1582_0_0[0] = get_internal_image(13163);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 100);
    }
};
FrameObject * create_minibossbonegolemneck3_1582(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemNeck3_1582(x, y);
}
static Image* images_minibossbonegolemneck4_1583_0_0[1];
static Direction direction_minibossbonegolemneck4_1583_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolemneck4_1583_0_0, 1};
static Image* images_minibossbonegolemneck4_1583_0_16[1];
static Direction direction_minibossbonegolemneck4_1583_0_16 = {16, 7, 7, 0, -1, images_minibossbonegolemneck4_1583_0_16, 1};
static Animation anim_minibossbonegolemneck4_1583_0 = {&direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, NULL, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, &direction_minibossbonegolemneck4_1583_0_16, NULL, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0, &direction_minibossbonegolemneck4_1583_0_0};
static Animation * anim_array_minibossbonegolemneck4_1583[1] = {&anim_minibossbonegolemneck4_1583_0};
static Animations anim_minibossbonegolemneck4_1583 = {1, &anim_array_minibossbonegolemneck4_1583[0]};
static bool anim_minibossbonegolemneck4_1583_initialized;
class MinibossBoneGolemNeck4_1583 : public Active
{
public:
    MinibossBoneGolemNeck4_1583(int x, int y) : Active(x, y, MinibossBoneGolemNeck4_1583_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemNeck 4", 24);
#endif
        this->animations = &anim_minibossbonegolemneck4_1583;
        if (!anim_minibossbonegolemneck4_1583_initialized) {
            anim_minibossbonegolemneck4_1583_initialized = true;
            images_minibossbonegolemneck4_1583_0_0[0] = get_internal_image(13164);
            images_minibossbonegolemneck4_1583_0_16[0] = get_internal_image(13175);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 80);
    }
};
FrameObject * create_minibossbonegolemneck4_1583(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemNeck4_1583(x, y);
}
static Image* images_minibossbonegolemhead_1584_0_0[1];
static Direction direction_minibossbonegolemhead_1584_0_0 = {0, 7, 7, 0, -1, images_minibossbonegolemhead_1584_0_0, 1};
static Image* images_minibossbonegolemhead_1584_0_16[1];
static Direction direction_minibossbonegolemhead_1584_0_16 = {16, 7, 7, 0, -1, images_minibossbonegolemhead_1584_0_16, 1};
static Animation anim_minibossbonegolemhead_1584_0 = {&direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, NULL, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, &direction_minibossbonegolemhead_1584_0_16, NULL, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0, &direction_minibossbonegolemhead_1584_0_0};
static Animation * anim_array_minibossbonegolemhead_1584[1] = {&anim_minibossbonegolemhead_1584_0};
static Animations anim_minibossbonegolemhead_1584 = {1, &anim_array_minibossbonegolemhead_1584[0]};
static bool anim_minibossbonegolemhead_1584_initialized;
class MinibossBoneGolemHead_1584 : public Active
{
public:
    MinibossBoneGolemHead_1584(int x, int y) : Active(x, y, MinibossBoneGolemHead_1584_type)
    {
        // qualifiers: 33
#ifndef NDEBUG
        name = std::string("Miniboss_BoneGolemHead", 22);
#endif
        this->animations = &anim_minibossbonegolemhead_1584;
        if (!anim_minibossbonegolemhead_1584_initialized) {
            anim_minibossbonegolemhead_1584_initialized = true;
            images_minibossbonegolemhead_1584_0_0[0] = get_internal_image(13162);
            images_minibossbonegolemhead_1584_0_16[0] = get_internal_image(13176);
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
FrameObject * create_minibossbonegolemhead_1584(int x, int y)
{
    return new (Active::pool.create()) MinibossBoneGolemHead_1584(x, y);
}
static Image* images_lightstonedoor1_1585_0_0[1];
static Direction direction_lightstonedoor1_1585_0_0 = {0, 50, 50, 0, 1, images_lightstonedoor1_1585_0_0, 1};
static Animation anim_lightstonedoor1_1585_0 = {&direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, NULL, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0, &direction_lightstonedoor1_1585_0_0};
static Animation * anim_array_lightstonedoor1_1585[1] = {&anim_lightstonedoor1_1585_0};
static Animations anim_lightstonedoor1_1585 = {1, &anim_array_lightstonedoor1_1585[0]};
static bool anim_lightstonedoor1_1585_initialized;
class LightstoneDoor1_1585 : public Active
{
public:
    LightstoneDoor1_1585(int x, int y) : Active(x, y, LightstoneDoor1_1585_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Lightstone door 1", 17);
#endif
        this->animations = &anim_lightstonedoor1_1585;
        if (!anim_lightstonedoor1_1585_initialized) {
            anim_lightstonedoor1_1585_initialized = true;
            images_lightstonedoor1_1585_0_0[0] = get_internal_image(10889);
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
FrameObject * create_lightstonedoor1_1585(int x, int y)
{
    return new (Active::pool.create()) LightstoneDoor1_1585(x, y);
}
static Image* images_lightstonedoor2_1586_0_0[1];
static Direction direction_lightstonedoor2_1586_0_0 = {0, 50, 50, 0, 1, images_lightstonedoor2_1586_0_0, 1};
static Animation anim_lightstonedoor2_1586_0 = {&direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, NULL, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0, &direction_lightstonedoor2_1586_0_0};
static Animation * anim_array_lightstonedoor2_1586[1] = {&anim_lightstonedoor2_1586_0};
static Animations anim_lightstonedoor2_1586 = {1, &anim_array_lightstonedoor2_1586[0]};
static bool anim_lightstonedoor2_1586_initialized;
class LightstoneDoor2_1586 : public Active
{
public:
    LightstoneDoor2_1586(int x, int y) : Active(x, y, LightstoneDoor2_1586_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Lightstone door 2", 17);
#endif
        this->animations = &anim_lightstonedoor2_1586;
        if (!anim_lightstonedoor2_1586_initialized) {
            anim_lightstonedoor2_1586_initialized = true;
            images_lightstonedoor2_1586_0_0[0] = get_internal_image(10890);
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
FrameObject * create_lightstonedoor2_1586(int x, int y)
{
    return new (Active::pool.create()) LightstoneDoor2_1586(x, y);
}
static Image* images_kingdomstone_1587_0_0[4];
static Direction direction_kingdomstone_1587_0_0 = {0, 0, 0, 0, -1, images_kingdomstone_1587_0_0, 4};
static Animation anim_kingdomstone_1587_0 = {&direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, NULL, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0, &direction_kingdomstone_1587_0_0};
static Animation * anim_array_kingdomstone_1587[1] = {&anim_kingdomstone_1587_0};
static Animations anim_kingdomstone_1587 = {1, &anim_array_kingdomstone_1587[0]};
static bool anim_kingdomstone_1587_initialized;
class KingdomStone_1587 : public Active
{
public:
    KingdomStone_1587(int x, int y) : Active(x, y, KingdomStone_1587_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Kingdom Stone", 13);
#endif
        this->animations = &anim_kingdomstone_1587;
        if (!anim_kingdomstone_1587_initialized) {
            anim_kingdomstone_1587_initialized = true;
            images_kingdomstone_1587_0_0[0] = get_internal_image(5736);
            images_kingdomstone_1587_0_0[1] = get_internal_image(1600);
            images_kingdomstone_1587_0_0[2] = get_internal_image(492);
            images_kingdomstone_1587_0_0[3] = get_internal_image(640);
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
FrameObject * create_kingdomstone_1587(int x, int y)
{
    return new (Active::pool.create()) KingdomStone_1587(x, y);
}
static Image* images_placeholdercharacter_1588_0_0[1];
static Direction direction_placeholdercharacter_1588_0_0 = {0, 0, 0, 0, 1, images_placeholdercharacter_1588_0_0, 1};
static Image* images_placeholdercharacter_1588_0_1[1];
static Direction direction_placeholdercharacter_1588_0_1 = {1, 50, 50, 0, 1, images_placeholdercharacter_1588_0_1, 1};
static Animation anim_placeholdercharacter_1588_0 = {&direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_1, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0, &direction_placeholdercharacter_1588_0_0};
static Image* images_placeholdercharacter_1588_7_0[9];
static Direction direction_placeholdercharacter_1588_7_0 = {0, 20, 20, 8, -1, images_placeholdercharacter_1588_7_0, 9};
static Image* images_placeholdercharacter_1588_7_16[9];
static Direction direction_placeholdercharacter_1588_7_16 = {16, 20, 20, 8, -1, images_placeholdercharacter_1588_7_16, 9};
static Image* images_placeholdercharacter_1588_7_24[8];
static Direction direction_placeholdercharacter_1588_7_24 = {24, 50, 50, 0, -1, images_placeholdercharacter_1588_7_24, 8};
static Animation anim_placeholdercharacter_1588_7 = {&direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, NULL, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, &direction_placeholdercharacter_1588_7_16, NULL, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, &direction_placeholdercharacter_1588_7_24, NULL, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0, &direction_placeholdercharacter_1588_7_0};
static Animation * anim_array_placeholdercharacter_1588[8] = {&anim_placeholdercharacter_1588_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_placeholdercharacter_1588_7};
static Animations anim_placeholdercharacter_1588 = {8, &anim_array_placeholdercharacter_1588[0]};
static bool anim_placeholdercharacter_1588_initialized;
class PlaceholderCharacter_1588 : public Active
{
public:
    PlaceholderCharacter_1588(int x, int y) : Active(x, y, PlaceholderCharacter_1588_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter", 20);
#endif
        this->animations = &anim_placeholdercharacter_1588;
        if (!anim_placeholdercharacter_1588_initialized) {
            anim_placeholdercharacter_1588_initialized = true;
            images_placeholdercharacter_1588_0_0[0] = get_internal_image(14227);
            images_placeholdercharacter_1588_0_1[0] = get_internal_image(4377);
            images_placeholdercharacter_1588_7_0[0] = get_internal_image(14257);
            images_placeholdercharacter_1588_7_0[1] = get_internal_image(14257);
            images_placeholdercharacter_1588_7_0[2] = get_internal_image(14257);
            images_placeholdercharacter_1588_7_0[3] = get_internal_image(14257);
            images_placeholdercharacter_1588_7_0[4] = get_internal_image(14257);
            images_placeholdercharacter_1588_7_0[5] = get_internal_image(14256);
            images_placeholdercharacter_1588_7_0[6] = get_internal_image(14258);
            images_placeholdercharacter_1588_7_0[7] = get_internal_image(14259);
            images_placeholdercharacter_1588_7_0[8] = get_internal_image(14259);
            images_placeholdercharacter_1588_7_16[0] = get_internal_image(14260);
            images_placeholdercharacter_1588_7_16[1] = get_internal_image(14260);
            images_placeholdercharacter_1588_7_16[2] = get_internal_image(14260);
            images_placeholdercharacter_1588_7_16[3] = get_internal_image(14260);
            images_placeholdercharacter_1588_7_16[4] = get_internal_image(14260);
            images_placeholdercharacter_1588_7_16[5] = get_internal_image(14261);
            images_placeholdercharacter_1588_7_16[6] = get_internal_image(14262);
            images_placeholdercharacter_1588_7_16[7] = get_internal_image(14263);
            images_placeholdercharacter_1588_7_16[8] = get_internal_image(14263);
            images_placeholdercharacter_1588_7_24[0] = get_internal_image(5228);
            images_placeholdercharacter_1588_7_24[1] = get_internal_image(5228);
            images_placeholdercharacter_1588_7_24[2] = get_internal_image(5468);
            images_placeholdercharacter_1588_7_24[3] = get_internal_image(5469);
            images_placeholdercharacter_1588_7_24[4] = get_internal_image(5470);
            images_placeholdercharacter_1588_7_24[5] = get_internal_image(5470);
            images_placeholdercharacter_1588_7_24[6] = get_internal_image(5472);
            images_placeholdercharacter_1588_7_24[7] = get_internal_image(6667);
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
FrameObject * create_placeholdercharacter_1588(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacter_1588(x, y);
}
static Image* images_lightray_1589_0_0[6];
static Direction direction_lightray_1589_0_0 = {0, 12, 12, 0, -1, images_lightray_1589_0_0, 6};
static Animation anim_lightray_1589_0 = {&direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, NULL, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0, &direction_lightray_1589_0_0};
static Animation * anim_array_lightray_1589[1] = {&anim_lightray_1589_0};
static Animations anim_lightray_1589 = {1, &anim_array_lightray_1589[0]};
static bool anim_lightray_1589_initialized;
class LightRay_1589 : public Active
{
public:
    LightRay_1589(int x, int y) : Active(x, y, LightRay_1589_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Light ray", 9);
#endif
        this->animations = &anim_lightray_1589;
        if (!anim_lightray_1589_initialized) {
            anim_lightray_1589_initialized = true;
            images_lightray_1589_0_0[0] = get_internal_image(1595);
            images_lightray_1589_0_0[1] = get_internal_image(1826);
            images_lightray_1589_0_0[2] = get_internal_image(1848);
            images_lightray_1589_0_0[3] = get_internal_image(1849);
            images_lightray_1589_0_0[4] = get_internal_image(1850);
            images_lightray_1589_0_0[5] = get_internal_image(1848);
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
FrameObject * create_lightray_1589(int x, int y)
{
    return new (Active::pool.create()) LightRay_1589(x, y);
}
static Image* images_lightray2_1590_0_0[6];
static Direction direction_lightray2_1590_0_0 = {0, 12, 12, 0, -1, images_lightray2_1590_0_0, 6};
static Animation anim_lightray2_1590_0 = {&direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, NULL, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0, &direction_lightray2_1590_0_0};
static Animation * anim_array_lightray2_1590[1] = {&anim_lightray2_1590_0};
static Animations anim_lightray2_1590 = {1, &anim_array_lightray2_1590[0]};
static bool anim_lightray2_1590_initialized;
class LightRay2_1590 : public Active
{
public:
    LightRay2_1590(int x, int y) : Active(x, y, LightRay2_1590_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Light ray 2", 11);
#endif
        this->animations = &anim_lightray2_1590;
        if (!anim_lightray2_1590_initialized) {
            anim_lightray2_1590_initialized = true;
            images_lightray2_1590_0_0[0] = get_internal_image(1595);
            images_lightray2_1590_0_0[1] = get_internal_image(1826);
            images_lightray2_1590_0_0[2] = get_internal_image(1848);
            images_lightray2_1590_0_0[3] = get_internal_image(1849);
            images_lightray2_1590_0_0[4] = get_internal_image(1850);
            images_lightray2_1590_0_0[5] = get_internal_image(1848);
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
FrameObject * create_lightray2_1590(int x, int y)
{
    return new (Active::pool.create()) LightRay2_1590(x, y);
}
static Image* images_shrine2_1591_0_0[1];
static Direction direction_shrine2_1591_0_0 = {0, 50, 50, 0, 1, images_shrine2_1591_0_0, 1};
static Animation anim_shrine2_1591_0 = {&direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, NULL, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0, &direction_shrine2_1591_0_0};
static Animation * anim_array_shrine2_1591[1] = {&anim_shrine2_1591_0};
static Animations anim_shrine2_1591 = {1, &anim_array_shrine2_1591[0]};
static bool anim_shrine2_1591_initialized;
class Shrine2_1591 : public Active
{
public:
    Shrine2_1591(int x, int y) : Active(x, y, Shrine2_1591_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shrine 2", 8);
#endif
        this->animations = &anim_shrine2_1591;
        if (!anim_shrine2_1591_initialized) {
            anim_shrine2_1591_initialized = true;
            images_shrine2_1591_0_0[0] = get_internal_image(9444);
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
FrameObject * create_shrine2_1591(int x, int y)
{
    return new (Active::pool.create()) Shrine2_1591(x, y);
}
static Image* images_objectchair_1592_0_0[1];
static Direction direction_objectchair_1592_0_0 = {0, 50, 50, 0, 1, images_objectchair_1592_0_0, 1};
static Animation anim_objectchair_1592_0 = {&direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, NULL, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0, &direction_objectchair_1592_0_0};
static Animation * anim_array_objectchair_1592[1] = {&anim_objectchair_1592_0};
static Animations anim_objectchair_1592 = {1, &anim_array_objectchair_1592[0]};
static bool anim_objectchair_1592_initialized;
class ObjectChair_1592 : public Active
{
public:
    ObjectChair_1592(int x, int y) : Active(x, y, ObjectChair_1592_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Object_Chair", 12);
#endif
        this->animations = &anim_objectchair_1592;
        if (!anim_objectchair_1592_initialized) {
            anim_objectchair_1592_initialized = true;
            images_objectchair_1592_0_0[0] = get_internal_image(10912);
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
FrameObject * create_objectchair_1592(int x, int y)
{
    return new (Active::pool.create()) ObjectChair_1592(x, y);
}
static Image* images_bossanimationdata_1593_0_0[1];
static Direction direction_bossanimationdata_1593_0_0 = {0, 50, 50, 0, 1, images_bossanimationdata_1593_0_0, 1};
static Animation anim_bossanimationdata_1593_0 = {&direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, NULL, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0, &direction_bossanimationdata_1593_0_0};
static Animation * anim_array_bossanimationdata_1593[1] = {&anim_bossanimationdata_1593_0};
static Animations anim_bossanimationdata_1593 = {1, &anim_array_bossanimationdata_1593[0]};
static bool anim_bossanimationdata_1593_initialized;
class BossAnimationData_1593 : public Active
{
public:
    BossAnimationData_1593(int x, int y) : Active(x, y, BossAnimationData_1593_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_AnimationData", 18);
#endif
        set_visible(false);
        this->animations = &anim_bossanimationdata_1593;
        if (!anim_bossanimationdata_1593_initialized) {
            anim_bossanimationdata_1593_initialized = true;
            images_bossanimationdata_1593_0_0[0] = get_internal_image(920);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, -16);
        alterables->values.set(6, 40);
        alterables->values.set(7, -24);
        alterables->values.set(8, -40);
        alterables->values.set(9, 16);
        alterables->values.set(10, 40);
        alterables->values.set(11, 24);
        alterables->values.set(12, -40);
        alterables->values.set(14, -40);
        alterables->values.set(15, 24);
        alterables->values.set(16, 340);
        alterables->values.set(18, 40);
        alterables->values.set(19, 24);
        alterables->values.set(20, 20);
    }
};
FrameObject * create_bossanimationdata_1593(int x, int y)
{
    return new (Active::pool.create()) BossAnimationData_1593(x, y);
}
static Image* images_bossgroundcut1_1594_0_0[1];
static Direction direction_bossgroundcut1_1594_0_0 = {0, 50, 50, 0, 1, images_bossgroundcut1_1594_0_0, 1};
static Animation anim_bossgroundcut1_1594_0 = {&direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, NULL, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0, &direction_bossgroundcut1_1594_0_0};
static Animation * anim_array_bossgroundcut1_1594[1] = {&anim_bossgroundcut1_1594_0};
static Animations anim_bossgroundcut1_1594 = {1, &anim_array_bossgroundcut1_1594[0]};
static bool anim_bossgroundcut1_1594_initialized;
class BossGroundcut1_1594 : public Active
{
public:
    BossGroundcut1_1594(int x, int y) : Active(x, y, BossGroundcut1_1594_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_groundcut 1", 16);
#endif
        this->animations = &anim_bossgroundcut1_1594;
        if (!anim_bossgroundcut1_1594_initialized) {
            anim_bossgroundcut1_1594_initialized = true;
            images_bossgroundcut1_1594_0_0[0] = get_internal_image(4631);
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
FrameObject * create_bossgroundcut1_1594(int x, int y)
{
    return new (Active::pool.create()) BossGroundcut1_1594(x, y);
}
static Image* images_bossgroundcut2_1595_0_0[1];
static Direction direction_bossgroundcut2_1595_0_0 = {0, 50, 50, 0, 1, images_bossgroundcut2_1595_0_0, 1};
static Animation anim_bossgroundcut2_1595_0 = {&direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, NULL, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0, &direction_bossgroundcut2_1595_0_0};
static Animation * anim_array_bossgroundcut2_1595[1] = {&anim_bossgroundcut2_1595_0};
static Animations anim_bossgroundcut2_1595 = {1, &anim_array_bossgroundcut2_1595[0]};
static bool anim_bossgroundcut2_1595_initialized;
class BossGroundcut2_1595 : public Active
{
public:
    BossGroundcut2_1595(int x, int y) : Active(x, y, BossGroundcut2_1595_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_groundcut 2", 16);
#endif
        this->animations = &anim_bossgroundcut2_1595;
        if (!anim_bossgroundcut2_1595_initialized) {
            anim_bossgroundcut2_1595_initialized = true;
            images_bossgroundcut2_1595_0_0[0] = get_internal_image(4631);
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
FrameObject * create_bossgroundcut2_1595(int x, int y)
{
    return new (Active::pool.create()) BossGroundcut2_1595(x, y);
}
static Image* images_bossmantalithhead3_1596_0_0[1];
static Direction direction_bossmantalithhead3_1596_0_0 = {0, 50, 50, 0, 1, images_bossmantalithhead3_1596_0_0, 1};
static Animation anim_bossmantalithhead3_1596_0 = {&direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, NULL, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0, &direction_bossmantalithhead3_1596_0_0};
static Image* images_bossmantalithhead3_1596_8_0[2];
static Direction direction_bossmantalithhead3_1596_8_0 = {0, 50, 50, 0, -1, images_bossmantalithhead3_1596_8_0, 2};
static Animation anim_bossmantalithhead3_1596_8 = {&direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, NULL, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0, &direction_bossmantalithhead3_1596_8_0};
static Animation * anim_array_bossmantalithhead3_1596[9] = {&anim_bossmantalithhead3_1596_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmantalithhead3_1596_8};
static Animations anim_bossmantalithhead3_1596 = {9, &anim_array_bossmantalithhead3_1596[0]};
static bool anim_bossmantalithhead3_1596_initialized;
class BossMantalithHead3_1596 : public Active
{
public:
    BossMantalithHead3_1596(int x, int y) : Active(x, y, BossMantalithHead3_1596_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithHead 3", 20);
#endif
        this->animations = &anim_bossmantalithhead3_1596;
        if (!anim_bossmantalithhead3_1596_initialized) {
            anim_bossmantalithhead3_1596_initialized = true;
            images_bossmantalithhead3_1596_0_0[0] = get_internal_image(4678);
            images_bossmantalithhead3_1596_8_0[0] = get_internal_image(4678);
            images_bossmantalithhead3_1596_8_0[1] = get_internal_image(4742);
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
FrameObject * create_bossmantalithhead3_1596(int x, int y)
{
    return new (Active::pool.create()) BossMantalithHead3_1596(x, y);
}
static Image* images_bossmantalithhead2_1597_0_0[1];
static Direction direction_bossmantalithhead2_1597_0_0 = {0, 50, 50, 0, 1, images_bossmantalithhead2_1597_0_0, 1};
static Animation anim_bossmantalithhead2_1597_0 = {&direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, NULL, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0, &direction_bossmantalithhead2_1597_0_0};
static Image* images_bossmantalithhead2_1597_8_0[2];
static Direction direction_bossmantalithhead2_1597_8_0 = {0, 50, 50, 0, -1, images_bossmantalithhead2_1597_8_0, 2};
static Animation anim_bossmantalithhead2_1597_8 = {&direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, NULL, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0, &direction_bossmantalithhead2_1597_8_0};
static Animation * anim_array_bossmantalithhead2_1597[9] = {&anim_bossmantalithhead2_1597_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmantalithhead2_1597_8};
static Animations anim_bossmantalithhead2_1597 = {9, &anim_array_bossmantalithhead2_1597[0]};
static bool anim_bossmantalithhead2_1597_initialized;
class BossMantalithHead2_1597 : public Active
{
public:
    BossMantalithHead2_1597(int x, int y) : Active(x, y, BossMantalithHead2_1597_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithHead 2", 20);
#endif
        this->animations = &anim_bossmantalithhead2_1597;
        if (!anim_bossmantalithhead2_1597_initialized) {
            anim_bossmantalithhead2_1597_initialized = true;
            images_bossmantalithhead2_1597_0_0[0] = get_internal_image(4687);
            images_bossmantalithhead2_1597_8_0[0] = get_internal_image(4687);
            images_bossmantalithhead2_1597_8_0[1] = get_internal_image(4748);
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
FrameObject * create_bossmantalithhead2_1597(int x, int y)
{
    return new (Active::pool.create()) BossMantalithHead2_1597(x, y);
}
static Image* images_bossmantalithhead_1598_0_0[3];
static Direction direction_bossmantalithhead_1598_0_0 = {0, 0, 0, 0, -1, images_bossmantalithhead_1598_0_0, 3};
static Image* images_bossmantalithhead_1598_0_1[3];
static Direction direction_bossmantalithhead_1598_0_1 = {1, 0, 0, 0, -1, images_bossmantalithhead_1598_0_1, 3};
static Image* images_bossmantalithhead_1598_0_2[3];
static Direction direction_bossmantalithhead_1598_0_2 = {2, 0, 0, 0, -1, images_bossmantalithhead_1598_0_2, 3};
static Animation anim_bossmantalithhead_1598_0 = {&direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_1, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, &direction_bossmantalithhead_1598_0_2, NULL, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0, &direction_bossmantalithhead_1598_0_0};
static Image* images_bossmantalithhead_1598_7_0[3];
static Direction direction_bossmantalithhead_1598_7_0 = {0, 0, 0, 0, -1, images_bossmantalithhead_1598_7_0, 3};
static Image* images_bossmantalithhead_1598_7_1[3];
static Direction direction_bossmantalithhead_1598_7_1 = {1, 0, 0, 0, -1, images_bossmantalithhead_1598_7_1, 3};
static Image* images_bossmantalithhead_1598_7_2[3];
static Direction direction_bossmantalithhead_1598_7_2 = {2, 0, 0, 0, -1, images_bossmantalithhead_1598_7_2, 3};
static Animation anim_bossmantalithhead_1598_7 = {&direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_1, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, &direction_bossmantalithhead_1598_7_2, NULL, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0, &direction_bossmantalithhead_1598_7_0};
static Image* images_bossmantalithhead_1598_8_0[2];
static Direction direction_bossmantalithhead_1598_8_0 = {0, 50, 50, 0, -1, images_bossmantalithhead_1598_8_0, 2};
static Animation anim_bossmantalithhead_1598_8 = {&direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, NULL, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0, &direction_bossmantalithhead_1598_8_0};
static Animation * anim_array_bossmantalithhead_1598[9] = {&anim_bossmantalithhead_1598_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmantalithhead_1598_7, &anim_bossmantalithhead_1598_8};
static Animations anim_bossmantalithhead_1598 = {9, &anim_array_bossmantalithhead_1598[0]};
static bool anim_bossmantalithhead_1598_initialized;
class BossMantalithHead_1598 : public Active
{
public:
    BossMantalithHead_1598(int x, int y) : Active(x, y, BossMantalithHead_1598_type)
    {
        // qualifiers: 26, 97
#ifndef NDEBUG
        name = std::string("Boss_MantalithHead", 18);
#endif
        this->animations = &anim_bossmantalithhead_1598;
        if (!anim_bossmantalithhead_1598_initialized) {
            anim_bossmantalithhead_1598_initialized = true;
            images_bossmantalithhead_1598_0_0[0] = get_internal_image(286);
            images_bossmantalithhead_1598_0_0[1] = get_internal_image(6790);
            images_bossmantalithhead_1598_0_0[2] = get_internal_image(6791);
            images_bossmantalithhead_1598_0_1[0] = get_internal_image(6787);
            images_bossmantalithhead_1598_0_1[1] = get_internal_image(6788);
            images_bossmantalithhead_1598_0_1[2] = get_internal_image(6789);
            images_bossmantalithhead_1598_0_2[0] = get_internal_image(6792);
            images_bossmantalithhead_1598_0_2[1] = get_internal_image(6793);
            images_bossmantalithhead_1598_0_2[2] = get_internal_image(6916);
            images_bossmantalithhead_1598_7_0[0] = get_internal_image(4699);
            images_bossmantalithhead_1598_7_0[1] = get_internal_image(4708);
            images_bossmantalithhead_1598_7_0[2] = get_internal_image(4718);
            images_bossmantalithhead_1598_7_1[0] = get_internal_image(4719);
            images_bossmantalithhead_1598_7_1[1] = get_internal_image(4720);
            images_bossmantalithhead_1598_7_1[2] = get_internal_image(4721);
            images_bossmantalithhead_1598_7_2[0] = get_internal_image(4723);
            images_bossmantalithhead_1598_7_2[1] = get_internal_image(4732);
            images_bossmantalithhead_1598_7_2[2] = get_internal_image(4733);
            images_bossmantalithhead_1598_8_0[0] = get_internal_image(4743);
            images_bossmantalithhead_1598_8_0[1] = get_internal_image(6792);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_bossmantalithhead_1598(int x, int y)
{
    return new (Active::pool.create()) BossMantalithHead_1598(x, y);
}
static Image* images_bossmantalitharm6_1599_0_0[1];
static Direction direction_bossmantalitharm6_1599_0_0 = {0, 50, 50, 0, 1, images_bossmantalitharm6_1599_0_0, 1};
static Image* images_bossmantalitharm6_1599_0_4[1];
static Direction direction_bossmantalitharm6_1599_0_4 = {4, 50, 50, 0, 1, images_bossmantalitharm6_1599_0_4, 1};
static Image* images_bossmantalitharm6_1599_0_8[1];
static Direction direction_bossmantalitharm6_1599_0_8 = {8, 50, 50, 0, 1, images_bossmantalitharm6_1599_0_8, 1};
static Animation anim_bossmantalitharm6_1599_0 = {&direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, NULL, &direction_bossmantalitharm6_1599_0_4, &direction_bossmantalitharm6_1599_0_4, &direction_bossmantalitharm6_1599_0_4, NULL, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, &direction_bossmantalitharm6_1599_0_8, NULL, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0, &direction_bossmantalitharm6_1599_0_0};
static Image* images_bossmantalitharm6_1599_7_0[10];
static Direction direction_bossmantalitharm6_1599_7_0 = {0, 100, 100, 0, 1, images_bossmantalitharm6_1599_7_0, 10};
static Animation anim_bossmantalitharm6_1599_7 = {&direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, NULL, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0, &direction_bossmantalitharm6_1599_7_0};
static Animation * anim_array_bossmantalitharm6_1599[8] = {&anim_bossmantalitharm6_1599_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmantalitharm6_1599_7};
static Animations anim_bossmantalitharm6_1599 = {8, &anim_array_bossmantalitharm6_1599[0]};
static bool anim_bossmantalitharm6_1599_initialized;
class BossMantalithArm6_1599 : public Active
{
public:
    BossMantalithArm6_1599(int x, int y) : Active(x, y, BossMantalithArm6_1599_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithArm 6", 19);
#endif
        this->animations = &anim_bossmantalitharm6_1599;
        if (!anim_bossmantalitharm6_1599_initialized) {
            anim_bossmantalitharm6_1599_initialized = true;
            images_bossmantalitharm6_1599_0_0[0] = get_internal_image(7400);
            images_bossmantalitharm6_1599_0_4[0] = get_internal_image(7437);
            images_bossmantalitharm6_1599_0_8[0] = get_internal_image(7444);
            images_bossmantalitharm6_1599_7_0[0] = get_internal_image(4874);
            images_bossmantalitharm6_1599_7_0[1] = get_internal_image(4909);
            images_bossmantalitharm6_1599_7_0[2] = get_internal_image(4910);
            images_bossmantalitharm6_1599_7_0[3] = get_internal_image(4911);
            images_bossmantalitharm6_1599_7_0[4] = get_internal_image(6785);
            images_bossmantalitharm6_1599_7_0[5] = get_internal_image(6917);
            images_bossmantalitharm6_1599_7_0[6] = get_internal_image(6918);
            images_bossmantalitharm6_1599_7_0[7] = get_internal_image(6920);
            images_bossmantalitharm6_1599_7_0[8] = get_internal_image(6921);
            images_bossmantalitharm6_1599_7_0[9] = get_internal_image(7343);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
    }
};
FrameObject * create_bossmantalitharm6_1599(int x, int y)
{
    return new (Active::pool.create()) BossMantalithArm6_1599(x, y);
}
static Image* images_bossmantalitharm3_1600_0_0[1];
static Direction direction_bossmantalitharm3_1600_0_0 = {0, 50, 50, 0, 1, images_bossmantalitharm3_1600_0_0, 1};
static Image* images_bossmantalitharm3_1600_0_4[1];
static Direction direction_bossmantalitharm3_1600_0_4 = {4, 50, 50, 0, 1, images_bossmantalitharm3_1600_0_4, 1};
static Image* images_bossmantalitharm3_1600_0_8[1];
static Direction direction_bossmantalitharm3_1600_0_8 = {8, 50, 50, 0, 1, images_bossmantalitharm3_1600_0_8, 1};
static Animation anim_bossmantalitharm3_1600_0 = {&direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, NULL, &direction_bossmantalitharm3_1600_0_4, &direction_bossmantalitharm3_1600_0_4, &direction_bossmantalitharm3_1600_0_4, NULL, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, &direction_bossmantalitharm3_1600_0_8, NULL, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0, &direction_bossmantalitharm3_1600_0_0};
static Image* images_bossmantalitharm3_1600_7_0[10];
static Direction direction_bossmantalitharm3_1600_7_0 = {0, 100, 100, 0, 1, images_bossmantalitharm3_1600_7_0, 10};
static Animation anim_bossmantalitharm3_1600_7 = {&direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, NULL, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0, &direction_bossmantalitharm3_1600_7_0};
static Animation * anim_array_bossmantalitharm3_1600[8] = {&anim_bossmantalitharm3_1600_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmantalitharm3_1600_7};
static Animations anim_bossmantalitharm3_1600 = {8, &anim_array_bossmantalitharm3_1600[0]};
static bool anim_bossmantalitharm3_1600_initialized;
class BossMantalithArm3_1600 : public Active
{
public:
    BossMantalithArm3_1600(int x, int y) : Active(x, y, BossMantalithArm3_1600_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithArm 3", 19);
#endif
        this->animations = &anim_bossmantalitharm3_1600;
        if (!anim_bossmantalitharm3_1600_initialized) {
            anim_bossmantalitharm3_1600_initialized = true;
            images_bossmantalitharm3_1600_0_0[0] = get_internal_image(4872);
            images_bossmantalitharm3_1600_0_4[0] = get_internal_image(4750);
            images_bossmantalitharm3_1600_0_8[0] = get_internal_image(4873);
            images_bossmantalitharm3_1600_7_0[0] = get_internal_image(6919);
            images_bossmantalitharm3_1600_7_0[1] = get_internal_image(7345);
            images_bossmantalitharm3_1600_7_0[2] = get_internal_image(7347);
            images_bossmantalitharm3_1600_7_0[3] = get_internal_image(7367);
            images_bossmantalitharm3_1600_7_0[4] = get_internal_image(7376);
            images_bossmantalitharm3_1600_7_0[5] = get_internal_image(7377);
            images_bossmantalitharm3_1600_7_0[6] = get_internal_image(7378);
            images_bossmantalitharm3_1600_7_0[7] = get_internal_image(7379);
            images_bossmantalitharm3_1600_7_0[8] = get_internal_image(7380);
            images_bossmantalitharm3_1600_7_0[9] = get_internal_image(7381);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
    }
};
FrameObject * create_bossmantalitharm3_1600(int x, int y)
{
    return new (Active::pool.create()) BossMantalithArm3_1600(x, y);
}
static Image* images_npchookline_1601_0_0[1];
static Direction direction_npchookline_1601_0_0 = {0, 0, 0, 0, 1, images_npchookline_1601_0_0, 1};
static Animation anim_npchookline_1601_0 = {&direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, NULL, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0, &direction_npchookline_1601_0_0};
static Animation * anim_array_npchookline_1601[1] = {&anim_npchookline_1601_0};
static Animations anim_npchookline_1601 = {1, &anim_array_npchookline_1601[0]};
static bool anim_npchookline_1601_initialized;
class NPCHookline_1601 : public Active
{
public:
    NPCHookline_1601(int x, int y) : Active(x, y, NPCHookline_1601_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Hookline", 12);
#endif
        this->animations = &anim_npchookline_1601;
        if (!anim_npchookline_1601_initialized) {
            anim_npchookline_1601_initialized = true;
            images_npchookline_1601_0_0[0] = get_internal_image(5738);
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
FrameObject * create_npchookline_1601(int x, int y)
{
    return new (Active::pool.create()) NPCHookline_1601(x, y);
}
static Image* images_bossmantalithdebris_1602_0_0[1];
static Direction direction_bossmantalithdebris_1602_0_0 = {0, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_0, 1};
static Image* images_bossmantalithdebris_1602_0_1[1];
static Direction direction_bossmantalithdebris_1602_0_1 = {1, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_1, 1};
static Image* images_bossmantalithdebris_1602_0_2[1];
static Direction direction_bossmantalithdebris_1602_0_2 = {2, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_2, 1};
static Image* images_bossmantalithdebris_1602_0_3[1];
static Direction direction_bossmantalithdebris_1602_0_3 = {3, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_3, 1};
static Image* images_bossmantalithdebris_1602_0_29[1];
static Direction direction_bossmantalithdebris_1602_0_29 = {29, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_29, 1};
static Image* images_bossmantalithdebris_1602_0_30[1];
static Direction direction_bossmantalithdebris_1602_0_30 = {30, 50, 50, 0, 1, images_bossmantalithdebris_1602_0_30, 1};
static Image* images_bossmantalithdebris_1602_0_31[8];
static Direction direction_bossmantalithdebris_1602_0_31 = {31, 14, 14, 0, -1, images_bossmantalithdebris_1602_0_31, 8};
static Animation anim_bossmantalithdebris_1602_0 = {&direction_bossmantalithdebris_1602_0_0, &direction_bossmantalithdebris_1602_0_1, &direction_bossmantalithdebris_1602_0_2, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, &direction_bossmantalithdebris_1602_0_3, NULL, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_29, &direction_bossmantalithdebris_1602_0_30, &direction_bossmantalithdebris_1602_0_31};
static Animation * anim_array_bossmantalithdebris_1602[1] = {&anim_bossmantalithdebris_1602_0};
static Animations anim_bossmantalithdebris_1602 = {1, &anim_array_bossmantalithdebris_1602[0]};
static bool anim_bossmantalithdebris_1602_initialized;
class BossMantalithDebris_1602 : public Active
{
public:
    BossMantalithDebris_1602(int x, int y) : Active(x, y, BossMantalithDebris_1602_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Boss_MantalithDebris", 20);
#endif
        this->animations = &anim_bossmantalithdebris_1602;
        if (!anim_bossmantalithdebris_1602_initialized) {
            anim_bossmantalithdebris_1602_initialized = true;
            images_bossmantalithdebris_1602_0_0[0] = get_internal_image(7445);
            images_bossmantalithdebris_1602_0_1[0] = get_internal_image(7472);
            images_bossmantalithdebris_1602_0_2[0] = get_internal_image(7473);
            images_bossmantalithdebris_1602_0_3[0] = get_internal_image(7471);
            images_bossmantalithdebris_1602_0_29[0] = get_internal_image(7400);
            images_bossmantalithdebris_1602_0_30[0] = get_internal_image(4872);
            images_bossmantalithdebris_1602_0_31[0] = get_internal_image(5712);
            images_bossmantalithdebris_1602_0_31[1] = get_internal_image(5711);
            images_bossmantalithdebris_1602_0_31[2] = get_internal_image(5718);
            images_bossmantalithdebris_1602_0_31[3] = get_internal_image(5721);
            images_bossmantalithdebris_1602_0_31[4] = get_internal_image(5723);
            images_bossmantalithdebris_1602_0_31[5] = get_internal_image(5724);
            images_bossmantalithdebris_1602_0_31[6] = get_internal_image(5725);
            images_bossmantalithdebris_1602_0_31[7] = get_internal_image(5726);
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
FrameObject * create_bossmantalithdebris_1602(int x, int y)
{
    return new (Active::pool.create()) BossMantalithDebris_1602(x, y);
}
static Image* images_bossmantalithhitbox1_1603_0_0[1];
static Direction direction_bossmantalithhitbox1_1603_0_0 = {0, 50, 50, 0, 1, images_bossmantalithhitbox1_1603_0_0, 1};
static Animation anim_bossmantalithhitbox1_1603_0 = {&direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, NULL, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0, &direction_bossmantalithhitbox1_1603_0_0};
static Animation * anim_array_bossmantalithhitbox1_1603[1] = {&anim_bossmantalithhitbox1_1603_0};
static Animations anim_bossmantalithhitbox1_1603 = {1, &anim_array_bossmantalithhitbox1_1603[0]};
static bool anim_bossmantalithhitbox1_1603_initialized;
class BossMantalithHitbox1_1603 : public Active
{
public:
    BossMantalithHitbox1_1603(int x, int y) : Active(x, y, BossMantalithHitbox1_1603_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_MantalithHitbox 1", 22);
#endif
        set_visible(false);
        this->animations = &anim_bossmantalithhitbox1_1603;
        if (!anim_bossmantalithhitbox1_1603_initialized) {
            anim_bossmantalithhitbox1_1603_initialized = true;
            images_bossmantalithhitbox1_1603_0_0[0] = get_internal_image(4919);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_bossmantalithhitbox1_1603(int x, int y)
{
    return new (Active::pool.create()) BossMantalithHitbox1_1603(x, y);
}
static Image* images_bossmantalithhitbox2_1604_0_0[1];
static Direction direction_bossmantalithhitbox2_1604_0_0 = {0, 50, 50, 0, 1, images_bossmantalithhitbox2_1604_0_0, 1};
static Animation anim_bossmantalithhitbox2_1604_0 = {&direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, NULL, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0, &direction_bossmantalithhitbox2_1604_0_0};
static Animation * anim_array_bossmantalithhitbox2_1604[1] = {&anim_bossmantalithhitbox2_1604_0};
static Animations anim_bossmantalithhitbox2_1604 = {1, &anim_array_bossmantalithhitbox2_1604[0]};
static bool anim_bossmantalithhitbox2_1604_initialized;
class BossMantalithHitbox2_1604 : public Active
{
public:
    BossMantalithHitbox2_1604(int x, int y) : Active(x, y, BossMantalithHitbox2_1604_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_MantalithHitbox 2", 22);
#endif
        set_visible(false);
        this->animations = &anim_bossmantalithhitbox2_1604;
        if (!anim_bossmantalithhitbox2_1604_initialized) {
            anim_bossmantalithhitbox2_1604_initialized = true;
            images_bossmantalithhitbox2_1604_0_0[0] = get_internal_image(4920);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_bossmantalithhitbox2_1604(int x, int y)
{
    return new (Active::pool.create()) BossMantalithHitbox2_1604(x, y);
}
static Image* images_bossjumppoint_1605_0_0[1];
static Direction direction_bossjumppoint_1605_0_0 = {0, 50, 50, 0, 1, images_bossjumppoint_1605_0_0, 1};
static Animation anim_bossjumppoint_1605_0 = {&direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, NULL, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0, &direction_bossjumppoint_1605_0_0};
static Animation * anim_array_bossjumppoint_1605[1] = {&anim_bossjumppoint_1605_0};
static Animations anim_bossjumppoint_1605 = {1, &anim_array_bossjumppoint_1605[0]};
static bool anim_bossjumppoint_1605_initialized;
class BossJumpPoint_1605 : public Active
{
public:
    BossJumpPoint_1605(int x, int y) : Active(x, y, BossJumpPoint_1605_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_JumpPoint", 14);
#endif
        set_visible(false);
        this->animations = &anim_bossjumppoint_1605;
        if (!anim_bossjumppoint_1605_initialized) {
            anim_bossjumppoint_1605_initialized = true;
            images_bossjumppoint_1605_0_0[0] = get_internal_image(3076);
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
FrameObject * create_bossjumppoint_1605(int x, int y)
{
    return new (Active::pool.create()) BossJumpPoint_1605(x, y);
}
static Image* images_ksprojectile2_1606_0_0[1];
static Direction direction_ksprojectile2_1606_0_0 = {0, 100, 100, 0, -1, images_ksprojectile2_1606_0_0, 1};
static Animation anim_ksprojectile2_1606_0 = {&direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, NULL, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0, &direction_ksprojectile2_1606_0_0};
static Animation * anim_array_ksprojectile2_1606[1] = {&anim_ksprojectile2_1606_0};
static Animations anim_ksprojectile2_1606 = {1, &anim_array_ksprojectile2_1606[0]};
static bool anim_ksprojectile2_1606_initialized;
class KSProjectile2_1606 : public Active
{
public:
    KSProjectile2_1606(int x, int y) : Active(x, y, KSProjectile2_1606_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("KS_Projectile 2", 15);
#endif
        set_visible(false);
        this->animations = &anim_ksprojectile2_1606;
        if (!anim_ksprojectile2_1606_initialized) {
            anim_ksprojectile2_1606_initialized = true;
            images_ksprojectile2_1606_0_0[0] = get_internal_image(446);
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
FrameObject * create_ksprojectile2_1606(int x, int y)
{
    return new (Active::pool.create()) KSProjectile2_1606(x, y);
}
static Image* images_levelcrushdeath_1607_0_0[1];
static Direction direction_levelcrushdeath_1607_0_0 = {0, 50, 50, 0, 1, images_levelcrushdeath_1607_0_0, 1};
static Animation anim_levelcrushdeath_1607_0 = {&direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, NULL, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0, &direction_levelcrushdeath_1607_0_0};
static Animation * anim_array_levelcrushdeath_1607[1] = {&anim_levelcrushdeath_1607_0};
static Animations anim_levelcrushdeath_1607 = {1, &anim_array_levelcrushdeath_1607[0]};
static bool anim_levelcrushdeath_1607_initialized;
class LevelCrushDeath_1607 : public Active
{
public:
    LevelCrushDeath_1607(int x, int y) : Active(x, y, LevelCrushDeath_1607_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_CrushDeath", 16);
#endif
        set_visible(false);
        this->animations = &anim_levelcrushdeath_1607;
        if (!anim_levelcrushdeath_1607_initialized) {
            anim_levelcrushdeath_1607_initialized = true;
            images_levelcrushdeath_1607_0_0[0] = get_internal_image(2423);
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
FrameObject * create_levelcrushdeath_1607(int x, int y)
{
    return new (Active::pool.create()) LevelCrushDeath_1607(x, y);
}
class RMBlueEntrywayLeft3_1608 : public Backdrop
{
public:
    RMBlueEntrywayLeft3_1608(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayLeft3", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10908);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmblueentrywayleft3_1608(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayLeft3_1608(x, y);
}
