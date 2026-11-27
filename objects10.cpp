#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class DVFloorCurveRight_907 : public Backdrop
{
public:
    DVFloorCurveRight_907(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FloorCurveRight", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(622);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvfloorcurveright_907(int x, int y)
{
    return new (Backdrop::pool.create()) DVFloorCurveRight_907(x, y);
}
class DVRockSlope12_908 : public Backdrop
{
public:
    DVRockSlope12_908(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5692);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope12_908(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope12_908(x, y);
}
class DVFloorCurveLeft_909 : public Backdrop
{
public:
    DVFloorCurveLeft_909(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FloorCurveLeft", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(593);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvfloorcurveleft_909(int x, int y)
{
    return new (Backdrop::pool.create()) DVFloorCurveLeft_909(x, y);
}
class DVRockSlope2_910 : public Backdrop
{
public:
    DVRockSlope2_910(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2528);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvrockslope2_910(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope2_910(x, y);
}
class DVRockSlope10_911 : public Backdrop
{
public:
    DVRockSlope10_911(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(366);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope10_911(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope10_911(x, y);
}
class DVRockSlope5_912 : public Backdrop
{
public:
    DVRockSlope5_912(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5730);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope5_912(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope5_912(x, y);
}
class DVRockSlope6_913 : public Backdrop
{
public:
    DVRockSlope6_913(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6662);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope6_913(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope6_913(x, y);
}
class DVLadder_914 : public Backdrop
{
public:
    DVLadder_914(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5261);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_dvladder_914(int x, int y)
{
    return new (Backdrop::pool.create()) DVLadder_914(x, y);
}
class DVCeilingOverlay_915 : public Backdrop
{
public:
    DVCeilingOverlay_915(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Ceiling_Overlay", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(864);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_dvceilingoverlay_915(int x, int y)
{
    return new (Backdrop::pool.create()) DVCeilingOverlay_915(x, y);
}
class DVCeilingOverlay2_916 : public Backdrop
{
public:
    DVCeilingOverlay2_916(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Ceiling_Overlay 2", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1281);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_dvceilingoverlay2_916(int x, int y)
{
    return new (Backdrop::pool.create()) DVCeilingOverlay2_916(x, y);
}
class LevelBackdrop7_917 : public Backdrop
{
public:
    LevelBackdrop7_917(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_ 7", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6371);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_levelbackdrop7_917(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop7_917(x, y);
}
class DVFloorCurveSmallLeft_918 : public Backdrop
{
public:
    DVFloorCurveSmallLeft_918(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FloorCurveSmallLeft", 22);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5257);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvfloorcurvesmallleft_918(int x, int y)
{
    return new (Backdrop::pool.create()) DVFloorCurveSmallLeft_918(x, y);
}
class SpiralTunnel1_919 : public Backdrop
{
public:
    SpiralTunnel1_919(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SpiralTunnel 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9254);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_spiraltunnel1_919(int x, int y)
{
    return new (Backdrop::pool.create()) SpiralTunnel1_919(x, y);
}
class DVRockSlope8_920 : public Backdrop
{
public:
    DVRockSlope8_920(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6663);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope8_920(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope8_920(x, y);
}
class DVGrass8_921 : public Backdrop
{
public:
    DVGrass8_921(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9426);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvgrass8_921(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass8_921(x, y);
}
class DVGrass7_922 : public Backdrop
{
public:
    DVGrass7_922(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Grass7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9425);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvgrass7_922(int x, int y)
{
    return new (Backdrop::pool.create()) DVGrass7_922(x, y);
}
static Image* images_minibossrailing_923_0_0[1];
static Direction direction_minibossrailing_923_0_0 = {0, 50, 50, 0, 1, images_minibossrailing_923_0_0, 1};
static Animation anim_minibossrailing_923_0 = {&direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, NULL, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0, &direction_minibossrailing_923_0_0};
static Image* images_minibossrailing_923_4_0[6];
static Direction direction_minibossrailing_923_4_0 = {0, 50, 50, 0, 1, images_minibossrailing_923_4_0, 6};
static Animation anim_minibossrailing_923_4 = {&direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, NULL, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0, &direction_minibossrailing_923_4_0};
static Animation * anim_array_minibossrailing_923[5] = {&anim_minibossrailing_923_0, NULL, NULL, NULL, &anim_minibossrailing_923_4};
static Animations anim_minibossrailing_923 = {5, &anim_array_minibossrailing_923[0]};
static bool anim_minibossrailing_923_initialized;
class MinibossRailing_923 : public Active
{
public:
    MinibossRailing_923(int x, int y) : Active(x, y, MinibossRailing_923_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Railing", 16);
#endif
        this->animations = &anim_minibossrailing_923;
        if (!anim_minibossrailing_923_initialized) {
            anim_minibossrailing_923_initialized = true;
            images_minibossrailing_923_0_0[0] = get_internal_image(589);
            images_minibossrailing_923_4_0[0] = get_internal_image(215);
            images_minibossrailing_923_4_0[1] = get_internal_image(589);
            images_minibossrailing_923_4_0[2] = get_internal_image(215);
            images_minibossrailing_923_4_0[3] = get_internal_image(269);
            images_minibossrailing_923_4_0[4] = get_internal_image(270);
            images_minibossrailing_923_4_0[5] = get_internal_image(274);
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
FrameObject * create_minibossrailing_923(int x, int y)
{
    return new (Active::pool.create()) MinibossRailing_923(x, y);
}
static Image* images_minibossbarrier_924_0_0[1];
static Direction direction_minibossbarrier_924_0_0 = {0, 50, 50, 0, 1, images_minibossbarrier_924_0_0, 1};
static Animation anim_minibossbarrier_924_0 = {&direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, NULL, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0, &direction_minibossbarrier_924_0_0};
static Animation * anim_array_minibossbarrier_924[1] = {&anim_minibossbarrier_924_0};
static Animations anim_minibossbarrier_924 = {1, &anim_array_minibossbarrier_924[0]};
static bool anim_minibossbarrier_924_initialized;
class MinibossBarrier_924 : public Active
{
public:
    MinibossBarrier_924(int x, int y) : Active(x, y, MinibossBarrier_924_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Miniboss_Barrier", 16);
#endif
        set_visible(false);
        this->animations = &anim_minibossbarrier_924;
        if (!anim_minibossbarrier_924_initialized) {
            anim_minibossbarrier_924_initialized = true;
            images_minibossbarrier_924_0_0[0] = get_internal_image(209);
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
FrameObject * create_minibossbarrier_924(int x, int y)
{
    return new (Active::pool.create()) MinibossBarrier_924(x, y);
}
static Image* images_minibosswretchnidrightleg2_925_0_0[1];
static Direction direction_minibosswretchnidrightleg2_925_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg2_925_0_0, 1};
static Animation anim_minibosswretchnidrightleg2_925_0 = {&direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, NULL, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0, &direction_minibosswretchnidrightleg2_925_0_0};
static Animation * anim_array_minibosswretchnidrightleg2_925[1] = {&anim_minibosswretchnidrightleg2_925_0};
static Animations anim_minibosswretchnidrightleg2_925 = {1, &anim_array_minibosswretchnidrightleg2_925[0]};
static bool anim_minibosswretchnidrightleg2_925_initialized;
class MinibossWretchnidRightLeg2_925 : public Active
{
public:
    MinibossWretchnidRightLeg2_925(int x, int y) : Active(x, y, MinibossWretchnidRightLeg2_925_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 2", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg2_925;
        if (!anim_minibosswretchnidrightleg2_925_initialized) {
            anim_minibosswretchnidrightleg2_925_initialized = true;
            images_minibosswretchnidrightleg2_925_0_0[0] = get_internal_image(1055);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 270);
    }
};
FrameObject * create_minibosswretchnidrightleg2_925(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg2_925(x, y);
}
static Image* images_minibosswretchnidrightleg5_926_0_0[1];
static Direction direction_minibosswretchnidrightleg5_926_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg5_926_0_0, 1};
static Animation anim_minibosswretchnidrightleg5_926_0 = {&direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, NULL, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0, &direction_minibosswretchnidrightleg5_926_0_0};
static Animation * anim_array_minibosswretchnidrightleg5_926[1] = {&anim_minibosswretchnidrightleg5_926_0};
static Animations anim_minibosswretchnidrightleg5_926 = {1, &anim_array_minibosswretchnidrightleg5_926[0]};
static bool anim_minibosswretchnidrightleg5_926_initialized;
class MinibossWretchnidRightLeg5_926 : public Active
{
public:
    MinibossWretchnidRightLeg5_926(int x, int y) : Active(x, y, MinibossWretchnidRightLeg5_926_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 5", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg5_926;
        if (!anim_minibosswretchnidrightleg5_926_initialized) {
            anim_minibosswretchnidrightleg5_926_initialized = true;
            images_minibosswretchnidrightleg5_926_0_0[0] = get_internal_image(1055);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
    }
};
FrameObject * create_minibosswretchnidrightleg5_926(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg5_926(x, y);
}
static Image* images_minibosswretchnidrightleg3_927_0_0[1];
static Direction direction_minibosswretchnidrightleg3_927_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg3_927_0_0, 1};
static Animation anim_minibosswretchnidrightleg3_927_0 = {&direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, NULL, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0, &direction_minibosswretchnidrightleg3_927_0_0};
static Animation * anim_array_minibosswretchnidrightleg3_927[1] = {&anim_minibosswretchnidrightleg3_927_0};
static Animations anim_minibosswretchnidrightleg3_927 = {1, &anim_array_minibosswretchnidrightleg3_927[0]};
static bool anim_minibosswretchnidrightleg3_927_initialized;
class MinibossWretchnidRightLeg3_927 : public Active
{
public:
    MinibossWretchnidRightLeg3_927(int x, int y) : Active(x, y, MinibossWretchnidRightLeg3_927_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 3", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg3_927;
        if (!anim_minibosswretchnidrightleg3_927_initialized) {
            anim_minibosswretchnidrightleg3_927_initialized = true;
            images_minibosswretchnidrightleg3_927_0_0[0] = get_internal_image(9435);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
    }
};
FrameObject * create_minibosswretchnidrightleg3_927(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg3_927(x, y);
}
static Image* images_minibosswretchnidrightleg6_928_0_0[1];
static Direction direction_minibosswretchnidrightleg6_928_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg6_928_0_0, 1};
static Animation anim_minibosswretchnidrightleg6_928_0 = {&direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, NULL, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0, &direction_minibosswretchnidrightleg6_928_0_0};
static Animation * anim_array_minibosswretchnidrightleg6_928[1] = {&anim_minibosswretchnidrightleg6_928_0};
static Animations anim_minibosswretchnidrightleg6_928 = {1, &anim_array_minibosswretchnidrightleg6_928[0]};
static bool anim_minibosswretchnidrightleg6_928_initialized;
class MinibossWretchnidRightLeg6_928 : public Active
{
public:
    MinibossWretchnidRightLeg6_928(int x, int y) : Active(x, y, MinibossWretchnidRightLeg6_928_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 6", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg6_928;
        if (!anim_minibosswretchnidrightleg6_928_initialized) {
            anim_minibosswretchnidrightleg6_928_initialized = true;
            images_minibosswretchnidrightleg6_928_0_0[0] = get_internal_image(9435);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
    }
};
FrameObject * create_minibosswretchnidrightleg6_928(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg6_928(x, y);
}
static Image* images_minibosswretchnidrightleg1_929_0_0[1];
static Direction direction_minibosswretchnidrightleg1_929_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg1_929_0_0, 1};
static Animation anim_minibosswretchnidrightleg1_929_0 = {&direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, NULL, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0, &direction_minibosswretchnidrightleg1_929_0_0};
static Animation * anim_array_minibosswretchnidrightleg1_929[1] = {&anim_minibosswretchnidrightleg1_929_0};
static Animations anim_minibosswretchnidrightleg1_929 = {1, &anim_array_minibosswretchnidrightleg1_929[0]};
static bool anim_minibosswretchnidrightleg1_929_initialized;
class MinibossWretchnidRightLeg1_929 : public Active
{
public:
    MinibossWretchnidRightLeg1_929(int x, int y) : Active(x, y, MinibossWretchnidRightLeg1_929_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 1", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg1_929;
        if (!anim_minibosswretchnidrightleg1_929_initialized) {
            anim_minibosswretchnidrightleg1_929_initialized = true;
            images_minibosswretchnidrightleg1_929_0_0[0] = get_internal_image(9433);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 315);
    }
};
FrameObject * create_minibosswretchnidrightleg1_929(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg1_929(x, y);
}
static Image* images_minibosswretchnidrightleg4_930_0_0[1];
static Direction direction_minibosswretchnidrightleg4_930_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidrightleg4_930_0_0, 1};
static Animation anim_minibosswretchnidrightleg4_930_0 = {&direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, NULL, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0, &direction_minibosswretchnidrightleg4_930_0_0};
static Animation * anim_array_minibosswretchnidrightleg4_930[1] = {&anim_minibosswretchnidrightleg4_930_0};
static Animations anim_minibosswretchnidrightleg4_930 = {1, &anim_array_minibosswretchnidrightleg4_930[0]};
static bool anim_minibosswretchnidrightleg4_930_initialized;
class MinibossWretchnidRightLeg4_930 : public Active
{
public:
    MinibossWretchnidRightLeg4_930(int x, int y) : Active(x, y, MinibossWretchnidRightLeg4_930_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidRightLeg 4", 28);
#endif
        this->animations = &anim_minibosswretchnidrightleg4_930;
        if (!anim_minibosswretchnidrightleg4_930_initialized) {
            anim_minibosswretchnidrightleg4_930_initialized = true;
            images_minibosswretchnidrightleg4_930_0_0[0] = get_internal_image(9433);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 45);
    }
};
FrameObject * create_minibosswretchnidrightleg4_930(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidRightLeg4_930(x, y);
}
static Image* images_minibosswretchnidleftleg1_931_0_0[1];
static Direction direction_minibosswretchnidleftleg1_931_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg1_931_0_0, 1};
static Animation anim_minibosswretchnidleftleg1_931_0 = {&direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, NULL, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0, &direction_minibosswretchnidleftleg1_931_0_0};
static Animation * anim_array_minibosswretchnidleftleg1_931[1] = {&anim_minibosswretchnidleftleg1_931_0};
static Animations anim_minibosswretchnidleftleg1_931 = {1, &anim_array_minibosswretchnidleftleg1_931[0]};
static bool anim_minibosswretchnidleftleg1_931_initialized;
class MinibossWretchnidLeftLeg1_931 : public Active
{
public:
    MinibossWretchnidLeftLeg1_931(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg1_931_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 1", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg1_931;
        if (!anim_minibosswretchnidleftleg1_931_initialized) {
            anim_minibosswretchnidleftleg1_931_initialized = true;
            images_minibosswretchnidleftleg1_931_0_0[0] = get_internal_image(9433);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 225);
    }
};
FrameObject * create_minibosswretchnidleftleg1_931(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg1_931(x, y);
}
static Image* images_minibosswretchnidleftleg4_932_0_0[1];
static Direction direction_minibosswretchnidleftleg4_932_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg4_932_0_0, 1};
static Animation anim_minibosswretchnidleftleg4_932_0 = {&direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, NULL, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0, &direction_minibosswretchnidleftleg4_932_0_0};
static Animation * anim_array_minibosswretchnidleftleg4_932[1] = {&anim_minibosswretchnidleftleg4_932_0};
static Animations anim_minibosswretchnidleftleg4_932 = {1, &anim_array_minibosswretchnidleftleg4_932[0]};
static bool anim_minibosswretchnidleftleg4_932_initialized;
class MinibossWretchnidLeftLeg4_932 : public Active
{
public:
    MinibossWretchnidLeftLeg4_932(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg4_932_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 4", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg4_932;
        if (!anim_minibosswretchnidleftleg4_932_initialized) {
            anim_minibosswretchnidleftleg4_932_initialized = true;
            images_minibosswretchnidleftleg4_932_0_0[0] = get_internal_image(9433);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 135);
    }
};
FrameObject * create_minibosswretchnidleftleg4_932(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg4_932(x, y);
}
static Image* images_minibosswretchnidleftleg2_933_0_0[1];
static Direction direction_minibosswretchnidleftleg2_933_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg2_933_0_0, 1};
static Animation anim_minibosswretchnidleftleg2_933_0 = {&direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, NULL, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0, &direction_minibosswretchnidleftleg2_933_0_0};
static Animation * anim_array_minibosswretchnidleftleg2_933[1] = {&anim_minibosswretchnidleftleg2_933_0};
static Animations anim_minibosswretchnidleftleg2_933 = {1, &anim_array_minibosswretchnidleftleg2_933[0]};
static bool anim_minibosswretchnidleftleg2_933_initialized;
class MinibossWretchnidLeftLeg2_933 : public Active
{
public:
    MinibossWretchnidLeftLeg2_933(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg2_933_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 2", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg2_933;
        if (!anim_minibosswretchnidleftleg2_933_initialized) {
            anim_minibosswretchnidleftleg2_933_initialized = true;
            images_minibosswretchnidleftleg2_933_0_0[0] = get_internal_image(1055);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 270);
    }
};
FrameObject * create_minibosswretchnidleftleg2_933(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg2_933(x, y);
}
static Image* images_minibosswretchnidleftleg5_934_0_0[1];
static Direction direction_minibosswretchnidleftleg5_934_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg5_934_0_0, 1};
static Animation anim_minibosswretchnidleftleg5_934_0 = {&direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, NULL, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0, &direction_minibosswretchnidleftleg5_934_0_0};
static Animation * anim_array_minibosswretchnidleftleg5_934[1] = {&anim_minibosswretchnidleftleg5_934_0};
static Animations anim_minibosswretchnidleftleg5_934 = {1, &anim_array_minibosswretchnidleftleg5_934[0]};
static bool anim_minibosswretchnidleftleg5_934_initialized;
class MinibossWretchnidLeftLeg5_934 : public Active
{
public:
    MinibossWretchnidLeftLeg5_934(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg5_934_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 5", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg5_934;
        if (!anim_minibosswretchnidleftleg5_934_initialized) {
            anim_minibosswretchnidleftleg5_934_initialized = true;
            images_minibosswretchnidleftleg5_934_0_0[0] = get_internal_image(1055);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 90);
    }
};
FrameObject * create_minibosswretchnidleftleg5_934(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg5_934(x, y);
}
static Image* images_minibosswretchnidleftleg3_935_0_0[1];
static Direction direction_minibosswretchnidleftleg3_935_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg3_935_0_0, 1};
static Animation anim_minibosswretchnidleftleg3_935_0 = {&direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, NULL, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0, &direction_minibosswretchnidleftleg3_935_0_0};
static Animation * anim_array_minibosswretchnidleftleg3_935[1] = {&anim_minibosswretchnidleftleg3_935_0};
static Animations anim_minibosswretchnidleftleg3_935 = {1, &anim_array_minibosswretchnidleftleg3_935[0]};
static bool anim_minibosswretchnidleftleg3_935_initialized;
class MinibossWretchnidLeftLeg3_935 : public Active
{
public:
    MinibossWretchnidLeftLeg3_935(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg3_935_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 3", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg3_935;
        if (!anim_minibosswretchnidleftleg3_935_initialized) {
            anim_minibosswretchnidleftleg3_935_initialized = true;
            images_minibosswretchnidleftleg3_935_0_0[0] = get_internal_image(9435);
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
FrameObject * create_minibosswretchnidleftleg3_935(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg3_935(x, y);
}
static Image* images_minibosswretchnidleftleg6_936_0_0[1];
static Direction direction_minibosswretchnidleftleg6_936_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidleftleg6_936_0_0, 1};
static Animation anim_minibosswretchnidleftleg6_936_0 = {&direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, NULL, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0, &direction_minibosswretchnidleftleg6_936_0_0};
static Animation * anim_array_minibosswretchnidleftleg6_936[1] = {&anim_minibosswretchnidleftleg6_936_0};
static Animations anim_minibosswretchnidleftleg6_936 = {1, &anim_array_minibosswretchnidleftleg6_936[0]};
static bool anim_minibosswretchnidleftleg6_936_initialized;
class MinibossWretchnidLeftLeg6_936 : public Active
{
public:
    MinibossWretchnidLeftLeg6_936(int x, int y) : Active(x, y, MinibossWretchnidLeftLeg6_936_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidLeftLeg 6", 27);
#endif
        this->animations = &anim_minibosswretchnidleftleg6_936;
        if (!anim_minibosswretchnidleftleg6_936_initialized) {
            anim_minibosswretchnidleftleg6_936_initialized = true;
            images_minibosswretchnidleftleg6_936_0_0[0] = get_internal_image(9435);
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
FrameObject * create_minibosswretchnidleftleg6_936(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidLeftLeg6_936(x, y);
}
static Image* images_fronttree_937_0_0[1];
static Direction direction_fronttree_937_0_0 = {0, 50, 50, 0, 1, images_fronttree_937_0_0, 1};
static Animation anim_fronttree_937_0 = {&direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, NULL, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0, &direction_fronttree_937_0_0};
static Animation * anim_array_fronttree_937[1] = {&anim_fronttree_937_0};
static Animations anim_fronttree_937 = {1, &anim_array_fronttree_937[0]};
static bool anim_fronttree_937_initialized;
class FrontTree_937 : public Active
{
public:
    FrontTree_937(int x, int y) : Active(x, y, FrontTree_937_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FrontTree", 9);
#endif
        this->animations = &anim_fronttree_937;
        if (!anim_fronttree_937_initialized) {
            anim_fronttree_937_initialized = true;
            images_fronttree_937_0_0[0] = get_internal_image(9415);
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
FrameObject * create_fronttree_937(int x, int y)
{
    return new (Active::pool.create()) FrontTree_937(x, y);
}
static Image* images_enemyturretus_938_0_0[8];
static Direction direction_enemyturretus_938_0_0 = {0, 20, 20, 0, -1, images_enemyturretus_938_0_0, 8};
static Image* images_enemyturretus_938_0_16[8];
static Direction direction_enemyturretus_938_0_16 = {16, 20, 20, 0, -1, images_enemyturretus_938_0_16, 8};
static Animation anim_enemyturretus_938_0 = {&direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, NULL, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, &direction_enemyturretus_938_0_16, NULL, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0, &direction_enemyturretus_938_0_0};
static Image* images_enemyturretus_938_7_0[15];
static Direction direction_enemyturretus_938_7_0 = {0, 25, 25, 0, 1, images_enemyturretus_938_7_0, 15};
static Image* images_enemyturretus_938_7_16[15];
static Direction direction_enemyturretus_938_7_16 = {16, 25, 25, 0, 1, images_enemyturretus_938_7_16, 15};
static Animation anim_enemyturretus_938_7 = {&direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, NULL, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, &direction_enemyturretus_938_7_16, NULL, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0, &direction_enemyturretus_938_7_0};
static Image* images_enemyturretus_938_8_0[1];
static Direction direction_enemyturretus_938_8_0 = {0, 50, 50, 0, -1, images_enemyturretus_938_8_0, 1};
static Image* images_enemyturretus_938_8_16[1];
static Direction direction_enemyturretus_938_8_16 = {16, 50, 50, 0, -1, images_enemyturretus_938_8_16, 1};
static Animation anim_enemyturretus_938_8 = {&direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, NULL, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, &direction_enemyturretus_938_8_16, NULL, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0, &direction_enemyturretus_938_8_0};
static Animation * anim_array_enemyturretus_938[9] = {&anim_enemyturretus_938_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyturretus_938_7, &anim_enemyturretus_938_8};
static Animations anim_enemyturretus_938 = {9, &anim_array_enemyturretus_938[0]};
static bool anim_enemyturretus_938_initialized;
class EnemyTurretus_938 : public Active
{
public:
    EnemyTurretus_938(int x, int y) : Active(x, y, EnemyTurretus_938_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_Turretus", 14);
#endif
        this->animations = &anim_enemyturretus_938;
        if (!anim_enemyturretus_938_initialized) {
            anim_enemyturretus_938_initialized = true;
            images_enemyturretus_938_0_0[0] = get_internal_image(1510);
            images_enemyturretus_938_0_0[1] = get_internal_image(1511);
            images_enemyturretus_938_0_0[2] = get_internal_image(1529);
            images_enemyturretus_938_0_0[3] = get_internal_image(1542);
            images_enemyturretus_938_0_0[4] = get_internal_image(1550);
            images_enemyturretus_938_0_0[5] = get_internal_image(1542);
            images_enemyturretus_938_0_0[6] = get_internal_image(1529);
            images_enemyturretus_938_0_0[7] = get_internal_image(1511);
            images_enemyturretus_938_0_16[0] = get_internal_image(1559);
            images_enemyturretus_938_0_16[1] = get_internal_image(1560);
            images_enemyturretus_938_0_16[2] = get_internal_image(1562);
            images_enemyturretus_938_0_16[3] = get_internal_image(1565);
            images_enemyturretus_938_0_16[4] = get_internal_image(1571);
            images_enemyturretus_938_0_16[5] = get_internal_image(1565);
            images_enemyturretus_938_0_16[6] = get_internal_image(1562);
            images_enemyturretus_938_0_16[7] = get_internal_image(1560);
            images_enemyturretus_938_7_0[0] = get_internal_image(1572);
            images_enemyturretus_938_7_0[1] = get_internal_image(1583);
            images_enemyturretus_938_7_0[2] = get_internal_image(1624);
            images_enemyturretus_938_7_0[3] = get_internal_image(1643);
            images_enemyturretus_938_7_0[4] = get_internal_image(1650);
            images_enemyturretus_938_7_0[5] = get_internal_image(1654);
            images_enemyturretus_938_7_0[6] = get_internal_image(1655);
            images_enemyturretus_938_7_0[7] = get_internal_image(1656);
            images_enemyturretus_938_7_0[8] = get_internal_image(1657);
            images_enemyturretus_938_7_0[9] = get_internal_image(1658);
            images_enemyturretus_938_7_0[10] = get_internal_image(1664);
            images_enemyturretus_938_7_0[11] = get_internal_image(1664);
            images_enemyturretus_938_7_0[12] = get_internal_image(1666);
            images_enemyturretus_938_7_0[13] = get_internal_image(1667);
            images_enemyturretus_938_7_0[14] = get_internal_image(1680);
            images_enemyturretus_938_7_16[0] = get_internal_image(1681);
            images_enemyturretus_938_7_16[1] = get_internal_image(1682);
            images_enemyturretus_938_7_16[2] = get_internal_image(1683);
            images_enemyturretus_938_7_16[3] = get_internal_image(1684);
            images_enemyturretus_938_7_16[4] = get_internal_image(1685);
            images_enemyturretus_938_7_16[5] = get_internal_image(1688);
            images_enemyturretus_938_7_16[6] = get_internal_image(1690);
            images_enemyturretus_938_7_16[7] = get_internal_image(1699);
            images_enemyturretus_938_7_16[8] = get_internal_image(1711);
            images_enemyturretus_938_7_16[9] = get_internal_image(1717);
            images_enemyturretus_938_7_16[10] = get_internal_image(1718);
            images_enemyturretus_938_7_16[11] = get_internal_image(1718);
            images_enemyturretus_938_7_16[12] = get_internal_image(1722);
            images_enemyturretus_938_7_16[13] = get_internal_image(1723);
            images_enemyturretus_938_7_16[14] = get_internal_image(1724);
            images_enemyturretus_938_8_0[0] = get_internal_image(1572);
            images_enemyturretus_938_8_16[0] = get_internal_image(1681);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(14);
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_enemyturretus_938(int x, int y)
{
    return new (Active::pool.create()) EnemyTurretus_938(x, y);
}
static Image* images_levelvalleyplatform1_939_0_0[1];
static Direction direction_levelvalleyplatform1_939_0_0 = {0, 100, 100, 0, 1, images_levelvalleyplatform1_939_0_0, 1};
static Animation anim_levelvalleyplatform1_939_0 = {&direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, NULL, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0, &direction_levelvalleyplatform1_939_0_0};
static Animation * anim_array_levelvalleyplatform1_939[1] = {&anim_levelvalleyplatform1_939_0};
static Animations anim_levelvalleyplatform1_939 = {1, &anim_array_levelvalleyplatform1_939[0]};
static bool anim_levelvalleyplatform1_939_initialized;
class LevelValleyPlatform1_939 : public Active
{
public:
    LevelValleyPlatform1_939(int x, int y) : Active(x, y, LevelValleyPlatform1_939_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_ValleyPlatform1", 21);
#endif
        this->animations = &anim_levelvalleyplatform1_939;
        if (!anim_levelvalleyplatform1_939_initialized) {
            anim_levelvalleyplatform1_939_initialized = true;
            images_levelvalleyplatform1_939_0_0[0] = get_internal_image(9247);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 10);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelvalleyplatform1_939(int x, int y)
{
    return new (Active::pool.create()) LevelValleyPlatform1_939(x, y);
}
static Image* images_levelmovingplatform2_940_0_0[1];
static Direction direction_levelmovingplatform2_940_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform2_940_0_0, 1};
static Animation anim_levelmovingplatform2_940_0 = {&direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, NULL, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0, &direction_levelmovingplatform2_940_0_0};
static Animation * anim_array_levelmovingplatform2_940[1] = {&anim_levelmovingplatform2_940_0};
static Animations anim_levelmovingplatform2_940 = {1, &anim_array_levelmovingplatform2_940[0]};
static bool anim_levelmovingplatform2_940_initialized;
class LevelMovingPlatform2_940 : public Active
{
public:
    LevelMovingPlatform2_940(int x, int y) : Active(x, y, LevelMovingPlatform2_940_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 2", 22);
#endif
        this->animations = &anim_levelmovingplatform2_940;
        if (!anim_levelmovingplatform2_940_initialized) {
            anim_levelmovingplatform2_940_initialized = true;
            images_levelmovingplatform2_940_0_0[0] = get_internal_image(602);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 120);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform2_940(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform2_940(x, y);
}
static Image* images_halfcorkscrewleft_941_0_0[1];
static Direction direction_halfcorkscrewleft_941_0_0 = {0, 50, 50, 0, 1, images_halfcorkscrewleft_941_0_0, 1};
static Animation anim_halfcorkscrewleft_941_0 = {&direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, NULL, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0, &direction_halfcorkscrewleft_941_0_0};
static Animation * anim_array_halfcorkscrewleft_941[1] = {&anim_halfcorkscrewleft_941_0};
static Animations anim_halfcorkscrewleft_941 = {1, &anim_array_halfcorkscrewleft_941[0]};
static bool anim_halfcorkscrewleft_941_initialized;
class HalfCorkscrewLeft_941 : public Active
{
public:
    HalfCorkscrewLeft_941(int x, int y) : Active(x, y, HalfCorkscrewLeft_941_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("HalfCorkscrew_Left", 18);
#endif
        set_visible(false);
        this->animations = &anim_halfcorkscrewleft_941;
        if (!anim_halfcorkscrewleft_941_initialized) {
            anim_halfcorkscrewleft_941_initialized = true;
            images_halfcorkscrewleft_941_0_0[0] = get_internal_image(231);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 80);
        alterables->values.set(3, 240);
        alterables->values.set(5, 100);
    }
};
FrameObject * create_halfcorkscrewleft_941(int x, int y)
{
    return new (Active::pool.create()) HalfCorkscrewLeft_941(x, y);
}
static Image* images_halfcorkscrewright_942_0_0[1];
static Direction direction_halfcorkscrewright_942_0_0 = {0, 50, 50, 0, 1, images_halfcorkscrewright_942_0_0, 1};
static Animation anim_halfcorkscrewright_942_0 = {&direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, NULL, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0, &direction_halfcorkscrewright_942_0_0};
static Animation * anim_array_halfcorkscrewright_942[1] = {&anim_halfcorkscrewright_942_0};
static Animations anim_halfcorkscrewright_942 = {1, &anim_array_halfcorkscrewright_942[0]};
static bool anim_halfcorkscrewright_942_initialized;
class HalfCorkscrewRight_942 : public Active
{
public:
    HalfCorkscrewRight_942(int x, int y) : Active(x, y, HalfCorkscrewRight_942_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("HalfCorkscrew_Right", 19);
#endif
        set_visible(false);
        this->animations = &anim_halfcorkscrewright_942;
        if (!anim_halfcorkscrewright_942_initialized) {
            anim_halfcorkscrewright_942_initialized = true;
            images_halfcorkscrewright_942_0_0[0] = get_internal_image(912);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 80);
        alterables->values.set(3, 240);
        alterables->values.set(5, 100);
    }
};
FrameObject * create_halfcorkscrewright_942(int x, int y)
{
    return new (Active::pool.create()) HalfCorkscrewRight_942(x, y);
}
static Image* images_enemygansekijr_943_0_0[1];
static Direction direction_enemygansekijr_943_0_0 = {0, 50, 50, 0, 1, images_enemygansekijr_943_0_0, 1};
static Image* images_enemygansekijr_943_0_16[1];
static Direction direction_enemygansekijr_943_0_16 = {16, 50, 50, 0, 1, images_enemygansekijr_943_0_16, 1};
static Animation anim_enemygansekijr_943_0 = {&direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, NULL, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, &direction_enemygansekijr_943_0_16, NULL, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0, &direction_enemygansekijr_943_0_0};
static Image* images_enemygansekijr_943_1_0[4];
static Direction direction_enemygansekijr_943_1_0 = {0, 25, 25, 0, -1, images_enemygansekijr_943_1_0, 4};
static Image* images_enemygansekijr_943_1_16[4];
static Direction direction_enemygansekijr_943_1_16 = {16, 25, 25, 0, -1, images_enemygansekijr_943_1_16, 4};
static Animation anim_enemygansekijr_943_1 = {&direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, NULL, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, &direction_enemygansekijr_943_1_16, NULL, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0, &direction_enemygansekijr_943_1_0};
static Image* images_enemygansekijr_943_8_0[1];
static Direction direction_enemygansekijr_943_8_0 = {0, 50, 50, 0, -1, images_enemygansekijr_943_8_0, 1};
static Image* images_enemygansekijr_943_8_16[1];
static Direction direction_enemygansekijr_943_8_16 = {16, 50, 50, 0, -1, images_enemygansekijr_943_8_16, 1};
static Animation anim_enemygansekijr_943_8 = {&direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, NULL, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, &direction_enemygansekijr_943_8_16, NULL, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0, &direction_enemygansekijr_943_8_0};
static Image* images_enemygansekijr_943_10_0[6];
static Direction direction_enemygansekijr_943_10_0 = {0, 25, 25, 5, 1, images_enemygansekijr_943_10_0, 6};
static Image* images_enemygansekijr_943_10_16[6];
static Direction direction_enemygansekijr_943_10_16 = {16, 25, 25, 5, 1, images_enemygansekijr_943_10_16, 6};
static Animation anim_enemygansekijr_943_10 = {&direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, NULL, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, &direction_enemygansekijr_943_10_16, NULL, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0, &direction_enemygansekijr_943_10_0};
static Image* images_enemygansekijr_943_11_0[7];
static Direction direction_enemygansekijr_943_11_0 = {0, 25, 25, 6, 6, images_enemygansekijr_943_11_0, 7};
static Image* images_enemygansekijr_943_11_16[7];
static Direction direction_enemygansekijr_943_11_16 = {16, 25, 25, 6, 6, images_enemygansekijr_943_11_16, 7};
static Animation anim_enemygansekijr_943_11 = {&direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, NULL, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, &direction_enemygansekijr_943_11_16, NULL, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0, &direction_enemygansekijr_943_11_0};
static Animation * anim_array_enemygansekijr_943[12] = {&anim_enemygansekijr_943_0, &anim_enemygansekijr_943_1, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemygansekijr_943_8, NULL, &anim_enemygansekijr_943_10, &anim_enemygansekijr_943_11};
static Animations anim_enemygansekijr_943 = {12, &anim_array_enemygansekijr_943[0]};
static bool anim_enemygansekijr_943_initialized;
class EnemyGansekiJr_943 : public Active
{
public:
    EnemyGansekiJr_943(int x, int y) : Active(x, y, EnemyGansekiJr_943_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_GansekiJr", 15);
#endif
        this->animations = &anim_enemygansekijr_943;
        if (!anim_enemygansekijr_943_initialized) {
            anim_enemygansekijr_943_initialized = true;
            images_enemygansekijr_943_0_0[0] = get_internal_image(4988);
            images_enemygansekijr_943_0_16[0] = get_internal_image(4991);
            images_enemygansekijr_943_1_0[0] = get_internal_image(5008);
            images_enemygansekijr_943_1_0[1] = get_internal_image(5004);
            images_enemygansekijr_943_1_0[2] = get_internal_image(5009);
            images_enemygansekijr_943_1_0[3] = get_internal_image(5006);
            images_enemygansekijr_943_1_16[0] = get_internal_image(5007);
            images_enemygansekijr_943_1_16[1] = get_internal_image(5027);
            images_enemygansekijr_943_1_16[2] = get_internal_image(5028);
            images_enemygansekijr_943_1_16[3] = get_internal_image(5029);
            images_enemygansekijr_943_8_0[0] = get_internal_image(4993);
            images_enemygansekijr_943_8_16[0] = get_internal_image(5002);
            images_enemygansekijr_943_10_0[0] = get_internal_image(4999);
            images_enemygansekijr_943_10_0[1] = get_internal_image(4995);
            images_enemygansekijr_943_10_0[2] = get_internal_image(4997);
            images_enemygansekijr_943_10_0[3] = get_internal_image(4988);
            images_enemygansekijr_943_10_0[4] = get_internal_image(4997);
            images_enemygansekijr_943_10_0[5] = get_internal_image(4988);
            images_enemygansekijr_943_10_16[0] = get_internal_image(5001);
            images_enemygansekijr_943_10_16[1] = get_internal_image(5000);
            images_enemygansekijr_943_10_16[2] = get_internal_image(4990);
            images_enemygansekijr_943_10_16[3] = get_internal_image(4991);
            images_enemygansekijr_943_10_16[4] = get_internal_image(4990);
            images_enemygansekijr_943_10_16[5] = get_internal_image(4991);
            images_enemygansekijr_943_11_0[0] = get_internal_image(4988);
            images_enemygansekijr_943_11_0[1] = get_internal_image(4997);
            images_enemygansekijr_943_11_0[2] = get_internal_image(4988);
            images_enemygansekijr_943_11_0[3] = get_internal_image(4997);
            images_enemygansekijr_943_11_0[4] = get_internal_image(4995);
            images_enemygansekijr_943_11_0[5] = get_internal_image(4999);
            images_enemygansekijr_943_11_0[6] = get_internal_image(4993);
            images_enemygansekijr_943_11_16[0] = get_internal_image(4991);
            images_enemygansekijr_943_11_16[1] = get_internal_image(4990);
            images_enemygansekijr_943_11_16[2] = get_internal_image(4991);
            images_enemygansekijr_943_11_16[3] = get_internal_image(4990);
            images_enemygansekijr_943_11_16[4] = get_internal_image(5000);
            images_enemygansekijr_943_11_16[5] = get_internal_image(5001);
            images_enemygansekijr_943_11_16[6] = get_internal_image(5002);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(14);
        create_alterables();
        alterables->values.set(0, 8);
        alterables->values.set(1, 5);
    }
};
FrameObject * create_enemygansekijr_943(int x, int y)
{
    return new (Active::pool.create()) EnemyGansekiJr_943(x, y);
}
static Image* images_enemydragonfly_944_0_0[15];
static Direction direction_enemydragonfly_944_0_0 = {0, 50, 50, 0, -1, images_enemydragonfly_944_0_0, 15};
static Image* images_enemydragonfly_944_0_16[15];
static Direction direction_enemydragonfly_944_0_16 = {16, 50, 50, 0, -1, images_enemydragonfly_944_0_16, 15};
static Animation anim_enemydragonfly_944_0 = {&direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, NULL, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, &direction_enemydragonfly_944_0_16, NULL, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0, &direction_enemydragonfly_944_0_0};
static Image* images_enemydragonfly_944_8_0[1];
static Direction direction_enemydragonfly_944_8_0 = {0, 50, 50, 0, -1, images_enemydragonfly_944_8_0, 1};
static Image* images_enemydragonfly_944_8_16[1];
static Direction direction_enemydragonfly_944_8_16 = {16, 50, 50, 0, -1, images_enemydragonfly_944_8_16, 1};
static Animation anim_enemydragonfly_944_8 = {&direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, NULL, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, &direction_enemydragonfly_944_8_16, NULL, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0, &direction_enemydragonfly_944_8_0};
static Image* images_enemydragonfly_944_9_0[3];
static Direction direction_enemydragonfly_944_9_0 = {0, 50, 50, 0, -1, images_enemydragonfly_944_9_0, 3};
static Image* images_enemydragonfly_944_9_16[3];
static Direction direction_enemydragonfly_944_9_16 = {16, 50, 50, 0, -1, images_enemydragonfly_944_9_16, 3};
static Animation anim_enemydragonfly_944_9 = {&direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, NULL, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, &direction_enemydragonfly_944_9_16, NULL, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0, &direction_enemydragonfly_944_9_0};
static Image* images_enemydragonfly_944_10_0[4];
static Direction direction_enemydragonfly_944_10_0 = {0, 20, 20, 0, 1, images_enemydragonfly_944_10_0, 4};
static Image* images_enemydragonfly_944_10_16[4];
static Direction direction_enemydragonfly_944_10_16 = {16, 20, 20, 0, 1, images_enemydragonfly_944_10_16, 4};
static Animation anim_enemydragonfly_944_10 = {&direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, NULL, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, &direction_enemydragonfly_944_10_16, NULL, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0, &direction_enemydragonfly_944_10_0};
static Image* images_enemydragonfly_944_11_0[3];
static Direction direction_enemydragonfly_944_11_0 = {0, 50, 50, 0, -1, images_enemydragonfly_944_11_0, 3};
static Image* images_enemydragonfly_944_11_16[3];
static Direction direction_enemydragonfly_944_11_16 = {16, 50, 50, 0, -1, images_enemydragonfly_944_11_16, 3};
static Animation anim_enemydragonfly_944_11 = {&direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, NULL, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, &direction_enemydragonfly_944_11_16, NULL, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0, &direction_enemydragonfly_944_11_0};
static Animation * anim_array_enemydragonfly_944[12] = {&anim_enemydragonfly_944_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemydragonfly_944_8, &anim_enemydragonfly_944_9, &anim_enemydragonfly_944_10, &anim_enemydragonfly_944_11};
static Animations anim_enemydragonfly_944 = {12, &anim_array_enemydragonfly_944[0]};
static bool anim_enemydragonfly_944_initialized;
class EnemyDragonfly_944 : public Active
{
public:
    EnemyDragonfly_944(int x, int y) : Active(x, y, EnemyDragonfly_944_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_Dragonfly", 15);
#endif
        this->animations = &anim_enemydragonfly_944;
        if (!anim_enemydragonfly_944_initialized) {
            anim_enemydragonfly_944_initialized = true;
            images_enemydragonfly_944_0_0[0] = get_internal_image(931);
            images_enemydragonfly_944_0_0[1] = get_internal_image(928);
            images_enemydragonfly_944_0_0[2] = get_internal_image(948);
            images_enemydragonfly_944_0_0[3] = get_internal_image(1097);
            images_enemydragonfly_944_0_0[4] = get_internal_image(1125);
            images_enemydragonfly_944_0_0[5] = get_internal_image(971);
            images_enemydragonfly_944_0_0[6] = get_internal_image(1106);
            images_enemydragonfly_944_0_0[7] = get_internal_image(1098);
            images_enemydragonfly_944_0_0[8] = get_internal_image(1099);
            images_enemydragonfly_944_0_0[9] = get_internal_image(1115);
            images_enemydragonfly_944_0_0[10] = get_internal_image(1111);
            images_enemydragonfly_944_0_0[11] = get_internal_image(1116);
            images_enemydragonfly_944_0_0[12] = get_internal_image(1121);
            images_enemydragonfly_944_0_0[13] = get_internal_image(1120);
            images_enemydragonfly_944_0_0[14] = get_internal_image(1123);
            images_enemydragonfly_944_0_16[0] = get_internal_image(1124);
            images_enemydragonfly_944_0_16[1] = get_internal_image(1127);
            images_enemydragonfly_944_0_16[2] = get_internal_image(1128);
            images_enemydragonfly_944_0_16[3] = get_internal_image(1129);
            images_enemydragonfly_944_0_16[4] = get_internal_image(1134);
            images_enemydragonfly_944_0_16[5] = get_internal_image(1136);
            images_enemydragonfly_944_0_16[6] = get_internal_image(1158);
            images_enemydragonfly_944_0_16[7] = get_internal_image(1173);
            images_enemydragonfly_944_0_16[8] = get_internal_image(1180);
            images_enemydragonfly_944_0_16[9] = get_internal_image(1181);
            images_enemydragonfly_944_0_16[10] = get_internal_image(1212);
            images_enemydragonfly_944_0_16[11] = get_internal_image(1214);
            images_enemydragonfly_944_0_16[12] = get_internal_image(1233);
            images_enemydragonfly_944_0_16[13] = get_internal_image(1235);
            images_enemydragonfly_944_0_16[14] = get_internal_image(1236);
            images_enemydragonfly_944_8_0[0] = get_internal_image(1255);
            images_enemydragonfly_944_8_16[0] = get_internal_image(1253);
            images_enemydragonfly_944_9_0[0] = get_internal_image(1259);
            images_enemydragonfly_944_9_0[1] = get_internal_image(1268);
            images_enemydragonfly_944_9_0[2] = get_internal_image(1277);
            images_enemydragonfly_944_9_16[0] = get_internal_image(1258);
            images_enemydragonfly_944_9_16[1] = get_internal_image(1278);
            images_enemydragonfly_944_9_16[2] = get_internal_image(1279);
            images_enemydragonfly_944_10_0[0] = get_internal_image(1286);
            images_enemydragonfly_944_10_0[1] = get_internal_image(1286);
            images_enemydragonfly_944_10_0[2] = get_internal_image(1288);
            images_enemydragonfly_944_10_0[3] = get_internal_image(1288);
            images_enemydragonfly_944_10_16[0] = get_internal_image(1282);
            images_enemydragonfly_944_10_16[1] = get_internal_image(1282);
            images_enemydragonfly_944_10_16[2] = get_internal_image(1294);
            images_enemydragonfly_944_10_16[3] = get_internal_image(1294);
            images_enemydragonfly_944_11_0[0] = get_internal_image(1310);
            images_enemydragonfly_944_11_0[1] = get_internal_image(1313);
            images_enemydragonfly_944_11_0[2] = get_internal_image(1297);
            images_enemydragonfly_944_11_16[0] = get_internal_image(1295);
            images_enemydragonfly_944_11_16[1] = get_internal_image(1328);
            images_enemydragonfly_944_11_16[2] = get_internal_image(1329);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(4, -2);
    }
};
FrameObject * create_enemydragonfly_944(int x, int y)
{
    return new (Active::pool.create()) EnemyDragonfly_944(x, y);
}
static Image* images_frontrock1_945_0_0[1];
static Direction direction_frontrock1_945_0_0 = {0, 50, 50, 0, 1, images_frontrock1_945_0_0, 1};
static Animation anim_frontrock1_945_0 = {&direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, NULL, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0, &direction_frontrock1_945_0_0};
static Animation * anim_array_frontrock1_945[1] = {&anim_frontrock1_945_0};
static Animations anim_frontrock1_945 = {1, &anim_array_frontrock1_945[0]};
static bool anim_frontrock1_945_initialized;
class FrontRock1_945 : public Active
{
public:
    FrontRock1_945(int x, int y) : Active(x, y, FrontRock1_945_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FrontRock1", 10);
#endif
        this->animations = &anim_frontrock1_945;
        if (!anim_frontrock1_945_initialized) {
            anim_frontrock1_945_initialized = true;
            images_frontrock1_945_0_0[0] = get_internal_image(7617);
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
FrameObject * create_frontrock1_945(int x, int y)
{
    return new (Active::pool.create()) FrontRock1_945(x, y);
}
static Image* images_bossserpentinebody_946_0_0[5];
static Direction direction_bossserpentinebody_946_0_0 = {0, 50, 50, 0, 1, images_bossserpentinebody_946_0_0, 5};
static Animation anim_bossserpentinebody_946_0 = {&direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, NULL, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0, &direction_bossserpentinebody_946_0_0};
static Animation * anim_array_bossserpentinebody_946[1] = {&anim_bossserpentinebody_946_0};
static Animations anim_bossserpentinebody_946 = {1, &anim_array_bossserpentinebody_946[0]};
static bool anim_bossserpentinebody_946_initialized;
class BossSerpentineBody_946 : public Active
{
public:
    BossSerpentineBody_946(int x, int y) : Active(x, y, BossSerpentineBody_946_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_SerpentineBody", 19);
#endif
        this->animations = &anim_bossserpentinebody_946;
        if (!anim_bossserpentinebody_946_initialized) {
            anim_bossserpentinebody_946_initialized = true;
            images_bossserpentinebody_946_0_0[0] = get_internal_image(4335);
            images_bossserpentinebody_946_0_0[1] = get_internal_image(4336);
            images_bossserpentinebody_946_0_0[2] = get_internal_image(4337);
            images_bossserpentinebody_946_0_0[3] = get_internal_image(4338);
            images_bossserpentinebody_946_0_0[4] = get_internal_image(4335);
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
FrameObject * create_bossserpentinebody_946(int x, int y)
{
    return new (Active::pool.create()) BossSerpentineBody_946(x, y);
}
static Image* images_npcserpentine_947_0_0[1];
static Direction direction_npcserpentine_947_0_0 = {0, 50, 50, 0, 1, images_npcserpentine_947_0_0, 1};
static Image* images_npcserpentine_947_0_1[1];
static Direction direction_npcserpentine_947_0_1 = {1, 50, 50, 0, 1, images_npcserpentine_947_0_1, 1};
static Image* images_npcserpentine_947_0_15[1];
static Direction direction_npcserpentine_947_0_15 = {15, 50, 50, 0, -1, images_npcserpentine_947_0_15, 1};
static Image* images_npcserpentine_947_0_16[1];
static Direction direction_npcserpentine_947_0_16 = {16, 50, 50, 0, 1, images_npcserpentine_947_0_16, 1};
static Image* images_npcserpentine_947_0_17[1];
static Direction direction_npcserpentine_947_0_17 = {17, 50, 50, 0, 1, images_npcserpentine_947_0_17, 1};
static Image* images_npcserpentine_947_0_31[1];
static Direction direction_npcserpentine_947_0_31 = {31, 50, 50, 0, -1, images_npcserpentine_947_0_31, 1};
static Animation anim_npcserpentine_947_0 = {&direction_npcserpentine_947_0_0, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, &direction_npcserpentine_947_0_1, NULL, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_15, &direction_npcserpentine_947_0_16, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, &direction_npcserpentine_947_0_17, NULL, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31, &direction_npcserpentine_947_0_31};
static Image* images_npcserpentine_947_1_0[8];
static Direction direction_npcserpentine_947_1_0 = {0, 25, 25, 2, -1, images_npcserpentine_947_1_0, 8};
static Image* images_npcserpentine_947_1_16[8];
static Direction direction_npcserpentine_947_1_16 = {16, 25, 25, 2, -1, images_npcserpentine_947_1_16, 8};
static Animation anim_npcserpentine_947_1 = {&direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, NULL, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, &direction_npcserpentine_947_1_16, NULL, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0, &direction_npcserpentine_947_1_0};
static Image* images_npcserpentine_947_5_0[24];
static Direction direction_npcserpentine_947_5_0 = {0, 0, 0, 0, -1, images_npcserpentine_947_5_0, 24};
static Image* images_npcserpentine_947_5_4[2];
static Direction direction_npcserpentine_947_5_4 = {4, 20, 20, 0, -1, images_npcserpentine_947_5_4, 2};
static Image* images_npcserpentine_947_5_5[1];
static Direction direction_npcserpentine_947_5_5 = {5, 20, 20, 0, -1, images_npcserpentine_947_5_5, 1};
static Image* images_npcserpentine_947_5_12[2];
static Direction direction_npcserpentine_947_5_12 = {12, 20, 20, 0, -1, images_npcserpentine_947_5_12, 2};
static Image* images_npcserpentine_947_5_13[2];
static Direction direction_npcserpentine_947_5_13 = {13, 50, 50, 0, 6, images_npcserpentine_947_5_13, 2};
static Image* images_npcserpentine_947_5_14[1];
static Direction direction_npcserpentine_947_5_14 = {14, 20, 20, 0, -1, images_npcserpentine_947_5_14, 1};
static Image* images_npcserpentine_947_5_16[24];
static Direction direction_npcserpentine_947_5_16 = {16, 0, 0, 0, -1, images_npcserpentine_947_5_16, 24};
static Image* images_npcserpentine_947_5_20[2];
static Direction direction_npcserpentine_947_5_20 = {20, 20, 20, 0, -1, images_npcserpentine_947_5_20, 2};
static Image* images_npcserpentine_947_5_21[1];
static Direction direction_npcserpentine_947_5_21 = {21, 20, 20, 0, -1, images_npcserpentine_947_5_21, 1};
static Image* images_npcserpentine_947_5_28[2];
static Direction direction_npcserpentine_947_5_28 = {28, 20, 20, 0, -1, images_npcserpentine_947_5_28, 2};
static Image* images_npcserpentine_947_5_29[2];
static Direction direction_npcserpentine_947_5_29 = {29, 50, 50, 0, 6, images_npcserpentine_947_5_29, 2};
static Image* images_npcserpentine_947_5_30[1];
static Direction direction_npcserpentine_947_5_30 = {30, 20, 20, 0, -1, images_npcserpentine_947_5_30, 1};
static Animation anim_npcserpentine_947_5 = {&direction_npcserpentine_947_5_0, &direction_npcserpentine_947_5_0, NULL, &direction_npcserpentine_947_5_4, &direction_npcserpentine_947_5_4, &direction_npcserpentine_947_5_5, &direction_npcserpentine_947_5_5, &direction_npcserpentine_947_5_5, &direction_npcserpentine_947_5_5, &direction_npcserpentine_947_5_12, &direction_npcserpentine_947_5_12, &direction_npcserpentine_947_5_12, &direction_npcserpentine_947_5_12, &direction_npcserpentine_947_5_13, &direction_npcserpentine_947_5_14, NULL, &direction_npcserpentine_947_5_16, &direction_npcserpentine_947_5_16, NULL, &direction_npcserpentine_947_5_20, &direction_npcserpentine_947_5_20, &direction_npcserpentine_947_5_21, &direction_npcserpentine_947_5_21, &direction_npcserpentine_947_5_21, &direction_npcserpentine_947_5_21, &direction_npcserpentine_947_5_28, &direction_npcserpentine_947_5_28, &direction_npcserpentine_947_5_28, &direction_npcserpentine_947_5_28, &direction_npcserpentine_947_5_29, &direction_npcserpentine_947_5_30, NULL};
static Image* images_npcserpentine_947_6_0[5];
static Direction direction_npcserpentine_947_6_0 = {0, 40, 40, 0, -1, images_npcserpentine_947_6_0, 5};
static Image* images_npcserpentine_947_6_16[5];
static Direction direction_npcserpentine_947_6_16 = {16, 40, 40, 0, -1, images_npcserpentine_947_6_16, 5};
static Animation anim_npcserpentine_947_6 = {&direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, NULL, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, &direction_npcserpentine_947_6_16, NULL, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0, &direction_npcserpentine_947_6_0};
static Image* images_npcserpentine_947_7_0[5];
static Direction direction_npcserpentine_947_7_0 = {0, 9, 9, 4, -1, images_npcserpentine_947_7_0, 5};
static Image* images_npcserpentine_947_7_1[5];
static Direction direction_npcserpentine_947_7_1 = {1, 9, 9, 4, -1, images_npcserpentine_947_7_1, 5};
static Image* images_npcserpentine_947_7_16[5];
static Direction direction_npcserpentine_947_7_16 = {16, 9, 9, 4, -1, images_npcserpentine_947_7_16, 5};
static Image* images_npcserpentine_947_7_17[5];
static Direction direction_npcserpentine_947_7_17 = {17, 9, 9, 4, -1, images_npcserpentine_947_7_17, 5};
static Animation anim_npcserpentine_947_7 = {&direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_1, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_16, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_17, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0, &direction_npcserpentine_947_7_0};
static Image* images_npcserpentine_947_8_0[8];
static Direction direction_npcserpentine_947_8_0 = {0, 50, 50, 7, -1, images_npcserpentine_947_8_0, 8};
static Image* images_npcserpentine_947_8_1[8];
static Direction direction_npcserpentine_947_8_1 = {1, 50, 50, 0, -1, images_npcserpentine_947_8_1, 8};
static Image* images_npcserpentine_947_8_16[8];
static Direction direction_npcserpentine_947_8_16 = {16, 50, 50, 7, -1, images_npcserpentine_947_8_16, 8};
static Image* images_npcserpentine_947_8_17[8];
static Direction direction_npcserpentine_947_8_17 = {17, 50, 50, 0, -1, images_npcserpentine_947_8_17, 8};
static Animation anim_npcserpentine_947_8 = {&direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_1, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_16, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_17, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0, &direction_npcserpentine_947_8_0};
static Image* images_npcserpentine_947_9_0[8];
static Direction direction_npcserpentine_947_9_0 = {0, 50, 50, 4, -1, images_npcserpentine_947_9_0, 8};
static Image* images_npcserpentine_947_9_1[8];
static Direction direction_npcserpentine_947_9_1 = {1, 50, 50, 4, -1, images_npcserpentine_947_9_1, 8};
static Image* images_npcserpentine_947_9_8[8];
static Direction direction_npcserpentine_947_9_8 = {8, 50, 50, 4, -1, images_npcserpentine_947_9_8, 8};
static Image* images_npcserpentine_947_9_16[8];
static Direction direction_npcserpentine_947_9_16 = {16, 50, 50, 4, -1, images_npcserpentine_947_9_16, 8};
static Image* images_npcserpentine_947_9_17[8];
static Direction direction_npcserpentine_947_9_17 = {17, 50, 50, 4, -1, images_npcserpentine_947_9_17, 8};
static Animation anim_npcserpentine_947_9 = {&direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_1, &direction_npcserpentine_947_9_1, &direction_npcserpentine_947_9_1, &direction_npcserpentine_947_9_1, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, &direction_npcserpentine_947_9_8, NULL, &direction_npcserpentine_947_9_16, &direction_npcserpentine_947_9_16, &direction_npcserpentine_947_9_16, &direction_npcserpentine_947_9_16, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_17, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0, &direction_npcserpentine_947_9_0};
static Image* images_npcserpentine_947_10_0[1];
static Direction direction_npcserpentine_947_10_0 = {0, 50, 50, 0, 1, images_npcserpentine_947_10_0, 1};
static Image* images_npcserpentine_947_10_1[6];
static Direction direction_npcserpentine_947_10_1 = {1, 50, 50, 0, -1, images_npcserpentine_947_10_1, 6};
static Image* images_npcserpentine_947_10_2[1];
static Direction direction_npcserpentine_947_10_2 = {2, 50, 50, 0, -1, images_npcserpentine_947_10_2, 1};
static Image* images_npcserpentine_947_10_16[1];
static Direction direction_npcserpentine_947_10_16 = {16, 50, 50, 0, 1, images_npcserpentine_947_10_16, 1};
static Image* images_npcserpentine_947_10_17[6];
static Direction direction_npcserpentine_947_10_17 = {17, 50, 50, 0, -1, images_npcserpentine_947_10_17, 6};
static Image* images_npcserpentine_947_10_18[1];
static Direction direction_npcserpentine_947_10_18 = {18, 50, 50, 0, -1, images_npcserpentine_947_10_18, 1};
static Animation anim_npcserpentine_947_10 = {&direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_1, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, &direction_npcserpentine_947_10_2, NULL, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_16, &direction_npcserpentine_947_10_17, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, &direction_npcserpentine_947_10_18, NULL, &direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_0, &direction_npcserpentine_947_10_0};
static Image* images_npcserpentine_947_11_0[13];
static Direction direction_npcserpentine_947_11_0 = {0, 12, 12, 3, 1, images_npcserpentine_947_11_0, 13};
static Image* images_npcserpentine_947_11_8[1];
static Direction direction_npcserpentine_947_11_8 = {8, 50, 50, 0, 1, images_npcserpentine_947_11_8, 1};
static Image* images_npcserpentine_947_11_16[13];
static Direction direction_npcserpentine_947_11_16 = {16, 12, 12, 3, 1, images_npcserpentine_947_11_16, 13};
static Animation anim_npcserpentine_947_11 = {&direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, NULL, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, &direction_npcserpentine_947_11_8, NULL, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, &direction_npcserpentine_947_11_16, NULL, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0, &direction_npcserpentine_947_11_0};
static Image* images_npcserpentine_947_12_0[1];
static Direction direction_npcserpentine_947_12_0 = {0, 100, 100, 0, 8, images_npcserpentine_947_12_0, 1};
static Animation anim_npcserpentine_947_12 = {&direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, NULL, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0, &direction_npcserpentine_947_12_0};
static Image* images_npcserpentine_947_13_0[11];
static Direction direction_npcserpentine_947_13_0 = {0, 100, 100, 5, 15, images_npcserpentine_947_13_0, 11};
static Animation anim_npcserpentine_947_13 = {&direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, NULL, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0, &direction_npcserpentine_947_13_0};
static Image* images_npcserpentine_947_14_1[1];
static Direction direction_npcserpentine_947_14_1 = {1, 50, 50, 0, 8, images_npcserpentine_947_14_1, 1};
static Image* images_npcserpentine_947_14_17[1];
static Direction direction_npcserpentine_947_14_17 = {17, 50, 50, 0, 8, images_npcserpentine_947_14_17, 1};
static Animation anim_npcserpentine_947_14 = {&direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, NULL, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, &direction_npcserpentine_947_14_17, NULL, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1, &direction_npcserpentine_947_14_1};
static Image* images_npcserpentine_947_15_0[1];
static Direction direction_npcserpentine_947_15_0 = {0, 50, 50, 0, -1, images_npcserpentine_947_15_0, 1};
static Image* images_npcserpentine_947_15_1[1];
static Direction direction_npcserpentine_947_15_1 = {1, 50, 50, 0, -1, images_npcserpentine_947_15_1, 1};
static Image* images_npcserpentine_947_15_16[1];
static Direction direction_npcserpentine_947_15_16 = {16, 50, 50, 0, -1, images_npcserpentine_947_15_16, 1};
static Image* images_npcserpentine_947_15_17[1];
static Direction direction_npcserpentine_947_15_17 = {17, 50, 50, 0, -1, images_npcserpentine_947_15_17, 1};
static Animation anim_npcserpentine_947_15 = {&direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_1, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_16, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_17, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0, &direction_npcserpentine_947_15_0};
static Image* images_npcserpentine_947_16_0[7];
static Direction direction_npcserpentine_947_16_0 = {0, 14, 14, 0, -1, images_npcserpentine_947_16_0, 7};
static Image* images_npcserpentine_947_16_16[7];
static Direction direction_npcserpentine_947_16_16 = {16, 14, 14, 0, -1, images_npcserpentine_947_16_16, 7};
static Animation anim_npcserpentine_947_16 = {&direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, NULL, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, &direction_npcserpentine_947_16_16, NULL, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0, &direction_npcserpentine_947_16_0};
static Image* images_npcserpentine_947_17_0[1];
static Direction direction_npcserpentine_947_17_0 = {0, 50, 50, 0, 1, images_npcserpentine_947_17_0, 1};
static Image* images_npcserpentine_947_17_16[3];
static Direction direction_npcserpentine_947_17_16 = {16, 100, 100, 0, -1, images_npcserpentine_947_17_16, 3};
static Image* images_npcserpentine_947_17_17[5];
static Direction direction_npcserpentine_947_17_17 = {17, 25, 25, 4, -1, images_npcserpentine_947_17_17, 5};
static Animation anim_npcserpentine_947_17 = {&direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, NULL, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_16, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_17, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0, &direction_npcserpentine_947_17_0};
static Animation * anim_array_npcserpentine_947[18] = {&anim_npcserpentine_947_0, &anim_npcserpentine_947_1, NULL, NULL, NULL, &anim_npcserpentine_947_5, &anim_npcserpentine_947_6, &anim_npcserpentine_947_7, &anim_npcserpentine_947_8, &anim_npcserpentine_947_9, &anim_npcserpentine_947_10, &anim_npcserpentine_947_11, &anim_npcserpentine_947_12, &anim_npcserpentine_947_13, &anim_npcserpentine_947_14, &anim_npcserpentine_947_15, &anim_npcserpentine_947_16, &anim_npcserpentine_947_17};
static Animations anim_npcserpentine_947 = {18, &anim_array_npcserpentine_947[0]};
static bool anim_npcserpentine_947_initialized;
class NPCSerpentine_947 : public Active
{
public:
    NPCSerpentine_947(int x, int y) : Active(x, y, NPCSerpentine_947_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Serpentine", 14);
#endif
        set_visible(false);
        this->animations = &anim_npcserpentine_947;
        if (!anim_npcserpentine_947_initialized) {
            anim_npcserpentine_947_initialized = true;
            images_npcserpentine_947_0_0[0] = get_internal_image(3757);
            images_npcserpentine_947_0_1[0] = get_internal_image(16130);
            images_npcserpentine_947_0_15[0] = get_internal_image(16133);
            images_npcserpentine_947_0_16[0] = get_internal_image(3362);
            images_npcserpentine_947_0_17[0] = get_internal_image(16132);
            images_npcserpentine_947_0_31[0] = get_internal_image(16131);
            images_npcserpentine_947_1_0[0] = get_internal_image(3757);
            images_npcserpentine_947_1_0[1] = get_internal_image(14764);
            images_npcserpentine_947_1_0[2] = get_internal_image(14765);
            images_npcserpentine_947_1_0[3] = get_internal_image(14767);
            images_npcserpentine_947_1_0[4] = get_internal_image(14768);
            images_npcserpentine_947_1_0[5] = get_internal_image(14769);
            images_npcserpentine_947_1_0[6] = get_internal_image(14770);
            images_npcserpentine_947_1_0[7] = get_internal_image(14792);
            images_npcserpentine_947_1_16[0] = get_internal_image(3362);
            images_npcserpentine_947_1_16[1] = get_internal_image(14794);
            images_npcserpentine_947_1_16[2] = get_internal_image(14795);
            images_npcserpentine_947_1_16[3] = get_internal_image(14805);
            images_npcserpentine_947_1_16[4] = get_internal_image(14806);
            images_npcserpentine_947_1_16[5] = get_internal_image(14811);
            images_npcserpentine_947_1_16[6] = get_internal_image(15115);
            images_npcserpentine_947_1_16[7] = get_internal_image(15120);
            images_npcserpentine_947_5_0[0] = get_internal_image(3757);
            images_npcserpentine_947_5_0[1] = get_internal_image(4084);
            images_npcserpentine_947_5_0[2] = get_internal_image(12827);
            images_npcserpentine_947_5_0[3] = get_internal_image(16112);
            images_npcserpentine_947_5_0[4] = get_internal_image(16114);
            images_npcserpentine_947_5_0[5] = get_internal_image(16115);
            images_npcserpentine_947_5_0[6] = get_internal_image(16116);
            images_npcserpentine_947_5_0[7] = get_internal_image(16117);
            images_npcserpentine_947_5_0[8] = get_internal_image(16118);
            images_npcserpentine_947_5_0[9] = get_internal_image(16119);
            images_npcserpentine_947_5_0[10] = get_internal_image(16120);
            images_npcserpentine_947_5_0[11] = get_internal_image(16119);
            images_npcserpentine_947_5_0[12] = get_internal_image(16121);
            images_npcserpentine_947_5_0[13] = get_internal_image(16122);
            images_npcserpentine_947_5_0[14] = get_internal_image(16123);
            images_npcserpentine_947_5_0[15] = get_internal_image(16124);
            images_npcserpentine_947_5_0[16] = get_internal_image(16125);
            images_npcserpentine_947_5_0[17] = get_internal_image(16126);
            images_npcserpentine_947_5_0[18] = get_internal_image(7899);
            images_npcserpentine_947_5_0[19] = get_internal_image(7907);
            images_npcserpentine_947_5_0[20] = get_internal_image(7908);
            images_npcserpentine_947_5_0[21] = get_internal_image(7875);
            images_npcserpentine_947_5_0[22] = get_internal_image(7876);
            images_npcserpentine_947_5_0[23] = get_internal_image(7877);
            images_npcserpentine_947_5_4[0] = get_internal_image(7696);
            images_npcserpentine_947_5_4[1] = get_internal_image(7697);
            images_npcserpentine_947_5_5[0] = get_internal_image(15354);
            images_npcserpentine_947_5_12[0] = get_internal_image(7700);
            images_npcserpentine_947_5_12[1] = get_internal_image(7701);
            images_npcserpentine_947_5_13[0] = get_internal_image(15487);
            images_npcserpentine_947_5_13[1] = get_internal_image(15488);
            images_npcserpentine_947_5_14[0] = get_internal_image(15369);
            images_npcserpentine_947_5_16[0] = get_internal_image(3362);
            images_npcserpentine_947_5_16[1] = get_internal_image(16143);
            images_npcserpentine_947_5_16[2] = get_internal_image(16144);
            images_npcserpentine_947_5_16[3] = get_internal_image(16145);
            images_npcserpentine_947_5_16[4] = get_internal_image(16146);
            images_npcserpentine_947_5_16[5] = get_internal_image(16152);
            images_npcserpentine_947_5_16[6] = get_internal_image(16153);
            images_npcserpentine_947_5_16[7] = get_internal_image(16154);
            images_npcserpentine_947_5_16[8] = get_internal_image(16155);
            images_npcserpentine_947_5_16[9] = get_internal_image(16156);
            images_npcserpentine_947_5_16[10] = get_internal_image(16157);
            images_npcserpentine_947_5_16[11] = get_internal_image(16156);
            images_npcserpentine_947_5_16[12] = get_internal_image(16158);
            images_npcserpentine_947_5_16[13] = get_internal_image(16159);
            images_npcserpentine_947_5_16[14] = get_internal_image(16160);
            images_npcserpentine_947_5_16[15] = get_internal_image(16161);
            images_npcserpentine_947_5_16[16] = get_internal_image(16162);
            images_npcserpentine_947_5_16[17] = get_internal_image(16163);
            images_npcserpentine_947_5_16[18] = get_internal_image(7934);
            images_npcserpentine_947_5_16[19] = get_internal_image(7936);
            images_npcserpentine_947_5_16[20] = get_internal_image(8731);
            images_npcserpentine_947_5_16[21] = get_internal_image(1290);
            images_npcserpentine_947_5_16[22] = get_internal_image(1369);
            images_npcserpentine_947_5_16[23] = get_internal_image(3275);
            images_npcserpentine_947_5_20[0] = get_internal_image(7705);
            images_npcserpentine_947_5_20[1] = get_internal_image(7706);
            images_npcserpentine_947_5_21[0] = get_internal_image(15368);
            images_npcserpentine_947_5_28[0] = get_internal_image(7698);
            images_npcserpentine_947_5_28[1] = get_internal_image(7699);
            images_npcserpentine_947_5_29[0] = get_internal_image(15389);
            images_npcserpentine_947_5_29[1] = get_internal_image(15391);
            images_npcserpentine_947_5_30[0] = get_internal_image(15370);
            images_npcserpentine_947_6_0[0] = get_internal_image(15346);
            images_npcserpentine_947_6_0[1] = get_internal_image(15347);
            images_npcserpentine_947_6_0[2] = get_internal_image(15348);
            images_npcserpentine_947_6_0[3] = get_internal_image(15349);
            images_npcserpentine_947_6_0[4] = get_internal_image(16131);
            images_npcserpentine_947_6_16[0] = get_internal_image(15350);
            images_npcserpentine_947_6_16[1] = get_internal_image(15351);
            images_npcserpentine_947_6_16[2] = get_internal_image(15352);
            images_npcserpentine_947_6_16[3] = get_internal_image(15353);
            images_npcserpentine_947_6_16[4] = get_internal_image(16133);
            images_npcserpentine_947_7_0[0] = get_internal_image(8733);
            images_npcserpentine_947_7_0[1] = get_internal_image(8733);
            images_npcserpentine_947_7_0[2] = get_internal_image(11717);
            images_npcserpentine_947_7_0[3] = get_internal_image(11717);
            images_npcserpentine_947_7_0[4] = get_internal_image(14377);
            images_npcserpentine_947_7_1[0] = get_internal_image(15335);
            images_npcserpentine_947_7_1[1] = get_internal_image(15335);
            images_npcserpentine_947_7_1[2] = get_internal_image(15336);
            images_npcserpentine_947_7_1[3] = get_internal_image(15336);
            images_npcserpentine_947_7_1[4] = get_internal_image(15337);
            images_npcserpentine_947_7_16[0] = get_internal_image(11728);
            images_npcserpentine_947_7_16[1] = get_internal_image(11728);
            images_npcserpentine_947_7_16[2] = get_internal_image(14450);
            images_npcserpentine_947_7_16[3] = get_internal_image(14450);
            images_npcserpentine_947_7_16[4] = get_internal_image(14456);
            images_npcserpentine_947_7_17[0] = get_internal_image(14461);
            images_npcserpentine_947_7_17[1] = get_internal_image(14461);
            images_npcserpentine_947_7_17[2] = get_internal_image(14464);
            images_npcserpentine_947_7_17[3] = get_internal_image(14464);
            images_npcserpentine_947_7_17[4] = get_internal_image(14492);
            images_npcserpentine_947_8_0[0] = get_internal_image(238);
            images_npcserpentine_947_8_0[1] = get_internal_image(14493);
            images_npcserpentine_947_8_0[2] = get_internal_image(336);
            images_npcserpentine_947_8_0[3] = get_internal_image(14493);
            images_npcserpentine_947_8_0[4] = get_internal_image(238);
            images_npcserpentine_947_8_0[5] = get_internal_image(14493);
            images_npcserpentine_947_8_0[6] = get_internal_image(336);
            images_npcserpentine_947_8_0[7] = get_internal_image(14493);
            images_npcserpentine_947_8_1[0] = get_internal_image(2614);
            images_npcserpentine_947_8_1[1] = get_internal_image(14761);
            images_npcserpentine_947_8_1[2] = get_internal_image(2616);
            images_npcserpentine_947_8_1[3] = get_internal_image(14761);
            images_npcserpentine_947_8_1[4] = get_internal_image(2614);
            images_npcserpentine_947_8_1[5] = get_internal_image(14761);
            images_npcserpentine_947_8_1[6] = get_internal_image(2616);
            images_npcserpentine_947_8_1[7] = get_internal_image(14761);
            images_npcserpentine_947_8_16[0] = get_internal_image(3024);
            images_npcserpentine_947_8_16[1] = get_internal_image(14762);
            images_npcserpentine_947_8_16[2] = get_internal_image(4949);
            images_npcserpentine_947_8_16[3] = get_internal_image(14762);
            images_npcserpentine_947_8_16[4] = get_internal_image(3024);
            images_npcserpentine_947_8_16[5] = get_internal_image(14762);
            images_npcserpentine_947_8_16[6] = get_internal_image(4949);
            images_npcserpentine_947_8_16[7] = get_internal_image(14762);
            images_npcserpentine_947_8_17[0] = get_internal_image(312);
            images_npcserpentine_947_8_17[1] = get_internal_image(14763);
            images_npcserpentine_947_8_17[2] = get_internal_image(2548);
            images_npcserpentine_947_8_17[3] = get_internal_image(14763);
            images_npcserpentine_947_8_17[4] = get_internal_image(312);
            images_npcserpentine_947_8_17[5] = get_internal_image(14763);
            images_npcserpentine_947_8_17[6] = get_internal_image(2548);
            images_npcserpentine_947_8_17[7] = get_internal_image(14763);
            images_npcserpentine_947_9_0[0] = get_internal_image(8733);
            images_npcserpentine_947_9_0[1] = get_internal_image(8733);
            images_npcserpentine_947_9_0[2] = get_internal_image(8733);
            images_npcserpentine_947_9_0[3] = get_internal_image(8733);
            images_npcserpentine_947_9_0[4] = get_internal_image(15122);
            images_npcserpentine_947_9_0[5] = get_internal_image(15204);
            images_npcserpentine_947_9_0[6] = get_internal_image(15327);
            images_npcserpentine_947_9_0[7] = get_internal_image(15329);
            images_npcserpentine_947_9_1[0] = get_internal_image(15335);
            images_npcserpentine_947_9_1[1] = get_internal_image(15335);
            images_npcserpentine_947_9_1[2] = get_internal_image(15335);
            images_npcserpentine_947_9_1[3] = get_internal_image(15335);
            images_npcserpentine_947_9_1[4] = get_internal_image(15330);
            images_npcserpentine_947_9_1[5] = get_internal_image(15331);
            images_npcserpentine_947_9_1[6] = get_internal_image(15333);
            images_npcserpentine_947_9_1[7] = get_internal_image(15334);
            images_npcserpentine_947_9_8[0] = get_internal_image(3055);
            images_npcserpentine_947_9_8[1] = get_internal_image(3055);
            images_npcserpentine_947_9_8[2] = get_internal_image(3055);
            images_npcserpentine_947_9_8[3] = get_internal_image(3055);
            images_npcserpentine_947_9_8[4] = get_internal_image(3056);
            images_npcserpentine_947_9_8[5] = get_internal_image(3057);
            images_npcserpentine_947_9_8[6] = get_internal_image(3058);
            images_npcserpentine_947_9_8[7] = get_internal_image(3060);
            images_npcserpentine_947_9_16[0] = get_internal_image(11728);
            images_npcserpentine_947_9_16[1] = get_internal_image(11728);
            images_npcserpentine_947_9_16[2] = get_internal_image(11728);
            images_npcserpentine_947_9_16[3] = get_internal_image(11728);
            images_npcserpentine_947_9_16[4] = get_internal_image(15020);
            images_npcserpentine_947_9_16[5] = get_internal_image(15110);
            images_npcserpentine_947_9_16[6] = get_internal_image(15576);
            images_npcserpentine_947_9_16[7] = get_internal_image(15820);
            images_npcserpentine_947_9_17[0] = get_internal_image(14461);
            images_npcserpentine_947_9_17[1] = get_internal_image(14461);
            images_npcserpentine_947_9_17[2] = get_internal_image(14461);
            images_npcserpentine_947_9_17[3] = get_internal_image(14461);
            images_npcserpentine_947_9_17[4] = get_internal_image(15338);
            images_npcserpentine_947_9_17[5] = get_internal_image(15339);
            images_npcserpentine_947_9_17[6] = get_internal_image(15340);
            images_npcserpentine_947_9_17[7] = get_internal_image(15341);
            images_npcserpentine_947_10_0[0] = get_internal_image(15344);
            images_npcserpentine_947_10_1[0] = get_internal_image(11030);
            images_npcserpentine_947_10_1[1] = get_internal_image(11031);
            images_npcserpentine_947_10_1[2] = get_internal_image(13687);
            images_npcserpentine_947_10_1[3] = get_internal_image(13687);
            images_npcserpentine_947_10_1[4] = get_internal_image(11031);
            images_npcserpentine_947_10_1[5] = get_internal_image(11030);
            images_npcserpentine_947_10_2[0] = get_internal_image(15493);
            images_npcserpentine_947_10_16[0] = get_internal_image(15345);
            images_npcserpentine_947_10_17[0] = get_internal_image(14457);
            images_npcserpentine_947_10_17[1] = get_internal_image(14462);
            images_npcserpentine_947_10_17[2] = get_internal_image(14463);
            images_npcserpentine_947_10_17[3] = get_internal_image(14463);
            images_npcserpentine_947_10_17[4] = get_internal_image(14462);
            images_npcserpentine_947_10_17[5] = get_internal_image(14457);
            images_npcserpentine_947_10_18[0] = get_internal_image(15495);
            images_npcserpentine_947_11_0[0] = get_internal_image(3757);
            images_npcserpentine_947_11_0[1] = get_internal_image(7707);
            images_npcserpentine_947_11_0[2] = get_internal_image(7709);
            images_npcserpentine_947_11_0[3] = get_internal_image(7726);
            images_npcserpentine_947_11_0[4] = get_internal_image(7727);
            images_npcserpentine_947_11_0[5] = get_internal_image(7726);
            images_npcserpentine_947_11_0[6] = get_internal_image(7709);
            images_npcserpentine_947_11_0[7] = get_internal_image(7726);
            images_npcserpentine_947_11_0[8] = get_internal_image(7730);
            images_npcserpentine_947_11_0[9] = get_internal_image(7726);
            images_npcserpentine_947_11_0[10] = get_internal_image(7709);
            images_npcserpentine_947_11_0[11] = get_internal_image(7707);
            images_npcserpentine_947_11_0[12] = get_internal_image(3757);
            images_npcserpentine_947_11_8[0] = get_internal_image(591);
            images_npcserpentine_947_11_16[0] = get_internal_image(3362);
            images_npcserpentine_947_11_16[1] = get_internal_image(7731);
            images_npcserpentine_947_11_16[2] = get_internal_image(7736);
            images_npcserpentine_947_11_16[3] = get_internal_image(7737);
            images_npcserpentine_947_11_16[4] = get_internal_image(7738);
            images_npcserpentine_947_11_16[5] = get_internal_image(7737);
            images_npcserpentine_947_11_16[6] = get_internal_image(7736);
            images_npcserpentine_947_11_16[7] = get_internal_image(7737);
            images_npcserpentine_947_11_16[8] = get_internal_image(7739);
            images_npcserpentine_947_11_16[9] = get_internal_image(7737);
            images_npcserpentine_947_11_16[10] = get_internal_image(7736);
            images_npcserpentine_947_11_16[11] = get_internal_image(7731);
            images_npcserpentine_947_11_16[12] = get_internal_image(3362);
            images_npcserpentine_947_12_0[0] = get_internal_image(7748);
            images_npcserpentine_947_13_0[0] = get_internal_image(7635);
            images_npcserpentine_947_13_0[1] = get_internal_image(7635);
            images_npcserpentine_947_13_0[2] = get_internal_image(7635);
            images_npcserpentine_947_13_0[3] = get_internal_image(7635);
            images_npcserpentine_947_13_0[4] = get_internal_image(7638);
            images_npcserpentine_947_13_0[5] = get_internal_image(7640);
            images_npcserpentine_947_13_0[6] = get_internal_image(7652);
            images_npcserpentine_947_13_0[7] = get_internal_image(7656);
            images_npcserpentine_947_13_0[8] = get_internal_image(7658);
            images_npcserpentine_947_13_0[9] = get_internal_image(7659);
            images_npcserpentine_947_13_0[10] = get_internal_image(7660);
            images_npcserpentine_947_14_1[0] = get_internal_image(15342);
            images_npcserpentine_947_14_17[0] = get_internal_image(15343);
            images_npcserpentine_947_15_0[0] = get_internal_image(7740);
            images_npcserpentine_947_15_1[0] = get_internal_image(7742);
            images_npcserpentine_947_15_16[0] = get_internal_image(7743);
            images_npcserpentine_947_15_17[0] = get_internal_image(7741);
            images_npcserpentine_947_16_0[0] = get_internal_image(7661);
            images_npcserpentine_947_16_0[1] = get_internal_image(7662);
            images_npcserpentine_947_16_0[2] = get_internal_image(7664);
            images_npcserpentine_947_16_0[3] = get_internal_image(7664);
            images_npcserpentine_947_16_0[4] = get_internal_image(7664);
            images_npcserpentine_947_16_0[5] = get_internal_image(7662);
            images_npcserpentine_947_16_0[6] = get_internal_image(7661);
            images_npcserpentine_947_16_16[0] = get_internal_image(7665);
            images_npcserpentine_947_16_16[1] = get_internal_image(7694);
            images_npcserpentine_947_16_16[2] = get_internal_image(7695);
            images_npcserpentine_947_16_16[3] = get_internal_image(7695);
            images_npcserpentine_947_16_16[4] = get_internal_image(7695);
            images_npcserpentine_947_16_16[5] = get_internal_image(7694);
            images_npcserpentine_947_16_16[6] = get_internal_image(7665);
            images_npcserpentine_947_17_0[0] = get_internal_image(7151);
            images_npcserpentine_947_17_16[0] = get_internal_image(7749);
            images_npcserpentine_947_17_16[1] = get_internal_image(7758);
            images_npcserpentine_947_17_16[2] = get_internal_image(7759);
            images_npcserpentine_947_17_17[0] = get_internal_image(7749);
            images_npcserpentine_947_17_17[1] = get_internal_image(7874);
            images_npcserpentine_947_17_17[2] = get_internal_image(7873);
            images_npcserpentine_947_17_17[3] = get_internal_image(7872);
            images_npcserpentine_947_17_17[4] = get_internal_image(6295);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
    }
};
FrameObject * create_npcserpentine_947(int x, int y)
{
    return new (Active::pool.create()) NPCSerpentine_947(x, y);
}
static Image* images_bossserpentinehead_948_0_0[5];
static Direction direction_bossserpentinehead_948_0_0 = {0, 8, 8, 0, 1, images_bossserpentinehead_948_0_0, 5};
static Image* images_bossserpentinehead_948_0_8[7];
static Direction direction_bossserpentinehead_948_0_8 = {8, 50, 50, 0, 1, images_bossserpentinehead_948_0_8, 7};
static Image* images_bossserpentinehead_948_0_16[5];
static Direction direction_bossserpentinehead_948_0_16 = {16, 8, 8, 0, 1, images_bossserpentinehead_948_0_16, 5};
static Image* images_bossserpentinehead_948_0_24[1];
static Direction direction_bossserpentinehead_948_0_24 = {24, 50, 50, 0, 1, images_bossserpentinehead_948_0_24, 1};
static Animation anim_bossserpentinehead_948_0 = {&direction_bossserpentinehead_948_0_0, &direction_bossserpentinehead_948_0_0, &direction_bossserpentinehead_948_0_0, &direction_bossserpentinehead_948_0_0, NULL, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, &direction_bossserpentinehead_948_0_8, NULL, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, &direction_bossserpentinehead_948_0_16, NULL, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, &direction_bossserpentinehead_948_0_24, NULL, &direction_bossserpentinehead_948_0_0, &direction_bossserpentinehead_948_0_0, &direction_bossserpentinehead_948_0_0};
static Image* images_bossserpentinehead_948_5_0[1];
static Direction direction_bossserpentinehead_948_5_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_5_0, 1};
static Image* images_bossserpentinehead_948_5_16[1];
static Direction direction_bossserpentinehead_948_5_16 = {16, 50, 50, 0, -1, images_bossserpentinehead_948_5_16, 1};
static Animation anim_bossserpentinehead_948_5 = {&direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, NULL, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, &direction_bossserpentinehead_948_5_16, NULL, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0, &direction_bossserpentinehead_948_5_0};
static Image* images_bossserpentinehead_948_7_0[1];
static Direction direction_bossserpentinehead_948_7_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_7_0, 1};
static Image* images_bossserpentinehead_948_7_16[1];
static Direction direction_bossserpentinehead_948_7_16 = {16, 50, 50, 0, -1, images_bossserpentinehead_948_7_16, 1};
static Animation anim_bossserpentinehead_948_7 = {&direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, NULL, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, &direction_bossserpentinehead_948_7_16, NULL, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0, &direction_bossserpentinehead_948_7_0};
static Image* images_bossserpentinehead_948_8_0[1];
static Direction direction_bossserpentinehead_948_8_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_8_0, 1};
static Image* images_bossserpentinehead_948_8_16[1];
static Direction direction_bossserpentinehead_948_8_16 = {16, 50, 50, 0, -1, images_bossserpentinehead_948_8_16, 1};
static Animation anim_bossserpentinehead_948_8 = {&direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, NULL, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, &direction_bossserpentinehead_948_8_16, NULL, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0, &direction_bossserpentinehead_948_8_0};
static Image* images_bossserpentinehead_948_9_0[3];
static Direction direction_bossserpentinehead_948_9_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_9_0, 3};
static Animation anim_bossserpentinehead_948_9 = {&direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, NULL, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0, &direction_bossserpentinehead_948_9_0};
static Image* images_bossserpentinehead_948_10_0[2];
static Direction direction_bossserpentinehead_948_10_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_10_0, 2};
static Image* images_bossserpentinehead_948_10_16[2];
static Direction direction_bossserpentinehead_948_10_16 = {16, 50, 50, 0, -1, images_bossserpentinehead_948_10_16, 2};
static Animation anim_bossserpentinehead_948_10 = {&direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, NULL, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, &direction_bossserpentinehead_948_10_16, NULL, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0, &direction_bossserpentinehead_948_10_0};
static Image* images_bossserpentinehead_948_11_8[3];
static Direction direction_bossserpentinehead_948_11_8 = {8, 50, 50, 0, -1, images_bossserpentinehead_948_11_8, 3};
static Animation anim_bossserpentinehead_948_11 = {&direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, NULL, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8, &direction_bossserpentinehead_948_11_8};
static Image* images_bossserpentinehead_948_12_0[1];
static Direction direction_bossserpentinehead_948_12_0 = {0, 50, 50, 0, -1, images_bossserpentinehead_948_12_0, 1};
static Image* images_bossserpentinehead_948_12_16[1];
static Direction direction_bossserpentinehead_948_12_16 = {16, 50, 50, 0, -1, images_bossserpentinehead_948_12_16, 1};
static Animation anim_bossserpentinehead_948_12 = {&direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, NULL, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, &direction_bossserpentinehead_948_12_16, NULL, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0, &direction_bossserpentinehead_948_12_0};
static Image* images_bossserpentinehead_948_13_0[10];
static Direction direction_bossserpentinehead_948_13_0 = {0, 25, 25, 0, 1, images_bossserpentinehead_948_13_0, 10};
static Animation anim_bossserpentinehead_948_13 = {&direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, NULL, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0, &direction_bossserpentinehead_948_13_0};
static Animation * anim_array_bossserpentinehead_948[14] = {&anim_bossserpentinehead_948_0, NULL, NULL, NULL, NULL, &anim_bossserpentinehead_948_5, NULL, &anim_bossserpentinehead_948_7, &anim_bossserpentinehead_948_8, &anim_bossserpentinehead_948_9, &anim_bossserpentinehead_948_10, &anim_bossserpentinehead_948_11, &anim_bossserpentinehead_948_12, &anim_bossserpentinehead_948_13};
static Animations anim_bossserpentinehead_948 = {14, &anim_array_bossserpentinehead_948[0]};
static bool anim_bossserpentinehead_948_initialized;
class BossSerpentineHead_948 : public Active
{
public:
    BossSerpentineHead_948(int x, int y) : Active(x, y, BossSerpentineHead_948_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Boss_SerpentineHead", 19);
#endif
        this->animations = &anim_bossserpentinehead_948;
        if (!anim_bossserpentinehead_948_initialized) {
            anim_bossserpentinehead_948_initialized = true;
            images_bossserpentinehead_948_0_0[0] = get_internal_image(3633);
            images_bossserpentinehead_948_0_0[1] = get_internal_image(3667);
            images_bossserpentinehead_948_0_0[2] = get_internal_image(3668);
            images_bossserpentinehead_948_0_0[3] = get_internal_image(3669);
            images_bossserpentinehead_948_0_0[4] = get_internal_image(3670);
            images_bossserpentinehead_948_0_8[0] = get_internal_image(3670);
            images_bossserpentinehead_948_0_8[1] = get_internal_image(3614);
            images_bossserpentinehead_948_0_8[2] = get_internal_image(3633);
            images_bossserpentinehead_948_0_8[3] = get_internal_image(3667);
            images_bossserpentinehead_948_0_8[4] = get_internal_image(3668);
            images_bossserpentinehead_948_0_8[5] = get_internal_image(3669);
            images_bossserpentinehead_948_0_8[6] = get_internal_image(3670);
            images_bossserpentinehead_948_0_16[0] = get_internal_image(3632);
            images_bossserpentinehead_948_0_16[1] = get_internal_image(3671);
            images_bossserpentinehead_948_0_16[2] = get_internal_image(3838);
            images_bossserpentinehead_948_0_16[3] = get_internal_image(3878);
            images_bossserpentinehead_948_0_16[4] = get_internal_image(3882);
            images_bossserpentinehead_948_0_24[0] = get_internal_image(3614);
            images_bossserpentinehead_948_5_0[0] = get_internal_image(3897);
            images_bossserpentinehead_948_5_16[0] = get_internal_image(3902);
            images_bossserpentinehead_948_7_0[0] = get_internal_image(3904);
            images_bossserpentinehead_948_7_16[0] = get_internal_image(3900);
            images_bossserpentinehead_948_8_0[0] = get_internal_image(3921);
            images_bossserpentinehead_948_8_16[0] = get_internal_image(3905);
            images_bossserpentinehead_948_9_0[0] = get_internal_image(1493);
            images_bossserpentinehead_948_9_0[1] = get_internal_image(1490);
            images_bossserpentinehead_948_9_0[2] = get_internal_image(1518);
            images_bossserpentinehead_948_10_0[0] = get_internal_image(3489);
            images_bossserpentinehead_948_10_0[1] = get_internal_image(3621);
            images_bossserpentinehead_948_10_16[0] = get_internal_image(3620);
            images_bossserpentinehead_948_10_16[1] = get_internal_image(3622);
            images_bossserpentinehead_948_11_8[0] = get_internal_image(3490);
            images_bossserpentinehead_948_11_8[1] = get_internal_image(3614);
            images_bossserpentinehead_948_11_8[2] = get_internal_image(3608);
            images_bossserpentinehead_948_12_0[0] = get_internal_image(3630);
            images_bossserpentinehead_948_12_16[0] = get_internal_image(3631);
            images_bossserpentinehead_948_13_0[0] = get_internal_image(346);
            images_bossserpentinehead_948_13_0[1] = get_internal_image(359);
            images_bossserpentinehead_948_13_0[2] = get_internal_image(362);
            images_bossserpentinehead_948_13_0[3] = get_internal_image(363);
            images_bossserpentinehead_948_13_0[4] = get_internal_image(364);
            images_bossserpentinehead_948_13_0[5] = get_internal_image(470);
            images_bossserpentinehead_948_13_0[6] = get_internal_image(477);
            images_bossserpentinehead_948_13_0[7] = get_internal_image(479);
            images_bossserpentinehead_948_13_0[8] = get_internal_image(501);
            images_bossserpentinehead_948_13_0[9] = get_internal_image(501);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, -30);
        alterables->values.set(7, -1);
        alterables->values.set(8, 180);
        alterables->values.set(9, 12);
        alterables->values.set(10, -1);
    }
};
FrameObject * create_bossserpentinehead_948(int x, int y)
{
    return new (Active::pool.create()) BossSerpentineHead_948(x, y);
}
static Image* images_levelmovingplatform3_949_0_0[1];
static Direction direction_levelmovingplatform3_949_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform3_949_0_0, 1};
static Animation anim_levelmovingplatform3_949_0 = {&direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, NULL, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0, &direction_levelmovingplatform3_949_0_0};
static Animation * anim_array_levelmovingplatform3_949[1] = {&anim_levelmovingplatform3_949_0};
static Animations anim_levelmovingplatform3_949 = {1, &anim_array_levelmovingplatform3_949[0]};
static bool anim_levelmovingplatform3_949_initialized;
class LevelMovingPlatform3_949 : public Active
{
public:
    LevelMovingPlatform3_949(int x, int y) : Active(x, y, LevelMovingPlatform3_949_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 3", 22);
#endif
        this->animations = &anim_levelmovingplatform3_949;
        if (!anim_levelmovingplatform3_949_initialized) {
            anim_levelmovingplatform3_949_initialized = true;
            images_levelmovingplatform3_949_0_0[0] = get_internal_image(9247);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 100);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform3_949(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform3_949(x, y);
}
static Image* images_hazardspikesup_950_0_0[1];
static Direction direction_hazardspikesup_950_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_950_0_0, 1};
static Animation anim_hazardspikesup_950_0 = {&direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, NULL, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0, &direction_hazardspikesup_950_0_0};
static Animation * anim_array_hazardspikesup_950[1] = {&anim_hazardspikesup_950_0};
static Animations anim_hazardspikesup_950 = {1, &anim_array_hazardspikesup_950[0]};
static bool anim_hazardspikesup_950_initialized;
class HazardSpikesUp_950 : public Active
{
public:
    HazardSpikesUp_950(int x, int y) : Active(x, y, HazardSpikesUp_950_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_950;
        if (!anim_hazardspikesup_950_initialized) {
            anim_hazardspikesup_950_initialized = true;
            images_hazardspikesup_950_0_0[0] = get_internal_image(6556);
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
FrameObject * create_hazardspikesup_950(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_950(x, y);
}
static Image* images_breakablerock_951_0_0[1];
static Direction direction_breakablerock_951_0_0 = {0, 100, 100, 0, 1, images_breakablerock_951_0_0, 1};
static Animation anim_breakablerock_951_0 = {&direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, NULL, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0, &direction_breakablerock_951_0_0};
static Animation * anim_array_breakablerock_951[1] = {&anim_breakablerock_951_0};
static Animations anim_breakablerock_951 = {1, &anim_array_breakablerock_951[0]};
static bool anim_breakablerock_951_initialized;
class BreakableRock_951 : public Active
{
public:
    BreakableRock_951(int x, int y) : Active(x, y, BreakableRock_951_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableRock", 13);
#endif
        this->animations = &anim_breakablerock_951;
        if (!anim_breakablerock_951_initialized) {
            anim_breakablerock_951_initialized = true;
            images_breakablerock_951_0_0[0] = get_internal_image(2391);
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
FrameObject * create_breakablerock_951(int x, int y)
{
    return new (Active::pool.create()) BreakableRock_951(x, y);
}
static Image* images_minibosswretchnidbase_952_0_0[1];
static Direction direction_minibosswretchnidbase_952_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidbase_952_0_0, 1};
static Animation anim_minibosswretchnidbase_952_0 = {&direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, NULL, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0, &direction_minibosswretchnidbase_952_0_0};
static Image* images_minibosswretchnidbase_952_10_0[2];
static Direction direction_minibosswretchnidbase_952_10_0 = {0, 50, 50, 0, -1, images_minibosswretchnidbase_952_10_0, 2};
static Animation anim_minibosswretchnidbase_952_10 = {&direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, NULL, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0, &direction_minibosswretchnidbase_952_10_0};
static Animation * anim_array_minibosswretchnidbase_952[11] = {&anim_minibosswretchnidbase_952_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosswretchnidbase_952_10};
static Animations anim_minibosswretchnidbase_952 = {11, &anim_array_minibosswretchnidbase_952[0]};
static bool anim_minibosswretchnidbase_952_initialized;
class MinibossWretchnidBase_952 : public Active
{
public:
    MinibossWretchnidBase_952(int x, int y) : Active(x, y, MinibossWretchnidBase_952_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidBase", 22);
#endif
        this->animations = &anim_minibosswretchnidbase_952;
        if (!anim_minibosswretchnidbase_952_initialized) {
            anim_minibosswretchnidbase_952_initialized = true;
            images_minibosswretchnidbase_952_0_0[0] = get_internal_image(1465);
            images_minibosswretchnidbase_952_10_0[0] = get_internal_image(1495);
            images_minibosswretchnidbase_952_10_0[1] = get_internal_image(76);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 25);
        alterables->values.set(4, 1);
        alterables->values.set(5, 270);
    }
};
FrameObject * create_minibosswretchnidbase_952(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidBase_952(x, y);
}
static Image* images_minibosswretchnidturret_953_0_0[1];
static Direction direction_minibosswretchnidturret_953_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidturret_953_0_0, 1};
static Animation anim_minibosswretchnidturret_953_0 = {&direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, NULL, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0, &direction_minibosswretchnidturret_953_0_0};
static Image* images_minibosswretchnidturret_953_7_0[3];
static Direction direction_minibosswretchnidturret_953_7_0 = {0, 50, 50, 0, -1, images_minibosswretchnidturret_953_7_0, 3};
static Animation anim_minibosswretchnidturret_953_7 = {&direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, NULL, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0, &direction_minibosswretchnidturret_953_7_0};
static Animation * anim_array_minibosswretchnidturret_953[8] = {&anim_minibosswretchnidturret_953_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosswretchnidturret_953_7};
static Animations anim_minibosswretchnidturret_953 = {8, &anim_array_minibosswretchnidturret_953[0]};
static bool anim_minibosswretchnidturret_953_initialized;
class MinibossWretchnidTurret_953 : public Active
{
public:
    MinibossWretchnidTurret_953(int x, int y) : Active(x, y, MinibossWretchnidTurret_953_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidTurret", 24);
#endif
        this->animations = &anim_minibosswretchnidturret_953;
        if (!anim_minibosswretchnidturret_953_initialized) {
            anim_minibosswretchnidturret_953_initialized = true;
            images_minibosswretchnidturret_953_0_0[0] = get_internal_image(1958);
            images_minibosswretchnidturret_953_7_0[0] = get_internal_image(216);
            images_minibosswretchnidturret_953_7_0[1] = get_internal_image(232);
            images_minibosswretchnidturret_953_7_0[2] = get_internal_image(265);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibosswretchnidturret_953(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidTurret_953(x, y);
}
static Image* images_minibosswretchnidweakspot_954_0_0[1];
static Direction direction_minibosswretchnidweakspot_954_0_0 = {0, 50, 50, 0, 1, images_minibosswretchnidweakspot_954_0_0, 1};
static Animation anim_minibosswretchnidweakspot_954_0 = {&direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, NULL, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0, &direction_minibosswretchnidweakspot_954_0_0};
static Animation * anim_array_minibosswretchnidweakspot_954[1] = {&anim_minibosswretchnidweakspot_954_0};
static Animations anim_minibosswretchnidweakspot_954 = {1, &anim_array_minibosswretchnidweakspot_954[0]};
static bool anim_minibosswretchnidweakspot_954_initialized;
class MinibossWretchnidWeakspot_954 : public Active
{
public:
    MinibossWretchnidWeakspot_954(int x, int y) : Active(x, y, MinibossWretchnidWeakspot_954_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Miniboss_WretchnidWeakspot", 26);
#endif
        set_visible(false);
        this->animations = &anim_minibosswretchnidweakspot_954;
        if (!anim_minibosswretchnidweakspot_954_initialized) {
            anim_minibosswretchnidweakspot_954_initialized = true;
            images_minibosswretchnidweakspot_954_0_0[0] = get_internal_image(169);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
    }
};
FrameObject * create_minibosswretchnidweakspot_954(int x, int y)
{
    return new (Active::pool.create()) MinibossWretchnidWeakspot_954(x, y);
}
static Image* images_spiraltunnelfront_955_0_0[1];
static Direction direction_spiraltunnelfront_955_0_0 = {0, 100, 100, 0, 1, images_spiraltunnelfront_955_0_0, 1};
static Animation anim_spiraltunnelfront_955_0 = {&direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, NULL, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0, &direction_spiraltunnelfront_955_0_0};
static Animation * anim_array_spiraltunnelfront_955[1] = {&anim_spiraltunnelfront_955_0};
static Animations anim_spiraltunnelfront_955 = {1, &anim_array_spiraltunnelfront_955[0]};
static bool anim_spiraltunnelfront_955_initialized;
class SpiralTunnelFront_955 : public Active
{
public:
    SpiralTunnelFront_955(int x, int y) : Active(x, y, SpiralTunnelFront_955_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SpiralTunnel_Front", 18);
#endif
        set_visible(false);
        this->animations = &anim_spiraltunnelfront_955;
        if (!anim_spiraltunnelfront_955_initialized) {
            anim_spiraltunnelfront_955_initialized = true;
            images_spiraltunnelfront_955_0_0[0] = get_internal_image(217);
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
FrameObject * create_spiraltunnelfront_955(int x, int y)
{
    return new (Active::pool.create()) SpiralTunnelFront_955(x, y);
}
static Image* images_spiraltunneltop_956_0_0[1];
static Direction direction_spiraltunneltop_956_0_0 = {0, 50, 50, 0, 1, images_spiraltunneltop_956_0_0, 1};
static Animation anim_spiraltunneltop_956_0 = {&direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, NULL, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0, &direction_spiraltunneltop_956_0_0};
static Animation * anim_array_spiraltunneltop_956[1] = {&anim_spiraltunneltop_956_0};
static Animations anim_spiraltunneltop_956 = {1, &anim_array_spiraltunneltop_956[0]};
static bool anim_spiraltunneltop_956_initialized;
class SpiralTunnelTop_956 : public Active
{
public:
    SpiralTunnelTop_956(int x, int y) : Active(x, y, SpiralTunnelTop_956_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SpiralTunnel_Top", 16);
#endif
        set_visible(false);
        this->animations = &anim_spiraltunneltop_956;
        if (!anim_spiraltunneltop_956_initialized) {
            anim_spiraltunneltop_956_initialized = true;
            images_spiraltunneltop_956_0_0[0] = get_internal_image(706);
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
FrameObject * create_spiraltunneltop_956(int x, int y)
{
    return new (Active::pool.create()) SpiralTunnelTop_956(x, y);
}
static Image* images_spiraltunnelbottom_957_0_0[1];
static Direction direction_spiraltunnelbottom_957_0_0 = {0, 50, 50, 0, 1, images_spiraltunnelbottom_957_0_0, 1};
static Animation anim_spiraltunnelbottom_957_0 = {&direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, NULL, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0, &direction_spiraltunnelbottom_957_0_0};
static Animation * anim_array_spiraltunnelbottom_957[1] = {&anim_spiraltunnelbottom_957_0};
static Animations anim_spiraltunnelbottom_957 = {1, &anim_array_spiraltunnelbottom_957[0]};
static bool anim_spiraltunnelbottom_957_initialized;
class SpiralTunnelBottom_957 : public Active
{
public:
    SpiralTunnelBottom_957(int x, int y) : Active(x, y, SpiralTunnelBottom_957_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SpiralTunnel_Bottom", 19);
#endif
        set_visible(false);
        this->animations = &anim_spiraltunnelbottom_957;
        if (!anim_spiraltunnelbottom_957_initialized) {
            anim_spiraltunnelbottom_957_initialized = true;
            images_spiraltunnelbottom_957_0_0[0] = get_internal_image(3037);
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
FrameObject * create_spiraltunnelbottom_957(int x, int y)
{
    return new (Active::pool.create()) SpiralTunnelBottom_957(x, y);
}
static Image* images_spiraltunnelmask_958_0_0[1];
static Direction direction_spiraltunnelmask_958_0_0 = {0, 50, 50, 0, 1, images_spiraltunnelmask_958_0_0, 1};
static Animation anim_spiraltunnelmask_958_0 = {&direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, NULL, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0, &direction_spiraltunnelmask_958_0_0};
static Animation * anim_array_spiraltunnelmask_958[1] = {&anim_spiraltunnelmask_958_0};
static Animations anim_spiraltunnelmask_958 = {1, &anim_array_spiraltunnelmask_958[0]};
static bool anim_spiraltunnelmask_958_initialized;
class SpiralTunnelMask_958 : public Active
{
public:
    SpiralTunnelMask_958(int x, int y) : Active(x, y, SpiralTunnelMask_958_type)
    {
        // qualifiers: 14, 98
#ifndef NDEBUG
        name = std::string("SpiralTunnel_Mask", 17);
#endif
        set_visible(false);
        this->animations = &anim_spiraltunnelmask_958;
        if (!anim_spiraltunnelmask_958_initialized) {
            anim_spiraltunnelmask_958_initialized = true;
            images_spiraltunnelmask_958_0_0[0] = get_internal_image(2876);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 97);
        create_alterables();
    }
};
FrameObject * create_spiraltunnelmask_958(int x, int y)
{
    return new (Active::pool.create()) SpiralTunnelMask_958(x, y);
}
static Image* images_hazardspikesleft_959_0_0[1];
static Direction direction_hazardspikesleft_959_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_959_0_0, 1};
static Animation anim_hazardspikesleft_959_0 = {&direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, NULL, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0, &direction_hazardspikesleft_959_0_0};
static Animation * anim_array_hazardspikesleft_959[1] = {&anim_hazardspikesleft_959_0};
static Animations anim_hazardspikesleft_959 = {1, &anim_array_hazardspikesleft_959[0]};
static bool anim_hazardspikesleft_959_initialized;
class HazardSpikesLeft_959 : public Active
{
public:
    HazardSpikesLeft_959(int x, int y) : Active(x, y, HazardSpikesLeft_959_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_959;
        if (!anim_hazardspikesleft_959_initialized) {
            anim_hazardspikesleft_959_initialized = true;
            images_hazardspikesleft_959_0_0[0] = get_internal_image(471);
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
FrameObject * create_hazardspikesleft_959(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_959(x, y);
}
static Image* images_hazardspikesdown_960_0_0[1];
static Direction direction_hazardspikesdown_960_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_960_0_0, 1};
static Animation anim_hazardspikesdown_960_0 = {&direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, NULL, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0, &direction_hazardspikesdown_960_0_0};
static Animation * anim_array_hazardspikesdown_960[1] = {&anim_hazardspikesdown_960_0};
static Animations anim_hazardspikesdown_960 = {1, &anim_array_hazardspikesdown_960[0]};
static bool anim_hazardspikesdown_960_initialized;
class HazardSpikesDown_960 : public Active
{
public:
    HazardSpikesDown_960(int x, int y) : Active(x, y, HazardSpikesDown_960_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_960;
        if (!anim_hazardspikesdown_960_initialized) {
            anim_hazardspikesdown_960_initialized = true;
            images_hazardspikesdown_960_0_0[0] = get_internal_image(2371);
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
FrameObject * create_hazardspikesdown_960(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_960(x, y);
}
static Image* images_hazardspikesright_961_0_0[1];
static Direction direction_hazardspikesright_961_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_961_0_0, 1};
static Animation anim_hazardspikesright_961_0 = {&direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, NULL, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0, &direction_hazardspikesright_961_0_0};
static Animation * anim_array_hazardspikesright_961[1] = {&anim_hazardspikesright_961_0};
static Animations anim_hazardspikesright_961 = {1, &anim_array_hazardspikesright_961[0]};
static bool anim_hazardspikesright_961_initialized;
class HazardSpikesRight_961 : public Active
{
public:
    HazardSpikesRight_961(int x, int y) : Active(x, y, HazardSpikesRight_961_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_961;
        if (!anim_hazardspikesright_961_initialized) {
            anim_hazardspikesright_961_initialized = true;
            images_hazardspikesright_961_0_0[0] = get_internal_image(657);
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
FrameObject * create_hazardspikesright_961(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_961(x, y);
}
class LevelParallaxPiece8_962 : public SystemBox
{
public:
    LevelParallaxPiece8_962(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_962_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(5408);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_962(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_962(x, y);
}
class LevelParallaxPiece9_963 : public SystemBox
{
public:
    LevelParallaxPiece9_963(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_963_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 1080;
        type = PATTERN_IMAGE;
        image = get_internal_image(6306);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_963(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_963(x, y);
}
class LevelParallaxPiece10_964 : public SystemBox
{
public:
    LevelParallaxPiece10_964(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_964_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(6258);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_964(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_964(x, y);
}
class LevelParallaxPiece7_965 : public SystemBox
{
public:
    LevelParallaxPiece7_965(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_965_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 400;
        type = PATTERN_IMAGE;
        image = get_internal_image(3385);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_965(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_965(x, y);
}
class LevelParallaxPiece11_966 : public SystemBox
{
public:
    LevelParallaxPiece11_966(int x, int y) : SystemBox(x, y, LevelParallaxPiece11_966_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 11", 23);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 400;
        type = PATTERN_IMAGE;
        image = get_internal_image(5108);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece11_966(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece11_966(x, y);
}
static Image* images_bossfireball_967_0_0[5];
static Direction direction_bossfireball_967_0_0 = {0, 50, 50, 0, -1, images_bossfireball_967_0_0, 5};
static Animation anim_bossfireball_967_0 = {&direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, NULL, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0, &direction_bossfireball_967_0_0};
static Animation * anim_array_bossfireball_967[1] = {&anim_bossfireball_967_0};
static Animations anim_bossfireball_967 = {1, &anim_array_bossfireball_967[0]};
static bool anim_bossfireball_967_initialized;
class BossFireball_967 : public Active
{
public:
    BossFireball_967(int x, int y) : Active(x, y, BossFireball_967_type)
    {
        // qualifiers: 6, 29
#ifndef NDEBUG
        name = std::string("Boss_Fireball", 13);
#endif
        this->animations = &anim_bossfireball_967;
        if (!anim_bossfireball_967_initialized) {
            anim_bossfireball_967_initialized = true;
            images_bossfireball_967_0_0[0] = get_internal_image(50);
            images_bossfireball_967_0_0[1] = get_internal_image(61);
            images_bossfireball_967_0_0[2] = get_internal_image(69);
            images_bossfireball_967_0_0[3] = get_internal_image(192);
            images_bossfireball_967_0_0[4] = get_internal_image(475);
        }
        collision_box = false;
        auto_rotate = true;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(30);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_bossfireball_967(int x, int y)
{
    return new (Active::pool.create()) BossFireball_967(x, y);
}
static Image* images_levelparalaxwatersurface_968_0_0[2];
static Direction direction_levelparalaxwatersurface_968_0_0 = {0, 50, 50, 0, -1, images_levelparalaxwatersurface_968_0_0, 2};
static Animation anim_levelparalaxwatersurface_968_0 = {&direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, NULL, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0, &direction_levelparalaxwatersurface_968_0_0};
static Animation * anim_array_levelparalaxwatersurface_968[1] = {&anim_levelparalaxwatersurface_968_0};
static Animations anim_levelparalaxwatersurface_968 = {1, &anim_array_levelparalaxwatersurface_968[0]};
static bool anim_levelparalaxwatersurface_968_initialized;
class LevelParalaxWaterSurface_968 : public Active
{
public:
    LevelParalaxWaterSurface_968(int x, int y) : Active(x, y, LevelParalaxWaterSurface_968_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Paralax_WaterSurface", 26);
#endif
        this->animations = &anim_levelparalaxwatersurface_968;
        if (!anim_levelparalaxwatersurface_968_initialized) {
            anim_levelparalaxwatersurface_968_initialized = true;
            images_levelparalaxwatersurface_968_0_0[0] = get_internal_image(966);
            images_levelparalaxwatersurface_968_0_0[1] = get_internal_image(1057);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 156);
        create_alterables();
    }
};
FrameObject * create_levelparalaxwatersurface_968(int x, int y)
{
    return new (Active::pool.create()) LevelParalaxWaterSurface_968(x, y);
}
static Image* images_enemysporeprojectile_969_0_0[4];
static Direction direction_enemysporeprojectile_969_0_0 = {0, 50, 50, 0, -1, images_enemysporeprojectile_969_0_0, 4};
static Animation anim_enemysporeprojectile_969_0 = {&direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, NULL, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0, &direction_enemysporeprojectile_969_0_0};
static Image* images_enemysporeprojectile_969_7_0[6];
static Direction direction_enemysporeprojectile_969_7_0 = {0, 25, 25, 0, 1, images_enemysporeprojectile_969_7_0, 6};
static Animation anim_enemysporeprojectile_969_7 = {&direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, NULL, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0, &direction_enemysporeprojectile_969_7_0};
static Animation * anim_array_enemysporeprojectile_969[8] = {&anim_enemysporeprojectile_969_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemysporeprojectile_969_7};
static Animations anim_enemysporeprojectile_969 = {8, &anim_array_enemysporeprojectile_969[0]};
static bool anim_enemysporeprojectile_969_initialized;
class EnemySporeProjectile_969 : public Active
{
public:
    EnemySporeProjectile_969(int x, int y) : Active(x, y, EnemySporeProjectile_969_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_SporeProjectile", 21);
#endif
        this->animations = &anim_enemysporeprojectile_969;
        if (!anim_enemysporeprojectile_969_initialized) {
            anim_enemysporeprojectile_969_initialized = true;
            images_enemysporeprojectile_969_0_0[0] = get_internal_image(2436);
            images_enemysporeprojectile_969_0_0[1] = get_internal_image(2438);
            images_enemysporeprojectile_969_0_0[2] = get_internal_image(2439);
            images_enemysporeprojectile_969_0_0[3] = get_internal_image(2440);
            images_enemysporeprojectile_969_7_0[0] = get_internal_image(1300);
            images_enemysporeprojectile_969_7_0[1] = get_internal_image(1301);
            images_enemysporeprojectile_969_7_0[2] = get_internal_image(1302);
            images_enemysporeprojectile_969_7_0[3] = get_internal_image(1308);
            images_enemysporeprojectile_969_7_0[4] = get_internal_image(1320);
            images_enemysporeprojectile_969_7_0[5] = get_internal_image(1327);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_enemysporeprojectile_969(int x, int y)
{
    return new (Active::pool.create()) EnemySporeProjectile_969(x, y);
}
static Image* images_effectember_970_4_0[7];
static Direction direction_effectember_970_4_0 = {0, 25, 25, 0, 1, images_effectember_970_4_0, 7};
static Animation anim_effectember_970_4 = {&direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, NULL, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0, &direction_effectember_970_4_0};
static Animation * anim_array_effectember_970[5] = {NULL, NULL, NULL, NULL, &anim_effectember_970_4};
static Animations anim_effectember_970 = {5, &anim_array_effectember_970[0]};
static bool anim_effectember_970_initialized;
class EffectEmber_970 : public Active
{
public:
    EffectEmber_970(int x, int y) : Active(x, y, EffectEmber_970_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Ember", 12);
#endif
        this->animations = &anim_effectember_970;
        if (!anim_effectember_970_initialized) {
            anim_effectember_970_initialized = true;
            images_effectember_970_4_0[0] = get_internal_image(68);
            images_effectember_970_4_0[1] = get_internal_image(68);
            images_effectember_970_4_0[2] = get_internal_image(735);
            images_effectember_970_4_0[3] = get_internal_image(737);
            images_effectember_970_4_0[4] = get_internal_image(751);
            images_effectember_970_4_0[5] = get_internal_image(761);
            images_effectember_970_4_0[6] = get_internal_image(762);
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
FrameObject * create_effectember_970(int x, int y)
{
    return new (Active::pool.create()) EffectEmber_970(x, y);
}
class DVSapling_971 : public Backdrop
{
public:
    DVSapling_971(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Sapling", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2867);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvsapling_971(int x, int y)
{
    return new (Backdrop::pool.create()) DVSapling_971(x, y);
}
class DVCoral5_972 : public Backdrop
{
public:
    DVCoral5_972(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2118);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral5_972(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral5_972(x, y);
}
class DVCoral6_973 : public Backdrop
{
public:
    DVCoral6_973(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2119);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral6_973(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral6_973(x, y);
}
class DVCoral2_974 : public Backdrop
{
public:
    DVCoral2_974(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2109);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral2_974(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral2_974(x, y);
}
class DVCoral1_975 : public Backdrop
{
public:
    DVCoral1_975(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2107);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral1_975(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral1_975(x, y);
}
class DVCoral3_976 : public Backdrop
{
public:
    DVCoral3_976(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2110);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral3_976(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral3_976(x, y);
}
class DVCoral4_977 : public Backdrop
{
public:
    DVCoral4_977(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Coral4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2111);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvcoral4_977(int x, int y)
{
    return new (Backdrop::pool.create()) DVCoral4_977(x, y);
}
class DVWallEdge2_978 : public Backdrop
{
public:
    DVWallEdge2_978(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_WallEdge2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9260);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvwalledge2_978(int x, int y)
{
    return new (Backdrop::pool.create()) DVWallEdge2_978(x, y);
}
class DVCeilingCurveLeft_979 : public Backdrop
{
public:
    DVCeilingCurveLeft_979(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_CeilingCurveLeft", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9257);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvceilingcurveleft_979(int x, int y)
{
    return new (Backdrop::pool.create()) DVCeilingCurveLeft_979(x, y);
}
class DVGeyserBack_980 : public Backdrop
{
public:
    DVGeyserBack_980(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_GeyserBack", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(652);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dvgeyserback_980(int x, int y)
{
    return new (Backdrop::pool.create()) DVGeyserBack_980(x, y);
}
class DVFlatCeiling_981 : public Backdrop
{
public:
    DVFlatCeiling_981(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_FlatCeiling", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(985);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_dvflatceiling_981(int x, int y)
{
    return new (Backdrop::pool.create()) DVFlatCeiling_981(x, y);
}
class DVWall6_982 : public Backdrop
{
public:
    DVWall6_982(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1540);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall6_982(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall6_982(x, y);
}
class LevelBackdrop14_983 : public Backdrop
{
public:
    LevelBackdrop14_983(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Backdrop_14", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9309);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_levelbackdrop14_983(int x, int y)
{
    return new (Backdrop::pool.create()) LevelBackdrop14_983(x, y);
}
class DVCeilingCurveRight_984 : public Backdrop
{
public:
    DVCeilingCurveRight_984(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_CeilingCurveRight", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9259);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvceilingcurveright_984(int x, int y)
{
    return new (Backdrop::pool.create()) DVCeilingCurveRight_984(x, y);
}
class DVRockSlope7_985 : public Backdrop
{
public:
    DVRockSlope7_985(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_RockSlope7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5699);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvrockslope7_985(int x, int y)
{
    return new (Backdrop::pool.create()) DVRockSlope7_985(x, y);
}
class SwitchBase_986 : public Backdrop
{
public:
    SwitchBase_986(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(616);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_986(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_986(x, y);
}
class GeyserBase2_987 : public Backdrop
{
public:
    GeyserBase2_987(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("GeyserBase 2", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(313);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_geyserbase2_987(int x, int y)
{
    return new (Backdrop::pool.create()) GeyserBase2_987(x, y);
}
class GeyserBase_988 : public Backdrop
{
public:
    GeyserBase_988(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("GeyserBase", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1569);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_geyserbase_988(int x, int y)
{
    return new (Backdrop::pool.create()) GeyserBase_988(x, y);
}
class SpiralTunnel1_989 : public Backdrop
{
public:
    SpiralTunnel1_989(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SpiralTunnel 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1240);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_spiraltunnel1_989(int x, int y)
{
    return new (Backdrop::pool.create()) SpiralTunnel1_989(x, y);
}
static Image* images_enemycacteon_990_0_0[1];
static Direction direction_enemycacteon_990_0_0 = {0, 50, 50, 0, 1, images_enemycacteon_990_0_0, 1};
static Image* images_enemycacteon_990_0_8[1];
static Direction direction_enemycacteon_990_0_8 = {8, 50, 50, 0, 1, images_enemycacteon_990_0_8, 1};
static Image* images_enemycacteon_990_0_16[1];
static Direction direction_enemycacteon_990_0_16 = {16, 50, 50, 0, 1, images_enemycacteon_990_0_16, 1};
static Image* images_enemycacteon_990_0_24[1];
static Direction direction_enemycacteon_990_0_24 = {24, 50, 50, 0, 1, images_enemycacteon_990_0_24, 1};
static Animation anim_enemycacteon_990_0 = {&direction_enemycacteon_990_0_0, &direction_enemycacteon_990_0_0, &direction_enemycacteon_990_0_0, &direction_enemycacteon_990_0_0, NULL, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, &direction_enemycacteon_990_0_8, NULL, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, &direction_enemycacteon_990_0_16, NULL, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, &direction_enemycacteon_990_0_24, NULL, &direction_enemycacteon_990_0_0, &direction_enemycacteon_990_0_0, &direction_enemycacteon_990_0_0};
static Image* images_enemycacteon_990_1_0[6];
static Direction direction_enemycacteon_990_1_0 = {0, 25, 25, 0, -1, images_enemycacteon_990_1_0, 6};
static Image* images_enemycacteon_990_1_8[6];
static Direction direction_enemycacteon_990_1_8 = {8, 50, 50, 0, 1, images_enemycacteon_990_1_8, 6};
static Image* images_enemycacteon_990_1_16[6];
static Direction direction_enemycacteon_990_1_16 = {16, 25, 25, 0, -1, images_enemycacteon_990_1_16, 6};
static Image* images_enemycacteon_990_1_24[6];
static Direction direction_enemycacteon_990_1_24 = {24, 50, 50, 0, 1, images_enemycacteon_990_1_24, 6};
static Animation anim_enemycacteon_990_1 = {&direction_enemycacteon_990_1_0, &direction_enemycacteon_990_1_0, &direction_enemycacteon_990_1_0, &direction_enemycacteon_990_1_0, NULL, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, &direction_enemycacteon_990_1_8, NULL, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, &direction_enemycacteon_990_1_16, NULL, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, &direction_enemycacteon_990_1_24, NULL, &direction_enemycacteon_990_1_0, &direction_enemycacteon_990_1_0, &direction_enemycacteon_990_1_0};
static Image* images_enemycacteon_990_7_0[6];
static Direction direction_enemycacteon_990_7_0 = {0, 35, 35, 5, -1, images_enemycacteon_990_7_0, 6};
static Image* images_enemycacteon_990_7_8[6];
static Direction direction_enemycacteon_990_7_8 = {8, 50, 50, 0, 1, images_enemycacteon_990_7_8, 6};
static Image* images_enemycacteon_990_7_16[6];
static Direction direction_enemycacteon_990_7_16 = {16, 35, 35, 5, -1, images_enemycacteon_990_7_16, 6};
static Image* images_enemycacteon_990_7_24[6];
static Direction direction_enemycacteon_990_7_24 = {24, 50, 50, 0, 1, images_enemycacteon_990_7_24, 6};
static Animation anim_enemycacteon_990_7 = {&direction_enemycacteon_990_7_0, &direction_enemycacteon_990_7_0, &direction_enemycacteon_990_7_0, &direction_enemycacteon_990_7_0, NULL, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, &direction_enemycacteon_990_7_8, NULL, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, &direction_enemycacteon_990_7_16, NULL, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, &direction_enemycacteon_990_7_24, NULL, &direction_enemycacteon_990_7_0, &direction_enemycacteon_990_7_0, &direction_enemycacteon_990_7_0};
static Image* images_enemycacteon_990_8_0[1];
static Direction direction_enemycacteon_990_8_0 = {0, 50, 50, 0, -1, images_enemycacteon_990_8_0, 1};
static Image* images_enemycacteon_990_8_16[1];
static Direction direction_enemycacteon_990_8_16 = {16, 50, 50, 0, -1, images_enemycacteon_990_8_16, 1};
static Animation anim_enemycacteon_990_8 = {&direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, NULL, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, &direction_enemycacteon_990_8_16, NULL, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0, &direction_enemycacteon_990_8_0};
static Image* images_enemycacteon_990_10_0[5];
static Direction direction_enemycacteon_990_10_0 = {0, 35, 35, 4, 1, images_enemycacteon_990_10_0, 5};
static Image* images_enemycacteon_990_10_8[5];
static Direction direction_enemycacteon_990_10_8 = {8, 50, 50, 0, 1, images_enemycacteon_990_10_8, 5};
static Image* images_enemycacteon_990_10_16[5];
static Direction direction_enemycacteon_990_10_16 = {16, 35, 35, 4, 1, images_enemycacteon_990_10_16, 5};
static Image* images_enemycacteon_990_10_24[5];
static Direction direction_enemycacteon_990_10_24 = {24, 50, 50, 0, 1, images_enemycacteon_990_10_24, 5};
static Animation anim_enemycacteon_990_10 = {&direction_enemycacteon_990_10_0, &direction_enemycacteon_990_10_0, &direction_enemycacteon_990_10_0, &direction_enemycacteon_990_10_0, NULL, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, &direction_enemycacteon_990_10_8, NULL, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, &direction_enemycacteon_990_10_16, NULL, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, &direction_enemycacteon_990_10_24, NULL, &direction_enemycacteon_990_10_0, &direction_enemycacteon_990_10_0, &direction_enemycacteon_990_10_0};
static Animation * anim_array_enemycacteon_990[11] = {&anim_enemycacteon_990_0, &anim_enemycacteon_990_1, NULL, NULL, NULL, NULL, NULL, &anim_enemycacteon_990_7, &anim_enemycacteon_990_8, NULL, &anim_enemycacteon_990_10};
static Animations anim_enemycacteon_990 = {11, &anim_array_enemycacteon_990[0]};
static bool anim_enemycacteon_990_initialized;
class EnemyCacteon_990 : public Active
{
public:
    EnemyCacteon_990(int x, int y) : Active(x, y, EnemyCacteon_990_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_Cacteon", 13);
#endif
        this->animations = &anim_enemycacteon_990;
        if (!anim_enemycacteon_990_initialized) {
            anim_enemycacteon_990_initialized = true;
            images_enemycacteon_990_0_0[0] = get_internal_image(1860);
            images_enemycacteon_990_0_8[0] = get_internal_image(879);
            images_enemycacteon_990_0_16[0] = get_internal_image(1891);
            images_enemycacteon_990_0_24[0] = get_internal_image(1396);
            images_enemycacteon_990_1_0[0] = get_internal_image(1743);
            images_enemycacteon_990_1_0[1] = get_internal_image(1745);
            images_enemycacteon_990_1_0[2] = get_internal_image(1746);
            images_enemycacteon_990_1_0[3] = get_internal_image(1805);
            images_enemycacteon_990_1_0[4] = get_internal_image(1824);
            images_enemycacteon_990_1_0[5] = get_internal_image(1795);
            images_enemycacteon_990_1_8[0] = get_internal_image(879);
            images_enemycacteon_990_1_8[1] = get_internal_image(879);
            images_enemycacteon_990_1_8[2] = get_internal_image(879);
            images_enemycacteon_990_1_8[3] = get_internal_image(879);
            images_enemycacteon_990_1_8[4] = get_internal_image(879);
            images_enemycacteon_990_1_8[5] = get_internal_image(879);
            images_enemycacteon_990_1_16[0] = get_internal_image(1744);
            images_enemycacteon_990_1_16[1] = get_internal_image(1851);
            images_enemycacteon_990_1_16[2] = get_internal_image(1852);
            images_enemycacteon_990_1_16[3] = get_internal_image(1857);
            images_enemycacteon_990_1_16[4] = get_internal_image(1858);
            images_enemycacteon_990_1_16[5] = get_internal_image(1859);
            images_enemycacteon_990_1_24[0] = get_internal_image(1396);
            images_enemycacteon_990_1_24[1] = get_internal_image(1396);
            images_enemycacteon_990_1_24[2] = get_internal_image(1396);
            images_enemycacteon_990_1_24[3] = get_internal_image(1396);
            images_enemycacteon_990_1_24[4] = get_internal_image(1396);
            images_enemycacteon_990_1_24[5] = get_internal_image(1396);
            images_enemycacteon_990_7_0[0] = get_internal_image(1860);
            images_enemycacteon_990_7_0[1] = get_internal_image(1874);
            images_enemycacteon_990_7_0[2] = get_internal_image(1875);
            images_enemycacteon_990_7_0[3] = get_internal_image(1867);
            images_enemycacteon_990_7_0[4] = get_internal_image(1876);
            images_enemycacteon_990_7_0[5] = get_internal_image(1879);
            images_enemycacteon_990_7_8[0] = get_internal_image(879);
            images_enemycacteon_990_7_8[1] = get_internal_image(879);
            images_enemycacteon_990_7_8[2] = get_internal_image(879);
            images_enemycacteon_990_7_8[3] = get_internal_image(1379);
            images_enemycacteon_990_7_8[4] = get_internal_image(1380);
            images_enemycacteon_990_7_8[5] = get_internal_image(1381);
            images_enemycacteon_990_7_16[0] = get_internal_image(1891);
            images_enemycacteon_990_7_16[1] = get_internal_image(1935);
            images_enemycacteon_990_7_16[2] = get_internal_image(1936);
            images_enemycacteon_990_7_16[3] = get_internal_image(1937);
            images_enemycacteon_990_7_16[4] = get_internal_image(1938);
            images_enemycacteon_990_7_16[5] = get_internal_image(1939);
            images_enemycacteon_990_7_24[0] = get_internal_image(1396);
            images_enemycacteon_990_7_24[1] = get_internal_image(1396);
            images_enemycacteon_990_7_24[2] = get_internal_image(1396);
            images_enemycacteon_990_7_24[3] = get_internal_image(1396);
            images_enemycacteon_990_7_24[4] = get_internal_image(1396);
            images_enemycacteon_990_7_24[5] = get_internal_image(1396);
            images_enemycacteon_990_8_0[0] = get_internal_image(1890);
            images_enemycacteon_990_8_16[0] = get_internal_image(1884);
            images_enemycacteon_990_10_0[0] = get_internal_image(1876);
            images_enemycacteon_990_10_0[1] = get_internal_image(1867);
            images_enemycacteon_990_10_0[2] = get_internal_image(1875);
            images_enemycacteon_990_10_0[3] = get_internal_image(1874);
            images_enemycacteon_990_10_0[4] = get_internal_image(1860);
            images_enemycacteon_990_10_8[0] = get_internal_image(1380);
            images_enemycacteon_990_10_8[1] = get_internal_image(1379);
            images_enemycacteon_990_10_8[2] = get_internal_image(879);
            images_enemycacteon_990_10_8[3] = get_internal_image(879);
            images_enemycacteon_990_10_8[4] = get_internal_image(879);
            images_enemycacteon_990_10_16[0] = get_internal_image(1938);
            images_enemycacteon_990_10_16[1] = get_internal_image(1937);
            images_enemycacteon_990_10_16[2] = get_internal_image(1936);
            images_enemycacteon_990_10_16[3] = get_internal_image(1935);
            images_enemycacteon_990_10_16[4] = get_internal_image(1891);
            images_enemycacteon_990_10_24[0] = get_internal_image(1396);
            images_enemycacteon_990_10_24[1] = get_internal_image(1396);
            images_enemycacteon_990_10_24[2] = get_internal_image(1396);
            images_enemycacteon_990_10_24[3] = get_internal_image(1396);
            images_enemycacteon_990_10_24[4] = get_internal_image(1396);
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
FrameObject * create_enemycacteon_990(int x, int y)
{
    return new (Active::pool.create()) EnemyCacteon_990(x, y);
}
static Image* images_switchdoor_992_0_0[1];
static Direction direction_switchdoor_992_0_0 = {0, 50, 50, 0, 1, images_switchdoor_992_0_0, 1};
static Animation anim_switchdoor_992_0 = {&direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, NULL, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0, &direction_switchdoor_992_0_0};
static Animation * anim_array_switchdoor_992[1] = {&anim_switchdoor_992_0};
static Animations anim_switchdoor_992 = {1, &anim_array_switchdoor_992[0]};
static bool anim_switchdoor_992_initialized;
class SwitchDoor_992 : public Active
{
public:
    SwitchDoor_992(int x, int y) : Active(x, y, SwitchDoor_992_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door", 11);
#endif
        this->animations = &anim_switchdoor_992;
        if (!anim_switchdoor_992_initialized) {
            anim_switchdoor_992_initialized = true;
            images_switchdoor_992_0_0[0] = get_internal_image(6640);
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
FrameObject * create_switchdoor_992(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor_992(x, y);
}
static Image* images_levellayer1loop03_993_0_0[1];
static Direction direction_levellayer1loop03_993_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop03_993_0_0, 1};
static Animation anim_levellayer1loop03_993_0 = {&direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, NULL, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0, &direction_levellayer1loop03_993_0_0};
static Animation * anim_array_levellayer1loop03_993[1] = {&anim_levellayer1loop03_993_0};
static Animations anim_levellayer1loop03_993 = {1, &anim_array_levellayer1loop03_993[0]};
static bool anim_levellayer1loop03_993_initialized;
class LevelLayer1Loop03_993 : public Active
{
public:
    LevelLayer1Loop03_993(int x, int y) : Active(x, y, LevelLayer1Loop03_993_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop03", 19);
#endif
        this->animations = &anim_levellayer1loop03_993;
        if (!anim_levellayer1loop03_993_initialized) {
            anim_levellayer1loop03_993_initialized = true;
            images_levellayer1loop03_993_0_0[0] = get_internal_image(2382);
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
FrameObject * create_levellayer1loop03_993(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop03_993(x, y);
}
static Image* images_levellayer115_994_0_0[1];
static Direction direction_levellayer115_994_0_0 = {0, 50, 50, 0, 1, images_levellayer115_994_0_0, 1};
static Animation anim_levellayer115_994_0 = {&direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, NULL, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0, &direction_levellayer115_994_0_0};
static Animation * anim_array_levellayer115_994[1] = {&anim_levellayer115_994_0};
static Animations anim_levellayer115_994 = {1, &anim_array_levellayer115_994[0]};
static bool anim_levellayer115_994_initialized;
class LevelLayer115_994 : public Active
{
public:
    LevelLayer115_994(int x, int y) : Active(x, y, LevelLayer115_994_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_15", 15);
#endif
        this->animations = &anim_levellayer115_994;
        if (!anim_levellayer115_994_initialized) {
            anim_levellayer115_994_initialized = true;
            images_levellayer115_994_0_0[0] = get_internal_image(2874);
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
FrameObject * create_levellayer115_994(int x, int y)
{
    return new (Active::pool.create()) LevelLayer115_994(x, y);
}
static Image* images_bosssnakebody_995_0_0[5];
static Direction direction_bosssnakebody_995_0_0 = {0, 50, 50, 0, 1, images_bosssnakebody_995_0_0, 5};
static Image* images_bosssnakebody_995_0_8[5];
static Direction direction_bosssnakebody_995_0_8 = {8, 50, 50, 0, 1, images_bosssnakebody_995_0_8, 5};
static Animation anim_bosssnakebody_995_0 = {&direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, NULL, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, &direction_bosssnakebody_995_0_8, NULL, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0, &direction_bosssnakebody_995_0_0};
static Image* images_bosssnakebody_995_7_0[5];
static Direction direction_bosssnakebody_995_7_0 = {0, 25, 25, 0, -1, images_bosssnakebody_995_7_0, 5};
static Animation anim_bosssnakebody_995_7 = {&direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, NULL, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0, &direction_bosssnakebody_995_7_0};
static Image* images_bosssnakebody_995_8_0[5];
static Direction direction_bosssnakebody_995_8_0 = {0, 25, 25, 0, -1, images_bosssnakebody_995_8_0, 5};
static Animation anim_bosssnakebody_995_8 = {&direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, NULL, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0, &direction_bosssnakebody_995_8_0};
static Animation * anim_array_bosssnakebody_995[9] = {&anim_bosssnakebody_995_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssnakebody_995_7, &anim_bosssnakebody_995_8};
static Animations anim_bosssnakebody_995 = {9, &anim_array_bosssnakebody_995[0]};
static bool anim_bosssnakebody_995_initialized;
class BossSnakeBody_995 : public Active
{
public:
    BossSnakeBody_995(int x, int y) : Active(x, y, BossSnakeBody_995_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Boss_SnakeBody", 14);
#endif
        this->animations = &anim_bosssnakebody_995;
        if (!anim_bosssnakebody_995_initialized) {
            anim_bosssnakebody_995_initialized = true;
            images_bosssnakebody_995_0_0[0] = get_internal_image(4335);
            images_bosssnakebody_995_0_0[1] = get_internal_image(4336);
            images_bosssnakebody_995_0_0[2] = get_internal_image(4337);
            images_bosssnakebody_995_0_0[3] = get_internal_image(4338);
            images_bosssnakebody_995_0_0[4] = get_internal_image(4335);
            images_bosssnakebody_995_0_8[0] = get_internal_image(4354);
            images_bosssnakebody_995_0_8[1] = get_internal_image(4352);
            images_bosssnakebody_995_0_8[2] = get_internal_image(4353);
            images_bosssnakebody_995_0_8[3] = get_internal_image(4355);
            images_bosssnakebody_995_0_8[4] = get_internal_image(4354);
            images_bosssnakebody_995_7_0[0] = get_internal_image(4229);
            images_bosssnakebody_995_7_0[1] = get_internal_image(4339);
            images_bosssnakebody_995_7_0[2] = get_internal_image(4356);
            images_bosssnakebody_995_7_0[3] = get_internal_image(4357);
            images_bosssnakebody_995_7_0[4] = get_internal_image(4229);
            images_bosssnakebody_995_8_0[0] = get_internal_image(4354);
            images_bosssnakebody_995_8_0[1] = get_internal_image(4352);
            images_bosssnakebody_995_8_0[2] = get_internal_image(4353);
            images_bosssnakebody_995_8_0[3] = get_internal_image(4355);
            images_bosssnakebody_995_8_0[4] = get_internal_image(4354);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new VectorMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_bosssnakebody_995(int x, int y)
{
    return new (Active::pool.create()) BossSnakeBody_995(x, y);
}
static Image* images_levellayer016_996_0_0[1];
static Direction direction_levellayer016_996_0_0 = {0, 50, 50, 0, 1, images_levellayer016_996_0_0, 1};
static Animation anim_levellayer016_996_0 = {&direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, NULL, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0, &direction_levellayer016_996_0_0};
static Animation * anim_array_levellayer016_996[1] = {&anim_levellayer016_996_0};
static Animations anim_levellayer016_996 = {1, &anim_array_levellayer016_996[0]};
static bool anim_levellayer016_996_initialized;
class LevelLayer016_996 : public Active
{
public:
    LevelLayer016_996(int x, int y) : Active(x, y, LevelLayer016_996_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_16", 15);
#endif
        this->animations = &anim_levellayer016_996;
        if (!anim_levellayer016_996_initialized) {
            anim_levellayer016_996_initialized = true;
            images_levellayer016_996_0_0[0] = get_internal_image(2939);
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
FrameObject * create_levellayer016_996(int x, int y)
{
    return new (Active::pool.create()) LevelLayer016_996(x, y);
}
static Image* images_levellayer0loop04_997_0_0[1];
static Direction direction_levellayer0loop04_997_0_0 = {0, 50, 50, 0, 1, images_levellayer0loop04_997_0_0, 1};
static Animation anim_levellayer0loop04_997_0 = {&direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, NULL, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0, &direction_levellayer0loop04_997_0_0};
static Animation * anim_array_levellayer0loop04_997[1] = {&anim_levellayer0loop04_997_0};
static Animations anim_levellayer0loop04_997 = {1, &anim_array_levellayer0loop04_997[0]};
static bool anim_levellayer0loop04_997_initialized;
class LevelLayer0Loop04_997 : public Active
{
public:
    LevelLayer0Loop04_997(int x, int y) : Active(x, y, LevelLayer0Loop04_997_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_Loop04", 19);
#endif
        this->animations = &anim_levellayer0loop04_997;
        if (!anim_levellayer0loop04_997_initialized) {
            anim_levellayer0loop04_997_initialized = true;
            images_levellayer0loop04_997_0_0[0] = get_internal_image(2832);
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
FrameObject * create_levellayer0loop04_997(int x, int y)
{
    return new (Active::pool.create()) LevelLayer0Loop04_997(x, y);
}
static Image* images_levelgeyserplate_998_0_0[1];
static Direction direction_levelgeyserplate_998_0_0 = {0, 50, 50, 0, 1, images_levelgeyserplate_998_0_0, 1};
static Animation anim_levelgeyserplate_998_0 = {&direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, NULL, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0, &direction_levelgeyserplate_998_0_0};
static Animation * anim_array_levelgeyserplate_998[1] = {&anim_levelgeyserplate_998_0};
static Animations anim_levelgeyserplate_998 = {1, &anim_array_levelgeyserplate_998[0]};
static bool anim_levelgeyserplate_998_initialized;
class LevelGeyserPlate_998 : public Active
{
public:
    LevelGeyserPlate_998(int x, int y) : Active(x, y, LevelGeyserPlate_998_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Level_GeyserPlate", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelgeyserplate_998;
        if (!anim_levelgeyserplate_998_initialized) {
            anim_levelgeyserplate_998_initialized = true;
            images_levelgeyserplate_998_0_0[0] = get_internal_image(594);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 240);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelgeyserplate_998(int x, int y)
{
    return new (Active::pool.create()) LevelGeyserPlate_998(x, y);
}
static Image* images_bosssnakehitbox_999_0_0[5];
static Direction direction_bosssnakehitbox_999_0_0 = {0, 8, 8, 0, 1, images_bosssnakehitbox_999_0_0, 5};
static Image* images_bosssnakehitbox_999_0_8[7];
static Direction direction_bosssnakehitbox_999_0_8 = {8, 50, 50, 0, 1, images_bosssnakehitbox_999_0_8, 7};
static Image* images_bosssnakehitbox_999_0_16[5];
static Direction direction_bosssnakehitbox_999_0_16 = {16, 8, 8, 0, 1, images_bosssnakehitbox_999_0_16, 5};
static Image* images_bosssnakehitbox_999_0_24[1];
static Direction direction_bosssnakehitbox_999_0_24 = {24, 50, 50, 0, 1, images_bosssnakehitbox_999_0_24, 1};
static Animation anim_bosssnakehitbox_999_0 = {&direction_bosssnakehitbox_999_0_0, &direction_bosssnakehitbox_999_0_0, &direction_bosssnakehitbox_999_0_0, &direction_bosssnakehitbox_999_0_0, NULL, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, &direction_bosssnakehitbox_999_0_8, NULL, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, &direction_bosssnakehitbox_999_0_16, NULL, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, &direction_bosssnakehitbox_999_0_24, NULL, &direction_bosssnakehitbox_999_0_0, &direction_bosssnakehitbox_999_0_0, &direction_bosssnakehitbox_999_0_0};
static Image* images_bosssnakehitbox_999_7_0[1];
static Direction direction_bosssnakehitbox_999_7_0 = {0, 50, 50, 0, -1, images_bosssnakehitbox_999_7_0, 1};
static Image* images_bosssnakehitbox_999_7_16[1];
static Direction direction_bosssnakehitbox_999_7_16 = {16, 50, 50, 0, -1, images_bosssnakehitbox_999_7_16, 1};
static Animation anim_bosssnakehitbox_999_7 = {&direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, NULL, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, &direction_bosssnakehitbox_999_7_16, NULL, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0, &direction_bosssnakehitbox_999_7_0};
static Image* images_bosssnakehitbox_999_8_0[1];
static Direction direction_bosssnakehitbox_999_8_0 = {0, 50, 50, 0, -1, images_bosssnakehitbox_999_8_0, 1};
static Image* images_bosssnakehitbox_999_8_16[1];
static Direction direction_bosssnakehitbox_999_8_16 = {16, 50, 50, 0, -1, images_bosssnakehitbox_999_8_16, 1};
static Animation anim_bosssnakehitbox_999_8 = {&direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, NULL, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, &direction_bosssnakehitbox_999_8_16, NULL, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0, &direction_bosssnakehitbox_999_8_0};
static Image* images_bosssnakehitbox_999_10_0[1];
static Direction direction_bosssnakehitbox_999_10_0 = {0, 50, 50, 0, -1, images_bosssnakehitbox_999_10_0, 1};
static Image* images_bosssnakehitbox_999_10_16[1];
static Direction direction_bosssnakehitbox_999_10_16 = {16, 50, 50, 0, -1, images_bosssnakehitbox_999_10_16, 1};
static Animation anim_bosssnakehitbox_999_10 = {&direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, NULL, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, &direction_bosssnakehitbox_999_10_16, NULL, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0, &direction_bosssnakehitbox_999_10_0};
static Image* images_bosssnakehitbox_999_11_8[3];
static Direction direction_bosssnakehitbox_999_11_8 = {8, 50, 50, 0, -1, images_bosssnakehitbox_999_11_8, 3};
static Animation anim_bosssnakehitbox_999_11 = {&direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, NULL, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8, &direction_bosssnakehitbox_999_11_8};
static Animation * anim_array_bosssnakehitbox_999[12] = {&anim_bosssnakehitbox_999_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosssnakehitbox_999_7, &anim_bosssnakehitbox_999_8, NULL, &anim_bosssnakehitbox_999_10, &anim_bosssnakehitbox_999_11};
static Animations anim_bosssnakehitbox_999 = {12, &anim_array_bosssnakehitbox_999[0]};
static bool anim_bosssnakehitbox_999_initialized;
class BossSnakeHitbox_999 : public Active
{
public:
    BossSnakeHitbox_999(int x, int y) : Active(x, y, BossSnakeHitbox_999_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Boss_SnakeHitbox", 16);
#endif
        set_visible(false);
        this->animations = &anim_bosssnakehitbox_999;
        if (!anim_bosssnakehitbox_999_initialized) {
            anim_bosssnakehitbox_999_initialized = true;
            images_bosssnakehitbox_999_0_0[0] = get_internal_image(3925);
            images_bosssnakehitbox_999_0_0[1] = get_internal_image(3667);
            images_bosssnakehitbox_999_0_0[2] = get_internal_image(3668);
            images_bosssnakehitbox_999_0_0[3] = get_internal_image(3961);
            images_bosssnakehitbox_999_0_0[4] = get_internal_image(3670);
            images_bosssnakehitbox_999_0_8[0] = get_internal_image(3994);
            images_bosssnakehitbox_999_0_8[1] = get_internal_image(3965);
            images_bosssnakehitbox_999_0_8[2] = get_internal_image(3925);
            images_bosssnakehitbox_999_0_8[3] = get_internal_image(3667);
            images_bosssnakehitbox_999_0_8[4] = get_internal_image(3668);
            images_bosssnakehitbox_999_0_8[5] = get_internal_image(3961);
            images_bosssnakehitbox_999_0_8[6] = get_internal_image(3670);
            images_bosssnakehitbox_999_0_16[0] = get_internal_image(3958);
            images_bosssnakehitbox_999_0_16[1] = get_internal_image(3671);
            images_bosssnakehitbox_999_0_16[2] = get_internal_image(3838);
            images_bosssnakehitbox_999_0_16[3] = get_internal_image(3962);
            images_bosssnakehitbox_999_0_16[4] = get_internal_image(3882);
            images_bosssnakehitbox_999_0_24[0] = get_internal_image(3965);
            images_bosssnakehitbox_999_7_0[0] = get_internal_image(3995);
            images_bosssnakehitbox_999_7_16[0] = get_internal_image(3966);
            images_bosssnakehitbox_999_8_0[0] = get_internal_image(3996);
            images_bosssnakehitbox_999_8_16[0] = get_internal_image(4017);
            images_bosssnakehitbox_999_10_0[0] = get_internal_image(4135);
            images_bosssnakehitbox_999_10_16[0] = get_internal_image(4196);
            images_bosssnakehitbox_999_11_8[0] = get_internal_image(4195);
            images_bosssnakehitbox_999_11_8[1] = get_internal_image(3965);
            images_bosssnakehitbox_999_11_8[2] = get_internal_image(4230);
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
FrameObject * create_bosssnakehitbox_999(int x, int y)
{
    return new (Active::pool.create()) BossSnakeHitbox_999(x, y);
}
static Image* images_bossgeyseroverlap2_1000_0_0[1];
static Direction direction_bossgeyseroverlap2_1000_0_0 = {0, 50, 50, 0, 1, images_bossgeyseroverlap2_1000_0_0, 1};
static Animation anim_bossgeyseroverlap2_1000_0 = {&direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, NULL, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0, &direction_bossgeyseroverlap2_1000_0_0};
static Animation * anim_array_bossgeyseroverlap2_1000[1] = {&anim_bossgeyseroverlap2_1000_0};
static Animations anim_bossgeyseroverlap2_1000 = {1, &anim_array_bossgeyseroverlap2_1000[0]};
static bool anim_bossgeyseroverlap2_1000_initialized;
class BossGeyserOverlap2_1000 : public Active
{
public:
    BossGeyserOverlap2_1000(int x, int y) : Active(x, y, BossGeyserOverlap2_1000_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GeyserOverlap 2", 20);
#endif
        this->animations = &anim_bossgeyseroverlap2_1000;
        if (!anim_bossgeyseroverlap2_1000_initialized) {
            anim_bossgeyseroverlap2_1000_initialized = true;
            images_bossgeyseroverlap2_1000_0_0[0] = get_internal_image(4663);
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
FrameObject * create_bossgeyseroverlap2_1000(int x, int y)
{
    return new (Active::pool.create()) BossGeyserOverlap2_1000(x, y);
}
static Image* images_bossgeyseroverlap1_1001_0_0[1];
static Direction direction_bossgeyseroverlap1_1001_0_0 = {0, 50, 50, 0, 1, images_bossgeyseroverlap1_1001_0_0, 1};
static Animation anim_bossgeyseroverlap1_1001_0 = {&direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, NULL, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0, &direction_bossgeyseroverlap1_1001_0_0};
static Animation * anim_array_bossgeyseroverlap1_1001[1] = {&anim_bossgeyseroverlap1_1001_0};
static Animations anim_bossgeyseroverlap1_1001 = {1, &anim_array_bossgeyseroverlap1_1001[0]};
static bool anim_bossgeyseroverlap1_1001_initialized;
class BossGeyserOverlap1_1001 : public Active
{
public:
    BossGeyserOverlap1_1001(int x, int y) : Active(x, y, BossGeyserOverlap1_1001_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_GeyserOverlap 1", 20);
#endif
        this->animations = &anim_bossgeyseroverlap1_1001;
        if (!anim_bossgeyseroverlap1_1001_initialized) {
            anim_bossgeyseroverlap1_1001_initialized = true;
            images_bossgeyseroverlap1_1001_0_0[0] = get_internal_image(2238);
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
FrameObject * create_bossgeyseroverlap1_1001(int x, int y)
{
    return new (Active::pool.create()) BossGeyserOverlap1_1001(x, y);
}
static Image* images_spinninglog_1003_0_0[1];
static Direction direction_spinninglog_1003_0_0 = {0, 50, 50, 0, 1, images_spinninglog_1003_0_0, 1};
static Image* images_spinninglog_1003_0_4[1];
static Direction direction_spinninglog_1003_0_4 = {4, 50, 50, 0, 1, images_spinninglog_1003_0_4, 1};
static Image* images_spinninglog_1003_0_8[1];
static Direction direction_spinninglog_1003_0_8 = {8, 50, 50, 0, 1, images_spinninglog_1003_0_8, 1};
static Image* images_spinninglog_1003_0_12[1];
static Direction direction_spinninglog_1003_0_12 = {12, 50, 50, 0, 1, images_spinninglog_1003_0_12, 1};
static Image* images_spinninglog_1003_0_16[1];
static Direction direction_spinninglog_1003_0_16 = {16, 50, 50, 0, 1, images_spinninglog_1003_0_16, 1};
static Image* images_spinninglog_1003_0_20[1];
static Direction direction_spinninglog_1003_0_20 = {20, 50, 50, 0, 1, images_spinninglog_1003_0_20, 1};
static Image* images_spinninglog_1003_0_24[1];
static Direction direction_spinninglog_1003_0_24 = {24, 50, 50, 0, 1, images_spinninglog_1003_0_24, 1};
static Image* images_spinninglog_1003_0_28[1];
static Direction direction_spinninglog_1003_0_28 = {28, 50, 50, 0, 1, images_spinninglog_1003_0_28, 1};
static Animation anim_spinninglog_1003_0 = {&direction_spinninglog_1003_0_0, &direction_spinninglog_1003_0_0, NULL, &direction_spinninglog_1003_0_4, &direction_spinninglog_1003_0_4, &direction_spinninglog_1003_0_4, NULL, &direction_spinninglog_1003_0_8, &direction_spinninglog_1003_0_8, &direction_spinninglog_1003_0_8, NULL, &direction_spinninglog_1003_0_12, &direction_spinninglog_1003_0_12, &direction_spinninglog_1003_0_12, NULL, &direction_spinninglog_1003_0_16, &direction_spinninglog_1003_0_16, &direction_spinninglog_1003_0_16, NULL, &direction_spinninglog_1003_0_20, &direction_spinninglog_1003_0_20, &direction_spinninglog_1003_0_20, NULL, &direction_spinninglog_1003_0_24, &direction_spinninglog_1003_0_24, &direction_spinninglog_1003_0_24, NULL, &direction_spinninglog_1003_0_28, &direction_spinninglog_1003_0_28, &direction_spinninglog_1003_0_28, NULL, &direction_spinninglog_1003_0_0};
static Animation * anim_array_spinninglog_1003[1] = {&anim_spinninglog_1003_0};
static Animations anim_spinninglog_1003 = {1, &anim_array_spinninglog_1003[0]};
static bool anim_spinninglog_1003_initialized;
class SpinningLog_1003 : public Active
{
public:
    SpinningLog_1003(int x, int y) : Active(x, y, SpinningLog_1003_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SpinningLog", 11);
#endif
        this->animations = &anim_spinninglog_1003;
        if (!anim_spinninglog_1003_initialized) {
            anim_spinninglog_1003_initialized = true;
            images_spinninglog_1003_0_0[0] = get_internal_image(486);
            images_spinninglog_1003_0_4[0] = get_internal_image(2763);
            images_spinninglog_1003_0_8[0] = get_internal_image(5288);
            images_spinninglog_1003_0_12[0] = get_internal_image(5289);
            images_spinninglog_1003_0_16[0] = get_internal_image(4967);
            images_spinninglog_1003_0_20[0] = get_internal_image(4970);
            images_spinninglog_1003_0_24[0] = get_internal_image(4969);
            images_spinninglog_1003_0_28[0] = get_internal_image(4975);
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
FrameObject * create_spinninglog_1003(int x, int y)
{
    return new (Active::pool.create()) SpinningLog_1003(x, y);
}
static Image* images_spinninglogmask_1004_0_0[1];
static Direction direction_spinninglogmask_1004_0_0 = {0, 50, 50, 0, 1, images_spinninglogmask_1004_0_0, 1};
static Animation anim_spinninglogmask_1004_0 = {&direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, NULL, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0, &direction_spinninglogmask_1004_0_0};
static Animation * anim_array_spinninglogmask_1004[1] = {&anim_spinninglogmask_1004_0};
static Animations anim_spinninglogmask_1004 = {1, &anim_array_spinninglogmask_1004[0]};
static bool anim_spinninglogmask_1004_initialized;
class SpinningLogMask_1004 : public Active
{
public:
    SpinningLogMask_1004(int x, int y) : Active(x, y, SpinningLogMask_1004_type)
    {
        // qualifiers: 15, 16, 19
#ifndef NDEBUG
        name = std::string("SpinningLog_Mask", 16);
#endif
        set_visible(false);
        this->animations = &anim_spinninglogmask_1004;
        if (!anim_spinninglogmask_1004_initialized) {
            anim_spinninglogmask_1004_initialized = true;
            images_spinninglogmask_1004_0_0[0] = get_internal_image(1269);
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
FrameObject * create_spinninglogmask_1004(int x, int y)
{
    return new (Active::pool.create()) SpinningLogMask_1004(x, y);
}
static Image* images_enemysporepod_1005_0_0[4];
static Direction direction_enemysporepod_1005_0_0 = {0, 50, 50, 0, -1, images_enemysporepod_1005_0_0, 4};
static Animation anim_enemysporepod_1005_0 = {&direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, NULL, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0, &direction_enemysporepod_1005_0_0};
static Image* images_enemysporepod_1005_7_0[4];
static Direction direction_enemysporepod_1005_7_0 = {0, 50, 50, 0, -1, images_enemysporepod_1005_7_0, 4};
static Animation anim_enemysporepod_1005_7 = {&direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, NULL, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0, &direction_enemysporepod_1005_7_0};
static Image* images_enemysporepod_1005_8_0[1];
static Direction direction_enemysporepod_1005_8_0 = {0, 50, 50, 0, -1, images_enemysporepod_1005_8_0, 1};
static Animation anim_enemysporepod_1005_8 = {&direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, NULL, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0, &direction_enemysporepod_1005_8_0};
static Image* images_enemysporepod_1005_11_0[4];
static Direction direction_enemysporepod_1005_11_0 = {0, 15, 15, 0, 1, images_enemysporepod_1005_11_0, 4};
static Animation anim_enemysporepod_1005_11 = {&direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, NULL, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0, &direction_enemysporepod_1005_11_0};
static Animation * anim_array_enemysporepod_1005[12] = {&anim_enemysporepod_1005_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemysporepod_1005_7, &anim_enemysporepod_1005_8, NULL, NULL, &anim_enemysporepod_1005_11};
static Animations anim_enemysporepod_1005 = {12, &anim_array_enemysporepod_1005[0]};
static bool anim_enemysporepod_1005_initialized;
class EnemySporePod_1005 : public Active
{
public:
    EnemySporePod_1005(int x, int y) : Active(x, y, EnemySporePod_1005_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_SporePod", 14);
#endif
        this->animations = &anim_enemysporepod_1005;
        if (!anim_enemysporepod_1005_initialized) {
            anim_enemysporepod_1005_initialized = true;
            images_enemysporepod_1005_0_0[0] = get_internal_image(1726);
            images_enemysporepod_1005_0_0[1] = get_internal_image(1736);
            images_enemysporepod_1005_0_0[2] = get_internal_image(1725);
            images_enemysporepod_1005_0_0[3] = get_internal_image(1733);
            images_enemysporepod_1005_7_0[0] = get_internal_image(1741);
            images_enemysporepod_1005_7_0[1] = get_internal_image(1737);
            images_enemysporepod_1005_7_0[2] = get_internal_image(1727);
            images_enemysporepod_1005_7_0[3] = get_internal_image(1734);
            images_enemysporepod_1005_8_0[0] = get_internal_image(1738);
            images_enemysporepod_1005_11_0[0] = get_internal_image(1741);
            images_enemysporepod_1005_11_0[1] = get_internal_image(1735);
            images_enemysporepod_1005_11_0[2] = get_internal_image(1740);
            images_enemysporepod_1005_11_0[3] = get_internal_image(1739);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 8);
    }
};
FrameObject * create_enemysporepod_1005(int x, int y)
{
    return new (Active::pool.create()) EnemySporePod_1005(x, y);
}
static Image* images_enemystarflounder_1006_0_0[24];
static Direction direction_enemystarflounder_1006_0_0 = {0, 100, 100, 0, -1, images_enemystarflounder_1006_0_0, 24};
static Image* images_enemystarflounder_1006_0_16[24];
static Direction direction_enemystarflounder_1006_0_16 = {16, 100, 100, 0, -1, images_enemystarflounder_1006_0_16, 24};
static Animation anim_enemystarflounder_1006_0 = {&direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, NULL, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, &direction_enemystarflounder_1006_0_16, NULL, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0, &direction_enemystarflounder_1006_0_0};
static Image* images_enemystarflounder_1006_8_0[1];
static Direction direction_enemystarflounder_1006_8_0 = {0, 50, 50, 0, -1, images_enemystarflounder_1006_8_0, 1};
static Image* images_enemystarflounder_1006_8_16[1];
static Direction direction_enemystarflounder_1006_8_16 = {16, 50, 50, 0, -1, images_enemystarflounder_1006_8_16, 1};
static Animation anim_enemystarflounder_1006_8 = {&direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, NULL, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, &direction_enemystarflounder_1006_8_16, NULL, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0, &direction_enemystarflounder_1006_8_0};
static Image* images_enemystarflounder_1006_10_0[4];
static Direction direction_enemystarflounder_1006_10_0 = {0, 20, 20, 0, 1, images_enemystarflounder_1006_10_0, 4};
static Image* images_enemystarflounder_1006_10_16[4];
static Direction direction_enemystarflounder_1006_10_16 = {16, 20, 20, 0, 1, images_enemystarflounder_1006_10_16, 4};
static Animation anim_enemystarflounder_1006_10 = {&direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, NULL, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, &direction_enemystarflounder_1006_10_16, NULL, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0, &direction_enemystarflounder_1006_10_0};
static Animation * anim_array_enemystarflounder_1006[11] = {&anim_enemystarflounder_1006_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemystarflounder_1006_8, NULL, &anim_enemystarflounder_1006_10};
static Animations anim_enemystarflounder_1006 = {11, &anim_array_enemystarflounder_1006[0]};
static bool anim_enemystarflounder_1006_initialized;
class EnemyStarFlounder_1006 : public Active
{
public:
    EnemyStarFlounder_1006(int x, int y) : Active(x, y, EnemyStarFlounder_1006_type)
    {
        // qualifiers: 29, 97
#ifndef NDEBUG
        name = std::string("Enemy_StarFlounder", 18);
#endif
        this->animations = &anim_enemystarflounder_1006;
        if (!anim_enemystarflounder_1006_initialized) {
            anim_enemystarflounder_1006_initialized = true;
            images_enemystarflounder_1006_0_0[0] = get_internal_image(705);
            images_enemystarflounder_1006_0_0[1] = get_internal_image(1759);
            images_enemystarflounder_1006_0_0[2] = get_internal_image(1924);
            images_enemystarflounder_1006_0_0[3] = get_internal_image(1926);
            images_enemystarflounder_1006_0_0[4] = get_internal_image(1959);
            images_enemystarflounder_1006_0_0[5] = get_internal_image(1960);
            images_enemystarflounder_1006_0_0[6] = get_internal_image(1541);
            images_enemystarflounder_1006_0_0[7] = get_internal_image(1996);
            images_enemystarflounder_1006_0_0[8] = get_internal_image(1998);
            images_enemystarflounder_1006_0_0[9] = get_internal_image(1999);
            images_enemystarflounder_1006_0_0[10] = get_internal_image(1997);
            images_enemystarflounder_1006_0_0[11] = get_internal_image(2000);
            images_enemystarflounder_1006_0_0[12] = get_internal_image(705);
            images_enemystarflounder_1006_0_0[13] = get_internal_image(1759);
            images_enemystarflounder_1006_0_0[14] = get_internal_image(1924);
            images_enemystarflounder_1006_0_0[15] = get_internal_image(1926);
            images_enemystarflounder_1006_0_0[16] = get_internal_image(1959);
            images_enemystarflounder_1006_0_0[17] = get_internal_image(1960);
            images_enemystarflounder_1006_0_0[18] = get_internal_image(2001);
            images_enemystarflounder_1006_0_0[19] = get_internal_image(2003);
            images_enemystarflounder_1006_0_0[20] = get_internal_image(2004);
            images_enemystarflounder_1006_0_0[21] = get_internal_image(2005);
            images_enemystarflounder_1006_0_0[22] = get_internal_image(2002);
            images_enemystarflounder_1006_0_0[23] = get_internal_image(2006);
            images_enemystarflounder_1006_0_16[0] = get_internal_image(2007);
            images_enemystarflounder_1006_0_16[1] = get_internal_image(2008);
            images_enemystarflounder_1006_0_16[2] = get_internal_image(2009);
            images_enemystarflounder_1006_0_16[3] = get_internal_image(2010);
            images_enemystarflounder_1006_0_16[4] = get_internal_image(2011);
            images_enemystarflounder_1006_0_16[5] = get_internal_image(2012);
            images_enemystarflounder_1006_0_16[6] = get_internal_image(2013);
            images_enemystarflounder_1006_0_16[7] = get_internal_image(2014);
            images_enemystarflounder_1006_0_16[8] = get_internal_image(2015);
            images_enemystarflounder_1006_0_16[9] = get_internal_image(2016);
            images_enemystarflounder_1006_0_16[10] = get_internal_image(2017);
            images_enemystarflounder_1006_0_16[11] = get_internal_image(2018);
            images_enemystarflounder_1006_0_16[12] = get_internal_image(2007);
            images_enemystarflounder_1006_0_16[13] = get_internal_image(2008);
            images_enemystarflounder_1006_0_16[14] = get_internal_image(2009);
            images_enemystarflounder_1006_0_16[15] = get_internal_image(2010);
            images_enemystarflounder_1006_0_16[16] = get_internal_image(2011);
            images_enemystarflounder_1006_0_16[17] = get_internal_image(2012);
            images_enemystarflounder_1006_0_16[18] = get_internal_image(2019);
            images_enemystarflounder_1006_0_16[19] = get_internal_image(2020);
            images_enemystarflounder_1006_0_16[20] = get_internal_image(2021);
            images_enemystarflounder_1006_0_16[21] = get_internal_image(2022);
            images_enemystarflounder_1006_0_16[22] = get_internal_image(2023);
            images_enemystarflounder_1006_0_16[23] = get_internal_image(2024);
            images_enemystarflounder_1006_8_0[0] = get_internal_image(2026);
            images_enemystarflounder_1006_8_16[0] = get_internal_image(2025);
            images_enemystarflounder_1006_10_0[0] = get_internal_image(1962);
            images_enemystarflounder_1006_10_0[1] = get_internal_image(1679);
            images_enemystarflounder_1006_10_0[2] = get_internal_image(1964);
            images_enemystarflounder_1006_10_0[3] = get_internal_image(1961);
            images_enemystarflounder_1006_10_16[0] = get_internal_image(1963);
            images_enemystarflounder_1006_10_16[1] = get_internal_image(1965);
            images_enemystarflounder_1006_10_16[2] = get_internal_image(1966);
            images_enemystarflounder_1006_10_16[3] = get_internal_image(1995);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(4, -1);
    }
};
FrameObject * create_enemystarflounder_1006(int x, int y)
{
    return new (Active::pool.create()) EnemyStarFlounder_1006(x, y);
}
static Image* images_breakablerock2_1007_0_0[1];
static Direction direction_breakablerock2_1007_0_0 = {0, 50, 50, 0, 1, images_breakablerock2_1007_0_0, 1};
static Animation anim_breakablerock2_1007_0 = {&direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, NULL, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0, &direction_breakablerock2_1007_0_0};
static Animation * anim_array_breakablerock2_1007[1] = {&anim_breakablerock2_1007_0};
static Animations anim_breakablerock2_1007 = {1, &anim_array_breakablerock2_1007[0]};
static bool anim_breakablerock2_1007_initialized;
class BreakableRock2_1007 : public Active
{
public:
    BreakableRock2_1007(int x, int y) : Active(x, y, BreakableRock2_1007_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableRock 2", 15);
#endif
        this->animations = &anim_breakablerock2_1007;
        if (!anim_breakablerock2_1007_initialized) {
            anim_breakablerock2_1007_initialized = true;
            images_breakablerock2_1007_0_0[0] = get_internal_image(1002);
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
FrameObject * create_breakablerock2_1007(int x, int y)
{
    return new (Active::pool.create()) BreakableRock2_1007(x, y);
}
class FunctionMusic_1008 : public ArrayObject
{
public:
    FunctionMusic_1008(int x, int y) : ArrayObject(x, y, FunctionMusic_1008_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Function.Music", 14);
#endif
        initialize(false, 0, 1, 1, 1);
    }
};
FrameObject * create_functionmusic_1008(int x, int y)
{
    return new (ArrayObject::pool.create()) FunctionMusic_1008(x, y);
}
