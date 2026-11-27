#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class Backdrop2_606 : public Backdrop
{
public:
    Backdrop2_606(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14414);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_606(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_606(x, y);
}
class TreehouseSolidBlack_607 : public QuickBackdrop
{
public:
    TreehouseSolidBlack_607(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_SolidBlack", 20);
#endif
        flags |= BACKGROUND;
        width = 56;
        height = 128;
        color = Color(0, 0, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_treehousesolidblack_607(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TreehouseSolidBlack_607(x, y);
}
class HouseWallleft_608 : public Backdrop
{
public:
    HouseWallleft_608(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Wallleft", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14417);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housewallleft_608(int x, int y)
{
    return new (Backdrop::pool.create()) HouseWallleft_608(x, y);
}
class LTNightGround2_609 : public Backdrop
{
public:
    LTNightGround2_609(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LT_NightGround 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3006);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_ltnightground2_609(int x, int y)
{
    return new (Backdrop::pool.create()) LTNightGround2_609(x, y);
}
class LTNightGround4_610 : public Backdrop
{
public:
    LTNightGround4_610(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LT_NightGround 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6169);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_ltnightground4_610(int x, int y)
{
    return new (Backdrop::pool.create()) LTNightGround4_610(x, y);
}
class HeartTank_611 : public Backdrop
{
public:
    HeartTank_611(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Heart tank", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11912);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hearttank_611(int x, int y)
{
    return new (Backdrop::pool.create()) HeartTank_611(x, y);
}
class Backdrop12_612 : public Backdrop
{
public:
    Backdrop12_612(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 12", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14419);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop12_612(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop12_612(x, y);
}
class TentFloorFadeLeft_613 : public Backdrop
{
public:
    TentFloorFadeLeft_613(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Tent_FloorFadeLeft", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1604);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tentfloorfadeleft_613(int x, int y)
{
    return new (Backdrop::pool.create()) TentFloorFadeLeft_613(x, y);
}
class TentFloorFadeRight_614 : public Backdrop
{
public:
    TentFloorFadeRight_614(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Tent_FloorFadeRight", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1608);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tentfloorfaderight_614(int x, int y)
{
    return new (Backdrop::pool.create()) TentFloorFadeRight_614(x, y);
}
static Image* images_furniturefloor9_615_0_0[2];
static Direction direction_furniturefloor9_615_0_0 = {0, 0, 0, 0, 1, images_furniturefloor9_615_0_0, 2};
static Animation anim_furniturefloor9_615_0 = {&direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, NULL, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0, &direction_furniturefloor9_615_0_0};
static Animation * anim_array_furniturefloor9_615[1] = {&anim_furniturefloor9_615_0};
static Animations anim_furniturefloor9_615 = {1, &anim_array_furniturefloor9_615[0]};
static bool anim_furniturefloor9_615_initialized;
class FurnitureFloor9_615 : public Active
{
public:
    FurnitureFloor9_615(int x, int y) : Active(x, y, FurnitureFloor9_615_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 9", 17);
#endif
        this->animations = &anim_furniturefloor9_615;
        if (!anim_furniturefloor9_615_initialized) {
            anim_furniturefloor9_615_initialized = true;
            images_furniturefloor9_615_0_0[0] = get_internal_image(13727);
            images_furniturefloor9_615_0_0[1] = get_internal_image(13729);
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
FrameObject * create_furniturefloor9_615(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor9_615(x, y);
}
static Image* images_torqueshell_616_0_0[2];
static Direction direction_torqueshell_616_0_0 = {0, 0, 0, 0, 1, images_torqueshell_616_0_0, 2};
static Animation anim_torqueshell_616_0 = {&direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, NULL, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0, &direction_torqueshell_616_0_0};
static Animation * anim_array_torqueshell_616[1] = {&anim_torqueshell_616_0};
static Animations anim_torqueshell_616 = {1, &anim_array_torqueshell_616[0]};
static bool anim_torqueshell_616_initialized;
class TorqueShell_616 : public Active
{
public:
    TorqueShell_616(int x, int y) : Active(x, y, TorqueShell_616_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueShell", 11);
#endif
        set_visible(false);
        this->animations = &anim_torqueshell_616;
        if (!anim_torqueshell_616_initialized) {
            anim_torqueshell_616_initialized = true;
            images_torqueshell_616_0_0[0] = get_internal_image(16210);
            images_torqueshell_616_0_0[1] = get_internal_image(16209);
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
FrameObject * create_torqueshell_616(int x, int y)
{
    return new (Active::pool.create()) TorqueShell_616(x, y);
}
static Image* images_tentlight_617_0_0[6];
static Direction direction_tentlight_617_0_0 = {0, 14, 14, 0, -1, images_tentlight_617_0_0, 6};
static Image* images_tentlight_617_0_8[1];
static Direction direction_tentlight_617_0_8 = {8, 50, 50, 0, 1, images_tentlight_617_0_8, 1};
static Animation anim_tentlight_617_0 = {&direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, NULL, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, &direction_tentlight_617_0_8, NULL, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0, &direction_tentlight_617_0_0};
static Image* images_tentlight_617_7_0[2];
static Direction direction_tentlight_617_7_0 = {0, 50, 50, 0, -1, images_tentlight_617_7_0, 2};
static Animation anim_tentlight_617_7 = {&direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, NULL, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0, &direction_tentlight_617_7_0};
static Animation * anim_array_tentlight_617[8] = {&anim_tentlight_617_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_tentlight_617_7};
static Animations anim_tentlight_617 = {8, &anim_array_tentlight_617[0]};
static bool anim_tentlight_617_initialized;
class TentLight_617 : public Active
{
public:
    TentLight_617(int x, int y) : Active(x, y, TentLight_617_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TentLight", 9);
#endif
        this->animations = &anim_tentlight_617;
        if (!anim_tentlight_617_initialized) {
            anim_tentlight_617_initialized = true;
            images_tentlight_617_0_0[0] = get_internal_image(13421);
            images_tentlight_617_0_0[1] = get_internal_image(13419);
            images_tentlight_617_0_0[2] = get_internal_image(13422);
            images_tentlight_617_0_0[3] = get_internal_image(13423);
            images_tentlight_617_0_0[4] = get_internal_image(13422);
            images_tentlight_617_0_0[5] = get_internal_image(13419);
            images_tentlight_617_0_8[0] = get_internal_image(13402);
            images_tentlight_617_7_0[0] = get_internal_image(13421);
            images_tentlight_617_7_0[1] = get_internal_image(13423);
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
FrameObject * create_tentlight_617(int x, int y)
{
    return new (Active::pool.create()) TentLight_617(x, y);
}
static Image* images_furniturewall3_618_0_0[8];
static Direction direction_furniturewall3_618_0_0 = {0, 0, 0, 0, 1, images_furniturewall3_618_0_0, 8};
static Animation anim_furniturewall3_618_0 = {&direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, NULL, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0, &direction_furniturewall3_618_0_0};
static Animation * anim_array_furniturewall3_618[1] = {&anim_furniturewall3_618_0};
static Animations anim_furniturewall3_618 = {1, &anim_array_furniturewall3_618[0]};
static bool anim_furniturewall3_618_initialized;
class FurnitureWall3_618 : public Active
{
public:
    FurnitureWall3_618(int x, int y) : Active(x, y, FurnitureWall3_618_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall 3", 16);
#endif
        this->animations = &anim_furniturewall3_618;
        if (!anim_furniturewall3_618_initialized) {
            anim_furniturewall3_618_initialized = true;
            images_furniturewall3_618_0_0[0] = get_internal_image(13369);
            images_furniturewall3_618_0_0[1] = get_internal_image(13367);
            images_furniturewall3_618_0_0[2] = get_internal_image(13352);
            images_furniturewall3_618_0_0[3] = get_internal_image(13364);
            images_furniturewall3_618_0_0[4] = get_internal_image(13350);
            images_furniturewall3_618_0_0[5] = get_internal_image(13358);
            images_furniturewall3_618_0_0[6] = get_internal_image(13363);
            images_furniturewall3_618_0_0[7] = get_internal_image(13354);
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
FrameObject * create_furniturewall3_618(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall3_618(x, y);
}
static Image* images_furniturefloor4_619_0_0[1];
static Direction direction_furniturefloor4_619_0_0 = {0, 0, 0, 0, 1, images_furniturefloor4_619_0_0, 1};
static Animation anim_furniturefloor4_619_0 = {&direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, NULL, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0, &direction_furniturefloor4_619_0_0};
static Animation * anim_array_furniturefloor4_619[1] = {&anim_furniturefloor4_619_0};
static Animations anim_furniturefloor4_619 = {1, &anim_array_furniturefloor4_619[0]};
static bool anim_furniturefloor4_619_initialized;
class FurnitureFloor4_619 : public Active
{
public:
    FurnitureFloor4_619(int x, int y) : Active(x, y, FurnitureFloor4_619_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 4", 17);
#endif
        this->animations = &anim_furniturefloor4_619;
        if (!anim_furniturefloor4_619_initialized) {
            anim_furniturefloor4_619_initialized = true;
            images_furniturefloor4_619_0_0[0] = get_internal_image(14437);
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
FrameObject * create_furniturefloor4_619(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor4_619(x, y);
}
static Image* images_furniturefloor8_620_0_0[1];
static Direction direction_furniturefloor8_620_0_0 = {0, 0, 0, 0, 1, images_furniturefloor8_620_0_0, 1};
static Animation anim_furniturefloor8_620_0 = {&direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, NULL, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0, &direction_furniturefloor8_620_0_0};
static Animation * anim_array_furniturefloor8_620[1] = {&anim_furniturefloor8_620_0};
static Animations anim_furniturefloor8_620 = {1, &anim_array_furniturefloor8_620[0]};
static bool anim_furniturefloor8_620_initialized;
class FurnitureFloor8_620 : public Active
{
public:
    FurnitureFloor8_620(int x, int y) : Active(x, y, FurnitureFloor8_620_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 8", 17);
#endif
        this->animations = &anim_furniturefloor8_620;
        if (!anim_furniturefloor8_620_initialized) {
            anim_furniturefloor8_620_initialized = true;
            images_furniturefloor8_620_0_0[0] = get_internal_image(13720);
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
FrameObject * create_furniturefloor8_620(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor8_620(x, y);
}
static Image* images_furniturefloor10_621_0_0[2];
static Direction direction_furniturefloor10_621_0_0 = {0, 0, 0, 0, 1, images_furniturefloor10_621_0_0, 2};
static Animation anim_furniturefloor10_621_0 = {&direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, NULL, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0, &direction_furniturefloor10_621_0_0};
static Animation * anim_array_furniturefloor10_621[1] = {&anim_furniturefloor10_621_0};
static Animations anim_furniturefloor10_621 = {1, &anim_array_furniturefloor10_621[0]};
static bool anim_furniturefloor10_621_initialized;
class FurnitureFloor10_621 : public Active
{
public:
    FurnitureFloor10_621(int x, int y) : Active(x, y, FurnitureFloor10_621_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 10", 18);
#endif
        this->animations = &anim_furniturefloor10_621;
        if (!anim_furniturefloor10_621_initialized) {
            anim_furniturefloor10_621_initialized = true;
            images_furniturefloor10_621_0_0[0] = get_internal_image(14408);
            images_furniturefloor10_621_0_0[1] = get_internal_image(14406);
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
FrameObject * create_furniturefloor10_621(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor10_621(x, y);
}
static Image* images_furniturefloor5_622_0_0[1];
static Direction direction_furniturefloor5_622_0_0 = {0, 0, 0, 0, 1, images_furniturefloor5_622_0_0, 1};
static Animation anim_furniturefloor5_622_0 = {&direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, NULL, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0, &direction_furniturefloor5_622_0_0};
static Animation * anim_array_furniturefloor5_622[1] = {&anim_furniturefloor5_622_0};
static Animations anim_furniturefloor5_622 = {1, &anim_array_furniturefloor5_622[0]};
static bool anim_furniturefloor5_622_initialized;
class FurnitureFloor5_622 : public Active
{
public:
    FurnitureFloor5_622(int x, int y) : Active(x, y, FurnitureFloor5_622_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 5", 17);
#endif
        this->animations = &anim_furniturefloor5_622;
        if (!anim_furniturefloor5_622_initialized) {
            anim_furniturefloor5_622_initialized = true;
            images_furniturefloor5_622_0_0[0] = get_internal_image(13366);
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
FrameObject * create_furniturefloor5_622(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor5_622(x, y);
}
static Image* images_treehousedoor2_623_0_0[1];
static Direction direction_treehousedoor2_623_0_0 = {0, 50, 50, 0, 1, images_treehousedoor2_623_0_0, 1};
static Animation anim_treehousedoor2_623_0 = {&direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, NULL, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0, &direction_treehousedoor2_623_0_0};
static Animation * anim_array_treehousedoor2_623[1] = {&anim_treehousedoor2_623_0};
static Animations anim_treehousedoor2_623 = {1, &anim_array_treehousedoor2_623[0]};
static bool anim_treehousedoor2_623_initialized;
class TreehouseDoor2_623 : public Active
{
public:
    TreehouseDoor2_623(int x, int y) : Active(x, y, TreehouseDoor2_623_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Treehouse_door 2", 16);
#endif
        this->animations = &anim_treehousedoor2_623;
        if (!anim_treehousedoor2_623_initialized) {
            anim_treehousedoor2_623_initialized = true;
            images_treehousedoor2_623_0_0[0] = get_internal_image(12416);
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
FrameObject * create_treehousedoor2_623(int x, int y)
{
    return new (Active::pool.create()) TreehouseDoor2_623(x, y);
}
static Image* images_furniturewall_624_0_0[1];
static Direction direction_furniturewall_624_0_0 = {0, 0, 0, 0, 1, images_furniturewall_624_0_0, 1};
static Animation anim_furniturewall_624_0 = {&direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, NULL, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0, &direction_furniturewall_624_0_0};
static Animation * anim_array_furniturewall_624[1] = {&anim_furniturewall_624_0};
static Animations anim_furniturewall_624 = {1, &anim_array_furniturewall_624[0]};
static bool anim_furniturewall_624_initialized;
class FurnitureWall_624 : public Active
{
public:
    FurnitureWall_624(int x, int y) : Active(x, y, FurnitureWall_624_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall", 14);
#endif
        this->animations = &anim_furniturewall_624;
        if (!anim_furniturewall_624_initialized) {
            anim_furniturewall_624_initialized = true;
            images_furniturewall_624_0_0[0] = get_internal_image(14426);
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
FrameObject * create_furniturewall_624(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall_624(x, y);
}
static Image* images_furniturewall2_625_0_0[1];
static Direction direction_furniturewall2_625_0_0 = {0, 50, 50, 0, 1, images_furniturewall2_625_0_0, 1};
static Animation anim_furniturewall2_625_0 = {&direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, NULL, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0, &direction_furniturewall2_625_0_0};
static Animation * anim_array_furniturewall2_625[1] = {&anim_furniturewall2_625_0};
static Animations anim_furniturewall2_625 = {1, &anim_array_furniturewall2_625[0]};
static bool anim_furniturewall2_625_initialized;
class FurnitureWall2_625 : public Active
{
public:
    FurnitureWall2_625(int x, int y) : Active(x, y, FurnitureWall2_625_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall 2", 16);
#endif
        this->animations = &anim_furniturewall2_625;
        if (!anim_furniturewall2_625_initialized) {
            anim_furniturewall2_625_initialized = true;
            images_furniturewall2_625_0_0[0] = get_internal_image(14438);
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
FrameObject * create_furniturewall2_625(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall2_625(x, y);
}
static Image* images_furniturefloor_626_0_0[2];
static Direction direction_furniturefloor_626_0_0 = {0, 0, 0, 0, 1, images_furniturefloor_626_0_0, 2};
static Animation anim_furniturefloor_626_0 = {&direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, NULL, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0, &direction_furniturefloor_626_0_0};
static Animation * anim_array_furniturefloor_626[1] = {&anim_furniturefloor_626_0};
static Animations anim_furniturefloor_626 = {1, &anim_array_furniturefloor_626[0]};
static bool anim_furniturefloor_626_initialized;
class FurnitureFloor_626 : public Active
{
public:
    FurnitureFloor_626(int x, int y) : Active(x, y, FurnitureFloor_626_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor", 15);
#endif
        this->animations = &anim_furniturefloor_626;
        if (!anim_furniturefloor_626_initialized) {
            anim_furniturefloor_626_initialized = true;
            images_furniturefloor_626_0_0[0] = get_internal_image(11624);
            images_furniturefloor_626_0_0[1] = get_internal_image(7769);
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
FrameObject * create_furniturefloor_626(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor_626(x, y);
}
static Image* images_furniturefloor2_627_0_0[2];
static Direction direction_furniturefloor2_627_0_0 = {0, 0, 0, 0, 1, images_furniturefloor2_627_0_0, 2};
static Image* images_furniturefloor2_627_0_8[1];
static Direction direction_furniturefloor2_627_0_8 = {8, 50, 50, 0, 1, images_furniturefloor2_627_0_8, 1};
static Animation anim_furniturefloor2_627_0 = {&direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, NULL, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, &direction_furniturefloor2_627_0_8, NULL, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0, &direction_furniturefloor2_627_0_0};
static Animation * anim_array_furniturefloor2_627[1] = {&anim_furniturefloor2_627_0};
static Animations anim_furniturefloor2_627 = {1, &anim_array_furniturefloor2_627[0]};
static bool anim_furniturefloor2_627_initialized;
class FurnitureFloor2_627 : public Active
{
public:
    FurnitureFloor2_627(int x, int y) : Active(x, y, FurnitureFloor2_627_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 2", 17);
#endif
        this->animations = &anim_furniturefloor2_627;
        if (!anim_furniturefloor2_627_initialized) {
            anim_furniturefloor2_627_initialized = true;
            images_furniturefloor2_627_0_0[0] = get_internal_image(10620);
            images_furniturefloor2_627_0_0[1] = get_internal_image(7770);
            images_furniturefloor2_627_0_8[0] = get_internal_image(3000);
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
FrameObject * create_furniturefloor2_627(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor2_627(x, y);
}
static Image* images_chips_628_0_0[1];
static Direction direction_chips_628_0_0 = {0, 50, 50, 0, 1, images_chips_628_0_0, 1};
static Image* images_chips_628_0_1[1];
static Direction direction_chips_628_0_1 = {1, 50, 50, 0, 1, images_chips_628_0_1, 1};
static Animation anim_chips_628_0 = {&direction_chips_628_0_0, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_1, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0, &direction_chips_628_0_0};
static Animation * anim_array_chips_628[1] = {&anim_chips_628_0};
static Animations anim_chips_628 = {1, &anim_array_chips_628[0]};
static bool anim_chips_628_initialized;
class Chips_628 : public Active
{
public:
    Chips_628(int x, int y) : Active(x, y, Chips_628_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("chips", 5);
#endif
        set_visible(false);
        this->animations = &anim_chips_628;
        if (!anim_chips_628_initialized) {
            anim_chips_628_initialized = true;
            images_chips_628_0_0[0] = get_internal_image(13370);
            images_chips_628_0_1[0] = get_internal_image(13372);
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
FrameObject * create_chips_628(int x, int y)
{
    return new (Active::pool.create()) Chips_628(x, y);
}
static Image* images_npccouchcarol_629_0_0[9];
static Direction direction_npccouchcarol_629_0_0 = {0, 0, 0, 0, -1, images_npccouchcarol_629_0_0, 9};
static Image* images_npccouchcarol_629_0_1[5];
static Direction direction_npccouchcarol_629_0_1 = {1, 30, 30, 0, -1, images_npccouchcarol_629_0_1, 5};
static Image* images_npccouchcarol_629_0_8[2];
static Direction direction_npccouchcarol_629_0_8 = {8, 50, 50, 0, 1, images_npccouchcarol_629_0_8, 2};
static Animation anim_npccouchcarol_629_0 = {&direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_1, &direction_npccouchcarol_629_0_1, &direction_npccouchcarol_629_0_1, &direction_npccouchcarol_629_0_1, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, &direction_npccouchcarol_629_0_8, NULL, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0, &direction_npccouchcarol_629_0_0};
static Image* images_npccouchcarol_629_5_0[2];
static Direction direction_npccouchcarol_629_5_0 = {0, 12, 12, 0, -1, images_npccouchcarol_629_5_0, 2};
static Animation anim_npccouchcarol_629_5 = {&direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, NULL, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0, &direction_npccouchcarol_629_5_0};
static Image* images_npccouchcarol_629_7_0[9];
static Direction direction_npccouchcarol_629_7_0 = {0, 16, 16, 0, 1, images_npccouchcarol_629_7_0, 9};
static Animation anim_npccouchcarol_629_7 = {&direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, NULL, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0, &direction_npccouchcarol_629_7_0};
static Image* images_npccouchcarol_629_8_0[8];
static Direction direction_npccouchcarol_629_8_0 = {0, 9, 9, 0, -1, images_npccouchcarol_629_8_0, 8};
static Animation anim_npccouchcarol_629_8 = {&direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, NULL, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0, &direction_npccouchcarol_629_8_0};
static Image* images_npccouchcarol_629_9_0[3];
static Direction direction_npccouchcarol_629_9_0 = {0, 5, 5, 0, 1, images_npccouchcarol_629_9_0, 3};
static Animation anim_npccouchcarol_629_9 = {&direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, NULL, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0, &direction_npccouchcarol_629_9_0};
static Animation * anim_array_npccouchcarol_629[10] = {&anim_npccouchcarol_629_0, NULL, NULL, NULL, NULL, &anim_npccouchcarol_629_5, NULL, &anim_npccouchcarol_629_7, &anim_npccouchcarol_629_8, &anim_npccouchcarol_629_9};
static Animations anim_npccouchcarol_629 = {10, &anim_array_npccouchcarol_629[0]};
static bool anim_npccouchcarol_629_initialized;
class NPCCouchCarol_629 : public Active
{
public:
    NPCCouchCarol_629(int x, int y) : Active(x, y, NPCCouchCarol_629_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_CouchCarol", 14);
#endif
        set_visible(false);
        this->animations = &anim_npccouchcarol_629;
        if (!anim_npccouchcarol_629_initialized) {
            anim_npccouchcarol_629_initialized = true;
            images_npccouchcarol_629_0_0[0] = get_internal_image(5114);
            images_npccouchcarol_629_0_0[1] = get_internal_image(13256);
            images_npccouchcarol_629_0_0[2] = get_internal_image(13271);
            images_npccouchcarol_629_0_0[3] = get_internal_image(11683);
            images_npccouchcarol_629_0_0[4] = get_internal_image(13275);
            images_npccouchcarol_629_0_0[5] = get_internal_image(13277);
            images_npccouchcarol_629_0_0[6] = get_internal_image(13274);
            images_npccouchcarol_629_0_0[7] = get_internal_image(13283);
            images_npccouchcarol_629_0_0[8] = get_internal_image(13289);
            images_npccouchcarol_629_0_1[0] = get_internal_image(11683);
            images_npccouchcarol_629_0_1[1] = get_internal_image(11638);
            images_npccouchcarol_629_0_1[2] = get_internal_image(11681);
            images_npccouchcarol_629_0_1[3] = get_internal_image(6270);
            images_npccouchcarol_629_0_1[4] = get_internal_image(11682);
            images_npccouchcarol_629_0_8[0] = get_internal_image(5114);
            images_npccouchcarol_629_0_8[1] = get_internal_image(4161);
            images_npccouchcarol_629_5_0[0] = get_internal_image(13323);
            images_npccouchcarol_629_5_0[1] = get_internal_image(13284);
            images_npccouchcarol_629_7_0[0] = get_internal_image(5114);
            images_npccouchcarol_629_7_0[1] = get_internal_image(11915);
            images_npccouchcarol_629_7_0[2] = get_internal_image(11657);
            images_npccouchcarol_629_7_0[3] = get_internal_image(11910);
            images_npccouchcarol_629_7_0[4] = get_internal_image(13254);
            images_npccouchcarol_629_7_0[5] = get_internal_image(13255);
            images_npccouchcarol_629_7_0[6] = get_internal_image(13257);
            images_npccouchcarol_629_7_0[7] = get_internal_image(13258);
            images_npccouchcarol_629_7_0[8] = get_internal_image(13259);
            images_npccouchcarol_629_8_0[0] = get_internal_image(14566);
            images_npccouchcarol_629_8_0[1] = get_internal_image(14566);
            images_npccouchcarol_629_8_0[2] = get_internal_image(14570);
            images_npccouchcarol_629_8_0[3] = get_internal_image(14568);
            images_npccouchcarol_629_8_0[4] = get_internal_image(14567);
            images_npccouchcarol_629_8_0[5] = get_internal_image(14567);
            images_npccouchcarol_629_8_0[6] = get_internal_image(14568);
            images_npccouchcarol_629_8_0[7] = get_internal_image(14570);
            images_npccouchcarol_629_9_0[0] = get_internal_image(14562);
            images_npccouchcarol_629_9_0[1] = get_internal_image(14564);
            images_npccouchcarol_629_9_0[2] = get_internal_image(14565);
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
FrameObject * create_npccouchcarol_629(int x, int y)
{
    return new (Active::pool.create()) NPCCouchCarol_629(x, y);
}
static Image* images_tentplatform_630_0_0[1];
static Direction direction_tentplatform_630_0_0 = {0, 50, 50, 0, 1, images_tentplatform_630_0_0, 1};
static Animation anim_tentplatform_630_0 = {&direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, NULL, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0, &direction_tentplatform_630_0_0};
static Animation * anim_array_tentplatform_630[1] = {&anim_tentplatform_630_0};
static Animations anim_tentplatform_630 = {1, &anim_array_tentplatform_630[0]};
static bool anim_tentplatform_630_initialized;
class TentPlatform_630 : public Active
{
public:
    TentPlatform_630(int x, int y) : Active(x, y, TentPlatform_630_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TentPlatform", 12);
#endif
        this->animations = &anim_tentplatform_630;
        if (!anim_tentplatform_630_initialized) {
            anim_tentplatform_630_initialized = true;
            images_tentplatform_630_0_0[0] = get_internal_image(7281);
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
FrameObject * create_tentplatform_630(int x, int y)
{
    return new (Active::pool.create()) TentPlatform_630(x, y);
}
static Image* images_furniturephone_631_0_0[1];
static Direction direction_furniturephone_631_0_0 = {0, 0, 0, 0, 1, images_furniturephone_631_0_0, 1};
static Animation anim_furniturephone_631_0 = {&direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, NULL, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0, &direction_furniturephone_631_0_0};
static Animation * anim_array_furniturephone_631[1] = {&anim_furniturephone_631_0};
static Animations anim_furniturephone_631 = {1, &anim_array_furniturephone_631[0]};
static bool anim_furniturephone_631_initialized;
class FurniturePhone_631 : public Active
{
public:
    FurniturePhone_631(int x, int y) : Active(x, y, FurniturePhone_631_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Phone", 15);
#endif
        this->animations = &anim_furniturephone_631;
        if (!anim_furniturephone_631_initialized) {
            anim_furniturephone_631_initialized = true;
            images_furniturephone_631_0_0[0] = get_internal_image(14070);
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
FrameObject * create_furniturephone_631(int x, int y)
{
    return new (Active::pool.create()) FurniturePhone_631(x, y);
}
static Image* images_torquerocket_632_0_0[1];
static Direction direction_torquerocket_632_0_0 = {0, 50, 50, 0, 1, images_torquerocket_632_0_0, 1};
static Animation anim_torquerocket_632_0 = {&direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, NULL, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0, &direction_torquerocket_632_0_0};
static Animation * anim_array_torquerocket_632[1] = {&anim_torquerocket_632_0};
static Animations anim_torquerocket_632 = {1, &anim_array_torquerocket_632[0]};
static bool anim_torquerocket_632_initialized;
class TorqueRocket_632 : public Active
{
public:
    TorqueRocket_632(int x, int y) : Active(x, y, TorqueRocket_632_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueRocket", 12);
#endif
        set_visible(false);
        this->animations = &anim_torquerocket_632;
        if (!anim_torquerocket_632_initialized) {
            anim_torquerocket_632_initialized = true;
            images_torquerocket_632_0_0[0] = get_internal_image(2930);
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
FrameObject * create_torquerocket_632(int x, int y)
{
    return new (Active::pool.create()) TorqueRocket_632(x, y);
}
static Image* images_gongshield_633_0_0[1];
static Direction direction_gongshield_633_0_0 = {0, 50, 50, 0, 1, images_gongshield_633_0_0, 1};
static Image* images_gongshield_633_0_16[1];
static Direction direction_gongshield_633_0_16 = {16, 50, 50, 0, 1, images_gongshield_633_0_16, 1};
static Animation anim_gongshield_633_0 = {&direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, NULL, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, &direction_gongshield_633_0_16, NULL, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0, &direction_gongshield_633_0_0};
static Animation * anim_array_gongshield_633[1] = {&anim_gongshield_633_0};
static Animations anim_gongshield_633 = {1, &anim_array_gongshield_633[0]};
static bool anim_gongshield_633_initialized;
class GongShield_633 : public Active
{
public:
    GongShield_633(int x, int y) : Active(x, y, GongShield_633_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GongShield", 10);
#endif
        this->animations = &anim_gongshield_633;
        if (!anim_gongshield_633_initialized) {
            anim_gongshield_633_initialized = true;
            images_gongshield_633_0_0[0] = get_internal_image(6839);
            images_gongshield_633_0_16[0] = get_internal_image(5419);
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
FrameObject * create_gongshield_633(int x, int y)
{
    return new (Active::pool.create()) GongShield_633(x, y);
}
static Image* images_npcgong_634_0_0[1];
static Direction direction_npcgong_634_0_0 = {0, 50, 50, 0, 1, images_npcgong_634_0_0, 1};
static Image* images_npcgong_634_0_16[1];
static Direction direction_npcgong_634_0_16 = {16, 50, 50, 0, 1, images_npcgong_634_0_16, 1};
static Animation anim_npcgong_634_0 = {&direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, NULL, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, &direction_npcgong_634_0_16, NULL, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0, &direction_npcgong_634_0_0};
static Image* images_npcgong_634_1_0[8];
static Direction direction_npcgong_634_1_0 = {0, 20, 20, 0, -1, images_npcgong_634_1_0, 8};
static Image* images_npcgong_634_1_16[8];
static Direction direction_npcgong_634_1_16 = {16, 20, 20, 0, -1, images_npcgong_634_1_16, 8};
static Animation anim_npcgong_634_1 = {&direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, NULL, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, &direction_npcgong_634_1_16, NULL, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0, &direction_npcgong_634_1_0};
static Image* images_npcgong_634_5_0[30];
static Direction direction_npcgong_634_5_0 = {0, 50, 50, 0, 1, images_npcgong_634_5_0, 30};
static Image* images_npcgong_634_5_1[1];
static Direction direction_npcgong_634_5_1 = {1, 50, 50, 0, -1, images_npcgong_634_5_1, 1};
static Image* images_npcgong_634_5_16[30];
static Direction direction_npcgong_634_5_16 = {16, 50, 50, 0, 1, images_npcgong_634_5_16, 30};
static Image* images_npcgong_634_5_17[1];
static Direction direction_npcgong_634_5_17 = {17, 50, 50, 0, 1, images_npcgong_634_5_17, 1};
static Animation anim_npcgong_634_5 = {&direction_npcgong_634_5_0, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_1, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_16, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_17, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0, &direction_npcgong_634_5_0};
static Animation * anim_array_npcgong_634[6] = {&anim_npcgong_634_0, &anim_npcgong_634_1, NULL, NULL, NULL, &anim_npcgong_634_5};
static Animations anim_npcgong_634 = {6, &anim_array_npcgong_634[0]};
static bool anim_npcgong_634_initialized;
class NPCGong_634 : public Active
{
public:
    NPCGong_634(int x, int y) : Active(x, y, NPCGong_634_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Gong", 8);
#endif
        this->animations = &anim_npcgong_634;
        if (!anim_npcgong_634_initialized) {
            anim_npcgong_634_initialized = true;
            images_npcgong_634_0_0[0] = get_internal_image(7755);
            images_npcgong_634_0_16[0] = get_internal_image(14337);
            images_npcgong_634_1_0[0] = get_internal_image(11913);
            images_npcgong_634_1_0[1] = get_internal_image(11959);
            images_npcgong_634_1_0[2] = get_internal_image(11960);
            images_npcgong_634_1_0[3] = get_internal_image(13309);
            images_npcgong_634_1_0[4] = get_internal_image(14819);
            images_npcgong_634_1_0[5] = get_internal_image(14820);
            images_npcgong_634_1_0[6] = get_internal_image(14821);
            images_npcgong_634_1_0[7] = get_internal_image(14822);
            images_npcgong_634_1_16[0] = get_internal_image(14823);
            images_npcgong_634_1_16[1] = get_internal_image(14827);
            images_npcgong_634_1_16[2] = get_internal_image(14828);
            images_npcgong_634_1_16[3] = get_internal_image(14829);
            images_npcgong_634_1_16[4] = get_internal_image(14912);
            images_npcgong_634_1_16[5] = get_internal_image(14919);
            images_npcgong_634_1_16[6] = get_internal_image(15018);
            images_npcgong_634_1_16[7] = get_internal_image(15019);
            images_npcgong_634_5_0[0] = get_internal_image(7755);
            images_npcgong_634_5_0[1] = get_internal_image(13938);
            images_npcgong_634_5_0[2] = get_internal_image(13939);
            images_npcgong_634_5_0[3] = get_internal_image(13311);
            images_npcgong_634_5_0[4] = get_internal_image(13310);
            images_npcgong_634_5_0[5] = get_internal_image(13312);
            images_npcgong_634_5_0[6] = get_internal_image(13318);
            images_npcgong_634_5_0[7] = get_internal_image(13316);
            images_npcgong_634_5_0[8] = get_internal_image(13202);
            images_npcgong_634_5_0[9] = get_internal_image(13940);
            images_npcgong_634_5_0[10] = get_internal_image(13987);
            images_npcgong_634_5_0[11] = get_internal_image(13982);
            images_npcgong_634_5_0[12] = get_internal_image(13990);
            images_npcgong_634_5_0[13] = get_internal_image(14006);
            images_npcgong_634_5_0[14] = get_internal_image(14332);
            images_npcgong_634_5_0[15] = get_internal_image(14007);
            images_npcgong_634_5_0[16] = get_internal_image(14074);
            images_npcgong_634_5_0[17] = get_internal_image(14075);
            images_npcgong_634_5_0[18] = get_internal_image(14076);
            images_npcgong_634_5_0[19] = get_internal_image(14077);
            images_npcgong_634_5_0[20] = get_internal_image(14078);
            images_npcgong_634_5_0[21] = get_internal_image(14079);
            images_npcgong_634_5_0[22] = get_internal_image(14080);
            images_npcgong_634_5_0[23] = get_internal_image(14081);
            images_npcgong_634_5_0[24] = get_internal_image(14082);
            images_npcgong_634_5_0[25] = get_internal_image(14083);
            images_npcgong_634_5_0[26] = get_internal_image(14086);
            images_npcgong_634_5_0[27] = get_internal_image(14333);
            images_npcgong_634_5_0[28] = get_internal_image(14335);
            images_npcgong_634_5_0[29] = get_internal_image(14334);
            images_npcgong_634_5_1[0] = get_internal_image(13974);
            images_npcgong_634_5_16[0] = get_internal_image(14337);
            images_npcgong_634_5_16[1] = get_internal_image(11746);
            images_npcgong_634_5_16[2] = get_internal_image(11911);
            images_npcgong_634_5_16[3] = get_internal_image(13317);
            images_npcgong_634_5_16[4] = get_internal_image(13319);
            images_npcgong_634_5_16[5] = get_internal_image(13320);
            images_npcgong_634_5_16[6] = get_internal_image(13321);
            images_npcgong_634_5_16[7] = get_internal_image(13322);
            images_npcgong_634_5_16[8] = get_internal_image(13936);
            images_npcgong_634_5_16[9] = get_internal_image(13691);
            images_npcgong_634_5_16[10] = get_internal_image(14339);
            images_npcgong_634_5_16[11] = get_internal_image(14379);
            images_npcgong_634_5_16[12] = get_internal_image(14380);
            images_npcgong_634_5_16[13] = get_internal_image(14523);
            images_npcgong_634_5_16[14] = get_internal_image(14534);
            images_npcgong_634_5_16[15] = get_internal_image(14535);
            images_npcgong_634_5_16[16] = get_internal_image(14536);
            images_npcgong_634_5_16[17] = get_internal_image(14537);
            images_npcgong_634_5_16[18] = get_internal_image(14538);
            images_npcgong_634_5_16[19] = get_internal_image(14539);
            images_npcgong_634_5_16[20] = get_internal_image(14755);
            images_npcgong_634_5_16[21] = get_internal_image(14780);
            images_npcgong_634_5_16[22] = get_internal_image(14798);
            images_npcgong_634_5_16[23] = get_internal_image(14812);
            images_npcgong_634_5_16[24] = get_internal_image(14813);
            images_npcgong_634_5_16[25] = get_internal_image(14814);
            images_npcgong_634_5_16[26] = get_internal_image(14815);
            images_npcgong_634_5_16[27] = get_internal_image(14816);
            images_npcgong_634_5_16[28] = get_internal_image(14817);
            images_npcgong_634_5_16[29] = get_internal_image(14818);
            images_npcgong_634_5_17[0] = get_internal_image(14336);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_123_npc_gong.value;
        if (!global_data_123_npc_gong.init) {
            global_data_123_npc_gong.init = true;
        }
    }
};
FrameObject * create_npcgong_634(int x, int y)
{
    return new (Active::pool.create()) NPCGong_634(x, y);
}
class HouseWallrightFront_635 : public Backdrop
{
public:
    HouseWallrightFront_635(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Wallright front", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14418);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_housewallrightfront_635(int x, int y)
{
    return new (Backdrop::pool.create()) HouseWallrightFront_635(x, y);
}
class TreehouseSolidBlack2_636 : public QuickBackdrop
{
public:
    TreehouseSolidBlack2_636(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_SolidBlack 2", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 128;
        color = Color(0, 0, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_treehousesolidblack2_636(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TreehouseSolidBlack2_636(x, y);
}
static Image* images_furniturefloor6_637_0_0[1];
static Direction direction_furniturefloor6_637_0_0 = {0, 0, 0, 0, 1, images_furniturefloor6_637_0_0, 1};
static Image* images_furniturefloor6_637_0_1[2];
static Direction direction_furniturefloor6_637_0_1 = {1, 14, 14, 0, -1, images_furniturefloor6_637_0_1, 2};
static Animation anim_furniturefloor6_637_0 = {&direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_1, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0, &direction_furniturefloor6_637_0_0};
static Animation * anim_array_furniturefloor6_637[1] = {&anim_furniturefloor6_637_0};
static Animations anim_furniturefloor6_637 = {1, &anim_array_furniturefloor6_637[0]};
static bool anim_furniturefloor6_637_initialized;
class FurnitureFloor6_637 : public Active
{
public:
    FurnitureFloor6_637(int x, int y) : Active(x, y, FurnitureFloor6_637_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 6", 17);
#endif
        this->animations = &anim_furniturefloor6_637;
        if (!anim_furniturefloor6_637_initialized) {
            anim_furniturefloor6_637_initialized = true;
            images_furniturefloor6_637_0_0[0] = get_internal_image(14427);
            images_furniturefloor6_637_0_1[0] = get_internal_image(2279);
            images_furniturefloor6_637_0_1[1] = get_internal_image(2577);
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
FrameObject * create_furniturefloor6_637(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor6_637(x, y);
}
static Image* images_objecttententrance_638_0_0[1];
static Direction direction_objecttententrance_638_0_0 = {0, 50, 50, 0, 1, images_objecttententrance_638_0_0, 1};
static Animation anim_objecttententrance_638_0 = {&direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, NULL, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0, &direction_objecttententrance_638_0_0};
static Animation * anim_array_objecttententrance_638[1] = {&anim_objecttententrance_638_0};
static Animations anim_objecttententrance_638 = {1, &anim_array_objecttententrance_638[0]};
static bool anim_objecttententrance_638_initialized;
class ObjectTentEntrance_638 : public Active
{
public:
    ObjectTentEntrance_638(int x, int y) : Active(x, y, ObjectTentEntrance_638_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TentEntrance", 19);
#endif
        set_visible(false);
        this->animations = &anim_objecttententrance_638;
        if (!anim_objecttententrance_638_initialized) {
            anim_objecttententrance_638_initialized = true;
            images_objecttententrance_638_0_0[0] = get_internal_image(6766);
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
FrameObject * create_objecttententrance_638(int x, int y)
{
    return new (Active::pool.create()) ObjectTentEntrance_638(x, y);
}
static Image* images_furniturefloor7_639_0_0[1];
static Direction direction_furniturefloor7_639_0_0 = {0, 0, 0, 0, 1, images_furniturefloor7_639_0_0, 1};
static Animation anim_furniturefloor7_639_0 = {&direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, NULL, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0, &direction_furniturefloor7_639_0_0};
static Animation * anim_array_furniturefloor7_639[1] = {&anim_furniturefloor7_639_0};
static Animations anim_furniturefloor7_639 = {1, &anim_array_furniturefloor7_639[0]};
static bool anim_furniturefloor7_639_initialized;
class FurnitureFloor7_639 : public Active
{
public:
    FurnitureFloor7_639(int x, int y) : Active(x, y, FurnitureFloor7_639_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 7", 17);
#endif
        this->animations = &anim_furniturefloor7_639;
        if (!anim_furniturefloor7_639_initialized) {
            anim_furniturefloor7_639_initialized = true;
            images_furniturefloor7_639_0_0[0] = get_internal_image(13365);
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
FrameObject * create_furniturefloor7_639(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor7_639(x, y);
}
static Image* images_torquerocket3_640_0_0[1];
static Direction direction_torquerocket3_640_0_0 = {0, 50, 50, 0, 1, images_torquerocket3_640_0_0, 1};
static Animation anim_torquerocket3_640_0 = {&direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, NULL, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0, &direction_torquerocket3_640_0_0};
static Animation * anim_array_torquerocket3_640[1] = {&anim_torquerocket3_640_0};
static Animations anim_torquerocket3_640 = {1, &anim_array_torquerocket3_640[0]};
static bool anim_torquerocket3_640_initialized;
class TorqueRocket3_640 : public Active
{
public:
    TorqueRocket3_640(int x, int y) : Active(x, y, TorqueRocket3_640_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueRocket 3", 14);
#endif
        set_visible(false);
        this->animations = &anim_torquerocket3_640;
        if (!anim_torquerocket3_640_initialized) {
            anim_torquerocket3_640_initialized = true;
            images_torquerocket3_640_0_0[0] = get_internal_image(139);
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
FrameObject * create_torquerocket3_640(int x, int y)
{
    return new (Active::pool.create()) TorqueRocket3_640(x, y);
}
static Image* images_torquerocket2_641_0_0[1];
static Direction direction_torquerocket2_641_0_0 = {0, 50, 50, 0, 1, images_torquerocket2_641_0_0, 1};
static Image* images_torquerocket2_641_0_1[11];
static Direction direction_torquerocket2_641_0_1 = {1, 100, 100, 0, 1, images_torquerocket2_641_0_1, 11};
static Animation anim_torquerocket2_641_0 = {&direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_1, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0, &direction_torquerocket2_641_0_0};
static Animation * anim_array_torquerocket2_641[1] = {&anim_torquerocket2_641_0};
static Animations anim_torquerocket2_641 = {1, &anim_array_torquerocket2_641[0]};
static bool anim_torquerocket2_641_initialized;
class TorqueRocket2_641 : public Active
{
public:
    TorqueRocket2_641(int x, int y) : Active(x, y, TorqueRocket2_641_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueRocket 2", 14);
#endif
        set_visible(false);
        this->animations = &anim_torquerocket2_641;
        if (!anim_torquerocket2_641_initialized) {
            anim_torquerocket2_641_initialized = true;
            images_torquerocket2_641_0_0[0] = get_internal_image(1480);
            images_torquerocket2_641_0_1[0] = get_internal_image(1480);
            images_torquerocket2_641_0_1[1] = get_internal_image(2928);
            images_torquerocket2_641_0_1[2] = get_internal_image(5860);
            images_torquerocket2_641_0_1[3] = get_internal_image(5296);
            images_torquerocket2_641_0_1[4] = get_internal_image(3039);
            images_torquerocket2_641_0_1[5] = get_internal_image(3041);
            images_torquerocket2_641_0_1[6] = get_internal_image(6132);
            images_torquerocket2_641_0_1[7] = get_internal_image(3075);
            images_torquerocket2_641_0_1[8] = get_internal_image(5579);
            images_torquerocket2_641_0_1[9] = get_internal_image(5861);
            images_torquerocket2_641_0_1[10] = get_internal_image(1480);
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
FrameObject * create_torquerocket2_641(int x, int y)
{
    return new (Active::pool.create()) TorqueRocket2_641(x, y);
}
class Backdrop9_642 : public Backdrop
{
public:
    Backdrop9_642(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7771);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop9_642(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop9_642(x, y);
}
class Backdrop10_643 : public Backdrop
{
public:
    Backdrop10_643(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3840);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop10_643(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop10_643(x, y);
}
class Backdrop11_644 : public Backdrop
{
public:
    Backdrop11_644(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 11", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3867);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop11_644(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop11_644(x, y);
}
class DialogData_645 : public Text
{
public:
    DialogData_645(int x, int y) : Text(x, y, DialogData_645_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 00 to_02_01 Are you sure it's okay for me to set up a tent here\?", 67));
        add_line(std::string("01 39 li_06_01 It's the least we can do after what happened today...", 68));
        add_line(std::string("05 00 to_02_02 Eh, don't blame yourself. You did everything you could. I'll get the stone back somehow.", 103));
        add_line(std::string("01 03 li_06_02 You sure you don't wanna hang out with us\?", 57));
        add_line(std::string("05 00 to_02_03 Thanks, but, I have a lot of work to do. I'm gonna try and fix my gadgets.", 89));
        add_line(std::string("01 27 li_06_03 Fair enough. Just shout if you need anything.", 60));
        add_line(std::string("05 00 to_02_04 Alright. What are you gonna be up to\?", 52));
        add_line(std::string("01 27 li_06_04 Oh, we should have plenty of things to do. Especially with the new girl around.", 94));
        add_line(std::string("02 51 ca_07_01 I'm booorrred...", 31));
        add_line(std::string("01 03 li_06_05 How 'bout a movie\?", 33));
        add_line(std::string("03 21 mi_03_01 Sure!", 20));
        add_line(std::string("02 51 ca_07_02 Mh, why not.", 27));
        add_line(std::string("01 69 li_06_06 What kind of movies do you like, Milla\?", 54));
        add_line(std::string("03 03 mi_03_02 I like being surprised!", 38));
        add_line(std::string("01 69 li_06_07 Alright. I think I have just the thing!", 54));
        add_line(std::string("02 03 ca_07_03 Hey Lilac\?", 25));
        add_line(std::string("01 00 li_06_08 Hm\?", 18));
        add_line(std::string("02 03 ca_07_04 How come Torque doesn't wanna hang out with us\?", 62));
        add_line(std::string("01 00 li_06_09 He said he had some work to do.", 46));
        add_line(std::string("02 06 ca_07_05 Ehh, he's probably just scared of getting cooties.", 65));
        add_line(std::string("01 63 li_06_11 Can I ask you something\?", 39));
        add_line(std::string("02 00 ca_07_06 Like what\?", 25));
        add_line(std::string("01 60 li_06_12 Well... Do you ever think about your family\? I mean, about seeing them again someday\?", 100));
        add_line(std::string("02 00 ca_07_07 I think about my big sister sometimes. I dunno... It's not like I can go back there anytime soon.", 112));
        add_line(std::string("01 63 li_06_13 Yeah...", 22));
        add_line(std::string("03 36 mi_03_04 I wish I had a sister, but nothing's happened yet. I tried shooting stars, crystal balls, chewing grass...", 121));
        add_line(std::string("02 00 ca_07_08 How 'bout rubbing your ears\? I did that when I was little.", 73));
        add_line(std::string("01 45 li_06_14 You know what\? Carol and I can be your sisters!", 62));
        add_line(std::string("03 33 mi_03_06 You can DO THAT\?\?", 32));
        add_line(std::string("01 45 li_06_15 Sure, why not\?", 29));
        add_line(std::string("03 03 mi_03_07 I guess that works afterall! Thanks Carol!", 57));
        add_line(std::string("04 00 sp_01r01 Not like a couple of traitors like yourselves would care...", 74));
        add_line(std::string("02 00 ca_08_01 Lilac! Lilac!", 28));
        add_line(std::string("01 00 li_07_01 ......", 21));
        add_line(std::string("02 00 ca_08_02 Torque's a, I mean I went down there and and he said I mean his-", 79));
        add_line(std::string("01 06 li_07_02 Calm down. What is it\?", 37));
        add_line(std::string("02 03 ca_08_03 Torque turned into an alien or something!!", 57));
        add_line(std::string("01 06 li_07_03 What\?", 20));
        add_line(std::string("02 03 ca_08_04 Just come with me! Come on!", 42));
        add_line(std::string("01 00 li_07_04 Nrrrhh... you probably had a bad dream.", 54));
        add_line(std::string("02 03 ca_08_05 I'm serious! Get up! Come on! GET UP GET UPPPP!", 62));
        add_line(std::string("01 03 li_07_05 Alright! Let me get my shoes on!", 47));
        add_line(std::string("01 18 li_07_07 Torque\?!", 23));
        add_line(std::string("05 06 to_03_02 It's not what it looks like!", 43));
        add_line(std::string("02 27 ca_08_06 What are you\?! Give us answers buddy!", 52));
        add_line(std::string("05 03 to_03_03 Okay okay, I'll tell you! But you have to promise to keep it to yourselves.", 90));
        add_line(std::string("01 00 li_07_08 We promise... Right, Carol\?", 42));
        add_line(std::string("02 00 ca_08_07 Right. Pinky swear.", 34));
        add_line(std::string("05 00 to_03_04 Alright. Take a seat.", 36));
        add_line(std::string("05 00 to_03_05 Everything I've told you so far is true.", 55));
        add_line(std::string("05 00 to_03_b5 It's just that... well... remember when I said that I'm not from around here\?", 92));
        add_line(std::string("01 72 li_07_09 Yeah, and\?", 25));
        add_line(std::string("05 00 to_03_06 I'm from another world. Actually, I'm part of an alliance between many different worlds. We're called Chasers.", 125));
        add_line(std::string("05 00 xx_xx_xx Chasers.", 23));
        add_line(std::string("01 72 li_07_10 So, you're an alien then\?", 40));
        add_line(std::string("05 00 to_03_07 Pretty much, yeah.", 33));
        add_line(std::string("02 48 ca_08_08 Space cooties!", 29));
        add_line(std::string("05 00 to_03_08 You don't believe me.", 36));
        add_line(std::string("01 72 li_07_12 Actually, I do.", 30));
        add_line(std::string("05 00 to_03_09 Really\?", 22));
        add_line(std::string("01 72 li_07_13 They say that a long time ago, dragons came to Avalice and mixed with our ancestors.", 99));
        add_line(std::string("02 21 ca_08_09 And not just ones like Lilac. Huge ones, like in the movies!", 75));
        add_line(std::string("01 78 li_07_14 So I guess it's not much of a stretch for other things to be out there too.", 90));
        add_line(std::string("05 00 to_03_10 I see...", 23));
        add_line(std::string("02 36 ca_08_10 So why do a bunch of aliens care about our planet\?", 65));
        add_line(std::string("05 00 to_03_11 The man that wants your Kingdom Stone isn't from around here either. He calls himself Lord Brevon.", 113));
        add_line(std::string("01 75 li_07_15 Lord\?", 20));
        add_line(std::string("05 00 to_03_12 Well, he didn't get that name selling cookies. He's dangerous with a capital D.", 94));
        add_line(std::string("05 00 to_03_13 Brevon is the most powerful enemy we've ever faced. Hundreds of worlds destroyed, thousands of heroes killed", 123));
        add_line(std::string("05 xx to_xx_xx or corrupted, enormous amounts of weapon energy stolen... and that's just the tip of the iceberg.", 112));
        add_line(std::string("05 00 to_03_16 I didn't tell you anything because I don't want you on his crosshairs. This guy wiped out my entire crew.", 120));
        add_line(std::string("05 00 to_03_17 I'll try and convince your leaders of his existence, but if I can't get them to help me... If Brevon gets his", 124));
        add_line(std::string("05 xx to_xx_xx hands on the Kingdom Stone... then I'll have no choice. I'll have to destroy it.", 95));
        add_line(std::string("01 09 li_07_16 Destroy it\?! You can't be serious!", 49));
        add_line(std::string("05 15 to_03_18 I'll only destroy it if I have no other choice. I swore to my Captain on his dying breath that I would not let Brevon get that stone!", 148));
        add_line(std::string("05 15 xx_xx_xx not let Brevon get that stone!", 45));
        add_line(std::string("01 09 li_07_17 I'm sorry about your Captain, but... you can't destroy it!", 73));
        add_line(std::string("01 24 li_07_18 In fact, you won't even have to think about it, because I'm going to help you get it back!", 105));
        add_line(std::string("01 24 li_07_19 I don't care how dangerous it is! It's gonna take a lot more than robots and aliens to slow a dragon down!", 121));
        add_line(std::string("01 24 xx_xx_xx dragon down!", 27));
        add_line(std::string("02 60 ca_08_12 If she's gonna go for it, then I am too! If we can beat up a giant praying mantis thing together, then who knows what else we can do\?", 148));
        add_line(std::string("03 21 mi_04_02 Ummm... I wanna come too!", 40));
        add_line(std::string("01 27 li_07_20 I guess we could let you save Carol's life a few more times.", 75));
        add_line(std::string("02 15 ca_08_13 Hey...", 21));
        add_line(std::string("03 03 mi_04_03 Yay!", 19));
        add_line(std::string("05 00 to_03_19 So the three of you are really gonna help me stop him\?", 69));
        add_line(std::string("02 09 ca_08_14 Say no more! Team Lilac's got your back!", 55));
        add_line(std::string("02 00 ca_08_15 We'll talk about the name later, 'kay\?", 53));
        add_line(std::string("05 09 to_03_20 I'd be lying if I said I was comfortable with this, but... I honestly could use your help.", 105));
        add_line(std::string("05 00 to_03_21 You know this world better than I do.", 52));
        add_line(std::string("02 24 ca_08_16 Soooo it's official, right\?", 42));
        add_line(std::string("05 00 to_03_22 Moreorless. Welcome aboard, ladies.", 50));
        add_line(std::string("05 00 to_03_23 Just remember something really important... Don't talk about our mission unless I say so.", 104));
        add_line(std::string("05 00 to_03_24 We do not want the whole world thinking we're crazy.", 67));
        add_line(std::string("01 24 li_07_22 Understood.", 26));
        add_line(std::string("02 00 ca_08_18 I dunno about you guys, but I'm exhausted.", 57));
        add_line(std::string("01 00 li_07_23 Yeah, we better get some shut-eye. We've got a big day ahead of us.", 82));
        add_line(std::string("05 00 to_03_25 Lilac...", 23));
        add_line(std::string("05 00 to_03_26 Thank you.", 25));
        add_line(std::string("05 00 to_31_02 I never got to properly thank you all for helping me.", 68));
        add_line(std::string("02 18 ca_44_01 Hey, we're buds! That's what buddies do.", 55));
        add_line(std::string("05 21 to_31_03 Well, on behalf of the Coalition of Planets, you have our sincerest gratitude.", 93));
        add_line(std::string("01 57 li_52_02 Pssh, c'mere, you!", 33));
        add_line(std::string("05 18 to_31_04 Thank you.", 25));
        add_line(std::string("01 00 li_52_01 So I guess this is it, huh\?", 42));
        add_line(std::string("03 00 mi_31_01 I'm gonna miss you...", 36));
        add_line(std::string("02 00 ca_44_02 Me too...", 24));
        add_line(std::string("05 00 to_31_05 Well, who knows\? I could be coming back sooner than you think. Until then, just take care of yourselves. The world needs you.", 140));
        add_line(std::string("07 00 go_09_01 See ya around, spaceman!", 39));
        add_line(std::string("03 03 mi_31_02 Goodbye Torque!", 30));
        add_line(std::string("02 33 ca_44_03 Bye Torque!", 26));
        add_line(std::string("01 57 li_52_03 See you soon!", 28));
        add_line(std::string("01 00 li_52_04 Aww, don't worry girls. We'll get Space Cooties back here someday.", 81));
        add_line(std::string("02 00 ca_44_04 Yeah.", 20));
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
FrameObject * create_dialogdata_645(int x, int y)
{
    return new (Text::pool.create()) DialogData_645(x, y);
}
static Image* images_no_646_0_0[1];
static Direction direction_no_646_0_0 = {0, 50, 50, 0, 1, images_no_646_0_0, 1};
static Animation anim_no_646_0 = {&direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, NULL, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0, &direction_no_646_0_0};
static Animation * anim_array_no_646[1] = {&anim_no_646_0};
static Animations anim_no_646 = {1, &anim_array_no_646[0]};
static bool anim_no_646_initialized;
class No_646 : public Active
{
public:
    No_646(int x, int y) : Active(x, y, No_646_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("No", 2);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_no_646;
        if (!anim_no_646_initialized) {
            anim_no_646_initialized = true;
            images_no_646_0_0[0] = get_internal_image(2372);
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
FrameObject * create_no_646(int x, int y)
{
    return new (Active::pool.create()) No_646(x, y);
}
static Image* images_yes_647_0_0[1];
static Direction direction_yes_647_0_0 = {0, 50, 50, 0, 1, images_yes_647_0_0, 1};
static Animation anim_yes_647_0 = {&direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, NULL, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0, &direction_yes_647_0_0};
static Animation * anim_array_yes_647[1] = {&anim_yes_647_0};
static Animations anim_yes_647 = {1, &anim_array_yes_647[0]};
static bool anim_yes_647_initialized;
class Yes_647 : public Active
{
public:
    Yes_647(int x, int y) : Active(x, y, Yes_647_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Yes", 3);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_yes_647;
        if (!anim_yes_647_initialized) {
            anim_yes_647_initialized = true;
            images_yes_647_0_0[0] = get_internal_image(3393);
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
FrameObject * create_yes_647(int x, int y)
{
    return new (Active::pool.create()) Yes_647(x, y);
}
class LevelParallaxPiece6_648 : public SystemBox
{
public:
    LevelParallaxPiece6_648(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_648_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 800;
        type = PATTERN_IMAGE;
        image = get_internal_image(2512);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_648(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_648(x, y);
}
class LevelParallaxPiece2_649 : public SystemBox
{
public:
    LevelParallaxPiece2_649(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_649_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 156;
        height = 960;
        type = PATTERN_IMAGE;
        image = get_internal_image(2409);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_649(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_649(x, y);
}
class LevelParallaxPiece5_650 : public SystemBox
{
public:
    LevelParallaxPiece5_650(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_650_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 312;
        height = 1105;
        type = PATTERN_IMAGE;
        image = get_internal_image(7111);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_650(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_650(x, y);
}
static Image* images_breakableaquabrickpiece_651_0_0[1];
static Direction direction_breakableaquabrickpiece_651_0_0 = {0, 50, 50, 0, 1, images_breakableaquabrickpiece_651_0_0, 1};
static Animation anim_breakableaquabrickpiece_651_0 = {&direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, NULL, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0, &direction_breakableaquabrickpiece_651_0_0};
static Animation * anim_array_breakableaquabrickpiece_651[1] = {&anim_breakableaquabrickpiece_651_0};
static Animations anim_breakableaquabrickpiece_651 = {1, &anim_array_breakableaquabrickpiece_651[0]};
static bool anim_breakableaquabrickpiece_651_initialized;
class BreakableAquaBrickPiece_651 : public Active
{
public:
    BreakableAquaBrickPiece_651(int x, int y) : Active(x, y, BreakableAquaBrickPiece_651_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableAquaBrick_piece", 24);
#endif
        this->animations = &anim_breakableaquabrickpiece_651;
        if (!anim_breakableaquabrickpiece_651_initialized) {
            anim_breakableaquabrickpiece_651_initialized = true;
            images_breakableaquabrickpiece_651_0_0[0] = get_internal_image(4883);
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
FrameObject * create_breakableaquabrickpiece_651(int x, int y)
{
    return new (Active::pool.create()) BreakableAquaBrickPiece_651(x, y);
}
static Image* images_enemyslimeburst_652_0_0[2];
static Direction direction_enemyslimeburst_652_0_0 = {0, 15, 15, 0, -1, images_enemyslimeburst_652_0_0, 2};
static Animation anim_enemyslimeburst_652_0 = {&direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, NULL, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0, &direction_enemyslimeburst_652_0_0};
static Image* images_enemyslimeburst_652_7_0[4];
static Direction direction_enemyslimeburst_652_7_0 = {0, 50, 50, 0, 3, images_enemyslimeburst_652_7_0, 4};
static Animation anim_enemyslimeburst_652_7 = {&direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, NULL, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0, &direction_enemyslimeburst_652_7_0};
static Animation * anim_array_enemyslimeburst_652[8] = {&anim_enemyslimeburst_652_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyslimeburst_652_7};
static Animations anim_enemyslimeburst_652 = {8, &anim_array_enemyslimeburst_652[0]};
static bool anim_enemyslimeburst_652_initialized;
class EnemySlimeburst_652 : public Active
{
public:
    EnemySlimeburst_652(int x, int y) : Active(x, y, EnemySlimeburst_652_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Slimeburst", 16);
#endif
        this->animations = &anim_enemyslimeburst_652;
        if (!anim_enemyslimeburst_652_initialized) {
            anim_enemyslimeburst_652_initialized = true;
            images_enemyslimeburst_652_0_0[0] = get_internal_image(7128);
            images_enemyslimeburst_652_0_0[1] = get_internal_image(7132);
            images_enemyslimeburst_652_7_0[0] = get_internal_image(7137);
            images_enemyslimeburst_652_7_0[1] = get_internal_image(7138);
            images_enemyslimeburst_652_7_0[2] = get_internal_image(7139);
            images_enemyslimeburst_652_7_0[3] = get_internal_image(7107);
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
FrameObject * create_enemyslimeburst_652(int x, int y)
{
    return new (Active::pool.create()) EnemySlimeburst_652(x, y);
}
static Image* images_levelaxelplatform1_653_0_0[7];
static Direction direction_levelaxelplatform1_653_0_0 = {0, 25, 25, 0, -1, images_levelaxelplatform1_653_0_0, 7};
static Animation anim_levelaxelplatform1_653_0 = {&direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, NULL, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0, &direction_levelaxelplatform1_653_0_0};
static Animation * anim_array_levelaxelplatform1_653[1] = {&anim_levelaxelplatform1_653_0};
static Animations anim_levelaxelplatform1_653 = {1, &anim_array_levelaxelplatform1_653[0]};
static bool anim_levelaxelplatform1_653_initialized;
class LevelAxelPlatform1_653 : public Active
{
public:
    LevelAxelPlatform1_653(int x, int y) : Active(x, y, LevelAxelPlatform1_653_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_AxelPlatform 1", 20);
#endif
        this->animations = &anim_levelaxelplatform1_653;
        if (!anim_levelaxelplatform1_653_initialized) {
            anim_levelaxelplatform1_653_initialized = true;
            images_levelaxelplatform1_653_0_0[0] = get_internal_image(4828);
            images_levelaxelplatform1_653_0_0[1] = get_internal_image(4823);
            images_levelaxelplatform1_653_0_0[2] = get_internal_image(4819);
            images_levelaxelplatform1_653_0_0[3] = get_internal_image(4820);
            images_levelaxelplatform1_653_0_0[4] = get_internal_image(4821);
            images_levelaxelplatform1_653_0_0[5] = get_internal_image(4822);
            images_levelaxelplatform1_653_0_0[6] = get_internal_image(4818);
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
FrameObject * create_levelaxelplatform1_653(int x, int y)
{
    return new (Active::pool.create()) LevelAxelPlatform1_653(x, y);
}
static Image* images_levelaxelplatform2_654_0_0[7];
static Direction direction_levelaxelplatform2_654_0_0 = {0, 25, 25, 0, -1, images_levelaxelplatform2_654_0_0, 7};
static Animation anim_levelaxelplatform2_654_0 = {&direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, NULL, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0, &direction_levelaxelplatform2_654_0_0};
static Animation * anim_array_levelaxelplatform2_654[1] = {&anim_levelaxelplatform2_654_0};
static Animations anim_levelaxelplatform2_654 = {1, &anim_array_levelaxelplatform2_654[0]};
static bool anim_levelaxelplatform2_654_initialized;
class LevelAxelPlatform2_654 : public Active
{
public:
    LevelAxelPlatform2_654(int x, int y) : Active(x, y, LevelAxelPlatform2_654_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_AxelPlatform 2", 20);
#endif
        this->animations = &anim_levelaxelplatform2_654;
        if (!anim_levelaxelplatform2_654_initialized) {
            anim_levelaxelplatform2_654_initialized = true;
            images_levelaxelplatform2_654_0_0[0] = get_internal_image(4754);
            images_levelaxelplatform2_654_0_0[1] = get_internal_image(4755);
            images_levelaxelplatform2_654_0_0[2] = get_internal_image(4817);
            images_levelaxelplatform2_654_0_0[3] = get_internal_image(4575);
            images_levelaxelplatform2_654_0_0[4] = get_internal_image(4757);
            images_levelaxelplatform2_654_0_0[5] = get_internal_image(4756);
            images_levelaxelplatform2_654_0_0[6] = get_internal_image(4811);
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
FrameObject * create_levelaxelplatform2_654(int x, int y)
{
    return new (Active::pool.create()) LevelAxelPlatform2_654(x, y);
}
static Image* images_effectswaterhit_655_4_0[5];
static Direction direction_effectswaterhit_655_4_0 = {0, 50, 50, 0, 1, images_effectswaterhit_655_4_0, 5};
static Animation anim_effectswaterhit_655_4 = {&direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, NULL, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0, &direction_effectswaterhit_655_4_0};
static Animation * anim_array_effectswaterhit_655[5] = {NULL, NULL, NULL, NULL, &anim_effectswaterhit_655_4};
static Animations anim_effectswaterhit_655 = {5, &anim_array_effectswaterhit_655[0]};
static bool anim_effectswaterhit_655_initialized;
class EffectsWaterHit_655 : public Active
{
public:
    EffectsWaterHit_655(int x, int y) : Active(x, y, EffectsWaterHit_655_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effects_WaterHit", 16);
#endif
        this->animations = &anim_effectswaterhit_655;
        if (!anim_effectswaterhit_655_initialized) {
            anim_effectswaterhit_655_initialized = true;
            images_effectswaterhit_655_4_0[0] = get_internal_image(1488);
            images_effectswaterhit_655_4_0[1] = get_internal_image(1489);
            images_effectswaterhit_655_4_0[2] = get_internal_image(1491);
            images_effectswaterhit_655_4_0[3] = get_internal_image(1492);
            images_effectswaterhit_655_4_0[4] = get_internal_image(1648);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        blend_color = Color(255, 255, 255, 192);
        create_alterables();
    }
};
FrameObject * create_effectswaterhit_655(int x, int y)
{
    return new (Active::pool.create()) EffectsWaterHit_655(x, y);
}
static Image* images_effectwhisp_656_0_0[1];
static Direction direction_effectwhisp_656_0_0 = {0, 50, 50, 0, 1, images_effectwhisp_656_0_0, 1};
static Animation anim_effectwhisp_656_0 = {&direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, NULL, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0, &direction_effectwhisp_656_0_0};
static Animation * anim_array_effectwhisp_656[1] = {&anim_effectwhisp_656_0};
static Animations anim_effectwhisp_656 = {1, &anim_array_effectwhisp_656[0]};
static bool anim_effectwhisp_656_initialized;
class EffectWhisp_656 : public Active
{
public:
    EffectWhisp_656(int x, int y) : Active(x, y, EffectWhisp_656_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Whisp", 12);
#endif
        this->animations = &anim_effectwhisp_656;
        if (!anim_effectwhisp_656_initialized) {
            anim_effectwhisp_656_initialized = true;
            images_effectwhisp_656_0_0[0] = get_internal_image(8662);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(10);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectwhisp_656(int x, int y)
{
    return new (Active::pool.create()) EffectWhisp_656(x, y);
}
static Image* images_enemyrock_657_0_0[1];
static Direction direction_enemyrock_657_0_0 = {0, 50, 50, 0, 1, images_enemyrock_657_0_0, 1};
static Animation anim_enemyrock_657_0 = {&direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, NULL, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0, &direction_enemyrock_657_0_0};
static Image* images_enemyrock_657_7_0[6];
static Direction direction_enemyrock_657_7_0 = {0, 25, 25, 0, 1, images_enemyrock_657_7_0, 6};
static Animation anim_enemyrock_657_7 = {&direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, NULL, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0, &direction_enemyrock_657_7_0};
static Animation * anim_array_enemyrock_657[8] = {&anim_enemyrock_657_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyrock_657_7};
static Animations anim_enemyrock_657 = {8, &anim_array_enemyrock_657[0]};
static bool anim_enemyrock_657_initialized;
class EnemyRock_657 : public Active
{
public:
    EnemyRock_657(int x, int y) : Active(x, y, EnemyRock_657_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Rock", 10);
#endif
        this->animations = &anim_enemyrock_657;
        if (!anim_enemyrock_657_initialized) {
            anim_enemyrock_657_initialized = true;
            images_enemyrock_657_0_0[0] = get_internal_image(8704);
            images_enemyrock_657_7_0[0] = get_internal_image(1300);
            images_enemyrock_657_7_0[1] = get_internal_image(1301);
            images_enemyrock_657_7_0[2] = get_internal_image(1302);
            images_enemyrock_657_7_0[3] = get_internal_image(1308);
            images_enemyrock_657_7_0[4] = get_internal_image(1320);
            images_enemyrock_657_7_0[5] = get_internal_image(1327);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        set_direction(pick_random(8, 3, 4, 5, 6, 10, 11, 12, 13));
        movements[0] = new PinballMovement(this);
        movements[0]->index = 0;
        ((PinballMovement*)movements[0])->set_max_speed(50);
        ((PinballMovement*)movements[0])->set_deceleration(0);
        ((PinballMovement*)movements[0])->set_gravity(30);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_enemyrock_657(int x, int y)
{
    return new (Active::pool.create()) EnemyRock_657(x, y);
}
static Image* images_minibossacid_658_0_0[1];
static Direction direction_minibossacid_658_0_0 = {0, 100, 100, 0, 1, images_minibossacid_658_0_0, 1};
static Animation anim_minibossacid_658_0 = {&direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, NULL, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0, &direction_minibossacid_658_0_0};
static Image* images_minibossacid_658_10_0[8];
static Direction direction_minibossacid_658_10_0 = {0, 50, 50, 0, 1, images_minibossacid_658_10_0, 8};
static Animation anim_minibossacid_658_10 = {&direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, NULL, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0, &direction_minibossacid_658_10_0};
static Animation * anim_array_minibossacid_658[11] = {&anim_minibossacid_658_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossacid_658_10};
static Animations anim_minibossacid_658 = {11, &anim_array_minibossacid_658[0]};
static bool anim_minibossacid_658_initialized;
class MinibossAcid_658 : public Active
{
public:
    MinibossAcid_658(int x, int y) : Active(x, y, MinibossAcid_658_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Acid", 13);
#endif
        this->animations = &anim_minibossacid_658;
        if (!anim_minibossacid_658_initialized) {
            anim_minibossacid_658_initialized = true;
            images_minibossacid_658_0_0[0] = get_internal_image(8694);
            images_minibossacid_658_10_0[0] = get_internal_image(8695);
            images_minibossacid_658_10_0[1] = get_internal_image(8696);
            images_minibossacid_658_10_0[2] = get_internal_image(8697);
            images_minibossacid_658_10_0[3] = get_internal_image(8698);
            images_minibossacid_658_10_0[4] = get_internal_image(8699);
            images_minibossacid_658_10_0[5] = get_internal_image(8700);
            images_minibossacid_658_10_0[6] = get_internal_image(8701);
            images_minibossacid_658_10_0[7] = get_internal_image(8702);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
        create_alterables();
        alterables->values.set(0, 3);
        alterables->values.set(3, 5);
    }
};
FrameObject * create_minibossacid_658(int x, int y)
{
    return new (Active::pool.create()) MinibossAcid_658(x, y);
}
class LightRay1_659 : public Backdrop
{
public:
    LightRay1_659(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LightRay 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8423);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_lightray1_659(int x, int y)
{
    return new (Backdrop::pool.create()) LightRay1_659(x, y);
}
class AquaBrickBack6_660 : public Backdrop
{
public:
    AquaBrickBack6_660(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2973);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback6_660(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack6_660(x, y);
}
class AquaBrickBack1_661 : public Backdrop
{
public:
    AquaBrickBack1_661(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8436);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback1_661(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack1_661(x, y);
}
class AquaBrickBack7_662 : public Backdrop
{
public:
    AquaBrickBack7_662(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 7", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8533);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback7_662(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack7_662(x, y);
}
class AquaBrickBack8_663 : public Backdrop
{
public:
    AquaBrickBack8_663(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 8", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8443);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback8_663(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack8_663(x, y);
}
class AquaBrickBack10_664 : public Backdrop
{
public:
    AquaBrickBack10_664(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 10", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7075);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback10_664(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack10_664(x, y);
}
class AquaBrickBack9_665 : public Backdrop
{
public:
    AquaBrickBack9_665(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 9", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4576);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback9_665(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack9_665(x, y);
}
class LightRay2_666 : public Backdrop
{
public:
    LightRay2_666(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LightRay 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8433);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_lightray2_666(int x, int y)
{
    return new (Backdrop::pool.create()) LightRay2_666(x, y);
}
static Image* images_gimmickcollapsingplatformleftbrick02_667_0_0[1];
static Direction direction_gimmickcollapsingplatformleftbrick02_667_0_0 = {0, 50, 50, 0, 1, images_gimmickcollapsingplatformleftbrick02_667_0_0, 1};
static Animation anim_gimmickcollapsingplatformleftbrick02_667_0 = {&direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, NULL, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0, &direction_gimmickcollapsingplatformleftbrick02_667_0_0};
static Animation * anim_array_gimmickcollapsingplatformleftbrick02_667[1] = {&anim_gimmickcollapsingplatformleftbrick02_667_0};
static Animations anim_gimmickcollapsingplatformleftbrick02_667 = {1, &anim_array_gimmickcollapsingplatformleftbrick02_667[0]};
static bool anim_gimmickcollapsingplatformleftbrick02_667_initialized;
class GimmickCollapsingPlatformLeftBrick02_667 : public Active
{
public:
    GimmickCollapsingPlatformLeftBrick02_667(int x, int y) : Active(x, y, GimmickCollapsingPlatformLeftBrick02_667_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_CollapsingPlatform_Left_Brick02", 39);
#endif
        this->animations = &anim_gimmickcollapsingplatformleftbrick02_667;
        if (!anim_gimmickcollapsingplatformleftbrick02_667_initialized) {
            anim_gimmickcollapsingplatformleftbrick02_667_initialized = true;
            images_gimmickcollapsingplatformleftbrick02_667_0_0[0] = get_internal_image(0);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 120);
    }
};
FrameObject * create_gimmickcollapsingplatformleftbrick02_667(int x, int y)
{
    return new (Active::pool.create()) GimmickCollapsingPlatformLeftBrick02_667(x, y);
}
class ATSewerPipe9_668 : public Backdrop
{
public:
    ATSewerPipe9_668(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4038);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe9_668(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe9_668(x, y);
}
class AquaBrickArch1_669 : public Backdrop
{
public:
    AquaBrickArch1_669(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickArch 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8452);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickarch1_669(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickArch1_669(x, y);
}
class AquaPlant1_670 : public Backdrop
{
public:
    AquaPlant1_670(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaPlant 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3472);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquaplant1_670(int x, int y)
{
    return new (Backdrop::pool.create()) AquaPlant1_670(x, y);
}
class ATSewerPipe1_671 : public Backdrop
{
public:
    ATSewerPipe1_671(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4675);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe1_671(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe1_671(x, y);
}
class ATSewerPipe6_672 : public Backdrop
{
public:
    ATSewerPipe6_672(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8552);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe6_672(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe6_672(x, y);
}
static Image* images_waterjetright_673_0_0[1];
static Direction direction_waterjetright_673_0_0 = {0, 100, 100, 0, -1, images_waterjetright_673_0_0, 1};
static Animation anim_waterjetright_673_0 = {&direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, NULL, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0, &direction_waterjetright_673_0_0};
static Animation * anim_array_waterjetright_673[1] = {&anim_waterjetright_673_0};
static Animations anim_waterjetright_673 = {1, &anim_array_waterjetright_673[0]};
static bool anim_waterjetright_673_initialized;
class WaterJetRight_673 : public Active
{
public:
    WaterJetRight_673(int x, int y) : Active(x, y, WaterJetRight_673_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterJet_Right", 14);
#endif
        this->animations = &anim_waterjetright_673;
        if (!anim_waterjetright_673_initialized) {
            anim_waterjetright_673_initialized = true;
            images_waterjetright_673_0_0[0] = get_internal_image(8660);
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
FrameObject * create_waterjetright_673(int x, int y)
{
    return new (Active::pool.create()) WaterJetRight_673(x, y);
}
static Image* images_minibossironwormsegment_674_0_0[1];
static Direction direction_minibossironwormsegment_674_0_0 = {0, 50, 50, 0, 1, images_minibossironwormsegment_674_0_0, 1};
static Image* images_minibossironwormsegment_674_0_16[1];
static Direction direction_minibossironwormsegment_674_0_16 = {16, 50, 50, 0, 1, images_minibossironwormsegment_674_0_16, 1};
static Animation anim_minibossironwormsegment_674_0 = {&direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, NULL, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, &direction_minibossironwormsegment_674_0_16, NULL, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0, &direction_minibossironwormsegment_674_0_0};
static Image* images_minibossironwormsegment_674_10_0[2];
static Direction direction_minibossironwormsegment_674_10_0 = {0, 50, 50, 0, -1, images_minibossironwormsegment_674_10_0, 2};
static Image* images_minibossironwormsegment_674_10_16[2];
static Direction direction_minibossironwormsegment_674_10_16 = {16, 50, 50, 0, -1, images_minibossironwormsegment_674_10_16, 2};
static Animation anim_minibossironwormsegment_674_10 = {&direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, NULL, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, &direction_minibossironwormsegment_674_10_16, NULL, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0, &direction_minibossironwormsegment_674_10_0};
static Animation * anim_array_minibossironwormsegment_674[11] = {&anim_minibossironwormsegment_674_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossironwormsegment_674_10};
static Animations anim_minibossironwormsegment_674 = {11, &anim_array_minibossironwormsegment_674[0]};
static bool anim_minibossironwormsegment_674_initialized;
class MinibossIronWormSegment_674 : public Active
{
public:
    MinibossIronWormSegment_674(int x, int y) : Active(x, y, MinibossIronWormSegment_674_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_IronWormSegment", 24);
#endif
        this->animations = &anim_minibossironwormsegment_674;
        if (!anim_minibossironwormsegment_674_initialized) {
            anim_minibossironwormsegment_674_initialized = true;
            images_minibossironwormsegment_674_0_0[0] = get_internal_image(8670);
            images_minibossironwormsegment_674_0_16[0] = get_internal_image(8671);
            images_minibossironwormsegment_674_10_0[0] = get_internal_image(8672);
            images_minibossironwormsegment_674_10_0[1] = get_internal_image(8670);
            images_minibossironwormsegment_674_10_16[0] = get_internal_image(8673);
            images_minibossironwormsegment_674_10_16[1] = get_internal_image(8671);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
    }
};
FrameObject * create_minibossironwormsegment_674(int x, int y)
{
    return new (Active::pool.create()) MinibossIronWormSegment_674(x, y);
}
static Image* images_minibossironworm_675_0_0[1];
static Direction direction_minibossironworm_675_0_0 = {0, 50, 50, 0, 1, images_minibossironworm_675_0_0, 1};
static Image* images_minibossironworm_675_0_8[4];
static Direction direction_minibossironworm_675_0_8 = {8, 50, 50, 0, 1, images_minibossironworm_675_0_8, 4};
static Image* images_minibossironworm_675_0_16[1];
static Direction direction_minibossironworm_675_0_16 = {16, 50, 50, 0, 1, images_minibossironworm_675_0_16, 1};
static Animation anim_minibossironworm_675_0 = {&direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, NULL, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, &direction_minibossironworm_675_0_8, NULL, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, &direction_minibossironworm_675_0_16, NULL, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0, &direction_minibossironworm_675_0_0};
static Image* images_minibossironworm_675_7_0[5];
static Direction direction_minibossironworm_675_7_0 = {0, 50, 50, 4, -1, images_minibossironworm_675_7_0, 5};
static Image* images_minibossironworm_675_7_16[5];
static Direction direction_minibossironworm_675_7_16 = {16, 50, 50, 4, -1, images_minibossironworm_675_7_16, 5};
static Animation anim_minibossironworm_675_7 = {&direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, NULL, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, &direction_minibossironworm_675_7_16, NULL, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0, &direction_minibossironworm_675_7_0};
static Image* images_minibossironworm_675_8_0[5];
static Direction direction_minibossironworm_675_8_0 = {0, 50, 50, 4, 1, images_minibossironworm_675_8_0, 5};
static Image* images_minibossironworm_675_8_16[5];
static Direction direction_minibossironworm_675_8_16 = {16, 50, 50, 4, 1, images_minibossironworm_675_8_16, 5};
static Animation anim_minibossironworm_675_8 = {&direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, NULL, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, &direction_minibossironworm_675_8_16, NULL, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0, &direction_minibossironworm_675_8_0};
static Image* images_minibossironworm_675_10_0[2];
static Direction direction_minibossironworm_675_10_0 = {0, 50, 50, 0, -1, images_minibossironworm_675_10_0, 2};
static Image* images_minibossironworm_675_10_16[2];
static Direction direction_minibossironworm_675_10_16 = {16, 50, 50, 0, -1, images_minibossironworm_675_10_16, 2};
static Animation anim_minibossironworm_675_10 = {&direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, NULL, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, &direction_minibossironworm_675_10_16, NULL, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0, &direction_minibossironworm_675_10_0};
static Animation * anim_array_minibossironworm_675[11] = {&anim_minibossironworm_675_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossironworm_675_7, &anim_minibossironworm_675_8, NULL, &anim_minibossironworm_675_10};
static Animations anim_minibossironworm_675 = {11, &anim_array_minibossironworm_675[0]};
static bool anim_minibossironworm_675_initialized;
class MinibossIronWorm_675 : public Active
{
public:
    MinibossIronWorm_675(int x, int y) : Active(x, y, MinibossIronWorm_675_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_IronWorm", 17);
#endif
        this->animations = &anim_minibossironworm_675;
        if (!anim_minibossironworm_675_initialized) {
            anim_minibossironworm_675_initialized = true;
            images_minibossironworm_675_0_0[0] = get_internal_image(8674);
            images_minibossironworm_675_0_8[0] = get_internal_image(8675);
            images_minibossironworm_675_0_8[1] = get_internal_image(8678);
            images_minibossironworm_675_0_8[2] = get_internal_image(8679);
            images_minibossironworm_675_0_8[3] = get_internal_image(8680);
            images_minibossironworm_675_0_16[0] = get_internal_image(8681);
            images_minibossironworm_675_7_0[0] = get_internal_image(8682);
            images_minibossironworm_675_7_0[1] = get_internal_image(8683);
            images_minibossironworm_675_7_0[2] = get_internal_image(8684);
            images_minibossironworm_675_7_0[3] = get_internal_image(8685);
            images_minibossironworm_675_7_0[4] = get_internal_image(8686);
            images_minibossironworm_675_7_16[0] = get_internal_image(8687);
            images_minibossironworm_675_7_16[1] = get_internal_image(8688);
            images_minibossironworm_675_7_16[2] = get_internal_image(8689);
            images_minibossironworm_675_7_16[3] = get_internal_image(8690);
            images_minibossironworm_675_7_16[4] = get_internal_image(8691);
            images_minibossironworm_675_8_0[0] = get_internal_image(8686);
            images_minibossironworm_675_8_0[1] = get_internal_image(8685);
            images_minibossironworm_675_8_0[2] = get_internal_image(8684);
            images_minibossironworm_675_8_0[3] = get_internal_image(8683);
            images_minibossironworm_675_8_0[4] = get_internal_image(8682);
            images_minibossironworm_675_8_16[0] = get_internal_image(8691);
            images_minibossironworm_675_8_16[1] = get_internal_image(8690);
            images_minibossironworm_675_8_16[2] = get_internal_image(8689);
            images_minibossironworm_675_8_16[3] = get_internal_image(8688);
            images_minibossironworm_675_8_16[4] = get_internal_image(8687);
            images_minibossironworm_675_10_0[0] = get_internal_image(8692);
            images_minibossironworm_675_10_0[1] = get_internal_image(8674);
            images_minibossironworm_675_10_16[0] = get_internal_image(8693);
            images_minibossironworm_675_10_16[1] = get_internal_image(8681);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 50);
        alterables->values.set(3, 6);
        alterables->values.set(4, -10);
        alterables->values.set(6, 10);
        alterables->values.set(7, -3);
        alterables->values.set(9, -1);
    }
};
FrameObject * create_minibossironworm_675(int x, int y)
{
    return new (Active::pool.create()) MinibossIronWorm_675(x, y);
}
class AquaBrick1_676 : public Backdrop
{
public:
    AquaBrick1_676(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4481);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick1_676(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick1_676(x, y);
}
class AquaBrick10_677 : public Backdrop
{
public:
    AquaBrick10_677(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 10", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4484);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick10_677(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick10_677(x, y);
}
class AquaDirt6_678 : public Backdrop
{
public:
    AquaDirt6_678(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4670);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquadirt6_678(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt6_678(x, y);
}
class ATSewerPipe11_679 : public Backdrop
{
public:
    ATSewerPipe11_679(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4717);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe11_679(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe11_679(x, y);
}
class ATSewerPipe8_680 : public Backdrop
{
public:
    ATSewerPipe8_680(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4866);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe8_680(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe8_680(x, y);
}
class ATWaterFaucet3_681 : public Backdrop
{
public:
    ATWaterFaucet3_681(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_WaterFaucet3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(723);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atwaterfaucet3_681(int x, int y)
{
    return new (Backdrop::pool.create()) ATWaterFaucet3_681(x, y);
}
class AquaBrick5_682 : public Backdrop
{
public:
    AquaBrick5_682(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 5", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4571);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick5_682(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick5_682(x, y);
}
class AquaBrick21_683 : public Backdrop
{
public:
    AquaBrick21_683(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 21", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4528);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick21_683(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick21_683(x, y);
}
class AquaBrick16_684 : public Backdrop
{
public:
    AquaBrick16_684(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 16", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4512);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick16_684(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick16_684(x, y);
}
class AquaBrick15_685 : public Backdrop
{
public:
    AquaBrick15_685(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 15", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4511);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick15_685(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick15_685(x, y);
}
class AquaTree2_686 : public Backdrop
{
public:
    AquaTree2_686(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaTree 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3749);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquatree2_686(int x, int y)
{
    return new (Backdrop::pool.create()) AquaTree2_686(x, y);
}
class SwitchBase_687 : public Backdrop
{
public:
    SwitchBase_687(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4729);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_687(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_687(x, y);
}
class AquaBrick11_688 : public Backdrop
{
public:
    AquaBrick11_688(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 11", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4486);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick11_688(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick11_688(x, y);
}
class AquaDirt_689 : public Backdrop
{
public:
    AquaDirt_689(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4668);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquadirt_689(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt_689(x, y);
}
class AquaBrickArch2_690 : public Backdrop
{
public:
    AquaBrickArch2_690(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickArch 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8449);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickarch2_690(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickArch2_690(x, y);
}
class AquaBrick3_691 : public Backdrop
{
public:
    AquaBrick3_691(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4568);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick3_691(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick3_691(x, y);
}
class AquaDirt2_692 : public Backdrop
{
public:
    AquaDirt2_692(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3627);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquadirt2_692(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt2_692(x, y);
}
class AquaBrick14_693 : public Backdrop
{
public:
    AquaBrick14_693(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 14", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4510);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick14_693(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick14_693(x, y);
}
class AquaPlant2_694 : public Backdrop
{
public:
    AquaPlant2_694(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaPlant 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3506);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquaplant2_694(int x, int y)
{
    return new (Backdrop::pool.create()) AquaPlant2_694(x, y);
}
class AquaDirt5_695 : public Backdrop
{
public:
    AquaDirt5_695(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4673);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquadirt5_695(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt5_695(x, y);
}
class ATWaterFaucet5_696 : public Backdrop
{
public:
    ATWaterFaucet5_696(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_WaterFaucet5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4660);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_atwaterfaucet5_696(int x, int y)
{
    return new (Backdrop::pool.create()) ATWaterFaucet5_696(x, y);
}
class AquaBrickSlope1_697 : public Backdrop
{
public:
    AquaBrickSlope1_697(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickSlope 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3829);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrickslope1_697(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickSlope1_697(x, y);
}
class AquaBrickSlope2_698 : public Backdrop
{
public:
    AquaBrickSlope2_698(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickSlope 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4577);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrickslope2_698(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickSlope2_698(x, y);
}
class AquaDirt4_699 : public Backdrop
{
public:
    AquaDirt4_699(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4661);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquadirt4_699(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt4_699(x, y);
}
class ATSewerPipe4_700 : public Backdrop
{
public:
    ATSewerPipe4_700(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8485);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe4_700(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe4_700(x, y);
}
class ATSewerPipe10_701 : public Backdrop
{
public:
    ATSewerPipe10_701(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4672);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe10_701(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe10_701(x, y);
}
class AquaTree1_702 : public Backdrop
{
public:
    AquaTree1_702(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaTree 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3738);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquatree1_702(int x, int y)
{
    return new (Backdrop::pool.create()) AquaTree1_702(x, y);
}
class AquaDirt3_703 : public Backdrop
{
public:
    AquaDirt3_703(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaDirt 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4666);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquadirt3_703(int x, int y)
{
    return new (Backdrop::pool.create()) AquaDirt3_703(x, y);
}
class ATColumn_704 : public Backdrop
{
public:
    ATColumn_704(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_Column", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4753);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atcolumn_704(int x, int y)
{
    return new (Backdrop::pool.create()) ATColumn_704(x, y);
}
class AquaBrickArch3_705 : public Backdrop
{
public:
    AquaBrickArch3_705(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickArch 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8454);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickarch3_705(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickArch3_705(x, y);
}
