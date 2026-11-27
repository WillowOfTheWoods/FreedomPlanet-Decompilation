#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class DVGrass4_506 : public Backdrop
{
public:
    DVGrass4_506(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9422);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvgrass4_506(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass4_506(x, y);
}
class DVGrass1_507 : public Backdrop
{
public:
    DVGrass1_507(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9419);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvgrass1_507(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass1_507(x, y);
}
class DVGrass2_508 : public Backdrop
{
public:
    DVGrass2_508(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9420);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvgrass2_508(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass2_508(x, y);
}
class DVGrass5_509 : public Backdrop
{
public:
    DVGrass5_509(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9423);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvgrass5_509(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass5_509(x, y);
}
class LevelParallaxPiece5_510 : public SystemBox
{
public:
    LevelParallaxPiece5_510(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_510_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 184;
        type = PATTERN_IMAGE;
        image = get_internal_image(3010);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_510(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_510(x, y);
}
class LevelParallaxPiece6_511 : public SystemBox
{
public:
    LevelParallaxPiece6_511(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_511_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 136;
        height = 80;
        type = PATTERN_IMAGE;
        image = get_internal_image(7653);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_511(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_511(x, y);
}
class HouseFloor_512 : public Backdrop
{
public:
    HouseFloor_512(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Floor", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10109);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housefloor_512(int x, int y)
{
    return new (Backdrop::pool.create()) HouseFloor_512(x, y);
}
class TreehouseFloor_513 : public Backdrop
{
public:
    TreehouseFloor_513(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_Floor", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5120);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_treehousefloor_513(int x, int y)
{
    return new (Backdrop::pool.create()) TreehouseFloor_513(x, y);
}
class HouseCeiling_514 : public Backdrop
{
public:
    HouseCeiling_514(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Ceiling", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14423);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_houseceiling_514(int x, int y)
{
    return new (Backdrop::pool.create()) HouseCeiling_514(x, y);
}
class TreehouseInside_515 : public Backdrop
{
public:
    TreehouseInside_515(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_Inside", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14421);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_treehouseinside_515(int x, int y)
{
    return new (Backdrop::pool.create()) TreehouseInside_515(x, y);
}
class HouseWallright_516 : public Backdrop
{
public:
    HouseWallright_516(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Wallright", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2851);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housewallright_516(int x, int y)
{
    return new (Backdrop::pool.create()) HouseWallright_516(x, y);
}
class TreehouseSolidBlack_517 : public QuickBackdrop
{
public:
    TreehouseSolidBlack_517(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_SolidBlack", 20);
#endif
        flags |= BACKGROUND;
        width = 56;
        height = 128;
        color = Color(8, 0, 0, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_treehousesolidblack_517(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TreehouseSolidBlack_517(x, y);
}
class HouseWallleft_518 : public Backdrop
{
public:
    HouseWallleft_518(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Wallleft", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14420);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housewallleft_518(int x, int y)
{
    return new (Backdrop::pool.create()) HouseWallleft_518(x, y);
}
class Backdrop12_519 : public Backdrop
{
public:
    Backdrop12_519(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 12", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6264);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop12_519(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop12_519(x, y);
}
static Image* images_furniturewall3_520_0_0[1];
static Direction direction_furniturewall3_520_0_0 = {0, 0, 0, 0, 1, images_furniturewall3_520_0_0, 1};
static Animation anim_furniturewall3_520_0 = {&direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, NULL, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0, &direction_furniturewall3_520_0_0};
static Animation * anim_array_furniturewall3_520[1] = {&anim_furniturewall3_520_0};
static Animations anim_furniturewall3_520 = {1, &anim_array_furniturewall3_520[0]};
static bool anim_furniturewall3_520_initialized;
class FurnitureWall3_520 : public Active
{
public:
    FurnitureWall3_520(int x, int y) : Active(x, y, FurnitureWall3_520_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall 3", 16);
#endif
        this->animations = &anim_furniturewall3_520;
        if (!anim_furniturewall3_520_initialized) {
            anim_furniturewall3_520_initialized = true;
            images_furniturewall3_520_0_0[0] = get_internal_image(14779);
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
FrameObject * create_furniturewall3_520(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall3_520(x, y);
}
static Image* images_furniturefloor9_521_0_0[1];
static Direction direction_furniturefloor9_521_0_0 = {0, 0, 0, 0, 1, images_furniturefloor9_521_0_0, 1};
static Animation anim_furniturefloor9_521_0 = {&direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, NULL, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0, &direction_furniturefloor9_521_0_0};
static Animation * anim_array_furniturefloor9_521[1] = {&anim_furniturefloor9_521_0};
static Animations anim_furniturefloor9_521 = {1, &anim_array_furniturefloor9_521[0]};
static bool anim_furniturefloor9_521_initialized;
class FurnitureFloor9_521 : public Active
{
public:
    FurnitureFloor9_521(int x, int y) : Active(x, y, FurnitureFloor9_521_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 9", 17);
#endif
        this->animations = &anim_furniturefloor9_521;
        if (!anim_furniturefloor9_521_initialized) {
            anim_furniturefloor9_521_initialized = true;
            images_furniturefloor9_521_0_0[0] = get_internal_image(13729);
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
FrameObject * create_furniturefloor9_521(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor9_521(x, y);
}
static Image* images_objectchair_522_0_0[1];
static Direction direction_objectchair_522_0_0 = {0, 50, 50, 0, 1, images_objectchair_522_0_0, 1};
static Animation anim_objectchair_522_0 = {&direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, NULL, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0, &direction_objectchair_522_0_0};
static Animation * anim_array_objectchair_522[1] = {&anim_objectchair_522_0};
static Animations anim_objectchair_522 = {1, &anim_array_objectchair_522[0]};
static bool anim_objectchair_522_initialized;
class ObjectChair_522 : public Active
{
public:
    ObjectChair_522(int x, int y) : Active(x, y, ObjectChair_522_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Object_Chair", 12);
#endif
        this->animations = &anim_objectchair_522;
        if (!anim_objectchair_522_initialized) {
            anim_objectchair_522_initialized = true;
            images_objectchair_522_0_0[0] = get_internal_image(4410);
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
FrameObject * create_objectchair_522(int x, int y)
{
    return new (Active::pool.create()) ObjectChair_522(x, y);
}
static Image* images_levelfloatingplatform_523_0_0[1];
static Direction direction_levelfloatingplatform_523_0_0 = {0, 50, 50, 0, 1, images_levelfloatingplatform_523_0_0, 1};
static Animation anim_levelfloatingplatform_523_0 = {&direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, NULL, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0, &direction_levelfloatingplatform_523_0_0};
static Animation * anim_array_levelfloatingplatform_523[1] = {&anim_levelfloatingplatform_523_0};
static Animations anim_levelfloatingplatform_523 = {1, &anim_array_levelfloatingplatform_523[0]};
static bool anim_levelfloatingplatform_523_initialized;
class LevelFloatingPlatform_523 : public Active
{
public:
    LevelFloatingPlatform_523(int x, int y) : Active(x, y, LevelFloatingPlatform_523_type)
    {
        // qualifiers: 15, 16, 19
#ifndef NDEBUG
        name = std::string("Level_FloatingPlatform", 22);
#endif
        this->animations = &anim_levelfloatingplatform_523;
        if (!anim_levelfloatingplatform_523_initialized) {
            anim_levelfloatingplatform_523_initialized = true;
            images_levelfloatingplatform_523_0_0[0] = get_internal_image(356);
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
FrameObject * create_levelfloatingplatform_523(int x, int y)
{
    return new (Active::pool.create()) LevelFloatingPlatform_523(x, y);
}
static Image* images_treehousedoor2_524_0_0[1];
static Direction direction_treehousedoor2_524_0_0 = {0, 50, 50, 0, 1, images_treehousedoor2_524_0_0, 1};
static Animation anim_treehousedoor2_524_0 = {&direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, NULL, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0, &direction_treehousedoor2_524_0_0};
static Animation * anim_array_treehousedoor2_524[1] = {&anim_treehousedoor2_524_0};
static Animations anim_treehousedoor2_524 = {1, &anim_array_treehousedoor2_524[0]};
static bool anim_treehousedoor2_524_initialized;
class TreehouseDoor2_524 : public Active
{
public:
    TreehouseDoor2_524(int x, int y) : Active(x, y, TreehouseDoor2_524_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Treehouse_door 2", 16);
#endif
        this->animations = &anim_treehousedoor2_524;
        if (!anim_treehousedoor2_524_initialized) {
            anim_treehousedoor2_524_initialized = true;
            images_treehousedoor2_524_0_0[0] = get_internal_image(12414);
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
FrameObject * create_treehousedoor2_524(int x, int y)
{
    return new (Active::pool.create()) TreehouseDoor2_524(x, y);
}
static Image* images_treehousedoor_525_0_0[1];
static Direction direction_treehousedoor_525_0_0 = {0, 50, 50, 0, 1, images_treehousedoor_525_0_0, 1};
static Animation anim_treehousedoor_525_0 = {&direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, NULL, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0, &direction_treehousedoor_525_0_0};
static Animation * anim_array_treehousedoor_525[1] = {&anim_treehousedoor_525_0};
static Animations anim_treehousedoor_525 = {1, &anim_array_treehousedoor_525[0]};
static bool anim_treehousedoor_525_initialized;
class TreehouseDoor_525 : public Active
{
public:
    TreehouseDoor_525(int x, int y) : Active(x, y, TreehouseDoor_525_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Treehouse_door", 14);
#endif
        this->animations = &anim_treehousedoor_525;
        if (!anim_treehousedoor_525_initialized) {
            anim_treehousedoor_525_initialized = true;
            images_treehousedoor_525_0_0[0] = get_internal_image(12416);
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
FrameObject * create_treehousedoor_525(int x, int y)
{
    return new (Active::pool.create()) TreehouseDoor_525(x, y);
}
static Image* images_treehouseentrancetrigger_526_0_0[1];
static Direction direction_treehouseentrancetrigger_526_0_0 = {0, 50, 50, 0, 1, images_treehouseentrancetrigger_526_0_0, 1};
static Animation anim_treehouseentrancetrigger_526_0 = {&direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, NULL, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0, &direction_treehouseentrancetrigger_526_0_0};
static Animation * anim_array_treehouseentrancetrigger_526[1] = {&anim_treehouseentrancetrigger_526_0};
static Animations anim_treehouseentrancetrigger_526 = {1, &anim_array_treehouseentrancetrigger_526[0]};
static bool anim_treehouseentrancetrigger_526_initialized;
class TreehouseEntranceTrigger_526 : public Active
{
public:
    TreehouseEntranceTrigger_526(int x, int y) : Active(x, y, TreehouseEntranceTrigger_526_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Treehouse_EntranceTrigger", 25);
#endif
        set_visible(false);
        this->animations = &anim_treehouseentrancetrigger_526;
        if (!anim_treehouseentrancetrigger_526_initialized) {
            anim_treehouseentrancetrigger_526_initialized = true;
            images_treehouseentrancetrigger_526_0_0[0] = get_internal_image(11616);
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
FrameObject * create_treehouseentrancetrigger_526(int x, int y)
{
    return new (Active::pool.create()) TreehouseEntranceTrigger_526(x, y);
}
static Image* images_paperlantern_527_0_0[4];
static Direction direction_paperlantern_527_0_0 = {0, 14, 14, 0, -1, images_paperlantern_527_0_0, 4};
static Animation anim_paperlantern_527_0 = {&direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, NULL, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0, &direction_paperlantern_527_0_0};
static Animation * anim_array_paperlantern_527[1] = {&anim_paperlantern_527_0};
static Animations anim_paperlantern_527 = {1, &anim_array_paperlantern_527[0]};
static bool anim_paperlantern_527_initialized;
class PaperLantern_527 : public Active
{
public:
    PaperLantern_527(int x, int y) : Active(x, y, PaperLantern_527_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Paper Lantern", 13);
#endif
        this->animations = &anim_paperlantern_527;
        if (!anim_paperlantern_527_initialized) {
            anim_paperlantern_527_initialized = true;
            images_paperlantern_527_0_0[0] = get_internal_image(8484);
            images_paperlantern_527_0_0[1] = get_internal_image(8635);
            images_paperlantern_527_0_0[2] = get_internal_image(8634);
            images_paperlantern_527_0_0[3] = get_internal_image(8635);
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
FrameObject * create_paperlantern_527(int x, int y)
{
    return new (Active::pool.create()) PaperLantern_527(x, y);
}
static Image* images_objectfuel_528_0_0[7];
static Direction direction_objectfuel_528_0_0 = {0, 14, 14, 0, -1, images_objectfuel_528_0_0, 7};
static Animation anim_objectfuel_528_0 = {&direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, NULL, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0, &direction_objectfuel_528_0_0};
static Animation * anim_array_objectfuel_528[1] = {&anim_objectfuel_528_0};
static Animations anim_objectfuel_528 = {1, &anim_array_objectfuel_528[0]};
static bool anim_objectfuel_528_initialized;
class ObjectFuel_528 : public Active
{
public:
    ObjectFuel_528(int x, int y) : Active(x, y, ObjectFuel_528_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_Fuel", 11);
#endif
        this->animations = &anim_objectfuel_528;
        if (!anim_objectfuel_528_initialized) {
            anim_objectfuel_528_initialized = true;
            images_objectfuel_528_0_0[0] = get_internal_image(6101);
            images_objectfuel_528_0_0[1] = get_internal_image(6099);
            images_objectfuel_528_0_0[2] = get_internal_image(6098);
            images_objectfuel_528_0_0[3] = get_internal_image(6031);
            images_objectfuel_528_0_0[4] = get_internal_image(6081);
            images_objectfuel_528_0_0[5] = get_internal_image(6059);
            images_objectfuel_528_0_0[6] = get_internal_image(6079);
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
FrameObject * create_objectfuel_528(int x, int y)
{
    return new (Active::pool.create()) ObjectFuel_528(x, y);
}
static Image* images_npclilac_529_0_0[15];
static Direction direction_npclilac_529_0_0 = {0, 14, 14, 0, -1, images_npclilac_529_0_0, 15};
static Image* images_npclilac_529_0_1[5];
static Direction direction_npclilac_529_0_1 = {1, 0, 0, 0, -1, images_npclilac_529_0_1, 5};
static Image* images_npclilac_529_0_2[5];
static Direction direction_npclilac_529_0_2 = {2, 0, 0, 0, -1, images_npclilac_529_0_2, 5};
static Animation anim_npclilac_529_0 = {&direction_npclilac_529_0_0, &direction_npclilac_529_0_1, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, &direction_npclilac_529_0_2, NULL, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0, &direction_npclilac_529_0_0};
static Animation * anim_array_npclilac_529[1] = {&anim_npclilac_529_0};
static Animations anim_npclilac_529 = {1, &anim_array_npclilac_529[0]};
static bool anim_npclilac_529_initialized;
class NPCLilac_529 : public Active
{
public:
    NPCLilac_529(int x, int y) : Active(x, y, NPCLilac_529_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Lilac", 9);
#endif
        set_visible(false);
        this->animations = &anim_npclilac_529;
        if (!anim_npclilac_529_initialized) {
            anim_npclilac_529_initialized = true;
            images_npclilac_529_0_0[0] = get_internal_image(9652);
            images_npclilac_529_0_0[1] = get_internal_image(9653);
            images_npclilac_529_0_0[2] = get_internal_image(9654);
            images_npclilac_529_0_0[3] = get_internal_image(9655);
            images_npclilac_529_0_0[4] = get_internal_image(9717);
            images_npclilac_529_0_0[5] = get_internal_image(9652);
            images_npclilac_529_0_0[6] = get_internal_image(9653);
            images_npclilac_529_0_0[7] = get_internal_image(9732);
            images_npclilac_529_0_0[8] = get_internal_image(9727);
            images_npclilac_529_0_0[9] = get_internal_image(9717);
            images_npclilac_529_0_0[10] = get_internal_image(9652);
            images_npclilac_529_0_0[11] = get_internal_image(9653);
            images_npclilac_529_0_0[12] = get_internal_image(9654);
            images_npclilac_529_0_0[13] = get_internal_image(9655);
            images_npclilac_529_0_0[14] = get_internal_image(9717);
            images_npclilac_529_0_1[0] = get_internal_image(2755);
            images_npclilac_529_0_1[1] = get_internal_image(2837);
            images_npclilac_529_0_1[2] = get_internal_image(2846);
            images_npclilac_529_0_1[3] = get_internal_image(2755);
            images_npclilac_529_0_1[4] = get_internal_image(2837);
            images_npclilac_529_0_2[0] = get_internal_image(419);
            images_npclilac_529_0_2[1] = get_internal_image(214);
            images_npclilac_529_0_2[2] = get_internal_image(512);
            images_npclilac_529_0_2[3] = get_internal_image(419);
            images_npclilac_529_0_2[4] = get_internal_image(214);
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
FrameObject * create_npclilac_529(int x, int y)
{
    return new (Active::pool.create()) NPCLilac_529(x, y);
}
static Image* images_objectjumppad_530_0_0[1];
static Direction direction_objectjumppad_530_0_0 = {0, 25, 25, 0, -1, images_objectjumppad_530_0_0, 1};
static Image* images_objectjumppad_530_0_1[4];
static Direction direction_objectjumppad_530_0_1 = {1, 25, 25, 0, -1, images_objectjumppad_530_0_1, 4};
static Image* images_objectjumppad_530_0_2[1];
static Direction direction_objectjumppad_530_0_2 = {2, 25, 25, 0, -1, images_objectjumppad_530_0_2, 1};
static Animation anim_objectjumppad_530_0 = {&direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_1, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, &direction_objectjumppad_530_0_2, NULL, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0, &direction_objectjumppad_530_0_0};
static Animation * anim_array_objectjumppad_530[1] = {&anim_objectjumppad_530_0};
static Animations anim_objectjumppad_530 = {1, &anim_array_objectjumppad_530[0]};
static bool anim_objectjumppad_530_initialized;
class ObjectJumppad_530 : public Active
{
public:
    ObjectJumppad_530(int x, int y) : Active(x, y, ObjectJumppad_530_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Jumppad", 14);
#endif
        this->animations = &anim_objectjumppad_530;
        if (!anim_objectjumppad_530_initialized) {
            anim_objectjumppad_530_initialized = true;
            images_objectjumppad_530_0_0[0] = get_internal_image(2350);
            images_objectjumppad_530_0_1[0] = get_internal_image(3866);
            images_objectjumppad_530_0_1[1] = get_internal_image(1749);
            images_objectjumppad_530_0_1[2] = get_internal_image(4898);
            images_objectjumppad_530_0_1[3] = get_internal_image(4897);
            images_objectjumppad_530_0_2[0] = get_internal_image(2350);
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
FrameObject * create_objectjumppad_530(int x, int y)
{
    return new (Active::pool.create()) ObjectJumppad_530(x, y);
}
static Image* images_pushableblock1_531_0_0[1];
static Direction direction_pushableblock1_531_0_0 = {0, 100, 100, 0, 1, images_pushableblock1_531_0_0, 1};
static Animation anim_pushableblock1_531_0 = {&direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, NULL, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0, &direction_pushableblock1_531_0_0};
static Animation * anim_array_pushableblock1_531[1] = {&anim_pushableblock1_531_0};
static Animations anim_pushableblock1_531 = {1, &anim_array_pushableblock1_531[0]};
static bool anim_pushableblock1_531_initialized;
class PushableBlock1_531 : public Active
{
public:
    PushableBlock1_531(int x, int y) : Active(x, y, PushableBlock1_531_type)
    {
        // qualifiers: 14, 16, 21
#ifndef NDEBUG
        name = std::string("PushableBlock 1", 15);
#endif
        this->animations = &anim_pushableblock1_531;
        if (!anim_pushableblock1_531_initialized) {
            anim_pushableblock1_531_initialized = true;
            images_pushableblock1_531_0_0[0] = get_internal_image(8293);
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
FrameObject * create_pushableblock1_531(int x, int y)
{
    return new (Active::pool.create()) PushableBlock1_531(x, y);
}
static Image* images_objecttaostone_532_0_0[10];
static Direction direction_objecttaostone_532_0_0 = {0, 25, 25, 0, -1, images_objecttaostone_532_0_0, 10};
static Animation anim_objecttaostone_532_0 = {&direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, NULL, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0, &direction_objecttaostone_532_0_0};
static Animation * anim_array_objecttaostone_532[1] = {&anim_objecttaostone_532_0};
static Animations anim_objecttaostone_532 = {1, &anim_array_objecttaostone_532[0]};
static bool anim_objecttaostone_532_initialized;
class ObjectTaoStone_532 : public Active
{
public:
    ObjectTaoStone_532(int x, int y) : Active(x, y, ObjectTaoStone_532_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TaoStone", 15);
#endif
        this->animations = &anim_objecttaostone_532;
        if (!anim_objecttaostone_532_initialized) {
            anim_objecttaostone_532_initialized = true;
            images_objecttaostone_532_0_0[0] = get_internal_image(15646);
            images_objecttaostone_532_0_0[1] = get_internal_image(15651);
            images_objecttaostone_532_0_0[2] = get_internal_image(15649);
            images_objecttaostone_532_0_0[3] = get_internal_image(15684);
            images_objecttaostone_532_0_0[4] = get_internal_image(15685);
            images_objecttaostone_532_0_0[5] = get_internal_image(15644);
            images_objecttaostone_532_0_0[6] = get_internal_image(15683);
            images_objecttaostone_532_0_0[7] = get_internal_image(15686);
            images_objecttaostone_532_0_0[8] = get_internal_image(15721);
            images_objecttaostone_532_0_0[9] = get_internal_image(15689);
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
FrameObject * create_objecttaostone_532(int x, int y)
{
    return new (Active::pool.create()) ObjectTaoStone_532(x, y);
}
static Image* images_npcshellduck_533_0_0[1];
static Direction direction_npcshellduck_533_0_0 = {0, 50, 50, 0, 1, images_npcshellduck_533_0_0, 1};
static Image* images_npcshellduck_533_0_16[1];
static Direction direction_npcshellduck_533_0_16 = {16, 50, 50, 0, 1, images_npcshellduck_533_0_16, 1};
static Animation anim_npcshellduck_533_0 = {&direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, NULL, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, &direction_npcshellduck_533_0_16, NULL, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0, &direction_npcshellduck_533_0_0};
static Image* images_npcshellduck_533_1_0[10];
static Direction direction_npcshellduck_533_1_0 = {0, 30, 30, 0, -1, images_npcshellduck_533_1_0, 10};
static Image* images_npcshellduck_533_1_16[10];
static Direction direction_npcshellduck_533_1_16 = {16, 30, 30, 0, -1, images_npcshellduck_533_1_16, 10};
static Animation anim_npcshellduck_533_1 = {&direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, NULL, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, &direction_npcshellduck_533_1_16, NULL, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0, &direction_npcshellduck_533_1_0};
static Image* images_npcshellduck_533_2_0[10];
static Direction direction_npcshellduck_533_2_0 = {0, 30, 30, 0, -1, images_npcshellduck_533_2_0, 10};
static Image* images_npcshellduck_533_2_16[10];
static Direction direction_npcshellduck_533_2_16 = {16, 30, 30, 0, -1, images_npcshellduck_533_2_16, 10};
static Animation anim_npcshellduck_533_2 = {&direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, NULL, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, &direction_npcshellduck_533_2_16, NULL, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0, &direction_npcshellduck_533_2_0};
static Image* images_npcshellduck_533_5_0[27];
static Direction direction_npcshellduck_533_5_0 = {0, 0, 0, 0, -1, images_npcshellduck_533_5_0, 27};
static Image* images_npcshellduck_533_5_1[5];
static Direction direction_npcshellduck_533_5_1 = {1, 18, 18, 0, -1, images_npcshellduck_533_5_1, 5};
static Image* images_npcshellduck_533_5_2[1];
static Direction direction_npcshellduck_533_5_2 = {2, 50, 50, 0, -1, images_npcshellduck_533_5_2, 1};
static Image* images_npcshellduck_533_5_8[1];
static Direction direction_npcshellduck_533_5_8 = {8, 50, 50, 0, 1, images_npcshellduck_533_5_8, 1};
static Image* images_npcshellduck_533_5_16[27];
static Direction direction_npcshellduck_533_5_16 = {16, 0, 0, 0, -1, images_npcshellduck_533_5_16, 27};
static Image* images_npcshellduck_533_5_17[5];
static Direction direction_npcshellduck_533_5_17 = {17, 18, 18, 0, -1, images_npcshellduck_533_5_17, 5};
static Image* images_npcshellduck_533_5_18[1];
static Direction direction_npcshellduck_533_5_18 = {18, 50, 50, 0, -1, images_npcshellduck_533_5_18, 1};
static Animation anim_npcshellduck_533_5 = {&direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_1, &direction_npcshellduck_533_5_2, &direction_npcshellduck_533_5_2, &direction_npcshellduck_533_5_2, NULL, &direction_npcshellduck_533_5_8, &direction_npcshellduck_533_5_8, &direction_npcshellduck_533_5_8, &direction_npcshellduck_533_5_8, &direction_npcshellduck_533_5_8, &direction_npcshellduck_533_5_8, NULL, &direction_npcshellduck_533_5_16, &direction_npcshellduck_533_5_16, &direction_npcshellduck_533_5_16, &direction_npcshellduck_533_5_16, &direction_npcshellduck_533_5_17, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, &direction_npcshellduck_533_5_18, NULL, &direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_0, &direction_npcshellduck_533_5_0};
static Image* images_npcshellduck_533_7_0[6];
static Direction direction_npcshellduck_533_7_0 = {0, 20, 20, 5, -1, images_npcshellduck_533_7_0, 6};
static Image* images_npcshellduck_533_7_16[6];
static Direction direction_npcshellduck_533_7_16 = {16, 20, 20, 5, -1, images_npcshellduck_533_7_16, 6};
static Animation anim_npcshellduck_533_7 = {&direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, NULL, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, &direction_npcshellduck_533_7_16, NULL, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0, &direction_npcshellduck_533_7_0};
static Image* images_npcshellduck_533_9_0[4];
static Direction direction_npcshellduck_533_9_0 = {0, 9, 9, 0, -1, images_npcshellduck_533_9_0, 4};
static Animation anim_npcshellduck_533_9 = {&direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, NULL, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0, &direction_npcshellduck_533_9_0};
static Image* images_npcshellduck_533_10_0[1];
static Direction direction_npcshellduck_533_10_0 = {0, 50, 50, 0, -1, images_npcshellduck_533_10_0, 1};
static Image* images_npcshellduck_533_10_16[1];
static Direction direction_npcshellduck_533_10_16 = {16, 50, 50, 0, -1, images_npcshellduck_533_10_16, 1};
static Animation anim_npcshellduck_533_10 = {&direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, NULL, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, &direction_npcshellduck_533_10_16, NULL, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0, &direction_npcshellduck_533_10_0};
static Animation * anim_array_npcshellduck_533[11] = {&anim_npcshellduck_533_0, &anim_npcshellduck_533_1, &anim_npcshellduck_533_2, NULL, NULL, &anim_npcshellduck_533_5, NULL, &anim_npcshellduck_533_7, NULL, &anim_npcshellduck_533_9, &anim_npcshellduck_533_10};
static Animations anim_npcshellduck_533 = {11, &anim_array_npcshellduck_533[0]};
static bool anim_npcshellduck_533_initialized;
class NPCShellduck_533 : public Active
{
public:
    NPCShellduck_533(int x, int y) : Active(x, y, NPCShellduck_533_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Shellduck", 13);
#endif
        this->animations = &anim_npcshellduck_533;
        if (!anim_npcshellduck_533_initialized) {
            anim_npcshellduck_533_initialized = true;
            images_npcshellduck_533_0_0[0] = get_internal_image(15552);
            images_npcshellduck_533_0_16[0] = get_internal_image(15558);
            images_npcshellduck_533_1_0[0] = get_internal_image(11852);
            images_npcshellduck_533_1_0[1] = get_internal_image(11822);
            images_npcshellduck_533_1_0[2] = get_internal_image(11806);
            images_npcshellduck_533_1_0[3] = get_internal_image(11824);
            images_npcshellduck_533_1_0[4] = get_internal_image(11825);
            images_npcshellduck_533_1_0[5] = get_internal_image(11826);
            images_npcshellduck_533_1_0[6] = get_internal_image(11827);
            images_npcshellduck_533_1_0[7] = get_internal_image(11823);
            images_npcshellduck_533_1_0[8] = get_internal_image(11837);
            images_npcshellduck_533_1_0[9] = get_internal_image(11851);
            images_npcshellduck_533_1_16[0] = get_internal_image(197);
            images_npcshellduck_533_1_16[1] = get_internal_image(2533);
            images_npcshellduck_533_1_16[2] = get_internal_image(2572);
            images_npcshellduck_533_1_16[3] = get_internal_image(2573);
            images_npcshellduck_533_1_16[4] = get_internal_image(7212);
            images_npcshellduck_533_1_16[5] = get_internal_image(7297);
            images_npcshellduck_533_1_16[6] = get_internal_image(7298);
            images_npcshellduck_533_1_16[7] = get_internal_image(7750);
            images_npcshellduck_533_1_16[8] = get_internal_image(7753);
            images_npcshellduck_533_1_16[9] = get_internal_image(7754);
            images_npcshellduck_533_2_0[0] = get_internal_image(11852);
            images_npcshellduck_533_2_0[1] = get_internal_image(11822);
            images_npcshellduck_533_2_0[2] = get_internal_image(11806);
            images_npcshellduck_533_2_0[3] = get_internal_image(11824);
            images_npcshellduck_533_2_0[4] = get_internal_image(11825);
            images_npcshellduck_533_2_0[5] = get_internal_image(11826);
            images_npcshellduck_533_2_0[6] = get_internal_image(11827);
            images_npcshellduck_533_2_0[7] = get_internal_image(11823);
            images_npcshellduck_533_2_0[8] = get_internal_image(11837);
            images_npcshellduck_533_2_0[9] = get_internal_image(11851);
            images_npcshellduck_533_2_16[0] = get_internal_image(197);
            images_npcshellduck_533_2_16[1] = get_internal_image(2533);
            images_npcshellduck_533_2_16[2] = get_internal_image(2572);
            images_npcshellduck_533_2_16[3] = get_internal_image(2573);
            images_npcshellduck_533_2_16[4] = get_internal_image(7212);
            images_npcshellduck_533_2_16[5] = get_internal_image(7297);
            images_npcshellduck_533_2_16[6] = get_internal_image(7298);
            images_npcshellduck_533_2_16[7] = get_internal_image(7750);
            images_npcshellduck_533_2_16[8] = get_internal_image(7753);
            images_npcshellduck_533_2_16[9] = get_internal_image(7754);
            images_npcshellduck_533_5_0[0] = get_internal_image(15552);
            images_npcshellduck_533_5_0[1] = get_internal_image(14771);
            images_npcshellduck_533_5_0[2] = get_internal_image(15575);
            images_npcshellduck_533_5_0[3] = get_internal_image(15574);
            images_npcshellduck_533_5_0[4] = get_internal_image(15580);
            images_npcshellduck_533_5_0[5] = get_internal_image(15581);
            images_npcshellduck_533_5_0[6] = get_internal_image(8097);
            images_npcshellduck_533_5_0[7] = get_internal_image(4563);
            images_npcshellduck_533_5_0[8] = get_internal_image(8112);
            images_npcshellduck_533_5_0[9] = get_internal_image(8117);
            images_npcshellduck_533_5_0[10] = get_internal_image(8116);
            images_npcshellduck_533_5_0[11] = get_internal_image(11791);
            images_npcshellduck_533_5_0[12] = get_internal_image(4561);
            images_npcshellduck_533_5_0[13] = get_internal_image(4564);
            images_npcshellduck_533_5_0[14] = get_internal_image(8084);
            images_npcshellduck_533_5_0[15] = get_internal_image(1416);
            images_npcshellduck_533_5_0[16] = get_internal_image(11802);
            images_npcshellduck_533_5_0[17] = get_internal_image(11805);
            images_npcshellduck_533_5_0[18] = get_internal_image(4087);
            images_npcshellduck_533_5_0[19] = get_internal_image(4550);
            images_npcshellduck_533_5_0[20] = get_internal_image(4649);
            images_npcshellduck_533_5_0[21] = get_internal_image(2082);
            images_npcshellduck_533_5_0[22] = get_internal_image(1644);
            images_npcshellduck_533_5_0[23] = get_internal_image(1645);
            images_npcshellduck_533_5_0[24] = get_internal_image(1441);
            images_npcshellduck_533_5_0[25] = get_internal_image(1054);
            images_npcshellduck_533_5_0[26] = get_internal_image(994);
            images_npcshellduck_533_5_1[0] = get_internal_image(15659);
            images_npcshellduck_533_5_1[1] = get_internal_image(15655);
            images_npcshellduck_533_5_1[2] = get_internal_image(15656);
            images_npcshellduck_533_5_1[3] = get_internal_image(15657);
            images_npcshellduck_533_5_1[4] = get_internal_image(15659);
            images_npcshellduck_533_5_2[0] = get_internal_image(15636);
            images_npcshellduck_533_5_8[0] = get_internal_image(423);
            images_npcshellduck_533_5_16[0] = get_internal_image(15558);
            images_npcshellduck_533_5_16[1] = get_internal_image(15582);
            images_npcshellduck_533_5_16[2] = get_internal_image(15637);
            images_npcshellduck_533_5_16[3] = get_internal_image(15638);
            images_npcshellduck_533_5_16[4] = get_internal_image(15639);
            images_npcshellduck_533_5_16[5] = get_internal_image(15640);
            images_npcshellduck_533_5_16[6] = get_internal_image(11792);
            images_npcshellduck_533_5_16[7] = get_internal_image(11793);
            images_npcshellduck_533_5_16[8] = get_internal_image(11794);
            images_npcshellduck_533_5_16[9] = get_internal_image(11795);
            images_npcshellduck_533_5_16[10] = get_internal_image(11796);
            images_npcshellduck_533_5_16[11] = get_internal_image(11797);
            images_npcshellduck_533_5_16[12] = get_internal_image(11798);
            images_npcshellduck_533_5_16[13] = get_internal_image(11799);
            images_npcshellduck_533_5_16[14] = get_internal_image(11800);
            images_npcshellduck_533_5_16[15] = get_internal_image(567);
            images_npcshellduck_533_5_16[16] = get_internal_image(712);
            images_npcshellduck_533_5_16[17] = get_internal_image(961);
            images_npcshellduck_533_5_16[18] = get_internal_image(3740);
            images_npcshellduck_533_5_16[19] = get_internal_image(4829);
            images_npcshellduck_533_5_16[20] = get_internal_image(4946);
            images_npcshellduck_533_5_16[21] = get_internal_image(1566);
            images_npcshellduck_533_5_16[22] = get_internal_image(2155);
            images_npcshellduck_533_5_16[23] = get_internal_image(2180);
            images_npcshellduck_533_5_16[24] = get_internal_image(1356);
            images_npcshellduck_533_5_16[25] = get_internal_image(1494);
            images_npcshellduck_533_5_16[26] = get_internal_image(1515);
            images_npcshellduck_533_5_17[0] = get_internal_image(15654);
            images_npcshellduck_533_5_17[1] = get_internal_image(15658);
            images_npcshellduck_533_5_17[2] = get_internal_image(15660);
            images_npcshellduck_533_5_17[3] = get_internal_image(15661);
            images_npcshellduck_533_5_17[4] = get_internal_image(15654);
            images_npcshellduck_533_5_18[0] = get_internal_image(15653);
            images_npcshellduck_533_7_0[0] = get_internal_image(15663);
            images_npcshellduck_533_7_0[1] = get_internal_image(15663);
            images_npcshellduck_533_7_0[2] = get_internal_image(15663);
            images_npcshellduck_533_7_0[3] = get_internal_image(15664);
            images_npcshellduck_533_7_0[4] = get_internal_image(15665);
            images_npcshellduck_533_7_0[5] = get_internal_image(15666);
            images_npcshellduck_533_7_16[0] = get_internal_image(15662);
            images_npcshellduck_533_7_16[1] = get_internal_image(15662);
            images_npcshellduck_533_7_16[2] = get_internal_image(15662);
            images_npcshellduck_533_7_16[3] = get_internal_image(15667);
            images_npcshellduck_533_7_16[4] = get_internal_image(15668);
            images_npcshellduck_533_7_16[5] = get_internal_image(15669);
            images_npcshellduck_533_9_0[0] = get_internal_image(5376);
            images_npcshellduck_533_9_0[1] = get_internal_image(5374);
            images_npcshellduck_533_9_0[2] = get_internal_image(6898);
            images_npcshellduck_533_9_0[3] = get_internal_image(5374);
            images_npcshellduck_533_10_0[0] = get_internal_image(1441);
            images_npcshellduck_533_10_16[0] = get_internal_image(1356);
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
FrameObject * create_npcshellduck_533(int x, int y)
{
    return new (Active::pool.create()) NPCShellduck_533(x, y);
}
static Image* images_objectcatface_534_0_0[1];
static Direction direction_objectcatface_534_0_0 = {0, 50, 50, 0, 1, images_objectcatface_534_0_0, 1};
static Animation anim_objectcatface_534_0 = {&direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, NULL, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0, &direction_objectcatface_534_0_0};
static Animation * anim_array_objectcatface_534[1] = {&anim_objectcatface_534_0};
static Animations anim_objectcatface_534 = {1, &anim_array_objectcatface_534[0]};
static bool anim_objectcatface_534_initialized;
class ObjectCatFace_534 : public Active
{
public:
    ObjectCatFace_534(int x, int y) : Active(x, y, ObjectCatFace_534_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_CatFace", 14);
#endif
        this->animations = &anim_objectcatface_534;
        if (!anim_objectcatface_534_initialized) {
            anim_objectcatface_534_initialized = true;
            images_objectcatface_534_0_0[0] = get_internal_image(5942);
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
FrameObject * create_objectcatface_534(int x, int y)
{
    return new (Active::pool.create()) ObjectCatFace_534(x, y);
}
static Image* images_furniturewall_535_0_0[2];
static Direction direction_furniturewall_535_0_0 = {0, 0, 0, 0, 1, images_furniturewall_535_0_0, 2};
static Animation anim_furniturewall_535_0 = {&direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, NULL, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0, &direction_furniturewall_535_0_0};
static Animation * anim_array_furniturewall_535[1] = {&anim_furniturewall_535_0};
static Animations anim_furniturewall_535 = {1, &anim_array_furniturewall_535[0]};
static bool anim_furniturewall_535_initialized;
class FurnitureWall_535 : public Active
{
public:
    FurnitureWall_535(int x, int y) : Active(x, y, FurnitureWall_535_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall", 14);
#endif
        this->animations = &anim_furniturewall_535;
        if (!anim_furniturewall_535_initialized) {
            anim_furniturewall_535_initialized = true;
            images_furniturewall_535_0_0[0] = get_internal_image(5088);
            images_furniturewall_535_0_0[1] = get_internal_image(10157);
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
FrameObject * create_furniturewall_535(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall_535(x, y);
}
static Image* images_furniturewall2_536_0_0[1];
static Direction direction_furniturewall2_536_0_0 = {0, 50, 50, 0, 1, images_furniturewall2_536_0_0, 1};
static Animation anim_furniturewall2_536_0 = {&direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, NULL, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0, &direction_furniturewall2_536_0_0};
static Animation * anim_array_furniturewall2_536[1] = {&anim_furniturewall2_536_0};
static Animations anim_furniturewall2_536 = {1, &anim_array_furniturewall2_536[0]};
static bool anim_furniturewall2_536_initialized;
class FurnitureWall2_536 : public Active
{
public:
    FurnitureWall2_536(int x, int y) : Active(x, y, FurnitureWall2_536_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Wall 2", 16);
#endif
        this->animations = &anim_furniturewall2_536;
        if (!anim_furniturewall2_536_initialized) {
            anim_furniturewall2_536_initialized = true;
            images_furniturewall2_536_0_0[0] = get_internal_image(10112);
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
FrameObject * create_furniturewall2_536(int x, int y)
{
    return new (Active::pool.create()) FurnitureWall2_536(x, y);
}
static Image* images_furniturefloor_537_0_0[1];
static Direction direction_furniturefloor_537_0_0 = {0, 50, 50, 0, 1, images_furniturefloor_537_0_0, 1};
static Animation anim_furniturefloor_537_0 = {&direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, NULL, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0, &direction_furniturefloor_537_0_0};
static Animation * anim_array_furniturefloor_537[1] = {&anim_furniturefloor_537_0};
static Animations anim_furniturefloor_537 = {1, &anim_array_furniturefloor_537[0]};
static bool anim_furniturefloor_537_initialized;
class FurnitureFloor_537 : public Active
{
public:
    FurnitureFloor_537(int x, int y) : Active(x, y, FurnitureFloor_537_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor", 15);
#endif
        this->animations = &anim_furniturefloor_537;
        if (!anim_furniturefloor_537_initialized) {
            anim_furniturefloor_537_initialized = true;
            images_furniturefloor_537_0_0[0] = get_internal_image(10115);
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
FrameObject * create_furniturefloor_537(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor_537(x, y);
}
static Image* images_furniturefloor3_538_0_0[1];
static Direction direction_furniturefloor3_538_0_0 = {0, 0, 0, 0, 1, images_furniturefloor3_538_0_0, 1};
static Animation anim_furniturefloor3_538_0 = {&direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, NULL, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0, &direction_furniturefloor3_538_0_0};
static Animation * anim_array_furniturefloor3_538[1] = {&anim_furniturefloor3_538_0};
static Animations anim_furniturefloor3_538 = {1, &anim_array_furniturefloor3_538[0]};
static bool anim_furniturefloor3_538_initialized;
class FurnitureFloor3_538 : public Active
{
public:
    FurnitureFloor3_538(int x, int y) : Active(x, y, FurnitureFloor3_538_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 3", 17);
#endif
        this->animations = &anim_furniturefloor3_538;
        if (!anim_furniturefloor3_538_initialized) {
            anim_furniturefloor3_538_initialized = true;
            images_furniturefloor3_538_0_0[0] = get_internal_image(10111);
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
FrameObject * create_furniturefloor3_538(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor3_538(x, y);
}
static Image* images_furniturefloor2_539_0_0[1];
static Direction direction_furniturefloor2_539_0_0 = {0, 0, 0, 0, 1, images_furniturefloor2_539_0_0, 1};
static Image* images_furniturefloor2_539_0_8[1];
static Direction direction_furniturefloor2_539_0_8 = {8, 50, 50, 0, 1, images_furniturefloor2_539_0_8, 1};
static Animation anim_furniturefloor2_539_0 = {&direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, NULL, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, &direction_furniturefloor2_539_0_8, NULL, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0, &direction_furniturefloor2_539_0_0};
static Animation * anim_array_furniturefloor2_539[1] = {&anim_furniturefloor2_539_0};
static Animations anim_furniturefloor2_539 = {1, &anim_array_furniturefloor2_539[0]};
static bool anim_furniturefloor2_539_initialized;
class FurnitureFloor2_539 : public Active
{
public:
    FurnitureFloor2_539(int x, int y) : Active(x, y, FurnitureFloor2_539_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 2", 17);
#endif
        this->animations = &anim_furniturefloor2_539;
        if (!anim_furniturefloor2_539_initialized) {
            anim_furniturefloor2_539_initialized = true;
            images_furniturefloor2_539_0_0[0] = get_internal_image(10113);
            images_furniturefloor2_539_0_8[0] = get_internal_image(3000);
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
FrameObject * create_furniturefloor2_539(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor2_539(x, y);
}
static Image* images_furniturefloor4_540_0_0[1];
static Direction direction_furniturefloor4_540_0_0 = {0, 0, 0, 0, 1, images_furniturefloor4_540_0_0, 1};
static Image* images_furniturefloor4_540_0_1[8];
static Direction direction_furniturefloor4_540_0_1 = {1, 30, 30, 0, 1, images_furniturefloor4_540_0_1, 8};
static Animation anim_furniturefloor4_540_0 = {&direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_1, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0, &direction_furniturefloor4_540_0_0};
static Animation * anim_array_furniturefloor4_540[1] = {&anim_furniturefloor4_540_0};
static Animations anim_furniturefloor4_540 = {1, &anim_array_furniturefloor4_540[0]};
static bool anim_furniturefloor4_540_initialized;
class FurnitureFloor4_540 : public Active
{
public:
    FurnitureFloor4_540(int x, int y) : Active(x, y, FurnitureFloor4_540_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 4", 17);
#endif
        this->animations = &anim_furniturefloor4_540;
        if (!anim_furniturefloor4_540_initialized) {
            anim_furniturefloor4_540_initialized = true;
            images_furniturefloor4_540_0_0[0] = get_internal_image(10114);
            images_furniturefloor4_540_0_1[0] = get_internal_image(10114);
            images_furniturefloor4_540_0_1[1] = get_internal_image(14553);
            images_furniturefloor4_540_0_1[2] = get_internal_image(14551);
            images_furniturefloor4_540_0_1[3] = get_internal_image(14549);
            images_furniturefloor4_540_0_1[4] = get_internal_image(14548);
            images_furniturefloor4_540_0_1[5] = get_internal_image(14546);
            images_furniturefloor4_540_0_1[6] = get_internal_image(14547);
            images_furniturefloor4_540_0_1[7] = get_internal_image(5677);
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
FrameObject * create_furniturefloor4_540(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor4_540(x, y);
}
static Image* images_furniturephone_541_0_0[1];
static Direction direction_furniturephone_541_0_0 = {0, 0, 0, 0, 1, images_furniturephone_541_0_0, 1};
static Image* images_furniturephone_541_0_1[5];
static Direction direction_furniturephone_541_0_1 = {1, 50, 50, 0, -1, images_furniturephone_541_0_1, 5};
static Image* images_furniturephone_541_0_2[1];
static Direction direction_furniturephone_541_0_2 = {2, 50, 50, 0, 1, images_furniturephone_541_0_2, 1};
static Animation anim_furniturephone_541_0 = {&direction_furniturephone_541_0_0, &direction_furniturephone_541_0_1, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, &direction_furniturephone_541_0_2, NULL, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0, &direction_furniturephone_541_0_0};
static Animation * anim_array_furniturephone_541[1] = {&anim_furniturephone_541_0};
static Animations anim_furniturephone_541 = {1, &anim_array_furniturephone_541[0]};
static bool anim_furniturephone_541_initialized;
class FurniturePhone_541 : public Active
{
public:
    FurniturePhone_541(int x, int y) : Active(x, y, FurniturePhone_541_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Phone", 15);
#endif
        this->animations = &anim_furniturephone_541;
        if (!anim_furniturephone_541_initialized) {
            anim_furniturephone_541_initialized = true;
            images_furniturephone_541_0_0[0] = get_internal_image(10623);
            images_furniturephone_541_0_1[0] = get_internal_image(10623);
            images_furniturephone_541_0_1[1] = get_internal_image(13645);
            images_furniturephone_541_0_1[2] = get_internal_image(14507);
            images_furniturephone_541_0_1[3] = get_internal_image(10621);
            images_furniturephone_541_0_1[4] = get_internal_image(14541);
            images_furniturephone_541_0_2[0] = get_internal_image(14506);
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
FrameObject * create_furniturephone_541(int x, int y)
{
    return new (Active::pool.create()) FurniturePhone_541(x, y);
}
static Image* images_objectcouchspot_542_0_0[1];
static Direction direction_objectcouchspot_542_0_0 = {0, 50, 50, 0, 1, images_objectcouchspot_542_0_0, 1};
static Animation anim_objectcouchspot_542_0 = {&direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, NULL, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0, &direction_objectcouchspot_542_0_0};
static Animation * anim_array_objectcouchspot_542[1] = {&anim_objectcouchspot_542_0};
static Animations anim_objectcouchspot_542 = {1, &anim_array_objectcouchspot_542[0]};
static bool anim_objectcouchspot_542_initialized;
class ObjectCouchSpot_542 : public Active
{
public:
    ObjectCouchSpot_542(int x, int y) : Active(x, y, ObjectCouchSpot_542_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Object_CouchSpot", 16);
#endif
        set_visible(false);
        this->animations = &anim_objectcouchspot_542;
        if (!anim_objectcouchspot_542_initialized) {
            anim_objectcouchspot_542_initialized = true;
            images_objectcouchspot_542_0_0[0] = get_internal_image(3001);
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
FrameObject * create_objectcouchspot_542(int x, int y)
{
    return new (Active::pool.create()) ObjectCouchSpot_542(x, y);
}
static Image* images_furniturefloor8_543_0_0[1];
static Direction direction_furniturefloor8_543_0_0 = {0, 0, 0, 0, 1, images_furniturefloor8_543_0_0, 1};
static Animation anim_furniturefloor8_543_0 = {&direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, NULL, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0, &direction_furniturefloor8_543_0_0};
static Animation * anim_array_furniturefloor8_543[1] = {&anim_furniturefloor8_543_0};
static Animations anim_furniturefloor8_543 = {1, &anim_array_furniturefloor8_543[0]};
static bool anim_furniturefloor8_543_initialized;
class FurnitureFloor8_543 : public Active
{
public:
    FurnitureFloor8_543(int x, int y) : Active(x, y, FurnitureFloor8_543_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 8", 17);
#endif
        this->animations = &anim_furniturefloor8_543;
        if (!anim_furniturefloor8_543_initialized) {
            anim_furniturefloor8_543_initialized = true;
            images_furniturefloor8_543_0_0[0] = get_internal_image(14069);
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
FrameObject * create_furniturefloor8_543(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor8_543(x, y);
}
static Image* images_furniturefloor5_544_0_0[1];
static Direction direction_furniturefloor5_544_0_0 = {0, 0, 0, 0, 1, images_furniturefloor5_544_0_0, 1};
static Animation anim_furniturefloor5_544_0 = {&direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, NULL, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0, &direction_furniturefloor5_544_0_0};
static Animation * anim_array_furniturefloor5_544[1] = {&anim_furniturefloor5_544_0};
static Animations anim_furniturefloor5_544 = {1, &anim_array_furniturefloor5_544[0]};
static bool anim_furniturefloor5_544_initialized;
class FurnitureFloor5_544 : public Active
{
public:
    FurnitureFloor5_544(int x, int y) : Active(x, y, FurnitureFloor5_544_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 5", 17);
#endif
        this->animations = &anim_furniturefloor5_544;
        if (!anim_furniturefloor5_544_initialized) {
            anim_furniturefloor5_544_initialized = true;
            images_furniturefloor5_544_0_0[0] = get_internal_image(14488);
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
FrameObject * create_furniturefloor5_544(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor5_544(x, y);
}
static Image* images_npccouchlilac_545_0_0[9];
static Direction direction_npccouchlilac_545_0_0 = {0, 14, 14, 0, -1, images_npccouchlilac_545_0_0, 9};
static Image* images_npccouchlilac_545_0_1[6];
static Direction direction_npccouchlilac_545_0_1 = {1, 14, 14, 0, -1, images_npccouchlilac_545_0_1, 6};
static Image* images_npccouchlilac_545_0_2[6];
static Direction direction_npccouchlilac_545_0_2 = {2, 14, 14, 0, -1, images_npccouchlilac_545_0_2, 6};
static Image* images_npccouchlilac_545_0_3[6];
static Direction direction_npccouchlilac_545_0_3 = {3, 14, 14, 0, -1, images_npccouchlilac_545_0_3, 6};
static Image* images_npccouchlilac_545_0_8[13];
static Direction direction_npccouchlilac_545_0_8 = {8, 50, 50, 0, 1, images_npccouchlilac_545_0_8, 13};
static Animation anim_npccouchlilac_545_0 = {&direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_1, &direction_npccouchlilac_545_0_2, &direction_npccouchlilac_545_0_3, &direction_npccouchlilac_545_0_3, &direction_npccouchlilac_545_0_3, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, &direction_npccouchlilac_545_0_8, NULL, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0, &direction_npccouchlilac_545_0_0};
static Image* images_npccouchlilac_545_5_0[2];
static Direction direction_npccouchlilac_545_5_0 = {0, 12, 12, 0, -1, images_npccouchlilac_545_5_0, 2};
static Image* images_npccouchlilac_545_5_1[1];
static Direction direction_npccouchlilac_545_5_1 = {1, 50, 50, 0, 1, images_npccouchlilac_545_5_1, 1};
static Animation anim_npccouchlilac_545_5 = {&direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_1, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0, &direction_npccouchlilac_545_5_0};
static Image* images_npccouchlilac_545_7_0[12];
static Direction direction_npccouchlilac_545_7_0 = {0, 0, 0, 0, -1, images_npccouchlilac_545_7_0, 12};
static Image* images_npccouchlilac_545_7_1[3];
static Direction direction_npccouchlilac_545_7_1 = {1, 8, 8, 2, -1, images_npccouchlilac_545_7_1, 3};
static Image* images_npccouchlilac_545_7_2[9];
static Direction direction_npccouchlilac_545_7_2 = {2, 16, 16, 8, -1, images_npccouchlilac_545_7_2, 9};
static Image* images_npccouchlilac_545_7_3[5];
static Direction direction_npccouchlilac_545_7_3 = {3, 13, 13, 4, -1, images_npccouchlilac_545_7_3, 5};
static Image* images_npccouchlilac_545_7_4[4];
static Direction direction_npccouchlilac_545_7_4 = {4, 11, 11, 3, -1, images_npccouchlilac_545_7_4, 4};
static Image* images_npccouchlilac_545_7_5[4];
static Direction direction_npccouchlilac_545_7_5 = {5, 0, 0, 0, 1, images_npccouchlilac_545_7_5, 4};
static Animation anim_npccouchlilac_545_7 = {&direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_1, &direction_npccouchlilac_545_7_2, &direction_npccouchlilac_545_7_3, &direction_npccouchlilac_545_7_4, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_5, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0, &direction_npccouchlilac_545_7_0};
static Image* images_npccouchlilac_545_8_0[1];
static Direction direction_npccouchlilac_545_8_0 = {0, 50, 50, 0, -1, images_npccouchlilac_545_8_0, 1};
static Animation anim_npccouchlilac_545_8 = {&direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, NULL, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0, &direction_npccouchlilac_545_8_0};
static Animation * anim_array_npccouchlilac_545[9] = {&anim_npccouchlilac_545_0, NULL, NULL, NULL, NULL, &anim_npccouchlilac_545_5, NULL, &anim_npccouchlilac_545_7, &anim_npccouchlilac_545_8};
static Animations anim_npccouchlilac_545 = {9, &anim_array_npccouchlilac_545[0]};
static bool anim_npccouchlilac_545_initialized;
class NPCCouchLilac_545 : public Active
{
public:
    NPCCouchLilac_545(int x, int y) : Active(x, y, NPCCouchLilac_545_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_CouchLilac", 14);
#endif
        set_visible(false);
        this->animations = &anim_npccouchlilac_545;
        if (!anim_npccouchlilac_545_initialized) {
            anim_npccouchlilac_545_initialized = true;
            images_npccouchlilac_545_0_0[0] = get_internal_image(12424);
            images_npccouchlilac_545_0_0[1] = get_internal_image(12031);
            images_npccouchlilac_545_0_0[2] = get_internal_image(12418);
            images_npccouchlilac_545_0_0[3] = get_internal_image(12421);
            images_npccouchlilac_545_0_0[4] = get_internal_image(12422);
            images_npccouchlilac_545_0_0[5] = get_internal_image(12418);
            images_npccouchlilac_545_0_0[6] = get_internal_image(12424);
            images_npccouchlilac_545_0_0[7] = get_internal_image(12031);
            images_npccouchlilac_545_0_0[8] = get_internal_image(12418);
            images_npccouchlilac_545_0_1[0] = get_internal_image(12427);
            images_npccouchlilac_545_0_1[1] = get_internal_image(13343);
            images_npccouchlilac_545_0_1[2] = get_internal_image(13344);
            images_npccouchlilac_545_0_1[3] = get_internal_image(13345);
            images_npccouchlilac_545_0_1[4] = get_internal_image(13346);
            images_npccouchlilac_545_0_1[5] = get_internal_image(13344);
            images_npccouchlilac_545_0_2[0] = get_internal_image(12032);
            images_npccouchlilac_545_0_2[1] = get_internal_image(5604);
            images_npccouchlilac_545_0_2[2] = get_internal_image(9869);
            images_npccouchlilac_545_0_2[3] = get_internal_image(12018);
            images_npccouchlilac_545_0_2[4] = get_internal_image(12417);
            images_npccouchlilac_545_0_2[5] = get_internal_image(9869);
            images_npccouchlilac_545_0_3[0] = get_internal_image(12033);
            images_npccouchlilac_545_0_3[1] = get_internal_image(5611);
            images_npccouchlilac_545_0_3[2] = get_internal_image(10595);
            images_npccouchlilac_545_0_3[3] = get_internal_image(12019);
            images_npccouchlilac_545_0_3[4] = get_internal_image(12033);
            images_npccouchlilac_545_0_3[5] = get_internal_image(10595);
            images_npccouchlilac_545_0_8[0] = get_internal_image(12022);
            images_npccouchlilac_545_0_8[1] = get_internal_image(12026);
            images_npccouchlilac_545_0_8[2] = get_internal_image(12029);
            images_npccouchlilac_545_0_8[3] = get_internal_image(12026);
            images_npccouchlilac_545_0_8[4] = get_internal_image(12022);
            images_npccouchlilac_545_0_8[5] = get_internal_image(12030);
            images_npccouchlilac_545_0_8[6] = get_internal_image(11924);
            images_npccouchlilac_545_0_8[7] = get_internal_image(12020);
            images_npccouchlilac_545_0_8[8] = get_internal_image(12021);
            images_npccouchlilac_545_0_8[9] = get_internal_image(12020);
            images_npccouchlilac_545_0_8[10] = get_internal_image(11924);
            images_npccouchlilac_545_0_8[11] = get_internal_image(12024);
            images_npccouchlilac_545_0_8[12] = get_internal_image(13381);
            images_npccouchlilac_545_5_0[0] = get_internal_image(13340);
            images_npccouchlilac_545_5_0[1] = get_internal_image(5086);
            images_npccouchlilac_545_5_1[0] = get_internal_image(13341);
            images_npccouchlilac_545_7_0[0] = get_internal_image(13455);
            images_npccouchlilac_545_7_0[1] = get_internal_image(13456);
            images_npccouchlilac_545_7_0[2] = get_internal_image(13457);
            images_npccouchlilac_545_7_0[3] = get_internal_image(13458);
            images_npccouchlilac_545_7_0[4] = get_internal_image(13459);
            images_npccouchlilac_545_7_0[5] = get_internal_image(13460);
            images_npccouchlilac_545_7_0[6] = get_internal_image(13461);
            images_npccouchlilac_545_7_0[7] = get_internal_image(13462);
            images_npccouchlilac_545_7_0[8] = get_internal_image(13463);
            images_npccouchlilac_545_7_0[9] = get_internal_image(13464);
            images_npccouchlilac_545_7_0[10] = get_internal_image(13465);
            images_npccouchlilac_545_7_0[11] = get_internal_image(13466);
            images_npccouchlilac_545_7_1[0] = get_internal_image(13455);
            images_npccouchlilac_545_7_1[1] = get_internal_image(13467);
            images_npccouchlilac_545_7_1[2] = get_internal_image(13458);
            images_npccouchlilac_545_7_2[0] = get_internal_image(13461);
            images_npccouchlilac_545_7_2[1] = get_internal_image(13468);
            images_npccouchlilac_545_7_2[2] = get_internal_image(13469);
            images_npccouchlilac_545_7_2[3] = get_internal_image(13470);
            images_npccouchlilac_545_7_2[4] = get_internal_image(13470);
            images_npccouchlilac_545_7_2[5] = get_internal_image(13470);
            images_npccouchlilac_545_7_2[6] = get_internal_image(13469);
            images_npccouchlilac_545_7_2[7] = get_internal_image(13468);
            images_npccouchlilac_545_7_2[8] = get_internal_image(13461);
            images_npccouchlilac_545_7_3[0] = get_internal_image(13471);
            images_npccouchlilac_545_7_3[1] = get_internal_image(13472);
            images_npccouchlilac_545_7_3[2] = get_internal_image(13473);
            images_npccouchlilac_545_7_3[3] = get_internal_image(13472);
            images_npccouchlilac_545_7_3[4] = get_internal_image(13471);
            images_npccouchlilac_545_7_4[0] = get_internal_image(13474);
            images_npccouchlilac_545_7_4[1] = get_internal_image(13475);
            images_npccouchlilac_545_7_4[2] = get_internal_image(13476);
            images_npccouchlilac_545_7_4[3] = get_internal_image(13477);
            images_npccouchlilac_545_7_5[0] = get_internal_image(9304);
            images_npccouchlilac_545_7_5[1] = get_internal_image(9305);
            images_npccouchlilac_545_7_5[2] = get_internal_image(9306);
            images_npccouchlilac_545_7_5[3] = get_internal_image(2323);
            images_npccouchlilac_545_8_0[0] = get_internal_image(14544);
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
FrameObject * create_npccouchlilac_545(int x, int y)
{
    return new (Active::pool.create()) NPCCouchLilac_545(x, y);
}
class Trunk5_546 : public Backdrop
{
public:
    Trunk5_546(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Trunk 5", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4103);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_trunk5_546(int x, int y)
{
    return new (Backdrop::pool.create()) Trunk5_546(x, y);
}
class Trunk9_547 : public Backdrop
{
public:
    Trunk9_547(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Trunk 9", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3715);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_trunk9_547(int x, int y)
{
    return new (Backdrop::pool.create()) Trunk9_547(x, y);
}
class Trunk7_548 : public Backdrop
{
public:
    Trunk7_548(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Trunk 7", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4104);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_trunk7_548(int x, int y)
{
    return new (Backdrop::pool.create()) Trunk7_548(x, y);
}
class HouseWallrightFront_549 : public Backdrop
{
public:
    HouseWallrightFront_549(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Wallright front", 21);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14422);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_housewallrightfront_549(int x, int y)
{
    return new (Backdrop::pool.create()) HouseWallrightFront_549(x, y);
}
static Image* images_furniturefloor6_550_0_0[1];
static Direction direction_furniturefloor6_550_0_0 = {0, 0, 0, 0, 1, images_furniturefloor6_550_0_0, 1};
static Image* images_furniturefloor6_550_0_1[2];
static Direction direction_furniturefloor6_550_0_1 = {1, 14, 14, 0, -1, images_furniturefloor6_550_0_1, 2};
static Animation anim_furniturefloor6_550_0 = {&direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_1, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0, &direction_furniturefloor6_550_0_0};
static Animation * anim_array_furniturefloor6_550[1] = {&anim_furniturefloor6_550_0};
static Animations anim_furniturefloor6_550 = {1, &anim_array_furniturefloor6_550[0]};
static bool anim_furniturefloor6_550_initialized;
class FurnitureFloor6_550 : public Active
{
public:
    FurnitureFloor6_550(int x, int y) : Active(x, y, FurnitureFloor6_550_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 6", 17);
#endif
        this->animations = &anim_furniturefloor6_550;
        if (!anim_furniturefloor6_550_initialized) {
            anim_furniturefloor6_550_initialized = true;
            images_furniturefloor6_550_0_0[0] = get_internal_image(10158);
            images_furniturefloor6_550_0_1[0] = get_internal_image(14431);
            images_furniturefloor6_550_0_1[1] = get_internal_image(14429);
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
FrameObject * create_furniturefloor6_550(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor6_550(x, y);
}
static Image* images_objecttententrance_551_0_0[1];
static Direction direction_objecttententrance_551_0_0 = {0, 50, 50, 0, 1, images_objecttententrance_551_0_0, 1};
static Animation anim_objecttententrance_551_0 = {&direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, NULL, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0, &direction_objecttententrance_551_0_0};
static Animation * anim_array_objecttententrance_551[1] = {&anim_objecttententrance_551_0};
static Animations anim_objecttententrance_551 = {1, &anim_array_objecttententrance_551[0]};
static bool anim_objecttententrance_551_initialized;
class ObjectTentEntrance_551 : public Active
{
public:
    ObjectTentEntrance_551(int x, int y) : Active(x, y, ObjectTentEntrance_551_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TentEntrance", 19);
#endif
        set_visible(false);
        this->animations = &anim_objecttententrance_551;
        if (!anim_objecttententrance_551_initialized) {
            anim_objecttententrance_551_initialized = true;
            images_objecttententrance_551_0_0[0] = get_internal_image(14512);
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
FrameObject * create_objecttententrance_551(int x, int y)
{
    return new (Active::pool.create()) ObjectTentEntrance_551(x, y);
}
static Image* images_furniturefloor10_552_0_0[1];
static Direction direction_furniturefloor10_552_0_0 = {0, 0, 0, 0, 1, images_furniturefloor10_552_0_0, 1};
static Animation anim_furniturefloor10_552_0 = {&direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, NULL, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0, &direction_furniturefloor10_552_0_0};
static Animation * anim_array_furniturefloor10_552[1] = {&anim_furniturefloor10_552_0};
static Animations anim_furniturefloor10_552 = {1, &anim_array_furniturefloor10_552[0]};
static bool anim_furniturefloor10_552_initialized;
class FurnitureFloor10_552 : public Active
{
public:
    FurnitureFloor10_552(int x, int y) : Active(x, y, FurnitureFloor10_552_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 10", 18);
#endif
        this->animations = &anim_furniturefloor10_552;
        if (!anim_furniturefloor10_552_initialized) {
            anim_furniturefloor10_552_initialized = true;
            images_furniturefloor10_552_0_0[0] = get_internal_image(14406);
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
FrameObject * create_furniturefloor10_552(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor10_552(x, y);
}
static Image* images_furniturefloor7_553_0_0[1];
static Direction direction_furniturefloor7_553_0_0 = {0, 0, 0, 0, 1, images_furniturefloor7_553_0_0, 1};
static Animation anim_furniturefloor7_553_0 = {&direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, NULL, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0, &direction_furniturefloor7_553_0_0};
static Animation * anim_array_furniturefloor7_553[1] = {&anim_furniturefloor7_553_0};
static Animations anim_furniturefloor7_553 = {1, &anim_array_furniturefloor7_553[0]};
static bool anim_furniturefloor7_553_initialized;
class FurnitureFloor7_553 : public Active
{
public:
    FurnitureFloor7_553(int x, int y) : Active(x, y, FurnitureFloor7_553_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Furniture_Floor 7", 17);
#endif
        this->animations = &anim_furniturefloor7_553;
        if (!anim_furniturefloor7_553_initialized) {
            anim_furniturefloor7_553_initialized = true;
            images_furniturefloor7_553_0_0[0] = get_internal_image(13644);
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
FrameObject * create_furniturefloor7_553(int x, int y)
{
    return new (Active::pool.create()) FurnitureFloor7_553(x, y);
}
static Image* images_npccouchmilla_554_0_0[6];
static Direction direction_npccouchmilla_554_0_0 = {0, 4, 4, 0, -1, images_npccouchmilla_554_0_0, 6};
static Image* images_npccouchmilla_554_0_1[1];
static Direction direction_npccouchmilla_554_0_1 = {1, 50, 50, 0, 1, images_npccouchmilla_554_0_1, 1};
static Animation anim_npccouchmilla_554_0 = {&direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_1, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0, &direction_npccouchmilla_554_0_0};
static Animation * anim_array_npccouchmilla_554[1] = {&anim_npccouchmilla_554_0};
static Animations anim_npccouchmilla_554 = {1, &anim_array_npccouchmilla_554[0]};
static bool anim_npccouchmilla_554_initialized;
class NPCCouchMilla_554 : public Active
{
public:
    NPCCouchMilla_554(int x, int y) : Active(x, y, NPCCouchMilla_554_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_CouchMilla", 14);
#endif
        this->animations = &anim_npccouchmilla_554;
        if (!anim_npccouchmilla_554_initialized) {
            anim_npccouchmilla_554_initialized = true;
            images_npccouchmilla_554_0_0[0] = get_internal_image(13351);
            images_npccouchmilla_554_0_0[1] = get_internal_image(13351);
            images_npccouchmilla_554_0_0[2] = get_internal_image(13378);
            images_npccouchmilla_554_0_0[3] = get_internal_image(13379);
            images_npccouchmilla_554_0_0[4] = get_internal_image(13379);
            images_npccouchmilla_554_0_0[5] = get_internal_image(13378);
            images_npccouchmilla_554_0_1[0] = get_internal_image(14577);
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
FrameObject * create_npccouchmilla_554(int x, int y)
{
    return new (Active::pool.create()) NPCCouchMilla_554(x, y);
}
static Image* images_npccouchcarol_555_0_0[9];
static Direction direction_npccouchcarol_555_0_0 = {0, 0, 0, 0, -1, images_npccouchcarol_555_0_0, 9};
static Image* images_npccouchcarol_555_0_1[5];
static Direction direction_npccouchcarol_555_0_1 = {1, 30, 30, 0, -1, images_npccouchcarol_555_0_1, 5};
static Image* images_npccouchcarol_555_0_8[2];
static Direction direction_npccouchcarol_555_0_8 = {8, 50, 50, 0, 1, images_npccouchcarol_555_0_8, 2};
static Animation anim_npccouchcarol_555_0 = {&direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_1, &direction_npccouchcarol_555_0_1, &direction_npccouchcarol_555_0_1, &direction_npccouchcarol_555_0_1, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, &direction_npccouchcarol_555_0_8, NULL, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0, &direction_npccouchcarol_555_0_0};
static Image* images_npccouchcarol_555_5_0[2];
static Direction direction_npccouchcarol_555_5_0 = {0, 12, 12, 0, -1, images_npccouchcarol_555_5_0, 2};
static Animation anim_npccouchcarol_555_5 = {&direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, NULL, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0, &direction_npccouchcarol_555_5_0};
static Image* images_npccouchcarol_555_7_0[9];
static Direction direction_npccouchcarol_555_7_0 = {0, 16, 16, 0, 1, images_npccouchcarol_555_7_0, 9};
static Animation anim_npccouchcarol_555_7 = {&direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, NULL, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0, &direction_npccouchcarol_555_7_0};
static Image* images_npccouchcarol_555_8_0[8];
static Direction direction_npccouchcarol_555_8_0 = {0, 9, 9, 0, -1, images_npccouchcarol_555_8_0, 8};
static Animation anim_npccouchcarol_555_8 = {&direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, NULL, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0, &direction_npccouchcarol_555_8_0};
static Image* images_npccouchcarol_555_9_0[3];
static Direction direction_npccouchcarol_555_9_0 = {0, 5, 5, 2, -1, images_npccouchcarol_555_9_0, 3};
static Animation anim_npccouchcarol_555_9 = {&direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, NULL, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0, &direction_npccouchcarol_555_9_0};
static Image* images_npccouchcarol_555_10_0[8];
static Direction direction_npccouchcarol_555_10_0 = {0, 50, 50, 0, -1, images_npccouchcarol_555_10_0, 8};
static Animation anim_npccouchcarol_555_10 = {&direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, NULL, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0, &direction_npccouchcarol_555_10_0};
static Animation * anim_array_npccouchcarol_555[11] = {&anim_npccouchcarol_555_0, NULL, NULL, NULL, NULL, &anim_npccouchcarol_555_5, NULL, &anim_npccouchcarol_555_7, &anim_npccouchcarol_555_8, &anim_npccouchcarol_555_9, &anim_npccouchcarol_555_10};
static Animations anim_npccouchcarol_555 = {11, &anim_array_npccouchcarol_555[0]};
static bool anim_npccouchcarol_555_initialized;
class NPCCouchCarol_555 : public Active
{
public:
    NPCCouchCarol_555(int x, int y) : Active(x, y, NPCCouchCarol_555_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_CouchCarol", 14);
#endif
        set_visible(false);
        this->animations = &anim_npccouchcarol_555;
        if (!anim_npccouchcarol_555_initialized) {
            anim_npccouchcarol_555_initialized = true;
            images_npccouchcarol_555_0_0[0] = get_internal_image(5114);
            images_npccouchcarol_555_0_0[1] = get_internal_image(13256);
            images_npccouchcarol_555_0_0[2] = get_internal_image(13271);
            images_npccouchcarol_555_0_0[3] = get_internal_image(11683);
            images_npccouchcarol_555_0_0[4] = get_internal_image(13275);
            images_npccouchcarol_555_0_0[5] = get_internal_image(13277);
            images_npccouchcarol_555_0_0[6] = get_internal_image(13274);
            images_npccouchcarol_555_0_0[7] = get_internal_image(13283);
            images_npccouchcarol_555_0_0[8] = get_internal_image(13289);
            images_npccouchcarol_555_0_1[0] = get_internal_image(11683);
            images_npccouchcarol_555_0_1[1] = get_internal_image(11638);
            images_npccouchcarol_555_0_1[2] = get_internal_image(11681);
            images_npccouchcarol_555_0_1[3] = get_internal_image(6270);
            images_npccouchcarol_555_0_1[4] = get_internal_image(11682);
            images_npccouchcarol_555_0_8[0] = get_internal_image(5114);
            images_npccouchcarol_555_0_8[1] = get_internal_image(4161);
            images_npccouchcarol_555_5_0[0] = get_internal_image(13323);
            images_npccouchcarol_555_5_0[1] = get_internal_image(13284);
            images_npccouchcarol_555_7_0[0] = get_internal_image(5114);
            images_npccouchcarol_555_7_0[1] = get_internal_image(11915);
            images_npccouchcarol_555_7_0[2] = get_internal_image(11657);
            images_npccouchcarol_555_7_0[3] = get_internal_image(11910);
            images_npccouchcarol_555_7_0[4] = get_internal_image(13254);
            images_npccouchcarol_555_7_0[5] = get_internal_image(13255);
            images_npccouchcarol_555_7_0[6] = get_internal_image(13257);
            images_npccouchcarol_555_7_0[7] = get_internal_image(13258);
            images_npccouchcarol_555_7_0[8] = get_internal_image(13259);
            images_npccouchcarol_555_8_0[0] = get_internal_image(14566);
            images_npccouchcarol_555_8_0[1] = get_internal_image(14566);
            images_npccouchcarol_555_8_0[2] = get_internal_image(14570);
            images_npccouchcarol_555_8_0[3] = get_internal_image(14568);
            images_npccouchcarol_555_8_0[4] = get_internal_image(14567);
            images_npccouchcarol_555_8_0[5] = get_internal_image(14567);
            images_npccouchcarol_555_8_0[6] = get_internal_image(14568);
            images_npccouchcarol_555_8_0[7] = get_internal_image(14570);
            images_npccouchcarol_555_9_0[0] = get_internal_image(14562);
            images_npccouchcarol_555_9_0[1] = get_internal_image(14564);
            images_npccouchcarol_555_9_0[2] = get_internal_image(14565);
            images_npccouchcarol_555_10_0[0] = get_internal_image(14582);
            images_npccouchcarol_555_10_0[1] = get_internal_image(14583);
            images_npccouchcarol_555_10_0[2] = get_internal_image(14563);
            images_npccouchcarol_555_10_0[3] = get_internal_image(14578);
            images_npccouchcarol_555_10_0[4] = get_internal_image(14580);
            images_npccouchcarol_555_10_0[5] = get_internal_image(14579);
            images_npccouchcarol_555_10_0[6] = get_internal_image(14584);
            images_npccouchcarol_555_10_0[7] = get_internal_image(14581);
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
FrameObject * create_npccouchcarol_555(int x, int y)
{
    return new (Active::pool.create()) NPCCouchCarol_555(x, y);
}
class SeparatorSpikes_556 : public Backdrop
{
public:
    SeparatorSpikes_556(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Separator_Spikes", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(625);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_separatorspikes_556(int x, int y)
{
    return new (Backdrop::pool.create()) SeparatorSpikes_556(x, y);
}
static Image* images_playercharactersensor_557_0_0[1];
static Direction direction_playercharactersensor_557_0_0 = {0, 50, 50, 0, 1, images_playercharactersensor_557_0_0, 1};
static Image* images_playercharactersensor_557_0_1[1];
static Direction direction_playercharactersensor_557_0_1 = {1, 50, 50, 0, 1, images_playercharactersensor_557_0_1, 1};
static Image* images_playercharactersensor_557_0_2[1];
static Direction direction_playercharactersensor_557_0_2 = {2, 50, 50, 0, 1, images_playercharactersensor_557_0_2, 1};
static Image* images_playercharactersensor_557_0_3[1];
static Direction direction_playercharactersensor_557_0_3 = {3, 50, 50, 0, 1, images_playercharactersensor_557_0_3, 1};
static Image* images_playercharactersensor_557_0_4[1];
static Direction direction_playercharactersensor_557_0_4 = {4, 50, 50, 0, 1, images_playercharactersensor_557_0_4, 1};
static Image* images_playercharactersensor_557_0_5[1];
static Direction direction_playercharactersensor_557_0_5 = {5, 50, 50, 0, 1, images_playercharactersensor_557_0_5, 1};
static Image* images_playercharactersensor_557_0_6[1];
static Direction direction_playercharactersensor_557_0_6 = {6, 50, 50, 0, 1, images_playercharactersensor_557_0_6, 1};
static Image* images_playercharactersensor_557_0_7[1];
static Direction direction_playercharactersensor_557_0_7 = {7, 50, 50, 0, 1, images_playercharactersensor_557_0_7, 1};
static Image* images_playercharactersensor_557_0_8[1];
static Direction direction_playercharactersensor_557_0_8 = {8, 50, 50, 0, 1, images_playercharactersensor_557_0_8, 1};
static Image* images_playercharactersensor_557_0_9[1];
static Direction direction_playercharactersensor_557_0_9 = {9, 50, 50, 0, 1, images_playercharactersensor_557_0_9, 1};
static Image* images_playercharactersensor_557_0_10[1];
static Direction direction_playercharactersensor_557_0_10 = {10, 50, 50, 0, 1, images_playercharactersensor_557_0_10, 1};
static Image* images_playercharactersensor_557_0_11[1];
static Direction direction_playercharactersensor_557_0_11 = {11, 50, 50, 0, 1, images_playercharactersensor_557_0_11, 1};
static Image* images_playercharactersensor_557_0_12[1];
static Direction direction_playercharactersensor_557_0_12 = {12, 50, 50, 0, 1, images_playercharactersensor_557_0_12, 1};
static Image* images_playercharactersensor_557_0_13[1];
static Direction direction_playercharactersensor_557_0_13 = {13, 50, 50, 0, 1, images_playercharactersensor_557_0_13, 1};
static Image* images_playercharactersensor_557_0_14[1];
static Direction direction_playercharactersensor_557_0_14 = {14, 50, 50, 0, 1, images_playercharactersensor_557_0_14, 1};
static Image* images_playercharactersensor_557_0_15[1];
static Direction direction_playercharactersensor_557_0_15 = {15, 50, 50, 0, 1, images_playercharactersensor_557_0_15, 1};
static Image* images_playercharactersensor_557_0_16[1];
static Direction direction_playercharactersensor_557_0_16 = {16, 50, 50, 0, 1, images_playercharactersensor_557_0_16, 1};
static Image* images_playercharactersensor_557_0_17[1];
static Direction direction_playercharactersensor_557_0_17 = {17, 50, 50, 0, 1, images_playercharactersensor_557_0_17, 1};
static Image* images_playercharactersensor_557_0_18[1];
static Direction direction_playercharactersensor_557_0_18 = {18, 50, 50, 0, 1, images_playercharactersensor_557_0_18, 1};
static Image* images_playercharactersensor_557_0_19[1];
static Direction direction_playercharactersensor_557_0_19 = {19, 50, 50, 0, 1, images_playercharactersensor_557_0_19, 1};
static Image* images_playercharactersensor_557_0_20[1];
static Direction direction_playercharactersensor_557_0_20 = {20, 50, 50, 0, 1, images_playercharactersensor_557_0_20, 1};
static Image* images_playercharactersensor_557_0_21[1];
static Direction direction_playercharactersensor_557_0_21 = {21, 50, 50, 0, 1, images_playercharactersensor_557_0_21, 1};
static Image* images_playercharactersensor_557_0_22[1];
static Direction direction_playercharactersensor_557_0_22 = {22, 50, 50, 0, 1, images_playercharactersensor_557_0_22, 1};
static Image* images_playercharactersensor_557_0_23[1];
static Direction direction_playercharactersensor_557_0_23 = {23, 50, 50, 0, 1, images_playercharactersensor_557_0_23, 1};
static Image* images_playercharactersensor_557_0_24[1];
static Direction direction_playercharactersensor_557_0_24 = {24, 50, 50, 0, 1, images_playercharactersensor_557_0_24, 1};
static Image* images_playercharactersensor_557_0_25[1];
static Direction direction_playercharactersensor_557_0_25 = {25, 50, 50, 0, 1, images_playercharactersensor_557_0_25, 1};
static Image* images_playercharactersensor_557_0_26[1];
static Direction direction_playercharactersensor_557_0_26 = {26, 50, 50, 0, 1, images_playercharactersensor_557_0_26, 1};
static Image* images_playercharactersensor_557_0_27[1];
static Direction direction_playercharactersensor_557_0_27 = {27, 50, 50, 0, 1, images_playercharactersensor_557_0_27, 1};
static Image* images_playercharactersensor_557_0_28[1];
static Direction direction_playercharactersensor_557_0_28 = {28, 50, 50, 0, 1, images_playercharactersensor_557_0_28, 1};
static Image* images_playercharactersensor_557_0_29[1];
static Direction direction_playercharactersensor_557_0_29 = {29, 50, 50, 0, 1, images_playercharactersensor_557_0_29, 1};
static Image* images_playercharactersensor_557_0_30[1];
static Direction direction_playercharactersensor_557_0_30 = {30, 50, 50, 0, 1, images_playercharactersensor_557_0_30, 1};
static Image* images_playercharactersensor_557_0_31[1];
static Direction direction_playercharactersensor_557_0_31 = {31, 50, 50, 0, 1, images_playercharactersensor_557_0_31, 1};
static Animation anim_playercharactersensor_557_0 = {&direction_playercharactersensor_557_0_0, &direction_playercharactersensor_557_0_1, &direction_playercharactersensor_557_0_2, &direction_playercharactersensor_557_0_3, &direction_playercharactersensor_557_0_4, &direction_playercharactersensor_557_0_5, &direction_playercharactersensor_557_0_6, &direction_playercharactersensor_557_0_7, &direction_playercharactersensor_557_0_8, &direction_playercharactersensor_557_0_9, &direction_playercharactersensor_557_0_10, &direction_playercharactersensor_557_0_11, &direction_playercharactersensor_557_0_12, &direction_playercharactersensor_557_0_13, &direction_playercharactersensor_557_0_14, &direction_playercharactersensor_557_0_15, &direction_playercharactersensor_557_0_16, &direction_playercharactersensor_557_0_17, &direction_playercharactersensor_557_0_18, &direction_playercharactersensor_557_0_19, &direction_playercharactersensor_557_0_20, &direction_playercharactersensor_557_0_21, &direction_playercharactersensor_557_0_22, &direction_playercharactersensor_557_0_23, &direction_playercharactersensor_557_0_24, &direction_playercharactersensor_557_0_25, &direction_playercharactersensor_557_0_26, &direction_playercharactersensor_557_0_27, &direction_playercharactersensor_557_0_28, &direction_playercharactersensor_557_0_29, &direction_playercharactersensor_557_0_30, &direction_playercharactersensor_557_0_31};
static Image* images_playercharactersensor_557_1_0[1];
static Direction direction_playercharactersensor_557_1_0 = {0, 50, 50, 0, 1, images_playercharactersensor_557_1_0, 1};
static Image* images_playercharactersensor_557_1_1[1];
static Direction direction_playercharactersensor_557_1_1 = {1, 50, 50, 0, 1, images_playercharactersensor_557_1_1, 1};
static Image* images_playercharactersensor_557_1_2[1];
static Direction direction_playercharactersensor_557_1_2 = {2, 50, 50, 0, 1, images_playercharactersensor_557_1_2, 1};
static Image* images_playercharactersensor_557_1_3[1];
static Direction direction_playercharactersensor_557_1_3 = {3, 50, 50, 0, 1, images_playercharactersensor_557_1_3, 1};
static Image* images_playercharactersensor_557_1_4[1];
static Direction direction_playercharactersensor_557_1_4 = {4, 50, 50, 0, 1, images_playercharactersensor_557_1_4, 1};
static Image* images_playercharactersensor_557_1_5[1];
static Direction direction_playercharactersensor_557_1_5 = {5, 50, 50, 0, 1, images_playercharactersensor_557_1_5, 1};
static Image* images_playercharactersensor_557_1_6[1];
static Direction direction_playercharactersensor_557_1_6 = {6, 50, 50, 0, 1, images_playercharactersensor_557_1_6, 1};
static Image* images_playercharactersensor_557_1_7[1];
static Direction direction_playercharactersensor_557_1_7 = {7, 50, 50, 0, 1, images_playercharactersensor_557_1_7, 1};
static Image* images_playercharactersensor_557_1_8[1];
static Direction direction_playercharactersensor_557_1_8 = {8, 50, 50, 0, 1, images_playercharactersensor_557_1_8, 1};
static Image* images_playercharactersensor_557_1_9[1];
static Direction direction_playercharactersensor_557_1_9 = {9, 50, 50, 0, 1, images_playercharactersensor_557_1_9, 1};
static Image* images_playercharactersensor_557_1_10[1];
static Direction direction_playercharactersensor_557_1_10 = {10, 50, 50, 0, 1, images_playercharactersensor_557_1_10, 1};
static Image* images_playercharactersensor_557_1_11[1];
static Direction direction_playercharactersensor_557_1_11 = {11, 50, 50, 0, 1, images_playercharactersensor_557_1_11, 1};
static Image* images_playercharactersensor_557_1_12[1];
static Direction direction_playercharactersensor_557_1_12 = {12, 50, 50, 0, 1, images_playercharactersensor_557_1_12, 1};
static Image* images_playercharactersensor_557_1_13[1];
static Direction direction_playercharactersensor_557_1_13 = {13, 50, 50, 0, 1, images_playercharactersensor_557_1_13, 1};
static Image* images_playercharactersensor_557_1_14[1];
static Direction direction_playercharactersensor_557_1_14 = {14, 50, 50, 0, 1, images_playercharactersensor_557_1_14, 1};
static Image* images_playercharactersensor_557_1_15[1];
static Direction direction_playercharactersensor_557_1_15 = {15, 50, 50, 0, 1, images_playercharactersensor_557_1_15, 1};
static Image* images_playercharactersensor_557_1_16[1];
static Direction direction_playercharactersensor_557_1_16 = {16, 50, 50, 0, 1, images_playercharactersensor_557_1_16, 1};
static Image* images_playercharactersensor_557_1_17[1];
static Direction direction_playercharactersensor_557_1_17 = {17, 50, 50, 0, 1, images_playercharactersensor_557_1_17, 1};
static Image* images_playercharactersensor_557_1_18[1];
static Direction direction_playercharactersensor_557_1_18 = {18, 50, 50, 0, 1, images_playercharactersensor_557_1_18, 1};
static Image* images_playercharactersensor_557_1_19[1];
static Direction direction_playercharactersensor_557_1_19 = {19, 50, 50, 0, 1, images_playercharactersensor_557_1_19, 1};
static Image* images_playercharactersensor_557_1_20[1];
static Direction direction_playercharactersensor_557_1_20 = {20, 50, 50, 0, 1, images_playercharactersensor_557_1_20, 1};
static Image* images_playercharactersensor_557_1_21[1];
static Direction direction_playercharactersensor_557_1_21 = {21, 50, 50, 0, 1, images_playercharactersensor_557_1_21, 1};
static Image* images_playercharactersensor_557_1_22[1];
static Direction direction_playercharactersensor_557_1_22 = {22, 50, 50, 0, 1, images_playercharactersensor_557_1_22, 1};
static Image* images_playercharactersensor_557_1_23[1];
static Direction direction_playercharactersensor_557_1_23 = {23, 50, 50, 0, 1, images_playercharactersensor_557_1_23, 1};
static Image* images_playercharactersensor_557_1_24[1];
static Direction direction_playercharactersensor_557_1_24 = {24, 50, 50, 0, 1, images_playercharactersensor_557_1_24, 1};
static Image* images_playercharactersensor_557_1_25[1];
static Direction direction_playercharactersensor_557_1_25 = {25, 50, 50, 0, 1, images_playercharactersensor_557_1_25, 1};
static Image* images_playercharactersensor_557_1_26[1];
static Direction direction_playercharactersensor_557_1_26 = {26, 50, 50, 0, 1, images_playercharactersensor_557_1_26, 1};
static Image* images_playercharactersensor_557_1_27[1];
static Direction direction_playercharactersensor_557_1_27 = {27, 50, 50, 0, 1, images_playercharactersensor_557_1_27, 1};
static Image* images_playercharactersensor_557_1_28[1];
static Direction direction_playercharactersensor_557_1_28 = {28, 50, 50, 0, 1, images_playercharactersensor_557_1_28, 1};
static Image* images_playercharactersensor_557_1_29[1];
static Direction direction_playercharactersensor_557_1_29 = {29, 50, 50, 0, 1, images_playercharactersensor_557_1_29, 1};
static Image* images_playercharactersensor_557_1_30[1];
static Direction direction_playercharactersensor_557_1_30 = {30, 50, 50, 0, 1, images_playercharactersensor_557_1_30, 1};
static Image* images_playercharactersensor_557_1_31[1];
static Direction direction_playercharactersensor_557_1_31 = {31, 50, 50, 0, 1, images_playercharactersensor_557_1_31, 1};
static Animation anim_playercharactersensor_557_1 = {&direction_playercharactersensor_557_1_0, &direction_playercharactersensor_557_1_1, &direction_playercharactersensor_557_1_2, &direction_playercharactersensor_557_1_3, &direction_playercharactersensor_557_1_4, &direction_playercharactersensor_557_1_5, &direction_playercharactersensor_557_1_6, &direction_playercharactersensor_557_1_7, &direction_playercharactersensor_557_1_8, &direction_playercharactersensor_557_1_9, &direction_playercharactersensor_557_1_10, &direction_playercharactersensor_557_1_11, &direction_playercharactersensor_557_1_12, &direction_playercharactersensor_557_1_13, &direction_playercharactersensor_557_1_14, &direction_playercharactersensor_557_1_15, &direction_playercharactersensor_557_1_16, &direction_playercharactersensor_557_1_17, &direction_playercharactersensor_557_1_18, &direction_playercharactersensor_557_1_19, &direction_playercharactersensor_557_1_20, &direction_playercharactersensor_557_1_21, &direction_playercharactersensor_557_1_22, &direction_playercharactersensor_557_1_23, &direction_playercharactersensor_557_1_24, &direction_playercharactersensor_557_1_25, &direction_playercharactersensor_557_1_26, &direction_playercharactersensor_557_1_27, &direction_playercharactersensor_557_1_28, &direction_playercharactersensor_557_1_29, &direction_playercharactersensor_557_1_30, &direction_playercharactersensor_557_1_31};
static Animation * anim_array_playercharactersensor_557[2] = {&anim_playercharactersensor_557_0, &anim_playercharactersensor_557_1};
static Animations anim_playercharactersensor_557 = {2, &anim_array_playercharactersensor_557[0]};
static bool anim_playercharactersensor_557_initialized;
class PlayerCharacterSensor_557 : public Active
{
public:
    PlayerCharacterSensor_557(int x, int y) : Active(x, y, PlayerCharacterSensor_557_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_CharacterSensor", 22);
#endif
        set_visible(false);
        this->animations = &anim_playercharactersensor_557;
        if (!anim_playercharactersensor_557_initialized) {
            anim_playercharactersensor_557_initialized = true;
            images_playercharactersensor_557_0_0[0] = get_internal_image(8210);
            images_playercharactersensor_557_0_1[0] = get_internal_image(8209);
            images_playercharactersensor_557_0_2[0] = get_internal_image(8211);
            images_playercharactersensor_557_0_3[0] = get_internal_image(8212);
            images_playercharactersensor_557_0_4[0] = get_internal_image(8213);
            images_playercharactersensor_557_0_5[0] = get_internal_image(8214);
            images_playercharactersensor_557_0_6[0] = get_internal_image(8215);
            images_playercharactersensor_557_0_7[0] = get_internal_image(8216);
            images_playercharactersensor_557_0_8[0] = get_internal_image(8217);
            images_playercharactersensor_557_0_9[0] = get_internal_image(8369);
            images_playercharactersensor_557_0_10[0] = get_internal_image(8371);
            images_playercharactersensor_557_0_11[0] = get_internal_image(8373);
            images_playercharactersensor_557_0_12[0] = get_internal_image(8374);
            images_playercharactersensor_557_0_13[0] = get_internal_image(8375);
            images_playercharactersensor_557_0_14[0] = get_internal_image(8380);
            images_playercharactersensor_557_0_15[0] = get_internal_image(8381);
            images_playercharactersensor_557_0_16[0] = get_internal_image(8382);
            images_playercharactersensor_557_0_17[0] = get_internal_image(8383);
            images_playercharactersensor_557_0_18[0] = get_internal_image(8384);
            images_playercharactersensor_557_0_19[0] = get_internal_image(8385);
            images_playercharactersensor_557_0_20[0] = get_internal_image(8386);
            images_playercharactersensor_557_0_21[0] = get_internal_image(8387);
            images_playercharactersensor_557_0_22[0] = get_internal_image(8388);
            images_playercharactersensor_557_0_23[0] = get_internal_image(8389);
            images_playercharactersensor_557_0_24[0] = get_internal_image(8233);
            images_playercharactersensor_557_0_25[0] = get_internal_image(8234);
            images_playercharactersensor_557_0_26[0] = get_internal_image(8235);
            images_playercharactersensor_557_0_27[0] = get_internal_image(8236);
            images_playercharactersensor_557_0_28[0] = get_internal_image(8237);
            images_playercharactersensor_557_0_29[0] = get_internal_image(8238);
            images_playercharactersensor_557_0_30[0] = get_internal_image(8239);
            images_playercharactersensor_557_0_31[0] = get_internal_image(8240);
            images_playercharactersensor_557_1_0[0] = get_internal_image(1498);
            images_playercharactersensor_557_1_1[0] = get_internal_image(716);
            images_playercharactersensor_557_1_2[0] = get_internal_image(1499);
            images_playercharactersensor_557_1_3[0] = get_internal_image(1500);
            images_playercharactersensor_557_1_4[0] = get_internal_image(1623);
            images_playercharactersensor_557_1_5[0] = get_internal_image(1626);
            images_playercharactersensor_557_1_6[0] = get_internal_image(1636);
            images_playercharactersensor_557_1_7[0] = get_internal_image(1652);
            images_playercharactersensor_557_1_8[0] = get_internal_image(1653);
            images_playercharactersensor_557_1_9[0] = get_internal_image(1669);
            images_playercharactersensor_557_1_10[0] = get_internal_image(1670);
            images_playercharactersensor_557_1_11[0] = get_internal_image(1671);
            images_playercharactersensor_557_1_12[0] = get_internal_image(1672);
            images_playercharactersensor_557_1_13[0] = get_internal_image(1673);
            images_playercharactersensor_557_1_14[0] = get_internal_image(1675);
            images_playercharactersensor_557_1_15[0] = get_internal_image(1676);
            images_playercharactersensor_557_1_16[0] = get_internal_image(1677);
            images_playercharactersensor_557_1_17[0] = get_internal_image(716);
            images_playercharactersensor_557_1_18[0] = get_internal_image(1499);
            images_playercharactersensor_557_1_19[0] = get_internal_image(1500);
            images_playercharactersensor_557_1_20[0] = get_internal_image(1623);
            images_playercharactersensor_557_1_21[0] = get_internal_image(1626);
            images_playercharactersensor_557_1_22[0] = get_internal_image(1636);
            images_playercharactersensor_557_1_23[0] = get_internal_image(1652);
            images_playercharactersensor_557_1_24[0] = get_internal_image(1653);
            images_playercharactersensor_557_1_25[0] = get_internal_image(1669);
            images_playercharactersensor_557_1_26[0] = get_internal_image(1670);
            images_playercharactersensor_557_1_27[0] = get_internal_image(1671);
            images_playercharactersensor_557_1_28[0] = get_internal_image(1672);
            images_playercharactersensor_557_1_29[0] = get_internal_image(1673);
            images_playercharactersensor_557_1_30[0] = get_internal_image(1675);
            images_playercharactersensor_557_1_31[0] = get_internal_image(1676);
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
FrameObject * create_playercharactersensor_557(int x, int y)
{
    return new (Active::pool.create()) PlayerCharacterSensor_557(x, y);
}
static Image* images_hazardspikesup_558_0_0[1];
static Direction direction_hazardspikesup_558_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_558_0_0, 1};
static Animation anim_hazardspikesup_558_0 = {&direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, NULL, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0, &direction_hazardspikesup_558_0_0};
static Animation * anim_array_hazardspikesup_558[1] = {&anim_hazardspikesup_558_0};
static Animations anim_hazardspikesup_558 = {1, &anim_array_hazardspikesup_558[0]};
static bool anim_hazardspikesup_558_initialized;
class HazardSpikesUp_558 : public Active
{
public:
    HazardSpikesUp_558(int x, int y) : Active(x, y, HazardSpikesUp_558_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_558;
        if (!anim_hazardspikesup_558_initialized) {
            anim_hazardspikesup_558_initialized = true;
            images_hazardspikesup_558_0_0[0] = get_internal_image(120);
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
FrameObject * create_hazardspikesup_558(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_558(x, y);
}
static Image* images_hazardspikesdown_559_0_0[1];
static Direction direction_hazardspikesdown_559_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_559_0_0, 1};
static Animation anim_hazardspikesdown_559_0 = {&direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, NULL, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0, &direction_hazardspikesdown_559_0_0};
static Animation * anim_array_hazardspikesdown_559[1] = {&anim_hazardspikesdown_559_0};
static Animations anim_hazardspikesdown_559 = {1, &anim_array_hazardspikesdown_559[0]};
static bool anim_hazardspikesdown_559_initialized;
class HazardSpikesDown_559 : public Active
{
public:
    HazardSpikesDown_559(int x, int y) : Active(x, y, HazardSpikesDown_559_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_559;
        if (!anim_hazardspikesdown_559_initialized) {
            anim_hazardspikesdown_559_initialized = true;
            images_hazardspikesdown_559_0_0[0] = get_internal_image(122);
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
FrameObject * create_hazardspikesdown_559(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_559(x, y);
}
static Image* images_hazardspikesleft_560_0_0[1];
static Direction direction_hazardspikesleft_560_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_560_0_0, 1};
static Animation anim_hazardspikesleft_560_0 = {&direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, NULL, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0, &direction_hazardspikesleft_560_0_0};
static Animation * anim_array_hazardspikesleft_560[1] = {&anim_hazardspikesleft_560_0};
static Animations anim_hazardspikesleft_560 = {1, &anim_array_hazardspikesleft_560[0]};
static bool anim_hazardspikesleft_560_initialized;
class HazardSpikesLeft_560 : public Active
{
public:
    HazardSpikesLeft_560(int x, int y) : Active(x, y, HazardSpikesLeft_560_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_560;
        if (!anim_hazardspikesleft_560_initialized) {
            anim_hazardspikesleft_560_initialized = true;
            images_hazardspikesleft_560_0_0[0] = get_internal_image(107);
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
FrameObject * create_hazardspikesleft_560(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_560(x, y);
}
static Image* images_hazardspikesright_561_0_0[1];
static Direction direction_hazardspikesright_561_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_561_0_0, 1};
static Animation anim_hazardspikesright_561_0 = {&direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, NULL, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0, &direction_hazardspikesright_561_0_0};
static Animation * anim_array_hazardspikesright_561[1] = {&anim_hazardspikesright_561_0};
static Animations anim_hazardspikesright_561 = {1, &anim_array_hazardspikesright_561[0]};
static bool anim_hazardspikesright_561_initialized;
class HazardSpikesRight_561 : public Active
{
public:
    HazardSpikesRight_561(int x, int y) : Active(x, y, HazardSpikesRight_561_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_561;
        if (!anim_hazardspikesright_561_initialized) {
            anim_hazardspikesright_561_initialized = true;
            images_hazardspikesright_561_0_0[0] = get_internal_image(127);
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
FrameObject * create_hazardspikesright_561(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_561(x, y);
}
static Image* images_monitorkeystone_562_0_0[8];
static Direction direction_monitorkeystone_562_0_0 = {0, 50, 50, 0, 1, images_monitorkeystone_562_0_0, 8};
static Image* images_monitorkeystone_562_0_1[8];
static Direction direction_monitorkeystone_562_0_1 = {1, 50, 50, 0, 1, images_monitorkeystone_562_0_1, 8};
static Image* images_monitorkeystone_562_0_2[8];
static Direction direction_monitorkeystone_562_0_2 = {2, 50, 50, 0, 1, images_monitorkeystone_562_0_2, 8};
static Image* images_monitorkeystone_562_0_3[8];
static Direction direction_monitorkeystone_562_0_3 = {3, 50, 50, 0, 1, images_monitorkeystone_562_0_3, 8};
static Image* images_monitorkeystone_562_0_4[8];
static Direction direction_monitorkeystone_562_0_4 = {4, 50, 50, 0, 1, images_monitorkeystone_562_0_4, 8};
static Animation anim_monitorkeystone_562_0 = {&direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_1, &direction_monitorkeystone_562_0_2, &direction_monitorkeystone_562_0_3, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, &direction_monitorkeystone_562_0_4, NULL, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0, &direction_monitorkeystone_562_0_0};
static Animation * anim_array_monitorkeystone_562[1] = {&anim_monitorkeystone_562_0};
static Animations anim_monitorkeystone_562 = {1, &anim_array_monitorkeystone_562[0]};
static bool anim_monitorkeystone_562_initialized;
class MonitorKeystone_562 : public Active
{
public:
    MonitorKeystone_562(int x, int y) : Active(x, y, MonitorKeystone_562_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_Keystone", 16);
#endif
        this->animations = &anim_monitorkeystone_562;
        if (!anim_monitorkeystone_562_initialized) {
            anim_monitorkeystone_562_initialized = true;
            images_monitorkeystone_562_0_0[0] = get_internal_image(27);
            images_monitorkeystone_562_0_0[1] = get_internal_image(271);
            images_monitorkeystone_562_0_0[2] = get_internal_image(287);
            images_monitorkeystone_562_0_0[3] = get_internal_image(421);
            images_monitorkeystone_562_0_0[4] = get_internal_image(422);
            images_monitorkeystone_562_0_0[5] = get_internal_image(443);
            images_monitorkeystone_562_0_0[6] = get_internal_image(571);
            images_monitorkeystone_562_0_0[7] = get_internal_image(27);
            images_monitorkeystone_562_0_1[0] = get_internal_image(2947);
            images_monitorkeystone_562_0_1[1] = get_internal_image(2060);
            images_monitorkeystone_562_0_1[2] = get_internal_image(2949);
            images_monitorkeystone_562_0_1[3] = get_internal_image(3015);
            images_monitorkeystone_562_0_1[4] = get_internal_image(3073);
            images_monitorkeystone_562_0_1[5] = get_internal_image(3512);
            images_monitorkeystone_562_0_1[6] = get_internal_image(3815);
            images_monitorkeystone_562_0_1[7] = get_internal_image(2947);
            images_monitorkeystone_562_0_2[0] = get_internal_image(3822);
            images_monitorkeystone_562_0_2[1] = get_internal_image(6100);
            images_monitorkeystone_562_0_2[2] = get_internal_image(6106);
            images_monitorkeystone_562_0_2[3] = get_internal_image(7309);
            images_monitorkeystone_562_0_2[4] = get_internal_image(7455);
            images_monitorkeystone_562_0_2[5] = get_internal_image(11664);
            images_monitorkeystone_562_0_2[6] = get_internal_image(11768);
            images_monitorkeystone_562_0_2[7] = get_internal_image(3822);
            images_monitorkeystone_562_0_3[0] = get_internal_image(11770);
            images_monitorkeystone_562_0_3[1] = get_internal_image(11769);
            images_monitorkeystone_562_0_3[2] = get_internal_image(11771);
            images_monitorkeystone_562_0_3[3] = get_internal_image(11772);
            images_monitorkeystone_562_0_3[4] = get_internal_image(11773);
            images_monitorkeystone_562_0_3[5] = get_internal_image(11774);
            images_monitorkeystone_562_0_3[6] = get_internal_image(11775);
            images_monitorkeystone_562_0_3[7] = get_internal_image(11770);
            images_monitorkeystone_562_0_4[0] = get_internal_image(11776);
            images_monitorkeystone_562_0_4[1] = get_internal_image(11777);
            images_monitorkeystone_562_0_4[2] = get_internal_image(11778);
            images_monitorkeystone_562_0_4[3] = get_internal_image(11779);
            images_monitorkeystone_562_0_4[4] = get_internal_image(11780);
            images_monitorkeystone_562_0_4[5] = get_internal_image(11781);
            images_monitorkeystone_562_0_4[6] = get_internal_image(11782);
            images_monitorkeystone_562_0_4[7] = get_internal_image(11776);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 12);
        alterables->values.set(3, 2);
    }
};
FrameObject * create_monitorkeystone_562(int x, int y)
{
    return new (Active::pool.create()) MonitorKeystone_562(x, y);
}
static Image* images_monitorbomb_563_0_0[1];
static Direction direction_monitorbomb_563_0_0 = {0, 15, 15, 0, -1, images_monitorbomb_563_0_0, 1};
static Animation anim_monitorbomb_563_0 = {&direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, NULL, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0, &direction_monitorbomb_563_0_0};
static Image* images_monitorbomb_563_7_0[5];
static Direction direction_monitorbomb_563_7_0 = {0, 25, 25, 0, -1, images_monitorbomb_563_7_0, 5};
static Animation anim_monitorbomb_563_7 = {&direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, NULL, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0, &direction_monitorbomb_563_7_0};
static Animation * anim_array_monitorbomb_563[8] = {&anim_monitorbomb_563_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_monitorbomb_563_7};
static Animations anim_monitorbomb_563 = {8, &anim_array_monitorbomb_563[0]};
static bool anim_monitorbomb_563_initialized;
class MonitorBomb_563 : public Active
{
public:
    MonitorBomb_563(int x, int y) : Active(x, y, MonitorBomb_563_type)
    {
        // qualifiers: 14, 16, 24, 29
#ifndef NDEBUG
        name = std::string("Monitor_Bomb", 12);
#endif
        this->animations = &anim_monitorbomb_563;
        if (!anim_monitorbomb_563_initialized) {
            anim_monitorbomb_563_initialized = true;
            images_monitorbomb_563_0_0[0] = get_internal_image(9781);
            images_monitorbomb_563_7_0[0] = get_internal_image(9781);
            images_monitorbomb_563_7_0[1] = get_internal_image(9790);
            images_monitorbomb_563_7_0[2] = get_internal_image(10291);
            images_monitorbomb_563_7_0[3] = get_internal_image(9781);
            images_monitorbomb_563_7_0[4] = get_internal_image(9781);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_114_monitor_bomb.value;
        if (!global_data_114_monitor_bomb.init) {
            alterables->values.set(2, 9);
            alterables->values.set(3, -3);
            global_data_114_monitor_bomb.init = true;
        }
    }
};
FrameObject * create_monitorbomb_563(int x, int y)
{
    return new (Active::pool.create()) MonitorBomb_563(x, y);
}
static Image* images_guitimer_564_0_0[8];
static Direction direction_guitimer_564_0_0 = {0, 0, 0, 0, -1, images_guitimer_564_0_0, 8};
static Image* images_guitimer_564_0_1[1];
static Direction direction_guitimer_564_0_1 = {1, 0, 0, 0, -1, images_guitimer_564_0_1, 1};
static Image* images_guitimer_564_0_2[1];
static Direction direction_guitimer_564_0_2 = {2, 50, 50, 0, 1, images_guitimer_564_0_2, 1};
static Image* images_guitimer_564_0_3[1];
static Direction direction_guitimer_564_0_3 = {3, 50, 50, 0, 1, images_guitimer_564_0_3, 1};
static Animation anim_guitimer_564_0 = {&direction_guitimer_564_0_0, &direction_guitimer_564_0_1, &direction_guitimer_564_0_2, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_3, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0, &direction_guitimer_564_0_0};
static Animation * anim_array_guitimer_564[1] = {&anim_guitimer_564_0};
static Animations anim_guitimer_564 = {1, &anim_array_guitimer_564[0]};
static bool anim_guitimer_564_initialized;
class GUITimer_564 : public Active
{
public:
    GUITimer_564(int x, int y) : Active(x, y, GUITimer_564_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Timer", 9);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_guitimer_564;
        if (!anim_guitimer_564_initialized) {
            anim_guitimer_564_initialized = true;
            images_guitimer_564_0_0[0] = get_internal_image(4544);
            images_guitimer_564_0_0[1] = get_internal_image(5026);
            images_guitimer_564_0_0[2] = get_internal_image(5023);
            images_guitimer_564_0_0[3] = get_internal_image(5025);
            images_guitimer_564_0_0[4] = get_internal_image(4621);
            images_guitimer_564_0_0[5] = get_internal_image(5022);
            images_guitimer_564_0_0[6] = get_internal_image(5011);
            images_guitimer_564_0_0[7] = get_internal_image(4972);
            images_guitimer_564_0_1[0] = get_internal_image(4622);
            images_guitimer_564_0_2[0] = get_internal_image(585);
            images_guitimer_564_0_3[0] = get_internal_image(307);
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
FrameObject * create_guitimer_564(int x, int y)
{
    return new (Active::pool.create()) GUITimer_564(x, y);
}
class DialogData_565 : public Text
{
public:
    DialogData_565(int x, int y) : Text(x, y, DialogData_565_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("01 00 li_02_07 So what are you doing out here\? The skies haven't been safe for days.", 84));
        add_line(std::string("05 00 to_01_10 Someone is about to steal the Kingdom Stone, and I have to stop them.", 84));
        add_line(std::string("01 00 li_02_08 The Kingdom Stone\? That's impossible!", 52));
        add_line(std::string("02 18 ca_02_07 Yeah, only I could steal it!", 43));
        add_line(std::string("01 06 li_02_09 Pff, you wish.", 29));
        add_line(std::string("05 00 to_01_11 It's already happening. Mayor Zao is sending troops in disguise to the ancient temple. I have to warn them!", 122));
        add_line(std::string("01 27 li_02_10 Carol and I are pretty fast. We could run over there for you.", 76));
        add_line(std::string("05 00 to_01_12 Seriously\?", 25));
        add_line(std::string("02 09 ca_02_08 Yep! I've got a motorcycle! And she's a dragon! They're like, super fast!", 88));
        add_line(std::string("01 57 li_02_11 Darn straight!", 29));
        add_line(std::string("05 00 to_01_13 Well... It's worth a shot! Hurry over there, before it's too late!", 81));
        add_line(std::string("02 36 ca_02_09 What about you\?", 30));
        add_line(std::string("05 00 to_01_14 I'll catch up with you as soon as I find all my stuff.", 69));
        add_line(std::string("01 27 li_02_12 Right! C'mon Carol!", 34));
        add_line(std::string("01 39 li_02_13 I'm sorry about running off on you back there...", 63));
        add_line(std::string("02 42 ca_02_10 Yeah, well, it happens...", 40));
        add_line(std::string("02 36 ca_02_11 We can trust this guy, right\?", 44));
        add_line(std::string("01 39 li_02_14 Well, what if he's telling the truth\? What if the stone really can be taken\? You know what'll happen then, right\?", 128));
        add_line(std::string("02 00 ca_02_12 No more Charge-ups\?", 34));
        add_line(std::string("01 00 li_02_15 Exactly.", 23));
        add_line(std::string("01 27 li_02b10 Carol and I are pretty fast. We could run right", 62));
        add_line(std::string("01 00 li_08_01 Hello\?", 21));
        add_line(std::string("07 xx go_03_00 Hello. Uh... This is General Gong.", 49));
        add_line(std::string("01 57 li_08_02 Hey! Up and at 'em! We've got adventuring to do!", 63));
        add_line(std::string("02 51 ca_09_01 Five more minutes...", 35));
        add_line(std::string("03 03 mi_05_02 Good morning Carol!", 34));
        add_line(std::string("05 00 to_04_01 I was wondering when you'd be awake.", 51));
        add_line(std::string("01 03 li_08_04 You can blame Carol for that. She sleeps for like, half a day.", 77));
        add_line(std::string("02 21 ca_09_03 Totally worth it!", 32));
        add_line(std::string("01 03 li_08_05 Well anyway, I got a call from that big panda guy I told you about. He's gonna help us.", 102));
        add_line(std::string("05 00 to_04_02 When is he coming\?", 33));
        add_line(std::string("01 03 li_08_06 Actually, we have to go meet him. He'll be waiting for us north of here.", 87));
        add_line(std::string("05 00 to_04_03 Perfect. I fixed my radar last night, so we can use it to find the meeting point.", 96));
        add_line(std::string("01 27 li_08_07 Great! Ready, girls\?", 35));
        add_line(std::string("02 12 ca_09_04 Aye aye, Captain!", 32));
        add_line(std::string("03 42 mi_05_03 To adventure!", 28));
        add_line(std::string("01 03 li_08b05 Well anyway, I got a big call from that big panda guy I told y", 77));
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
FrameObject * create_dialogdata_565(int x, int y)
{
    return new (Text::pool.create()) DialogData_565(x, y);
}
static Image* images_dialogbox_566_0_0[5];
static Direction direction_dialogbox_566_0_0 = {0, 0, 0, 0, 1, images_dialogbox_566_0_0, 5};
static Animation anim_dialogbox_566_0 = {&direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, NULL, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0, &direction_dialogbox_566_0_0};
static Animation * anim_array_dialogbox_566[1] = {&anim_dialogbox_566_0};
static Animations anim_dialogbox_566 = {1, &anim_array_dialogbox_566[0]};
static bool anim_dialogbox_566_initialized;
class DialogBox_566 : public Active
{
public:
    DialogBox_566(int x, int y) : Active(x, y, DialogBox_566_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog_Box", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_dialogbox_566;
        if (!anim_dialogbox_566_initialized) {
            anim_dialogbox_566_initialized = true;
            images_dialogbox_566_0_0[0] = get_internal_image(2486);
            images_dialogbox_566_0_0[1] = get_internal_image(2584);
            images_dialogbox_566_0_0[2] = get_internal_image(3834);
            images_dialogbox_566_0_0[3] = get_internal_image(12864);
            images_dialogbox_566_0_0[4] = get_internal_image(5118);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 172);
    }
};
FrameObject * create_dialogbox_566(int x, int y)
{
    return new (Active::pool.create()) DialogBox_566(x, y);
}
static Image* images_dialogbox2_567_0_0[15];
static Direction direction_dialogbox2_567_0_0 = {0, 0, 0, 0, 1, images_dialogbox2_567_0_0, 15};
static Animation anim_dialogbox2_567_0 = {&direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, NULL, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0, &direction_dialogbox2_567_0_0};
static Animation * anim_array_dialogbox2_567[1] = {&anim_dialogbox2_567_0};
static Animations anim_dialogbox2_567 = {1, &anim_array_dialogbox2_567[0]};
static bool anim_dialogbox2_567_initialized;
class DialogBox2_567 : public Active
{
public:
    DialogBox2_567(int x, int y) : Active(x, y, DialogBox2_567_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog_Box 2", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_dialogbox2_567;
        if (!anim_dialogbox2_567_initialized) {
            anim_dialogbox2_567_initialized = true;
            images_dialogbox2_567_0_0[0] = get_internal_image(15920);
            images_dialogbox2_567_0_0[1] = get_internal_image(15905);
            images_dialogbox2_567_0_0[2] = get_internal_image(15907);
            images_dialogbox2_567_0_0[3] = get_internal_image(15908);
            images_dialogbox2_567_0_0[4] = get_internal_image(15909);
            images_dialogbox2_567_0_0[5] = get_internal_image(15910);
            images_dialogbox2_567_0_0[6] = get_internal_image(15911);
            images_dialogbox2_567_0_0[7] = get_internal_image(15912);
            images_dialogbox2_567_0_0[8] = get_internal_image(15913);
            images_dialogbox2_567_0_0[9] = get_internal_image(15914);
            images_dialogbox2_567_0_0[10] = get_internal_image(15915);
            images_dialogbox2_567_0_0[11] = get_internal_image(15916);
            images_dialogbox2_567_0_0[12] = get_internal_image(15917);
            images_dialogbox2_567_0_0[13] = get_internal_image(15918);
            images_dialogbox2_567_0_0[14] = get_internal_image(15919);
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
FrameObject * create_dialogbox2_567(int x, int y)
{
    return new (Active::pool.create()) DialogBox2_567(x, y);
}
static Image* images_dialogarrow_568_0_0[3];
static Direction direction_dialogarrow_568_0_0 = {0, 8, 8, 0, -1, images_dialogarrow_568_0_0, 3};
static Image* images_dialogarrow_568_0_8[1];
static Direction direction_dialogarrow_568_0_8 = {8, 50, 50, 0, 1, images_dialogarrow_568_0_8, 1};
static Animation anim_dialogarrow_568_0 = {&direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, NULL, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, &direction_dialogarrow_568_0_8, NULL, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0, &direction_dialogarrow_568_0_0};
static Animation * anim_array_dialogarrow_568[1] = {&anim_dialogarrow_568_0};
static Animations anim_dialogarrow_568 = {1, &anim_array_dialogarrow_568[0]};
static bool anim_dialogarrow_568_initialized;
class DialogArrow_568 : public Active
{
public:
    DialogArrow_568(int x, int y) : Active(x, y, DialogArrow_568_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog_Arrow", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_dialogarrow_568;
        if (!anim_dialogarrow_568_initialized) {
            anim_dialogarrow_568_initialized = true;
            images_dialogarrow_568_0_0[0] = get_internal_image(13359);
            images_dialogarrow_568_0_0[1] = get_internal_image(13360);
            images_dialogarrow_568_0_0[2] = get_internal_image(13362);
            images_dialogarrow_568_0_8[0] = get_internal_image(2320);
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
FrameObject * create_dialogarrow_568(int x, int y)
{
    return new (Active::pool.create()) DialogArrow_568(x, y);
}
class DialogText_569 : public TextBlitter
{
public:
    DialogText_569(int x, int y) : TextBlitter(x, y, DialogText_569_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog_Text", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 296;
        height = 61;
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
        set_text(std::string("...", 3));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_dialogtext_569(int x, int y)
{
    return new (TextBlitter::pool.create()) DialogText_569(x, y);
}
class LocationName_570 : public TextBlitter
{
public:
    LocationName_570(int x, int y) : TextBlitter(x, y, LocationName_570_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Location name", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
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
FrameObject * create_locationname_570(int x, int y)
{
    return new (TextBlitter::pool.create()) LocationName_570(x, y);
}
static Image* images_dialogbox_571_0_0[1];
static Direction direction_dialogbox_571_0_0 = {0, 50, 50, 0, 1, images_dialogbox_571_0_0, 1};
static Animation anim_dialogbox_571_0 = {&direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, NULL, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0, &direction_dialogbox_571_0_0};
static Image* images_dialogbox_571_5_0[2];
static Direction direction_dialogbox_571_5_0 = {0, 50, 50, 0, 1, images_dialogbox_571_5_0, 2};
static Animation anim_dialogbox_571_5 = {&direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, NULL, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0, &direction_dialogbox_571_5_0};
static Animation * anim_array_dialogbox_571[6] = {&anim_dialogbox_571_0, NULL, NULL, NULL, NULL, &anim_dialogbox_571_5};
static Animations anim_dialogbox_571 = {6, &anim_array_dialogbox_571[0]};
static bool anim_dialogbox_571_initialized;
class DialogBox_571 : public Active
{
public:
    DialogBox_571(int x, int y) : Active(x, y, DialogBox_571_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DialogBox", 9);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_dialogbox_571;
        if (!anim_dialogbox_571_initialized) {
            anim_dialogbox_571_initialized = true;
            images_dialogbox_571_0_0[0] = get_internal_image(2834);
            images_dialogbox_571_5_0[0] = get_internal_image(2835);
            images_dialogbox_571_5_0[1] = get_internal_image(2836);
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
FrameObject * create_dialogbox_571(int x, int y)
{
    return new (Active::pool.create()) DialogBox_571(x, y);
}
class DialogText_572 : public Text
{
public:
    DialogText_572(int x, int y) : Text(x, y, DialogText_572_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DialogText", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Text", 4));
        width = 320;
        height = 40;
        blend_color = Color(255, 255, 255);
        bold = font3.bold;
        italic = font3.italic;
        font = get_font(font3.size);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        create_alterables();
    }
};
FrameObject * create_dialogtext_572(int x, int y)
{
    return new (Text::pool.create()) DialogText_572(x, y);
}
class LevelParallaxPiece0_573 : public SystemBox
{
public:
    LevelParallaxPiece0_573(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_573_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(788);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_573(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_573(x, y);
}
class LevelParallaxPiece1_574 : public SystemBox
{
public:
    LevelParallaxPiece1_574(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_574_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(783);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_574(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_574(x, y);
}
class LevelParallaxPiece2_575 : public SystemBox
{
public:
    LevelParallaxPiece2_575(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_575_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(781);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_575(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_575(x, y);
}
static Image* images_brevonimage_576_0_0[1];
static Direction direction_brevonimage_576_0_0 = {0, 50, 50, 0, 1, images_brevonimage_576_0_0, 1};
static Animation anim_brevonimage_576_0 = {&direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, NULL, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0, &direction_brevonimage_576_0_0};
static Animation * anim_array_brevonimage_576[1] = {&anim_brevonimage_576_0};
static Animations anim_brevonimage_576 = {1, &anim_array_brevonimage_576[0]};
static bool anim_brevonimage_576_initialized;
class BrevonImage_576 : public Active
{
public:
    BrevonImage_576(int x, int y) : Active(x, y, BrevonImage_576_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_Image", 12);
#endif
        this->animations = &anim_brevonimage_576;
        if (!anim_brevonimage_576_initialized) {
            anim_brevonimage_576_initialized = true;
            images_brevonimage_576_0_0[0] = get_internal_image(10772);
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
FrameObject * create_brevonimage_576(int x, int y)
{
    return new (Active::pool.create()) BrevonImage_576(x, y);
}
static Image* images_lightspark2_577_0_0[1];
static Direction direction_lightspark2_577_0_0 = {0, 50, 50, 0, 1, images_lightspark2_577_0_0, 1};
static Animation anim_lightspark2_577_0 = {&direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, NULL, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0, &direction_lightspark2_577_0_0};
static Animation * anim_array_lightspark2_577[1] = {&anim_lightspark2_577_0};
static Animations anim_lightspark2_577 = {1, &anim_array_lightspark2_577[0]};
static bool anim_lightspark2_577_initialized;
class LightSpark2_577 : public Active
{
public:
    LightSpark2_577(int x, int y) : Active(x, y, LightSpark2_577_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Light spark 2", 13);
#endif
        this->animations = &anim_lightspark2_577;
        if (!anim_lightspark2_577_initialized) {
            anim_lightspark2_577_initialized = true;
            images_lightspark2_577_0_0[0] = get_internal_image(1168);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
        alterables->values.set(0, 128);
    }
};
FrameObject * create_lightspark2_577(int x, int y)
{
    return new (Active::pool.create()) LightSpark2_577(x, y);
}
static Image* images_endingsparkle_578_0_0[22];
static Direction direction_endingsparkle_578_0_0 = {0, 50, 50, 0, -1, images_endingsparkle_578_0_0, 22};
static Animation anim_endingsparkle_578_0 = {&direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, NULL, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0, &direction_endingsparkle_578_0_0};
static Animation * anim_array_endingsparkle_578[1] = {&anim_endingsparkle_578_0};
static Animations anim_endingsparkle_578 = {1, &anim_array_endingsparkle_578[0]};
static bool anim_endingsparkle_578_initialized;
class EndingSparkle_578 : public Active
{
public:
    EndingSparkle_578(int x, int y) : Active(x, y, EndingSparkle_578_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("EndingSparkle", 13);
#endif
        this->animations = &anim_endingsparkle_578;
        if (!anim_endingsparkle_578_initialized) {
            anim_endingsparkle_578_initialized = true;
            images_endingsparkle_578_0_0[0] = get_internal_image(7932);
            images_endingsparkle_578_0_0[1] = get_internal_image(3716);
            images_endingsparkle_578_0_0[2] = get_internal_image(3717);
            images_endingsparkle_578_0_0[3] = get_internal_image(3716);
            images_endingsparkle_578_0_0[4] = get_internal_image(381);
            images_endingsparkle_578_0_0[5] = get_internal_image(3154);
            images_endingsparkle_578_0_0[6] = get_internal_image(3508);
            images_endingsparkle_578_0_0[7] = get_internal_image(3160);
            images_endingsparkle_578_0_0[8] = get_internal_image(3692);
            images_endingsparkle_578_0_0[9] = get_internal_image(3693);
            images_endingsparkle_578_0_0[10] = get_internal_image(3694);
            images_endingsparkle_578_0_0[11] = get_internal_image(3713);
            images_endingsparkle_578_0_0[12] = get_internal_image(3714);
            images_endingsparkle_578_0_0[13] = get_internal_image(3714);
            images_endingsparkle_578_0_0[14] = get_internal_image(3713);
            images_endingsparkle_578_0_0[15] = get_internal_image(3694);
            images_endingsparkle_578_0_0[16] = get_internal_image(3693);
            images_endingsparkle_578_0_0[17] = get_internal_image(3692);
            images_endingsparkle_578_0_0[18] = get_internal_image(3160);
            images_endingsparkle_578_0_0[19] = get_internal_image(3508);
            images_endingsparkle_578_0_0[20] = get_internal_image(3154);
            images_endingsparkle_578_0_0[21] = get_internal_image(381);
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
FrameObject * create_endingsparkle_578(int x, int y)
{
    return new (Active::pool.create()) EndingSparkle_578(x, y);
}
static Image* images_creditstorquerocket_579_0_0[1];
static Direction direction_creditstorquerocket_579_0_0 = {0, 50, 50, 0, 1, images_creditstorquerocket_579_0_0, 1};
static Animation anim_creditstorquerocket_579_0 = {&direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, NULL, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0, &direction_creditstorquerocket_579_0_0};
static Animation * anim_array_creditstorquerocket_579[1] = {&anim_creditstorquerocket_579_0};
static Animations anim_creditstorquerocket_579 = {1, &anim_array_creditstorquerocket_579[0]};
static bool anim_creditstorquerocket_579_initialized;
class CreditsTorqueRocket_579 : public Active
{
public:
    CreditsTorqueRocket_579(int x, int y) : Active(x, y, CreditsTorqueRocket_579_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Credits_TorqueRocket", 20);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_creditstorquerocket_579;
        if (!anim_creditstorquerocket_579_initialized) {
            anim_creditstorquerocket_579_initialized = true;
            images_creditstorquerocket_579_0_0[0] = get_internal_image(181);
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
FrameObject * create_creditstorquerocket_579(int x, int y)
{
    return new (Active::pool.create()) CreditsTorqueRocket_579(x, y);
}
class LevelParallaxPiece3_580 : public SystemBox
{
public:
    LevelParallaxPiece3_580(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_580_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 446;
        type = PATTERN_IMAGE;
        image = get_internal_image(778);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_580(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_580(x, y);
}
class LevelParallaxPiece4_581 : public SystemBox
{
public:
    LevelParallaxPiece4_581(int x, int y) : SystemBox(x, y, LevelParallaxPiece4_581_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 175;
        type = PATTERN_IMAGE;
        image = get_internal_image(777);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4_581(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4_581(x, y);
}
class Backdrop4_582 : public Backdrop
{
public:
    Backdrop4_582(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13348);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop4_582(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_582(x, y);
}
static Image* images_objecttent_583_0_0[1];
static Direction direction_objecttent_583_0_0 = {0, 0, 0, 0, 1, images_objecttent_583_0_0, 1};
static Animation anim_objecttent_583_0 = {&direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, NULL, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0, &direction_objecttent_583_0_0};
static Animation * anim_array_objecttent_583[1] = {&anim_objecttent_583_0};
static Animations anim_objecttent_583 = {1, &anim_array_objecttent_583[0]};
static bool anim_objecttent_583_initialized;
class ObjectTent_583 : public Active
{
public:
    ObjectTent_583(int x, int y) : Active(x, y, ObjectTent_583_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Tent", 11);
#endif
        this->animations = &anim_objecttent_583;
        if (!anim_objecttent_583_initialized) {
            anim_objecttent_583_initialized = true;
            images_objecttent_583_0_0[0] = get_internal_image(6765);
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
FrameObject * create_objecttent_583(int x, int y)
{
    return new (Active::pool.create()) ObjectTent_583(x, y);
}
static Image* images_objecttentlight_584_0_0[1];
static Direction direction_objecttentlight_584_0_0 = {0, 0, 0, 0, 1, images_objecttentlight_584_0_0, 1};
static Animation anim_objecttentlight_584_0 = {&direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, NULL, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0, &direction_objecttentlight_584_0_0};
static Animation * anim_array_objecttentlight_584[1] = {&anim_objecttentlight_584_0};
static Animations anim_objecttentlight_584 = {1, &anim_array_objecttentlight_584[0]};
static bool anim_objecttentlight_584_initialized;
class ObjectTentLight_584 : public Active
{
public:
    ObjectTentLight_584(int x, int y) : Active(x, y, ObjectTentLight_584_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TentLight", 16);
#endif
        this->animations = &anim_objecttentlight_584;
        if (!anim_objecttentlight_584_initialized) {
            anim_objecttentlight_584_initialized = true;
            images_objecttentlight_584_0_0[0] = get_internal_image(8299);
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
FrameObject * create_objecttentlight_584(int x, int y)
{
    return new (Active::pool.create()) ObjectTentLight_584(x, y);
}
static Image* images_objecttent2_585_0_0[1];
static Direction direction_objecttent2_585_0_0 = {0, 50, 50, 0, 1, images_objecttent2_585_0_0, 1};
static Animation anim_objecttent2_585_0 = {&direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, NULL, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0, &direction_objecttent2_585_0_0};
static Animation * anim_array_objecttent2_585[1] = {&anim_objecttent2_585_0};
static Animations anim_objecttent2_585 = {1, &anim_array_objecttent2_585[0]};
static bool anim_objecttent2_585_initialized;
class ObjectTent2_585 : public Active
{
public:
    ObjectTent2_585(int x, int y) : Active(x, y, ObjectTent2_585_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Tent 2", 13);
#endif
        this->animations = &anim_objecttent2_585;
        if (!anim_objecttent2_585_initialized) {
            anim_objecttent2_585_initialized = true;
            images_objecttent2_585_0_0[0] = get_internal_image(6762);
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
FrameObject * create_objecttent2_585(int x, int y)
{
    return new (Active::pool.create()) ObjectTent2_585(x, y);
}
class HouseFloor_586 : public Backdrop
{
public:
    HouseFloor_586(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Floor", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14425);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housefloor_586(int x, int y)
{
    return new (Backdrop::pool.create()) HouseFloor_586(x, y);
}
class LevelParallaxPiece5_587 : public SystemBox
{
public:
    LevelParallaxPiece5_587(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_587_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 184;
        type = PATTERN_IMAGE;
        image = get_internal_image(3002);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_587(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_587(x, y);
}
class LevelParallaxPiece6_588 : public SystemBox
{
public:
    LevelParallaxPiece6_588(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_588_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 136;
        height = 80;
        type = PATTERN_IMAGE;
        image = get_internal_image(3004);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_588(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_588(x, y);
}
class Backdrop6_589 : public Backdrop
{
public:
    Backdrop6_589(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3760);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop6_589(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_589(x, y);
}
class Backdrop7_590 : public Backdrop
{
public:
    Backdrop7_590(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3833);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop7_590(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop7_590(x, y);
}
class Backdrop8_591 : public Backdrop
{
public:
    Backdrop8_591(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3854);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop8_591(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop8_591(x, y);
}
class Backdrop_592 : public Backdrop
{
public:
    Backdrop_592(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14347);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_592(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_592(x, y);
}
class Backdrop13_593 : public Backdrop
{
public:
    Backdrop13_593(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 13", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14349);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop13_593(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop13_593(x, y);
}
class JCDirt1_594 : public Backdrop
{
public:
    JCDirt1_594(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Dirt1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9295);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_jcdirt1_594(int x, int y)
{
    return new (Backdrop::pool.create()) JCDirt1_594(x, y);
}
class Dirt2_595 : public Backdrop
{
public:
    Dirt2_595(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 2", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(104);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dirt2_595(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt2_595(x, y);
}
class RMGrass6_596 : public Backdrop
{
public:
    RMGrass6_596(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2990);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass6_596(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass6_596(x, y);
}
class Dirt3_597 : public Backdrop
{
public:
    Dirt3_597(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 3", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(955);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dirt3_597(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt3_597(x, y);
}
class Dirt4_598 : public Backdrop
{
public:
    Dirt4_598(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dirt 4", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(954);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dirt4_598(int x, int y)
{
    return new (Backdrop::pool.create()) Dirt4_598(x, y);
}
class RMGrass5_599 : public Backdrop
{
public:
    RMGrass5_599(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1456);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmgrass5_599(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass5_599(x, y);
}
class DVRockSlope4_600 : public Backdrop
{
public:
    DVRockSlope4_600(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6670);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope4_600(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope4_600(x, y);
}
class TreehouseBenchNight_601 : public Backdrop
{
public:
    TreehouseBenchNight_601(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Treehouse_BenchNight", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4410);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_treehousebenchnight_601(int x, int y)
{
    return new (Backdrop::pool.create()) TreehouseBenchNight_601(x, y);
}
class JCGrass5_602 : public Backdrop
{
public:
    JCGrass5_602(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("JC_Grass 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2852);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_jcgrass5_602(int x, int y)
{
    return new (Backdrop::pool.create()) JCGrass5_602(x, y);
}
class LTNightGround3_603 : public Backdrop
{
public:
    LTNightGround3_603(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LT_NightGround 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3008);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_ltnightground3_603(int x, int y)
{
    return new (Backdrop::pool.create()) LTNightGround3_603(x, y);
}
class Backdrop3_604 : public Backdrop
{
public:
    Backdrop3_604(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14424);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_604(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_604(x, y);
}
class HouseCeiling_605 : public Backdrop
{
public:
    HouseCeiling_605(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Ceiling", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14416);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_houseceiling_605(int x, int y)
{
    return new (Backdrop::pool.create()) HouseCeiling_605(x, y);
}
