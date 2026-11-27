#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class PLCaveBack2_3013 : public Backdrop
{
public:
    PLCaveBack2_3013(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBack 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12844);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plcaveback2_3013(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBack2_3013(x, y);
}
class PLCaveBack1_3014 : public Backdrop
{
public:
    PLCaveBack1_3014(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBack 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12742);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plcaveback1_3014(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBack1_3014(x, y);
}
class PLIndoorRuins2_3015 : public Backdrop
{
public:
    PLIndoorRuins2_3015(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_IndoorRuins 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12846);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plindoorruins2_3015(int x, int y)
{
    return new (Backdrop::pool.create()) PLIndoorRuins2_3015(x, y);
}
class PLIndoorRuins3_3016 : public Backdrop
{
public:
    PLIndoorRuins3_3016(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_IndoorRuins 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12847);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plindoorruins3_3016(int x, int y)
{
    return new (Backdrop::pool.create()) PLIndoorRuins3_3016(x, y);
}
class PLCaveBrick5_3017 : public Backdrop
{
public:
    PLCaveBrick5_3017(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12840);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick5_3017(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick5_3017(x, y);
}
class PLCaveBrick3_3018 : public Backdrop
{
public:
    PLCaveBrick3_3018(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12824);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick3_3018(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick3_3018(x, y);
}
class PLCaveBrick2_3019 : public Backdrop
{
public:
    PLCaveBrick2_3019(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12823);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick2_3019(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick2_3019(x, y);
}
class PLCaveBrick1_3020 : public Backdrop
{
public:
    PLCaveBrick1_3020(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12828);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick1_3020(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick1_3020(x, y);
}
class PLCaveBrick7_3021 : public Backdrop
{
public:
    PLCaveBrick7_3021(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 7", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12904);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick7_3021(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick7_3021(x, y);
}
class PLCaveBrick6_3022 : public Backdrop
{
public:
    PLCaveBrick6_3022(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12829);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick6_3022(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick6_3022(x, y);
}
class PLCaveBrick4_3023 : public Backdrop
{
public:
    PLCaveBrick4_3023(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12825);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plcavebrick4_3023(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick4_3023(x, y);
}
class PLCaveBrick8_3024 : public Backdrop
{
public:
    PLCaveBrick8_3024(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 8", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12931);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick8_3024(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick8_3024(x, y);
}
class PLCaveBrick11_3025 : public Backdrop
{
public:
    PLCaveBrick11_3025(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 11", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12939);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick11_3025(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick11_3025(x, y);
}
class PLCaveBrick12_3026 : public Backdrop
{
public:
    PLCaveBrick12_3026(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 12", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12940);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick12_3026(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick12_3026(x, y);
}
class PLSpinballChain_3027 : public Backdrop
{
public:
    PLSpinballChain_3027(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_SpinballChain", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12848);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plspinballchain_3027(int x, int y)
{
    return new (Backdrop::pool.create()) PLSpinballChain_3027(x, y);
}
class PLCaveBrick9_3028 : public Backdrop
{
public:
    PLCaveBrick9_3028(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 9", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12921);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick9_3028(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick9_3028(x, y);
}
class PLCaveBrick10_3029 : public Backdrop
{
public:
    PLCaveBrick10_3029(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 10", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12920);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick10_3029(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick10_3029(x, y);
}
static Image* images_gimmickspinballchain_3030_0_0[1];
static Direction direction_gimmickspinballchain_3030_0_0 = {0, 50, 50, 0, 1, images_gimmickspinballchain_3030_0_0, 1};
static Animation anim_gimmickspinballchain_3030_0 = {&direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, NULL, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0, &direction_gimmickspinballchain_3030_0_0};
static Animation * anim_array_gimmickspinballchain_3030[1] = {&anim_gimmickspinballchain_3030_0};
static Animations anim_gimmickspinballchain_3030 = {1, &anim_array_gimmickspinballchain_3030[0]};
static bool anim_gimmickspinballchain_3030_initialized;
class GimmickSpinballChain_3030 : public Active
{
public:
    GimmickSpinballChain_3030(int x, int y) : Active(x, y, GimmickSpinballChain_3030_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinballChain", 21);
#endif
        this->animations = &anim_gimmickspinballchain_3030;
        if (!anim_gimmickspinballchain_3030_initialized) {
            anim_gimmickspinballchain_3030_initialized = true;
            images_gimmickspinballchain_3030_0_0[0] = get_internal_image(12855);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 24);
    }
};
FrameObject * create_gimmickspinballchain_3030(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinballChain_3030(x, y);
}
static Image* images_gimmickspinballchain2_3031_0_0[1];
static Direction direction_gimmickspinballchain2_3031_0_0 = {0, 50, 50, 0, 1, images_gimmickspinballchain2_3031_0_0, 1};
static Animation anim_gimmickspinballchain2_3031_0 = {&direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, NULL, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0, &direction_gimmickspinballchain2_3031_0_0};
static Animation * anim_array_gimmickspinballchain2_3031[1] = {&anim_gimmickspinballchain2_3031_0};
static Animations anim_gimmickspinballchain2_3031 = {1, &anim_array_gimmickspinballchain2_3031[0]};
static bool anim_gimmickspinballchain2_3031_initialized;
class GimmickSpinballChain2_3031 : public Active
{
public:
    GimmickSpinballChain2_3031(int x, int y) : Active(x, y, GimmickSpinballChain2_3031_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinballChain 2", 23);
#endif
        this->animations = &anim_gimmickspinballchain2_3031;
        if (!anim_gimmickspinballchain2_3031_initialized) {
            anim_gimmickspinballchain2_3031_initialized = true;
            images_gimmickspinballchain2_3031_0_0[0] = get_internal_image(12855);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 48);
    }
};
FrameObject * create_gimmickspinballchain2_3031(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinballChain2_3031(x, y);
}
static Image* images_gimmickspinballchain3_3032_0_0[1];
static Direction direction_gimmickspinballchain3_3032_0_0 = {0, 50, 50, 0, 1, images_gimmickspinballchain3_3032_0_0, 1};
static Animation anim_gimmickspinballchain3_3032_0 = {&direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, NULL, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0, &direction_gimmickspinballchain3_3032_0_0};
static Animation * anim_array_gimmickspinballchain3_3032[1] = {&anim_gimmickspinballchain3_3032_0};
static Animations anim_gimmickspinballchain3_3032 = {1, &anim_array_gimmickspinballchain3_3032[0]};
static bool anim_gimmickspinballchain3_3032_initialized;
class GimmickSpinballChain3_3032 : public Active
{
public:
    GimmickSpinballChain3_3032(int x, int y) : Active(x, y, GimmickSpinballChain3_3032_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinballChain 3", 23);
#endif
        this->animations = &anim_gimmickspinballchain3_3032;
        if (!anim_gimmickspinballchain3_3032_initialized) {
            anim_gimmickspinballchain3_3032_initialized = true;
            images_gimmickspinballchain3_3032_0_0[0] = get_internal_image(12855);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 72);
    }
};
FrameObject * create_gimmickspinballchain3_3032(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinballChain3_3032(x, y);
}
static Image* images_gimmickspinballchain4_3033_0_0[1];
static Direction direction_gimmickspinballchain4_3033_0_0 = {0, 50, 50, 0, 1, images_gimmickspinballchain4_3033_0_0, 1};
static Animation anim_gimmickspinballchain4_3033_0 = {&direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, NULL, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0, &direction_gimmickspinballchain4_3033_0_0};
static Animation * anim_array_gimmickspinballchain4_3033[1] = {&anim_gimmickspinballchain4_3033_0};
static Animations anim_gimmickspinballchain4_3033 = {1, &anim_array_gimmickspinballchain4_3033[0]};
static bool anim_gimmickspinballchain4_3033_initialized;
class GimmickSpinballChain4_3033 : public Active
{
public:
    GimmickSpinballChain4_3033(int x, int y) : Active(x, y, GimmickSpinballChain4_3033_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinballChain 4", 23);
#endif
        this->animations = &anim_gimmickspinballchain4_3033;
        if (!anim_gimmickspinballchain4_3033_initialized) {
            anim_gimmickspinballchain4_3033_initialized = true;
            images_gimmickspinballchain4_3033_0_0[0] = get_internal_image(12855);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 96);
    }
};
FrameObject * create_gimmickspinballchain4_3033(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinballChain4_3033(x, y);
}
static Image* images_objectvanishingblock_3034_0_0[14];
static Direction direction_objectvanishingblock_3034_0_0 = {0, 0, 0, 0, -1, images_objectvanishingblock_3034_0_0, 14};
static Animation anim_objectvanishingblock_3034_0 = {&direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, NULL, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0, &direction_objectvanishingblock_3034_0_0};
static Animation * anim_array_objectvanishingblock_3034[1] = {&anim_objectvanishingblock_3034_0};
static Animations anim_objectvanishingblock_3034 = {1, &anim_array_objectvanishingblock_3034[0]};
static bool anim_objectvanishingblock_3034_initialized;
class ObjectVanishingBlock_3034 : public Active
{
public:
    ObjectVanishingBlock_3034(int x, int y) : Active(x, y, ObjectVanishingBlock_3034_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_VanishingBlock", 21);
#endif
        this->animations = &anim_objectvanishingblock_3034;
        if (!anim_objectvanishingblock_3034_initialized) {
            anim_objectvanishingblock_3034_initialized = true;
            images_objectvanishingblock_3034_0_0[0] = get_internal_image(12835);
            images_objectvanishingblock_3034_0_0[1] = get_internal_image(12854);
            images_objectvanishingblock_3034_0_0[2] = get_internal_image(12853);
            images_objectvanishingblock_3034_0_0[3] = get_internal_image(12852);
            images_objectvanishingblock_3034_0_0[4] = get_internal_image(12851);
            images_objectvanishingblock_3034_0_0[5] = get_internal_image(12850);
            images_objectvanishingblock_3034_0_0[6] = get_internal_image(12849);
            images_objectvanishingblock_3034_0_0[7] = get_internal_image(12845);
            images_objectvanishingblock_3034_0_0[8] = get_internal_image(12836);
            images_objectvanishingblock_3034_0_0[9] = get_internal_image(12835);
            images_objectvanishingblock_3034_0_0[10] = get_internal_image(12837);
            images_objectvanishingblock_3034_0_0[11] = get_internal_image(12834);
            images_objectvanishingblock_3034_0_0[12] = get_internal_image(12833);
            images_objectvanishingblock_3034_0_0[13] = get_internal_image(12820);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 14);
    }
};
FrameObject * create_objectvanishingblock_3034(int x, int y)
{
    return new (Active::pool.create()) ObjectVanishingBlock_3034(x, y);
}
static Image* images_enemyobelisk_3035_0_0[1];
static Direction direction_enemyobelisk_3035_0_0 = {0, 50, 50, 0, 1, images_enemyobelisk_3035_0_0, 1};
static Image* images_enemyobelisk_3035_0_16[1];
static Direction direction_enemyobelisk_3035_0_16 = {16, 50, 50, 0, 1, images_enemyobelisk_3035_0_16, 1};
static Animation anim_enemyobelisk_3035_0 = {&direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, NULL, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, &direction_enemyobelisk_3035_0_16, NULL, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0, &direction_enemyobelisk_3035_0_0};
static Image* images_enemyobelisk_3035_7_0[2];
static Direction direction_enemyobelisk_3035_7_0 = {0, 50, 50, 0, -1, images_enemyobelisk_3035_7_0, 2};
static Image* images_enemyobelisk_3035_7_16[2];
static Direction direction_enemyobelisk_3035_7_16 = {16, 50, 50, 0, -1, images_enemyobelisk_3035_7_16, 2};
static Animation anim_enemyobelisk_3035_7 = {&direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, NULL, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, &direction_enemyobelisk_3035_7_16, NULL, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0, &direction_enemyobelisk_3035_7_0};
static Image* images_enemyobelisk_3035_8_0[1];
static Direction direction_enemyobelisk_3035_8_0 = {0, 50, 50, 0, -1, images_enemyobelisk_3035_8_0, 1};
static Image* images_enemyobelisk_3035_8_16[1];
static Direction direction_enemyobelisk_3035_8_16 = {16, 50, 50, 0, -1, images_enemyobelisk_3035_8_16, 1};
static Animation anim_enemyobelisk_3035_8 = {&direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, NULL, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, &direction_enemyobelisk_3035_8_16, NULL, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0, &direction_enemyobelisk_3035_8_0};
static Image* images_enemyobelisk_3035_10_0[3];
static Direction direction_enemyobelisk_3035_10_0 = {0, 14, 14, 0, 1, images_enemyobelisk_3035_10_0, 3};
static Image* images_enemyobelisk_3035_10_16[3];
static Direction direction_enemyobelisk_3035_10_16 = {16, 14, 14, 0, 1, images_enemyobelisk_3035_10_16, 3};
static Animation anim_enemyobelisk_3035_10 = {&direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, NULL, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, &direction_enemyobelisk_3035_10_16, NULL, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0, &direction_enemyobelisk_3035_10_0};
static Image* images_enemyobelisk_3035_11_0[3];
static Direction direction_enemyobelisk_3035_11_0 = {0, 14, 14, 0, 1, images_enemyobelisk_3035_11_0, 3};
static Image* images_enemyobelisk_3035_11_16[3];
static Direction direction_enemyobelisk_3035_11_16 = {16, 14, 14, 0, 1, images_enemyobelisk_3035_11_16, 3};
static Animation anim_enemyobelisk_3035_11 = {&direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, NULL, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, &direction_enemyobelisk_3035_11_16, NULL, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0, &direction_enemyobelisk_3035_11_0};
static Animation * anim_array_enemyobelisk_3035[12] = {&anim_enemyobelisk_3035_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyobelisk_3035_7, &anim_enemyobelisk_3035_8, NULL, &anim_enemyobelisk_3035_10, &anim_enemyobelisk_3035_11};
static Animations anim_enemyobelisk_3035 = {12, &anim_array_enemyobelisk_3035[0]};
static bool anim_enemyobelisk_3035_initialized;
class EnemyObelisk_3035 : public Active
{
public:
    EnemyObelisk_3035(int x, int y) : Active(x, y, EnemyObelisk_3035_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Obelisk", 13);
#endif
        this->animations = &anim_enemyobelisk_3035;
        if (!anim_enemyobelisk_3035_initialized) {
            anim_enemyobelisk_3035_initialized = true;
            images_enemyobelisk_3035_0_0[0] = get_internal_image(12832);
            images_enemyobelisk_3035_0_16[0] = get_internal_image(12938);
            images_enemyobelisk_3035_7_0[0] = get_internal_image(12947);
            images_enemyobelisk_3035_7_0[1] = get_internal_image(12945);
            images_enemyobelisk_3035_7_16[0] = get_internal_image(12948);
            images_enemyobelisk_3035_7_16[1] = get_internal_image(12949);
            images_enemyobelisk_3035_8_0[0] = get_internal_image(12942);
            images_enemyobelisk_3035_8_16[0] = get_internal_image(12941);
            images_enemyobelisk_3035_10_0[0] = get_internal_image(12932);
            images_enemyobelisk_3035_10_0[1] = get_internal_image(12943);
            images_enemyobelisk_3035_10_0[2] = get_internal_image(12832);
            images_enemyobelisk_3035_10_16[0] = get_internal_image(12933);
            images_enemyobelisk_3035_10_16[1] = get_internal_image(12944);
            images_enemyobelisk_3035_10_16[2] = get_internal_image(12938);
            images_enemyobelisk_3035_11_0[0] = get_internal_image(12832);
            images_enemyobelisk_3035_11_0[1] = get_internal_image(12943);
            images_enemyobelisk_3035_11_0[2] = get_internal_image(12932);
            images_enemyobelisk_3035_11_16[0] = get_internal_image(12938);
            images_enemyobelisk_3035_11_16[1] = get_internal_image(12944);
            images_enemyobelisk_3035_11_16[2] = get_internal_image(12933);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(5, -1);
    }
};
FrameObject * create_enemyobelisk_3035(int x, int y)
{
    return new (Active::pool.create()) EnemyObelisk_3035(x, y);
}
static Image* images_gimmickbreakoutwallright_3036_0_0[1];
static Direction direction_gimmickbreakoutwallright_3036_0_0 = {0, 50, 50, 0, 1, images_gimmickbreakoutwallright_3036_0_0, 1};
static Animation anim_gimmickbreakoutwallright_3036_0 = {&direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, NULL, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0, &direction_gimmickbreakoutwallright_3036_0_0};
static Animation * anim_array_gimmickbreakoutwallright_3036[1] = {&anim_gimmickbreakoutwallright_3036_0};
static Animations anim_gimmickbreakoutwallright_3036 = {1, &anim_array_gimmickbreakoutwallright_3036[0]};
static bool anim_gimmickbreakoutwallright_3036_initialized;
class GimmickBreakoutWallRight_3036 : public Active
{
public:
    GimmickBreakoutWallRight_3036(int x, int y) : Active(x, y, GimmickBreakoutWallRight_3036_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BreakoutWallRight", 25);
#endif
        set_visible(false);
        this->animations = &anim_gimmickbreakoutwallright_3036;
        if (!anim_gimmickbreakoutwallright_3036_initialized) {
            anim_gimmickbreakoutwallright_3036_initialized = true;
            images_gimmickbreakoutwallright_3036_0_0[0] = get_internal_image(3223);
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
FrameObject * create_gimmickbreakoutwallright_3036(int x, int y)
{
    return new (Active::pool.create()) GimmickBreakoutWallRight_3036(x, y);
}
static Image* images_gimmickbreakoutplatform_3037_0_0[1];
static Direction direction_gimmickbreakoutplatform_3037_0_0 = {0, 50, 50, 0, 1, images_gimmickbreakoutplatform_3037_0_0, 1};
static Animation anim_gimmickbreakoutplatform_3037_0 = {&direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, NULL, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0, &direction_gimmickbreakoutplatform_3037_0_0};
static Image* images_gimmickbreakoutplatform_3037_7_0[7];
static Direction direction_gimmickbreakoutplatform_3037_7_0 = {0, 25, 25, 0, 1, images_gimmickbreakoutplatform_3037_7_0, 7};
static Animation anim_gimmickbreakoutplatform_3037_7 = {&direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, NULL, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0, &direction_gimmickbreakoutplatform_3037_7_0};
static Animation * anim_array_gimmickbreakoutplatform_3037[8] = {&anim_gimmickbreakoutplatform_3037_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickbreakoutplatform_3037_7};
static Animations anim_gimmickbreakoutplatform_3037 = {8, &anim_array_gimmickbreakoutplatform_3037[0]};
static bool anim_gimmickbreakoutplatform_3037_initialized;
class GimmickBreakoutPlatform_3037 : public Active
{
public:
    GimmickBreakoutPlatform_3037(int x, int y) : Active(x, y, GimmickBreakoutPlatform_3037_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_BreakoutPlatform", 24);
#endif
        this->animations = &anim_gimmickbreakoutplatform_3037;
        if (!anim_gimmickbreakoutplatform_3037_initialized) {
            anim_gimmickbreakoutplatform_3037_initialized = true;
            images_gimmickbreakoutplatform_3037_0_0[0] = get_internal_image(12819);
            images_gimmickbreakoutplatform_3037_7_0[0] = get_internal_image(12874);
            images_gimmickbreakoutplatform_3037_7_0[1] = get_internal_image(12874);
            images_gimmickbreakoutplatform_3037_7_0[2] = get_internal_image(12878);
            images_gimmickbreakoutplatform_3037_7_0[3] = get_internal_image(12877);
            images_gimmickbreakoutplatform_3037_7_0[4] = get_internal_image(12876);
            images_gimmickbreakoutplatform_3037_7_0[5] = get_internal_image(12875);
            images_gimmickbreakoutplatform_3037_7_0[6] = get_internal_image(12819);
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
FrameObject * create_gimmickbreakoutplatform_3037(int x, int y)
{
    return new (Active::pool.create()) GimmickBreakoutPlatform_3037(x, y);
}
static Image* images_gimmickbreakoutplatformmask_3038_0_0[1];
static Direction direction_gimmickbreakoutplatformmask_3038_0_0 = {0, 50, 50, 0, 1, images_gimmickbreakoutplatformmask_3038_0_0, 1};
static Animation anim_gimmickbreakoutplatformmask_3038_0 = {&direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, NULL, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0, &direction_gimmickbreakoutplatformmask_3038_0_0};
static Animation * anim_array_gimmickbreakoutplatformmask_3038[1] = {&anim_gimmickbreakoutplatformmask_3038_0};
static Animations anim_gimmickbreakoutplatformmask_3038 = {1, &anim_array_gimmickbreakoutplatformmask_3038[0]};
static bool anim_gimmickbreakoutplatformmask_3038_initialized;
class GimmickBreakoutPlatformMask_3038 : public Active
{
public:
    GimmickBreakoutPlatformMask_3038(int x, int y) : Active(x, y, GimmickBreakoutPlatformMask_3038_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BreakoutPlatformMask", 28);
#endif
        this->animations = &anim_gimmickbreakoutplatformmask_3038;
        if (!anim_gimmickbreakoutplatformmask_3038_initialized) {
            anim_gimmickbreakoutplatformmask_3038_initialized = true;
            images_gimmickbreakoutplatformmask_3038_0_0[0] = get_internal_image(12862);
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
FrameObject * create_gimmickbreakoutplatformmask_3038(int x, int y)
{
    return new (Active::pool.create()) GimmickBreakoutPlatformMask_3038(x, y);
}
static Image* images_gimmickbreakoutball_3039_0_0[1];
static Direction direction_gimmickbreakoutball_3039_0_0 = {0, 50, 50, 0, 1, images_gimmickbreakoutball_3039_0_0, 1};
static Image* images_gimmickbreakoutball_3039_0_1[1];
static Direction direction_gimmickbreakoutball_3039_0_1 = {1, 50, 50, 0, 1, images_gimmickbreakoutball_3039_0_1, 1};
static Image* images_gimmickbreakoutball_3039_0_2[1];
static Direction direction_gimmickbreakoutball_3039_0_2 = {2, 50, 50, 0, 1, images_gimmickbreakoutball_3039_0_2, 1};
static Animation anim_gimmickbreakoutball_3039_0 = {&direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_1, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, &direction_gimmickbreakoutball_3039_0_2, NULL, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0, &direction_gimmickbreakoutball_3039_0_0};
static Image* images_gimmickbreakoutball_3039_7_0[7];
static Direction direction_gimmickbreakoutball_3039_7_0 = {0, 25, 25, 0, 1, images_gimmickbreakoutball_3039_7_0, 7};
static Animation anim_gimmickbreakoutball_3039_7 = {&direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, NULL, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0, &direction_gimmickbreakoutball_3039_7_0};
static Animation * anim_array_gimmickbreakoutball_3039[8] = {&anim_gimmickbreakoutball_3039_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickbreakoutball_3039_7};
static Animations anim_gimmickbreakoutball_3039 = {8, &anim_array_gimmickbreakoutball_3039[0]};
static bool anim_gimmickbreakoutball_3039_initialized;
class GimmickBreakoutBall_3039 : public Active
{
public:
    GimmickBreakoutBall_3039(int x, int y) : Active(x, y, GimmickBreakoutBall_3039_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BreakoutBall", 20);
#endif
        this->animations = &anim_gimmickbreakoutball_3039;
        if (!anim_gimmickbreakoutball_3039_initialized) {
            anim_gimmickbreakoutball_3039_initialized = true;
            images_gimmickbreakoutball_3039_0_0[0] = get_internal_image(12865);
            images_gimmickbreakoutball_3039_0_1[0] = get_internal_image(12857);
            images_gimmickbreakoutball_3039_0_2[0] = get_internal_image(12923);
            images_gimmickbreakoutball_3039_7_0[0] = get_internal_image(12881);
            images_gimmickbreakoutball_3039_7_0[1] = get_internal_image(12881);
            images_gimmickbreakoutball_3039_7_0[2] = get_internal_image(12885);
            images_gimmickbreakoutball_3039_7_0[3] = get_internal_image(12884);
            images_gimmickbreakoutball_3039_7_0[4] = get_internal_image(12883);
            images_gimmickbreakoutball_3039_7_0[5] = get_internal_image(12882);
            images_gimmickbreakoutball_3039_7_0[6] = get_internal_image(12865);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, -2);
        alterables->values.set(1, 2);
    }
};
FrameObject * create_gimmickbreakoutball_3039(int x, int y)
{
    return new (Active::pool.create()) GimmickBreakoutBall_3039(x, y);
}
static Image* images_gimmickbreakoutwallleft_3040_0_0[1];
static Direction direction_gimmickbreakoutwallleft_3040_0_0 = {0, 50, 50, 0, 1, images_gimmickbreakoutwallleft_3040_0_0, 1};
static Animation anim_gimmickbreakoutwallleft_3040_0 = {&direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, NULL, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0, &direction_gimmickbreakoutwallleft_3040_0_0};
static Animation * anim_array_gimmickbreakoutwallleft_3040[1] = {&anim_gimmickbreakoutwallleft_3040_0};
static Animations anim_gimmickbreakoutwallleft_3040 = {1, &anim_array_gimmickbreakoutwallleft_3040[0]};
static bool anim_gimmickbreakoutwallleft_3040_initialized;
class GimmickBreakoutWallLeft_3040 : public Active
{
public:
    GimmickBreakoutWallLeft_3040(int x, int y) : Active(x, y, GimmickBreakoutWallLeft_3040_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BreakoutWallLeft", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickbreakoutwallleft_3040;
        if (!anim_gimmickbreakoutwallleft_3040_initialized) {
            anim_gimmickbreakoutwallleft_3040_initialized = true;
            images_gimmickbreakoutwallleft_3040_0_0[0] = get_internal_image(12873);
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
FrameObject * create_gimmickbreakoutwallleft_3040(int x, int y)
{
    return new (Active::pool.create()) GimmickBreakoutWallLeft_3040(x, y);
}
static Image* images_hazardgiantswordmask_3041_0_0[1];
static Direction direction_hazardgiantswordmask_3041_0_0 = {0, 50, 50, 0, 1, images_hazardgiantswordmask_3041_0_0, 1};
static Animation anim_hazardgiantswordmask_3041_0 = {&direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, NULL, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0, &direction_hazardgiantswordmask_3041_0_0};
static Image* images_hazardgiantswordmask_3041_7_0[9];
static Direction direction_hazardgiantswordmask_3041_7_0 = {0, 50, 50, 7, -1, images_hazardgiantswordmask_3041_7_0, 9};
static Animation anim_hazardgiantswordmask_3041_7 = {&direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, NULL, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0, &direction_hazardgiantswordmask_3041_7_0};
static Animation * anim_array_hazardgiantswordmask_3041[8] = {&anim_hazardgiantswordmask_3041_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_hazardgiantswordmask_3041_7};
static Animations anim_hazardgiantswordmask_3041 = {8, &anim_array_hazardgiantswordmask_3041[0]};
static bool anim_hazardgiantswordmask_3041_initialized;
class HazardGiantSwordMask_3041 : public Active
{
public:
    HazardGiantSwordMask_3041(int x, int y) : Active(x, y, HazardGiantSwordMask_3041_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_GiantSwordMask", 21);
#endif
        this->animations = &anim_hazardgiantswordmask_3041;
        if (!anim_hazardgiantswordmask_3041_initialized) {
            anim_hazardgiantswordmask_3041_initialized = true;
            images_hazardgiantswordmask_3041_0_0[0] = get_internal_image(12839);
            images_hazardgiantswordmask_3041_7_0[0] = get_internal_image(12937);
            images_hazardgiantswordmask_3041_7_0[1] = get_internal_image(12892);
            images_hazardgiantswordmask_3041_7_0[2] = get_internal_image(12893);
            images_hazardgiantswordmask_3041_7_0[3] = get_internal_image(12895);
            images_hazardgiantswordmask_3041_7_0[4] = get_internal_image(12896);
            images_hazardgiantswordmask_3041_7_0[5] = get_internal_image(12897);
            images_hazardgiantswordmask_3041_7_0[6] = get_internal_image(12898);
            images_hazardgiantswordmask_3041_7_0[7] = get_internal_image(12899);
            images_hazardgiantswordmask_3041_7_0[8] = get_internal_image(12934);
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
FrameObject * create_hazardgiantswordmask_3041(int x, int y)
{
    return new (Active::pool.create()) HazardGiantSwordMask_3041(x, y);
}
class PLCaveBrick13_3042 : public Backdrop
{
public:
    PLCaveBrick13_3042(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 13", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12659);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick13_3042(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick13_3042(x, y);
}
static Image* images_hazardgiantsword_3043_0_0[1];
static Direction direction_hazardgiantsword_3043_0_0 = {0, 50, 50, 0, 1, images_hazardgiantsword_3043_0_0, 1};
static Animation anim_hazardgiantsword_3043_0 = {&direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, NULL, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0, &direction_hazardgiantsword_3043_0_0};
static Animation * anim_array_hazardgiantsword_3043[1] = {&anim_hazardgiantsword_3043_0};
static Animations anim_hazardgiantsword_3043 = {1, &anim_array_hazardgiantsword_3043[0]};
static bool anim_hazardgiantsword_3043_initialized;
class HazardGiantSword_3043 : public Active
{
public:
    HazardGiantSword_3043(int x, int y) : Active(x, y, HazardGiantSword_3043_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Hazard_GiantSword", 17);
#endif
        set_visible(false);
        this->animations = &anim_hazardgiantsword_3043;
        if (!anim_hazardgiantsword_3043_initialized) {
            anim_hazardgiantsword_3043_initialized = true;
            images_hazardgiantsword_3043_0_0[0] = get_internal_image(12666);
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
FrameObject * create_hazardgiantsword_3043(int x, int y)
{
    return new (Active::pool.create()) HazardGiantSword_3043(x, y);
}
class LevelParallaxPiece0_3044 : public SystemBox
{
public:
    LevelParallaxPiece0_3044(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3044_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(12973);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3044(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3044(x, y);
}
static Image* images_bossholodragonlaser_3045_0_0[1];
static Direction direction_bossholodragonlaser_3045_0_0 = {0, 50, 50, 0, 1, images_bossholodragonlaser_3045_0_0, 1};
static Image* images_bossholodragonlaser_3045_0_1[1];
static Direction direction_bossholodragonlaser_3045_0_1 = {1, 50, 50, 0, 1, images_bossholodragonlaser_3045_0_1, 1};
static Animation anim_bossholodragonlaser_3045_0 = {&direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_1, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0, &direction_bossholodragonlaser_3045_0_0};
static Image* images_bossholodragonlaser_3045_7_8[2];
static Direction direction_bossholodragonlaser_3045_7_8 = {8, 100, 100, 0, -1, images_bossholodragonlaser_3045_7_8, 2};
static Animation anim_bossholodragonlaser_3045_7 = {&direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, NULL, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8, &direction_bossholodragonlaser_3045_7_8};
static Animation * anim_array_bossholodragonlaser_3045[8] = {&anim_bossholodragonlaser_3045_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossholodragonlaser_3045_7};
static Animations anim_bossholodragonlaser_3045 = {8, &anim_array_bossholodragonlaser_3045[0]};
static bool anim_bossholodragonlaser_3045_initialized;
class BossHolodragonLaser_3045 : public Active
{
public:
    BossHolodragonLaser_3045(int x, int y) : Active(x, y, BossHolodragonLaser_3045_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HolodragonLaser", 20);
#endif
        this->animations = &anim_bossholodragonlaser_3045;
        if (!anim_bossholodragonlaser_3045_initialized) {
            anim_bossholodragonlaser_3045_initialized = true;
            images_bossholodragonlaser_3045_0_0[0] = get_internal_image(13010);
            images_bossholodragonlaser_3045_0_1[0] = get_internal_image(13009);
            images_bossholodragonlaser_3045_7_8[0] = get_internal_image(12954);
            images_bossholodragonlaser_3045_7_8[1] = get_internal_image(12955);
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
FrameObject * create_bossholodragonlaser_3045(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonLaser_3045(x, y);
}
static Image* images_bossholodragonflame_3046_0_0[8];
static Direction direction_bossholodragonflame_3046_0_0 = {0, 40, 40, 0, -1, images_bossholodragonflame_3046_0_0, 8};
static Animation anim_bossholodragonflame_3046_0 = {&direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, NULL, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0, &direction_bossholodragonflame_3046_0_0};
static Image* images_bossholodragonflame_3046_5_0[8];
static Direction direction_bossholodragonflame_3046_5_0 = {0, 25, 25, 0, -1, images_bossholodragonflame_3046_5_0, 8};
static Animation anim_bossholodragonflame_3046_5 = {&direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, NULL, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0, &direction_bossholodragonflame_3046_5_0};
static Animation * anim_array_bossholodragonflame_3046[6] = {&anim_bossholodragonflame_3046_0, NULL, NULL, NULL, NULL, &anim_bossholodragonflame_3046_5};
static Animations anim_bossholodragonflame_3046 = {6, &anim_array_bossholodragonflame_3046[0]};
static bool anim_bossholodragonflame_3046_initialized;
class BossHolodragonFlame_3046 : public Active
{
public:
    BossHolodragonFlame_3046(int x, int y) : Active(x, y, BossHolodragonFlame_3046_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HolodragonFlame", 20);
#endif
        this->animations = &anim_bossholodragonflame_3046;
        if (!anim_bossholodragonflame_3046_initialized) {
            anim_bossholodragonflame_3046_initialized = true;
            images_bossholodragonflame_3046_0_0[0] = get_internal_image(12842);
            images_bossholodragonflame_3046_0_0[1] = get_internal_image(12974);
            images_bossholodragonflame_3046_0_0[2] = get_internal_image(13003);
            images_bossholodragonflame_3046_0_0[3] = get_internal_image(13004);
            images_bossholodragonflame_3046_0_0[4] = get_internal_image(13005);
            images_bossholodragonflame_3046_0_0[5] = get_internal_image(13006);
            images_bossholodragonflame_3046_0_0[6] = get_internal_image(13007);
            images_bossholodragonflame_3046_0_0[7] = get_internal_image(13008);
            images_bossholodragonflame_3046_5_0[0] = get_internal_image(12992);
            images_bossholodragonflame_3046_5_0[1] = get_internal_image(12993);
            images_bossholodragonflame_3046_5_0[2] = get_internal_image(12994);
            images_bossholodragonflame_3046_5_0[3] = get_internal_image(12995);
            images_bossholodragonflame_3046_5_0[4] = get_internal_image(12996);
            images_bossholodragonflame_3046_5_0[5] = get_internal_image(12997);
            images_bossholodragonflame_3046_5_0[6] = get_internal_image(12998);
            images_bossholodragonflame_3046_5_0[7] = get_internal_image(12999);
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
        movement->start();
        create_alterables();
        alterables->values.set(3, 255);
    }
};
FrameObject * create_bossholodragonflame_3046(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonFlame_3046(x, y);
}
static Image* images_effectplasmaburst_3047_4_0[13];
static Direction direction_effectplasmaburst_3047_4_0 = {0, 40, 40, 0, 1, images_effectplasmaburst_3047_4_0, 13};
static Animation anim_effectplasmaburst_3047_4 = {&direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, NULL, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0, &direction_effectplasmaburst_3047_4_0};
static Animation * anim_array_effectplasmaburst_3047[5] = {NULL, NULL, NULL, NULL, &anim_effectplasmaburst_3047_4};
static Animations anim_effectplasmaburst_3047 = {5, &anim_array_effectplasmaburst_3047[0]};
static bool anim_effectplasmaburst_3047_initialized;
class EffectPlasmaBurst_3047 : public Active
{
public:
    EffectPlasmaBurst_3047(int x, int y) : Active(x, y, EffectPlasmaBurst_3047_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_PlasmaBurst", 18);
#endif
        this->animations = &anim_effectplasmaburst_3047;
        if (!anim_effectplasmaburst_3047_initialized) {
            anim_effectplasmaburst_3047_initialized = true;
            images_effectplasmaburst_3047_4_0[0] = get_internal_image(12981);
            images_effectplasmaburst_3047_4_0[1] = get_internal_image(12981);
            images_effectplasmaburst_3047_4_0[2] = get_internal_image(12982);
            images_effectplasmaburst_3047_4_0[3] = get_internal_image(12983);
            images_effectplasmaburst_3047_4_0[4] = get_internal_image(12984);
            images_effectplasmaburst_3047_4_0[5] = get_internal_image(12985);
            images_effectplasmaburst_3047_4_0[6] = get_internal_image(12986);
            images_effectplasmaburst_3047_4_0[7] = get_internal_image(12987);
            images_effectplasmaburst_3047_4_0[8] = get_internal_image(12988);
            images_effectplasmaburst_3047_4_0[9] = get_internal_image(12989);
            images_effectplasmaburst_3047_4_0[10] = get_internal_image(12990);
            images_effectplasmaburst_3047_4_0[11] = get_internal_image(12991);
            images_effectplasmaburst_3047_4_0[12] = get_internal_image(12991);
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
FrameObject * create_effectplasmaburst_3047(int x, int y)
{
    return new (Active::pool.create()) EffectPlasmaBurst_3047(x, y);
}
static Image* images_bossholodragonbreath_3048_0_0[5];
static Direction direction_bossholodragonbreath_3048_0_0 = {0, 50, 50, 0, -1, images_bossholodragonbreath_3048_0_0, 5};
static Image* images_bossholodragonbreath_3048_0_1[5];
static Direction direction_bossholodragonbreath_3048_0_1 = {1, 50, 50, 0, -1, images_bossholodragonbreath_3048_0_1, 5};
static Animation anim_bossholodragonbreath_3048_0 = {&direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_1, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0, &direction_bossholodragonbreath_3048_0_0};
static Animation * anim_array_bossholodragonbreath_3048[1] = {&anim_bossholodragonbreath_3048_0};
static Animations anim_bossholodragonbreath_3048 = {1, &anim_array_bossholodragonbreath_3048[0]};
static bool anim_bossholodragonbreath_3048_initialized;
class BossHolodragonBreath_3048 : public Active
{
public:
    BossHolodragonBreath_3048(int x, int y) : Active(x, y, BossHolodragonBreath_3048_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonBreath", 21);
#endif
        set_visible(false);
        this->animations = &anim_bossholodragonbreath_3048;
        if (!anim_bossholodragonbreath_3048_initialized) {
            anim_bossholodragonbreath_3048_initialized = true;
            images_bossholodragonbreath_3048_0_0[0] = get_internal_image(12866);
            images_bossholodragonbreath_3048_0_0[1] = get_internal_image(12867);
            images_bossholodragonbreath_3048_0_0[2] = get_internal_image(12868);
            images_bossholodragonbreath_3048_0_0[3] = get_internal_image(12867);
            images_bossholodragonbreath_3048_0_0[4] = get_internal_image(12889);
            images_bossholodragonbreath_3048_0_1[0] = get_internal_image(12950);
            images_bossholodragonbreath_3048_0_1[1] = get_internal_image(12951);
            images_bossholodragonbreath_3048_0_1[2] = get_internal_image(12952);
            images_bossholodragonbreath_3048_0_1[3] = get_internal_image(12951);
            images_bossholodragonbreath_3048_0_1[4] = get_internal_image(12953);
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
FrameObject * create_bossholodragonbreath_3048(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonBreath_3048(x, y);
}
static Image* images_bossholodragontoptooth_3049_0_0[1];
static Direction direction_bossholodragontoptooth_3049_0_0 = {0, 50, 50, 0, 1, images_bossholodragontoptooth_3049_0_0, 1};
static Image* images_bossholodragontoptooth_3049_0_1[1];
static Direction direction_bossholodragontoptooth_3049_0_1 = {1, 50, 50, 0, 1, images_bossholodragontoptooth_3049_0_1, 1};
static Animation anim_bossholodragontoptooth_3049_0 = {&direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_1, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0, &direction_bossholodragontoptooth_3049_0_0};
static Animation * anim_array_bossholodragontoptooth_3049[1] = {&anim_bossholodragontoptooth_3049_0};
static Animations anim_bossholodragontoptooth_3049 = {1, &anim_array_bossholodragontoptooth_3049[0]};
static bool anim_bossholodragontoptooth_3049_initialized;
class BossHolodragonTopTooth_3049 : public Active
{
public:
    BossHolodragonTopTooth_3049(int x, int y) : Active(x, y, BossHolodragonTopTooth_3049_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonTopTooth", 23);
#endif
        this->animations = &anim_bossholodragontoptooth_3049;
        if (!anim_bossholodragontoptooth_3049_initialized) {
            anim_bossholodragontoptooth_3049_initialized = true;
            images_bossholodragontoptooth_3049_0_0[0] = get_internal_image(12959);
            images_bossholodragontoptooth_3049_0_1[0] = get_internal_image(12960);
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
FrameObject * create_bossholodragontoptooth_3049(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonTopTooth_3049(x, y);
}
static Image* images_bossholodragonbottomtooth_3050_0_0[1];
static Direction direction_bossholodragonbottomtooth_3050_0_0 = {0, 50, 50, 0, 1, images_bossholodragonbottomtooth_3050_0_0, 1};
static Image* images_bossholodragonbottomtooth_3050_0_1[1];
static Direction direction_bossholodragonbottomtooth_3050_0_1 = {1, 50, 50, 0, 1, images_bossholodragonbottomtooth_3050_0_1, 1};
static Animation anim_bossholodragonbottomtooth_3050_0 = {&direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_1, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0, &direction_bossholodragonbottomtooth_3050_0_0};
static Animation * anim_array_bossholodragonbottomtooth_3050[1] = {&anim_bossholodragonbottomtooth_3050_0};
static Animations anim_bossholodragonbottomtooth_3050 = {1, &anim_array_bossholodragonbottomtooth_3050[0]};
static bool anim_bossholodragonbottomtooth_3050_initialized;
class BossHolodragonBottomTooth_3050 : public Active
{
public:
    BossHolodragonBottomTooth_3050(int x, int y) : Active(x, y, BossHolodragonBottomTooth_3050_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonBottomTooth", 26);
#endif
        this->animations = &anim_bossholodragonbottomtooth_3050;
        if (!anim_bossholodragonbottomtooth_3050_initialized) {
            anim_bossholodragonbottomtooth_3050_initialized = true;
            images_bossholodragonbottomtooth_3050_0_0[0] = get_internal_image(12961);
            images_bossholodragonbottomtooth_3050_0_1[0] = get_internal_image(12962);
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
FrameObject * create_bossholodragonbottomtooth_3050(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonBottomTooth_3050(x, y);
}
static Image* images_bossholodragonscale_3051_0_0[1];
static Direction direction_bossholodragonscale_3051_0_0 = {0, 50, 50, 0, 1, images_bossholodragonscale_3051_0_0, 1};
static Image* images_bossholodragonscale_3051_0_1[1];
static Direction direction_bossholodragonscale_3051_0_1 = {1, 50, 50, 0, 1, images_bossholodragonscale_3051_0_1, 1};
static Animation anim_bossholodragonscale_3051_0 = {&direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_1, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0, &direction_bossholodragonscale_3051_0_0};
static Animation * anim_array_bossholodragonscale_3051[1] = {&anim_bossholodragonscale_3051_0};
static Animations anim_bossholodragonscale_3051 = {1, &anim_array_bossholodragonscale_3051[0]};
static bool anim_bossholodragonscale_3051_initialized;
class BossHolodragonScale_3051 : public Active
{
public:
    BossHolodragonScale_3051(int x, int y) : Active(x, y, BossHolodragonScale_3051_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonScale", 20);
#endif
        this->animations = &anim_bossholodragonscale_3051;
        if (!anim_bossholodragonscale_3051_initialized) {
            anim_bossholodragonscale_3051_initialized = true;
            images_bossholodragonscale_3051_0_0[0] = get_internal_image(12963);
            images_bossholodragonscale_3051_0_1[0] = get_internal_image(12964);
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
FrameObject * create_bossholodragonscale_3051(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonScale_3051(x, y);
}
static Image* images_bossholodragonscale2_3052_0_0[1];
static Direction direction_bossholodragonscale2_3052_0_0 = {0, 50, 50, 0, 1, images_bossholodragonscale2_3052_0_0, 1};
static Image* images_bossholodragonscale2_3052_0_8[1];
static Direction direction_bossholodragonscale2_3052_0_8 = {8, 50, 50, 0, 1, images_bossholodragonscale2_3052_0_8, 1};
static Animation anim_bossholodragonscale2_3052_0 = {&direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, NULL, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, &direction_bossholodragonscale2_3052_0_8, NULL, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0, &direction_bossholodragonscale2_3052_0_0};
static Animation * anim_array_bossholodragonscale2_3052[1] = {&anim_bossholodragonscale2_3052_0};
static Animations anim_bossholodragonscale2_3052 = {1, &anim_array_bossholodragonscale2_3052[0]};
static bool anim_bossholodragonscale2_3052_initialized;
class BossHolodragonScale2_3052 : public Active
{
public:
    BossHolodragonScale2_3052(int x, int y) : Active(x, y, BossHolodragonScale2_3052_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonScale 2", 22);
#endif
        this->animations = &anim_bossholodragonscale2_3052;
        if (!anim_bossholodragonscale2_3052_initialized) {
            anim_bossholodragonscale2_3052_initialized = true;
            images_bossholodragonscale2_3052_0_0[0] = get_internal_image(12965);
            images_bossholodragonscale2_3052_0_8[0] = get_internal_image(12966);
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
FrameObject * create_bossholodragonscale2_3052(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonScale2_3052(x, y);
}
static Image* images_bossholodragonscale3_3053_0_0[1];
static Direction direction_bossholodragonscale3_3053_0_0 = {0, 0, 0, 0, 1, images_bossholodragonscale3_3053_0_0, 1};
static Image* images_bossholodragonscale3_3053_0_8[1];
static Direction direction_bossholodragonscale3_3053_0_8 = {8, 50, 50, 0, 1, images_bossholodragonscale3_3053_0_8, 1};
static Animation anim_bossholodragonscale3_3053_0 = {&direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, NULL, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, &direction_bossholodragonscale3_3053_0_8, NULL, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0, &direction_bossholodragonscale3_3053_0_0};
static Animation * anim_array_bossholodragonscale3_3053[1] = {&anim_bossholodragonscale3_3053_0};
static Animations anim_bossholodragonscale3_3053 = {1, &anim_array_bossholodragonscale3_3053[0]};
static bool anim_bossholodragonscale3_3053_initialized;
class BossHolodragonScale3_3053 : public Active
{
public:
    BossHolodragonScale3_3053(int x, int y) : Active(x, y, BossHolodragonScale3_3053_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonScale 3", 22);
#endif
        this->animations = &anim_bossholodragonscale3_3053;
        if (!anim_bossholodragonscale3_3053_initialized) {
            anim_bossholodragonscale3_3053_initialized = true;
            images_bossholodragonscale3_3053_0_0[0] = get_internal_image(12967);
            images_bossholodragonscale3_3053_0_8[0] = get_internal_image(12968);
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
FrameObject * create_bossholodragonscale3_3053(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonScale3_3053(x, y);
}
static Image* images_bossholodragonscale4_3054_0_0[1];
static Direction direction_bossholodragonscale4_3054_0_0 = {0, 0, 0, 0, -1, images_bossholodragonscale4_3054_0_0, 1};
static Image* images_bossholodragonscale4_3054_0_8[2];
static Direction direction_bossholodragonscale4_3054_0_8 = {8, 50, 50, 0, 1, images_bossholodragonscale4_3054_0_8, 2};
static Animation anim_bossholodragonscale4_3054_0 = {&direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, NULL, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, &direction_bossholodragonscale4_3054_0_8, NULL, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0, &direction_bossholodragonscale4_3054_0_0};
static Animation * anim_array_bossholodragonscale4_3054[1] = {&anim_bossholodragonscale4_3054_0};
static Animations anim_bossholodragonscale4_3054 = {1, &anim_array_bossholodragonscale4_3054[0]};
static bool anim_bossholodragonscale4_3054_initialized;
class BossHolodragonScale4_3054 : public Active
{
public:
    BossHolodragonScale4_3054(int x, int y) : Active(x, y, BossHolodragonScale4_3054_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonScale 4", 22);
#endif
        this->animations = &anim_bossholodragonscale4_3054;
        if (!anim_bossholodragonscale4_3054_initialized) {
            anim_bossholodragonscale4_3054_initialized = true;
            images_bossholodragonscale4_3054_0_0[0] = get_internal_image(12969);
            images_bossholodragonscale4_3054_0_8[0] = get_internal_image(12970);
            images_bossholodragonscale4_3054_0_8[1] = get_internal_image(12971);
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
FrameObject * create_bossholodragonscale4_3054(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonScale4_3054(x, y);
}
static Image* images_bossholodragoneye_3055_0_0[1];
static Direction direction_bossholodragoneye_3055_0_0 = {0, 50, 50, 0, 1, images_bossholodragoneye_3055_0_0, 1};
static Image* images_bossholodragoneye_3055_0_1[1];
static Direction direction_bossholodragoneye_3055_0_1 = {1, 50, 50, 0, 1, images_bossholodragoneye_3055_0_1, 1};
static Animation anim_bossholodragoneye_3055_0 = {&direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_1, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0, &direction_bossholodragoneye_3055_0_0};
static Animation * anim_array_bossholodragoneye_3055[1] = {&anim_bossholodragoneye_3055_0};
static Animations anim_bossholodragoneye_3055 = {1, &anim_array_bossholodragoneye_3055[0]};
static bool anim_bossholodragoneye_3055_initialized;
class BossHolodragonEye_3055 : public Active
{
public:
    BossHolodragonEye_3055(int x, int y) : Active(x, y, BossHolodragonEye_3055_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonEye", 18);
#endif
        this->animations = &anim_bossholodragoneye_3055;
        if (!anim_bossholodragoneye_3055_initialized) {
            anim_bossholodragoneye_3055_initialized = true;
            images_bossholodragoneye_3055_0_0[0] = get_internal_image(12975);
            images_bossholodragoneye_3055_0_1[0] = get_internal_image(12976);
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
FrameObject * create_bossholodragoneye_3055(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonEye_3055(x, y);
}
static Image* images_bossholodragonpupil_3056_0_0[1];
static Direction direction_bossholodragonpupil_3056_0_0 = {0, 50, 50, 0, 1, images_bossholodragonpupil_3056_0_0, 1};
static Image* images_bossholodragonpupil_3056_0_1[1];
static Direction direction_bossholodragonpupil_3056_0_1 = {1, 50, 50, 0, 1, images_bossholodragonpupil_3056_0_1, 1};
static Animation anim_bossholodragonpupil_3056_0 = {&direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_1, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0, &direction_bossholodragonpupil_3056_0_0};
static Animation * anim_array_bossholodragonpupil_3056[1] = {&anim_bossholodragonpupil_3056_0};
static Animations anim_bossholodragonpupil_3056 = {1, &anim_array_bossholodragonpupil_3056[0]};
static bool anim_bossholodragonpupil_3056_initialized;
class BossHolodragonPupil_3056 : public Active
{
public:
    BossHolodragonPupil_3056(int x, int y) : Active(x, y, BossHolodragonPupil_3056_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonPupil", 20);
#endif
        this->animations = &anim_bossholodragonpupil_3056;
        if (!anim_bossholodragonpupil_3056_initialized) {
            anim_bossholodragonpupil_3056_initialized = true;
            images_bossholodragonpupil_3056_0_0[0] = get_internal_image(226);
            images_bossholodragonpupil_3056_0_1[0] = get_internal_image(273);
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
FrameObject * create_bossholodragonpupil_3056(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonPupil_3056(x, y);
}
static Image* images_bossholodragonneck_3057_0_0[1];
static Direction direction_bossholodragonneck_3057_0_0 = {0, 50, 50, 0, 1, images_bossholodragonneck_3057_0_0, 1};
static Animation anim_bossholodragonneck_3057_0 = {&direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, NULL, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0, &direction_bossholodragonneck_3057_0_0};
static Animation * anim_array_bossholodragonneck_3057[1] = {&anim_bossholodragonneck_3057_0};
static Animations anim_bossholodragonneck_3057 = {1, &anim_array_bossholodragonneck_3057[0]};
static bool anim_bossholodragonneck_3057_initialized;
class BossHolodragonNeck_3057 : public Active
{
public:
    BossHolodragonNeck_3057(int x, int y) : Active(x, y, BossHolodragonNeck_3057_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_HolodragonNeck", 19);
#endif
        set_visible(false);
        this->animations = &anim_bossholodragonneck_3057;
        if (!anim_bossholodragonneck_3057_initialized) {
            anim_bossholodragonneck_3057_initialized = true;
            images_bossholodragonneck_3057_0_0[0] = get_internal_image(12972);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 20);
        alterables->values.set(6, 2);
        alterables->values.set(9, -1);
        alterables->values.set(10, -2);
        alterables->values.set(11, 255);
        alterables->values.set(12, -360);
        alterables->values.set(13, 1);
    }
};
FrameObject * create_bossholodragonneck_3057(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonNeck_3057(x, y);
}
static Image* images_bossholodragonear_3058_0_0[1];
static Direction direction_bossholodragonear_3058_0_0 = {0, 50, 50, 0, 1, images_bossholodragonear_3058_0_0, 1};
static Image* images_bossholodragonear_3058_0_1[1];
static Direction direction_bossholodragonear_3058_0_1 = {1, 50, 50, 0, 1, images_bossholodragonear_3058_0_1, 1};
static Animation anim_bossholodragonear_3058_0 = {&direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_1, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0, &direction_bossholodragonear_3058_0_0};
static Animation * anim_array_bossholodragonear_3058[1] = {&anim_bossholodragonear_3058_0};
static Animations anim_bossholodragonear_3058 = {1, &anim_array_bossholodragonear_3058[0]};
static bool anim_bossholodragonear_3058_initialized;
class BossHolodragonEar_3058 : public Active
{
public:
    BossHolodragonEar_3058(int x, int y) : Active(x, y, BossHolodragonEar_3058_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonEar", 18);
#endif
        this->animations = &anim_bossholodragonear_3058;
        if (!anim_bossholodragonear_3058_initialized) {
            anim_bossholodragonear_3058_initialized = true;
            images_bossholodragonear_3058_0_0[0] = get_internal_image(13001);
            images_bossholodragonear_3058_0_1[0] = get_internal_image(13002);
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
FrameObject * create_bossholodragonear_3058(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonEar_3058(x, y);
}
static Image* images_bossholodragonbrow_3059_0_0[1];
static Direction direction_bossholodragonbrow_3059_0_0 = {0, 50, 50, 0, 1, images_bossholodragonbrow_3059_0_0, 1};
static Image* images_bossholodragonbrow_3059_0_1[1];
static Direction direction_bossholodragonbrow_3059_0_1 = {1, 50, 50, 0, 1, images_bossholodragonbrow_3059_0_1, 1};
static Animation anim_bossholodragonbrow_3059_0 = {&direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_1, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0, &direction_bossholodragonbrow_3059_0_0};
static Animation * anim_array_bossholodragonbrow_3059[1] = {&anim_bossholodragonbrow_3059_0};
static Animations anim_bossholodragonbrow_3059 = {1, &anim_array_bossholodragonbrow_3059[0]};
static bool anim_bossholodragonbrow_3059_initialized;
class BossHolodragonBrow_3059 : public Active
{
public:
    BossHolodragonBrow_3059(int x, int y) : Active(x, y, BossHolodragonBrow_3059_type)
    {
        // qualifiers: 31
#ifndef NDEBUG
        name = std::string("Boss_HolodragonBrow", 19);
#endif
        this->animations = &anim_bossholodragonbrow_3059;
        if (!anim_bossholodragonbrow_3059_initialized) {
            anim_bossholodragonbrow_3059_initialized = true;
            images_bossholodragonbrow_3059_0_0[0] = get_internal_image(12979);
            images_bossholodragonbrow_3059_0_1[0] = get_internal_image(12980);
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
FrameObject * create_bossholodragonbrow_3059(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonBrow_3059(x, y);
}
static Image* images_npchologram1_3060_0_0[1];
static Direction direction_npchologram1_3060_0_0 = {0, 50, 50, 0, 1, images_npchologram1_3060_0_0, 1};
static Image* images_npchologram1_3060_0_1[8];
static Direction direction_npchologram1_3060_0_1 = {1, 0, 0, 0, 1, images_npchologram1_3060_0_1, 8};
static Image* images_npchologram1_3060_0_2[1];
static Direction direction_npchologram1_3060_0_2 = {2, 50, 50, 0, 1, images_npchologram1_3060_0_2, 1};
static Image* images_npchologram1_3060_0_3[2];
static Direction direction_npchologram1_3060_0_3 = {3, 50, 50, 0, 1, images_npchologram1_3060_0_3, 2};
static Image* images_npchologram1_3060_0_4[2];
static Direction direction_npchologram1_3060_0_4 = {4, 50, 50, 0, -1, images_npchologram1_3060_0_4, 2};
static Image* images_npchologram1_3060_0_5[2];
static Direction direction_npchologram1_3060_0_5 = {5, 50, 50, 0, -1, images_npchologram1_3060_0_5, 2};
static Image* images_npchologram1_3060_0_6[2];
static Direction direction_npchologram1_3060_0_6 = {6, 50, 50, 0, -1, images_npchologram1_3060_0_6, 2};
static Animation anim_npchologram1_3060_0 = {&direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_1, &direction_npchologram1_3060_0_2, &direction_npchologram1_3060_0_3, &direction_npchologram1_3060_0_4, &direction_npchologram1_3060_0_5, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, &direction_npchologram1_3060_0_6, NULL, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0, &direction_npchologram1_3060_0_0};
static Animation * anim_array_npchologram1_3060[1] = {&anim_npchologram1_3060_0};
static Animations anim_npchologram1_3060 = {1, &anim_array_npchologram1_3060[0]};
static bool anim_npchologram1_3060_initialized;
class NPCHologram1_3060 : public Active
{
public:
    NPCHologram1_3060(int x, int y) : Active(x, y, NPCHologram1_3060_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Hologram 1", 14);
#endif
        this->animations = &anim_npchologram1_3060;
        if (!anim_npchologram1_3060_initialized) {
            anim_npchologram1_3060_initialized = true;
            images_npchologram1_3060_0_0[0] = get_internal_image(13031);
            images_npchologram1_3060_0_1[0] = get_internal_image(12775);
            images_npchologram1_3060_0_1[1] = get_internal_image(8821);
            images_npchologram1_3060_0_1[2] = get_internal_image(8820);
            images_npchologram1_3060_0_1[3] = get_internal_image(11474);
            images_npchologram1_3060_0_1[4] = get_internal_image(11476);
            images_npchologram1_3060_0_1[5] = get_internal_image(11509);
            images_npchologram1_3060_0_1[6] = get_internal_image(12599);
            images_npchologram1_3060_0_1[7] = get_internal_image(12741);
            images_npchologram1_3060_0_2[0] = get_internal_image(3997);
            images_npchologram1_3060_0_3[0] = get_internal_image(11475);
            images_npchologram1_3060_0_3[1] = get_internal_image(11520);
            images_npchologram1_3060_0_4[0] = get_internal_image(12775);
            images_npchologram1_3060_0_4[1] = get_internal_image(3354);
            images_npchologram1_3060_0_5[0] = get_internal_image(3354);
            images_npchologram1_3060_0_5[1] = get_internal_image(14508);
            images_npchologram1_3060_0_6[0] = get_internal_image(14508);
            images_npchologram1_3060_0_6[1] = get_internal_image(12775);
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
FrameObject * create_npchologram1_3060(int x, int y)
{
    return new (Active::pool.create()) NPCHologram1_3060(x, y);
}
class PLFadeBrick4_3061 : public Backdrop
{
public:
    PLFadeBrick4_3061(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_FadeBrick 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12841);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plfadebrick4_3061(int x, int y)
{
    return new (Backdrop::pool.create()) PLFadeBrick4_3061(x, y);
}
class PLFadeBrick1_3062 : public Backdrop
{
public:
    PLFadeBrick1_3062(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_FadeBrick 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12830);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plfadebrick1_3062(int x, int y)
{
    return new (Backdrop::pool.create()) PLFadeBrick1_3062(x, y);
}
class PLFadeBrick2_3063 : public Backdrop
{
public:
    PLFadeBrick2_3063(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_FadeBrick 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12822);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plfadebrick2_3063(int x, int y)
{
    return new (Backdrop::pool.create()) PLFadeBrick2_3063(x, y);
}
class PLFadeBrick3_3064 : public Backdrop
{
public:
    PLFadeBrick3_3064(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_FadeBrick 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12831);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plfadebrick3_3064(int x, int y)
{
    return new (Backdrop::pool.create()) PLFadeBrick3_3064(x, y);
}
class PLFadeBrick5_3065 : public Backdrop
{
public:
    PLFadeBrick5_3065(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_FadeBrick 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12843);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plfadebrick5_3065(int x, int y)
{
    return new (Backdrop::pool.create()) PLFadeBrick5_3065(x, y);
}
class PLCaveBrick13_3066 : public Backdrop
{
public:
    PLCaveBrick13_3066(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 13", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12858);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick13_3066(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick13_3066(x, y);
}
class PLCaveBrick14_3067 : public Backdrop
{
public:
    PLCaveBrick14_3067(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_CaveBrick 14", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12659);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plcavebrick14_3067(int x, int y)
{
    return new (Backdrop::pool.create()) PLCaveBrick14_3067(x, y);
}
static Image* images_bossholodragonclaw_3068_0_0[1];
static Direction direction_bossholodragonclaw_3068_0_0 = {0, 50, 50, 0, 1, images_bossholodragonclaw_3068_0_0, 1};
static Animation anim_bossholodragonclaw_3068_0 = {&direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, NULL, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0, &direction_bossholodragonclaw_3068_0_0};
static Animation * anim_array_bossholodragonclaw_3068[1] = {&anim_bossholodragonclaw_3068_0};
static Animations anim_bossholodragonclaw_3068 = {1, &anim_array_bossholodragonclaw_3068[0]};
static bool anim_bossholodragonclaw_3068_initialized;
class BossHolodragonClaw_3068 : public Active
{
public:
    BossHolodragonClaw_3068(int x, int y) : Active(x, y, BossHolodragonClaw_3068_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_HolodragonClaw", 19);
#endif
        set_visible(false);
        this->animations = &anim_bossholodragonclaw_3068;
        if (!anim_bossholodragonclaw_3068_initialized) {
            anim_bossholodragonclaw_3068_initialized = true;
            images_bossholodragonclaw_3068_0_0[0] = get_internal_image(13000);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 999);
    }
};
FrameObject * create_bossholodragonclaw_3068(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonClaw_3068(x, y);
}
static Image* images_bossholodragonhitspot1_3069_0_0[1];
static Direction direction_bossholodragonhitspot1_3069_0_0 = {0, 50, 50, 0, 1, images_bossholodragonhitspot1_3069_0_0, 1};
static Animation anim_bossholodragonhitspot1_3069_0 = {&direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, NULL, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0, &direction_bossholodragonhitspot1_3069_0_0};
static Animation * anim_array_bossholodragonhitspot1_3069[1] = {&anim_bossholodragonhitspot1_3069_0};
static Animations anim_bossholodragonhitspot1_3069 = {1, &anim_array_bossholodragonhitspot1_3069[0]};
static bool anim_bossholodragonhitspot1_3069_initialized;
class BossHolodragonHitSpot1_3069 : public Active
{
public:
    BossHolodragonHitSpot1_3069(int x, int y) : Active(x, y, BossHolodragonHitSpot1_3069_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_HolodragonHitSpot 1", 24);
#endif
        this->animations = &anim_bossholodragonhitspot1_3069;
        if (!anim_bossholodragonhitspot1_3069_initialized) {
            anim_bossholodragonhitspot1_3069_initialized = true;
            images_bossholodragonhitspot1_3069_0_0[0] = get_internal_image(13012);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_bossholodragonhitspot1_3069(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonHitSpot1_3069(x, y);
}
static Image* images_bossholodragonhitspot2_3070_0_0[1];
static Direction direction_bossholodragonhitspot2_3070_0_0 = {0, 50, 50, 0, 1, images_bossholodragonhitspot2_3070_0_0, 1};
static Animation anim_bossholodragonhitspot2_3070_0 = {&direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, NULL, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0, &direction_bossholodragonhitspot2_3070_0_0};
static Animation * anim_array_bossholodragonhitspot2_3070[1] = {&anim_bossholodragonhitspot2_3070_0};
static Animations anim_bossholodragonhitspot2_3070 = {1, &anim_array_bossholodragonhitspot2_3070[0]};
static bool anim_bossholodragonhitspot2_3070_initialized;
class BossHolodragonHitSpot2_3070 : public Active
{
public:
    BossHolodragonHitSpot2_3070(int x, int y) : Active(x, y, BossHolodragonHitSpot2_3070_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_HolodragonHitSpot 2", 24);
#endif
        this->animations = &anim_bossholodragonhitspot2_3070;
        if (!anim_bossholodragonhitspot2_3070_initialized) {
            anim_bossholodragonhitspot2_3070_initialized = true;
            images_bossholodragonhitspot2_3070_0_0[0] = get_internal_image(13022);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_bossholodragonhitspot2_3070(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonHitSpot2_3070(x, y);
}
static Image* images_bossholodragonhitspot3_3071_0_0[1];
static Direction direction_bossholodragonhitspot3_3071_0_0 = {0, 50, 50, 0, 1, images_bossholodragonhitspot3_3071_0_0, 1};
static Animation anim_bossholodragonhitspot3_3071_0 = {&direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, NULL, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0, &direction_bossholodragonhitspot3_3071_0_0};
static Animation * anim_array_bossholodragonhitspot3_3071[1] = {&anim_bossholodragonhitspot3_3071_0};
static Animations anim_bossholodragonhitspot3_3071 = {1, &anim_array_bossholodragonhitspot3_3071[0]};
static bool anim_bossholodragonhitspot3_3071_initialized;
class BossHolodragonHitSpot3_3071 : public Active
{
public:
    BossHolodragonHitSpot3_3071(int x, int y) : Active(x, y, BossHolodragonHitSpot3_3071_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_HolodragonHitSpot 3", 24);
#endif
        this->animations = &anim_bossholodragonhitspot3_3071;
        if (!anim_bossholodragonhitspot3_3071_initialized) {
            anim_bossholodragonhitspot3_3071_initialized = true;
            images_bossholodragonhitspot3_3071_0_0[0] = get_internal_image(13023);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_bossholodragonhitspot3_3071(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonHitSpot3_3071(x, y);
}
static Image* images_bossholodragoneye2_3072_0_0[1];
static Direction direction_bossholodragoneye2_3072_0_0 = {0, 50, 50, 0, 1, images_bossholodragoneye2_3072_0_0, 1};
static Image* images_bossholodragoneye2_3072_0_1[1];
static Direction direction_bossholodragoneye2_3072_0_1 = {1, 50, 50, 0, 1, images_bossholodragoneye2_3072_0_1, 1};
static Animation anim_bossholodragoneye2_3072_0 = {&direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_1, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0, &direction_bossholodragoneye2_3072_0_0};
static Animation * anim_array_bossholodragoneye2_3072[1] = {&anim_bossholodragoneye2_3072_0};
static Animations anim_bossholodragoneye2_3072 = {1, &anim_array_bossholodragoneye2_3072[0]};
static bool anim_bossholodragoneye2_3072_initialized;
class BossHolodragonEye2_3072 : public Active
{
public:
    BossHolodragonEye2_3072(int x, int y) : Active(x, y, BossHolodragonEye2_3072_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_HolodragonEye 2", 20);
#endif
        set_visible(false);
        this->animations = &anim_bossholodragoneye2_3072;
        if (!anim_bossholodragoneye2_3072_initialized) {
            anim_bossholodragoneye2_3072_initialized = true;
            images_bossholodragoneye2_3072_0_0[0] = get_internal_image(12957);
            images_bossholodragoneye2_3072_0_1[0] = get_internal_image(13013);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 199);
        create_alterables();
        alterables->values.set(0, 20);
    }
};
FrameObject * create_bossholodragoneye2_3072(int x, int y)
{
    return new (Active::pool.create()) BossHolodragonEye2_3072(x, y);
}
static Image* images_npcpangu_3073_0_0[2];
static Direction direction_npcpangu_3073_0_0 = {0, 10, 10, 0, -1, images_npcpangu_3073_0_0, 2};
static Image* images_npcpangu_3073_0_16[2];
static Direction direction_npcpangu_3073_0_16 = {16, 10, 10, 0, -1, images_npcpangu_3073_0_16, 2};
static Image* images_npcpangu_3073_0_24[2];
static Direction direction_npcpangu_3073_0_24 = {24, 40, 40, 0, -1, images_npcpangu_3073_0_24, 2};
static Animation anim_npcpangu_3073_0 = {&direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, NULL, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, &direction_npcpangu_3073_0_16, NULL, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, &direction_npcpangu_3073_0_24, NULL, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0, &direction_npcpangu_3073_0_0};
static Animation * anim_array_npcpangu_3073[1] = {&anim_npcpangu_3073_0};
static Animations anim_npcpangu_3073 = {1, &anim_array_npcpangu_3073[0]};
static bool anim_npcpangu_3073_initialized;
class NPCPangu_3073 : public Active
{
public:
    NPCPangu_3073(int x, int y) : Active(x, y, NPCPangu_3073_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Pangu", 9);
#endif
        this->animations = &anim_npcpangu_3073;
        if (!anim_npcpangu_3073_initialized) {
            anim_npcpangu_3073_initialized = true;
            images_npcpangu_3073_0_0[0] = get_internal_image(13019);
            images_npcpangu_3073_0_0[1] = get_internal_image(13020);
            images_npcpangu_3073_0_16[0] = get_internal_image(13016);
            images_npcpangu_3073_0_16[1] = get_internal_image(13017);
            images_npcpangu_3073_0_24[0] = get_internal_image(753);
            images_npcpangu_3073_0_24[1] = get_internal_image(752);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 130);
        alterables->values.set(5, 50);
        alterables->values.set(6, 30);
        alterables->values.set(7, 30);
        alterables->values.set(8, 180);
        alterables->values.set(9, 315);
        alterables->values.set(14, -1);
    }
};
FrameObject * create_npcpangu_3073(int x, int y)
{
    return new (Active::pool.create()) NPCPangu_3073(x, y);
}
static Image* images_npchologram2_3074_0_0[2];
static Direction direction_npchologram2_3074_0_0 = {0, 40, 40, 0, -1, images_npchologram2_3074_0_0, 2};
static Image* images_npchologram2_3074_0_1[1];
static Direction direction_npchologram2_3074_0_1 = {1, 50, 50, 0, 1, images_npchologram2_3074_0_1, 1};
static Image* images_npchologram2_3074_0_2[2];
static Direction direction_npchologram2_3074_0_2 = {2, 20, 20, 0, -1, images_npchologram2_3074_0_2, 2};
static Image* images_npchologram2_3074_0_3[2];
static Direction direction_npchologram2_3074_0_3 = {3, 40, 40, 0, -1, images_npchologram2_3074_0_3, 2};
static Image* images_npchologram2_3074_0_4[2];
static Direction direction_npchologram2_3074_0_4 = {4, 40, 40, 0, -1, images_npchologram2_3074_0_4, 2};
static Image* images_npchologram2_3074_0_5[2];
static Direction direction_npchologram2_3074_0_5 = {5, 40, 40, 0, -1, images_npchologram2_3074_0_5, 2};
static Animation anim_npchologram2_3074_0 = {&direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_1, &direction_npchologram2_3074_0_2, &direction_npchologram2_3074_0_3, &direction_npchologram2_3074_0_4, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_5, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0, &direction_npchologram2_3074_0_0};
static Animation * anim_array_npchologram2_3074[1] = {&anim_npchologram2_3074_0};
static Animations anim_npchologram2_3074 = {1, &anim_array_npchologram2_3074[0]};
static bool anim_npchologram2_3074_initialized;
class NPCHologram2_3074 : public Active
{
public:
    NPCHologram2_3074(int x, int y) : Active(x, y, NPCHologram2_3074_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Hologram 2", 14);
#endif
        this->animations = &anim_npchologram2_3074;
        if (!anim_npchologram2_3074_initialized) {
            anim_npchologram2_3074_initialized = true;
            images_npchologram2_3074_0_0[0] = get_internal_image(13029);
            images_npchologram2_3074_0_0[1] = get_internal_image(13028);
            images_npchologram2_3074_0_1[0] = get_internal_image(1927);
            images_npchologram2_3074_0_2[0] = get_internal_image(5187);
            images_npchologram2_3074_0_2[1] = get_internal_image(4000);
            images_npchologram2_3074_0_3[0] = get_internal_image(12808);
            images_npchologram2_3074_0_3[1] = get_internal_image(11478);
            images_npchologram2_3074_0_4[0] = get_internal_image(11507);
            images_npchologram2_3074_0_4[1] = get_internal_image(12813);
            images_npchologram2_3074_0_5[0] = get_internal_image(12815);
            images_npchologram2_3074_0_5[1] = get_internal_image(13294);
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
FrameObject * create_npchologram2_3074(int x, int y)
{
    return new (Active::pool.create()) NPCHologram2_3074(x, y);
}
static Image* images_npcpanguleftarm_3075_0_0[2];
static Direction direction_npcpanguleftarm_3075_0_0 = {0, 0, 0, 0, 1, images_npcpanguleftarm_3075_0_0, 2};
static Image* images_npcpanguleftarm_3075_0_16[2];
static Direction direction_npcpanguleftarm_3075_0_16 = {16, 0, 0, 0, 1, images_npcpanguleftarm_3075_0_16, 2};
static Animation anim_npcpanguleftarm_3075_0 = {&direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, NULL, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, &direction_npcpanguleftarm_3075_0_16, NULL, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0, &direction_npcpanguleftarm_3075_0_0};
static Animation * anim_array_npcpanguleftarm_3075[1] = {&anim_npcpanguleftarm_3075_0};
static Animations anim_npcpanguleftarm_3075 = {1, &anim_array_npcpanguleftarm_3075[0]};
static bool anim_npcpanguleftarm_3075_initialized;
class NPCPanguLeftArm_3075 : public Active
{
public:
    NPCPanguLeftArm_3075(int x, int y) : Active(x, y, NPCPanguLeftArm_3075_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_PanguLeftArm", 16);
#endif
        this->animations = &anim_npcpanguleftarm_3075;
        if (!anim_npcpanguleftarm_3075_initialized) {
            anim_npcpanguleftarm_3075_initialized = true;
            images_npcpanguleftarm_3075_0_0[0] = get_internal_image(13033);
            images_npcpanguleftarm_3075_0_0[1] = get_internal_image(13032);
            images_npcpanguleftarm_3075_0_16[0] = get_internal_image(13034);
            images_npcpanguleftarm_3075_0_16[1] = get_internal_image(13032);
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
FrameObject * create_npcpanguleftarm_3075(int x, int y)
{
    return new (Active::pool.create()) NPCPanguLeftArm_3075(x, y);
}
static Image* images_npcpangurightarm_3076_0_0[2];
static Direction direction_npcpangurightarm_3076_0_0 = {0, 0, 0, 0, 1, images_npcpangurightarm_3076_0_0, 2};
static Image* images_npcpangurightarm_3076_0_16[2];
static Direction direction_npcpangurightarm_3076_0_16 = {16, 0, 0, 0, 1, images_npcpangurightarm_3076_0_16, 2};
static Animation anim_npcpangurightarm_3076_0 = {&direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, NULL, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, &direction_npcpangurightarm_3076_0_16, NULL, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0, &direction_npcpangurightarm_3076_0_0};
static Animation * anim_array_npcpangurightarm_3076[1] = {&anim_npcpangurightarm_3076_0};
static Animations anim_npcpangurightarm_3076 = {1, &anim_array_npcpangurightarm_3076[0]};
static bool anim_npcpangurightarm_3076_initialized;
class NPCPanguRightArm_3076 : public Active
{
public:
    NPCPanguRightArm_3076(int x, int y) : Active(x, y, NPCPanguRightArm_3076_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_PanguRightArm", 17);
#endif
        this->animations = &anim_npcpangurightarm_3076;
        if (!anim_npcpangurightarm_3076_initialized) {
            anim_npcpangurightarm_3076_initialized = true;
            images_npcpangurightarm_3076_0_0[0] = get_internal_image(13034);
            images_npcpangurightarm_3076_0_0[1] = get_internal_image(13035);
            images_npcpangurightarm_3076_0_16[0] = get_internal_image(13033);
            images_npcpangurightarm_3076_0_16[1] = get_internal_image(13035);
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
FrameObject * create_npcpangurightarm_3076(int x, int y)
{
    return new (Active::pool.create()) NPCPanguRightArm_3076(x, y);
}
class RecordData_3077 : public ArrayObject
{
public:
    RecordData_3077(int x, int y) : ArrayObject(x, y, RecordData_3077_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("RecordData", 10);
#endif
        global_data = &global_data_4_recorddata;
        if (!global_data_4_recorddata.init) {
            global_data_4_recorddata.init = true;
            initialize(true, 1, 10, 100, 1);
        } else {
            data = global_data_4_recorddata.value;
        }
    }
};
FrameObject * create_recorddata_3077(int x, int y)
{
    return new (ArrayObject::pool.create()) RecordData_3077(x, y);
}
class DialogData_3078 : public Text
{
public:
    DialogData_3078(int x, int y) : Text(x, y, DialogData_3078_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("01 18 li_33_02 You're one of Brevon's robots!", 45));
        add_line(std::string("00 00 sx_06_01 BREVON... SEARCHING MEMORY BANKS.", 48));
        add_line(std::string("00 00 sx_06_02 THAT NAME DOES NOT EXIST IN OUR DATABASE.", 56));
        add_line(std::string("01 00 li_33_03 Then what are you\?", 33));
        add_line(std::string("00 00 sx_06_03 THIS IS THE PRIMARY SECURITY SYSTEM FOR OR OR OR orrrrrrrrrrrr", 77));
        add_line(std::string("00 00 sx_06_02 THAT NAME DOES NOT EXIST IN OUR DATABASE.", 56));
        add_line(std::string("01 24 li_33_04 What are you\? Where did you come from\?", 53));
        add_line(std::string("00 00 sx_06_04 APOLOGIES. THAT INFORMATION IS PASSWORD PROTECTED PASSWORD PROTECTED PASSWORD PROTECTEDPAaAa*-*-..*", 114));
        add_line(std::string("00 00 sx_06_05 PASSWORD ACCEPTED. FOLLOW ME.", 44));
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
FrameObject * create_dialogdata_3078(int x, int y)
{
    return new (Text::pool.create()) DialogData_3078(x, y);
}
class LevelParallaxPiece0_3079 : public SystemBox
{
public:
    LevelParallaxPiece0_3079(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3079_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 863;
        type = PATTERN_IMAGE;
        image = get_internal_image(11106);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3079(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3079(x, y);
}
static Image* images_gimmickbarreldebris_3080_0_0[14];
static Direction direction_gimmickbarreldebris_3080_0_0 = {0, 0, 0, 0, 1, images_gimmickbarreldebris_3080_0_0, 14};
static Animation anim_gimmickbarreldebris_3080_0 = {&direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, NULL, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0, &direction_gimmickbarreldebris_3080_0_0};
static Animation * anim_array_gimmickbarreldebris_3080[1] = {&anim_gimmickbarreldebris_3080_0};
static Animations anim_gimmickbarreldebris_3080 = {1, &anim_array_gimmickbarreldebris_3080[0]};
static bool anim_gimmickbarreldebris_3080_initialized;
class GimmickBarrelDebris_3080 : public Active
{
public:
    GimmickBarrelDebris_3080(int x, int y) : Active(x, y, GimmickBarrelDebris_3080_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BarrelDebris", 20);
#endif
        this->animations = &anim_gimmickbarreldebris_3080;
        if (!anim_gimmickbarreldebris_3080_initialized) {
            anim_gimmickbarreldebris_3080_initialized = true;
            images_gimmickbarreldebris_3080_0_0[0] = get_internal_image(3552);
            images_gimmickbarreldebris_3080_0_0[1] = get_internal_image(1830);
            images_gimmickbarreldebris_3080_0_0[2] = get_internal_image(1841);
            images_gimmickbarreldebris_3080_0_0[3] = get_internal_image(3305);
            images_gimmickbarreldebris_3080_0_0[4] = get_internal_image(3347);
            images_gimmickbarreldebris_3080_0_0[5] = get_internal_image(2170);
            images_gimmickbarreldebris_3080_0_0[6] = get_internal_image(3349);
            images_gimmickbarreldebris_3080_0_0[7] = get_internal_image(3540);
            images_gimmickbarreldebris_3080_0_0[8] = get_internal_image(3542);
            images_gimmickbarreldebris_3080_0_0[9] = get_internal_image(3543);
            images_gimmickbarreldebris_3080_0_0[10] = get_internal_image(3546);
            images_gimmickbarreldebris_3080_0_0[11] = get_internal_image(3548);
            images_gimmickbarreldebris_3080_0_0[12] = get_internal_image(3547);
            images_gimmickbarreldebris_3080_0_0[13] = get_internal_image(3549);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
        set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
        movement = new PinballMovement(this);
        movement->index = 0;
        ((PinballMovement*)movement)->set_max_speed(50);
        ((PinballMovement*)movement)->set_deceleration(0);
        ((PinballMovement*)movement)->set_gravity(25);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_gimmickbarreldebris_3080(int x, int y)
{
    return new (Active::pool.create()) GimmickBarrelDebris_3080(x, y);
}
class THBack5_3081 : public Backdrop
{
public:
    THBack5_3081(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Back 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13040);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thback5_3081(int x, int y)
{
    return new (Backdrop::pool.create()) THBack5_3081(x, y);
}
class THSewerBack_3082 : public QuickBackdrop
{
public:
    THSewerBack_3082(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_SewerBack", 12);
#endif
        flags |= BACKGROUND;
        width = 4864;
        height = 320;
        image = get_internal_image(13041);
        outline = 0;
    }
};
FrameObject * create_thsewerback_3082(int x, int y)
{
    return new (QuickBackdrop::pool.create()) THSewerBack_3082(x, y);
}
static Image* images_thbacklight1_3083_0_0[6];
static Direction direction_thbacklight1_3083_0_0 = {0, 10, 10, 0, -1, images_thbacklight1_3083_0_0, 6};
static Animation anim_thbacklight1_3083_0 = {&direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, NULL, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0, &direction_thbacklight1_3083_0_0};
static Animation * anim_array_thbacklight1_3083[1] = {&anim_thbacklight1_3083_0};
static Animations anim_thbacklight1_3083 = {1, &anim_array_thbacklight1_3083[0]};
static bool anim_thbacklight1_3083_initialized;
class THBackLight1_3083 : public Active
{
public:
    THBackLight1_3083(int x, int y) : Active(x, y, THBackLight1_3083_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TH_BackLight 1", 14);
#endif
        this->animations = &anim_thbacklight1_3083;
        if (!anim_thbacklight1_3083_initialized) {
            anim_thbacklight1_3083_initialized = true;
            images_thbacklight1_3083_0_0[0] = get_internal_image(13067);
            images_thbacklight1_3083_0_0[1] = get_internal_image(13068);
            images_thbacklight1_3083_0_0[2] = get_internal_image(13069);
            images_thbacklight1_3083_0_0[3] = get_internal_image(13070);
            images_thbacklight1_3083_0_0[4] = get_internal_image(13069);
            images_thbacklight1_3083_0_0[5] = get_internal_image(13068);
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
FrameObject * create_thbacklight1_3083(int x, int y)
{
    return new (Active::pool.create()) THBackLight1_3083(x, y);
}
class THDirtyPipe_3084 : public Backdrop
{
public:
    THDirtyPipe_3084(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_DirtyPipe", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1613);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thdirtypipe_3084(int x, int y)
{
    return new (Backdrop::pool.create()) THDirtyPipe_3084(x, y);
}
class THStone11_3085 : public Backdrop
{
public:
    THStone11_3085(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 11", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13081);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone11_3085(int x, int y)
{
    return new (Backdrop::pool.create()) THStone11_3085(x, y);
}
class THStone4_3086 : public Backdrop
{
public:
    THStone4_3086(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2309);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone4_3086(int x, int y)
{
    return new (Backdrop::pool.create()) THStone4_3086(x, y);
}
class THTotemBack_3087 : public Backdrop
{
public:
    THTotemBack_3087(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_TotemBack", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11894);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_thtotemback_3087(int x, int y)
{
    return new (Backdrop::pool.create()) THTotemBack_3087(x, y);
}
class RYDiagonalPipe1_3088 : public Backdrop
{
public:
    RYDiagonalPipe1_3088(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_DiagonalPipe 1", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(489);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rydiagonalpipe1_3088(int x, int y)
{
    return new (Backdrop::pool.create()) RYDiagonalPipe1_3088(x, y);
}
class RYDiagonalPipe2_3089 : public Backdrop
{
public:
    RYDiagonalPipe2_3089(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RY_DiagonalPipe 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(719);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rydiagonalpipe2_3089(int x, int y)
{
    return new (Backdrop::pool.create()) RYDiagonalPipe2_3089(x, y);
}
class THStone3_3090 : public Backdrop
{
public:
    THStone3_3090(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2735);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone3_3090(int x, int y)
{
    return new (Backdrop::pool.create()) THStone3_3090(x, y);
}
class THStone1_3091 : public Backdrop
{
public:
    THStone1_3091(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2737);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone1_3091(int x, int y)
{
    return new (Backdrop::pool.create()) THStone1_3091(x, y);
}
class THStone2_3092 : public Backdrop
{
public:
    THStone2_3092(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2736);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone2_3092(int x, int y)
{
    return new (Backdrop::pool.create()) THStone2_3092(x, y);
}
class THStone9_3093 : public Backdrop
{
public:
    THStone9_3093(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13039);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone9_3093(int x, int y)
{
    return new (Backdrop::pool.create()) THStone9_3093(x, y);
}
class THWood1_3094 : public Backdrop
{
public:
    THWood1_3094(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Wood 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1265);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thwood1_3094(int x, int y)
{
    return new (Backdrop::pool.create()) THWood1_3094(x, y);
}
class THStone6_3095 : public Backdrop
{
public:
    THStone6_3095(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3093);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone6_3095(int x, int y)
{
    return new (Backdrop::pool.create()) THStone6_3095(x, y);
}
class THStone5_3096 : public Backdrop
{
public:
    THStone5_3096(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3092);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone5_3096(int x, int y)
{
    return new (Backdrop::pool.create()) THStone5_3096(x, y);
}
class THStone7_3097 : public Backdrop
{
public:
    THStone7_3097(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2750);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone7_3097(int x, int y)
{
    return new (Backdrop::pool.create()) THStone7_3097(x, y);
}
class THStone8_3098 : public Backdrop
{
public:
    THStone8_3098(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TH_Stone 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2741);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_thstone8_3098(int x, int y)
{
    return new (Backdrop::pool.create()) THStone8_3098(x, y);
}
static Image* images_bosslaseririswingleft_3099_0_0[1];
static Direction direction_bosslaseririswingleft_3099_0_0 = {0, 50, 50, 0, 1, images_bosslaseririswingleft_3099_0_0, 1};
static Image* images_bosslaseririswingleft_3099_0_16[2];
static Direction direction_bosslaseririswingleft_3099_0_16 = {16, 50, 50, 0, -1, images_bosslaseririswingleft_3099_0_16, 2};
static Animation anim_bosslaseririswingleft_3099_0 = {&direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, NULL, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, &direction_bosslaseririswingleft_3099_0_16, NULL, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0, &direction_bosslaseririswingleft_3099_0_0};
static Animation * anim_array_bosslaseririswingleft_3099[1] = {&anim_bosslaseririswingleft_3099_0};
static Animations anim_bosslaseririswingleft_3099 = {1, &anim_array_bosslaseririswingleft_3099[0]};
static bool anim_bosslaseririswingleft_3099_initialized;
class BossLaserIrisWingLeft_3099 : public Active
{
public:
    BossLaserIrisWingLeft_3099(int x, int y) : Active(x, y, BossLaserIrisWingLeft_3099_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LaserIrisWingLeft", 22);
#endif
        this->animations = &anim_bosslaseririswingleft_3099;
        if (!anim_bosslaseririswingleft_3099_initialized) {
            anim_bosslaseririswingleft_3099_initialized = true;
            images_bosslaseririswingleft_3099_0_0[0] = get_internal_image(7022);
            images_bosslaseririswingleft_3099_0_16[0] = get_internal_image(7022);
            images_bosslaseririswingleft_3099_0_16[1] = get_internal_image(13044);
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
FrameObject * create_bosslaseririswingleft_3099(int x, int y)
{
    return new (Active::pool.create()) BossLaserIrisWingLeft_3099(x, y);
}
static Image* images_bosslaseririswingright_3100_0_0[1];
static Direction direction_bosslaseririswingright_3100_0_0 = {0, 50, 50, 0, 1, images_bosslaseririswingright_3100_0_0, 1};
static Image* images_bosslaseririswingright_3100_0_16[2];
static Direction direction_bosslaseririswingright_3100_0_16 = {16, 50, 50, 0, -1, images_bosslaseririswingright_3100_0_16, 2};
static Animation anim_bosslaseririswingright_3100_0 = {&direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, NULL, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, &direction_bosslaseririswingright_3100_0_16, NULL, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0, &direction_bosslaseririswingright_3100_0_0};
static Animation * anim_array_bosslaseririswingright_3100[1] = {&anim_bosslaseririswingright_3100_0};
static Animations anim_bosslaseririswingright_3100 = {1, &anim_array_bosslaseririswingright_3100[0]};
static bool anim_bosslaseririswingright_3100_initialized;
class BossLaserIrisWingRight_3100 : public Active
{
public:
    BossLaserIrisWingRight_3100(int x, int y) : Active(x, y, BossLaserIrisWingRight_3100_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LaserIrisWingRight", 23);
#endif
        this->animations = &anim_bosslaseririswingright_3100;
        if (!anim_bosslaseririswingright_3100_initialized) {
            anim_bosslaseririswingright_3100_initialized = true;
            images_bosslaseririswingright_3100_0_0[0] = get_internal_image(7591);
            images_bosslaseririswingright_3100_0_16[0] = get_internal_image(7591);
            images_bosslaseririswingright_3100_0_16[1] = get_internal_image(13046);
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
FrameObject * create_bosslaseririswingright_3100(int x, int y)
{
    return new (Active::pool.create()) BossLaserIrisWingRight_3100(x, y);
}
static Image* images_bosslaseririscannon_3101_0_0[1];
static Direction direction_bosslaseririscannon_3101_0_0 = {0, 50, 50, 0, 1, images_bosslaseririscannon_3101_0_0, 1};
static Image* images_bosslaseririscannon_3101_0_16[2];
static Direction direction_bosslaseririscannon_3101_0_16 = {16, 50, 50, 0, -1, images_bosslaseririscannon_3101_0_16, 2};
static Animation anim_bosslaseririscannon_3101_0 = {&direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, NULL, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, &direction_bosslaseririscannon_3101_0_16, NULL, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0, &direction_bosslaseririscannon_3101_0_0};
static Animation * anim_array_bosslaseririscannon_3101[1] = {&anim_bosslaseririscannon_3101_0};
static Animations anim_bosslaseririscannon_3101 = {1, &anim_array_bosslaseririscannon_3101[0]};
static bool anim_bosslaseririscannon_3101_initialized;
class BossLaserIrisCannon_3101 : public Active
{
public:
    BossLaserIrisCannon_3101(int x, int y) : Active(x, y, BossLaserIrisCannon_3101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_LaserIrisCannon", 20);
#endif
        this->animations = &anim_bosslaseririscannon_3101;
        if (!anim_bosslaseririscannon_3101_initialized) {
            anim_bosslaseririscannon_3101_initialized = true;
            images_bosslaseririscannon_3101_0_0[0] = get_internal_image(7592);
            images_bosslaseririscannon_3101_0_16[0] = get_internal_image(7592);
            images_bosslaseririscannon_3101_0_16[1] = get_internal_image(13037);
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
FrameObject * create_bosslaseririscannon_3101(int x, int y)
{
    return new (Active::pool.create()) BossLaserIrisCannon_3101(x, y);
}
static Image* images_bosslaseriris_3102_0_0[6];
static Direction direction_bosslaseriris_3102_0_0 = {0, 20, 20, 0, -1, images_bosslaseriris_3102_0_0, 6};
static Image* images_bosslaseriris_3102_0_8[1];
static Direction direction_bosslaseriris_3102_0_8 = {8, 50, 50, 0, 1, images_bosslaseriris_3102_0_8, 1};
static Image* images_bosslaseriris_3102_0_16[2];
static Direction direction_bosslaseriris_3102_0_16 = {16, 50, 50, 0, -1, images_bosslaseriris_3102_0_16, 2};
static Image* images_bosslaseriris_3102_0_24[1];
static Direction direction_bosslaseriris_3102_0_24 = {24, 50, 50, 0, 1, images_bosslaseriris_3102_0_24, 1};
static Animation anim_bosslaseriris_3102_0 = {&direction_bosslaseriris_3102_0_0, &direction_bosslaseriris_3102_0_0, &direction_bosslaseriris_3102_0_0, &direction_bosslaseriris_3102_0_0, NULL, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, &direction_bosslaseriris_3102_0_8, NULL, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, &direction_bosslaseriris_3102_0_16, NULL, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, &direction_bosslaseriris_3102_0_24, NULL, &direction_bosslaseriris_3102_0_0, &direction_bosslaseriris_3102_0_0, &direction_bosslaseriris_3102_0_0};
static Animation * anim_array_bosslaseriris_3102[1] = {&anim_bosslaseriris_3102_0};
static Animations anim_bosslaseriris_3102 = {1, &anim_array_bosslaseriris_3102[0]};
static bool anim_bosslaseriris_3102_initialized;
class BossLaserIris_3102 : public Active
{
public:
    BossLaserIris_3102(int x, int y) : Active(x, y, BossLaserIris_3102_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_LaserIris", 14);
#endif
        this->animations = &anim_bosslaseriris_3102;
        if (!anim_bosslaseriris_3102_initialized) {
            anim_bosslaseriris_3102_initialized = true;
            images_bosslaseriris_3102_0_0[0] = get_internal_image(8294);
            images_bosslaseriris_3102_0_0[1] = get_internal_image(11108);
            images_bosslaseriris_3102_0_0[2] = get_internal_image(11190);
            images_bosslaseriris_3102_0_0[3] = get_internal_image(12620);
            images_bosslaseriris_3102_0_0[4] = get_internal_image(11190);
            images_bosslaseriris_3102_0_0[5] = get_internal_image(11108);
            images_bosslaseriris_3102_0_8[0] = get_internal_image(12977);
            images_bosslaseriris_3102_0_16[0] = get_internal_image(12977);
            images_bosslaseriris_3102_0_16[1] = get_internal_image(13036);
            images_bosslaseriris_3102_0_24[0] = get_internal_image(12978);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(0, 60);
        alterables->values.set(3, 270);
    }
};
FrameObject * create_bosslaseriris_3102(int x, int y)
{
    return new (Active::pool.create()) BossLaserIris_3102(x, y);
}
static Image* images_enemytotematic_3103_0_0[9];
static Direction direction_enemytotematic_3103_0_0 = {0, 25, 25, 0, -1, images_enemytotematic_3103_0_0, 9};
static Animation anim_enemytotematic_3103_0 = {&direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, NULL, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0, &direction_enemytotematic_3103_0_0};
static Animation * anim_array_enemytotematic_3103[1] = {&anim_enemytotematic_3103_0};
static Animations anim_enemytotematic_3103 = {1, &anim_array_enemytotematic_3103[0]};
static bool anim_enemytotematic_3103_initialized;
class EnemyTotematic_3103 : public Active
{
public:
    EnemyTotematic_3103(int x, int y) : Active(x, y, EnemyTotematic_3103_type)
    {
        // qualifiers: 14, 97
#ifndef NDEBUG
        name = std::string("Enemy_Totematic", 15);
#endif
        this->animations = &anim_enemytotematic_3103;
        if (!anim_enemytotematic_3103_initialized) {
            anim_enemytotematic_3103_initialized = true;
            images_enemytotematic_3103_0_0[0] = get_internal_image(5371);
            images_enemytotematic_3103_0_0[1] = get_internal_image(5371);
            images_enemytotematic_3103_0_0[2] = get_internal_image(6024);
            images_enemytotematic_3103_0_0[3] = get_internal_image(6025);
            images_enemytotematic_3103_0_0[4] = get_internal_image(7693);
            images_enemytotematic_3103_0_0[5] = get_internal_image(7683);
            images_enemytotematic_3103_0_0[6] = get_internal_image(7693);
            images_enemytotematic_3103_0_0[7] = get_internal_image(6025);
            images_enemytotematic_3103_0_0[8] = get_internal_image(6024);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(18, 2);
    }
};
FrameObject * create_enemytotematic_3103(int x, int y)
{
    return new (Active::pool.create()) EnemyTotematic_3103(x, y);
}
static Image* images_hazardscanlaserdown_3104_0_0[1];
static Direction direction_hazardscanlaserdown_3104_0_0 = {0, 50, 50, 0, -1, images_hazardscanlaserdown_3104_0_0, 1};
static Image* images_hazardscanlaserdown_3104_0_1[3];
static Direction direction_hazardscanlaserdown_3104_0_1 = {1, 50, 50, 0, -1, images_hazardscanlaserdown_3104_0_1, 3};
static Animation anim_hazardscanlaserdown_3104_0 = {&direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_1, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0, &direction_hazardscanlaserdown_3104_0_0};
static Animation * anim_array_hazardscanlaserdown_3104[1] = {&anim_hazardscanlaserdown_3104_0};
static Animations anim_hazardscanlaserdown_3104 = {1, &anim_array_hazardscanlaserdown_3104[0]};
static bool anim_hazardscanlaserdown_3104_initialized;
class HazardScanLaserDown_3104 : public Active
{
public:
    HazardScanLaserDown_3104(int x, int y) : Active(x, y, HazardScanLaserDown_3104_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserDown", 20);
#endif
        this->animations = &anim_hazardscanlaserdown_3104;
        if (!anim_hazardscanlaserdown_3104_initialized) {
            anim_hazardscanlaserdown_3104_initialized = true;
            images_hazardscanlaserdown_3104_0_0[0] = get_internal_image(11173);
            images_hazardscanlaserdown_3104_0_1[0] = get_internal_image(12559);
            images_hazardscanlaserdown_3104_0_1[1] = get_internal_image(12578);
            images_hazardscanlaserdown_3104_0_1[2] = get_internal_image(11175);
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
FrameObject * create_hazardscanlaserdown_3104(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserDown_3104(x, y);
}
static Image* images_hazardscanlaserhead4_3105_0_0[1];
static Direction direction_hazardscanlaserhead4_3105_0_0 = {0, 50, 50, 0, 1, images_hazardscanlaserhead4_3105_0_0, 1};
static Animation anim_hazardscanlaserhead4_3105_0 = {&direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, NULL, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0, &direction_hazardscanlaserhead4_3105_0_0};
static Animation * anim_array_hazardscanlaserhead4_3105[1] = {&anim_hazardscanlaserhead4_3105_0};
static Animations anim_hazardscanlaserhead4_3105 = {1, &anim_array_hazardscanlaserhead4_3105[0]};
static bool anim_hazardscanlaserhead4_3105_initialized;
class HazardScanLaserHead4_3105 : public Active
{
public:
    HazardScanLaserHead4_3105(int x, int y) : Active(x, y, HazardScanLaserHead4_3105_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserHead 4", 22);
#endif
        this->animations = &anim_hazardscanlaserhead4_3105;
        if (!anim_hazardscanlaserhead4_3105_initialized) {
            anim_hazardscanlaserhead4_3105_initialized = true;
            images_hazardscanlaserhead4_3105_0_0[0] = get_internal_image(7012);
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
        ((BallMovement*)movement)->set_max_speed(16);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_hazardscanlaserhead4_3105(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserHead4_3105(x, y);
}
static Image* images_hazardspikesdown_3106_0_0[1];
static Direction direction_hazardspikesdown_3106_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_3106_0_0, 1};
static Animation anim_hazardspikesdown_3106_0 = {&direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, NULL, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0, &direction_hazardspikesdown_3106_0_0};
static Animation * anim_array_hazardspikesdown_3106[1] = {&anim_hazardspikesdown_3106_0};
static Animations anim_hazardspikesdown_3106 = {1, &anim_array_hazardspikesdown_3106[0]};
static bool anim_hazardspikesdown_3106_initialized;
class HazardSpikesDown_3106 : public Active
{
public:
    HazardSpikesDown_3106(int x, int y) : Active(x, y, HazardSpikesDown_3106_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_3106;
        if (!anim_hazardspikesdown_3106_initialized) {
            anim_hazardspikesdown_3106_initialized = true;
            images_hazardspikesdown_3106_0_0[0] = get_internal_image(9454);
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
FrameObject * create_hazardspikesdown_3106(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_3106(x, y);
}
static Image* images_gimmickhangingmovingbar_3107_0_0[4];
static Direction direction_gimmickhangingmovingbar_3107_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingbar_3107_0_0, 4};
static Animation anim_gimmickhangingmovingbar_3107_0 = {&direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, NULL, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0, &direction_gimmickhangingmovingbar_3107_0_0};
static Animation * anim_array_gimmickhangingmovingbar_3107[1] = {&anim_gimmickhangingmovingbar_3107_0};
static Animations anim_gimmickhangingmovingbar_3107 = {1, &anim_array_gimmickhangingmovingbar_3107[0]};
static bool anim_gimmickhangingmovingbar_3107_initialized;
class GimmickHangingMovingBar_3107 : public Active
{
public:
    GimmickHangingMovingBar_3107(int x, int y) : Active(x, y, GimmickHangingMovingBar_3107_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar", 25);
#endif
        this->animations = &anim_gimmickhangingmovingbar_3107;
        if (!anim_gimmickhangingmovingbar_3107_initialized) {
            anim_gimmickhangingmovingbar_3107_initialized = true;
            images_gimmickhangingmovingbar_3107_0_0[0] = get_internal_image(2091);
            images_gimmickhangingmovingbar_3107_0_0[1] = get_internal_image(3235);
            images_gimmickhangingmovingbar_3107_0_0[2] = get_internal_image(12419);
            images_gimmickhangingmovingbar_3107_0_0[3] = get_internal_image(12429);
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
    }
};
FrameObject * create_gimmickhangingmovingbar_3107(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar_3107(x, y);
}
static Image* images_gimmickhangingmovingsensor_3108_0_0[1];
static Direction direction_gimmickhangingmovingsensor_3108_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_3108_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_3108_0 = {&direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, NULL, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0, &direction_gimmickhangingmovingsensor_3108_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_3108[1] = {&anim_gimmickhangingmovingsensor_3108_0};
static Animations anim_gimmickhangingmovingsensor_3108 = {1, &anim_array_gimmickhangingmovingsensor_3108[0]};
static bool anim_gimmickhangingmovingsensor_3108_initialized;
class GimmickHangingMovingSensor_3108 : public Active
{
public:
    GimmickHangingMovingSensor_3108(int x, int y) : Active(x, y, GimmickHangingMovingSensor_3108_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_3108;
        if (!anim_gimmickhangingmovingsensor_3108_initialized) {
            anim_gimmickhangingmovingsensor_3108_initialized = true;
            images_gimmickhangingmovingsensor_3108_0_0[0] = get_internal_image(1383);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 2);
        alterables->values.set(2, 128);
    }
};
FrameObject * create_gimmickhangingmovingsensor_3108(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_3108(x, y);
}
static Image* images_hazardscanlasersweep_3109_0_0[1];
static Direction direction_hazardscanlasersweep_3109_0_0 = {0, 50, 50, 0, -1, images_hazardscanlasersweep_3109_0_0, 1};
static Image* images_hazardscanlasersweep_3109_0_1[3];
static Direction direction_hazardscanlasersweep_3109_0_1 = {1, 50, 50, 0, -1, images_hazardscanlasersweep_3109_0_1, 3};
static Animation anim_hazardscanlasersweep_3109_0 = {&direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_1, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0, &direction_hazardscanlasersweep_3109_0_0};
static Animation * anim_array_hazardscanlasersweep_3109[1] = {&anim_hazardscanlasersweep_3109_0};
static Animations anim_hazardscanlasersweep_3109 = {1, &anim_array_hazardscanlasersweep_3109[0]};
static bool anim_hazardscanlasersweep_3109_initialized;
class HazardScanLaserSweep_3109 : public Active
{
public:
    HazardScanLaserSweep_3109(int x, int y) : Active(x, y, HazardScanLaserSweep_3109_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserSweep", 21);
#endif
        this->animations = &anim_hazardscanlasersweep_3109;
        if (!anim_hazardscanlasersweep_3109_initialized) {
            anim_hazardscanlasersweep_3109_initialized = true;
            images_hazardscanlasersweep_3109_0_0[0] = get_internal_image(11173);
            images_hazardscanlasersweep_3109_0_1[0] = get_internal_image(12559);
            images_hazardscanlasersweep_3109_0_1[1] = get_internal_image(12578);
            images_hazardscanlasersweep_3109_0_1[2] = get_internal_image(11175);
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
FrameObject * create_hazardscanlasersweep_3109(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserSweep_3109(x, y);
}
static Image* images_hazardscanlaserright_3110_0_0[1];
static Direction direction_hazardscanlaserright_3110_0_0 = {0, 50, 50, 0, -1, images_hazardscanlaserright_3110_0_0, 1};
static Image* images_hazardscanlaserright_3110_0_1[3];
static Direction direction_hazardscanlaserright_3110_0_1 = {1, 50, 50, 0, -1, images_hazardscanlaserright_3110_0_1, 3};
static Animation anim_hazardscanlaserright_3110_0 = {&direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_1, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0, &direction_hazardscanlaserright_3110_0_0};
static Animation * anim_array_hazardscanlaserright_3110[1] = {&anim_hazardscanlaserright_3110_0};
static Animations anim_hazardscanlaserright_3110 = {1, &anim_array_hazardscanlaserright_3110[0]};
static bool anim_hazardscanlaserright_3110_initialized;
class HazardScanLaserRight_3110 : public Active
{
public:
    HazardScanLaserRight_3110(int x, int y) : Active(x, y, HazardScanLaserRight_3110_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserRight", 21);
#endif
        this->animations = &anim_hazardscanlaserright_3110;
        if (!anim_hazardscanlaserright_3110_initialized) {
            anim_hazardscanlaserright_3110_initialized = true;
            images_hazardscanlaserright_3110_0_0[0] = get_internal_image(11173);
            images_hazardscanlaserright_3110_0_1[0] = get_internal_image(12559);
            images_hazardscanlaserright_3110_0_1[1] = get_internal_image(12578);
            images_hazardscanlaserright_3110_0_1[2] = get_internal_image(11175);
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
FrameObject * create_hazardscanlaserright_3110(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserRight_3110(x, y);
}
static Image* images_hazardscanlaserleft_3111_0_0[1];
static Direction direction_hazardscanlaserleft_3111_0_0 = {0, 50, 50, 0, -1, images_hazardscanlaserleft_3111_0_0, 1};
static Image* images_hazardscanlaserleft_3111_0_1[3];
static Direction direction_hazardscanlaserleft_3111_0_1 = {1, 50, 50, 0, -1, images_hazardscanlaserleft_3111_0_1, 3};
static Animation anim_hazardscanlaserleft_3111_0 = {&direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_1, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0, &direction_hazardscanlaserleft_3111_0_0};
static Animation * anim_array_hazardscanlaserleft_3111[1] = {&anim_hazardscanlaserleft_3111_0};
static Animations anim_hazardscanlaserleft_3111 = {1, &anim_array_hazardscanlaserleft_3111[0]};
static bool anim_hazardscanlaserleft_3111_initialized;
class HazardScanLaserLeft_3111 : public Active
{
public:
    HazardScanLaserLeft_3111(int x, int y) : Active(x, y, HazardScanLaserLeft_3111_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserLeft", 20);
#endif
        this->animations = &anim_hazardscanlaserleft_3111;
        if (!anim_hazardscanlaserleft_3111_initialized) {
            anim_hazardscanlaserleft_3111_initialized = true;
            images_hazardscanlaserleft_3111_0_0[0] = get_internal_image(11173);
            images_hazardscanlaserleft_3111_0_1[0] = get_internal_image(12559);
            images_hazardscanlaserleft_3111_0_1[1] = get_internal_image(12578);
            images_hazardscanlaserleft_3111_0_1[2] = get_internal_image(11175);
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
FrameObject * create_hazardscanlaserleft_3111(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserLeft_3111(x, y);
}
static Image* images_hazardscanlaserup_3112_0_0[1];
static Direction direction_hazardscanlaserup_3112_0_0 = {0, 50, 50, 0, -1, images_hazardscanlaserup_3112_0_0, 1};
static Image* images_hazardscanlaserup_3112_0_1[3];
static Direction direction_hazardscanlaserup_3112_0_1 = {1, 50, 50, 0, -1, images_hazardscanlaserup_3112_0_1, 3};
static Animation anim_hazardscanlaserup_3112_0 = {&direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_1, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0, &direction_hazardscanlaserup_3112_0_0};
static Animation * anim_array_hazardscanlaserup_3112[1] = {&anim_hazardscanlaserup_3112_0};
static Animations anim_hazardscanlaserup_3112 = {1, &anim_array_hazardscanlaserup_3112[0]};
static bool anim_hazardscanlaserup_3112_initialized;
class HazardScanLaserUp_3112 : public Active
{
public:
    HazardScanLaserUp_3112(int x, int y) : Active(x, y, HazardScanLaserUp_3112_type)
    {
        // qualifiers: 36
#ifndef NDEBUG
        name = std::string("Hazard_ScanLaserUp", 18);
#endif
        this->animations = &anim_hazardscanlaserup_3112;
        if (!anim_hazardscanlaserup_3112_initialized) {
            anim_hazardscanlaserup_3112_initialized = true;
            images_hazardscanlaserup_3112_0_0[0] = get_internal_image(11173);
            images_hazardscanlaserup_3112_0_1[0] = get_internal_image(12559);
            images_hazardscanlaserup_3112_0_1[1] = get_internal_image(12578);
            images_hazardscanlaserup_3112_0_1[2] = get_internal_image(11175);
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
FrameObject * create_hazardscanlaserup_3112(int x, int y)
{
    return new (Active::pool.create()) HazardScanLaserUp_3112(x, y);
}
