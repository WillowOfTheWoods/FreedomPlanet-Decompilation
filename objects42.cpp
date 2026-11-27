#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_placeholdercharacter_4115_0_0[1];
static Direction direction_placeholdercharacter_4115_0_0 = {0, 0, 0, 0, 1, images_placeholdercharacter_4115_0_0, 1};
static Animation anim_placeholdercharacter_4115_0 = {&direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, NULL, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0, &direction_placeholdercharacter_4115_0_0};
static Animation * anim_array_placeholdercharacter_4115[1] = {&anim_placeholdercharacter_4115_0};
static Animations anim_placeholdercharacter_4115 = {1, &anim_array_placeholdercharacter_4115[0]};
static bool anim_placeholdercharacter_4115_initialized;
class PlaceholderCharacter_4115 : public Active
{
public:
    PlaceholderCharacter_4115(int x, int y) : Active(x, y, PlaceholderCharacter_4115_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter", 20);
#endif
        this->animations = &anim_placeholdercharacter_4115;
        if (!anim_placeholdercharacter_4115_initialized) {
            anim_placeholdercharacter_4115_initialized = true;
            images_placeholdercharacter_4115_0_0[0] = get_internal_image(7340);
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
FrameObject * create_placeholdercharacter_4115(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacter_4115(x, y);
}
static Image* images_npclilacbath_4116_0_0[13];
static Direction direction_npclilacbath_4116_0_0 = {0, 0, 0, 0, 1, images_npclilacbath_4116_0_0, 13};
static Animation anim_npclilacbath_4116_0 = {&direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, NULL, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0, &direction_npclilacbath_4116_0_0};
static Animation * anim_array_npclilacbath_4116[1] = {&anim_npclilacbath_4116_0};
static Animations anim_npclilacbath_4116 = {1, &anim_array_npclilacbath_4116[0]};
static bool anim_npclilacbath_4116_initialized;
class NPCLilacBath_4116 : public Active
{
public:
    NPCLilacBath_4116(int x, int y) : Active(x, y, NPCLilacBath_4116_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_LilacBath", 13);
#endif
        this->animations = &anim_npclilacbath_4116;
        if (!anim_npclilacbath_4116_initialized) {
            anim_npclilacbath_4116_initialized = true;
            images_npclilacbath_4116_0_0[0] = get_internal_image(11490);
            images_npclilacbath_4116_0_0[1] = get_internal_image(11504);
            images_npclilacbath_4116_0_0[2] = get_internal_image(11503);
            images_npclilacbath_4116_0_0[3] = get_internal_image(11489);
            images_npclilacbath_4116_0_0[4] = get_internal_image(11489);
            images_npclilacbath_4116_0_0[5] = get_internal_image(11489);
            images_npclilacbath_4116_0_0[6] = get_internal_image(11492);
            images_npclilacbath_4116_0_0[7] = get_internal_image(11491);
            images_npclilacbath_4116_0_0[8] = get_internal_image(11491);
            images_npclilacbath_4116_0_0[9] = get_internal_image(11491);
            images_npclilacbath_4116_0_0[10] = get_internal_image(11505);
            images_npclilacbath_4116_0_0[11] = get_internal_image(11506);
            images_npclilacbath_4116_0_0[12] = get_internal_image(11480);
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
FrameObject * create_npclilacbath_4116(int x, int y)
{
    return new (Active::pool.create()) NPCLilacBath_4116(x, y);
}
static Image* images_floorcandle2_4117_0_0[3];
static Direction direction_floorcandle2_4117_0_0 = {0, 14, 14, 0, -1, images_floorcandle2_4117_0_0, 3};
static Animation anim_floorcandle2_4117_0 = {&direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, NULL, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0, &direction_floorcandle2_4117_0_0};
static Animation * anim_array_floorcandle2_4117[1] = {&anim_floorcandle2_4117_0};
static Animations anim_floorcandle2_4117 = {1, &anim_array_floorcandle2_4117[0]};
static bool anim_floorcandle2_4117_initialized;
class FloorCandle2_4117 : public Active
{
public:
    FloorCandle2_4117(int x, int y) : Active(x, y, FloorCandle2_4117_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("floor candle 2", 14);
#endif
        this->animations = &anim_floorcandle2_4117;
        if (!anim_floorcandle2_4117_initialized) {
            anim_floorcandle2_4117_initialized = true;
            images_floorcandle2_4117_0_0[0] = get_internal_image(13300);
            images_floorcandle2_4117_0_0[1] = get_internal_image(13302);
            images_floorcandle2_4117_0_0[2] = get_internal_image(13301);
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
FrameObject * create_floorcandle2_4117(int x, int y)
{
    return new (Active::pool.create()) FloorCandle2_4117(x, y);
}
static Image* images_bathfiller_4118_0_0[4];
static Direction direction_bathfiller_4118_0_0 = {0, 25, 25, 0, -1, images_bathfiller_4118_0_0, 4};
static Animation anim_bathfiller_4118_0 = {&direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, NULL, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0, &direction_bathfiller_4118_0_0};
static Animation * anim_array_bathfiller_4118[1] = {&anim_bathfiller_4118_0};
static Animations anim_bathfiller_4118 = {1, &anim_array_bathfiller_4118[0]};
static bool anim_bathfiller_4118_initialized;
class BathFiller_4118 : public Active
{
public:
    BathFiller_4118(int x, int y) : Active(x, y, BathFiller_4118_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BathFiller", 10);
#endif
        this->animations = &anim_bathfiller_4118;
        if (!anim_bathfiller_4118_initialized) {
            anim_bathfiller_4118_initialized = true;
            images_bathfiller_4118_0_0[0] = get_internal_image(12814);
            images_bathfiller_4118_0_0[1] = get_internal_image(13290);
            images_bathfiller_4118_0_0[2] = get_internal_image(12816);
            images_bathfiller_4118_0_0[3] = get_internal_image(13291);
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
FrameObject * create_bathfiller_4118(int x, int y)
{
    return new (Active::pool.create()) BathFiller_4118(x, y);
}
static Image* images_npcdinnerneera_4119_0_0[6];
static Direction direction_npcdinnerneera_4119_0_0 = {0, 0, 0, 0, 1, images_npcdinnerneera_4119_0_0, 6};
static Animation anim_npcdinnerneera_4119_0 = {&direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, NULL, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0, &direction_npcdinnerneera_4119_0_0};
static Animation * anim_array_npcdinnerneera_4119[1] = {&anim_npcdinnerneera_4119_0};
static Animations anim_npcdinnerneera_4119 = {1, &anim_array_npcdinnerneera_4119[0]};
static bool anim_npcdinnerneera_4119_initialized;
class NPCDinnerNeera_4119 : public Active
{
public:
    NPCDinnerNeera_4119(int x, int y) : Active(x, y, NPCDinnerNeera_4119_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DinnerNeera", 15);
#endif
        set_visible(false);
        this->animations = &anim_npcdinnerneera_4119;
        if (!anim_npcdinnerneera_4119_initialized) {
            anim_npcdinnerneera_4119_initialized = true;
            images_npcdinnerneera_4119_0_0[0] = get_internal_image(15525);
            images_npcdinnerneera_4119_0_0[1] = get_internal_image(15527);
            images_npcdinnerneera_4119_0_0[2] = get_internal_image(15526);
            images_npcdinnerneera_4119_0_0[3] = get_internal_image(15528);
            images_npcdinnerneera_4119_0_0[4] = get_internal_image(15529);
            images_npcdinnerneera_4119_0_0[5] = get_internal_image(15530);
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
FrameObject * create_npcdinnerneera_4119(int x, int y)
{
    return new (Active::pool.create()) NPCDinnerNeera_4119(x, y);
}
class Podium1_4120 : public Backdrop
{
public:
    Podium1_4120(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Podium 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14515);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_podium1_4120(int x, int y)
{
    return new (Backdrop::pool.create()) Podium1_4120(x, y);
}
class Podium3_4121 : public Backdrop
{
public:
    Podium3_4121(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Podium 3", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14543);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_podium3_4121(int x, int y)
{
    return new (Backdrop::pool.create()) Podium3_4121(x, y);
}
class Podium2_4122 : public Backdrop
{
public:
    Podium2_4122(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Podium 2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14516);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_podium2_4122(int x, int y)
{
    return new (Backdrop::pool.create()) Podium2_4122(x, y);
}
class Backdrop22_4123 : public Backdrop
{
public:
    Backdrop22_4123(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 22", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(611);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop22_4123(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop22_4123(x, y);
}
class Backdrop23_4124 : public Backdrop
{
public:
    Backdrop23_4124(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 23", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2090);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop23_4124(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop23_4124(x, y);
}
class Backdrop26_4125 : public Backdrop
{
public:
    Backdrop26_4125(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 26", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(612);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop26_4125(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop26_4125(x, y);
}
class Bath_4126 : public Backdrop
{
public:
    Bath_4126(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Bath", 4);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11468);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bath_4126(int x, int y)
{
    return new (Backdrop::pool.create()) Bath_4126(x, y);
}
class PLStonewallFloor_4127 : public Backdrop
{
public:
    PLStonewallFloor_4127(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_StonewallFloor", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8819);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewallfloor_4127(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewallFloor_4127(x, y);
}
static Image* images_food5_4128_0_0[1];
static Direction direction_food5_4128_0_0 = {0, 50, 50, 0, 1, images_food5_4128_0_0, 1};
static Animation anim_food5_4128_0 = {&direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, NULL, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0, &direction_food5_4128_0_0};
static Animation * anim_array_food5_4128[1] = {&anim_food5_4128_0};
static Animations anim_food5_4128 = {1, &anim_array_food5_4128[0]};
static bool anim_food5_4128_initialized;
class Food5_4128 : public Active
{
public:
    Food5_4128(int x, int y) : Active(x, y, Food5_4128_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 5", 6);
#endif
        this->animations = &anim_food5_4128;
        if (!anim_food5_4128_initialized) {
            anim_food5_4128_initialized = true;
            images_food5_4128_0_0[0] = get_internal_image(9008);
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
FrameObject * create_food5_4128(int x, int y)
{
    return new (Active::pool.create()) Food5_4128(x, y);
}
static Image* images_crowd_4129_0_0[8];
static Direction direction_crowd_4129_0_0 = {0, 0, 0, 0, -1, images_crowd_4129_0_0, 8};
static Animation anim_crowd_4129_0 = {&direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, NULL, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0, &direction_crowd_4129_0_0};
static Animation * anim_array_crowd_4129[1] = {&anim_crowd_4129_0};
static Animations anim_crowd_4129 = {1, &anim_array_crowd_4129[0]};
static bool anim_crowd_4129_initialized;
class Crowd_4129 : public Active
{
public:
    Crowd_4129(int x, int y) : Active(x, y, Crowd_4129_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crowd", 5);
#endif
        this->animations = &anim_crowd_4129;
        if (!anim_crowd_4129_initialized) {
            anim_crowd_4129_initialized = true;
            images_crowd_4129_0_0[0] = get_internal_image(14766);
            images_crowd_4129_0_0[1] = get_internal_image(14772);
            images_crowd_4129_0_0[2] = get_internal_image(14773);
            images_crowd_4129_0_0[3] = get_internal_image(14774);
            images_crowd_4129_0_0[4] = get_internal_image(14766);
            images_crowd_4129_0_0[5] = get_internal_image(14775);
            images_crowd_4129_0_0[6] = get_internal_image(14776);
            images_crowd_4129_0_0[7] = get_internal_image(14777);
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
FrameObject * create_crowd_4129(int x, int y)
{
    return new (Active::pool.create()) Crowd_4129(x, y);
}
static Image* images_food1_4130_0_0[1];
static Direction direction_food1_4130_0_0 = {0, 50, 50, 0, 1, images_food1_4130_0_0, 1};
static Animation anim_food1_4130_0 = {&direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, NULL, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0, &direction_food1_4130_0_0};
static Animation * anim_array_food1_4130[1] = {&anim_food1_4130_0};
static Animations anim_food1_4130 = {1, &anim_array_food1_4130[0]};
static bool anim_food1_4130_initialized;
class Food1_4130 : public Active
{
public:
    Food1_4130(int x, int y) : Active(x, y, Food1_4130_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 1", 6);
#endif
        this->animations = &anim_food1_4130;
        if (!anim_food1_4130_initialized) {
            anim_food1_4130_initialized = true;
            images_food1_4130_0_0[0] = get_internal_image(8741);
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
FrameObject * create_food1_4130(int x, int y)
{
    return new (Active::pool.create()) Food1_4130(x, y);
}
static Image* images_food6_4131_0_0[1];
static Direction direction_food6_4131_0_0 = {0, 50, 50, 0, 1, images_food6_4131_0_0, 1};
static Animation anim_food6_4131_0 = {&direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, NULL, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0, &direction_food6_4131_0_0};
static Animation * anim_array_food6_4131[1] = {&anim_food6_4131_0};
static Animations anim_food6_4131 = {1, &anim_array_food6_4131[0]};
static bool anim_food6_4131_initialized;
class Food6_4131 : public Active
{
public:
    Food6_4131(int x, int y) : Active(x, y, Food6_4131_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 6", 6);
#endif
        this->animations = &anim_food6_4131;
        if (!anim_food6_4131_initialized) {
            anim_food6_4131_initialized = true;
            images_food6_4131_0_0[0] = get_internal_image(2376);
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
FrameObject * create_food6_4131(int x, int y)
{
    return new (Active::pool.create()) Food6_4131(x, y);
}
static Image* images_food3_4132_0_0[1];
static Direction direction_food3_4132_0_0 = {0, 50, 50, 0, 1, images_food3_4132_0_0, 1};
static Animation anim_food3_4132_0 = {&direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, NULL, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0, &direction_food3_4132_0_0};
static Animation * anim_array_food3_4132[1] = {&anim_food3_4132_0};
static Animations anim_food3_4132 = {1, &anim_array_food3_4132[0]};
static bool anim_food3_4132_initialized;
class Food3_4132 : public Active
{
public:
    Food3_4132(int x, int y) : Active(x, y, Food3_4132_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 3", 6);
#endif
        this->animations = &anim_food3_4132;
        if (!anim_food3_4132_initialized) {
            anim_food3_4132_initialized = true;
            images_food3_4132_0_0[0] = get_internal_image(8739);
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
FrameObject * create_food3_4132(int x, int y)
{
    return new (Active::pool.create()) Food3_4132(x, y);
}
static Image* images_food7_4133_0_0[1];
static Direction direction_food7_4133_0_0 = {0, 50, 50, 0, 1, images_food7_4133_0_0, 1};
static Animation anim_food7_4133_0 = {&direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, NULL, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0, &direction_food7_4133_0_0};
static Animation * anim_array_food7_4133[1] = {&anim_food7_4133_0};
static Animations anim_food7_4133 = {1, &anim_array_food7_4133[0]};
static bool anim_food7_4133_initialized;
class Food7_4133 : public Active
{
public:
    Food7_4133(int x, int y) : Active(x, y, Food7_4133_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 7", 6);
#endif
        this->animations = &anim_food7_4133;
        if (!anim_food7_4133_initialized) {
            anim_food7_4133_initialized = true;
            images_food7_4133_0_0[0] = get_internal_image(8742);
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
FrameObject * create_food7_4133(int x, int y)
{
    return new (Active::pool.create()) Food7_4133(x, y);
}
static Image* images_food4_4134_0_0[1];
static Direction direction_food4_4134_0_0 = {0, 50, 50, 0, 1, images_food4_4134_0_0, 1};
static Animation anim_food4_4134_0 = {&direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, NULL, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0, &direction_food4_4134_0_0};
static Animation * anim_array_food4_4134[1] = {&anim_food4_4134_0};
static Animations anim_food4_4134 = {1, &anim_array_food4_4134[0]};
static bool anim_food4_4134_initialized;
class Food4_4134 : public Active
{
public:
    Food4_4134(int x, int y) : Active(x, y, Food4_4134_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 4", 6);
#endif
        this->animations = &anim_food4_4134;
        if (!anim_food4_4134_initialized) {
            anim_food4_4134_initialized = true;
            images_food4_4134_0_0[0] = get_internal_image(6105);
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
FrameObject * create_food4_4134(int x, int y)
{
    return new (Active::pool.create()) Food4_4134(x, y);
}
static Image* images_food8_4135_0_0[1];
static Direction direction_food8_4135_0_0 = {0, 50, 50, 0, 1, images_food8_4135_0_0, 1};
static Animation anim_food8_4135_0 = {&direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, NULL, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0, &direction_food8_4135_0_0};
static Animation * anim_array_food8_4135[1] = {&anim_food8_4135_0};
static Animations anim_food8_4135 = {1, &anim_array_food8_4135[0]};
static bool anim_food8_4135_initialized;
class Food8_4135 : public Active
{
public:
    Food8_4135(int x, int y) : Active(x, y, Food8_4135_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 8", 6);
#endif
        this->animations = &anim_food8_4135;
        if (!anim_food8_4135_initialized) {
            anim_food8_4135_initialized = true;
            images_food8_4135_0_0[0] = get_internal_image(3104);
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
FrameObject * create_food8_4135(int x, int y)
{
    return new (Active::pool.create()) Food8_4135(x, y);
}
static Image* images_food2_4136_0_0[2];
static Direction direction_food2_4136_0_0 = {0, 0, 0, 0, 1, images_food2_4136_0_0, 2};
static Animation anim_food2_4136_0 = {&direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, NULL, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0, &direction_food2_4136_0_0};
static Animation * anim_array_food2_4136[1] = {&anim_food2_4136_0};
static Animations anim_food2_4136 = {1, &anim_array_food2_4136[0]};
static bool anim_food2_4136_initialized;
class Food2_4136 : public Active
{
public:
    Food2_4136(int x, int y) : Active(x, y, Food2_4136_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Food 2", 6);
#endif
        this->animations = &anim_food2_4136;
        if (!anim_food2_4136_initialized) {
            anim_food2_4136_initialized = true;
            images_food2_4136_0_0[0] = get_internal_image(3419);
            images_food2_4136_0_0[1] = get_internal_image(8738);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -4);
        alterables->values.set(2, 3512);
    }
};
FrameObject * create_food2_4136(int x, int y)
{
    return new (Active::pool.create()) Food2_4136(x, y);
}
static Image* images_npcdisgruntledservant_4137_0_0[4];
static Direction direction_npcdisgruntledservant_4137_0_0 = {0, 50, 50, 0, -1, images_npcdisgruntledservant_4137_0_0, 4};
static Image* images_npcdisgruntledservant_4137_0_1[1];
static Direction direction_npcdisgruntledservant_4137_0_1 = {1, 50, 50, 0, 1, images_npcdisgruntledservant_4137_0_1, 1};
static Animation anim_npcdisgruntledservant_4137_0 = {&direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_1, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0, &direction_npcdisgruntledservant_4137_0_0};
static Animation * anim_array_npcdisgruntledservant_4137[1] = {&anim_npcdisgruntledservant_4137_0};
static Animations anim_npcdisgruntledservant_4137 = {1, &anim_array_npcdisgruntledservant_4137[0]};
static bool anim_npcdisgruntledservant_4137_initialized;
class NPCDisgruntledServant_4137 : public Active
{
public:
    NPCDisgruntledServant_4137(int x, int y) : Active(x, y, NPCDisgruntledServant_4137_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_DisgruntledServant", 22);
#endif
        this->animations = &anim_npcdisgruntledservant_4137;
        if (!anim_npcdisgruntledservant_4137_initialized) {
            anim_npcdisgruntledservant_4137_initialized = true;
            images_npcdisgruntledservant_4137_0_0[0] = get_internal_image(3557);
            images_npcdisgruntledservant_4137_0_0[1] = get_internal_image(1229);
            images_npcdisgruntledservant_4137_0_0[2] = get_internal_image(3220);
            images_npcdisgruntledservant_4137_0_0[3] = get_internal_image(3424);
            images_npcdisgruntledservant_4137_0_1[0] = get_internal_image(15143);
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
FrameObject * create_npcdisgruntledservant_4137(int x, int y)
{
    return new (Active::pool.create()) NPCDisgruntledServant_4137(x, y);
}
static Image* images_gate_4138_0_0[8];
static Direction direction_gate_4138_0_0 = {0, 0, 0, 0, 1, images_gate_4138_0_0, 8};
static Animation anim_gate_4138_0 = {&direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, NULL, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0, &direction_gate_4138_0_0};
static Animation * anim_array_gate_4138[1] = {&anim_gate_4138_0};
static Animations anim_gate_4138 = {1, &anim_array_gate_4138[0]};
static bool anim_gate_4138_initialized;
class Gate_4138 : public Active
{
public:
    Gate_4138(int x, int y) : Active(x, y, Gate_4138_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gate", 4);
#endif
        this->animations = &anim_gate_4138;
        if (!anim_gate_4138_initialized) {
            anim_gate_4138_initialized = true;
            images_gate_4138_0_0[0] = get_internal_image(9369);
            images_gate_4138_0_0[1] = get_internal_image(11691);
            images_gate_4138_0_0[2] = get_internal_image(11692);
            images_gate_4138_0_0[3] = get_internal_image(11693);
            images_gate_4138_0_0[4] = get_internal_image(11694);
            images_gate_4138_0_0[5] = get_internal_image(11695);
            images_gate_4138_0_0[6] = get_internal_image(11701);
            images_gate_4138_0_0[7] = get_internal_image(15922);
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
FrameObject * create_gate_4138(int x, int y)
{
    return new (Active::pool.create()) Gate_4138(x, y);
}
static Image* images_acidfloor_4139_0_0[2];
static Direction direction_acidfloor_4139_0_0 = {0, 0, 0, 0, 1, images_acidfloor_4139_0_0, 2};
static Animation anim_acidfloor_4139_0 = {&direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, NULL, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0, &direction_acidfloor_4139_0_0};
static Animation * anim_array_acidfloor_4139[1] = {&anim_acidfloor_4139_0};
static Animations anim_acidfloor_4139 = {1, &anim_array_acidfloor_4139[0]};
static bool anim_acidfloor_4139_initialized;
class AcidFloor_4139 : public Active
{
public:
    AcidFloor_4139(int x, int y) : Active(x, y, AcidFloor_4139_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AcidFloor", 9);
#endif
        set_visible(false);
        this->animations = &anim_acidfloor_4139;
        if (!anim_acidfloor_4139_initialized) {
            anim_acidfloor_4139_initialized = true;
            images_acidfloor_4139_0_0[0] = get_internal_image(14754);
            images_acidfloor_4139_0_0[1] = get_internal_image(14757);
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
FrameObject * create_acidfloor_4139(int x, int y)
{
    return new (Active::pool.create()) AcidFloor_4139(x, y);
}
static Image* images_acidfloorglow_4140_0_0[4];
static Direction direction_acidfloorglow_4140_0_0 = {0, 12, 12, 0, -1, images_acidfloorglow_4140_0_0, 4};
static Animation anim_acidfloorglow_4140_0 = {&direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, NULL, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0, &direction_acidfloorglow_4140_0_0};
static Animation * anim_array_acidfloorglow_4140[1] = {&anim_acidfloorglow_4140_0};
static Animations anim_acidfloorglow_4140 = {1, &anim_array_acidfloorglow_4140[0]};
static bool anim_acidfloorglow_4140_initialized;
class AcidFloorGlow_4140 : public Active
{
public:
    AcidFloorGlow_4140(int x, int y) : Active(x, y, AcidFloorGlow_4140_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AcidFloor_Glow", 14);
#endif
        set_visible(false);
        this->animations = &anim_acidfloorglow_4140;
        if (!anim_acidfloorglow_4140_initialized) {
            anim_acidfloorglow_4140_initialized = true;
            images_acidfloorglow_4140_0_0[0] = get_internal_image(14782);
            images_acidfloorglow_4140_0_0[1] = get_internal_image(14781);
            images_acidfloorglow_4140_0_0[2] = get_internal_image(14784);
            images_acidfloorglow_4140_0_0[3] = get_internal_image(14783);
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
FrameObject * create_acidfloorglow_4140(int x, int y)
{
    return new (Active::pool.create()) AcidFloorGlow_4140(x, y);
}
class DialogData_4141 : public Text
{
public:
    DialogData_4141(int x, int y) : Text(x, y, DialogData_4141_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("07 09 go_02_01 The Kingdom Stone has been taken!", 48));
        add_line(std::string("07 09 go_02_02 Your Excellency!", 31));
        add_line(std::string("09 01 ma_01_01 By who\?!", 23));
        add_line(std::string("07 09 go_02_03 Mayor Zao. His pilgrimage to the temple was a coverup!", 69));
        add_line(std::string("09 03 ma_01_02 This is troubling. Zao may be a buffoon, but I never believed he was capable of this.", 100));
        add_line(std::string("07 00 go_02_04 A pair of youngsters warned us about the attack. I... refused to listen.", 87));
        add_line(std::string("07 12 go_02_05 I have failed you, Magister.", 43));
        add_line(std::string("09 04 ma_01_03 Don't be so hard on yourself, General. I would have been just as skeptical.", 90));
        add_line(std::string("09 00 ma_01_04 Tell me... Who was it that issued this warning\?", 62));
        add_line(std::string("08 03 ne_02_01 Something doesn't smell right...", 47));
        add_line(std::string("07 06 go_02_06 Well sorrrrry.", 29));
        add_line(std::string("08 06 ne_02_02 You never smell right. I'm referring to those kids.", 66));
        add_line(std::string("08 09 ne_02_03 They know something about this. We have to find them.", 68));
        add_line(std::string("13 00 sx_01_01 GOOD EVENING, SIR.", 33));
        add_line(std::string("13 00 sx_01_02 IT MAY INTEREST YOU TO KNOW THAT THE LOCATION OF THE ARTIFACT HAS SHIFTED.", 89));
        add_line(std::string("12 16 br_02_01 Where\?", 21));
        add_line(std::string("13 00 sx_01_03 IT'S MOVING TOWARD A DENSELY POPULATED REGION TO THE EAST.", 73));
        add_line(std::string("12 16 br_02_02 This could work to our advantage... Get me the king's son.", 73));
        add_line(std::string("12 16 br_02_03 Where do your duties lie, Prince\?", 48));
        add_line(std::string("11 03 da_02_01 It is my duty to protect my father's kingdom.", 60));
        add_line(std::string("12 04 br_02_04 You would sacrifice your very life for the good of this kingdom, wouldn't you\?", 93));
        add_line(std::string("11 03 da_02_02 Yes.", 19));
        add_line(std::string("12 04 br_02_05 And you would crush all those who threaten its safety.", 69));
        add_line(std::string("11 03 da_02_03 We must protect it at all costs.", 47));
        add_line(std::string("12 12 br_02_06 Exactly.", 23));
        add_line(std::string("12 00 br_02_07 The one you call Zao has taken something very precious... Something that could put your kingdom at risk.", 119));
        add_line(std::string("12 12 br_02_08 You're not going to let him keep it, are you\?", 60));
        add_line(std::string("11 06 da_03_01 Revenge is upon us, my fellow kin. We have confirmed who is responsible for the death of our king.", 113));
        add_line(std::string("11 09 da_03_02 Zao of Shang Mu!", 31));
        add_line(std::string("11 09 da_03_03 His plans to steal our Kingdom Stone must be stopped!", 68));
        add_line(std::string("11 12 da_03_04 Deploy our Sky Battalion!", 40));
        add_line(std::string("14 00 ki_01_01 How did this happen\?! Our walls are impenetrable!", 64));
        add_line(std::string("12 12 br_01_02 Your floor isn't.", 32));
        add_line(std::string("14 00 ki_01_02 Well then... If death is what you seek, then I will gladly provide it!", 85));
        add_line(std::string("12 20 br_01_03 There is not reason to be hostile, your majesty. In fact, you should be proud. Your son is moments away from inheriting the throne.", 146));
        add_line(std::string("14 09 ki_01_03 DAIL!", 20));
        add_line(std::string("11 15 da_01_01 I tried, father!", 31));
        add_line(std::string("14 09 ki_01_04 What... do you WANT WITH US\?!", 44));
        add_line(std::string("12 24 br_01_04 How shall I explain this... I'm gifting your son with my knowledge.", 82));
        add_line(std::string("12 20 br_01_05 It will make him the most powerful ruler your world has ever known... and he will answer to no one but me.", 121));
        add_line(std::string("11 18 da_01_03 MURDERER!", 24));
        add_line(std::string("12 16 br_01_06 Prepare the snatcher.", 36));
        add_line(std::string("09 00 ma_00_01 A crisis has befallen our world. For centuries, we have depended on the Kingdom Stone... but its strength is fading.", 131));
        add_line(std::string("09 00 ma_00_02 It cannot keep up with our growing demand for energy.", 68));
        add_line(std::string("09 00 ma_00_03 The prince of Shuigang, poisoned with madness over the death of his father, has spread machines across the land to steal energy from other kingdoms.", 163));
        add_line(std::string("09 00 ma_00_04 Tensions are growing, and I fear that war may be inevitable.", 75));
        add_line(std::string("10 24 za_02_01 Don't worry about taking turns! I'm sure you must be hungry, so have at it!", 90));
        add_line(std::string("01 03 li_13_01 SUSHI!", 21));
        add_line(std::string("03 03 mi_09_03 I love sushi!", 28));
        add_line(std::string("02 06 ca_13_03 Me too!", 22));
        add_line(std::string("01 15 li_13_02 Whoawhoawhoawhoawhoa, you both like something\? Is this the end of the world\?", 91));
        add_line(std::string("05 03 to_08_01 So, what's that giant head on the wall over there\?", 65));
        add_line(std::string("10 24 za_02_02 That's the pride of my collection! An ancient statue modeled after the dragons of the Before Time.", 113));
        add_line(std::string("05 00 to_08_02 What's special about them compared to, y'know, someone like Lilac\?", 81));
        add_line(std::string("10 27 za_02_03 What's special\? Hah! Did you come from another planet or something\?", 82));
        add_line(std::string("01 12 li_13_05 Sorry.", 21));
        add_line(std::string("10 27 za_02_04 Long ago, a magnificant creature soared across Avalice in a ball of fire.", 88));
        add_line(std::string("10 27 za_02_05 When it landed, our ancestors were so captivated by its power and beauty that they built three kingdoms in its honor.", 132));
        add_line(std::string("05 00 to_08_03 Shang Mu, Shang Tu and Shuigang\?", 47));
        add_line(std::string("10 24 za_02_06 Bingo! And when the cities were built, the dragon transformed into the legendary Kingdom Stone we know and love today.", 133));
        add_line(std::string("10 21 za_02_07 The same stone that was heartlessly yanked away from me!", 71));
        add_line(std::string("02 09 ca_13_04 You took it first!", 33));
        add_line(std::string("01 18 li_13_06 Carol! Manners.", 30));
        add_line(std::string("02 09 ca_13_05 Sorry...", 23));
        add_line(std::string("01 12 li_13_07 Why did you take it\? Why now\?", 44));
        add_line(std::string("10 15 za_02_08 Shang Mu is on the brink of an energy crisis. With the Stone in our hands, we could have solved it overnight!", 124));
        add_line(std::string("02 12 ca_13_06 Well that worked out well...", 43));
        add_line(std::string("05 00 to_08_04 I don't think this \"energy crisis\" of yours is an accident. I think it's deliberate, and I think we know who is responsible.", 139));
        add_line(std::string("12 16 br_03_01 Don't bore me with your lectures. I've heard them a thousand times from a thousand self-righteous warriors.", 122));
        add_line(std::string("12 16 br_03_02 Unless you have something useful to say, the only thing that matters to me is how quickly I can cast you", 119));
        add_line(std::string("12 16 br_xx_xx aside. I really have a lot of work to do.", 56));
        add_line(std::string("00 00 wa_01_01 You'll fail. Men like you always fail.", 53));
        add_line(std::string("12 20 br_03_03 Interesting theory.", 34));
        add_line(std::string("13 00 sx_02_01 HELLO SIR. HAVE YOU BEHEADED THE INTRUDERS YET\?", 62));
        add_line(std::string("12 08 br_03_05 What is it\?", 26));
        add_line(std::string("13 00 sx_02_02 THERE IS AN INCOMING TRANSMISSION FROM GENERAL SERPENTINE.", 73));
        add_line(std::string("06 00 se_05_01 The full moon is out! Not a cloud in the sky!", 60));
        add_line(std::string("12 16 br_03_06 Don't relax just yet! Upload the scans and get back here immediately.", 84));
        add_line(std::string("06 18 se_05_02 Of course, my Lord!", 34));
        add_line(std::string("12 16 br_03_07 Contact the crash site and tell them to refit our warp drive. I want the artifact to fit like a glove.", 117));
        add_line(std::string("13 00 sx_02_03 AS YOU WISH, SIR.", 32));
        add_line(std::string("12 00 br_03_08 We're getting off this rock.", 43));
        add_line(std::string("10 00 za_03_01 An alliance with Shang Tu\? What a lovely idea! \"Oh hey Magister! Sorry about ambushing your soldiers and", 119));
        add_line(std::string("10 30 za_xx_xx desecrating your temple! Let's go frolicking in the woods together with our makeup and pretty dresses!\"", 118));
        add_line(std::string("01 00 li_14_01 Your excellency, we're a neutral party. Send us to speak on your behalf.", 87));
        add_line(std::string("10 00 za_03_02 If he won't listen to the greatest ruler in all of Avalice, why would he listen to a bunch of kids\?", 114));
        add_line(std::string("03 21 mi_10_01 Can we try\? Pretty please\?", 41));
        add_line(std::string("01 30 li_14_02 Just imagine how much people are going to love you for reuniting the three kingdoms against a common enemy. You'll be a hero!", 140));
        add_line(std::string("10 00 za_03_03 Me, a war hero\?", 30));
        add_line(std::string("10 33 za_03_04 Now that you mention it, I could use a few extra hands...", 72));
        add_line(std::string("05 00 to_09_01 So you'll help us, then\?", 39));
        add_line(std::string("10 09 za_03_05 Ah, what the heck\? It's worth a shot!", 52));
        add_line(std::string("10 09 za_03_06 To the airship!", 30));
        add_line(std::string("01 27 li_14_03 Good job, Milla!", 31));
        add_line(std::string("03 03 mi_10_03 Thanks!", 22));
        add_line(std::string("02 03 ca_16_01 What's going on\?!", 32));
        add_line(std::string("05 33 to_11_02 Shoot! We've gotta disable those ships or we're toast!", 69));
        add_line(std::string("07 03 go_04_01 My friends! How did the negotiations fare\?", 57));
        add_line(std::string("01 42 li_21_01 Prince Dail took the stone.", 42));
        add_line(std::string("05 00 to_15_01 We need to speak to the Magister immediately.", 60));
        add_line(std::string("07 00 go_04_02 I see... Very well, then. He deserves to know.", 61));
        add_line(std::string("05 24 to_16_01 A thousand good greetings to you, Magister.", 58));
        add_line(std::string("09 00 ma_02_01 It's my understanding that Shuigang is now in possession of the Kingdom Stone.", 93));
        add_line(std::string("05 00 to_16_02 Not exactly, Your Greatness. Someone else has it.", 64));
        add_line(std::string("09 00 ma_02_02 ...Explain.", 26));
        add_line(std::string("05 00 to_16_03 It's been taken by a warlord named Brevon. He has been manipulating the three kingdoms into waging war.", 118));
        add_line(std::string("09 05 ma_02_03 And you have proof of this\?", 42));
        add_line(std::string("05 00 to_16_04 This is a fragment of one of Brevon's machines.", 62));
        add_line(std::string("05 00 to_16_05 Have your scientists examine it. You'll find that its mineral composition doesn't match anything that's built on your world.", 139));
        add_line(std::string("08 06 ne_03_01 Wait! Don't touch it.", 36));
        add_line(std::string("08 09 ne_03_02 This theory you have of a man from another world sounds highly suspicious, at best.", 98));
        add_line(std::string("08 15 ne_03_03 If you will allow me to explain, Magister, I have a different theory in mind.", 92));
        add_line(std::string("09 00 ma_02_04 Proceed.", 23));
        add_line(std::string("08 09 ne_03_04 This is nothing but an attempt from Mayor Zao to cover up the atrocity he committed against our Kingdom Stone.", 125));
        add_line(std::string("08 09 ne_03_05 He must have offered you a generous reward to come here and make up this ridiculous story.", 105));
        add_line(std::string("08 09 ne_03_06 Afterall, you can't resist money, Sash Lilac and Carol Tea.", 74));
        add_line(std::string("01 33 li_22_01 And you know our names because...\?", 49));
        add_line(std::string("08 12 ne_03_07 You were quite the fortune teller yesterday, so I couldn't resist doing a little background check.", 113));
        add_line(std::string("08 12 ne_03_08 Not only have the two of you been stealing crystal shards, you've been working for the same group that", 117));
        add_line(std::string("08 12 ne_xx_xx claimed responsibility for the stone's theft...", 62));
        add_line(std::string("08 18 ne_03_09 The Red Scarves.", 31));
        add_line(std::string("02 09 ca_19_01 Hey, look Lilac! It's our identical twin sisters!", 64));
        add_line(std::string("08 09 ne_03_10 They're criminals and spies, your Excellency.", 60));
        add_line(std::string("09 00 ma_02_05 Is this true\?", 28));
        add_line(std::string("02 00 ca_19_02 We were just-", 28));
        add_line(std::string("01 00 li_22_02 Wait.", 20));
        add_line(std::string("01 00 li_22_03 Magister, we're no longer members of the Scarves. It was a long time ago.", 88));
        add_line(std::string("01 00 li_22_04 We did what we had to do to survive.", 51));
        add_line(std::string("09 04 ma_02_06 Detain them until further notice. Make sure the Commander and his \"evidence\" are properly quarantined.", 117));
        add_line(std::string("05 21 to_16_06 Heyheyheyhey! Easy!", 34));
        add_line(std::string("01 09 li_22_05 Magister, please! We don't have time for this!", 61));
        add_line(std::string("09 00 ma_02_07 You're right. Take them away immediately.", 56));
        add_line(std::string("05 21 to_16_07 Examine the fragment! Examine it!", 48));
        add_line(std::string("02 27 ca_20_01 That stupid panda girl!", 38));
        add_line(std::string("01 60 li_23_01 Come closer. We can't let the guards hear us.", 60));
        add_line(std::string("01 03 li_23_02 Now let's try and figure this out. We gotta bust out of here, but we can't leave without Torque.", 111));
        add_line(std::string("02 15 ca_20_02 You got any bright ideas, Ms. Heropants\?", 55));
        add_line(std::string("01 03 li_23_03 It's not gonna be easy. He's been quarantined.", 61));
        add_line(std::string("02 24 ca_20_03 What if we bribed the guards\?", 44));
        add_line(std::string("01 33 li_23_04 Uh, Carol, we don't have any of our belongings.", 62));
        add_line(std::string("02 48 ca_20_04 Ooh, ooh! I'll pretend that I have to pee really bad, and when they open the gate we'll make a break for it!", 123));
        add_line(std::string("01 00 li_23_05 I told you, we can't leave without Torque.", 57));
        add_line(std::string("02 00 ca_20_05 Ah, right...", 27));
        add_line(std::string("02 36 ca_20_06 Hmm... Oh, I got it now! First, we'll both switch clothes, and then I'll switch with Milla, and then when th-", 124));
        add_line(std::string("03 12 mi_14_01 This way!", 24));
        add_line(std::string("03 12 mi_14_02 I can dig through here!", 38));
        add_line(std::string("02 21 ca_20_08 Well that makes it easy. Let's go!", 49));
        add_line(std::string("01 00 li_23_07 Actually, only one of us should go. We don't want the guards to suspect anything.", 96));
        add_line(std::string("03 21 mi_14_03 I'll go! For the team!", 37));
        add_line(std::string("01 27 li_23_08 The sooner you find Torque, the sooner we can get out of here.", 77));
        add_line(std::string("03 00 mi_15_01 What are you gonna do to me\?", 43));
        add_line(std::string("08 00 ne_04_01 Relax. It is dishonorable to hurt small children.", 64));
        add_line(std::string("08 00 ne_04_02 Follow me.", 25));
        add_line(std::string("08 09 ne_05_01 Nice try.", 24));
        add_line(std::string("02 06 ca_21_01 Well there goes that plan...", 43));
        add_line(std::string("03 24 mi_15_02 I'm sorry...", 27));
        add_line(std::string("01 09 li_24_01 Wait!", 20));
        add_line(std::string("01 00 li_24_02 Tell the Magister I want to confess!", 51));
        add_line(std::string("02 03 ca_21_02 What\?!", 21));
        add_line(std::string("08 15 ne_05_02 Very well.", 25));
        add_line(std::string("01 00 li_24_03 It's okay. I have an idea.", 41));
        add_line(std::string("01 00 li_25_01 So Torque has nothing to do with this. We forced him to help us against his will.", 96));
        add_line(std::string("09 00 ma_03_01 I see.", 21));
        add_line(std::string("09 00 ma_03_02 Since you have displayed integrity in revealing this farce, I will release your friend... but this does not change your own fate.", 144));
        add_line(std::string("09 05 ma_03_03 You and your companions have lied to us, and in doing so have wasted our time and resources.", 107));
        add_line(std::string("09 05 ma_03_04 You will remain imprisoned until I deem otherwise.", 65));
        add_line(std::string("01 36 li_25_02 If I may make one last request... I want to say goodbye to him, and apologize for the trouble I've caused.", 121));
        add_line(std::string("09 00 ma_03_05 Very well. Make it quick.", 40));
        add_line(std::string("05 00 to_17_01 I don't know what to say... We needed Shang Tu's support.", 72));
        add_line(std::string("01 39 li_25_03 I know... but we can't do anything while we're all sitting behind bars. We need more evidence.", 109));
        add_line(std::string("05 00 to_17_02 But what about you guys\?", 39));
        add_line(std::string("01 00 li_25_04 We'll catch up with you. Busting out of here will be a piece of crab cake.", 89));
        add_line(std::string("09 00 ma_03b02 We shall establish a timtams currency exchange program.", 70));
        add_line(std::string("01 33 li_05_12 Huh\?", 19));
        add_line(std::string("09 05 ma_03b03 WE SHALL ESTABLISH. A TIMTAMS. CURRENCY EXCHANGE PROGRAM.", 72));
        add_line(std::string("01 00 li_05_13 No, no, it's okay. I was just surprised, is all. Go ahead.", 73));
        add_line(std::string("12 52 br_04_01 It has come to my attention that there are still Chasers among us. We must neutralize them.", 106));
        add_line(std::string("13 00 sx_03_01 ACCORDING TO OUR INTELLIGENCE REPORTS, DIRECT INFILTRATION OF THE CITY WILL BE IMPOSSIBLE WITHOUT EXPOSING OUR OPERATIONS.", 137));
        add_line(std::string("12 16 br_04_04 As soon as they leave, I want them dragged to our remote base. Do whatever it takes to bring them under our control.", 131));
        add_line(std::string("02 72 ca_23_01 Maybe we're not cut out for this... We should go home.", 69));
        add_line(std::string("01 66 li_27_01 So that's it\? We just leave and let Torque die\?", 62));
        add_line(std::string("02 42 ca_23_02 What are we supposed to do\? I like Torque, but... This is so much bigger than us. We're just kids.", 113));
        add_line(std::string("01 66 li_27_02 That doesn't mean anything.", 42));
        add_line(std::string("02 00 ca_23_03 Doesn't mean anything\?! Look at what they did to me! To us! Sometimes I feel like you're trying to get us killed!", 128));
        add_line(std::string("01 66 li_27_03 How can you say that\? I put myself out there on the front lines so you don't have to!", 100));
        add_line(std::string("02 75 ca_23_04 Yeah, and I always have to bail you out!", 55));
        add_line(std::string("01 66 li_27_04 What's the problem with that\? We're helping each other do the right thing!", 89));
        add_line(std::string("02 75 ca_23_05 But I don't want to do the right thing! I just wanna spend time with my best friend!", 99));
        add_line(std::string("02 75 ca_23_06 If the only way I can do that is by risking my life... maybe we shouldn't be friends anymore.", 108));
        add_line(std::string("01 42 li_27_05 Carol...", 23));
        add_line(std::string("02 75 ca_23_07 DON'T... Just don't. I'm done.", 45));
        add_line(std::string("01 60 li_48_03 It's okay.", 25));
        add_line(std::string("01 00 li_27_06 I'm going after him. Alone.", 42));
        add_line(std::string("03 00 mi_17_01 Let me come with you!", 36));
        add_line(std::string("01 39 li_27_07 No. Carol's right. Friends shouldn't let each other get hurt.", 76));
        add_line(std::string("01 39 li_27_08 You should stay behind with her.", 47));
        add_line(std::string("01 24 li_27_09 Milla, stay here.", 32));
        add_line(std::string("03 24 mi_17_02 I won't leave you...", 35));
        add_line(std::string("03 57 mi_17_03 Lilac!", 21));
        add_line(std::string("03 00 mi_17_05 She's gone!", 26));
        add_line(std::string("02 72 ca_24_01 She actually went through with it. Big surprise.", 63));
        add_line(std::string("03 00 mi_17_06 Are you mad at her\?", 34));
        add_line(std::string("02 00 ca_24_02 I'll get over it, I guess. But we're gonna do things my way now.", 79));
        add_line(std::string("03 00 mi_18_01 What is this place\?", 34));
        add_line(std::string("02 00 ca_25_01 The Red Scarves are down here. They've still got all of my ninja stuff.", 86));
        add_line(std::string("03 00 mi_18_02 You were a ninja\?", 32));
        add_line(std::string("02 00 ca_25_02 Eh, not really. I mean, it's a long story, so, I'll tell you someday if you're good.", 99));
        add_line(std::string("02 60 ca_25_03 C'mon, let's show Ms. Heropants how it's done.", 61));
        add_line(std::string("04 00 sp_xx_xx I'm not doing the buddy-buddy thing with you. As soon as we're in, I'm flying solo.", 98));
        add_line(std::string("02 00 ca_27_01 Whatever you say, pal.", 37));
        add_line(std::string("01 93 li_31_01 No! NO!!", 23));
        add_line(std::string("08 09 ne_06_01 Stand down!", 26));
        add_line(std::string("01 93 li_31_02 I have to find them!!", 36));
        add_line(std::string("08 09 ne_06_02 There are two ways we can do this, dragon! And you're only conscious in one of them!", 99));
        add_line(std::string("01 93 li_31_03 Do what you have to do.", 38));
        add_line(std::string("08 06 ne_06_03 Contact the Magister.", 36));
        add_line(std::string("08 03 ne_06_04 We have a problem.", 33));
        add_line(std::string("09 03 ma_04_01 Once again, you have deceived us. Do you realize what this means\?", 80));
        add_line(std::string("01 93 li_32_01 If it makes any difference, your excellency... I'm deeply sorry.", 79));
        add_line(std::string("09 03 ma_04_02 It means that I have been foolish.", 49));
        add_line(std::string("09 00 ma_04_03 We examined the fragment your Commander gave us.", 63));
        add_line(std::string("01 96 li_32_02 Does that mean that you'll help\?", 47));
        add_line(std::string("09 00 ma_04_04 There is something you must do for us first. A mission, if you will.", 83));
        add_line(std::string("09 00 ma_04_05 Accept and we will restore your strength. Succeed and we will restore your honor.", 96));
        add_line(std::string("01 96 li_32_03 Th... Thank you, your Excellency.", 48));
        add_line(std::string("08 03 ne_07_01 The fragment your Commander gave us is indeed crafted from a rare mineral.", 89));
        add_line(std::string("08 03 ne_07_02 But we've discovered it before. In one other location.", 69));
        add_line(std::string("01 00 li_32_04 Why haven't you dug it up by now\?", 48));
        add_line(std::string("08 03 ne_07_03 We feared that it was radioactive. Now that we've studied it in person, we know that it is safe enough to investigate.", 133));
        add_line(std::string("09 04 ma_04_06 This could provide the answers we seek... Why the invaders know of our world, and more importantly, how to defeat them.", 134));
        add_line(std::string("08 09 ne_07_04 Get in there, find what you can, and leave. Do it as quickly as possible.", 88));
        add_line(std::string("01 36 li_32_05 I won't fail you.", 32));
        add_line(std::string("01 96 li_32b02 Does that mean y-that you'll help\?", 49));
        add_line(std::string("00 00 sc_01_01 This is our final message... A message that we leave for the future.", 83));
        add_line(std::string("00 00 sc_01_02 Although we will respect the wishes of your people and allow our influence to pass into legend, there", 116));
        add_line(std::string("00 00 sc_xx_xx will come a time in your history when you must learn the truth.", 78));
        add_line(std::string("00 00 sc_01_03 When we were stranded here, we sought desperately to return to our world. We wasted countless years", 114));
        add_line(std::string("00 00 sc_xx_xx trying to find a way home, but we are no closer to an answer than when we started.", 97));
        add_line(std::string("00 00 sc_01_05 We decided that helping your civilization survive and prosper was a more efficient use of our technology.", 120));
        add_line(std::string("00 00 sc_01_06 We have condensed our energy reserves into a physical relic of extraordinary power. With proper", 110));
        add_line(std::string("00 00 sc_xx_xx care, you may one day use it to travel to the stars... to find the answers that we alone could never find.", 121));
        add_line(std::string("00 00 sc_01_07 If you wish to know more, you'll have to access our internal database. I pray that it is still intact by the time you receive this message.", 154));
        add_line(std::string("00 04 sc_01_08 May the winds of time carry you for eternity.", 60));
        add_line(std::string("09 03 ma_05_01 The implications of this are powerful...", 55));
        add_line(std::string("01 00 li_34_01 Do you believe it, your excellency\?", 50));
        add_line(std::string("09 00 ma_05_02 It's difficult to say... But if it's true, then the Kingdom Stone is more important to our future than we realise.", 129));
        add_line(std::string("09 00 ma_05_03 It must be returned to its resting place before the energy within is lost forever.", 97));
        add_line(std::string("09 04 ma_05_04 Something terrible has happened in your absence. Zao has sent his army to attack Shuigang.", 105));
        add_line(std::string("01 09 li_34_02 What\?! But they're innocent!", 43));
        add_line(std::string("09 00 ma_05_05 Not as far as Zao is concerned. I have sent soldiers of our own to hold them off, but I fear that it will not be for long.", 137));
        add_line(std::string("01 09 li_34_03 What are we gonna do\?!", 37));
        add_line(std::string("09 00 ma_05_06 As ironic as it may seem, you are the only dragonblood worthy of our trust. You can stop this war before it begins.", 130));
        add_line(std::string("01 24 li_34_04 Tell me what to do.", 34));
        add_line(std::string("09 00 ma_05_07 Our ships will take you as far as they can. When you land, ride the northern winds to the snowfields.", 116));
        add_line(std::string("01 24 li_07_22 Understood.", 26));
        add_line(std::string("09 00 ma_05_08 We are counting on you, dragonblood. Safe winds.", 63));
        add_line(std::string("13 00 sx_07_01 THE ALIEN ARMY HAS COMMENCED ITS ATTACK.", 55));
        add_line(std::string("12 00 br_18_01 Give the order to your troops.", 45));
        add_line(std::string("11 00 da_05_00 It will be done.", 31));
        add_line(std::string("12 00 br_18_02 Find the Commander and his pets and tear them to shreds. And leave their brains intact if possible. I might use them for something.", 146));
        add_line(std::string("02 00 ca_28_05 Lilac!", 21));
        add_line(std::string("05 00 to_20_00 Can you sense where she is, Milla\?", 49));
        add_line(std::string("03 48 mi_21_01 Something's coming! Something very very big is coming!", 69));
        add_line(std::string("05 15 to_20_01 Stay behind me.", 30));
        add_line(std::string("07 18 go_05_01 Halt! I SAID HALT!", 33));
        add_line(std::string("07 06 go_05_02 Well look what we have here.", 43));
        add_line(std::string("03 00 mi_21_02 Have you seen Lilac\?", 35));
        add_line(std::string("07 06 go_05_03 The dragon girl\? Afraid not.", 43));
        add_line(std::string("02 36 ca_29_01 Well, what's with the army\?", 42));
        add_line(std::string("07 00 go_05_04 Zao and his goons are about to attack Shuigang. I'm not about to let that happen.", 96));
        add_line(std::string("05 21 to_20_02 Zao is going to war\?!", 36));
        add_line(std::string("02 18 ca_29_02 Not if we reach him. All he needs is a little bit of persuasion, if you know what I'm talkin' about.", 115));
        add_line(std::string("03 00 mi_21_03 We're friends with him. Maybe we can ask him to stop!", 68));
        add_line(std::string("07 06 go_05_05 Yeah, like that's gonna w... Hey, wait a minute... I think you might be on to something! Hop in!", 111));
        add_line(std::string("06 15 se_05_03 TSSSHAH! I'll get you, commander!", 48));
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
FrameObject * create_dialogdata_4141(int x, int y)
{
    return new (Text::pool.create()) DialogData_4141(x, y);
}
class SubtitleData_4142 : public Text
{
public:
    SubtitleData_4142(int x, int y) : Text(x, y, SubtitleData_4142_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("How did this happen\?! Our walls are impenetrable!", 49));
        add_line(std::string("Your floor isn't.", 17));
        add_line(std::string("Well then... If death is what you seek, then I will gladly provide it!", 70));
        add_line(std::string("There is no reason to be hostile, your majesty. In fact, you should be proud.", 77));
        add_line(std::string("Your son is moments away from inheriting the throne.", 52));
        add_line(std::string("Dail!", 5));
        add_line(std::string("I tried, father!", 16));
        add_line(std::string("What do you want with us\?!", 26));
        add_line(std::string("How shall I explain this... I'm gifting your son with my knowledge.", 67));
        add_line(std::string("It will make him the most powerful ruler your world has ever known... and he will answer to no one but me.", 106));
        add_line(std::string("MURDERER!", 9));
        add_line(std::string("Prepare the snatcher.", 21));
        add_line(std::string("An opportunity has fallen to our world.", 39));
        add_line(std::string("We now realize that the Kingdom Stone was never fading, but changing in ways that were transparent to us in our lust for power and prestige.", 140));
        add_line(std::string("The wind carries its eternal glow to the furthest reaches of our lands, and former enemies extend their hands to one another, acknowledging the error of their ways.", 164));
        add_line(std::string("Creatures both mutant and metal still ravage the landscape, and it will be some time before we can dispose of them once and for all.", 132));
        add_line(std::string("Perhaps most troubling of all is that Lord Brevon, the monster who threw our world into chaos, is nowhere to be found.", 118));
        add_line(std::string("There is still much work to be done. We are not completely out of danger, but my people and I will rest easy tonight,", 117));
        add_line(std::string("knowing that the bravery and sacrifice of a select few have given our world another chance.", 91));
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
FrameObject * create_subtitledata_4142(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_4142(x, y);
}
class QuickBackdrop3_4143 : public QuickBackdrop
{
public:
    QuickBackdrop3_4143(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 3", 16);
#endif
        flags |= BACKGROUND;
        width = 426;
        height = 240;
        image = get_internal_image(11118);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop3_4143(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop3_4143(x, y);
}
static Image* images_titlestar_4144_0_0[21];
static Direction direction_titlestar_4144_0_0 = {0, 25, 25, 0, -1, images_titlestar_4144_0_0, 21};
static Animation anim_titlestar_4144_0 = {&direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, NULL, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0, &direction_titlestar_4144_0_0};
static Animation * anim_array_titlestar_4144[1] = {&anim_titlestar_4144_0};
static Animations anim_titlestar_4144 = {1, &anim_array_titlestar_4144[0]};
static bool anim_titlestar_4144_initialized;
class TitleStar_4144 : public Active
{
public:
    TitleStar_4144(int x, int y) : Active(x, y, TitleStar_4144_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TitleStar", 9);
#endif
        this->animations = &anim_titlestar_4144;
        if (!anim_titlestar_4144_initialized) {
            anim_titlestar_4144_initialized = true;
            images_titlestar_4144_0_0[0] = get_internal_image(3716);
            images_titlestar_4144_0_0[1] = get_internal_image(3717);
            images_titlestar_4144_0_0[2] = get_internal_image(3716);
            images_titlestar_4144_0_0[3] = get_internal_image(381);
            images_titlestar_4144_0_0[4] = get_internal_image(3154);
            images_titlestar_4144_0_0[5] = get_internal_image(3508);
            images_titlestar_4144_0_0[6] = get_internal_image(3160);
            images_titlestar_4144_0_0[7] = get_internal_image(3692);
            images_titlestar_4144_0_0[8] = get_internal_image(3693);
            images_titlestar_4144_0_0[9] = get_internal_image(3694);
            images_titlestar_4144_0_0[10] = get_internal_image(3713);
            images_titlestar_4144_0_0[11] = get_internal_image(3714);
            images_titlestar_4144_0_0[12] = get_internal_image(3714);
            images_titlestar_4144_0_0[13] = get_internal_image(3713);
            images_titlestar_4144_0_0[14] = get_internal_image(3694);
            images_titlestar_4144_0_0[15] = get_internal_image(3693);
            images_titlestar_4144_0_0[16] = get_internal_image(3692);
            images_titlestar_4144_0_0[17] = get_internal_image(3160);
            images_titlestar_4144_0_0[18] = get_internal_image(3508);
            images_titlestar_4144_0_0[19] = get_internal_image(3154);
            images_titlestar_4144_0_0[20] = get_internal_image(381);
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
FrameObject * create_titlestar_4144(int x, int y)
{
    return new (Active::pool.create()) TitleStar_4144(x, y);
}
static Image* images_spacedebris_4145_0_0[3];
static Direction direction_spacedebris_4145_0_0 = {0, 0, 0, 0, 1, images_spacedebris_4145_0_0, 3};
static Animation anim_spacedebris_4145_0 = {&direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, NULL, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0, &direction_spacedebris_4145_0_0};
static Animation * anim_array_spacedebris_4145[1] = {&anim_spacedebris_4145_0};
static Animations anim_spacedebris_4145 = {1, &anim_array_spacedebris_4145[0]};
static bool anim_spacedebris_4145_initialized;
class SpaceDebris_4145 : public Active
{
public:
    SpaceDebris_4145(int x, int y) : Active(x, y, SpaceDebris_4145_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Space_Debris", 12);
#endif
        this->animations = &anim_spacedebris_4145;
        if (!anim_spacedebris_4145_initialized) {
            anim_spacedebris_4145_initialized = true;
            images_spacedebris_4145_0_0[0] = get_internal_image(7885);
            images_spacedebris_4145_0_0[1] = get_internal_image(7929);
            images_spacedebris_4145_0_0[2] = get_internal_image(7891);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(2, 17, 31));
        set_direction(pick_random(2, 17, 31));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(20);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(4);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_spacedebris_4145(int x, int y)
{
    return new (Active::pool.create()) SpaceDebris_4145(x, y);
}
static Image* images_active_4146_0_0[22];
static Direction direction_active_4146_0_0 = {0, 50, 50, 0, -1, images_active_4146_0_0, 22};
static Animation anim_active_4146_0 = {&direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, NULL, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0, &direction_active_4146_0_0};
static Animation * anim_array_active_4146[1] = {&anim_active_4146_0};
static Animations anim_active_4146 = {1, &anim_array_active_4146[0]};
static bool anim_active_4146_initialized;
class Active_4146 : public Active
{
public:
    Active_4146(int x, int y) : Active(x, y, Active_4146_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_4146;
        if (!anim_active_4146_initialized) {
            anim_active_4146_initialized = true;
            images_active_4146_0_0[0] = get_internal_image(7932);
            images_active_4146_0_0[1] = get_internal_image(3716);
            images_active_4146_0_0[2] = get_internal_image(3717);
            images_active_4146_0_0[3] = get_internal_image(3716);
            images_active_4146_0_0[4] = get_internal_image(381);
            images_active_4146_0_0[5] = get_internal_image(3154);
            images_active_4146_0_0[6] = get_internal_image(3508);
            images_active_4146_0_0[7] = get_internal_image(3160);
            images_active_4146_0_0[8] = get_internal_image(3692);
            images_active_4146_0_0[9] = get_internal_image(3693);
            images_active_4146_0_0[10] = get_internal_image(3694);
            images_active_4146_0_0[11] = get_internal_image(3713);
            images_active_4146_0_0[12] = get_internal_image(3714);
            images_active_4146_0_0[13] = get_internal_image(3714);
            images_active_4146_0_0[14] = get_internal_image(3713);
            images_active_4146_0_0[15] = get_internal_image(3694);
            images_active_4146_0_0[16] = get_internal_image(3693);
            images_active_4146_0_0[17] = get_internal_image(3692);
            images_active_4146_0_0[18] = get_internal_image(3160);
            images_active_4146_0_0[19] = get_internal_image(3508);
            images_active_4146_0_0[20] = get_internal_image(3154);
            images_active_4146_0_0[21] = get_internal_image(381);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 10);
    }
};
FrameObject * create_active_4146(int x, int y)
{
    return new (Active::pool.create()) Active_4146(x, y);
}
class Space_4147 : public SystemBox
{
public:
    Space_4147(int x, int y) : SystemBox(x, y, Space_4147_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Space", 5);
#endif
        flags |= BACKGROUND;
        width = 452;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(7883);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_space_4147(int x, int y)
{
    return new (SystemBox::pool.create()) Space_4147(x, y);
}
static Image* images_spacebrevonmech_4148_0_0[3];
static Direction direction_spacebrevonmech_4148_0_0 = {0, 50, 50, 0, -1, images_spacebrevonmech_4148_0_0, 3};
static Animation anim_spacebrevonmech_4148_0 = {&direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, NULL, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0, &direction_spacebrevonmech_4148_0_0};
static Animation * anim_array_spacebrevonmech_4148[1] = {&anim_spacebrevonmech_4148_0};
static Animations anim_spacebrevonmech_4148 = {1, &anim_array_spacebrevonmech_4148[0]};
static bool anim_spacebrevonmech_4148_initialized;
class SpaceBrevonMech_4148 : public Active
{
public:
    SpaceBrevonMech_4148(int x, int y) : Active(x, y, SpaceBrevonMech_4148_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Space_BrevonMech", 16);
#endif
        this->animations = &anim_spacebrevonmech_4148;
        if (!anim_spacebrevonmech_4148_initialized) {
            anim_spacebrevonmech_4148_initialized = true;
            images_spacebrevonmech_4148_0_0[0] = get_internal_image(7901);
            images_spacebrevonmech_4148_0_0[1] = get_internal_image(7909);
            images_spacebrevonmech_4148_0_0[2] = get_internal_image(7910);
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
FrameObject * create_spacebrevonmech_4148(int x, int y)
{
    return new (Active::pool.create()) SpaceBrevonMech_4148(x, y);
}
static Image* images_spacedreadnought_4149_0_0[4];
static Direction direction_spacedreadnought_4149_0_0 = {0, 0, 0, 0, 1, images_spacedreadnought_4149_0_0, 4};
static Image* images_spacedreadnought_4149_0_1[4];
static Direction direction_spacedreadnought_4149_0_1 = {1, 0, 0, 0, 1, images_spacedreadnought_4149_0_1, 4};
static Image* images_spacedreadnought_4149_0_2[4];
static Direction direction_spacedreadnought_4149_0_2 = {2, 0, 0, 0, 1, images_spacedreadnought_4149_0_2, 4};
static Animation anim_spacedreadnought_4149_0 = {&direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_1, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, &direction_spacedreadnought_4149_0_2, NULL, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0, &direction_spacedreadnought_4149_0_0};
static Animation * anim_array_spacedreadnought_4149[1] = {&anim_spacedreadnought_4149_0};
static Animations anim_spacedreadnought_4149 = {1, &anim_array_spacedreadnought_4149[0]};
static bool anim_spacedreadnought_4149_initialized;
class SpaceDreadnought_4149 : public Active
{
public:
    SpaceDreadnought_4149(int x, int y) : Active(x, y, SpaceDreadnought_4149_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Space_Dreadnought", 17);
#endif
        this->animations = &anim_spacedreadnought_4149;
        if (!anim_spacedreadnought_4149_initialized) {
            anim_spacedreadnought_4149_initialized = true;
            images_spacedreadnought_4149_0_0[0] = get_internal_image(7897);
            images_spacedreadnought_4149_0_0[1] = get_internal_image(7888);
            images_spacedreadnought_4149_0_0[2] = get_internal_image(7890);
            images_spacedreadnought_4149_0_0[3] = get_internal_image(7887);
            images_spacedreadnought_4149_0_1[0] = get_internal_image(7898);
            images_spacedreadnought_4149_0_1[1] = get_internal_image(7900);
            images_spacedreadnought_4149_0_1[2] = get_internal_image(7911);
            images_spacedreadnought_4149_0_1[3] = get_internal_image(7927);
            images_spacedreadnought_4149_0_2[0] = get_internal_image(7882);
            images_spacedreadnought_4149_0_2[1] = get_internal_image(7884);
            images_spacedreadnought_4149_0_2[2] = get_internal_image(7886);
            images_spacedreadnought_4149_0_2[3] = get_internal_image(7889);
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
FrameObject * create_spacedreadnought_4149(int x, int y)
{
    return new (Active::pool.create()) SpaceDreadnought_4149(x, y);
}
static Image* images_liftoffjet_4150_0_0[2];
static Direction direction_liftoffjet_4150_0_0 = {0, 50, 50, 0, -1, images_liftoffjet_4150_0_0, 2};
static Animation anim_liftoffjet_4150_0 = {&direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, NULL, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0, &direction_liftoffjet_4150_0_0};
static Animation * anim_array_liftoffjet_4150[1] = {&anim_liftoffjet_4150_0};
static Animations anim_liftoffjet_4150 = {1, &anim_array_liftoffjet_4150[0]};
static bool anim_liftoffjet_4150_initialized;
class LiftoffJet_4150 : public Active
{
public:
    LiftoffJet_4150(int x, int y) : Active(x, y, LiftoffJet_4150_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LiftoffJet", 10);
#endif
        this->animations = &anim_liftoffjet_4150;
        if (!anim_liftoffjet_4150_initialized) {
            anim_liftoffjet_4150_initialized = true;
            images_liftoffjet_4150_0_0[0] = get_internal_image(7935);
            images_liftoffjet_4150_0_0[1] = get_internal_image(8035);
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
FrameObject * create_liftoffjet_4150(int x, int y)
{
    return new (Active::pool.create()) LiftoffJet_4150(x, y);
}
static Image* images_shockwave_4151_0_0[1];
static Direction direction_shockwave_4151_0_0 = {0, 50, 50, 0, -1, images_shockwave_4151_0_0, 1};
static Image* images_shockwave_4151_0_8[18];
static Direction direction_shockwave_4151_0_8 = {8, 70, 70, 17, -1, images_shockwave_4151_0_8, 18};
static Animation anim_shockwave_4151_0 = {&direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, NULL, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, &direction_shockwave_4151_0_8, NULL, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0, &direction_shockwave_4151_0_0};
static Animation * anim_array_shockwave_4151[1] = {&anim_shockwave_4151_0};
static Animations anim_shockwave_4151 = {1, &anim_array_shockwave_4151[0]};
static bool anim_shockwave_4151_initialized;
class Shockwave_4151 : public Active
{
public:
    Shockwave_4151(int x, int y) : Active(x, y, Shockwave_4151_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shockwave", 9);
#endif
        set_visible(false);
        this->animations = &anim_shockwave_4151;
        if (!anim_shockwave_4151_initialized) {
            anim_shockwave_4151_initialized = true;
            images_shockwave_4151_0_0[0] = get_internal_image(7756);
            images_shockwave_4151_0_8[0] = get_internal_image(7756);
            images_shockwave_4151_0_8[1] = get_internal_image(7757);
            images_shockwave_4151_0_8[2] = get_internal_image(7760);
            images_shockwave_4151_0_8[3] = get_internal_image(7761);
            images_shockwave_4151_0_8[4] = get_internal_image(7762);
            images_shockwave_4151_0_8[5] = get_internal_image(7763);
            images_shockwave_4151_0_8[6] = get_internal_image(8090);
            images_shockwave_4151_0_8[7] = get_internal_image(8136);
            images_shockwave_4151_0_8[8] = get_internal_image(8141);
            images_shockwave_4151_0_8[9] = get_internal_image(8155);
            images_shockwave_4151_0_8[10] = get_internal_image(8164);
            images_shockwave_4151_0_8[11] = get_internal_image(8165);
            images_shockwave_4151_0_8[12] = get_internal_image(8242);
            images_shockwave_4151_0_8[13] = get_internal_image(8787);
            images_shockwave_4151_0_8[14] = get_internal_image(8802);
            images_shockwave_4151_0_8[15] = get_internal_image(8804);
            images_shockwave_4151_0_8[16] = get_internal_image(8805);
            images_shockwave_4151_0_8[17] = get_internal_image(11482);
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
FrameObject * create_shockwave_4151(int x, int y)
{
    return new (Active::pool.create()) Shockwave_4151(x, y);
}
static Image* images_enemyorb_4152_0_0[1];
static Direction direction_enemyorb_4152_0_0 = {0, 50, 50, 0, 1, images_enemyorb_4152_0_0, 1};
static Animation anim_enemyorb_4152_0 = {&direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, NULL, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0, &direction_enemyorb_4152_0_0};
static Animation * anim_array_enemyorb_4152[1] = {&anim_enemyorb_4152_0};
static Animations anim_enemyorb_4152 = {1, &anim_array_enemyorb_4152[0]};
static bool anim_enemyorb_4152_initialized;
class EnemyOrb_4152 : public Active
{
public:
    EnemyOrb_4152(int x, int y) : Active(x, y, EnemyOrb_4152_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Orb", 9);
#endif
        this->animations = &anim_enemyorb_4152;
        if (!anim_enemyorb_4152_initialized) {
            anim_enemyorb_4152_initialized = true;
            images_enemyorb_4152_0_0[0] = get_internal_image(13395);
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
FrameObject * create_enemyorb_4152(int x, int y)
{
    return new (Active::pool.create()) EnemyOrb_4152(x, y);
}
static Image* images_enemythundercarrier_4153_0_0[3];
static Direction direction_enemythundercarrier_4153_0_0 = {0, 50, 50, 0, -1, images_enemythundercarrier_4153_0_0, 3};
static Image* images_enemythundercarrier_4153_0_8[12];
static Direction direction_enemythundercarrier_4153_0_8 = {8, 90, 90, 0, -1, images_enemythundercarrier_4153_0_8, 12};
static Animation anim_enemythundercarrier_4153_0 = {&direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, NULL, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, &direction_enemythundercarrier_4153_0_8, NULL, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0, &direction_enemythundercarrier_4153_0_0};
static Animation * anim_array_enemythundercarrier_4153[1] = {&anim_enemythundercarrier_4153_0};
static Animations anim_enemythundercarrier_4153 = {1, &anim_array_enemythundercarrier_4153[0]};
static bool anim_enemythundercarrier_4153_initialized;
class EnemyThunderCarrier_4153 : public Active
{
public:
    EnemyThunderCarrier_4153(int x, int y) : Active(x, y, EnemyThunderCarrier_4153_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_ThunderCarrier", 20);
#endif
        this->animations = &anim_enemythundercarrier_4153;
        if (!anim_enemythundercarrier_4153_initialized) {
            anim_enemythundercarrier_4153_initialized = true;
            images_enemythundercarrier_4153_0_0[0] = get_internal_image(13484);
            images_enemythundercarrier_4153_0_0[1] = get_internal_image(13485);
            images_enemythundercarrier_4153_0_0[2] = get_internal_image(13486);
            images_enemythundercarrier_4153_0_8[0] = get_internal_image(13424);
            images_enemythundercarrier_4153_0_8[1] = get_internal_image(13431);
            images_enemythundercarrier_4153_0_8[2] = get_internal_image(11944);
            images_enemythundercarrier_4153_0_8[3] = get_internal_image(13432);
            images_enemythundercarrier_4153_0_8[4] = get_internal_image(13435);
            images_enemythundercarrier_4153_0_8[5] = get_internal_image(13434);
            images_enemythundercarrier_4153_0_8[6] = get_internal_image(13436);
            images_enemythundercarrier_4153_0_8[7] = get_internal_image(13437);
            images_enemythundercarrier_4153_0_8[8] = get_internal_image(13438);
            images_enemythundercarrier_4153_0_8[9] = get_internal_image(13439);
            images_enemythundercarrier_4153_0_8[10] = get_internal_image(13440);
            images_enemythundercarrier_4153_0_8[11] = get_internal_image(13441);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
        alterables->values.set(7, -4);
    }
};
FrameObject * create_enemythundercarrier_4153(int x, int y)
{
    return new (Active::pool.create()) EnemyThunderCarrier_4153(x, y);
}
static Image* images_enemythundercarrierarm_4154_0_0[9];
static Direction direction_enemythundercarrierarm_4154_0_0 = {0, 0, 0, 0, 1, images_enemythundercarrierarm_4154_0_0, 9};
static Animation anim_enemythundercarrierarm_4154_0 = {&direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, NULL, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0, &direction_enemythundercarrierarm_4154_0_0};
static Animation * anim_array_enemythundercarrierarm_4154[1] = {&anim_enemythundercarrierarm_4154_0};
static Animations anim_enemythundercarrierarm_4154 = {1, &anim_array_enemythundercarrierarm_4154[0]};
static bool anim_enemythundercarrierarm_4154_initialized;
class EnemyThunderCarrierArm_4154 : public Active
{
public:
    EnemyThunderCarrierArm_4154(int x, int y) : Active(x, y, EnemyThunderCarrierArm_4154_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_ThunderCarrierArm", 23);
#endif
        this->animations = &anim_enemythundercarrierarm_4154;
        if (!anim_enemythundercarrierarm_4154_initialized) {
            anim_enemythundercarrierarm_4154_initialized = true;
            images_enemythundercarrierarm_4154_0_0[0] = get_internal_image(13426);
            images_enemythundercarrierarm_4154_0_0[1] = get_internal_image(13425);
            images_enemythundercarrierarm_4154_0_0[2] = get_internal_image(13420);
            images_enemythundercarrierarm_4154_0_0[3] = get_internal_image(13427);
            images_enemythundercarrierarm_4154_0_0[4] = get_internal_image(13405);
            images_enemythundercarrierarm_4154_0_0[5] = get_internal_image(13427);
            images_enemythundercarrierarm_4154_0_0[6] = get_internal_image(13405);
            images_enemythundercarrierarm_4154_0_0[7] = get_internal_image(13428);
            images_enemythundercarrierarm_4154_0_0[8] = get_internal_image(13405);
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
FrameObject * create_enemythundercarrierarm_4154(int x, int y)
{
    return new (Active::pool.create()) EnemyThunderCarrierArm_4154(x, y);
}
static Image* images_playerfireball_4155_0_0[8];
static Direction direction_playerfireball_4155_0_0 = {0, 40, 40, 0, -1, images_playerfireball_4155_0_0, 8};
static Image* images_playerfireball_4155_0_1[4];
static Direction direction_playerfireball_4155_0_1 = {1, 50, 50, 0, -1, images_playerfireball_4155_0_1, 4};
static Image* images_playerfireball_4155_0_8[8];
static Direction direction_playerfireball_4155_0_8 = {8, 50, 50, 0, -1, images_playerfireball_4155_0_8, 8};
static Animation anim_playerfireball_4155_0 = {&direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_1, &direction_playerfireball_4155_0_1, &direction_playerfireball_4155_0_1, &direction_playerfireball_4155_0_1, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, &direction_playerfireball_4155_0_8, NULL, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0, &direction_playerfireball_4155_0_0};
static Animation * anim_array_playerfireball_4155[1] = {&anim_playerfireball_4155_0};
static Animations anim_playerfireball_4155 = {1, &anim_array_playerfireball_4155[0]};
static bool anim_playerfireball_4155_initialized;
class PlayerFireball_4155 : public Active
{
public:
    PlayerFireball_4155(int x, int y) : Active(x, y, PlayerFireball_4155_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Fireball", 15);
#endif
        this->animations = &anim_playerfireball_4155;
        if (!anim_playerfireball_4155_initialized) {
            anim_playerfireball_4155_initialized = true;
            images_playerfireball_4155_0_0[0] = get_internal_image(13504);
            images_playerfireball_4155_0_0[1] = get_internal_image(13505);
            images_playerfireball_4155_0_0[2] = get_internal_image(13506);
            images_playerfireball_4155_0_0[3] = get_internal_image(13507);
            images_playerfireball_4155_0_0[4] = get_internal_image(13508);
            images_playerfireball_4155_0_0[5] = get_internal_image(13509);
            images_playerfireball_4155_0_0[6] = get_internal_image(13510);
            images_playerfireball_4155_0_0[7] = get_internal_image(13511);
            images_playerfireball_4155_0_1[0] = get_internal_image(1976);
            images_playerfireball_4155_0_1[1] = get_internal_image(2998);
            images_playerfireball_4155_0_1[2] = get_internal_image(3164);
            images_playerfireball_4155_0_1[3] = get_internal_image(2998);
            images_playerfireball_4155_0_8[0] = get_internal_image(13488);
            images_playerfireball_4155_0_8[1] = get_internal_image(13489);
            images_playerfireball_4155_0_8[2] = get_internal_image(13490);
            images_playerfireball_4155_0_8[3] = get_internal_image(13491);
            images_playerfireball_4155_0_8[4] = get_internal_image(13492);
            images_playerfireball_4155_0_8[5] = get_internal_image(13493);
            images_playerfireball_4155_0_8[6] = get_internal_image(13494);
            images_playerfireball_4155_0_8[7] = get_internal_image(13495);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 8);
    }
};
FrameObject * create_playerfireball_4155(int x, int y)
{
    return new (Active::pool.create()) PlayerFireball_4155(x, y);
}
static Image* images_enemyufo_4156_0_0[6];
static Direction direction_enemyufo_4156_0_0 = {0, 90, 90, 0, -1, images_enemyufo_4156_0_0, 6};
static Image* images_enemyufo_4156_0_8[2];
static Direction direction_enemyufo_4156_0_8 = {8, 50, 50, 0, 1, images_enemyufo_4156_0_8, 2};
static Animation anim_enemyufo_4156_0 = {&direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, NULL, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, &direction_enemyufo_4156_0_8, NULL, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0, &direction_enemyufo_4156_0_0};
static Image* images_enemyufo_4156_7_0[3];
static Direction direction_enemyufo_4156_7_0 = {0, 50, 50, 0, -1, images_enemyufo_4156_7_0, 3};
static Animation anim_enemyufo_4156_7 = {&direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, NULL, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0, &direction_enemyufo_4156_7_0};
static Animation * anim_array_enemyufo_4156[8] = {&anim_enemyufo_4156_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyufo_4156_7};
static Animations anim_enemyufo_4156 = {8, &anim_array_enemyufo_4156[0]};
static bool anim_enemyufo_4156_initialized;
class EnemyUFO_4156 : public Active
{
public:
    EnemyUFO_4156(int x, int y) : Active(x, y, EnemyUFO_4156_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_UFO", 9);
#endif
        this->animations = &anim_enemyufo_4156;
        if (!anim_enemyufo_4156_initialized) {
            anim_enemyufo_4156_initialized = true;
            images_enemyufo_4156_0_0[0] = get_internal_image(7197);
            images_enemyufo_4156_0_0[1] = get_internal_image(13442);
            images_enemyufo_4156_0_0[2] = get_internal_image(13447);
            images_enemyufo_4156_0_0[3] = get_internal_image(13429);
            images_enemyufo_4156_0_0[4] = get_internal_image(13450);
            images_enemyufo_4156_0_0[5] = get_internal_image(13444);
            images_enemyufo_4156_0_8[0] = get_internal_image(13399);
            images_enemyufo_4156_0_8[1] = get_internal_image(13443);
            images_enemyufo_4156_7_0[0] = get_internal_image(13449);
            images_enemyufo_4156_7_0[1] = get_internal_image(13448);
            images_enemyufo_4156_7_0[2] = get_internal_image(13446);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(5, -3);
    }
};
FrameObject * create_enemyufo_4156(int x, int y)
{
    return new (Active::pool.create()) EnemyUFO_4156(x, y);
}
static Image* images_effectparticleabsorb_4157_0_0[3];
static Direction direction_effectparticleabsorb_4157_0_0 = {0, 50, 50, 0, -1, images_effectparticleabsorb_4157_0_0, 3};
static Animation anim_effectparticleabsorb_4157_0 = {&direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, NULL, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0, &direction_effectparticleabsorb_4157_0_0};
static Animation * anim_array_effectparticleabsorb_4157[1] = {&anim_effectparticleabsorb_4157_0};
static Animations anim_effectparticleabsorb_4157 = {1, &anim_array_effectparticleabsorb_4157[0]};
static bool anim_effectparticleabsorb_4157_initialized;
class EffectParticleAbsorb_4157 : public Active
{
public:
    EffectParticleAbsorb_4157(int x, int y) : Active(x, y, EffectParticleAbsorb_4157_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_ParticleAbsorb", 21);
#endif
        this->animations = &anim_effectparticleabsorb_4157;
        if (!anim_effectparticleabsorb_4157_initialized) {
            anim_effectparticleabsorb_4157_initialized = true;
            images_effectparticleabsorb_4157_0_0[0] = get_internal_image(13406);
            images_effectparticleabsorb_4157_0_0[1] = get_internal_image(13433);
            images_effectparticleabsorb_4157_0_0[2] = get_internal_image(13430);
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
FrameObject * create_effectparticleabsorb_4157(int x, int y)
{
    return new (Active::pool.create()) EffectParticleAbsorb_4157(x, y);
}
static Image* images_bosscancerforcelaser_4158_0_0[3];
static Direction direction_bosscancerforcelaser_4158_0_0 = {0, 90, 90, 0, -1, images_bosscancerforcelaser_4158_0_0, 3};
static Image* images_bosscancerforcelaser_4158_0_8[1];
static Direction direction_bosscancerforcelaser_4158_0_8 = {8, 50, 50, 0, 1, images_bosscancerforcelaser_4158_0_8, 1};
static Animation anim_bosscancerforcelaser_4158_0 = {&direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, NULL, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, &direction_bosscancerforcelaser_4158_0_8, NULL, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0, &direction_bosscancerforcelaser_4158_0_0};
static Animation * anim_array_bosscancerforcelaser_4158[1] = {&anim_bosscancerforcelaser_4158_0};
static Animations anim_bosscancerforcelaser_4158 = {1, &anim_array_bosscancerforcelaser_4158[0]};
static bool anim_bosscancerforcelaser_4158_initialized;
class BossCancerForceLaser_4158 : public Active
{
public:
    BossCancerForceLaser_4158(int x, int y) : Active(x, y, BossCancerForceLaser_4158_type)
    {
        // qualifiers: 6
#ifndef NDEBUG
        name = std::string("Boss_CancerForceLaser", 21);
#endif
        this->animations = &anim_bosscancerforcelaser_4158;
        if (!anim_bosscancerforcelaser_4158_initialized) {
            anim_bosscancerforcelaser_4158_initialized = true;
            images_bosscancerforcelaser_4158_0_0[0] = get_internal_image(13487);
            images_bosscancerforcelaser_4158_0_0[1] = get_internal_image(13496);
            images_bosscancerforcelaser_4158_0_0[2] = get_internal_image(13497);
            images_bosscancerforcelaser_4158_0_8[0] = get_internal_image(13498);
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
FrameObject * create_bosscancerforcelaser_4158(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceLaser_4158(x, y);
}
static Image* images_bosscancerforcedebris_4159_0_0[8];
static Direction direction_bosscancerforcedebris_4159_0_0 = {0, 0, 0, 0, 1, images_bosscancerforcedebris_4159_0_0, 8};
static Animation anim_bosscancerforcedebris_4159_0 = {&direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, NULL, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0, &direction_bosscancerforcedebris_4159_0_0};
static Animation * anim_array_bosscancerforcedebris_4159[1] = {&anim_bosscancerforcedebris_4159_0};
static Animations anim_bosscancerforcedebris_4159 = {1, &anim_array_bosscancerforcedebris_4159[0]};
static bool anim_bosscancerforcedebris_4159_initialized;
class BossCancerForceDebris_4159 : public Active
{
public:
    BossCancerForceDebris_4159(int x, int y) : Active(x, y, BossCancerForceDebris_4159_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceDebris", 22);
#endif
        this->animations = &anim_bosscancerforcedebris_4159;
        if (!anim_bosscancerforcedebris_4159_initialized) {
            anim_bosscancerforcedebris_4159_initialized = true;
            images_bosscancerforcedebris_4159_0_0[0] = get_internal_image(12660);
            images_bosscancerforcedebris_4159_0_0[1] = get_internal_image(12661);
            images_bosscancerforcedebris_4159_0_0[2] = get_internal_image(12675);
            images_bosscancerforcedebris_4159_0_0[3] = get_internal_image(12674);
            images_bosscancerforcedebris_4159_0_0[4] = get_internal_image(12677);
            images_bosscancerforcedebris_4159_0_0[5] = get_internal_image(12664);
            images_bosscancerforcedebris_4159_0_0[6] = get_internal_image(12665);
            images_bosscancerforcedebris_4159_0_0[7] = get_internal_image(12662);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(18, 0, 1, 2, 3, 4, 5, 11, 12, 13, 14, 15, 16, 17, 18, 19, 29, 30, 31));
        set_direction(pick_random(18, 0, 1, 2, 3, 4, 5, 11, 12, 13, 14, 15, 16, 17, 18, 19, 29, 30, 31));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(40);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(20);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_bosscancerforcedebris_4159(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceDebris_4159(x, y);
}
static Image* images_playerholodragonlaser_4160_0_0[5];
static Direction direction_playerholodragonlaser_4160_0_0 = {0, 50, 50, 0, -1, images_playerholodragonlaser_4160_0_0, 5};
static Animation anim_playerholodragonlaser_4160_0 = {&direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, NULL, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0, &direction_playerholodragonlaser_4160_0_0};
static Image* images_playerholodragonlaser_4160_7_8[2];
static Direction direction_playerholodragonlaser_4160_7_8 = {8, 100, 100, 0, -1, images_playerholodragonlaser_4160_7_8, 2};
static Animation anim_playerholodragonlaser_4160_7 = {&direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, NULL, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8, &direction_playerholodragonlaser_4160_7_8};
static Animation * anim_array_playerholodragonlaser_4160[8] = {&anim_playerholodragonlaser_4160_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerholodragonlaser_4160_7};
static Animations anim_playerholodragonlaser_4160 = {8, &anim_array_playerholodragonlaser_4160[0]};
static bool anim_playerholodragonlaser_4160_initialized;
class PlayerHolodragonLaser_4160 : public Active
{
public:
    PlayerHolodragonLaser_4160(int x, int y) : Active(x, y, PlayerHolodragonLaser_4160_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_HolodragonLaser", 22);
#endif
        this->animations = &anim_playerholodragonlaser_4160;
        if (!anim_playerholodragonlaser_4160_initialized) {
            anim_playerholodragonlaser_4160_initialized = true;
            images_playerholodragonlaser_4160_0_0[0] = get_internal_image(10653);
            images_playerholodragonlaser_4160_0_0[1] = get_internal_image(10654);
            images_playerholodragonlaser_4160_0_0[2] = get_internal_image(10655);
            images_playerholodragonlaser_4160_0_0[3] = get_internal_image(10654);
            images_playerholodragonlaser_4160_0_0[4] = get_internal_image(10656);
            images_playerholodragonlaser_4160_7_8[0] = get_internal_image(10728);
            images_playerholodragonlaser_4160_7_8[1] = get_internal_image(11055);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_playerholodragonlaser_4160(int x, int y)
{
    return new (Active::pool.create()) PlayerHolodragonLaser_4160(x, y);
}
static Image* images_effectspeedline_4161_0_0[1];
static Direction direction_effectspeedline_4161_0_0 = {0, 50, 50, 0, 1, images_effectspeedline_4161_0_0, 1};
static Animation anim_effectspeedline_4161_0 = {&direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, NULL, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0, &direction_effectspeedline_4161_0_0};
static Animation * anim_array_effectspeedline_4161[1] = {&anim_effectspeedline_4161_0};
static Animations anim_effectspeedline_4161 = {1, &anim_array_effectspeedline_4161[0]};
static bool anim_effectspeedline_4161_initialized;
class EffectSpeedLine_4161 : public Active
{
public:
    EffectSpeedLine_4161(int x, int y) : Active(x, y, EffectSpeedLine_4161_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_SpeedLine", 16);
#endif
        this->animations = &anim_effectspeedline_4161;
        if (!anim_effectspeedline_4161_initialized) {
            anim_effectspeedline_4161_initialized = true;
            images_effectspeedline_4161_0_0[0] = get_internal_image(13388);
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
FrameObject * create_effectspeedline_4161(int x, int y)
{
    return new (Active::pool.create()) EffectSpeedLine_4161(x, y);
}
static Image* images_enemyorb2_4162_0_0[1];
static Direction direction_enemyorb2_4162_0_0 = {0, 50, 50, 0, 1, images_enemyorb2_4162_0_0, 1};
static Animation anim_enemyorb2_4162_0 = {&direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, NULL, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0, &direction_enemyorb2_4162_0_0};
static Animation * anim_array_enemyorb2_4162[1] = {&anim_enemyorb2_4162_0};
static Animations anim_enemyorb2_4162 = {1, &anim_array_enemyorb2_4162[0]};
static bool anim_enemyorb2_4162_initialized;
class EnemyOrb2_4162 : public Active
{
public:
    EnemyOrb2_4162(int x, int y) : Active(x, y, EnemyOrb2_4162_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Orb 2", 11);
#endif
        this->animations = &anim_enemyorb2_4162;
        if (!anim_enemyorb2_4162_initialized) {
            anim_enemyorb2_4162_initialized = true;
            images_enemyorb2_4162_0_0[0] = get_internal_image(13390);
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
FrameObject * create_enemyorb2_4162(int x, int y)
{
    return new (Active::pool.create()) EnemyOrb2_4162(x, y);
}
static Image* images_syntax_4163_0_0[2];
static Direction direction_syntax_4163_0_0 = {0, 25, 25, 0, -1, images_syntax_4163_0_0, 2};
static Animation anim_syntax_4163_0 = {&direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, NULL, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0, &direction_syntax_4163_0_0};
static Animation * anim_array_syntax_4163[1] = {&anim_syntax_4163_0};
static Animations anim_syntax_4163 = {1, &anim_array_syntax_4163[0]};
static bool anim_syntax_4163_initialized;
class Syntax_4163 : public Active
{
public:
    Syntax_4163(int x, int y) : Active(x, y, Syntax_4163_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Syntax", 6);
#endif
        this->animations = &anim_syntax_4163;
        if (!anim_syntax_4163_initialized) {
            anim_syntax_4163_initialized = true;
            images_syntax_4163_0_0[0] = get_internal_image(13394);
            images_syntax_4163_0_0[1] = get_internal_image(13397);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 9999);
        alterables->values.set(5, -4);
    }
};
FrameObject * create_syntax_4163(int x, int y)
{
    return new (Active::pool.create()) Syntax_4163(x, y);
}
static Image* images_bosscancerforcehandtop_4164_0_0[1];
static Direction direction_bosscancerforcehandtop_4164_0_0 = {0, 50, 50, 0, 1, images_bosscancerforcehandtop_4164_0_0, 1};
static Image* images_bosscancerforcehandtop_4164_0_8[4];
static Direction direction_bosscancerforcehandtop_4164_0_8 = {8, 90, 90, 0, -1, images_bosscancerforcehandtop_4164_0_8, 4};
static Animation anim_bosscancerforcehandtop_4164_0 = {&direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, NULL, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, &direction_bosscancerforcehandtop_4164_0_8, NULL, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0, &direction_bosscancerforcehandtop_4164_0_0};
static Image* images_bosscancerforcehandtop_4164_7_0[2];
static Direction direction_bosscancerforcehandtop_4164_7_0 = {0, 50, 50, 0, -1, images_bosscancerforcehandtop_4164_7_0, 2};
static Animation anim_bosscancerforcehandtop_4164_7 = {&direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, NULL, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0, &direction_bosscancerforcehandtop_4164_7_0};
static Animation * anim_array_bosscancerforcehandtop_4164[8] = {&anim_bosscancerforcehandtop_4164_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforcehandtop_4164_7};
static Animations anim_bosscancerforcehandtop_4164 = {8, &anim_array_bosscancerforcehandtop_4164[0]};
static bool anim_bosscancerforcehandtop_4164_initialized;
class BossCancerForceHandTop_4164 : public Active
{
public:
    BossCancerForceHandTop_4164(int x, int y) : Active(x, y, BossCancerForceHandTop_4164_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceHandTop", 23);
#endif
        this->animations = &anim_bosscancerforcehandtop_4164;
        if (!anim_bosscancerforcehandtop_4164_initialized) {
            anim_bosscancerforcehandtop_4164_initialized = true;
            images_bosscancerforcehandtop_4164_0_0[0] = get_internal_image(13404);
            images_bosscancerforcehandtop_4164_0_8[0] = get_internal_image(13445);
            images_bosscancerforcehandtop_4164_0_8[1] = get_internal_image(13451);
            images_bosscancerforcehandtop_4164_0_8[2] = get_internal_image(13452);
            images_bosscancerforcehandtop_4164_0_8[3] = get_internal_image(13453);
            images_bosscancerforcehandtop_4164_7_0[0] = get_internal_image(13517);
            images_bosscancerforcehandtop_4164_7_0[1] = get_internal_image(13404);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 180);
    }
};
FrameObject * create_bosscancerforcehandtop_4164(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceHandTop_4164(x, y);
}
static Image* images_bosscancerforcehandbottom_4165_0_0[1];
static Direction direction_bosscancerforcehandbottom_4165_0_0 = {0, 50, 50, 0, 1, images_bosscancerforcehandbottom_4165_0_0, 1};
static Image* images_bosscancerforcehandbottom_4165_0_8[4];
static Direction direction_bosscancerforcehandbottom_4165_0_8 = {8, 90, 90, 0, -1, images_bosscancerforcehandbottom_4165_0_8, 4};
static Animation anim_bosscancerforcehandbottom_4165_0 = {&direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, NULL, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, &direction_bosscancerforcehandbottom_4165_0_8, NULL, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0, &direction_bosscancerforcehandbottom_4165_0_0};
static Image* images_bosscancerforcehandbottom_4165_7_0[2];
static Direction direction_bosscancerforcehandbottom_4165_7_0 = {0, 50, 50, 0, -1, images_bosscancerforcehandbottom_4165_7_0, 2};
static Animation anim_bosscancerforcehandbottom_4165_7 = {&direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, NULL, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0, &direction_bosscancerforcehandbottom_4165_7_0};
static Animation * anim_array_bosscancerforcehandbottom_4165[8] = {&anim_bosscancerforcehandbottom_4165_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforcehandbottom_4165_7};
static Animations anim_bosscancerforcehandbottom_4165 = {8, &anim_array_bosscancerforcehandbottom_4165[0]};
static bool anim_bosscancerforcehandbottom_4165_initialized;
class BossCancerForceHandBottom_4165 : public Active
{
public:
    BossCancerForceHandBottom_4165(int x, int y) : Active(x, y, BossCancerForceHandBottom_4165_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceHandBottom", 26);
#endif
        this->animations = &anim_bosscancerforcehandbottom_4165;
        if (!anim_bosscancerforcehandbottom_4165_initialized) {
            anim_bosscancerforcehandbottom_4165_initialized = true;
            images_bosscancerforcehandbottom_4165_0_0[0] = get_internal_image(13404);
            images_bosscancerforcehandbottom_4165_0_8[0] = get_internal_image(13445);
            images_bosscancerforcehandbottom_4165_0_8[1] = get_internal_image(13451);
            images_bosscancerforcehandbottom_4165_0_8[2] = get_internal_image(13452);
            images_bosscancerforcehandbottom_4165_0_8[3] = get_internal_image(13453);
            images_bosscancerforcehandbottom_4165_7_0[0] = get_internal_image(13517);
            images_bosscancerforcehandbottom_4165_7_0[1] = get_internal_image(13404);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 180);
    }
};
FrameObject * create_bosscancerforcehandbottom_4165(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceHandBottom_4165(x, y);
}
static Image* images_bosscancerforceclawtop1_4166_0_0[1];
static Direction direction_bosscancerforceclawtop1_4166_0_0 = {0, 50, 50, 0, 1, images_bosscancerforceclawtop1_4166_0_0, 1};
static Animation anim_bosscancerforceclawtop1_4166_0 = {&direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, NULL, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0, &direction_bosscancerforceclawtop1_4166_0_0};
static Image* images_bosscancerforceclawtop1_4166_7_0[2];
static Direction direction_bosscancerforceclawtop1_4166_7_0 = {0, 50, 50, 0, -1, images_bosscancerforceclawtop1_4166_7_0, 2};
static Animation anim_bosscancerforceclawtop1_4166_7 = {&direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, NULL, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0, &direction_bosscancerforceclawtop1_4166_7_0};
static Animation * anim_array_bosscancerforceclawtop1_4166[8] = {&anim_bosscancerforceclawtop1_4166_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforceclawtop1_4166_7};
static Animations anim_bosscancerforceclawtop1_4166 = {8, &anim_array_bosscancerforceclawtop1_4166[0]};
static bool anim_bosscancerforceclawtop1_4166_initialized;
class BossCancerForceClawTop1_4166 : public Active
{
public:
    BossCancerForceClawTop1_4166(int x, int y) : Active(x, y, BossCancerForceClawTop1_4166_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceClawTop 1", 25);
#endif
        this->animations = &anim_bosscancerforceclawtop1_4166;
        if (!anim_bosscancerforceclawtop1_4166_initialized) {
            anim_bosscancerforceclawtop1_4166_initialized = true;
            images_bosscancerforceclawtop1_4166_0_0[0] = get_internal_image(13454);
            images_bosscancerforceclawtop1_4166_7_0[0] = get_internal_image(13516);
            images_bosscancerforceclawtop1_4166_7_0[1] = get_internal_image(13454);
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
FrameObject * create_bosscancerforceclawtop1_4166(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceClawTop1_4166(x, y);
}
static Image* images_bosscancerforceclawbottom1_4167_0_0[1];
static Direction direction_bosscancerforceclawbottom1_4167_0_0 = {0, 50, 50, 0, 1, images_bosscancerforceclawbottom1_4167_0_0, 1};
static Animation anim_bosscancerforceclawbottom1_4167_0 = {&direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, NULL, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0, &direction_bosscancerforceclawbottom1_4167_0_0};
static Image* images_bosscancerforceclawbottom1_4167_7_0[2];
static Direction direction_bosscancerforceclawbottom1_4167_7_0 = {0, 50, 50, 0, -1, images_bosscancerforceclawbottom1_4167_7_0, 2};
static Animation anim_bosscancerforceclawbottom1_4167_7 = {&direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, NULL, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0, &direction_bosscancerforceclawbottom1_4167_7_0};
static Animation * anim_array_bosscancerforceclawbottom1_4167[8] = {&anim_bosscancerforceclawbottom1_4167_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforceclawbottom1_4167_7};
static Animations anim_bosscancerforceclawbottom1_4167 = {8, &anim_array_bosscancerforceclawbottom1_4167[0]};
static bool anim_bosscancerforceclawbottom1_4167_initialized;
class BossCancerForceClawBottom1_4167 : public Active
{
public:
    BossCancerForceClawBottom1_4167(int x, int y) : Active(x, y, BossCancerForceClawBottom1_4167_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceClawBottom 1", 28);
#endif
        this->animations = &anim_bosscancerforceclawbottom1_4167;
        if (!anim_bosscancerforceclawbottom1_4167_initialized) {
            anim_bosscancerforceclawbottom1_4167_initialized = true;
            images_bosscancerforceclawbottom1_4167_0_0[0] = get_internal_image(13454);
            images_bosscancerforceclawbottom1_4167_7_0[0] = get_internal_image(13516);
            images_bosscancerforceclawbottom1_4167_7_0[1] = get_internal_image(13454);
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
FrameObject * create_bosscancerforceclawbottom1_4167(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceClawBottom1_4167(x, y);
}
static Image* images_bosscancerforceclawtop2_4168_0_0[1];
static Direction direction_bosscancerforceclawtop2_4168_0_0 = {0, 50, 50, 0, 1, images_bosscancerforceclawtop2_4168_0_0, 1};
static Animation anim_bosscancerforceclawtop2_4168_0 = {&direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, NULL, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0, &direction_bosscancerforceclawtop2_4168_0_0};
static Image* images_bosscancerforceclawtop2_4168_7_0[2];
static Direction direction_bosscancerforceclawtop2_4168_7_0 = {0, 50, 50, 0, -1, images_bosscancerforceclawtop2_4168_7_0, 2};
static Animation anim_bosscancerforceclawtop2_4168_7 = {&direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, NULL, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0, &direction_bosscancerforceclawtop2_4168_7_0};
static Animation * anim_array_bosscancerforceclawtop2_4168[8] = {&anim_bosscancerforceclawtop2_4168_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforceclawtop2_4168_7};
static Animations anim_bosscancerforceclawtop2_4168 = {8, &anim_array_bosscancerforceclawtop2_4168[0]};
static bool anim_bosscancerforceclawtop2_4168_initialized;
class BossCancerForceClawTop2_4168 : public Active
{
public:
    BossCancerForceClawTop2_4168(int x, int y) : Active(x, y, BossCancerForceClawTop2_4168_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceClawTop 2", 25);
#endif
        this->animations = &anim_bosscancerforceclawtop2_4168;
        if (!anim_bosscancerforceclawtop2_4168_initialized) {
            anim_bosscancerforceclawtop2_4168_initialized = true;
            images_bosscancerforceclawtop2_4168_0_0[0] = get_internal_image(13478);
            images_bosscancerforceclawtop2_4168_7_0[0] = get_internal_image(13502);
            images_bosscancerforceclawtop2_4168_7_0[1] = get_internal_image(13478);
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
FrameObject * create_bosscancerforceclawtop2_4168(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceClawTop2_4168(x, y);
}
static Image* images_bosscancerforceclawbottom2_4169_0_0[1];
static Direction direction_bosscancerforceclawbottom2_4169_0_0 = {0, 50, 50, 0, 1, images_bosscancerforceclawbottom2_4169_0_0, 1};
static Animation anim_bosscancerforceclawbottom2_4169_0 = {&direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, NULL, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0, &direction_bosscancerforceclawbottom2_4169_0_0};
static Image* images_bosscancerforceclawbottom2_4169_7_0[2];
static Direction direction_bosscancerforceclawbottom2_4169_7_0 = {0, 50, 50, 0, -1, images_bosscancerforceclawbottom2_4169_7_0, 2};
static Animation anim_bosscancerforceclawbottom2_4169_7 = {&direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, NULL, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0, &direction_bosscancerforceclawbottom2_4169_7_0};
static Animation * anim_array_bosscancerforceclawbottom2_4169[8] = {&anim_bosscancerforceclawbottom2_4169_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforceclawbottom2_4169_7};
static Animations anim_bosscancerforceclawbottom2_4169 = {8, &anim_array_bosscancerforceclawbottom2_4169[0]};
static bool anim_bosscancerforceclawbottom2_4169_initialized;
class BossCancerForceClawBottom2_4169 : public Active
{
public:
    BossCancerForceClawBottom2_4169(int x, int y) : Active(x, y, BossCancerForceClawBottom2_4169_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_CancerForceClawBottom 2", 28);
#endif
        this->animations = &anim_bosscancerforceclawbottom2_4169;
        if (!anim_bosscancerforceclawbottom2_4169_initialized) {
            anim_bosscancerforceclawbottom2_4169_initialized = true;
            images_bosscancerforceclawbottom2_4169_0_0[0] = get_internal_image(13478);
            images_bosscancerforceclawbottom2_4169_7_0[0] = get_internal_image(13502);
            images_bosscancerforceclawbottom2_4169_7_0[1] = get_internal_image(13478);
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
FrameObject * create_bosscancerforceclawbottom2_4169(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceClawBottom2_4169(x, y);
}
static Image* images_bosscancerforcehead_4170_0_0[8];
static Direction direction_bosscancerforcehead_4170_0_0 = {0, 0, 0, 0, 1, images_bosscancerforcehead_4170_0_0, 8};
static Image* images_bosscancerforcehead_4170_0_1[8];
static Direction direction_bosscancerforcehead_4170_0_1 = {1, 0, 0, 0, 1, images_bosscancerforcehead_4170_0_1, 8};
static Animation anim_bosscancerforcehead_4170_0 = {&direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_1, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0, &direction_bosscancerforcehead_4170_0_0};
static Image* images_bosscancerforcehead_4170_7_0[2];
static Direction direction_bosscancerforcehead_4170_7_0 = {0, 50, 50, 0, -1, images_bosscancerforcehead_4170_7_0, 2};
static Animation anim_bosscancerforcehead_4170_7 = {&direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, NULL, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0, &direction_bosscancerforcehead_4170_7_0};
static Animation * anim_array_bosscancerforcehead_4170[8] = {&anim_bosscancerforcehead_4170_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosscancerforcehead_4170_7};
static Animations anim_bosscancerforcehead_4170 = {8, &anim_array_bosscancerforcehead_4170[0]};
static bool anim_bosscancerforcehead_4170_initialized;
class BossCancerForceHead_4170 : public Active
{
public:
    BossCancerForceHead_4170(int x, int y) : Active(x, y, BossCancerForceHead_4170_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_CancerForceHead", 20);
#endif
        this->animations = &anim_bosscancerforcehead_4170;
        if (!anim_bosscancerforcehead_4170_initialized) {
            anim_bosscancerforcehead_4170_initialized = true;
            images_bosscancerforcehead_4170_0_0[0] = get_internal_image(13515);
            images_bosscancerforcehead_4170_0_0[1] = get_internal_image(13514);
            images_bosscancerforcehead_4170_0_0[2] = get_internal_image(13513);
            images_bosscancerforcehead_4170_0_0[3] = get_internal_image(13512);
            images_bosscancerforcehead_4170_0_0[4] = get_internal_image(13503);
            images_bosscancerforcehead_4170_0_0[5] = get_internal_image(13501);
            images_bosscancerforcehead_4170_0_0[6] = get_internal_image(13500);
            images_bosscancerforcehead_4170_0_0[7] = get_internal_image(13499);
            images_bosscancerforcehead_4170_0_1[0] = get_internal_image(13479);
            images_bosscancerforcehead_4170_0_1[1] = get_internal_image(2843);
            images_bosscancerforcehead_4170_0_1[2] = get_internal_image(3303);
            images_bosscancerforcehead_4170_0_1[3] = get_internal_image(3309);
            images_bosscancerforcehead_4170_0_1[4] = get_internal_image(3310);
            images_bosscancerforcehead_4170_0_1[5] = get_internal_image(3313);
            images_bosscancerforcehead_4170_0_1[6] = get_internal_image(3315);
            images_bosscancerforcehead_4170_0_1[7] = get_internal_image(3849);
            images_bosscancerforcehead_4170_7_0[0] = get_internal_image(13479);
            images_bosscancerforcehead_4170_7_0[1] = get_internal_image(13515);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1200);
        alterables->values.set(6, 1);
        alterables->values.set(11, -60);
        alterables->values.set(12, 1200);
    }
};
FrameObject * create_bosscancerforcehead_4170(int x, int y)
{
    return new (Active::pool.create()) BossCancerForceHead_4170(x, y);
}
static Image* images_playerairplane_4171_0_0[4];
static Direction direction_playerairplane_4171_0_0 = {0, 50, 50, 0, -1, images_playerairplane_4171_0_0, 4};
static Image* images_playerairplane_4171_0_1[4];
static Direction direction_playerairplane_4171_0_1 = {1, 50, 50, 0, -1, images_playerairplane_4171_0_1, 4};
static Image* images_playerairplane_4171_0_2[4];
static Direction direction_playerairplane_4171_0_2 = {2, 50, 50, 0, -1, images_playerairplane_4171_0_2, 4};
static Image* images_playerairplane_4171_0_30[4];
static Direction direction_playerairplane_4171_0_30 = {30, 50, 50, 0, -1, images_playerairplane_4171_0_30, 4};
static Image* images_playerairplane_4171_0_31[4];
static Direction direction_playerairplane_4171_0_31 = {31, 50, 50, 0, -1, images_playerairplane_4171_0_31, 4};
static Animation anim_playerairplane_4171_0 = {&direction_playerairplane_4171_0_0, &direction_playerairplane_4171_0_1, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, &direction_playerairplane_4171_0_2, NULL, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_30, &direction_playerairplane_4171_0_31};
static Image* images_playerairplane_4171_7_0[4];
static Direction direction_playerairplane_4171_7_0 = {0, 50, 50, 0, -1, images_playerairplane_4171_7_0, 4};
static Image* images_playerairplane_4171_7_1[4];
static Direction direction_playerairplane_4171_7_1 = {1, 50, 50, 0, -1, images_playerairplane_4171_7_1, 4};
static Image* images_playerairplane_4171_7_2[4];
static Direction direction_playerairplane_4171_7_2 = {2, 50, 50, 0, -1, images_playerairplane_4171_7_2, 4};
static Image* images_playerairplane_4171_7_24[4];
static Direction direction_playerairplane_4171_7_24 = {24, 50, 50, 0, -1, images_playerairplane_4171_7_24, 4};
static Image* images_playerairplane_4171_7_30[4];
static Direction direction_playerairplane_4171_7_30 = {30, 50, 50, 0, -1, images_playerairplane_4171_7_30, 4};
static Image* images_playerairplane_4171_7_31[4];
static Direction direction_playerairplane_4171_7_31 = {31, 50, 50, 0, -1, images_playerairplane_4171_7_31, 4};
static Animation anim_playerairplane_4171_7 = {&direction_playerairplane_4171_7_0, &direction_playerairplane_4171_7_1, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, &direction_playerairplane_4171_7_2, NULL, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, &direction_playerairplane_4171_7_24, NULL, &direction_playerairplane_4171_7_30, &direction_playerairplane_4171_7_30, &direction_playerairplane_4171_7_30, &direction_playerairplane_4171_7_31};
static Animation * anim_array_playerairplane_4171[8] = {&anim_playerairplane_4171_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_playerairplane_4171_7};
static Animations anim_playerairplane_4171 = {8, &anim_array_playerairplane_4171[0]};
static bool anim_playerairplane_4171_initialized;
class PlayerAirplane_4171 : public Active
{
public:
    PlayerAirplane_4171(int x, int y) : Active(x, y, PlayerAirplane_4171_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Airplane", 15);
#endif
        this->animations = &anim_playerairplane_4171;
        if (!anim_playerairplane_4171_initialized) {
            anim_playerairplane_4171_initialized = true;
            images_playerairplane_4171_0_0[0] = get_internal_image(6965);
            images_playerairplane_4171_0_0[1] = get_internal_image(6969);
            images_playerairplane_4171_0_0[2] = get_internal_image(8422);
            images_playerairplane_4171_0_0[3] = get_internal_image(7045);
            images_playerairplane_4171_0_1[0] = get_internal_image(8318);
            images_playerairplane_4171_0_1[1] = get_internal_image(8421);
            images_playerairplane_4171_0_1[2] = get_internal_image(8426);
            images_playerairplane_4171_0_1[3] = get_internal_image(8425);
            images_playerairplane_4171_0_2[0] = get_internal_image(8319);
            images_playerairplane_4171_0_2[1] = get_internal_image(8939);
            images_playerairplane_4171_0_2[2] = get_internal_image(8430);
            images_playerairplane_4171_0_2[3] = get_internal_image(8431);
            images_playerairplane_4171_0_30[0] = get_internal_image(7766);
            images_playerairplane_4171_0_30[1] = get_internal_image(8434);
            images_playerairplane_4171_0_30[2] = get_internal_image(8974);
            images_playerairplane_4171_0_30[3] = get_internal_image(8435);
            images_playerairplane_4171_0_31[0] = get_internal_image(8320);
            images_playerairplane_4171_0_31[1] = get_internal_image(8321);
            images_playerairplane_4171_0_31[2] = get_internal_image(8347);
            images_playerairplane_4171_0_31[3] = get_internal_image(8359);
            images_playerairplane_4171_7_0[0] = get_internal_image(6973);
            images_playerairplane_4171_7_0[1] = get_internal_image(7979);
            images_playerairplane_4171_7_0[2] = get_internal_image(7987);
            images_playerairplane_4171_7_0[3] = get_internal_image(7767);
            images_playerairplane_4171_7_1[0] = get_internal_image(6758);
            images_playerairplane_4171_7_1[1] = get_internal_image(8146);
            images_playerairplane_4171_7_1[2] = get_internal_image(8200);
            images_playerairplane_4171_7_1[3] = get_internal_image(8258);
            images_playerairplane_4171_7_2[0] = get_internal_image(6763);
            images_playerairplane_4171_7_2[1] = get_internal_image(8154);
            images_playerairplane_4171_7_2[2] = get_internal_image(8201);
            images_playerairplane_4171_7_2[3] = get_internal_image(8257);
            images_playerairplane_4171_7_24[0] = get_internal_image(6965);
            images_playerairplane_4171_7_24[1] = get_internal_image(6969);
            images_playerairplane_4171_7_24[2] = get_internal_image(7023);
            images_playerairplane_4171_7_24[3] = get_internal_image(7045);
            images_playerairplane_4171_7_30[0] = get_internal_image(7972);
            images_playerairplane_4171_7_30[1] = get_internal_image(8197);
            images_playerairplane_4171_7_30[2] = get_internal_image(8198);
            images_playerairplane_4171_7_30[3] = get_internal_image(8256);
            images_playerairplane_4171_7_31[0] = get_internal_image(6764);
            images_playerairplane_4171_7_31[1] = get_internal_image(8179);
            images_playerairplane_4171_7_31[2] = get_internal_image(8199);
            images_playerairplane_4171_7_31[3] = get_internal_image(8255);
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
FrameObject * create_playerairplane_4171(int x, int y)
{
    return new (Active::pool.create()) PlayerAirplane_4171(x, y);
}
class GUIDistance_4172 : public Counter
{
public:
    GUIDistance_4172(int x, int y) : Counter(x, y, GUIDistance_4172_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Distance", 12);
#endif
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
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9999;
        set(6000);
    }
};
FrameObject * create_guidistance_4172(int x, int y)
{
    return new (Counter::pool.create()) GUIDistance_4172(x, y);
}
static Image* images_guimeters_4173_0_0[1];
static Direction direction_guimeters_4173_0_0 = {0, 50, 50, 0, 1, images_guimeters_4173_0_0, 1};
static Image* images_guimeters_4173_0_8[1];
static Direction direction_guimeters_4173_0_8 = {8, 50, 50, 0, 1, images_guimeters_4173_0_8, 1};
static Animation anim_guimeters_4173_0 = {&direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, NULL, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, &direction_guimeters_4173_0_8, NULL, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0, &direction_guimeters_4173_0_0};
static Animation * anim_array_guimeters_4173[1] = {&anim_guimeters_4173_0};
static Animations anim_guimeters_4173 = {1, &anim_array_guimeters_4173[0]};
static bool anim_guimeters_4173_initialized;
class GUIMeters_4173 : public Active
{
public:
    GUIMeters_4173(int x, int y) : Active(x, y, GUIMeters_4173_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Meters", 10);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_guimeters_4173;
        if (!anim_guimeters_4173_initialized) {
            anim_guimeters_4173_initialized = true;
            images_guimeters_4173_0_0[0] = get_internal_image(13393);
            images_guimeters_4173_0_8[0] = get_internal_image(11926);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5920);
        alterables->values.set(1, 5500);
        alterables->values.set(2, 3800);
        alterables->values.set(3, 4200);
        alterables->values.set(4, 2000);
        alterables->values.set(5, 1025);
    }
};
FrameObject * create_guimeters_4173(int x, int y)
{
    return new (Active::pool.create()) GUIMeters_4173(x, y);
}
class SubtitleData_4174 : public Text
{
public:
    SubtitleData_4174(int x, int y) : Text(x, y, SubtitleData_4174_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("ZAO: Alright. While you're driving my tank, I only have two rules...", 68));
        add_line(std::string("ZAO: Aim... and fire!", 21));
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
FrameObject * create_subtitledata_4174(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_4174(x, y);
}
class QuickBackdrop_4175 : public QuickBackdrop
{
public:
    QuickBackdrop_4175(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 855;
        image = get_internal_image(4791);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_4175(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_4175(x, y);
}
class QuickBackdrop2_4176 : public QuickBackdrop
{
public:
    QuickBackdrop2_4176(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 240;
        image = get_internal_image(6803);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_4176(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_4176(x, y);
}
class QuickBackdrop3_4177 : public QuickBackdrop
{
public:
    QuickBackdrop3_4177(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 3", 16);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 480;
        image = get_internal_image(11118);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop3_4177(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop3_4177(x, y);
}
class IntroSky_4178 : public Backdrop
{
public:
    IntroSky_4178(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("IntroSky", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7515);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_introsky_4178(int x, int y)
{
    return new (Backdrop::pool.create()) IntroSky_4178(x, y);
}
class CreditsClouds2_4180 : public SystemBox
{
public:
    CreditsClouds2_4180(int x, int y) : SystemBox(x, y, CreditsClouds2_4180_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Credits_Clouds 2", 16);
#endif
        flags |= BACKGROUND;
        width = 192;
        height = 297;
        type = PATTERN_IMAGE;
        image = get_internal_image(6802);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_creditsclouds2_4180(int x, int y)
{
    return new (SystemBox::pool.create()) CreditsClouds2_4180(x, y);
}
class CreditsClouds4_4181 : public SystemBox
{
public:
    CreditsClouds4_4181(int x, int y) : SystemBox(x, y, CreditsClouds4_4181_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Credits_Clouds 4", 16);
#endif
        flags |= BACKGROUND;
        width = 192;
        height = 297;
        type = PATTERN_IMAGE;
        image = get_internal_image(6805);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_creditsclouds4_4181(int x, int y)
{
    return new (SystemBox::pool.create()) CreditsClouds4_4181(x, y);
}
class CreditsClouds1_4182 : public SystemBox
{
public:
    CreditsClouds1_4182(int x, int y) : SystemBox(x, y, CreditsClouds1_4182_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Credits_Clouds 1", 16);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 594;
        type = PATTERN_IMAGE;
        image = get_internal_image(6748);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_creditsclouds1_4182(int x, int y)
{
    return new (SystemBox::pool.create()) CreditsClouds1_4182(x, y);
}
class CreditsClouds3_4183 : public SystemBox
{
public:
    CreditsClouds3_4183(int x, int y) : SystemBox(x, y, CreditsClouds3_4183_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Credits_Clouds 3", 16);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 594;
        type = PATTERN_IMAGE;
        image = get_internal_image(6804);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_creditsclouds3_4183(int x, int y)
{
    return new (SystemBox::pool.create()) CreditsClouds3_4183(x, y);
}
static Image* images_active_4184_0_0[1];
static Direction direction_active_4184_0_0 = {0, 50, 50, 0, 1, images_active_4184_0_0, 1};
static Animation anim_active_4184_0 = {&direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, NULL, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0, &direction_active_4184_0_0};
static Animation * anim_array_active_4184[1] = {&anim_active_4184_0};
static Animations anim_active_4184 = {1, &anim_array_active_4184[0]};
static bool anim_active_4184_initialized;
class Active_4184 : public Active
{
public:
    Active_4184(int x, int y) : Active(x, y, Active_4184_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_active_4184;
        if (!anim_active_4184_initialized) {
            anim_active_4184_initialized = true;
            images_active_4184_0_0[0] = get_internal_image(1195);
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
FrameObject * create_active_4184(int x, int y)
{
    return new (Active::pool.create()) Active_4184(x, y);
}
class CreditsList_4185 : public Text
{
public:
    CreditsList_4185(int x, int y) : Text(x, y, CreditsList_4185_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Credits_List", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("                   CAST\r\n          (in order of appearance)\r\n\r\n\r\n\r\n\r\n\r\nLord Brevon             Alexander Normandy\r\n\r\n\r\n\r\n\r\nKing of Shuigang        Jason Lord\r\n\r\n\r\n\r\n\r\nPrince Dail             Sean Chiplock\r\n\r\n\r\n\r\n\r\nThe Royal Magister      Edwyn Tiong\r\n\r\n\r\n\r\n\r\nLilac                   Dawn Michelle Bennett\r\n\r\n\r\n\r\n\r\nCarol                   Amanda Lott\r\n\r\n\r\n\r\n\r\nSerpentine              Jason Lord\r\n\r\n\r\n\r\n\r\nTorque                  Patrick Seymour\r\n\r\n\r\n\r\n\r\nGeneral Gong            Jason Lord\r\n\r\n\r\n\r\n\r\nNeera Li                Ashlyn Selich\r\n\r\n\r\n\r\n\r\nSpade                   Sean Chiplock\r\n\r\n\r\n\r\n\r\nMilla                   Aimee Smith\r\n\r\n\r\n\r\n\r\nBird Officer            Stephen DiDuro\r\n\r\n\r\n\r\n\r\nSyntax                  Victoria Vitti\r\n\r\n\r\n\r\n\r\nMayor Zao               Alejandro Saab\r\n\r\n\r\n\r\n\r\nRogue Warrior           Patrick Seymour\r\n\r\n\r\n\r\n\r\nScientist               Edwyn Tiong\r\n\r\n\r\n                 PIXEL ART\r\n                Carl Douglas\r\n               Matthew Weekes\r\n               PicsAndPixels\r\n               Stephen DiDuro\r\n\r\n\r\n            ADDITIONAL ARTWORK\r\n               Arnaud Tegny\r\n              Estela Gonzalez\r\n               Gashi-Gashi\r\n               Jordan Lange\r\n\r\n\r\n                   MUSIC\r\n       Leila Wilson, a.k.a. \"Woofle\"\r\n     Shane Ellis, a.k.a. \"Blue Warrior\"\r\n             Stephen DiDuro\r\n featuring vocals by Dawn Michelle Bennett\r\n\r\n\r\n               SOUND DESIGN\r\n               Akash Thakkar\r\n               Jordan Lange\r\n\r\n\r\n                 PHYSICS\r\n                 Damizean\r\n                 LarkSS\r\n                 MCKaosu\r\n\r\n\r\n          ADDITIONAL PROGRAMMING\r\n            Sara Jessica Leen", 1621));
        add_line(std::string("                 TESTING\r\nAdam C. Rauh            Adrian \"HDL\" Perez\r\nAlexander Killengray    Alexandre Peres\r\nAlexcee                 April Summers\r\nAzurestarline           Azurexdragon\r\nBeau Worth              Bloodknight\r\nBluecaterpillar         Buster918\r\nBrian Minner            Briand Christophe\r\nCandescence             Chris \"Chizu\" Green\r\nChristopher Lee         Cyphir\r\nDahel                   Daniel Herrera\r\nDarian Gonzalez         Darkdetective\r\nDouhneill               Dracheritter\r\nGalufBlackMage          Gearbox\r\nGratisaritor            Gunblazer 42\r\nHilmir Orn Hilmisson    Huw Adams\r\nHuzal                   J5\r\nJared Langlois          Joe Tennent\r\nKabopple                Katie Anderson\r\nKorv3k                  Loleriz\r\nLupusam                 Mabmoro\r\nMark Sargent            MCKaosu\r\nMerkules                Metaltyrant\r\nMichael James Pedroso   Nathan Lindstrom\r\nn00neimp0rtant          Odongdong\r\nOlivia Martin           Paulus1000\r\nPhantom Hammertoes      QuinnEbert\r\nRarefoil                Reika154\r\nRobert Altoft           Rodolfo Arizmendi\r\nRodrigopio              R.S. McClain\r\nSagy941                 Sara Jessica Leen\r\nScialytic               Sean Willis\r\nSharkbait               Shiva\r\nSlyshishigami           SouthernCross\r\nSparks                  Stickman27\r\nSykodiamond             Talaan99\r\nTechokami               TheAncientWolf\r\nThe Butter Dragon       Theodore Trevor\r\nThiago C. \"maxi\"        Thomas Igoe\r\nThrasher08              Tiller\r\nTristan Turner          Tsonux\r\nVanyalosswen            Vauche\r\nVexusversion            VizardJeffhog\r\nWaffletiger             William Copley\r\nWilliam Heileman        Zero211\r\n\r\n\r\n      And an extra big Thank You to all\r\n      1,105 of our Kickstarter backers!\r\n\r\n\r\n               SPECIAL THANKS\r\n                 Clickteam\r\n               Celestial Tien\r\n               Falk Au Yeong\r\n                Aimee Smith\r\n                KaggyFilms\r\n             Alexander Normandy\r\n           Dawn Michelle Bennett\r\n                 Jason Lord\r\n              Patrick Seymour\r\n               Sean Chiplock\r\n               Victoria Vitti\r\n                Leila Wilson\r\n             Sara Jessica Leen\r\n               Jordan Lange\r\n                 MegaGWolf\r\n                Pause/Break\r\n                Gigaboots\r\n                  Sparks\r\n                 Kiwiggle\r\n                Ziyo Ling\r\n               Sonic Retro\r\n                  SFGHQ\r\n                TIGSource\r\n                 IndieDB\r\n             Florida Supercon\r\n              Indie Game Mag\r\n                  Valve\r\n\r\n\r\n               ...AND YOU!", 2586));
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
FrameObject * create_creditslist_4185(int x, int y)
{
    return new (Text::pool.create()) CreditsList_4185(x, y);
}
class Message_4186 : public TextBlitter
{
public:
    Message_4186(int x, int y) : TextBlitter(x, y, Message_4186_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message", 7);
#endif
        width = 360;
        height = 2500;
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
        set_text(std::string("                   CAST\r\n          (in order of appearance)\r\n\r\n\r\n\r\n\r\n\r\nLord Brevon             Alexander Normandy\r\n\r\n\r\n\r\n\r\nKing of Shuigang        Jason Lord\r\n\r\n\r\n\r\n\r\nPrince Dail             Sean Chiplock\r\n\r\n\r\n\r\n\r\nThe Royal Magister      Edwyn Tiong\r\n\r\n\r\n\r\n\r\nLilac                   Dawn Michelle Bennett\r\n\r\n\r\n\r\n\r\nCarol                   Amanda Lott\r\n\r\n\r\n\r\n\r\nSerpentine              Jason Lord\r\n\r\n\r\n\r\n\r\nTorque                  Patrick Seymour\r\n\r\n\r\n\r\n\r\nGeneral Gong            Jason Lord\r\n\r\n\r\n\r\n\r\nNeera Li                Ashlyn Selich\r\n\r\n\r\n\r\n\r\nSpade                   Sean Chiplock\r\n\r\n\r\n\r\n\r\nBird Officer            Stephen DiDuro\r\n\r\n\r\n\r\n\r\nMilla                   Aimee Smith\r\n\r\n\r\n\r\n\r\nSyntax                  Victoria Vitti\r\n\r\n\r\n\r\n\r\nMayor Zao               Alejandro Saab\r\n\r\n\r\n\r\n\r\nRogue Warrior           Patrick Seymour\r\n\r\n\r\n\r\n\r\nScientist               Edwyn Tiong", 863));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_message_4186(int x, int y)
{
    return new (TextBlitter::pool.create()) Message_4186(x, y);
}
class Message2_4187 : public TextBlitter
{
public:
    Message2_4187(int x, int y) : TextBlitter(x, y, Message2_4187_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Message 2", 9);
#endif
        width = 360;
        height = 1700;
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
FrameObject * create_message2_4187(int x, int y)
{
    return new (TextBlitter::pool.create()) Message2_4187(x, y);
}
class Statistics_4188 : public TextBlitter
{
public:
    Statistics_4188(int x, int y) : TextBlitter(x, y, Statistics_4188_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Statistics", 10);
#endif
        width = 360;
        height = 1720;
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
FrameObject * create_statistics_4188(int x, int y)
{
    return new (TextBlitter::pool.create()) Statistics_4188(x, y);
}
static Image* images_serpentinechestplate_4189_0_0[1];
static Direction direction_serpentinechestplate_4189_0_0 = {0, 50, 50, 0, 1, images_serpentinechestplate_4189_0_0, 1};
static Animation anim_serpentinechestplate_4189_0 = {&direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, NULL, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0, &direction_serpentinechestplate_4189_0_0};
static Animation * anim_array_serpentinechestplate_4189[1] = {&anim_serpentinechestplate_4189_0};
static Animations anim_serpentinechestplate_4189 = {1, &anim_array_serpentinechestplate_4189[0]};
static bool anim_serpentinechestplate_4189_initialized;
class SerpentineChestplate_4189 : public Active
{
public:
    SerpentineChestplate_4189(int x, int y) : Active(x, y, SerpentineChestplate_4189_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SerpentineChestplate", 20);
#endif
        this->animations = &anim_serpentinechestplate_4189;
        if (!anim_serpentinechestplate_4189_initialized) {
            anim_serpentinechestplate_4189_initialized = true;
            images_serpentinechestplate_4189_0_0[0] = get_internal_image(6806);
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
FrameObject * create_serpentinechestplate_4189(int x, int y)
{
    return new (Active::pool.create()) SerpentineChestplate_4189(x, y);
}
class CreditsStageNames_4190 : public Text
{
public:
    CreditsStageNames_4190(int x, int y) : Text(x, y, CreditsStageNames_4190_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Credits_StageNames", 18);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("                AQUA TUNNEL", 27));
        add_line(std::string("               DRAGON VALLEY", 28));
        add_line(std::string("                RELIC MAZE", 26));
        add_line(std::string("               FORTUNE NIGHT", 28));
        add_line(std::string("               SKY BATTALION", 28));
        add_line(std::string("                JADE CREEK", 26));
        add_line(std::string("               THERMAL BASE", 27));
        add_line(std::string("               PANGU LAGOON", 27));
        add_line(std::string("               TRAP HIDEOUT", 27));
        add_line(std::string("              BATTLE GLACIER", 28));
        add_line(std::string("           FINAL DREADNOUGHT 1", 30));
        add_line(std::string("           FINAL DREADNOUGHT 2", 30));
        add_line(std::string("           FINAL DREADNOUGHT 3", 30));
        add_line(std::string("           FINAL DREADNOUGHT 4", 30));
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
FrameObject * create_creditsstagenames_4190(int x, int y)
{
    return new (Text::pool.create()) CreditsStageNames_4190(x, y);
}
class QuickBackdrop_4191 : public QuickBackdrop
{
public:
    QuickBackdrop_4191(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 800;
        height = 800;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_4191(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_4191(x, y);
}
class Backdrop_4192 : public Backdrop
{
public:
    Backdrop_4192(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16148);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_4192(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_4192(x, y);
}
static Image* images_active_4193_0_0[1];
static Direction direction_active_4193_0_0 = {0, 50, 50, 0, 1, images_active_4193_0_0, 1};
static Animation anim_active_4193_0 = {&direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, NULL, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0, &direction_active_4193_0_0};
static Animation * anim_array_active_4193[1] = {&anim_active_4193_0};
static Animations anim_active_4193 = {1, &anim_array_active_4193[0]};
static bool anim_active_4193_initialized;
class Active_4193 : public Active
{
public:
    Active_4193(int x, int y) : Active(x, y, Active_4193_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_4193;
        if (!anim_active_4193_initialized) {
            anim_active_4193_initialized = true;
            images_active_4193_0_0[0] = get_internal_image(16147);
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
FrameObject * create_active_4193(int x, int y)
{
    return new (Active::pool.create()) Active_4193(x, y);
}
static Image* images_path1_4194_0_0[1];
static Direction direction_path1_4194_0_0 = {0, 50, 50, 0, 1, images_path1_4194_0_0, 1};
static Animation anim_path1_4194_0 = {&direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, NULL, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0, &direction_path1_4194_0_0};
static Animation * anim_array_path1_4194[1] = {&anim_path1_4194_0};
static Animations anim_path1_4194 = {1, &anim_array_path1_4194[0]};
static bool anim_path1_4194_initialized;
class Path1_4194 : public Active
{
public:
    Path1_4194(int x, int y) : Active(x, y, Path1_4194_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Path 1", 6);
#endif
        set_visible(false);
        this->animations = &anim_path1_4194;
        if (!anim_path1_4194_initialized) {
            anim_path1_4194_initialized = true;
            images_path1_4194_0_0[0] = get_internal_image(16149);
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
FrameObject * create_path1_4194(int x, int y)
{
    return new (Active::pool.create()) Path1_4194(x, y);
}
static Image* images_path2_4195_0_0[1];
static Direction direction_path2_4195_0_0 = {0, 50, 50, 0, 1, images_path2_4195_0_0, 1};
static Animation anim_path2_4195_0 = {&direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, NULL, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0, &direction_path2_4195_0_0};
static Animation * anim_array_path2_4195[1] = {&anim_path2_4195_0};
static Animations anim_path2_4195 = {1, &anim_array_path2_4195[0]};
static bool anim_path2_4195_initialized;
class Path2_4195 : public Active
{
public:
    Path2_4195(int x, int y) : Active(x, y, Path2_4195_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Path 2", 6);
#endif
        set_visible(false);
        this->animations = &anim_path2_4195;
        if (!anim_path2_4195_initialized) {
            anim_path2_4195_initialized = true;
            images_path2_4195_0_0[0] = get_internal_image(16151);
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
FrameObject * create_path2_4195(int x, int y)
{
    return new (Active::pool.create()) Path2_4195(x, y);
}
static Image* images_active2_4196_0_0[1];
static Direction direction_active2_4196_0_0 = {0, 50, 50, 0, 1, images_active2_4196_0_0, 1};
static Animation anim_active2_4196_0 = {&direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, NULL, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0, &direction_active2_4196_0_0};
static Animation * anim_array_active2_4196[1] = {&anim_active2_4196_0};
static Animations anim_active2_4196 = {1, &anim_array_active2_4196[0]};
static bool anim_active2_4196_initialized;
class Active2_4196 : public Active
{
public:
    Active2_4196(int x, int y) : Active(x, y, Active2_4196_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_4196;
        if (!anim_active2_4196_initialized) {
            anim_active2_4196_initialized = true;
            images_active2_4196_0_0[0] = get_internal_image(16150);
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
FrameObject * create_active2_4196(int x, int y)
{
    return new (Active::pool.create()) Active2_4196(x, y);
}
FRAMEOBJECT_IMPL(QuickBackdrop)
FRAMEOBJECT_IMPL(SystemBox)
FRAMEOBJECT_IMPL(SteamObject)
FRAMEOBJECT_IMPL(Text)
FRAMEOBJECT_IMPL(Counter)
FRAMEOBJECT_IMPL(FrameObject)
FRAMEOBJECT_IMPL(TextBlitter)
FRAMEOBJECT_IMPL(StringParser)
FRAMEOBJECT_IMPL(LayerObject)
FRAMEOBJECT_IMPL(WindowControl)
FRAMEOBJECT_IMPL(Active)
FRAMEOBJECT_IMPL(ArrayObject)
FRAMEOBJECT_IMPL(Backdrop)
FRAMEOBJECT_IMPL(INI)
SavedAlterables global_data_0_globalinputdata;
ArrayObject::SavedArray global_data_1_savedata;
ArrayObject::SavedArray global_data_2_mapdata;
ArrayObject::SavedArray global_data_3_mapdata_2;
ArrayObject::SavedArray global_data_4_recorddata;
SavedAlterables global_data_5_fp_logo;
SavedAlterables global_data_6_master_level;
SavedAlterables global_data_7_file_crystals;
Counter::SavedCounter global_data_8_file_crystals;
SavedAlterables global_data_9_gui_crystal;
Counter::SavedCounter global_data_10_gui_crystal;
SavedAlterables global_data_11_gui_rings;
Counter::SavedCounter global_data_12_gui_rings;
SavedAlterables global_data_13_player_others;
SavedAlterables global_data_14_gui_energy;
SavedAlterables global_data_15_gui_life_basemeter;
SavedAlterables global_data_16_controller_music;
ArrayObject::SavedArray global_data_17_function_music;
ArrayObject::SavedArray global_data_18_queue_music;
SavedAlterables global_data_19_object_extralife;
SavedAlterables global_data_20_effects_dust;
SavedAlterables global_data_21_effects_colordot;
SavedAlterables global_data_22_effects_debris;
SavedAlterables global_data_23_player_projectile;
SavedAlterables global_data_24_effects_spadeimage;
SavedAlterables global_data_25_object_bike;
SavedAlterables global_data_26_monitor_crystals;
SavedAlterables global_data_27_monitor_metalshield;
SavedAlterables global_data_28_monitor_broken;
SavedAlterables global_data_29_monitoricon;
SavedAlterables global_data_30_effects_dust01;
SavedAlterables global_data_31_shield_instashield;
SavedAlterables global_data_32_gui_timer_milli;
Counter::SavedCounter global_data_33_gui_timer_milli;
SavedAlterables global_data_34_gui_timer_milli2;
Counter::SavedCounter global_data_35_gui_timer_milli2;
SavedAlterables global_data_36_gui_timer_s;
Counter::SavedCounter global_data_37_gui_timer_s;
SavedAlterables global_data_38_gui_timer_s2;
Counter::SavedCounter global_data_39_gui_timer_s2;
SavedAlterables global_data_40_gui_timer_m;
Counter::SavedCounter global_data_41_gui_timer_m;
SavedAlterables global_data_42_gui_timer_m2;
Counter::SavedCounter global_data_43_gui_timer_m2;
SavedAlterables global_data_44_separator_layerchange;
SavedAlterables global_data_45_separator_springs;
SavedAlterables global_data_46_separator_effects;
SavedAlterables global_data_47_separator_water;
SavedAlterables global_data_48_separator_monitors;
SavedAlterables global_data_49_separator_rings;
SavedAlterables global_data_50_general_anglechanger_75;
SavedAlterables global_data_51_player_sensorleft;
SavedAlterables global_data_52_player_sensorleftbig;
SavedAlterables global_data_53_player_sensorright;
SavedAlterables global_data_54_player_sensorrightbig;
SavedAlterables global_data_55_player_sensortop;
SavedAlterables global_data_56_player_sensortopbig;
SavedAlterables global_data_57_player_sensorbottom;
SavedAlterables global_data_58_player_sensorbottombig;
SavedAlterables global_data_59_player_sensorslopes;
SavedAlterables global_data_60_player_sensorplatform;
SavedAlterables global_data_61_player_sensorleftangle;
SavedAlterables global_data_62_player_sensorrightangle;
SavedAlterables global_data_63_player_sensorleftedge;
SavedAlterables global_data_64_player_sensorrightedge;
SavedAlterables global_data_65_layerchange_switch;
SavedAlterables global_data_66_layerchange_to0;
SavedAlterables global_data_67_layerchange_to1;
SavedAlterables global_data_68_monitor_rings;
SavedAlterables global_data_69_monitor_crate;
SavedAlterables global_data_70_monitor_1up;
SavedAlterables global_data_71_general_water_horizon;
SavedAlterables global_data_72_effects_watersplash;
SavedAlterables global_data_73_yellowspring_upleft;
SavedAlterables global_data_74_yellowspring_upright;
SavedAlterables global_data_75_yellowspring_up;
SavedAlterables global_data_76_yellowspring_right;
SavedAlterables global_data_77_yellowspring_left;
SavedAlterables global_data_78_yellowspring_down;
SavedAlterables global_data_79_redspring_upright;
SavedAlterables global_data_80_redspring_upleft;
SavedAlterables global_data_81_redspring_up;
SavedAlterables global_data_82_redspring_right;
SavedAlterables global_data_83_redspring_left;
SavedAlterables global_data_84_redspring_down;
SavedAlterables global_data_85_player_reflect;
SavedAlterables global_data_86_gui_scoretimerings;
SavedAlterables global_data_87_gui_lives;
Counter::SavedCounter global_data_88_gui_lives;
SavedAlterables global_data_89_gui_powercard;
SavedAlterables global_data_90_effects_springbeam;
SavedAlterables global_data_91_trunk_4;
SavedAlterables global_data_92_trunk_2;
SavedAlterables global_data_93_trunk_11;
SavedAlterables global_data_94_trunk_6;
SavedAlterables global_data_95_trunk_3;
SavedAlterables global_data_96_trunk_1;
SavedAlterables global_data_97_dv_wall1;
SavedAlterables global_data_98_lt_shrub_2;
SavedAlterables global_data_99_lt_shrub_1;
SavedAlterables global_data_100_dv_wall4;
SavedAlterables global_data_101_trunk_8;
SavedAlterables global_data_102_trunk_10;
SavedAlterables global_data_103_dv_rockslope4;
SavedAlterables global_data_104_dv_rockslope3;
SavedAlterables global_data_105_dv_grass6;
SavedAlterables global_data_106_dv_grass3;
SavedAlterables global_data_107_dv_grass4;
SavedAlterables global_data_108_dv_grass1;
SavedAlterables global_data_109_dv_grass2;
SavedAlterables global_data_110_dv_grass5;
SavedAlterables global_data_111_trunk_5;
SavedAlterables global_data_112_trunk_9;
SavedAlterables global_data_113_trunk_7;
SavedAlterables global_data_114_monitor_bomb;
SavedAlterables global_data_115_jc_dirt1;
SavedAlterables global_data_116_rm_grass6;
SavedAlterables global_data_117_rm_grass5;
SavedAlterables global_data_118_dv_rockslope_4;
SavedAlterables global_data_119_jc_grass_5;
SavedAlterables global_data_120_lt_nightground_3;
SavedAlterables global_data_121_lt_nightground_2;
SavedAlterables global_data_122_lt_nightground_4;
SavedAlterables global_data_123_npc_gong;
SavedAlterables global_data_124_aquabrickback_6;
SavedAlterables global_data_125_aquabrickback_1;
SavedAlterables global_data_126_aquabrickback_7;
SavedAlterables global_data_127_aquabrickback_8;
SavedAlterables global_data_128_aquabrickback_10;
SavedAlterables global_data_129_aquabrickback_9;
SavedAlterables global_data_130_at_sewerpipe9;
SavedAlterables global_data_131_aquaplant_1;
SavedAlterables global_data_132_at_sewerpipe1;
SavedAlterables global_data_133_at_sewerpipe6;
SavedAlterables global_data_134_aquabrick_1;
SavedAlterables global_data_135_aquabrick_10;
SavedAlterables global_data_136_aquadirt_6;
SavedAlterables global_data_137_at_sewerpipe11;
SavedAlterables global_data_138_at_sewerpipe8;
SavedAlterables global_data_139_at_waterfaucet3;
SavedAlterables global_data_140_aquabrick_5;
SavedAlterables global_data_141_aquabrick_21;
SavedAlterables global_data_142_aquabrick_16;
SavedAlterables global_data_143_aquabrick_15;
SavedAlterables global_data_144_aquatree_2;
SavedAlterables global_data_145_aquabrick_11;
SavedAlterables global_data_146_aquadirt;
SavedAlterables global_data_147_aquabrick_3;
SavedAlterables global_data_148_aquadirt_2;
SavedAlterables global_data_149_aquabrick_14;
SavedAlterables global_data_150_aquaplant_2;
SavedAlterables global_data_151_aquadirt_5;
SavedAlterables global_data_152_at_waterfaucet5;
SavedAlterables global_data_153_aquabrickslope_1;
SavedAlterables global_data_154_aquabrickslope_2;
SavedAlterables global_data_155_aquadirt_4;
SavedAlterables global_data_156_at_sewerpipe4;
SavedAlterables global_data_157_at_sewerpipe10;
SavedAlterables global_data_158_aquatree_1;
SavedAlterables global_data_159_aquadirt_3;
SavedAlterables global_data_160_at_column;
SavedAlterables global_data_161_aquabrick_2;
SavedAlterables global_data_162_aquabrick_4;
SavedAlterables global_data_163_at_ladder;
SavedAlterables global_data_164_aquabrick_6;
SavedAlterables global_data_165_aquabrickslope_3;
SavedAlterables global_data_166_aquabrickslope_4;
SavedAlterables global_data_167_aquabrick_13;
SavedAlterables global_data_168_aquabrick_17;
SavedAlterables global_data_169_aquabrick_19;
SavedAlterables global_data_170_aquabrick_18;
SavedAlterables global_data_171_aquabrick_20;
SavedAlterables global_data_172_at_sewerpipe2;
SavedAlterables global_data_173_at_sewerpipe_3;
SavedAlterables global_data_174_at_sewerpipe7;
SavedAlterables global_data_175_at_sewerpipe5;
SavedAlterables global_data_176_aquabrick_9;
SavedAlterables global_data_177_at_waterfaucet;
SavedAlterables global_data_178_at_waterfaucet4;
SavedAlterables global_data_179_at_waterfaucet2;
SavedAlterables global_data_180_watervent;
SavedAlterables global_data_181_aquabrick_22;
SavedAlterables global_data_182_aquabrick_23;
SavedAlterables global_data_183_aquabrick_7;
SavedAlterables global_data_184_aquabrick_8;
SavedAlterables global_data_185_aquabrick_24;
SavedAlterables global_data_186_aquabrick_25;
SavedAlterables global_data_187_aquabrick_32;
SavedAlterables global_data_188_gui_air;
Counter::SavedCounter global_data_189_gui_air;
SavedAlterables global_data_190_levelcard_intro_2;
SavedAlterables global_data_191_aquabrickback_2;
SavedAlterables global_data_192_aqualargepipe_4;
SavedAlterables global_data_193_aqualargepipe_15;
SavedAlterables global_data_194_aqualargepipe_14;
SavedAlterables global_data_195_aqualargepipe_2;
SavedAlterables global_data_196_aqualargepipe_7;
SavedAlterables global_data_197_aqualargepipe_17;
SavedAlterables global_data_198_aqualargepipe_13;
SavedAlterables global_data_199_aqualargepipe_16;
SavedAlterables global_data_200_aqualargepipe_1;
SavedAlterables global_data_201_aqualargepipe_6;
SavedAlterables global_data_202_aqualargepipe_3;
SavedAlterables global_data_203_aqualargepipe_5;
SavedAlterables global_data_204_aqualargepipe_8;
SavedAlterables global_data_205_teetertotter_axle;
SavedAlterables global_data_206_totalbonus;
Counter::SavedCounter global_data_207_totalbonus;
SavedAlterables global_data_208_totalcrystals;
Counter::SavedCounter global_data_209_totalcrystals;
SavedAlterables global_data_210_dv_backwall;
SavedAlterables global_data_211_dv_halfpipe1;
SavedAlterables global_data_212_dv_halfpipe2;
SavedAlterables global_data_213_dv_halfpipe3;
SavedAlterables global_data_214_dv_tree6;
SavedAlterables global_data_215_dv_wall3;
SavedAlterables global_data_216_dv_tree4;
SavedAlterables global_data_217_dv_wall8;
SavedAlterables global_data_218_dv_tree5;
SavedAlterables global_data_219_dv_backrock3;
SavedAlterables global_data_220_dv_backrock1;
SavedAlterables global_data_221_dv_tree2;
SavedAlterables global_data_222_dv_wall6;
SavedAlterables global_data_223_dv_wall2;
SavedAlterables global_data_224_dv_walledge1;
SavedAlterables global_data_225_dv_floorcurvesmallright;
SavedAlterables global_data_226_dv_wall9;
SavedAlterables global_data_227_dv_backrock2;
SavedAlterables global_data_228_dv_rockceiling;
SavedAlterables global_data_229_dv_wall7;
SavedAlterables global_data_230_dv_tree1;
SavedAlterables global_data_231_dv_walledge2;
SavedAlterables global_data_232_dv_rockslope1;
SavedAlterables global_data_233_dv_tree3;
SavedAlterables global_data_234_dv_rockslope9;
SavedAlterables global_data_235_dv_wall_6;
SavedAlterables global_data_236_dv_rockedge2;
SavedAlterables global_data_237_dv_rockedge1;
SavedAlterables global_data_238_dv_rockslope11;
SavedAlterables global_data_239_dv_floorcurveright;
SavedAlterables global_data_240_dv_rockslope12;
SavedAlterables global_data_241_dv_floorcurveleft;
SavedAlterables global_data_242_dv_rockslope2;
SavedAlterables global_data_243_dv_rockslope10;
SavedAlterables global_data_244_dv_rockslope5;
SavedAlterables global_data_245_dv_rockslope6;
SavedAlterables global_data_246_dv_ladder;
SavedAlterables global_data_247_dv_floorcurvesmallleft;
SavedAlterables global_data_248_dv_rockslope8;
SavedAlterables global_data_249_dv_grass8;
SavedAlterables global_data_250_dv_grass7;
SavedAlterables global_data_251_dv_sapling;
SavedAlterables global_data_252_dv_coral5;
SavedAlterables global_data_253_dv_coral6;
SavedAlterables global_data_254_dv_coral2;
SavedAlterables global_data_255_dv_coral1;
SavedAlterables global_data_256_dv_coral3;
SavedAlterables global_data_257_dv_coral4;
SavedAlterables global_data_258_dv_ceilingcurveleft;
SavedAlterables global_data_259_dv_geyserback;
SavedAlterables global_data_260_dv_flatceiling;
SavedAlterables global_data_261_dv_ceilingcurveright;
SavedAlterables global_data_262_dv_rockslope7;
SavedAlterables global_data_263_pushableblock_2;
SavedAlterables global_data_264_dv_verticalbridge;
SavedAlterables global_data_265_dv_rockslope13;
SavedAlterables global_data_266_gui_boss;
SavedAlterables global_data_267_rm_brick24;
SavedAlterables global_data_268_rm_brick21;
SavedAlterables global_data_269_rm_brick20;
SavedAlterables global_data_270_rm_brick26;
SavedAlterables global_data_271_rm_brick25;
SavedAlterables global_data_272_rm_brick2;
SavedAlterables global_data_273_rm_column2;
SavedAlterables global_data_274_rm_column1;
SavedAlterables global_data_275_rm_column3;
SavedAlterables global_data_276_rm_bush3;
SavedAlterables global_data_277_rm_brick13;
SavedAlterables global_data_278_rm_column4;
SavedAlterables global_data_279_rm_bush2;
SavedAlterables global_data_280_rm_bush1;
SavedAlterables global_data_281_soil_1;
SavedAlterables global_data_282_rm_brick1;
SavedAlterables global_data_283_rm_brick16;
SavedAlterables global_data_284_rm_brick17;
SavedAlterables global_data_285_rm_brickarch;
SavedAlterables global_data_286_rm_brick4;
SavedAlterables global_data_287_soil_5;
SavedAlterables global_data_288_rm_brick18;
SavedAlterables global_data_289_rm_brick14;
SavedAlterables global_data_290_rm_brick6;
SavedAlterables global_data_291_rm_brick7;
SavedAlterables global_data_292_rm_brick3;
SavedAlterables global_data_293_rm_grass1;
SavedAlterables global_data_294_soil_6;
SavedAlterables global_data_295_rm_brickarch2;
SavedAlterables global_data_296_rm_brick8;
SavedAlterables global_data_297_rm_brick5;
SavedAlterables global_data_298_rm_brick10;
SavedAlterables global_data_299_rm_brick9;
SavedAlterables global_data_300_rm_plant1;
SavedAlterables global_data_301_soil_2;
SavedAlterables global_data_302_soil_3;
SavedAlterables global_data_303_rm_grass4;
SavedAlterables global_data_304_soil_8;
SavedAlterables global_data_305_rm_grass3;
SavedAlterables global_data_306_rm_grass2;
SavedAlterables global_data_307_soil_4;
SavedAlterables global_data_308_rm_grass7;
SavedAlterables global_data_309_rm_grass8;
SavedAlterables global_data_310_rm_grass9;
SavedAlterables global_data_311_rm_ladder;
SavedAlterables global_data_312_rm_brick15;
SavedAlterables global_data_313_soil_11;
SavedAlterables global_data_314_soil_10;
SavedAlterables global_data_315_soil_12;
SavedAlterables global_data_316_rm_brick19;
SavedAlterables global_data_317_rm_column9;
SavedAlterables global_data_318_rm_plant2;
SavedAlterables global_data_319_rm_soilceiling;
SavedAlterables global_data_320_loop_1;
SavedAlterables global_data_321_loop_5_back;
SavedAlterables global_data_322_rm_entrywayleft;
SavedAlterables global_data_323_rm_entrywayleft2;
SavedAlterables global_data_324_loop_7;
SavedAlterables global_data_325_loop_3;
SavedAlterables global_data_326_loop_4;
SavedAlterables global_data_327_loop_2;
SavedAlterables global_data_328_loop_6;
SavedAlterables global_data_329_rm_brickcurve2;
SavedAlterables global_data_330_rm_brickcurve3;
SavedAlterables global_data_331_layerchange_switch_2;
SavedAlterables global_data_332_rm_entrywayleft3;
SavedAlterables global_data_333_rm_bluecrystal_2;
SavedAlterables global_data_334_shaft_2;
SavedAlterables global_data_335_cave_soil_27;
SavedAlterables global_data_336_cave_soil_18;
SavedAlterables global_data_337_rm_bluecrystal_1;
SavedAlterables global_data_338_cave_soil_9;
SavedAlterables global_data_339_cave_soil_19;
SavedAlterables global_data_340_cave_soil_17;
SavedAlterables global_data_341_cave_soil_1;
SavedAlterables global_data_342_cave_soil_28;
SavedAlterables global_data_343_cave_soil_11;
SavedAlterables global_data_344_cave_soil_14;
SavedAlterables global_data_345_cave_soil_8;
SavedAlterables global_data_346_cave_soil_15;
SavedAlterables global_data_347_cave_soil_25;
SavedAlterables global_data_348_column_5;
SavedAlterables global_data_349_cave_soil_2;
SavedAlterables global_data_350_cave_soil_3;
SavedAlterables global_data_351_cave_soil_6;
SavedAlterables global_data_352_column_6;
SavedAlterables global_data_353_column_7;
SavedAlterables global_data_354_column_8;
SavedAlterables global_data_355_cave_soil_16;
SavedAlterables global_data_356_cave_soil_4;
SavedAlterables global_data_357_cave_soil_7;
SavedAlterables global_data_358_cave_soil_5;
SavedAlterables global_data_359_cave_soil_20;
SavedAlterables global_data_360_cave_soil_21;
SavedAlterables global_data_361_cave_soil_12;
SavedAlterables global_data_362_cave_soil_23;
SavedAlterables global_data_363_cave_soil_26;
SavedAlterables global_data_364_cave_soil_24;
SavedAlterables global_data_365_cave_soil_22;
SavedAlterables global_data_366_rm_soiledgeright;
SavedAlterables global_data_367_rm_soiledgeleft;
SavedAlterables global_data_368_gimmick_spinnycupaxle;
SavedAlterables global_data_369_rm_cavebrick4;
SavedAlterables global_data_370_rm_scaleypillar;
SavedAlterables global_data_371_rm_cavebrick6;
SavedAlterables global_data_372_rm_cavebrick8;
SavedAlterables global_data_373_rm_cavebrick3;
SavedAlterables global_data_374_rm_cavebrick14;
SavedAlterables global_data_375_rm_cavebrick13;
SavedAlterables global_data_376_rm_cavebrick2;
SavedAlterables global_data_377_rm_cavebrick7;
SavedAlterables global_data_378_cave_soil_33;
SavedAlterables global_data_379_rm_cavebrick5;
SavedAlterables global_data_380_rm_cavebrick1;
SavedAlterables global_data_381_rm_cavebrick10;
SavedAlterables global_data_382_rm_cavebrick9;
SavedAlterables global_data_383_cave_soil_13;
SavedAlterables global_data_384_cave_soil_30;
SavedAlterables global_data_385_cave_soil_31;
SavedAlterables global_data_386_cave_soil_29;
SavedAlterables global_data_387_cave_soil_32;
SavedAlterables global_data_388_cave_soil_34;
SavedAlterables global_data_389_cave_elbow_curve_1;
SavedAlterables global_data_390_cave_elbow_curve_2;
SavedAlterables global_data_391_cave_elbow_curve_3;
SavedAlterables global_data_392_rm_cavebrick15;
SavedAlterables global_data_393_cave_soil_35;
SavedAlterables global_data_394_cave_soil_38;
SavedAlterables global_data_395_cave_soil_37;
SavedAlterables global_data_396_rm_cavebrick20;
SavedAlterables global_data_397_rm_cavebrick12;
SavedAlterables global_data_398_rm_cavebrick16;
SavedAlterables global_data_399_rm_cavebrick17;
SavedAlterables global_data_400_rm_cavebrick19;
SavedAlterables global_data_401_rm_cavebrick18;
SavedAlterables global_data_402_fn_wall11;
SavedAlterables global_data_403_fn_wall10;
SavedAlterables global_data_404_fn_wall12;
SavedAlterables global_data_405_fn_wall13;
SavedAlterables global_data_406_fn_wall15;
SavedAlterables global_data_407_fn_greenroof;
SavedAlterables global_data_408_fn_signholder;
SavedAlterables global_data_409_back_wall_2;
SavedAlterables global_data_410_fn_backwall5;
SavedAlterables global_data_411_ferriswheel_base_2;
SavedAlterables global_data_412_fn_backwall1;
SavedAlterables global_data_413_fn_redcolumn_back;
SavedAlterables global_data_414_fn_backwall4;
SavedAlterables global_data_415_fn_backwall6;
SavedAlterables global_data_416_fn_floor8;
SavedAlterables global_data_417_fn_floor6;
SavedAlterables global_data_418_fn_apartmentwall1;
SavedAlterables global_data_419_fn_apartmentwindow;
SavedAlterables global_data_420_fn_rooftop3;
SavedAlterables global_data_421_fn_floor12;
SavedAlterables global_data_422_fn_floor14;
SavedAlterables global_data_423_fn_floor17;
SavedAlterables global_data_424_fn_backwall3;
SavedAlterables global_data_425_ferriswheel_base;
SavedAlterables global_data_426_fn_wall21;
SavedAlterables global_data_427_fn_backhedge;
SavedAlterables global_data_428_fn_floor20;
SavedAlterables global_data_429_fn_wall14;
SavedAlterables global_data_430_fn_wall16;
SavedAlterables global_data_431_fn_wall6;
SavedAlterables global_data_432_fn_wall7;
SavedAlterables global_data_433_fn_wall5;
SavedAlterables global_data_434_fn_redcolumn;
SavedAlterables global_data_435_fn_apartmentwall3;
SavedAlterables global_data_436_fn_apartmentwall2;
SavedAlterables global_data_437_fn_soil;
SavedAlterables global_data_438_fn_floor27;
SavedAlterables global_data_439_fn_floor28;
SavedAlterables global_data_440_fn_rooftop1;
SavedAlterables global_data_441_fn_rooftop2;
SavedAlterables global_data_442_fn_floor9;
SavedAlterables global_data_443_gimmick_rollingarchback;
SavedAlterables global_data_444_fn_floor11;
SavedAlterables global_data_445_fn_floor13;
SavedAlterables global_data_446_fn_floor10;
SavedAlterables global_data_447_fn_floor15;
SavedAlterables global_data_448_fn_floor16;
SavedAlterables global_data_449_fn_wall18;
SavedAlterables global_data_450_fn_wall19;
SavedAlterables global_data_451_fn_floor24;
SavedAlterables global_data_452_fn_bustedwall;
SavedAlterables global_data_453_fn_floor29;
SavedAlterables global_data_454_lamppost_back;
SavedAlterables global_data_455_fn_floor35;
SavedAlterables global_data_456_fn_floor36;
SavedAlterables global_data_457_poster_1;
SavedAlterables global_data_458_fn_statue;
SavedAlterables global_data_459_fn_railing;
SavedAlterables global_data_460_fn_railingslope;
SavedAlterables global_data_461_verticalhalfpipe_1;
SavedAlterables global_data_462_verticalhalfpipe_3;
SavedAlterables global_data_463_verticalhalfpipe_2;
SavedAlterables global_data_464_verticalhalfpipe_4;
SavedAlterables global_data_465_verticalhalfpipe_5;
SavedAlterables global_data_466_verticalhalfpipe_6;
SavedAlterables global_data_467_fn_lockedbike;
SavedAlterables global_data_468_fn_bigsign1;
SavedAlterables global_data_469_fn_bigsign2;
SavedAlterables global_data_470_mall_entrance_4;
SavedAlterables global_data_471_birch_tree;
SavedAlterables global_data_472_gachaponbase;
SavedAlterables global_data_473_mosaicwall_1;
SavedAlterables global_data_474_mosaicwall_2;
SavedAlterables global_data_475_mall_scalecolumn_1;
SavedAlterables global_data_476_mall_scalecolumn_2;
SavedAlterables global_data_477_mallfloor_3;
SavedAlterables global_data_478_mallfloor_1;
SavedAlterables global_data_479_mallfloor_4;
SavedAlterables global_data_480_fn_gianttv;
SavedAlterables global_data_481_labstarposter;
SavedAlterables global_data_482_hamstertunnel_9;
SavedAlterables global_data_483_hamstertunnel_10;
SavedAlterables global_data_484_mallfloor_7;
SavedAlterables global_data_485_hamstertunnel_8;
SavedAlterables global_data_486_parasolbase;
SavedAlterables global_data_487_parasolbase_2;
SavedAlterables global_data_488_discoball_base;
SavedAlterables global_data_489_fn_treeshadow;
SavedAlterables global_data_490_mallfountain_1;
SavedAlterables global_data_491_escalatorback_1;
SavedAlterables global_data_492_escalatorback_2;
SavedAlterables global_data_493_mallfloor_5;
SavedAlterables global_data_494_escalatorback_3;
SavedAlterables global_data_495_escalatorback_4;
SavedAlterables global_data_496_escalatorback_5;
SavedAlterables global_data_497_escalatorback_6;
SavedAlterables global_data_498_malllogo;
SavedAlterables global_data_499_redcarpet;
SavedAlterables global_data_500_mallfloor_6;
SavedAlterables global_data_501_fn_cable;
SavedAlterables global_data_502_hamstertunnel_1;
SavedAlterables global_data_503_hamstertunnel_3;
SavedAlterables global_data_504_mallfloor_8;
SavedAlterables global_data_505_mallfloor_9;
SavedAlterables global_data_506_restroom_back;
SavedAlterables global_data_507_velvetrope;
SavedAlterables global_data_508_mall_storebase;
SavedAlterables global_data_509_mall_storebase_2;
SavedAlterables global_data_510_mall_storebase_3;
SavedAlterables global_data_511_keyboard_sharpnote;
SavedAlterables global_data_512_restroom_men;
SavedAlterables global_data_513_restroom_women;
SavedAlterables global_data_514_hamstertunnel_2;
SavedAlterables global_data_515_hamstertunnel_6;
SavedAlterables global_data_516_hamstertunnel_5;
SavedAlterables global_data_517_hamstertunnel_7;
SavedAlterables global_data_518_knightstatue;
SavedAlterables global_data_519_mallfloor_10;
SavedAlterables global_data_520_mallfloor_13;
SavedAlterables global_data_521_mallfloor_12;
SavedAlterables global_data_522_blimp_cable_1;
SavedAlterables global_data_523_ship_bottomsail;
SavedAlterables global_data_524_ship_28;
SavedAlterables global_data_525_ship_23;
SavedAlterables global_data_526_ship_26;
SavedAlterables global_data_527_ship_27;
SavedAlterables global_data_528_ship_29;
SavedAlterables global_data_529_ship_thruster_front;
SavedAlterables global_data_530_ship_thruster_end;
SavedAlterables global_data_531_ship_thruster_mid;
SavedAlterables global_data_532_ship_bottomsail_shadow;
SavedAlterables global_data_533_sb_signdown;
SavedAlterables global_data_534_boss_spadecard;
SavedAlterables global_data_535_blimp_cable_2;
SavedAlterables global_data_536_sb_ironwall;
SavedAlterables global_data_537_sb_chain;
SavedAlterables global_data_538_sb_wallshadow;
SavedAlterables global_data_539_blimp_cable_3;
SavedAlterables global_data_540_sb_smallwall;
SavedAlterables global_data_541_sb_bigwall_2;
SavedAlterables global_data_542_sb_wall;
SavedAlterables global_data_543_sb_bigwall;
SavedAlterables global_data_544_sb_deck1;
SavedAlterables global_data_545_sb_ceiling2;
SavedAlterables global_data_546_sb_deck6;
SavedAlterables global_data_547_sb_shipfront;
SavedAlterables global_data_548_ship_32;
SavedAlterables global_data_549_ship_34;
SavedAlterables global_data_550_ship_35;
SavedAlterables global_data_551_ship_36;
SavedAlterables global_data_552_ship_33;
SavedAlterables global_data_553_ship_37;
SavedAlterables global_data_554_quick_backdrop_7;
SavedAlterables global_data_555_quick_backdrop_8;
SavedAlterables global_data_556_sb_deck3;
SavedAlterables global_data_557_sb_deck5;
SavedAlterables global_data_558_sb_deck2;
SavedAlterables global_data_559_sb_wallslope3;
SavedAlterables global_data_560_sb_wallslope6;
SavedAlterables global_data_561_sb_wallslope5;
SavedAlterables global_data_562_sb_deck7walkthru;
SavedAlterables global_data_563_sb_deck8walkthru;
SavedAlterables global_data_564_sb_wallright;
SavedAlterables global_data_565_sb_deck1walkthru;
SavedAlterables global_data_566_sb_deck8;
SavedAlterables global_data_567_sb_wallleft;
SavedAlterables global_data_568_sb_wallslope1;
SavedAlterables global_data_569_sb_deck9;
SavedAlterables global_data_570_sb_deck7;
SavedAlterables global_data_571_sb_rotorbladetunnel;
SavedAlterables global_data_572_sb_outercurve_4;
SavedAlterables global_data_573_sb_innercurve_1;
SavedAlterables global_data_574_sb_ceiling1;
SavedAlterables global_data_575_sb_wallslope2;
SavedAlterables global_data_576_sb_deck10;
SavedAlterables global_data_577_sb_innercurve_4;
SavedAlterables global_data_578_sb_deck11;
SavedAlterables global_data_579_sb_wallslope4;
SavedAlterables global_data_580_sb_deck4;
SavedAlterables global_data_581_sb_innercurve_3;
SavedAlterables global_data_582_sb_metaltube_1;
SavedAlterables global_data_583_sb_metaltube_2;
SavedAlterables global_data_584_sb_metaltube_3;
SavedAlterables global_data_585_sb_metaltube_4;
SavedAlterables global_data_586_player_assist_copilot;
SavedAlterables global_data_587_sb_innercurve_2;
SavedAlterables global_data_588_ship_front_1;
SavedAlterables global_data_589_sb_outercurve_1;
SavedAlterables global_data_590_sb_outercurve_2;
SavedAlterables global_data_591_sb_outercurve_3;
SavedAlterables global_data_592_sb_deck12;
SavedAlterables global_data_593_sb_hangingbar;
SavedAlterables global_data_594_sb_ironwall_2;
SavedAlterables global_data_595_jc_bamboo3;
SavedAlterables global_data_596_jc_bamboo_3;
SavedAlterables global_data_597_jc_bamboo4;
SavedAlterables global_data_598_jc_rock_1;
SavedAlterables global_data_599_jc_rock_2;
SavedAlterables global_data_600_jc_bamboo1;
SavedAlterables global_data_601_jc_bamboo_2;
SavedAlterables global_data_602_jc_plant_1;
SavedAlterables global_data_603_jc_bamboo2;
SavedAlterables global_data_604_jc_planet_4;
SavedAlterables global_data_605_jc_coral_1;
SavedAlterables global_data_606_jc_coral_2;
SavedAlterables global_data_607_jc_plant_3;
SavedAlterables global_data_608_jc_plant_4;
SavedAlterables global_data_609_jc_planet_3;
SavedAlterables global_data_610_jc_bud_1;
SavedAlterables global_data_611_jc_bud_2;
SavedAlterables global_data_612_jc_flatground_7;
SavedAlterables global_data_613_jc_flatground_6;
SavedAlterables global_data_614_jc_dirt_7;
SavedAlterables global_data_615_jc_brokenslope;
SavedAlterables global_data_616_jc_dirt_18;
SavedAlterables global_data_617_jc_dirt_4;
SavedAlterables global_data_618_jc_flatground_1;
SavedAlterables global_data_619_jc_dirt_16;
SavedAlterables global_data_620_jc_dirt_5;
SavedAlterables global_data_621_jc_dirt_19;
SavedAlterables global_data_622_jc_dirt_2;
SavedAlterables global_data_623_jc_dirt_3;
SavedAlterables global_data_624_jc_dirt_17;
SavedAlterables global_data_625_jc_dirt_8;
SavedAlterables global_data_626_jc_dirt_14;
SavedAlterables global_data_627_jc_dirt_10;
SavedAlterables global_data_628_jc_flatground_5;
SavedAlterables global_data_629_jc_dirt_15;
SavedAlterables global_data_630_jc_dirt_11;
SavedAlterables global_data_631_jc_dirt_12;
SavedAlterables global_data_632_jc_dirt_13;
SavedAlterables global_data_633_jc_dirt_9;
SavedAlterables global_data_634_jc_plant_2;
SavedAlterables global_data_635_jc_grass_1;
SavedAlterables global_data_636_jc_grass_2;
SavedAlterables global_data_637_jc_grass_6;
SavedAlterables global_data_638_jc_grass_3;
SavedAlterables global_data_639_jc_grass_4;
SavedAlterables global_data_640_jc_dirt_6;
SavedAlterables global_data_641_jc_grass_7;
SavedAlterables global_data_642_jc_grass_8;
SavedAlterables global_data_643_jc_grass_10;
SavedAlterables global_data_644_jc_grass_9;
SavedAlterables global_data_645_jc_flatground_8;
SavedAlterables global_data_646_jc_grasstop_1;
SavedAlterables global_data_647_jc_bridgesegment;
SavedAlterables global_data_648_jc_dirt_23;
SavedAlterables global_data_649_jc_dirt_20;
SavedAlterables global_data_650_jc_dirt_21;
SavedAlterables global_data_651_jc_dirt_22;
SavedAlterables global_data_652_jc_dirt_24;
SavedAlterables global_data_653_player_icedeath;
SavedAlterables global_data_654_jc_vinewall_2;
SavedAlterables global_data_655_jc_vinewall;
SavedAlterables global_data_656_jc_subtanker_5;
SavedAlterables global_data_657_jc_subtanker_6;
SavedAlterables global_data_658_jc_sub_7;
SavedAlterables global_data_659_jc_sub_10;
SavedAlterables global_data_660_jc_sub_18;
SavedAlterables global_data_661_jc_subsupportback;
SavedAlterables global_data_662_jc_subfin3;
SavedAlterables global_data_663_jc_subfin4;
SavedAlterables global_data_664_jc_subfin5;
SavedAlterables global_data_665_jc_sub_17;
SavedAlterables global_data_666_jc_sub_1;
SavedAlterables global_data_667_jc_sub_2;
SavedAlterables global_data_668_jc_sub_12;
SavedAlterables global_data_669_jc_sub_9;
SavedAlterables global_data_670_jc_subfin1;
SavedAlterables global_data_671_jc_subfin2;
SavedAlterables global_data_672_jc_sub_8;
SavedAlterables global_data_673_jc_sub_11;
SavedAlterables global_data_674_jc_subtanker1;
SavedAlterables global_data_675_jc_sub_16;
SavedAlterables global_data_676_jc_subtanker2;
SavedAlterables global_data_677_jc_sub_20;
SavedAlterables global_data_678_jc_subtanker4;
SavedAlterables global_data_679_jc_subtanker5;
SavedAlterables global_data_680_jc_subtanker3;
SavedAlterables global_data_681_jc_sub_14;
SavedAlterables global_data_682_jc_sub_15;
SavedAlterables global_data_683_jc_sub_13;
SavedAlterables global_data_684_jc_sub_21;
SavedAlterables global_data_685_jc_subsupportfront;
SavedAlterables global_data_686_jc_sub_22;
SavedAlterables global_data_687_jc_sub_19;
SavedAlterables global_data_688_player_assist_lilachair;
SavedAlterables global_data_689_player_assist_caroltail;
SavedAlterables global_data_690_player_assist_millatail;
SavedAlterables global_data_691_player_assist_milla;
SavedAlterables global_data_692_player_assist_carol;
SavedAlterables global_data_693_tb_tunneltop6;
SavedAlterables global_data_694_tb_tunneltop3;
SavedAlterables global_data_695_tb_tunnelbottom3;
SavedAlterables global_data_696_tb_tunnelbottom6;
SavedAlterables global_data_697_tb_wallshadow;
SavedAlterables global_data_698_tb_wall_8;
SavedAlterables global_data_699_tb_wall_6;
SavedAlterables global_data_700_tb_syntaxpanel_2;
SavedAlterables global_data_701_tb_floor_19;
SavedAlterables global_data_702_tb_floor_1;
SavedAlterables global_data_703_tb_floor_20;
SavedAlterables global_data_704_tb_floor_17;
SavedAlterables global_data_705_tb_floor_16;
SavedAlterables global_data_706_tb_floor_8;
SavedAlterables global_data_707_tb_floor_11;
SavedAlterables global_data_708_tb_floor_2;
SavedAlterables global_data_709_tb_floor_4;
SavedAlterables global_data_710_tb_floor_10;
SavedAlterables global_data_711_tb_floor_7;
SavedAlterables global_data_712_tb_floor_15;
SavedAlterables global_data_713_tb_floor_5;
SavedAlterables global_data_714_tb_floor_12;
SavedAlterables global_data_715_tb_floor_6;
SavedAlterables global_data_716_tb_floor_13;
SavedAlterables global_data_717_tb_floor_9;
SavedAlterables global_data_718_tb_floor_14;
SavedAlterables global_data_719_tb_floor_18;
SavedAlterables global_data_720_tb_floor_21;
SavedAlterables global_data_721_tb_floor_3;
SavedAlterables global_data_722_tb_floor_22;
SavedAlterables global_data_723_tb_cornercurve_1;
SavedAlterables global_data_724_tb_wall_7;
SavedAlterables global_data_725_tb_longrailing_2;
SavedAlterables global_data_726_tb_longrailing_3;
SavedAlterables global_data_727_tb_longrailing;
SavedAlterables global_data_728_tb_cornercurve_4;
SavedAlterables global_data_729_tb_cornercurve_3;
SavedAlterables global_data_730_tb_wall_24;
SavedAlterables global_data_731_tb_bluewall_1;
SavedAlterables global_data_732_tb_bluepiping_1;
SavedAlterables global_data_733_tb_bluepiping_2;
SavedAlterables global_data_734_tb_invertedloop_3;
SavedAlterables global_data_735_tb_invertedloop_4;
SavedAlterables global_data_736_tb_invertedloop_1;
SavedAlterables global_data_737_tb_bluewall_2;
SavedAlterables global_data_738_tb_invertedloop_2;
SavedAlterables global_data_739_tb_bluetube_1;
SavedAlterables global_data_740_tb_bluetube_3;
SavedAlterables global_data_741_tb_bluetube_2;
SavedAlterables global_data_742_tb_bluetube_4;
SavedAlterables global_data_743_tb_concrete;
SavedAlterables global_data_744_tb_bluepiping_3;
SavedAlterables global_data_745_tb_bluepiping_5;
SavedAlterables global_data_746_tb_bluepiping_4;
SavedAlterables global_data_747_tb_bluepiping_6;
SavedAlterables global_data_748_tb_cornercurve_2;
SavedAlterables global_data_749_pl_plant_1;
SavedAlterables global_data_750_pl_plant_2;
SavedAlterables global_data_751_pl_ruins_3;
SavedAlterables global_data_752_pl_grass;
SavedAlterables global_data_753_pl_ruins_4;
SavedAlterables global_data_754_pl_ruins_2;
SavedAlterables global_data_755_pl_brickwall_1;
SavedAlterables global_data_756_pl_brickwall_2;
SavedAlterables global_data_757_pl_pinwheelstalk;
SavedAlterables global_data_758_pl_brickwall_5;
SavedAlterables global_data_759_pl_brickwall_3;
SavedAlterables global_data_760_pl_ground_8;
SavedAlterables global_data_761_pl_ground_4;
SavedAlterables global_data_762_pl_ground_9;
SavedAlterables global_data_763_pl_ground_13;
SavedAlterables global_data_764_pl_vine_1;
SavedAlterables global_data_765_pl_ground_3;
SavedAlterables global_data_766_pl_vine_2;
SavedAlterables global_data_767_pl_ground1;
SavedAlterables global_data_768_pl_ground_2;
SavedAlterables global_data_769_pl_ground_5;
SavedAlterables global_data_770_pl_ground_6;
SavedAlterables global_data_771_pl_stonewall_7;
SavedAlterables global_data_772_pl_ground_10;
SavedAlterables global_data_773_pl_ground_12;
SavedAlterables global_data_774_pl_ground_11;
SavedAlterables global_data_775_pl_ground_7;
SavedAlterables global_data_776_pl_brickwall_4;
SavedAlterables global_data_777_pl_brickwall_6;
SavedAlterables global_data_778_pl_mask;
SavedAlterables global_data_779_pl_bow;
SavedAlterables global_data_780_th_stone_11;
SavedAlterables global_data_781_th_stone_4;
SavedAlterables global_data_782_ry_diagonalpipe_1;
SavedAlterables global_data_783_ry_diagonalpipe_2;
SavedAlterables global_data_784_th_stone_3;
SavedAlterables global_data_785_th_stone_1;
SavedAlterables global_data_786_th_stone_2;
SavedAlterables global_data_787_th_stone_9;
SavedAlterables global_data_788_th_wood_1;
SavedAlterables global_data_789_th_stone_6;
SavedAlterables global_data_790_th_stone_5;
SavedAlterables global_data_791_th_stone_7;
SavedAlterables global_data_792_th_stone_8;
SavedAlterables global_data_793_th_back_1;
SavedAlterables global_data_794_th_back_3;
SavedAlterables global_data_795_th_back_4;
SavedAlterables global_data_796_ry_blossomtreehuge_1;
SavedAlterables global_data_797_ry_blossomtreehuge_2;
SavedAlterables global_data_798_ry_blossomtree_3;
SavedAlterables global_data_799_ry_blossomtree_4;
SavedAlterables global_data_800_th_stone_10;
SavedAlterables global_data_801_bg_snowdune_2;
SavedAlterables global_data_802_bg_deadtree;
SavedAlterables global_data_803_bg_solarpanelpipe;
SavedAlterables global_data_804_bg_snowdune_1;
SavedAlterables global_data_805_bg_snowmound;
SavedAlterables global_data_806_bg_deadtree_2;
SavedAlterables global_data_807_gimmick_snowspire;
SavedAlterables global_data_808_bg_rocks_13;
SavedAlterables global_data_809_bg_rocks_1;
SavedAlterables global_data_810_bg_rocks_11;
SavedAlterables global_data_811_bg_rocks_14;
SavedAlterables global_data_812_bg_rocks_4;
SavedAlterables global_data_813_bg_rocks_2;
SavedAlterables global_data_814_bg_rocks_7;
SavedAlterables global_data_815_bg_rocks_3;
SavedAlterables global_data_816_bg_rocks_5;
SavedAlterables global_data_817_bg_snow_9;
SavedAlterables global_data_818_bg_snowslope_2;
SavedAlterables global_data_819_bg_snow_1;
SavedAlterables global_data_820_bg_snowslope_1;
SavedAlterables global_data_821_bg_rocks_6;
SavedAlterables global_data_822_bg_rocks_9;
SavedAlterables global_data_823_bg_rocks_10;
SavedAlterables global_data_824_bg_snow_8;
SavedAlterables global_data_825_bg_snow_11;
SavedAlterables global_data_826_bg_rocks_8;
SavedAlterables global_data_827_bg_snow_5;
SavedAlterables global_data_828_bg_snow_6;
SavedAlterables global_data_829_bg_snowflat;
SavedAlterables global_data_830_bg_snow_7;
SavedAlterables global_data_831_bg_snow_3;
SavedAlterables global_data_832_bg_snow_2;
SavedAlterables global_data_833_bg_snow_4;
SavedAlterables global_data_834_bg_rocks_12;
SavedAlterables global_data_835_bg_spiralslide;
SavedAlterables global_data_836_bg_spiralslidebottom;
SavedAlterables global_data_837_bg_snow_10;
SavedAlterables global_data_838_bg_snow_12;
SavedAlterables global_data_839_bg_spiralslidefront;
SavedAlterables global_data_840_bg_spiralslidetopfront;
SavedAlterables global_data_841_bg_deadtree_3;
SavedAlterables global_data_842_bg_rocks_16;
SavedAlterables global_data_843_bg_snowslope_3;
SavedAlterables global_data_844_bg_rocks_17;
SavedAlterables global_data_845_bg_snow_13;
SavedAlterables global_data_846_bg_snow_14;
SavedAlterables global_data_847_bg_facility_9;
SavedAlterables global_data_848_bg_facility_11;
SavedAlterables global_data_849_bg_facility_10;
SavedAlterables global_data_850_bg_facility_1;
SavedAlterables global_data_851_bg_facility_3;
SavedAlterables global_data_852_bg_facility_2;
SavedAlterables global_data_853_bg_facility_6;
SavedAlterables global_data_854_bg_facility_4;
SavedAlterables global_data_855_bg_facility_5;
SavedAlterables global_data_856_bg_facility_7;
SavedAlterables global_data_857_bg_facility_13;
SavedAlterables global_data_858_bg_facility_14;
SavedAlterables global_data_859_bg_facility_12;
SavedAlterables global_data_860_bg_facility_8;
SavedAlterables global_data_861_bg_facility_21;
SavedAlterables global_data_862_bg_facility_18;
SavedAlterables global_data_863_bg_facility_15;
SavedAlterables global_data_864_bg_facility_16;
SavedAlterables global_data_865_bg_facility_17;
SavedAlterables global_data_866_bg_facility_19;
SavedAlterables global_data_867_bg_facility_20;
SavedAlterables global_data_868_fd_hangarsilo;
SavedAlterables global_data_869_fd_back_2;
SavedAlterables global_data_870_fd_back_1;
SavedAlterables global_data_871_fd_halfpipe1;
SavedAlterables global_data_872_fd_halfpipe2;
SavedAlterables global_data_873_fd_halfpipe3;
SavedAlterables global_data_874_fd_hangarwall_3;
SavedAlterables global_data_875_fd_hangarfloor_4;
SavedAlterables global_data_876_fd_hangarwall_5;
SavedAlterables global_data_877_fd_hangarwall_1;
SavedAlterables global_data_878_fd_hangarwall_2;
SavedAlterables global_data_879_fd_hangarfloor_8;
SavedAlterables global_data_880_fd_hangarwall_4;
SavedAlterables global_data_881_fd_hangarfloor_1;
SavedAlterables global_data_882_fd_hangarfloor_2;
SavedAlterables global_data_883_fd_hangarfloor_5;
SavedAlterables global_data_884_fd_hangarfloor_7;
SavedAlterables global_data_885_fd_hangarfloor_6;
SavedAlterables global_data_886_fd_hangarfloor_3;
SavedAlterables global_data_887_fd_hangarfloor_9;
SavedAlterables global_data_888_fd_hangarfloor_10;
SavedAlterables global_data_889_fd_hangarfloor_11;
SavedAlterables global_data_890_fd_lasercannonleft;
SavedAlterables global_data_891_fd_downhillplatformrail;
SavedAlterables global_data_892_fd_ladder;
SavedAlterables global_data_893_fd_labback_12;
SavedAlterables global_data_894_fd_labback_6;
SavedAlterables global_data_895_fd_labback_1;
SavedAlterables global_data_896_fd_labback_5;
SavedAlterables global_data_897_fd_labback_2;
SavedAlterables global_data_898_fd_labback_3;
SavedAlterables global_data_899_fd_labback_7;
SavedAlterables global_data_900_fd_labback_8;
SavedAlterables global_data_901_fd_labback_9;
SavedAlterables global_data_902_fd_labback_10;
SavedAlterables global_data_903_fd_labback_11;
SavedAlterables global_data_904_fd_emptyelitesuit;
SavedAlterables global_data_905_fd_labback_14;
SavedAlterables global_data_906_fd_labback_13;
SavedAlterables global_data_907_fd_labback_15;
SavedAlterables global_data_908_fd_labwall_1;
SavedAlterables global_data_909_fd_labwall_2;
SavedAlterables global_data_910_fd_labfloor_4;
SavedAlterables global_data_911_fd_ventpipe;
SavedAlterables global_data_912_fd_labfloor_11;
SavedAlterables global_data_913_fd_labfloor_6;
SavedAlterables global_data_914_fd_labfloor_1;
SavedAlterables global_data_915_fd_labwall_5;
SavedAlterables global_data_916_fd_labwall_4;
SavedAlterables global_data_917_fd_labfloor_8;
SavedAlterables global_data_918_fd_labwall_3;
SavedAlterables global_data_919_fd_labfloor_10;
SavedAlterables global_data_920_fd_labfloor_12;
SavedAlterables global_data_921_fd_labfloor_2;
SavedAlterables global_data_922_fd_labfloor_5;
SavedAlterables global_data_923_fd_labfloor_7;
SavedAlterables global_data_924_fd_labfloor_9;
SavedAlterables global_data_925_fd_labfloor_13;
SavedAlterables global_data_926_fd_labfloor_14;
SavedAlterables global_data_927_fd_labfloor_3;
SavedAlterables global_data_928_fd_labfloor_15;
SavedAlterables global_data_929_fd_labfloor_16;
SavedAlterables global_data_930_fd_curve_3;
SavedAlterables global_data_931_fd_curve_4;
SavedAlterables global_data_932_fd_curve_2;
SavedAlterables global_data_933_fd_labwall_6;
SavedAlterables global_data_934_fd_labfloor_17;
SavedAlterables global_data_935_fd_labback_19;
SavedAlterables global_data_936_fd_labback_16;
SavedAlterables global_data_937_fd_labback_17;
SavedAlterables global_data_938_fd_labback_18;
SavedAlterables global_data_939_fd_labwall_7;
SavedAlterables global_data_940_fd_coreback_1;
SavedAlterables global_data_941_fd_coreback_2;
SavedAlterables global_data_942_fd_coreloop_2;
SavedAlterables global_data_943_fd_core_4;
SavedAlterables global_data_944_fd_corefloor_2;
SavedAlterables global_data_945_fd_corefloor_4;
SavedAlterables global_data_946_fd_core_2;
SavedAlterables global_data_947_fd_corefloor_3;
SavedAlterables global_data_948_fd_core_6;
SavedAlterables global_data_949_fd_core_7;
SavedAlterables global_data_950_fd_core_5;
SavedAlterables global_data_951_fd_corefloor_1;
SavedAlterables global_data_952_fd_coreslope_1;
SavedAlterables global_data_953_fd_coreslope_3;
SavedAlterables global_data_954_fd_coreslope_5;
SavedAlterables global_data_955_fd_corefloor_5;
SavedAlterables global_data_956_fd_corefloor_6;
SavedAlterables global_data_957_fd_corefloor_8;
SavedAlterables global_data_958_fd_corefloor_7;
SavedAlterables global_data_959_fd_core_3;
SavedAlterables global_data_960_fd_coreslope_2;
SavedAlterables global_data_961_fd_coreslope_4;
SavedAlterables global_data_962_fd_coreslope_6;
SavedAlterables global_data_963_fd_corefloor_9;
SavedAlterables global_data_964_fd_coreloop_1;
SavedAlterables global_data_965_fd_coreloop_3;
SavedAlterables global_data_966_fd_coreloop_4;
SavedAlterables global_data_967_fd_coreloop_5;
SavedAlterables global_data_968_boss_reflect;
SavedAlterables global_data_969_fd_deepcore_4;
SavedAlterables global_data_970_fd_deepcore_6;
SavedAlterables global_data_971_fd_deepcore_8;
SavedAlterables global_data_972_fd_deepcore_5;
SavedAlterables global_data_973_fd_deepcore_11;
SavedAlterables global_data_974_fd_deepcore_12;
SavedAlterables global_data_975_fd_deepcore_9;
SavedAlterables global_data_976_fd_deepcore_7;
SavedAlterables global_data_977_fd_deepcore_1;
SavedAlterables global_data_978_fd_deepcore_10;
SavedAlterables global_data_979_fd_deepcore_13;
SavedAlterables global_data_980_fd_deepcore_14;
SavedAlterables global_data_981_fd_deepcore_2;
SavedAlterables global_data_982_fd_deepcore_3;
SavedAlterables global_data_983_fd_deepcore_15;
SavedAlterables global_data_984_fd_deepcore_16;
SavedAlterables global_data_985_fd_deepcore_17;
SavedAlterables global_data_986_fd_deepcore_19;
SavedAlterables global_data_987_fd_deepcore_20;
SavedAlterables global_data_988_fd_deepcore_21;
SavedAlterables global_data_989_fd_deepcore_22;
SavedAlterables global_data_990_fd_deepcore_nosolid_2;
SavedAlterables global_data_991_map_select;
Counter::SavedCounter global_data_992_map_select;
SavedAlterables global_data_993_dv_wall5;
SavedAlterables global_data_994_general_edge01;
SavedAlterables global_data_995_general_edge02;
SavedAlterables global_data_996_general_edge03;
SavedAlterables global_data_997_general_edge04;
SavedAlterables global_data_998_general_edge05;
SavedAlterables global_data_999_general_anglechanger_165;
SavedAlterables global_data_1000_general_anglechanger_255;
SavedAlterables global_data_1001_general_anglechanger_285;
SavedAlterables global_data_1002_ry_blossomtree_1;
SavedAlterables global_data_1003_ry_soil_1;
SavedAlterables global_data_1004_ry_soil_8;
SavedAlterables global_data_1005_ry_soil_2;
SavedAlterables global_data_1006_ry_soil_3;
SavedAlterables global_data_1007_ry_soil_4;
SavedAlterables global_data_1008_ry_soil_7;
SavedAlterables global_data_1009_ry_soil_5;
SavedAlterables global_data_1010_ry_soil_6;
SavedAlterables global_data_1011_ry_soil_9;
SavedAlterables global_data_1012_ry_soil_11;
SavedAlterables global_data_1013_ry_soil_10;
SavedAlterables global_data_1014_ry_soil_12;
SavedAlterables global_data_1015_ry_wood_1;
SavedAlterables global_data_1016_ry_wood_2;
