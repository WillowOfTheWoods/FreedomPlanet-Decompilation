#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class RMBlueEntrywayRight3_1609 : public Backdrop
{
public:
    RMBlueEntrywayRight3_1609(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueEntrywayRight3", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10909);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmblueentrywayright3_1609(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueEntrywayRight3_1609(x, y);
}
static Image* images_basementlight_1610_0_0[1];
static Direction direction_basementlight_1610_0_0 = {0, 50, 50, 0, 1, images_basementlight_1610_0_0, 1};
static Animation anim_basementlight_1610_0 = {&direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, NULL, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0, &direction_basementlight_1610_0_0};
static Animation * anim_array_basementlight_1610[1] = {&anim_basementlight_1610_0};
static Animations anim_basementlight_1610 = {1, &anim_array_basementlight_1610[0]};
static bool anim_basementlight_1610_initialized;
class BasementLight_1610 : public Active
{
public:
    BasementLight_1610(int x, int y) : Active(x, y, BasementLight_1610_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basement_Light", 14);
#endif
        this->animations = &anim_basementlight_1610;
        if (!anim_basementlight_1610_initialized) {
            anim_basementlight_1610_initialized = true;
            images_basementlight_1610_0_0[0] = get_internal_image(6687);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_basementlight_1610(int x, int y)
{
    return new (Active::pool.create()) BasementLight_1610(x, y);
}
class DialogData_1611 : public Text
{
public:
    DialogData_1611(int x, int y) : Text(x, y, DialogData_1611_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("02 36 ca_04_01 Spade\? What's he doing here\?", 43));
        add_line(std::string("01 12 li_04_01 HEY!", 19));
        add_line(std::string("01 12 li_04_02 What do you think you're doing\?! That's the Kingdom Stone!", 73));
        add_line(std::string("04 00 sp_01_01 So\? I need it to find my father's killer. Not like a couple of traitors like yourselves would care.", 114));
        add_line(std::string("02 27 ca_04_02 I'd rather be called a traitor than a murderer.", 62));
        add_line(std::string("01 24 li_04_03 The Scarves left us no choice!", 45));
        add_line(std::string("04 06 sp_01_02 And you've left me no choice!", 44));
        add_line(std::string("04 09 sp_01_03 Still training, I see.", 37));
        add_line(std::string("02 27 ca_04_03 You wanna fight\? Come and get it!", 48));
        add_line(std::string("04 12 sp_01_04 I'd love to stay and dance, but Mayor Zao's got a tight schedule.", 80));
        add_line(std::string("04 12 sp_01_05 Besides, if something else is guarding this thing, I'd hate to be around when it wakes up.", 105));
        add_line(std::string("01 66 li_04_04 You're insane, you know that\? You're never gonna get away with it!", 81));
        add_line(std::string("04 09 sp_01_07 We'll see about that.", 36));
        add_line(std::string("02 54 ca_04_04 He'll never make it out.", 39));
        add_line(std::string("01 24 li_04_05 But we should! Come on!", 38));
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
FrameObject * create_dialogdata_1611(int x, int y)
{
    return new (Text::pool.create()) DialogData_1611(x, y);
}
class LevelParallaxPiece0a_1612 : public SystemBox
{
public:
    LevelParallaxPiece0a_1612(int x, int y) : SystemBox(x, y, LevelParallaxPiece0a_1612_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0a", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3607);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0a_1612(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0a_1612(x, y);
}
class LevelParallaxBoat1_1613 : public SystemBox
{
public:
    LevelParallaxBoat1_1613(int x, int y) : SystemBox(x, y, LevelParallaxBoat1_1613_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Boat 1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 20;
        type = PATTERN_IMAGE;
        image = get_internal_image(1019);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxboat1_1613(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxBoat1_1613(x, y);
}
class LevelParallaxPiece1_1614 : public SystemBox
{
public:
    LevelParallaxPiece1_1614(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_1614_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 120;
        type = PATTERN_IMAGE;
        image = get_internal_image(3594);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_1614(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_1614(x, y);
}
class LevelParallaxPiece3_1615 : public SystemBox
{
public:
    LevelParallaxPiece3_1615(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_1615_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 200;
        type = PATTERN_IMAGE;
        image = get_internal_image(3606);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_1615(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_1615(x, y);
}
class LevelParallaxPiece2_1616 : public SystemBox
{
public:
    LevelParallaxPiece2_1616(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_1616_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(3454);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_1616(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_1616(x, y);
}
class LevelParallaxPiece4_1617 : public SystemBox
{
public:
    LevelParallaxPiece4_1617(int x, int y) : SystemBox(x, y, LevelParallaxPiece4_1617_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(187);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4_1617(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4_1617(x, y);
}
class LevelParallaxPiece5_1618 : public SystemBox
{
public:
    LevelParallaxPiece5_1618(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_1618_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 380;
        height = 400;
        type = PATTERN_IMAGE;
        image = get_internal_image(3592);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_1618(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_1618(x, y);
}
class LevelParallaxCar_1619 : public SystemBox
{
public:
    LevelParallaxCar_1619(int x, int y) : SystemBox(x, y, LevelParallaxCar_1619_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Car", 18);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 32;
        type = PATTERN_IMAGE;
        image = get_internal_image(7677);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxcar_1619(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxCar_1619(x, y);
}
class LevelParallaxPiece2_1620 : public SystemBox
{
public:
    LevelParallaxPiece2_1620(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_1620_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece2", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(7038);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_1620(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_1620(x, y);
}
static Image* images_breakablewallpiece_1621_0_0[1];
static Direction direction_breakablewallpiece_1621_0_0 = {0, 50, 50, 0, 1, images_breakablewallpiece_1621_0_0, 1};
static Animation anim_breakablewallpiece_1621_0 = {&direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, NULL, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0, &direction_breakablewallpiece_1621_0_0};
static Animation * anim_array_breakablewallpiece_1621[1] = {&anim_breakablewallpiece_1621_0};
static Animations anim_breakablewallpiece_1621 = {1, &anim_array_breakablewallpiece_1621[0]};
static bool anim_breakablewallpiece_1621_initialized;
class BreakableWallPiece_1621 : public Active
{
public:
    BreakableWallPiece_1621(int x, int y) : Active(x, y, BreakableWallPiece_1621_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableWall_piece", 19);
#endif
        this->animations = &anim_breakablewallpiece_1621;
        if (!anim_breakablewallpiece_1621_initialized) {
            anim_breakablewallpiece_1621_initialized = true;
            images_breakablewallpiece_1621_0_0[0] = get_internal_image(8326);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_breakablewallpiece_1621(int x, int y)
{
    return new (Active::pool.create()) BreakableWallPiece_1621(x, y);
}
static Image* images_fireworkparticle_1622_0_0[13];
static Direction direction_fireworkparticle_1622_0_0 = {0, 30, 30, 9, 1, images_fireworkparticle_1622_0_0, 13};
static Animation anim_fireworkparticle_1622_0 = {&direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, NULL, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0, &direction_fireworkparticle_1622_0_0};
static Image* images_fireworkparticle_1622_7_0[3];
static Direction direction_fireworkparticle_1622_7_0 = {0, 100, 100, 0, 5, images_fireworkparticle_1622_7_0, 3};
static Animation anim_fireworkparticle_1622_7 = {&direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, NULL, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0, &direction_fireworkparticle_1622_7_0};
static Animation * anim_array_fireworkparticle_1622[8] = {&anim_fireworkparticle_1622_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_fireworkparticle_1622_7};
static Animations anim_fireworkparticle_1622 = {8, &anim_array_fireworkparticle_1622[0]};
static bool anim_fireworkparticle_1622_initialized;
class FireworkParticle_1622 : public Active
{
public:
    FireworkParticle_1622(int x, int y) : Active(x, y, FireworkParticle_1622_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FireworkParticle", 16);
#endif
        this->animations = &anim_fireworkparticle_1622;
        if (!anim_fireworkparticle_1622_initialized) {
            anim_fireworkparticle_1622_initialized = true;
            images_fireworkparticle_1622_0_0[0] = get_internal_image(233);
            images_fireworkparticle_1622_0_0[1] = get_internal_image(5840);
            images_fireworkparticle_1622_0_0[2] = get_internal_image(233);
            images_fireworkparticle_1622_0_0[3] = get_internal_image(5279);
            images_fireworkparticle_1622_0_0[4] = get_internal_image(5591);
            images_fireworkparticle_1622_0_0[5] = get_internal_image(5833);
            images_fireworkparticle_1622_0_0[6] = get_internal_image(5834);
            images_fireworkparticle_1622_0_0[7] = get_internal_image(5401);
            images_fireworkparticle_1622_0_0[8] = get_internal_image(5835);
            images_fireworkparticle_1622_0_0[9] = get_internal_image(5836);
            images_fireworkparticle_1622_0_0[10] = get_internal_image(5593);
            images_fireworkparticle_1622_0_0[11] = get_internal_image(5841);
            images_fireworkparticle_1622_0_0[12] = get_internal_image(5840);
            images_fireworkparticle_1622_7_0[0] = get_internal_image(5840);
            images_fireworkparticle_1622_7_0[1] = get_internal_image(5840);
            images_fireworkparticle_1622_7_0[2] = get_internal_image(5279);
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
FrameObject * create_fireworkparticle_1622(int x, int y)
{
    return new (Active::pool.create()) FireworkParticle_1622(x, y);
}
static Image* images_minibossboomerang_1623_0_0[1];
static Direction direction_minibossboomerang_1623_0_0 = {0, 50, 50, 0, -1, images_minibossboomerang_1623_0_0, 1};
static Animation anim_minibossboomerang_1623_0 = {&direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, NULL, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0, &direction_minibossboomerang_1623_0_0};
static Image* images_minibossboomerang_1623_6_0[5];
static Direction direction_minibossboomerang_1623_6_0 = {0, 50, 50, 0, 1, images_minibossboomerang_1623_6_0, 5};
static Animation anim_minibossboomerang_1623_6 = {&direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, NULL, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0, &direction_minibossboomerang_1623_6_0};
static Animation * anim_array_minibossboomerang_1623[7] = {&anim_minibossboomerang_1623_0, NULL, NULL, NULL, NULL, NULL, &anim_minibossboomerang_1623_6};
static Animations anim_minibossboomerang_1623 = {7, &anim_array_minibossboomerang_1623[0]};
static bool anim_minibossboomerang_1623_initialized;
class MinibossBoomerang_1623 : public Active
{
public:
    MinibossBoomerang_1623(int x, int y) : Active(x, y, MinibossBoomerang_1623_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Boomerang", 18);
#endif
        this->animations = &anim_minibossboomerang_1623;
        if (!anim_minibossboomerang_1623_initialized) {
            anim_minibossboomerang_1623_initialized = true;
            images_minibossboomerang_1623_0_0[0] = get_internal_image(469);
            images_minibossboomerang_1623_6_0[0] = get_internal_image(6511);
            images_minibossboomerang_1623_6_0[1] = get_internal_image(1616);
            images_minibossboomerang_1623_6_0[2] = get_internal_image(6525);
            images_minibossboomerang_1623_6_0[3] = get_internal_image(6515);
            images_minibossboomerang_1623_6_0[4] = get_internal_image(6532);
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
FrameObject * create_minibossboomerang_1623(int x, int y)
{
    return new (Active::pool.create()) MinibossBoomerang_1623(x, y);
}
static Image* images_minibossbulldozerdebris_1624_0_0[1];
static Direction direction_minibossbulldozerdebris_1624_0_0 = {0, 50, 50, 0, 1, images_minibossbulldozerdebris_1624_0_0, 1};
static Image* images_minibossbulldozerdebris_1624_0_16[1];
static Direction direction_minibossbulldozerdebris_1624_0_16 = {16, 50, 50, 0, 1, images_minibossbulldozerdebris_1624_0_16, 1};
static Animation anim_minibossbulldozerdebris_1624_0 = {&direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, NULL, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, &direction_minibossbulldozerdebris_1624_0_16, NULL, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0, &direction_minibossbulldozerdebris_1624_0_0};
static Animation * anim_array_minibossbulldozerdebris_1624[1] = {&anim_minibossbulldozerdebris_1624_0};
static Animations anim_minibossbulldozerdebris_1624 = {1, &anim_array_minibossbulldozerdebris_1624[0]};
static bool anim_minibossbulldozerdebris_1624_initialized;
class MinibossBulldozerDebris_1624 : public Active
{
public:
    MinibossBulldozerDebris_1624(int x, int y) : Active(x, y, MinibossBulldozerDebris_1624_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_BulldozerDebris", 24);
#endif
        this->animations = &anim_minibossbulldozerdebris_1624;
        if (!anim_minibossbulldozerdebris_1624_initialized) {
            anim_minibossbulldozerdebris_1624_initialized = true;
            images_minibossbulldozerdebris_1624_0_0[0] = get_internal_image(11225);
            images_minibossbulldozerdebris_1624_0_16[0] = get_internal_image(11226);
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
FrameObject * create_minibossbulldozerdebris_1624(int x, int y)
{
    return new (Active::pool.create()) MinibossBulldozerDebris_1624(x, y);
}
static Image* images_breakablefloorpiece_1625_0_0[1];
static Direction direction_breakablefloorpiece_1625_0_0 = {0, 50, 50, 0, 1, images_breakablefloorpiece_1625_0_0, 1};
static Animation anim_breakablefloorpiece_1625_0 = {&direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, NULL, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0, &direction_breakablefloorpiece_1625_0_0};
static Animation * anim_array_breakablefloorpiece_1625[1] = {&anim_breakablefloorpiece_1625_0};
static Animations anim_breakablefloorpiece_1625 = {1, &anim_array_breakablefloorpiece_1625[0]};
static bool anim_breakablefloorpiece_1625_initialized;
class BreakableFloorPiece_1625 : public Active
{
public:
    BreakableFloorPiece_1625(int x, int y) : Active(x, y, BreakableFloorPiece_1625_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableFloor_piece", 20);
#endif
        this->animations = &anim_breakablefloorpiece_1625;
        if (!anim_breakablefloorpiece_1625_initialized) {
            anim_breakablefloorpiece_1625_initialized = true;
            images_breakablefloorpiece_1625_0_0[0] = get_internal_image(5676);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_breakablefloorpiece_1625(int x, int y)
{
    return new (Active::pool.create()) BreakableFloorPiece_1625(x, y);
}
static Image* images_enemylaser_1626_0_0[3];
static Direction direction_enemylaser_1626_0_0 = {0, 90, 90, 0, -1, images_enemylaser_1626_0_0, 3};
static Image* images_enemylaser_1626_0_1[3];
static Direction direction_enemylaser_1626_0_1 = {1, 90, 90, 0, -1, images_enemylaser_1626_0_1, 3};
static Image* images_enemylaser_1626_0_2[3];
static Direction direction_enemylaser_1626_0_2 = {2, 90, 90, 0, -1, images_enemylaser_1626_0_2, 3};
static Image* images_enemylaser_1626_0_3[3];
static Direction direction_enemylaser_1626_0_3 = {3, 90, 90, 0, -1, images_enemylaser_1626_0_3, 3};
static Image* images_enemylaser_1626_0_4[1];
static Direction direction_enemylaser_1626_0_4 = {4, 90, 90, 0, -1, images_enemylaser_1626_0_4, 1};
static Image* images_enemylaser_1626_0_8[3];
static Direction direction_enemylaser_1626_0_8 = {8, 90, 90, 0, -1, images_enemylaser_1626_0_8, 3};
static Image* images_enemylaser_1626_0_24[3];
static Direction direction_enemylaser_1626_0_24 = {24, 90, 90, 0, -1, images_enemylaser_1626_0_24, 3};
static Animation anim_enemylaser_1626_0 = {&direction_enemylaser_1626_0_0, &direction_enemylaser_1626_0_1, &direction_enemylaser_1626_0_2, &direction_enemylaser_1626_0_3, &direction_enemylaser_1626_0_4, &direction_enemylaser_1626_0_4, NULL, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, &direction_enemylaser_1626_0_8, NULL, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, &direction_enemylaser_1626_0_24, NULL, &direction_enemylaser_1626_0_0, &direction_enemylaser_1626_0_0, &direction_enemylaser_1626_0_0};
static Animation * anim_array_enemylaser_1626[1] = {&anim_enemylaser_1626_0};
static Animations anim_enemylaser_1626 = {1, &anim_array_enemylaser_1626[0]};
static bool anim_enemylaser_1626_initialized;
class EnemyLaser_1626 : public Active
{
public:
    EnemyLaser_1626(int x, int y) : Active(x, y, EnemyLaser_1626_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Laser", 11);
#endif
        this->animations = &anim_enemylaser_1626;
        if (!anim_enemylaser_1626_initialized) {
            anim_enemylaser_1626_initialized = true;
            images_enemylaser_1626_0_0[0] = get_internal_image(6845);
            images_enemylaser_1626_0_0[1] = get_internal_image(6843);
            images_enemylaser_1626_0_0[2] = get_internal_image(6844);
            images_enemylaser_1626_0_1[0] = get_internal_image(6846);
            images_enemylaser_1626_0_1[1] = get_internal_image(6848);
            images_enemylaser_1626_0_1[2] = get_internal_image(6849);
            images_enemylaser_1626_0_2[0] = get_internal_image(6847);
            images_enemylaser_1626_0_2[1] = get_internal_image(6851);
            images_enemylaser_1626_0_2[2] = get_internal_image(6852);
            images_enemylaser_1626_0_3[0] = get_internal_image(7117);
            images_enemylaser_1626_0_3[1] = get_internal_image(7144);
            images_enemylaser_1626_0_3[2] = get_internal_image(7126);
            images_enemylaser_1626_0_4[0] = get_internal_image(6116);
            images_enemylaser_1626_0_8[0] = get_internal_image(7561);
            images_enemylaser_1626_0_8[1] = get_internal_image(7562);
            images_enemylaser_1626_0_8[2] = get_internal_image(7563);
            images_enemylaser_1626_0_24[0] = get_internal_image(7564);
            images_enemylaser_1626_0_24[1] = get_internal_image(7565);
            images_enemylaser_1626_0_24[2] = get_internal_image(7566);
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
FrameObject * create_enemylaser_1626(int x, int y)
{
    return new (Active::pool.create()) EnemyLaser_1626(x, y);
}
class FNWall11_1627 : public Backdrop
{
public:
    FNWall11_1627(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall11", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11113);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall11_1627(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall11_1627(x, y);
}
class FNWall10_1628 : public Backdrop
{
public:
    FNWall10_1628(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall10", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(96);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall10_1628(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall10_1628(x, y);
}
class FNWall12_1629 : public Backdrop
{
public:
    FNWall12_1629(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall12", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11110);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall12_1629(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall12_1629(x, y);
}
class FNWall13_1630 : public Backdrop
{
public:
    FNWall13_1630(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall13", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11111);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall13_1630(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall13_1630(x, y);
}
class FNWall15_1631 : public Backdrop
{
public:
    FNWall15_1631(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall15", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6424);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall15_1631(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall15_1631(x, y);
}
class FNGreenRoof_1632 : public Backdrop
{
public:
    FNGreenRoof_1632(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_GreenRoof", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1040);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fngreenroof_1632(int x, int y)
{
    return new (Backdrop::pool.create()) FNGreenRoof_1632(x, y);
}
static Image* images_fireworklauncher_1633_0_0[4];
static Direction direction_fireworklauncher_1633_0_0 = {0, 50, 50, 0, -1, images_fireworklauncher_1633_0_0, 4};
static Animation anim_fireworklauncher_1633_0 = {&direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, NULL, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0, &direction_fireworklauncher_1633_0_0};
static Animation * anim_array_fireworklauncher_1633[1] = {&anim_fireworklauncher_1633_0};
static Animations anim_fireworklauncher_1633 = {1, &anim_array_fireworklauncher_1633[0]};
static bool anim_fireworklauncher_1633_initialized;
class FireworkLauncher_1633 : public Active
{
public:
    FireworkLauncher_1633(int x, int y) : Active(x, y, FireworkLauncher_1633_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FireworkLauncher", 16);
#endif
        set_visible(false);
        this->animations = &anim_fireworklauncher_1633;
        if (!anim_fireworklauncher_1633_initialized) {
            anim_fireworklauncher_1633_initialized = true;
            images_fireworklauncher_1633_0_0[0] = get_internal_image(1694);
            images_fireworklauncher_1633_0_0[1] = get_internal_image(3070);
            images_fireworklauncher_1633_0_0[2] = get_internal_image(5276);
            images_fireworklauncher_1633_0_0[3] = get_internal_image(3071);
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
FrameObject * create_fireworklauncher_1633(int x, int y)
{
    return new (Active::pool.create()) FireworkLauncher_1633(x, y);
}
class FNSignHolder_1634 : public Backdrop
{
public:
    FNSignHolder_1634(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_SignHolder", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8473);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnsignholder_1634(int x, int y)
{
    return new (Backdrop::pool.create()) FNSignHolder_1634(x, y);
}
static Image* images_largesign1_1635_0_0[6];
static Direction direction_largesign1_1635_0_0 = {0, 70, 70, 0, -1, images_largesign1_1635_0_0, 6};
static Image* images_largesign1_1635_0_8[2];
static Direction direction_largesign1_1635_0_8 = {8, 50, 50, 0, 1, images_largesign1_1635_0_8, 2};
static Animation anim_largesign1_1635_0 = {&direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, NULL, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, &direction_largesign1_1635_0_8, NULL, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0, &direction_largesign1_1635_0_0};
static Animation * anim_array_largesign1_1635[1] = {&anim_largesign1_1635_0};
static Animations anim_largesign1_1635 = {1, &anim_array_largesign1_1635[0]};
static bool anim_largesign1_1635_initialized;
class LargeSign1_1635 : public Active
{
public:
    LargeSign1_1635(int x, int y) : Active(x, y, LargeSign1_1635_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Large_sign 1", 12);
#endif
        this->animations = &anim_largesign1_1635;
        if (!anim_largesign1_1635_initialized) {
            anim_largesign1_1635_initialized = true;
            images_largesign1_1635_0_0[0] = get_internal_image(8476);
            images_largesign1_1635_0_0[1] = get_internal_image(8480);
            images_largesign1_1635_0_0[2] = get_internal_image(8481);
            images_largesign1_1635_0_0[3] = get_internal_image(8477);
            images_largesign1_1635_0_0[4] = get_internal_image(8481);
            images_largesign1_1635_0_0[5] = get_internal_image(8480);
            images_largesign1_1635_0_8[0] = get_internal_image(6661);
            images_largesign1_1635_0_8[1] = get_internal_image(1028);
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
FrameObject * create_largesign1_1635(int x, int y)
{
    return new (Active::pool.create()) LargeSign1_1635(x, y);
}
static Image* images_largesign2_1636_0_0[6];
static Direction direction_largesign2_1636_0_0 = {0, 70, 70, 0, -1, images_largesign2_1636_0_0, 6};
static Animation anim_largesign2_1636_0 = {&direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, NULL, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0, &direction_largesign2_1636_0_0};
static Animation * anim_array_largesign2_1636[1] = {&anim_largesign2_1636_0};
static Animations anim_largesign2_1636 = {1, &anim_array_largesign2_1636[0]};
static bool anim_largesign2_1636_initialized;
class LargeSign2_1636 : public Active
{
public:
    LargeSign2_1636(int x, int y) : Active(x, y, LargeSign2_1636_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Large_sign 2", 12);
#endif
        this->animations = &anim_largesign2_1636;
        if (!anim_largesign2_1636_initialized) {
            anim_largesign2_1636_initialized = true;
            images_largesign2_1636_0_0[0] = get_internal_image(8474);
            images_largesign2_1636_0_0[1] = get_internal_image(8475);
            images_largesign2_1636_0_0[2] = get_internal_image(8479);
            images_largesign2_1636_0_0[3] = get_internal_image(8478);
            images_largesign2_1636_0_0[4] = get_internal_image(8479);
            images_largesign2_1636_0_0[5] = get_internal_image(8475);
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
FrameObject * create_largesign2_1636(int x, int y)
{
    return new (Active::pool.create()) LargeSign2_1636(x, y);
}
static Image* images_gimmickdragontunnel1_1637_0_0[1];
static Direction direction_gimmickdragontunnel1_1637_0_0 = {0, 0, 0, 0, 1, images_gimmickdragontunnel1_1637_0_0, 1};
static Animation anim_gimmickdragontunnel1_1637_0 = {&direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, NULL, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0, &direction_gimmickdragontunnel1_1637_0_0};
static Animation * anim_array_gimmickdragontunnel1_1637[1] = {&anim_gimmickdragontunnel1_1637_0};
static Animations anim_gimmickdragontunnel1_1637 = {1, &anim_array_gimmickdragontunnel1_1637[0]};
static bool anim_gimmickdragontunnel1_1637_initialized;
class GimmickDragonTunnel1_1637 : public Active
{
public:
    GimmickDragonTunnel1_1637(int x, int y) : Active(x, y, GimmickDragonTunnel1_1637_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnel 1", 22);
#endif
        this->animations = &anim_gimmickdragontunnel1_1637;
        if (!anim_gimmickdragontunnel1_1637_initialized) {
            anim_gimmickdragontunnel1_1637_initialized = true;
            images_gimmickdragontunnel1_1637_0_0[0] = get_internal_image(8482);
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
FrameObject * create_gimmickdragontunnel1_1637(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnel1_1637(x, y);
}
static Image* images_gimmickdragontunnelhead_1638_0_0[1];
static Direction direction_gimmickdragontunnelhead_1638_0_0 = {0, 50, 50, 0, 1, images_gimmickdragontunnelhead_1638_0_0, 1};
static Animation anim_gimmickdragontunnelhead_1638_0 = {&direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, NULL, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0, &direction_gimmickdragontunnelhead_1638_0_0};
static Animation * anim_array_gimmickdragontunnelhead_1638[1] = {&anim_gimmickdragontunnelhead_1638_0};
static Animations anim_gimmickdragontunnelhead_1638 = {1, &anim_array_gimmickdragontunnelhead_1638[0]};
static bool anim_gimmickdragontunnelhead_1638_initialized;
class GimmickDragonTunnelHead_1638 : public Active
{
public:
    GimmickDragonTunnelHead_1638(int x, int y) : Active(x, y, GimmickDragonTunnelHead_1638_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnelHead", 24);
#endif
        this->animations = &anim_gimmickdragontunnelhead_1638;
        if (!anim_gimmickdragontunnelhead_1638_initialized) {
            anim_gimmickdragontunnelhead_1638_initialized = true;
            images_gimmickdragontunnelhead_1638_0_0[0] = get_internal_image(299);
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
FrameObject * create_gimmickdragontunnelhead_1638(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnelHead_1638(x, y);
}
static Image* images_gimmickdragontunnel2_1639_0_0[1];
static Direction direction_gimmickdragontunnel2_1639_0_0 = {0, 50, 50, 0, 1, images_gimmickdragontunnel2_1639_0_0, 1};
static Animation anim_gimmickdragontunnel2_1639_0 = {&direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, NULL, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0, &direction_gimmickdragontunnel2_1639_0_0};
static Animation * anim_array_gimmickdragontunnel2_1639[1] = {&anim_gimmickdragontunnel2_1639_0};
static Animations anim_gimmickdragontunnel2_1639 = {1, &anim_array_gimmickdragontunnel2_1639[0]};
static bool anim_gimmickdragontunnel2_1639_initialized;
class GimmickDragonTunnel2_1639 : public Active
{
public:
    GimmickDragonTunnel2_1639(int x, int y) : Active(x, y, GimmickDragonTunnel2_1639_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnel 2", 22);
#endif
        this->animations = &anim_gimmickdragontunnel2_1639;
        if (!anim_gimmickdragontunnel2_1639_initialized) {
            anim_gimmickdragontunnel2_1639_initialized = true;
            images_gimmickdragontunnel2_1639_0_0[0] = get_internal_image(8482);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 180);
        alterables->values.set(5, 4);
        alterables->values.set(6, 32);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickdragontunnel2_1639(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnel2_1639(x, y);
}
static Image* images_gimmickdragontunnelhead2_1640_0_0[1];
static Direction direction_gimmickdragontunnelhead2_1640_0_0 = {0, 50, 50, 0, 1, images_gimmickdragontunnelhead2_1640_0_0, 1};
static Animation anim_gimmickdragontunnelhead2_1640_0 = {&direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, NULL, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0, &direction_gimmickdragontunnelhead2_1640_0_0};
static Animation * anim_array_gimmickdragontunnelhead2_1640[1] = {&anim_gimmickdragontunnelhead2_1640_0};
static Animations anim_gimmickdragontunnelhead2_1640 = {1, &anim_array_gimmickdragontunnelhead2_1640[0]};
static bool anim_gimmickdragontunnelhead2_1640_initialized;
class GimmickDragonTunnelHead2_1640 : public Active
{
public:
    GimmickDragonTunnelHead2_1640(int x, int y) : Active(x, y, GimmickDragonTunnelHead2_1640_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_DragonTunnelHead 2", 26);
#endif
        this->animations = &anim_gimmickdragontunnelhead2_1640;
        if (!anim_gimmickdragontunnelhead2_1640_initialized) {
            anim_gimmickdragontunnelhead2_1640_initialized = true;
            images_gimmickdragontunnelhead2_1640_0_0[0] = get_internal_image(2608);
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
FrameObject * create_gimmickdragontunnelhead2_1640(int x, int y)
{
    return new (Active::pool.create()) GimmickDragonTunnelHead2_1640(x, y);
}
class FNClothesline_1641 : public Backdrop
{
public:
    FNClothesline_1641(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Clothesline", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5112);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnclothesline_1641(int x, int y)
{
    return new (Backdrop::pool.create()) FNClothesline_1641(x, y);
}
class BackWall2_1642 : public Backdrop
{
public:
    BackWall2_1642(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Back wall 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4347);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backwall2_1642(int x, int y)
{
    return new (Backdrop::pool.create()) BackWall2_1642(x, y);
}
class FNBackWall5_1643 : public Backdrop
{
public:
    FNBackWall5_1643(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackWall5", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3074);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackwall5_1643(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackWall5_1643(x, y);
}
class FerrisWheelBase2_1644 : public Backdrop
{
public:
    FerrisWheelBase2_1644(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FerrisWheel_Base 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6425);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ferriswheelbase2_1644(int x, int y)
{
    return new (Backdrop::pool.create()) FerrisWheelBase2_1644(x, y);
}
class FNBackWall1_1645 : public Backdrop
{
public:
    FNBackWall1_1645(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackWall1", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(101);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackwall1_1645(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackWall1_1645(x, y);
}
class FNRedColumnBack_1646 : public Backdrop
{
public:
    FNRedColumnBack_1646(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_RedColumn_back", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11135);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnredcolumnback_1646(int x, int y)
{
    return new (Backdrop::pool.create()) FNRedColumnBack_1646(x, y);
}
class FNBackWall4_1647 : public Backdrop
{
public:
    FNBackWall4_1647(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackWall4", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4325);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackwall4_1647(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackWall4_1647(x, y);
}
class FNBackWall6_1648 : public Backdrop
{
public:
    FNBackWall6_1648(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackWall6", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3022);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackwall6_1648(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackWall6_1648(x, y);
}
class FNFloor8_1649 : public Backdrop
{
public:
    FNFloor8_1649(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1289);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor8_1649(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor8_1649(x, y);
}
class FNFloor6_1650 : public Backdrop
{
public:
    FNFloor6_1650(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1211);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnfloor6_1650(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor6_1650(x, y);
}
class Rooftop5_1651 : public Backdrop
{
public:
    Rooftop5_1651(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Rooftop 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6240);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rooftop5_1651(int x, int y)
{
    return new (Backdrop::pool.create()) Rooftop5_1651(x, y);
}
class Rooftop4_1652 : public Backdrop
{
public:
    Rooftop4_1652(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Rooftop 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6248);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rooftop4_1652(int x, int y)
{
    return new (Backdrop::pool.create()) Rooftop4_1652(x, y);
}
class Floor26_1653 : public Backdrop
{
public:
    Floor26_1653(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 26", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6377);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor26_1653(int x, int y)
{
    return new (Backdrop::pool.create()) Floor26_1653(x, y);
}
class Floor25_1654 : public Backdrop
{
public:
    Floor25_1654(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 25", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6426);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor25_1654(int x, int y)
{
    return new (Backdrop::pool.create()) Floor25_1654(x, y);
}
class FNApartmentWall1_1655 : public Backdrop
{
public:
    FNApartmentWall1_1655(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_ApartmentWall1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11139);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnapartmentwall1_1655(int x, int y)
{
    return new (Backdrop::pool.create()) FNApartmentWall1_1655(x, y);
}
class FNApartmentWindow_1656 : public Backdrop
{
public:
    FNApartmentWindow_1656(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_ApartmentWindow", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11138);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnapartmentwindow_1656(int x, int y)
{
    return new (Backdrop::pool.create()) FNApartmentWindow_1656(x, y);
}
class Floor34_1657 : public Backdrop
{
public:
    Floor34_1657(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 34", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5781);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor34_1657(int x, int y)
{
    return new (Backdrop::pool.create()) Floor34_1657(x, y);
}
class FNRooftop3_1658 : public Backdrop
{
public:
    FNRooftop3_1658(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Rooftop3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6818);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnrooftop3_1658(int x, int y)
{
    return new (Backdrop::pool.create()) FNRooftop3_1658(x, y);
}
class FNFloor12_1659 : public Backdrop
{
public:
    FNFloor12_1659(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor12", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1719);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor12_1659(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor12_1659(x, y);
}
class FNFloor14_1660 : public Backdrop
{
public:
    FNFloor14_1660(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor14", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1144);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor14_1660(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor14_1660(x, y);
}
class FNFloor17_1661 : public Backdrop
{
public:
    FNFloor17_1661(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor17", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1756);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor17_1661(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor17_1661(x, y);
}
class FNLadder_1662 : public Backdrop
{
public:
    FNLadder_1662(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(509);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_fnladder_1662(int x, int y)
{
    return new (Backdrop::pool.create()) FNLadder_1662(x, y);
}
class FNBackWall3_1663 : public Backdrop
{
public:
    FNBackWall3_1663(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackWall3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3068);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackwall3_1663(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackWall3_1663(x, y);
}
class FerrisWheelBase_1664 : public Backdrop
{
public:
    FerrisWheelBase_1664(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FerrisWheel_Base", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6271);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_ferriswheelbase_1664(int x, int y)
{
    return new (Backdrop::pool.create()) FerrisWheelBase_1664(x, y);
}
class FNWall21_1665 : public Backdrop
{
public:
    FNWall21_1665(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall21", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4283);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall21_1665(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall21_1665(x, y);
}
class FNBackHedge_1666 : public Backdrop
{
public:
    FNBackHedge_1666(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BackHedge", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4286);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbackhedge_1666(int x, int y)
{
    return new (Backdrop::pool.create()) FNBackHedge_1666(x, y);
}
class FNFloor20_1667 : public Backdrop
{
public:
    FNFloor20_1667(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor20", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2855);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor20_1667(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor20_1667(x, y);
}
class FNWall14_1668 : public Backdrop
{
public:
    FNWall14_1668(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall14", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11142);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall14_1668(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall14_1668(x, y);
}
class FNWall16_1669 : public Backdrop
{
public:
    FNWall16_1669(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall16", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3452);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall16_1669(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall16_1669(x, y);
}
class FNWall6_1670 : public Backdrop
{
public:
    FNWall6_1670(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall6", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11137);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnwall6_1670(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall6_1670(x, y);
}
class FNWall7_1671 : public Backdrop
{
public:
    FNWall7_1671(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall7", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2991);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnwall7_1671(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall7_1671(x, y);
}
class FNWall5_1672 : public Backdrop
{
public:
    FNWall5_1672(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall5", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4324);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnwall5_1672(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall5_1672(x, y);
}
class FNRedColumn_1673 : public Backdrop
{
public:
    FNRedColumn_1673(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_RedColumn", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11134);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnredcolumn_1673(int x, int y)
{
    return new (Backdrop::pool.create()) FNRedColumn_1673(x, y);
}
class Floor33_1674 : public Backdrop
{
public:
    Floor33_1674(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 33", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6379);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor33_1674(int x, int y)
{
    return new (Backdrop::pool.create()) Floor33_1674(x, y);
}
class Floor21_1675 : public Backdrop
{
public:
    Floor21_1675(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 21", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_floor21_1675(int x, int y)
{
    return new (Backdrop::pool.create()) Floor21_1675(x, y);
}
class FNApartmentWall3_1676 : public Backdrop
{
public:
    FNApartmentWall3_1676(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_ApartmentWall3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11140);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnapartmentwall3_1676(int x, int y)
{
    return new (Backdrop::pool.create()) FNApartmentWall3_1676(x, y);
}
class FNApartmentWall2_1677 : public Backdrop
{
public:
    FNApartmentWall2_1677(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_ApartmentWall2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11141);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnapartmentwall2_1677(int x, int y)
{
    return new (Backdrop::pool.create()) FNApartmentWall2_1677(x, y);
}
class FNSoil_1678 : public Backdrop
{
public:
    FNSoil_1678(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Soil", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4285);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnsoil_1678(int x, int y)
{
    return new (Backdrop::pool.create()) FNSoil_1678(x, y);
}
class Floor5_1679 : public Backdrop
{
public:
    Floor5_1679(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 5", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6244);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_floor5_1679(int x, int y)
{
    return new (Backdrop::pool.create()) Floor5_1679(x, y);
}
class Floor7_1680 : public Backdrop
{
public:
    Floor7_1680(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 7", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6296);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_floor7_1680(int x, int y)
{
    return new (Backdrop::pool.create()) Floor7_1680(x, y);
}
class Floor3_1681 : public Backdrop
{
public:
    Floor3_1681(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 3", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6247);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_floor3_1681(int x, int y)
{
    return new (Backdrop::pool.create()) Floor3_1681(x, y);
}
class Floor1_1682 : public Backdrop
{
public:
    Floor1_1682(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 1", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1692);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_floor1_1682(int x, int y)
{
    return new (Backdrop::pool.create()) Floor1_1682(x, y);
}
class Floor4_1683 : public Backdrop
{
public:
    Floor4_1683(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 4", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1445);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_floor4_1683(int x, int y)
{
    return new (Backdrop::pool.create()) Floor4_1683(x, y);
}
class FNFloor27_1684 : public Backdrop
{
public:
    FNFloor27_1684(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor27", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11115);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor27_1684(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor27_1684(x, y);
}
class FNFloor28_1685 : public Backdrop
{
public:
    FNFloor28_1685(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor28", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11116);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor28_1685(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor28_1685(x, y);
}
class FNRooftop1_1686 : public Backdrop
{
public:
    FNRooftop1_1686(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Rooftop1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6420);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnrooftop1_1686(int x, int y)
{
    return new (Backdrop::pool.create()) FNRooftop1_1686(x, y);
}
class FNRooftop2_1687 : public Backdrop
{
public:
    FNRooftop2_1687(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Rooftop2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6817);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnrooftop2_1687(int x, int y)
{
    return new (Backdrop::pool.create()) FNRooftop2_1687(x, y);
}
class FNFloor9_1688 : public Backdrop
{
public:
    FNFloor9_1688(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1193);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor9_1688(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor9_1688(x, y);
}
class GimmickRollingArchBack_1689 : public Backdrop
{
public:
    GimmickRollingArchBack_1689(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_RollingArchBack", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11143);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickrollingarchback_1689(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickRollingArchBack_1689(x, y);
}
class FNFloor11_1690 : public Backdrop
{
public:
    FNFloor11_1690(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor11", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11131);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor11_1690(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor11_1690(x, y);
}
class FNFloor13_1691 : public Backdrop
{
public:
    FNFloor13_1691(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor13", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1081);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor13_1691(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor13_1691(x, y);
}
class FNFloor10_1692 : public Backdrop
{
public:
    FNFloor10_1692(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1248);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor10_1692(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor10_1692(x, y);
}
class FNFloor15_1693 : public Backdrop
{
public:
    FNFloor15_1693(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor15", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7481);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor15_1693(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor15_1693(x, y);
}
class FNFloor16_1694 : public Backdrop
{
public:
    FNFloor16_1694(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor16", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1949);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor16_1694(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor16_1694(x, y);
}
class FNWall18_1695 : public Backdrop
{
public:
    FNWall18_1695(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall18", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8471);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall18_1695(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall18_1695(x, y);
}
class FNWall19_1696 : public Backdrop
{
public:
    FNWall19_1696(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Wall19", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8472);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnwall19_1696(int x, int y)
{
    return new (Backdrop::pool.create()) FNWall19_1696(x, y);
}
class Floor19_1697 : public Backdrop
{
public:
    Floor19_1697(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 19", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6389);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor19_1697(int x, int y)
{
    return new (Backdrop::pool.create()) Floor19_1697(x, y);
}
class Floor22_1698 : public Backdrop
{
public:
    Floor22_1698(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 22", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6388);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor22_1698(int x, int y)
{
    return new (Backdrop::pool.create()) Floor22_1698(x, y);
}
class Floor23_1699 : public Backdrop
{
public:
    Floor23_1699(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 23", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1721);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor23_1699(int x, int y)
{
    return new (Backdrop::pool.create()) Floor23_1699(x, y);
}
class Floor32_1700 : public Backdrop
{
public:
    Floor32_1700(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 32", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6430);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor32_1700(int x, int y)
{
    return new (Backdrop::pool.create()) Floor32_1700(x, y);
}
class Backdrop3_1701 : public Backdrop
{
public:
    Backdrop3_1701(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6436);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_1701(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_1701(x, y);
}
class DragonSlope1_1702 : public Backdrop
{
public:
    DragonSlope1_1702(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dragon Slope 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6434);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dragonslope1_1702(int x, int y)
{
    return new (Backdrop::pool.create()) DragonSlope1_1702(x, y);
}
class FNFloor24_1703 : public Backdrop
{
public:
    FNFloor24_1703(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor24", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11075);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fnfloor24_1703(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor24_1703(x, y);
}
class FNBrokenCeiling_1704 : public Backdrop
{
public:
    FNBrokenCeiling_1704(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BrokenCeiling", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6310);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbrokenceiling_1704(int x, int y)
{
    return new (Backdrop::pool.create()) FNBrokenCeiling_1704(x, y);
}
class FNBustedWall_1705 : public Backdrop
{
public:
    FNBustedWall_1705(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_BustedWall", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11148);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnbustedwall_1705(int x, int y)
{
    return new (Backdrop::pool.create()) FNBustedWall_1705(x, y);
}
class FNFloor29_1706 : public Backdrop
{
public:
    FNFloor29_1706(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Floor29", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11117);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fnfloor29_1706(int x, int y)
{
    return new (Backdrop::pool.create()) FNFloor29_1706(x, y);
}
class Floor30_1707 : public Backdrop
{
public:
    Floor30_1707(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 30", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(105);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor30_1707(int x, int y)
{
    return new (Backdrop::pool.create()) Floor30_1707(x, y);
}
class Floor31_1708 : public Backdrop
{
public:
    Floor31_1708(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Floor 31", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1208);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_floor31_1708(int x, int y)
{
    return new (Backdrop::pool.create()) Floor31_1708(x, y);
}
