#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class AquaBrick2_706 : public Backdrop
{
public:
    AquaBrick2_706(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4523);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick2_706(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick2_706(x, y);
}
class AquaBrick4_707 : public Backdrop
{
public:
    AquaBrick4_707(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4570);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick4_707(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick4_707(x, y);
}
class ATLadder_708 : public Backdrop
{
public:
    ATLadder_708(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8526);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_atladder_708(int x, int y)
{
    return new (Backdrop::pool.create()) ATLadder_708(x, y);
}
class AquaBrick6_709 : public Backdrop
{
public:
    AquaBrick6_709(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 6", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4572);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick6_709(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick6_709(x, y);
}
class AquaBrickSlope3_710 : public Backdrop
{
public:
    AquaBrickSlope3_710(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickSlope 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4578);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrickslope3_710(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickSlope3_710(x, y);
}
class AquaBrickSlope4_711 : public Backdrop
{
public:
    AquaBrickSlope4_711(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickSlope 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4526);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrickslope4_711(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickSlope4_711(x, y);
}
class AquaBrick13_712 : public Backdrop
{
public:
    AquaBrick13_712(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 13", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4487);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick13_712(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick13_712(x, y);
}
class AquaBrick17_713 : public Backdrop
{
public:
    AquaBrick17_713(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 17", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4513);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick17_713(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick17_713(x, y);
}
class AquaBrick19_714 : public Backdrop
{
public:
    AquaBrick19_714(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 19", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4520);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick19_714(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick19_714(x, y);
}
class AquaBrick18_715 : public Backdrop
{
public:
    AquaBrick18_715(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 18", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4514);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick18_715(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick18_715(x, y);
}
class AquaBrick20_716 : public Backdrop
{
public:
    AquaBrick20_716(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 20", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4524);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick20_716(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick20_716(x, y);
}
class ATSewerPipe2_717 : public Backdrop
{
public:
    ATSewerPipe2_717(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8464);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe2_717(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe2_717(x, y);
}
class ATSewerPipe3_718 : public Backdrop
{
public:
    ATSewerPipe3_718(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8498);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe3_718(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe3_718(x, y);
}
class ATSewerPipe7_719 : public Backdrop
{
public:
    ATSewerPipe7_719(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8463);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe7_719(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe7_719(x, y);
}
class ATSewerPipe5_720 : public Backdrop
{
public:
    ATSewerPipe5_720(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_SewerPipe5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8439);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_atsewerpipe5_720(int x, int y)
{
    return new (Backdrop::pool.create()) ATSewerPipe5_720(x, y);
}
class AquaBrick9_721 : public Backdrop
{
public:
    AquaBrick9_721(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 9", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4574);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aquabrick9_721(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick9_721(x, y);
}
class ATWaterFaucet_722 : public Backdrop
{
public:
    ATWaterFaucet_722(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_WaterFaucet", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4851);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_atwaterfaucet_722(int x, int y)
{
    return new (Backdrop::pool.create()) ATWaterFaucet_722(x, y);
}
class ATWaterFaucet4_723 : public Backdrop
{
public:
    ATWaterFaucet4_723(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_WaterFaucet4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9368);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_atwaterfaucet4_723(int x, int y)
{
    return new (Backdrop::pool.create()) ATWaterFaucet4_723(x, y);
}
class ATWaterFaucet2_724 : public Backdrop
{
public:
    ATWaterFaucet2_724(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_WaterFaucet2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4527);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_atwaterfaucet2_724(int x, int y)
{
    return new (Backdrop::pool.create()) ATWaterFaucet2_724(x, y);
}
class WaterVent_725 : public Backdrop
{
public:
    WaterVent_725(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("WaterVent", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4838);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_watervent_725(int x, int y)
{
    return new (Backdrop::pool.create()) WaterVent_725(x, y);
}
class AquaBrick22_726 : public Backdrop
{
public:
    AquaBrick22_726(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 22", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4530);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick22_726(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick22_726(x, y);
}
class AquaBrick23_727 : public Backdrop
{
public:
    AquaBrick23_727(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 23", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4485);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick23_727(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick23_727(x, y);
}
class AquaBrick7_728 : public Backdrop
{
public:
    AquaBrick7_728(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 7", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3825);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick7_728(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick7_728(x, y);
}
class AquaBrick8_729 : public Backdrop
{
public:
    AquaBrick8_729(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 8", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4573);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick8_729(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick8_729(x, y);
}
class AquaBrick24_730 : public Backdrop
{
public:
    AquaBrick24_730(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 24", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4567);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick24_730(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick24_730(x, y);
}
class AquaBrick25_731 : public Backdrop
{
public:
    AquaBrick25_731(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 25", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4488);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick25_731(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick25_731(x, y);
}
class AquaBrick32_732 : public Backdrop
{
public:
    AquaBrick32_732(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 32", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4569);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick32_732(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick32_732(x, y);
}
class ATHandlebar_733 : public Backdrop
{
public:
    ATHandlebar_733(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AT_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5102);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_athandlebar_733(int x, int y)
{
    return new (Backdrop::pool.create()) ATHandlebar_733(x, y);
}
static Image* images_objectdigspot_734_0_0[1];
static Direction direction_objectdigspot_734_0_0 = {0, 50, 50, 0, 1, images_objectdigspot_734_0_0, 1};
static Animation anim_objectdigspot_734_0 = {&direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, NULL, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0, &direction_objectdigspot_734_0_0};
static Animation * anim_array_objectdigspot_734[1] = {&anim_objectdigspot_734_0};
static Animations anim_objectdigspot_734 = {1, &anim_array_objectdigspot_734[0]};
static bool anim_objectdigspot_734_initialized;
class ObjectDigSpot_734 : public Active
{
public:
    ObjectDigSpot_734(int x, int y) : Active(x, y, ObjectDigSpot_734_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_DigSpot", 14);
#endif
        set_visible(false);
        this->animations = &anim_objectdigspot_734;
        if (!anim_objectdigspot_734_initialized) {
            anim_objectdigspot_734_initialized = true;
            images_objectdigspot_734_0_0[0] = get_internal_image(3148);
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
FrameObject * create_objectdigspot_734(int x, int y)
{
    return new (Active::pool.create()) ObjectDigSpot_734(x, y);
}
static Image* images_switchdoor_735_0_0[1];
static Direction direction_switchdoor_735_0_0 = {0, 50, 50, 0, 1, images_switchdoor_735_0_0, 1};
static Animation anim_switchdoor_735_0 = {&direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, NULL, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0, &direction_switchdoor_735_0_0};
static Animation * anim_array_switchdoor_735[1] = {&anim_switchdoor_735_0};
static Animations anim_switchdoor_735 = {1, &anim_array_switchdoor_735[0]};
static bool anim_switchdoor_735_initialized;
class SwitchDoor_735 : public Active
{
public:
    SwitchDoor_735(int x, int y) : Active(x, y, SwitchDoor_735_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door", 11);
#endif
        this->animations = &anim_switchdoor_735;
        if (!anim_switchdoor_735_initialized) {
            anim_switchdoor_735_initialized = true;
            images_switchdoor_735_0_0[0] = get_internal_image(8665);
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
FrameObject * create_switchdoor_735(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor_735(x, y);
}
static Image* images_gimmickhangingmovingbar2_736_0_0[1];
static Direction direction_gimmickhangingmovingbar2_736_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingbar2_736_0_0, 1};
static Animation anim_gimmickhangingmovingbar2_736_0 = {&direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, NULL, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0, &direction_gimmickhangingmovingbar2_736_0_0};
static Animation * anim_array_gimmickhangingmovingbar2_736[1] = {&anim_gimmickhangingmovingbar2_736_0};
static Animations anim_gimmickhangingmovingbar2_736 = {1, &anim_array_gimmickhangingmovingbar2_736[0]};
static bool anim_gimmickhangingmovingbar2_736_initialized;
class GimmickHangingMovingBar2_736 : public Active
{
public:
    GimmickHangingMovingBar2_736(int x, int y) : Active(x, y, GimmickHangingMovingBar2_736_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar 2", 27);
#endif
        this->animations = &anim_gimmickhangingmovingbar2_736;
        if (!anim_gimmickhangingmovingbar2_736_initialized) {
            anim_gimmickhangingmovingbar2_736_initialized = true;
            images_gimmickhangingmovingbar2_736_0_0[0] = get_internal_image(8462);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 100);
        alterables->values.set(5, 1);
        alterables->values.set(6, 100);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingbar2_736(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar2_736(x, y);
}
static Image* images_gimmickhangingmovingsensor_737_0_0[1];
static Direction direction_gimmickhangingmovingsensor_737_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_737_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_737_0 = {&direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, NULL, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0, &direction_gimmickhangingmovingsensor_737_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_737[1] = {&anim_gimmickhangingmovingsensor_737_0};
static Animations anim_gimmickhangingmovingsensor_737 = {1, &anim_array_gimmickhangingmovingsensor_737[0]};
static bool anim_gimmickhangingmovingsensor_737_initialized;
class GimmickHangingMovingSensor_737 : public Active
{
public:
    GimmickHangingMovingSensor_737(int x, int y) : Active(x, y, GimmickHangingMovingSensor_737_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_737;
        if (!anim_gimmickhangingmovingsensor_737_initialized) {
            anim_gimmickhangingmovingsensor_737_initialized = true;
            images_gimmickhangingmovingsensor_737_0_0[0] = get_internal_image(614);
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
        alterables->values.set(6, 100);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingsensor_737(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_737(x, y);
}
static Image* images_gimmickhangingmovingchasis_738_0_0[1];
static Direction direction_gimmickhangingmovingchasis_738_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingchasis_738_0_0, 1};
static Animation anim_gimmickhangingmovingchasis_738_0 = {&direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, NULL, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0, &direction_gimmickhangingmovingchasis_738_0_0};
static Animation * anim_array_gimmickhangingmovingchasis_738[1] = {&anim_gimmickhangingmovingchasis_738_0};
static Animations anim_gimmickhangingmovingchasis_738 = {1, &anim_array_gimmickhangingmovingchasis_738[0]};
static bool anim_gimmickhangingmovingchasis_738_initialized;
class GimmickHangingMovingChasis_738 : public Active
{
public:
    GimmickHangingMovingChasis_738(int x, int y) : Active(x, y, GimmickHangingMovingChasis_738_type)
    {
        // qualifiers: 19, 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Chasis", 28);
#endif
        this->animations = &anim_gimmickhangingmovingchasis_738;
        if (!anim_gimmickhangingmovingchasis_738_initialized) {
            anim_gimmickhangingmovingchasis_738_initialized = true;
            images_gimmickhangingmovingchasis_738_0_0[0] = get_internal_image(8466);
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
FrameObject * create_gimmickhangingmovingchasis_738(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingChasis_738(x, y);
}
static Image* images_jellyspring_739_0_0[1];
static Direction direction_jellyspring_739_0_0 = {0, 50, 50, 0, 1, images_jellyspring_739_0_0, 1};
static Animation anim_jellyspring_739_0 = {&direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, NULL, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0, &direction_jellyspring_739_0_0};
static Animation * anim_array_jellyspring_739[1] = {&anim_jellyspring_739_0};
static Animations anim_jellyspring_739 = {1, &anim_array_jellyspring_739[0]};
static bool anim_jellyspring_739_initialized;
class JellySpring_739 : public Active
{
public:
    JellySpring_739(int x, int y) : Active(x, y, JellySpring_739_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("JellySpring", 11);
#endif
        this->animations = &anim_jellyspring_739;
        if (!anim_jellyspring_739_initialized) {
            anim_jellyspring_739_initialized = true;
            images_jellyspring_739_0_0[0] = get_internal_image(12433);
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
FrameObject * create_jellyspring_739(int x, int y)
{
    return new (Active::pool.create()) JellySpring_739(x, y);
}
static Image* images_gimmickhangingidlesensor_740_0_0[1];
static Direction direction_gimmickhangingidlesensor_740_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidlesensor_740_0_0, 1};
static Animation anim_gimmickhangingidlesensor_740_0 = {&direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, NULL, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0, &direction_gimmickhangingidlesensor_740_0_0};
static Animation * anim_array_gimmickhangingidlesensor_740[1] = {&anim_gimmickhangingidlesensor_740_0};
static Animations anim_gimmickhangingidlesensor_740 = {1, &anim_array_gimmickhangingidlesensor_740[0]};
static bool anim_gimmickhangingidlesensor_740_initialized;
class GimmickHangingIdleSensor_740 : public Active
{
public:
    GimmickHangingIdleSensor_740(int x, int y) : Active(x, y, GimmickHangingIdleSensor_740_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Sensor", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingidlesensor_740;
        if (!anim_gimmickhangingidlesensor_740_initialized) {
            anim_gimmickhangingidlesensor_740_initialized = true;
            images_gimmickhangingidlesensor_740_0_0[0] = get_internal_image(93);
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
FrameObject * create_gimmickhangingidlesensor_740(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleSensor_740(x, y);
}
static Image* images_enemyslime_741_0_0[10];
static Direction direction_enemyslime_741_0_0 = {0, 50, 50, 0, -1, images_enemyslime_741_0_0, 10};
static Image* images_enemyslime_741_0_8[10];
static Direction direction_enemyslime_741_0_8 = {8, 60, 60, 0, -1, images_enemyslime_741_0_8, 10};
static Image* images_enemyslime_741_0_16[10];
static Direction direction_enemyslime_741_0_16 = {16, 50, 50, 0, -1, images_enemyslime_741_0_16, 10};
static Animation anim_enemyslime_741_0 = {&direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, NULL, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, &direction_enemyslime_741_0_8, NULL, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, &direction_enemyslime_741_0_16, NULL, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0, &direction_enemyslime_741_0_0};
static Image* images_enemyslime_741_7_0[7];
static Direction direction_enemyslime_741_7_0 = {0, 50, 50, 6, -1, images_enemyslime_741_7_0, 7};
static Image* images_enemyslime_741_7_16[7];
static Direction direction_enemyslime_741_7_16 = {16, 50, 50, 6, -1, images_enemyslime_741_7_16, 7};
static Animation anim_enemyslime_741_7 = {&direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, NULL, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, &direction_enemyslime_741_7_16, NULL, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0, &direction_enemyslime_741_7_0};
static Image* images_enemyslime_741_8_0[6];
static Direction direction_enemyslime_741_8_0 = {0, 50, 50, 0, 1, images_enemyslime_741_8_0, 6};
static Image* images_enemyslime_741_8_16[6];
static Direction direction_enemyslime_741_8_16 = {16, 50, 50, 0, 1, images_enemyslime_741_8_16, 6};
static Animation anim_enemyslime_741_8 = {&direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, NULL, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, &direction_enemyslime_741_8_16, NULL, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0, &direction_enemyslime_741_8_0};
static Image* images_enemyslime_741_10_0[1];
static Direction direction_enemyslime_741_10_0 = {0, 50, 50, 0, -1, images_enemyslime_741_10_0, 1};
static Animation anim_enemyslime_741_10 = {&direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, NULL, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0, &direction_enemyslime_741_10_0};
static Animation * anim_array_enemyslime_741[11] = {&anim_enemyslime_741_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyslime_741_7, &anim_enemyslime_741_8, NULL, &anim_enemyslime_741_10};
static Animations anim_enemyslime_741 = {11, &anim_array_enemyslime_741[0]};
static bool anim_enemyslime_741_initialized;
class EnemySlime_741 : public Active
{
public:
    EnemySlime_741(int x, int y) : Active(x, y, EnemySlime_741_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Slime", 11);
#endif
        this->animations = &anim_enemyslime_741;
        if (!anim_enemyslime_741_initialized) {
            anim_enemyslime_741_initialized = true;
            images_enemyslime_741_0_0[0] = get_internal_image(8493);
            images_enemyslime_741_0_0[1] = get_internal_image(8517);
            images_enemyslime_741_0_0[2] = get_internal_image(8518);
            images_enemyslime_741_0_0[3] = get_internal_image(8519);
            images_enemyslime_741_0_0[4] = get_internal_image(8520);
            images_enemyslime_741_0_0[5] = get_internal_image(8521);
            images_enemyslime_741_0_0[6] = get_internal_image(8522);
            images_enemyslime_741_0_0[7] = get_internal_image(8523);
            images_enemyslime_741_0_0[8] = get_internal_image(8524);
            images_enemyslime_741_0_0[9] = get_internal_image(8525);
            images_enemyslime_741_0_8[0] = get_internal_image(8507);
            images_enemyslime_741_0_8[1] = get_internal_image(8508);
            images_enemyslime_741_0_8[2] = get_internal_image(8509);
            images_enemyslime_741_0_8[3] = get_internal_image(8510);
            images_enemyslime_741_0_8[4] = get_internal_image(8511);
            images_enemyslime_741_0_8[5] = get_internal_image(8512);
            images_enemyslime_741_0_8[6] = get_internal_image(8513);
            images_enemyslime_741_0_8[7] = get_internal_image(8514);
            images_enemyslime_741_0_8[8] = get_internal_image(8515);
            images_enemyslime_741_0_8[9] = get_internal_image(8516);
            images_enemyslime_741_0_16[0] = get_internal_image(8495);
            images_enemyslime_741_0_16[1] = get_internal_image(8496);
            images_enemyslime_741_0_16[2] = get_internal_image(7344);
            images_enemyslime_741_0_16[3] = get_internal_image(8486);
            images_enemyslime_741_0_16[4] = get_internal_image(8490);
            images_enemyslime_741_0_16[5] = get_internal_image(8487);
            images_enemyslime_741_0_16[6] = get_internal_image(8489);
            images_enemyslime_741_0_16[7] = get_internal_image(8492);
            images_enemyslime_741_0_16[8] = get_internal_image(8491);
            images_enemyslime_741_0_16[9] = get_internal_image(8494);
            images_enemyslime_741_7_0[0] = get_internal_image(8507);
            images_enemyslime_741_7_0[1] = get_internal_image(8527);
            images_enemyslime_741_7_0[2] = get_internal_image(8528);
            images_enemyslime_741_7_0[3] = get_internal_image(8527);
            images_enemyslime_741_7_0[4] = get_internal_image(8507);
            images_enemyslime_741_7_0[5] = get_internal_image(8529);
            images_enemyslime_741_7_0[6] = get_internal_image(8530);
            images_enemyslime_741_7_16[0] = get_internal_image(8506);
            images_enemyslime_741_7_16[1] = get_internal_image(7102);
            images_enemyslime_741_7_16[2] = get_internal_image(6239);
            images_enemyslime_741_7_16[3] = get_internal_image(7102);
            images_enemyslime_741_7_16[4] = get_internal_image(8506);
            images_enemyslime_741_7_16[5] = get_internal_image(7103);
            images_enemyslime_741_7_16[6] = get_internal_image(7096);
            images_enemyslime_741_8_0[0] = get_internal_image(8530);
            images_enemyslime_741_8_0[1] = get_internal_image(8529);
            images_enemyslime_741_8_0[2] = get_internal_image(8507);
            images_enemyslime_741_8_0[3] = get_internal_image(8527);
            images_enemyslime_741_8_0[4] = get_internal_image(8528);
            images_enemyslime_741_8_0[5] = get_internal_image(8527);
            images_enemyslime_741_8_16[0] = get_internal_image(7096);
            images_enemyslime_741_8_16[1] = get_internal_image(7103);
            images_enemyslime_741_8_16[2] = get_internal_image(8506);
            images_enemyslime_741_8_16[3] = get_internal_image(7102);
            images_enemyslime_741_8_16[4] = get_internal_image(6239);
            images_enemyslime_741_8_16[5] = get_internal_image(7102);
            images_enemyslime_741_10_0[0] = get_internal_image(7129);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 3);
        alterables->values.set(4, 170);
        alterables->values.set(9, -1);
        alterables->values.set(10, 2);
    }
};
FrameObject * create_enemyslime_741(int x, int y)
{
    return new (Active::pool.create()) EnemySlime_741(x, y);
}
static Image* images_enemyfirefly_742_0_0[3];
static Direction direction_enemyfirefly_742_0_0 = {0, 100, 100, 0, -1, images_enemyfirefly_742_0_0, 3};
static Image* images_enemyfirefly_742_0_1[6];
static Direction direction_enemyfirefly_742_0_1 = {1, 100, 100, 0, -1, images_enemyfirefly_742_0_1, 6};
static Image* images_enemyfirefly_742_0_2[3];
static Direction direction_enemyfirefly_742_0_2 = {2, 100, 100, 0, -1, images_enemyfirefly_742_0_2, 3};
static Image* images_enemyfirefly_742_0_16[3];
static Direction direction_enemyfirefly_742_0_16 = {16, 100, 100, 0, -1, images_enemyfirefly_742_0_16, 3};
static Image* images_enemyfirefly_742_0_17[6];
static Direction direction_enemyfirefly_742_0_17 = {17, 100, 100, 0, -1, images_enemyfirefly_742_0_17, 6};
static Image* images_enemyfirefly_742_0_18[3];
static Direction direction_enemyfirefly_742_0_18 = {18, 100, 100, 0, -1, images_enemyfirefly_742_0_18, 3};
static Animation anim_enemyfirefly_742_0 = {&direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_1, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, &direction_enemyfirefly_742_0_2, NULL, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_16, &direction_enemyfirefly_742_0_17, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, &direction_enemyfirefly_742_0_18, NULL, &direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_0, &direction_enemyfirefly_742_0_0};
static Image* images_enemyfirefly_742_8_0[1];
static Direction direction_enemyfirefly_742_8_0 = {0, 50, 50, 0, -1, images_enemyfirefly_742_8_0, 1};
static Image* images_enemyfirefly_742_8_16[1];
static Direction direction_enemyfirefly_742_8_16 = {16, 50, 50, 0, -1, images_enemyfirefly_742_8_16, 1};
static Animation anim_enemyfirefly_742_8 = {&direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, NULL, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, &direction_enemyfirefly_742_8_16, NULL, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0, &direction_enemyfirefly_742_8_0};
static Animation * anim_array_enemyfirefly_742[9] = {&anim_enemyfirefly_742_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyfirefly_742_8};
static Animations anim_enemyfirefly_742 = {9, &anim_array_enemyfirefly_742[0]};
static bool anim_enemyfirefly_742_initialized;
class EnemyFirefly_742 : public Active
{
public:
    EnemyFirefly_742(int x, int y) : Active(x, y, EnemyFirefly_742_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Firefly", 13);
#endif
        this->animations = &anim_enemyfirefly_742;
        if (!anim_enemyfirefly_742_initialized) {
            anim_enemyfirefly_742_initialized = true;
            images_enemyfirefly_742_0_0[0] = get_internal_image(8636);
            images_enemyfirefly_742_0_0[1] = get_internal_image(8638);
            images_enemyfirefly_742_0_0[2] = get_internal_image(8639);
            images_enemyfirefly_742_0_1[0] = get_internal_image(6841);
            images_enemyfirefly_742_0_1[1] = get_internal_image(8348);
            images_enemyfirefly_742_0_1[2] = get_internal_image(8343);
            images_enemyfirefly_742_0_1[3] = get_internal_image(8636);
            images_enemyfirefly_742_0_1[4] = get_internal_image(8638);
            images_enemyfirefly_742_0_1[5] = get_internal_image(8639);
            images_enemyfirefly_742_0_2[0] = get_internal_image(8412);
            images_enemyfirefly_742_0_2[1] = get_internal_image(8344);
            images_enemyfirefly_742_0_2[2] = get_internal_image(8346);
            images_enemyfirefly_742_0_16[0] = get_internal_image(8637);
            images_enemyfirefly_742_0_16[1] = get_internal_image(8640);
            images_enemyfirefly_742_0_16[2] = get_internal_image(8641);
            images_enemyfirefly_742_0_17[0] = get_internal_image(8356);
            images_enemyfirefly_742_0_17[1] = get_internal_image(8357);
            images_enemyfirefly_742_0_17[2] = get_internal_image(8358);
            images_enemyfirefly_742_0_17[3] = get_internal_image(8637);
            images_enemyfirefly_742_0_17[4] = get_internal_image(8640);
            images_enemyfirefly_742_0_17[5] = get_internal_image(8641);
            images_enemyfirefly_742_0_18[0] = get_internal_image(8409);
            images_enemyfirefly_742_0_18[1] = get_internal_image(8360);
            images_enemyfirefly_742_0_18[2] = get_internal_image(8365);
            images_enemyfirefly_742_8_0[0] = get_internal_image(8644);
            images_enemyfirefly_742_8_16[0] = get_internal_image(8642);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 3);
        alterables->values.set(4, 170);
        alterables->values.set(8, 40);
    }
};
FrameObject * create_enemyfirefly_742(int x, int y)
{
    return new (Active::pool.create()) EnemyFirefly_742(x, y);
}
static Image* images_breakableaquabrick_743_0_0[1];
static Direction direction_breakableaquabrick_743_0_0 = {0, 50, 50, 0, 1, images_breakableaquabrick_743_0_0, 1};
static Animation anim_breakableaquabrick_743_0 = {&direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, NULL, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0, &direction_breakableaquabrick_743_0_0};
static Animation * anim_array_breakableaquabrick_743[1] = {&anim_breakableaquabrick_743_0};
static Animations anim_breakableaquabrick_743 = {1, &anim_array_breakableaquabrick_743[0]};
static bool anim_breakableaquabrick_743_initialized;
class BreakableAquaBrick_743 : public Active
{
public:
    BreakableAquaBrick_743(int x, int y) : Active(x, y, BreakableAquaBrick_743_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableAquaBrick", 18);
#endif
        this->animations = &anim_breakableaquabrick_743;
        if (!anim_breakableaquabrick_743_initialized) {
            anim_breakableaquabrick_743_initialized = true;
            images_breakableaquabrick_743_0_0[0] = get_internal_image(4879);
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
FrameObject * create_breakableaquabrick_743(int x, int y)
{
    return new (Active::pool.create()) BreakableAquaBrick_743(x, y);
}
static Image* images_aquabrickplatform_744_0_0[1];
static Direction direction_aquabrickplatform_744_0_0 = {0, 50, 50, 0, 1, images_aquabrickplatform_744_0_0, 1};
static Animation anim_aquabrickplatform_744_0 = {&direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, NULL, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0, &direction_aquabrickplatform_744_0_0};
static Animation * anim_array_aquabrickplatform_744[1] = {&anim_aquabrickplatform_744_0};
static Animations anim_aquabrickplatform_744 = {1, &anim_array_aquabrickplatform_744[0]};
static bool anim_aquabrickplatform_744_initialized;
class AquaBrickPlatform_744 : public Active
{
public:
    AquaBrickPlatform_744(int x, int y) : Active(x, y, AquaBrickPlatform_744_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("AquaBrick Platform", 18);
#endif
        this->animations = &anim_aquabrickplatform_744;
        if (!anim_aquabrickplatform_744_initialized) {
            anim_aquabrickplatform_744_initialized = true;
            images_aquabrickplatform_744_0_0[0] = get_internal_image(8502);
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
FrameObject * create_aquabrickplatform_744(int x, int y)
{
    return new (Active::pool.create()) AquaBrickPlatform_744(x, y);
}
static Image* images_collapsingplatform_745_0_0[1];
static Direction direction_collapsingplatform_745_0_0 = {0, 50, 50, 0, 1, images_collapsingplatform_745_0_0, 1};
static Animation anim_collapsingplatform_745_0 = {&direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, NULL, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0, &direction_collapsingplatform_745_0_0};
static Animation * anim_array_collapsingplatform_745[1] = {&anim_collapsingplatform_745_0};
static Animations anim_collapsingplatform_745 = {1, &anim_array_collapsingplatform_745[0]};
static bool anim_collapsingplatform_745_initialized;
class CollapsingPlatform_745 : public Active
{
public:
    CollapsingPlatform_745(int x, int y) : Active(x, y, CollapsingPlatform_745_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CollapsingPlatform", 18);
#endif
        this->animations = &anim_collapsingplatform_745;
        if (!anim_collapsingplatform_745_initialized) {
            anim_collapsingplatform_745_initialized = true;
            images_collapsingplatform_745_0_0[0] = get_internal_image(1689);
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
FrameObject * create_collapsingplatform_745(int x, int y)
{
    return new (Active::pool.create()) CollapsingPlatform_745(x, y);
}
static Image* images_axelplatformmaker1_746_0_0[1];
static Direction direction_axelplatformmaker1_746_0_0 = {0, 50, 50, 0, 1, images_axelplatformmaker1_746_0_0, 1};
static Animation anim_axelplatformmaker1_746_0 = {&direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, NULL, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0, &direction_axelplatformmaker1_746_0_0};
static Animation * anim_array_axelplatformmaker1_746[1] = {&anim_axelplatformmaker1_746_0};
static Animations anim_axelplatformmaker1_746 = {1, &anim_array_axelplatformmaker1_746[0]};
static bool anim_axelplatformmaker1_746_initialized;
class AxelPlatformMaker1_746 : public Active
{
public:
    AxelPlatformMaker1_746(int x, int y) : Active(x, y, AxelPlatformMaker1_746_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AxelPlatform_Maker 1", 20);
#endif
        set_visible(false);
        this->animations = &anim_axelplatformmaker1_746;
        if (!anim_axelplatformmaker1_746_initialized) {
            anim_axelplatformmaker1_746_initialized = true;
            images_axelplatformmaker1_746_0_0[0] = get_internal_image(7415);
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
FrameObject * create_axelplatformmaker1_746(int x, int y)
{
    return new (Active::pool.create()) AxelPlatformMaker1_746(x, y);
}
static Image* images_axelplatformmaker2_747_0_0[1];
static Direction direction_axelplatformmaker2_747_0_0 = {0, 50, 50, 0, 1, images_axelplatformmaker2_747_0_0, 1};
static Animation anim_axelplatformmaker2_747_0 = {&direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, NULL, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0, &direction_axelplatformmaker2_747_0_0};
static Animation * anim_array_axelplatformmaker2_747[1] = {&anim_axelplatformmaker2_747_0};
static Animations anim_axelplatformmaker2_747 = {1, &anim_array_axelplatformmaker2_747[0]};
static bool anim_axelplatformmaker2_747_initialized;
class AxelPlatformMaker2_747 : public Active
{
public:
    AxelPlatformMaker2_747(int x, int y) : Active(x, y, AxelPlatformMaker2_747_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AxelPlatform_Maker 2", 20);
#endif
        set_visible(false);
        this->animations = &anim_axelplatformmaker2_747;
        if (!anim_axelplatformmaker2_747_initialized) {
            anim_axelplatformmaker2_747_initialized = true;
            images_axelplatformmaker2_747_0_0[0] = get_internal_image(7415);
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
FrameObject * create_axelplatformmaker2_747(int x, int y)
{
    return new (Active::pool.create()) AxelPlatformMaker2_747(x, y);
}
static Image* images_waterjet_748_0_0[16];
static Direction direction_waterjet_748_0_0 = {0, 100, 100, 0, -1, images_waterjet_748_0_0, 16};
static Animation anim_waterjet_748_0 = {&direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, NULL, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0, &direction_waterjet_748_0_0};
static Animation * anim_array_waterjet_748[1] = {&anim_waterjet_748_0};
static Animations anim_waterjet_748 = {1, &anim_array_waterjet_748[0]};
static bool anim_waterjet_748_initialized;
class WaterJet_748 : public Active
{
public:
    WaterJet_748(int x, int y) : Active(x, y, WaterJet_748_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterJet", 8);
#endif
        this->animations = &anim_waterjet_748;
        if (!anim_waterjet_748_initialized) {
            anim_waterjet_748_initialized = true;
            images_waterjet_748_0_0[0] = get_internal_image(8573);
            images_waterjet_748_0_0[1] = get_internal_image(8589);
            images_waterjet_748_0_0[2] = get_internal_image(7108);
            images_waterjet_748_0_0[3] = get_internal_image(7387);
            images_waterjet_748_0_0[4] = get_internal_image(8455);
            images_waterjet_748_0_0[5] = get_internal_image(8500);
            images_waterjet_748_0_0[6] = get_internal_image(8535);
            images_waterjet_748_0_0[7] = get_internal_image(8563);
            images_waterjet_748_0_0[8] = get_internal_image(8564);
            images_waterjet_748_0_0[9] = get_internal_image(8565);
            images_waterjet_748_0_0[10] = get_internal_image(8566);
            images_waterjet_748_0_0[11] = get_internal_image(8567);
            images_waterjet_748_0_0[12] = get_internal_image(8568);
            images_waterjet_748_0_0[13] = get_internal_image(8569);
            images_waterjet_748_0_0[14] = get_internal_image(8570);
            images_waterjet_748_0_0[15] = get_internal_image(8572);
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
FrameObject * create_waterjet_748(int x, int y)
{
    return new (Active::pool.create()) WaterJet_748(x, y);
}
static Image* images_waterjetback_749_0_0[16];
static Direction direction_waterjetback_749_0_0 = {0, 100, 100, 0, -1, images_waterjetback_749_0_0, 16};
static Animation anim_waterjetback_749_0 = {&direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, NULL, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0, &direction_waterjetback_749_0_0};
static Animation * anim_array_waterjetback_749[1] = {&anim_waterjetback_749_0};
static Animations anim_waterjetback_749 = {1, &anim_array_waterjetback_749[0]};
static bool anim_waterjetback_749_initialized;
class WaterJetBack_749 : public Active
{
public:
    WaterJetBack_749(int x, int y) : Active(x, y, WaterJetBack_749_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterJet_back", 13);
#endif
        this->animations = &anim_waterjetback_749;
        if (!anim_waterjetback_749_initialized) {
            anim_waterjetback_749_initialized = true;
            images_waterjetback_749_0_0[0] = get_internal_image(8573);
            images_waterjetback_749_0_0[1] = get_internal_image(8589);
            images_waterjetback_749_0_0[2] = get_internal_image(7108);
            images_waterjetback_749_0_0[3] = get_internal_image(7387);
            images_waterjetback_749_0_0[4] = get_internal_image(8455);
            images_waterjetback_749_0_0[5] = get_internal_image(8500);
            images_waterjetback_749_0_0[6] = get_internal_image(8535);
            images_waterjetback_749_0_0[7] = get_internal_image(8563);
            images_waterjetback_749_0_0[8] = get_internal_image(8564);
            images_waterjetback_749_0_0[9] = get_internal_image(8565);
            images_waterjetback_749_0_0[10] = get_internal_image(8566);
            images_waterjetback_749_0_0[11] = get_internal_image(8567);
            images_waterjetback_749_0_0[12] = get_internal_image(8568);
            images_waterjetback_749_0_0[13] = get_internal_image(8569);
            images_waterjetback_749_0_0[14] = get_internal_image(8570);
            images_waterjetback_749_0_0[15] = get_internal_image(8572);
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
FrameObject * create_waterjetback_749(int x, int y)
{
    return new (Active::pool.create()) WaterJetBack_749(x, y);
}
static Image* images_aquatreeoverlay_750_0_0[1];
static Direction direction_aquatreeoverlay_750_0_0 = {0, 50, 50, 0, 1, images_aquatreeoverlay_750_0_0, 1};
static Animation anim_aquatreeoverlay_750_0 = {&direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, NULL, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0, &direction_aquatreeoverlay_750_0_0};
static Animation * anim_array_aquatreeoverlay_750[1] = {&anim_aquatreeoverlay_750_0};
static Animations anim_aquatreeoverlay_750 = {1, &anim_array_aquatreeoverlay_750[0]};
static bool anim_aquatreeoverlay_750_initialized;
class AquaTreeOverlay_750 : public Active
{
public:
    AquaTreeOverlay_750(int x, int y) : Active(x, y, AquaTreeOverlay_750_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AquaTree_Overlay", 16);
#endif
        this->animations = &anim_aquatreeoverlay_750;
        if (!anim_aquatreeoverlay_750_initialized) {
            anim_aquatreeoverlay_750_initialized = true;
            images_aquatreeoverlay_750_0_0[0] = get_internal_image(3462);
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
FrameObject * create_aquatreeoverlay_750(int x, int y)
{
    return new (Active::pool.create()) AquaTreeOverlay_750(x, y);
}
static Image* images_objectwhispmaker_751_0_0[1];
static Direction direction_objectwhispmaker_751_0_0 = {0, 50, 50, 0, 1, images_objectwhispmaker_751_0_0, 1};
static Animation anim_objectwhispmaker_751_0 = {&direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, NULL, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0, &direction_objectwhispmaker_751_0_0};
static Animation * anim_array_objectwhispmaker_751[1] = {&anim_objectwhispmaker_751_0};
static Animations anim_objectwhispmaker_751 = {1, &anim_array_objectwhispmaker_751[0]};
static bool anim_objectwhispmaker_751_initialized;
class ObjectWhispMaker_751 : public Active
{
public:
    ObjectWhispMaker_751(int x, int y) : Active(x, y, ObjectWhispMaker_751_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_WhispMaker", 17);
#endif
        set_visible(false);
        this->animations = &anim_objectwhispmaker_751;
        if (!anim_objectwhispmaker_751_initialized) {
            anim_objectwhispmaker_751_initialized = true;
            images_objectwhispmaker_751_0_0[0] = get_internal_image(7110);
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
FrameObject * create_objectwhispmaker_751(int x, int y)
{
    return new (Active::pool.create()) ObjectWhispMaker_751(x, y);
}
static Image* images_switchpressureplate_752_0_0[1];
static Direction direction_switchpressureplate_752_0_0 = {0, 50, 50, 0, 1, images_switchpressureplate_752_0_0, 1};
static Animation anim_switchpressureplate_752_0 = {&direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, NULL, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0, &direction_switchpressureplate_752_0_0};
static Animation * anim_array_switchpressureplate_752[1] = {&anim_switchpressureplate_752_0};
static Animations anim_switchpressureplate_752 = {1, &anim_array_switchpressureplate_752[0]};
static bool anim_switchpressureplate_752_initialized;
class SwitchPressurePlate_752 : public Active
{
public:
    SwitchPressurePlate_752(int x, int y) : Active(x, y, SwitchPressurePlate_752_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_PressurePlate", 20);
#endif
        this->animations = &anim_switchpressureplate_752;
        if (!anim_switchpressureplate_752_initialized) {
            anim_switchpressureplate_752_initialized = true;
            images_switchpressureplate_752_0_0[0] = get_internal_image(629);
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
FrameObject * create_switchpressureplate_752(int x, int y)
{
    return new (Active::pool.create()) SwitchPressurePlate_752(x, y);
}
static Image* images_minibossironwormbase_753_0_0[1];
static Direction direction_minibossironwormbase_753_0_0 = {0, 50, 50, 0, 1, images_minibossironwormbase_753_0_0, 1};
static Animation anim_minibossironwormbase_753_0 = {&direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, NULL, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0, &direction_minibossironwormbase_753_0_0};
static Animation * anim_array_minibossironwormbase_753[1] = {&anim_minibossironwormbase_753_0};
static Animations anim_minibossironwormbase_753 = {1, &anim_array_minibossironwormbase_753[0]};
static bool anim_minibossironwormbase_753_initialized;
class MinibossIronWormBase_753 : public Active
{
public:
    MinibossIronWormBase_753(int x, int y) : Active(x, y, MinibossIronWormBase_753_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_IronWormBase", 21);
#endif
        this->animations = &anim_minibossironwormbase_753;
        if (!anim_minibossironwormbase_753_initialized) {
            anim_minibossironwormbase_753_initialized = true;
            images_minibossironwormbase_753_0_0[0] = get_internal_image(8703);
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
FrameObject * create_minibossironwormbase_753(int x, int y)
{
    return new (Active::pool.create()) MinibossIronWormBase_753(x, y);
}
static Image* images_switchdoor2_754_0_0[1];
static Direction direction_switchdoor2_754_0_0 = {0, 50, 50, 0, 1, images_switchdoor2_754_0_0, 1};
static Animation anim_switchdoor2_754_0 = {&direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, NULL, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0, &direction_switchdoor2_754_0_0};
static Animation * anim_array_switchdoor2_754[1] = {&anim_switchdoor2_754_0};
static Animations anim_switchdoor2_754 = {1, &anim_array_switchdoor2_754[0]};
static bool anim_switchdoor2_754_initialized;
class SwitchDoor2_754 : public Active
{
public:
    SwitchDoor2_754(int x, int y) : Active(x, y, SwitchDoor2_754_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_Door 2", 13);
#endif
        this->animations = &anim_switchdoor2_754;
        if (!anim_switchdoor2_754_initialized) {
            anim_switchdoor2_754_initialized = true;
            images_switchdoor2_754_0_0[0] = get_internal_image(8705);
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
FrameObject * create_switchdoor2_754(int x, int y)
{
    return new (Active::pool.create()) SwitchDoor2_754(x, y);
}
static Image* images_hazardspikesup_755_0_0[1];
static Direction direction_hazardspikesup_755_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_755_0_0, 1};
static Animation anim_hazardspikesup_755_0 = {&direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, NULL, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0, &direction_hazardspikesup_755_0_0};
static Animation * anim_array_hazardspikesup_755[1] = {&anim_hazardspikesup_755_0};
static Animations anim_hazardspikesup_755 = {1, &anim_array_hazardspikesup_755[0]};
static bool anim_hazardspikesup_755_initialized;
class HazardSpikesUp_755 : public Active
{
public:
    HazardSpikesUp_755(int x, int y) : Active(x, y, HazardSpikesUp_755_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_755;
        if (!anim_hazardspikesup_755_initialized) {
            anim_hazardspikesup_755_initialized = true;
            images_hazardspikesup_755_0_0[0] = get_internal_image(5782);
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
FrameObject * create_hazardspikesup_755(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_755(x, y);
}
static Image* images_hazardspikesdown_756_0_0[1];
static Direction direction_hazardspikesdown_756_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_756_0_0, 1};
static Animation anim_hazardspikesdown_756_0 = {&direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, NULL, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0, &direction_hazardspikesdown_756_0_0};
static Animation * anim_array_hazardspikesdown_756[1] = {&anim_hazardspikesdown_756_0};
static Animations anim_hazardspikesdown_756 = {1, &anim_array_hazardspikesdown_756[0]};
static bool anim_hazardspikesdown_756_initialized;
class HazardSpikesDown_756 : public Active
{
public:
    HazardSpikesDown_756(int x, int y) : Active(x, y, HazardSpikesDown_756_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_756;
        if (!anim_hazardspikesdown_756_initialized) {
            anim_hazardspikesdown_756_initialized = true;
            images_hazardspikesdown_756_0_0[0] = get_internal_image(4383);
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
FrameObject * create_hazardspikesdown_756(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_756(x, y);
}
static Image* images_hazardspikesleft_757_0_0[1];
static Direction direction_hazardspikesleft_757_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_757_0_0, 1};
static Animation anim_hazardspikesleft_757_0 = {&direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, NULL, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0, &direction_hazardspikesleft_757_0_0};
static Animation * anim_array_hazardspikesleft_757[1] = {&anim_hazardspikesleft_757_0};
static Animations anim_hazardspikesleft_757 = {1, &anim_array_hazardspikesleft_757[0]};
static bool anim_hazardspikesleft_757_initialized;
class HazardSpikesLeft_757 : public Active
{
public:
    HazardSpikesLeft_757(int x, int y) : Active(x, y, HazardSpikesLeft_757_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_757;
        if (!anim_hazardspikesleft_757_initialized) {
            anim_hazardspikesleft_757_initialized = true;
            images_hazardspikesleft_757_0_0[0] = get_internal_image(7412);
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
FrameObject * create_hazardspikesleft_757(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_757(x, y);
}
static Image* images_hazardspikesright_758_0_0[1];
static Direction direction_hazardspikesright_758_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_758_0_0, 1};
static Animation anim_hazardspikesright_758_0 = {&direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, NULL, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0, &direction_hazardspikesright_758_0_0};
static Animation * anim_array_hazardspikesright_758[1] = {&anim_hazardspikesright_758_0};
static Animations anim_hazardspikesright_758 = {1, &anim_array_hazardspikesright_758[0]};
static bool anim_hazardspikesright_758_initialized;
class HazardSpikesRight_758 : public Active
{
public:
    HazardSpikesRight_758(int x, int y) : Active(x, y, HazardSpikesRight_758_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_758;
        if (!anim_hazardspikesright_758_initialized) {
            anim_hazardspikesright_758_initialized = true;
            images_hazardspikesright_758_0_0[0] = get_internal_image(8429);
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
FrameObject * create_hazardspikesright_758(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_758(x, y);
}
class GUIAir_759 : public Counter
{
public:
    GUIAir_759(int x, int y) : Counter(x, y, GUIAir_759_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Air", 7);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = ANIMATION_COUNTER;
        static Image * counter_images[12];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(4752);
            counter_images[1] = get_internal_image(10660);
            counter_images[2] = get_internal_image(10665);
            counter_images[3] = get_internal_image(10666);
            counter_images[4] = get_internal_image(10668);
            counter_images[5] = get_internal_image(10672);
            counter_images[6] = get_internal_image(10669);
            counter_images[7] = get_internal_image(10676);
            counter_images[8] = get_internal_image(10678);
            counter_images[9] = get_internal_image(10679);
            counter_images[10] = get_internal_image(10709);
            counter_images[11] = get_internal_image(10710);
        }
        images = (Image**)&counter_images;
        image_count = 12;
        minimum = 0;
        maximum = 11;
        if (global_data_189_gui_air.init)
            set(global_data_189_gui_air.value);
        else
            set(11);
    }
    ~GUIAir_759()
    {
        global_data_189_gui_air.init = true;
        global_data_189_gui_air.value = value;
    }
    void dealloc()
    {
        this->GUIAir_759::~GUIAir_759();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guiair_759(int x, int y)
{
    return new (Counter::pool.create()) GUIAir_759(x, y);
}
static Image* images_levelcardintro3_760_0_0[9];
static Direction direction_levelcardintro3_760_0_0 = {0, 0, 0, 0, 1, images_levelcardintro3_760_0_0, 9};
static Animation anim_levelcardintro3_760_0 = {&direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, NULL, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0, &direction_levelcardintro3_760_0_0};
static Animation * anim_array_levelcardintro3_760[1] = {&anim_levelcardintro3_760_0};
static Animations anim_levelcardintro3_760 = {1, &anim_array_levelcardintro3_760[0]};
static bool anim_levelcardintro3_760_initialized;
class LevelCardIntro3_760 : public Active
{
public:
    LevelCardIntro3_760(int x, int y) : Active(x, y, LevelCardIntro3_760_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Intro 3", 17);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_levelcardintro3_760;
        if (!anim_levelcardintro3_760_initialized) {
            anim_levelcardintro3_760_initialized = true;
            images_levelcardintro3_760_0_0[0] = get_internal_image(2806);
            images_levelcardintro3_760_0_0[1] = get_internal_image(182);
            images_levelcardintro3_760_0_0[2] = get_internal_image(6435);
            images_levelcardintro3_760_0_0[3] = get_internal_image(1473);
            images_levelcardintro3_760_0_0[4] = get_internal_image(190);
            images_levelcardintro3_760_0_0[5] = get_internal_image(1319);
            images_levelcardintro3_760_0_0[6] = get_internal_image(1153);
            images_levelcardintro3_760_0_0[7] = get_internal_image(1156);
            images_levelcardintro3_760_0_0[8] = get_internal_image(1049);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(50);
        ((BallMovement*)movement)->set_deceleration(0);
        create_alterables();
    }
};
FrameObject * create_levelcardintro3_760(int x, int y)
{
    return new (Active::pool.create()) LevelCardIntro3_760(x, y);
}
static Image* images_levelcardintro2_761_0_0[15];
static Direction direction_levelcardintro2_761_0_0 = {0, 0, 0, 0, 1, images_levelcardintro2_761_0_0, 15};
static Animation anim_levelcardintro2_761_0 = {&direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, NULL, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0, &direction_levelcardintro2_761_0_0};
static Animation * anim_array_levelcardintro2_761[1] = {&anim_levelcardintro2_761_0};
static Animations anim_levelcardintro2_761 = {1, &anim_array_levelcardintro2_761[0]};
static bool anim_levelcardintro2_761_initialized;
class LevelCardIntro2_761 : public Active
{
public:
    LevelCardIntro2_761(int x, int y) : Active(x, y, LevelCardIntro2_761_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Intro 2", 17);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_levelcardintro2_761;
        if (!anim_levelcardintro2_761_initialized) {
            anim_levelcardintro2_761_initialized = true;
            images_levelcardintro2_761_0_0[0] = get_internal_image(2804);
            images_levelcardintro2_761_0_0[1] = get_internal_image(167);
            images_levelcardintro2_761_0_0[2] = get_internal_image(308);
            images_levelcardintro2_761_0_0[3] = get_internal_image(7140);
            images_levelcardintro2_761_0_0[4] = get_internal_image(1698);
            images_levelcardintro2_761_0_0[5] = get_internal_image(1561);
            images_levelcardintro2_761_0_0[6] = get_internal_image(11105);
            images_levelcardintro2_761_0_0[7] = get_internal_image(13011);
            images_levelcardintro2_761_0_0[8] = get_internal_image(12958);
            images_levelcardintro2_761_0_0[9] = get_internal_image(12956);
            images_levelcardintro2_761_0_0[10] = get_internal_image(12956);
            images_levelcardintro2_761_0_0[11] = get_internal_image(1090);
            images_levelcardintro2_761_0_0[12] = get_internal_image(1058);
            images_levelcardintro2_761_0_0[13] = get_internal_image(1056);
            images_levelcardintro2_761_0_0[14] = get_internal_image(1053);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(8);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(50);
        ((BallMovement*)movement)->set_deceleration(0);
        flags |= GLOBAL;
        alterables = &global_data_190_levelcard_intro_2.value;
        if (!global_data_190_levelcard_intro_2.init) {
            global_data_190_levelcard_intro_2.init = true;
        }
    }
};
FrameObject * create_levelcardintro2_761(int x, int y)
{
    return new (Active::pool.create()) LevelCardIntro2_761(x, y);
}
class LevelParallaxPiece8_762 : public SystemBox
{
public:
    LevelParallaxPiece8_762(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_762_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 1105;
        type = PATTERN_IMAGE;
        image = get_internal_image(8308);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_762(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_762(x, y);
}
class LevelParallaxPiece9_763 : public SystemBox
{
public:
    LevelParallaxPiece9_763(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_763_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 1105;
        type = PATTERN_IMAGE;
        image = get_internal_image(3463);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_763(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_763(x, y);
}
class LevelParallaxPiece7_764 : public SystemBox
{
public:
    LevelParallaxPiece7_764(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_764_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 1105;
        type = PATTERN_IMAGE;
        image = get_internal_image(4846);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_764(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_764(x, y);
}
class LevelParallaxPiece10_765 : public SystemBox
{
public:
    LevelParallaxPiece10_765(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_765_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 1105;
        type = PATTERN_IMAGE;
        image = get_internal_image(3009);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_765(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_765(x, y);
}
static Image* images_gimmickswingbase_766_0_0[1];
static Direction direction_gimmickswingbase_766_0_0 = {0, 50, 50, 0, 1, images_gimmickswingbase_766_0_0, 1};
static Animation anim_gimmickswingbase_766_0 = {&direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, NULL, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0, &direction_gimmickswingbase_766_0_0};
static Animation * anim_array_gimmickswingbase_766[1] = {&anim_gimmickswingbase_766_0};
static Animations anim_gimmickswingbase_766 = {1, &anim_array_gimmickswingbase_766[0]};
static bool anim_gimmickswingbase_766_initialized;
class GimmickSwingBase_766 : public Active
{
public:
    GimmickSwingBase_766(int x, int y) : Active(x, y, GimmickSwingBase_766_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Base", 18);
#endif
        this->animations = &anim_gimmickswingbase_766;
        if (!anim_gimmickswingbase_766_initialized) {
            anim_gimmickswingbase_766_initialized = true;
            images_gimmickswingbase_766_0_0[0] = get_internal_image(7988);
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
FrameObject * create_gimmickswingbase_766(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingBase_766(x, y);
}
static Image* images_gimmickswingchain_767_0_0[1];
static Direction direction_gimmickswingchain_767_0_0 = {0, 50, 50, 0, 1, images_gimmickswingchain_767_0_0, 1};
static Animation anim_gimmickswingchain_767_0 = {&direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, NULL, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0, &direction_gimmickswingchain_767_0_0};
static Animation * anim_array_gimmickswingchain_767[1] = {&anim_gimmickswingchain_767_0};
static Animations anim_gimmickswingchain_767 = {1, &anim_array_gimmickswingchain_767[0]};
static bool anim_gimmickswingchain_767_initialized;
class GimmickSwingChain_767 : public Active
{
public:
    GimmickSwingChain_767(int x, int y) : Active(x, y, GimmickSwingChain_767_type)
    {
        // qualifiers: 41
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Chain", 19);
#endif
        this->animations = &anim_gimmickswingchain_767;
        if (!anim_gimmickswingchain_767_initialized) {
            anim_gimmickswingchain_767_initialized = true;
            images_gimmickswingchain_767_0_0[0] = get_internal_image(8349);
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
FrameObject * create_gimmickswingchain_767(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingChain_767(x, y);
}
static Image* images_gimmickswingplatform_768_0_0[1];
static Direction direction_gimmickswingplatform_768_0_0 = {0, 50, 50, 0, 1, images_gimmickswingplatform_768_0_0, 1};
static Animation anim_gimmickswingplatform_768_0 = {&direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, NULL, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0, &direction_gimmickswingplatform_768_0_0};
static Animation * anim_array_gimmickswingplatform_768[1] = {&anim_gimmickswingplatform_768_0};
static Animations anim_gimmickswingplatform_768 = {1, &anim_array_gimmickswingplatform_768[0]};
static bool anim_gimmickswingplatform_768_initialized;
class GimmickSwingPlatform_768 : public Active
{
public:
    GimmickSwingPlatform_768(int x, int y) : Active(x, y, GimmickSwingPlatform_768_type)
    {
        // qualifiers: 15, 16, 41, 42
#ifndef NDEBUG
        name = std::string("Gimmick_Swing_Platform", 22);
#endif
        this->animations = &anim_gimmickswingplatform_768;
        if (!anim_gimmickswingplatform_768_initialized) {
            anim_gimmickswingplatform_768_initialized = true;
            images_gimmickswingplatform_768_0_0[0] = get_internal_image(8305);
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
FrameObject * create_gimmickswingplatform_768(int x, int y)
{
    return new (Active::pool.create()) GimmickSwingPlatform_768(x, y);
}
static Image* images_mediumbubble_769_0_0[4];
static Direction direction_mediumbubble_769_0_0 = {0, 0, 0, 3, 1, images_mediumbubble_769_0_0, 4};
static Animation anim_mediumbubble_769_0 = {&direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, NULL, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0, &direction_mediumbubble_769_0_0};
static Animation * anim_array_mediumbubble_769[1] = {&anim_mediumbubble_769_0};
static Animations anim_mediumbubble_769 = {1, &anim_array_mediumbubble_769[0]};
static bool anim_mediumbubble_769_initialized;
class MediumBubble_769 : public Active
{
public:
    MediumBubble_769(int x, int y) : Active(x, y, MediumBubble_769_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Medium Bubble", 13);
#endif
        this->animations = &anim_mediumbubble_769;
        if (!anim_mediumbubble_769_initialized) {
            anim_mediumbubble_769_initialized = true;
            images_mediumbubble_769_0_0[0] = get_internal_image(1517);
            images_mediumbubble_769_0_0[1] = get_internal_image(3628);
            images_mediumbubble_769_0_0[2] = get_internal_image(1770);
            images_mediumbubble_769_0_0[3] = get_internal_image(947);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_mediumbubble_769(int x, int y)
{
    return new (Active::pool.create()) MediumBubble_769(x, y);
}
class AquaBrickBack2_770 : public Backdrop
{
public:
    AquaBrickBack2_770(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrickBack 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4867);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquabrickback2_770(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrickBack2_770(x, y);
}
static Image* images_sign_771_0_0[1];
static Direction direction_sign_771_0_0 = {0, 50, 50, 0, -1, images_sign_771_0_0, 1};
static Animation anim_sign_771_0 = {&direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, NULL, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0, &direction_sign_771_0_0};
static Image* images_sign_771_1_0[16];
static Direction direction_sign_771_1_0 = {0, 100, 100, 0, -1, images_sign_771_1_0, 16};
static Image* images_sign_771_1_8[4];
static Direction direction_sign_771_1_8 = {8, 50, 50, 0, 1, images_sign_771_1_8, 4};
static Animation anim_sign_771_1 = {&direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, NULL, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, &direction_sign_771_1_8, NULL, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0, &direction_sign_771_1_0};
static Image* images_sign_771_12_0[1];
static Direction direction_sign_771_12_0 = {0, 50, 50, 0, -1, images_sign_771_12_0, 1};
static Image* images_sign_771_12_2[1];
static Direction direction_sign_771_12_2 = {2, 50, 50, 0, -1, images_sign_771_12_2, 1};
static Image* images_sign_771_12_8[1];
static Direction direction_sign_771_12_8 = {8, 50, 50, 0, -1, images_sign_771_12_8, 1};
static Animation anim_sign_771_12 = {&direction_sign_771_12_0, NULL, &direction_sign_771_12_2, &direction_sign_771_12_2, &direction_sign_771_12_2, NULL, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, &direction_sign_771_12_8, NULL, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0, &direction_sign_771_12_0};
static Animation * anim_array_sign_771[13] = {&anim_sign_771_0, &anim_sign_771_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_sign_771_12};
static Animations anim_sign_771 = {13, &anim_array_sign_771[0]};
static bool anim_sign_771_initialized;
class Sign_771 : public Active
{
public:
    Sign_771(int x, int y) : Active(x, y, Sign_771_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sign", 4);
#endif
        set_visible(false);
        this->animations = &anim_sign_771;
        if (!anim_sign_771_initialized) {
            anim_sign_771_initialized = true;
            images_sign_771_0_0[0] = get_internal_image(2338);
            images_sign_771_1_0[0] = get_internal_image(2338);
            images_sign_771_1_0[1] = get_internal_image(2284);
            images_sign_771_1_0[2] = get_internal_image(2301);
            images_sign_771_1_0[3] = get_internal_image(2303);
            images_sign_771_1_0[4] = get_internal_image(2297);
            images_sign_771_1_0[5] = get_internal_image(2305);
            images_sign_771_1_0[6] = get_internal_image(2339);
            images_sign_771_1_0[7] = get_internal_image(2296);
            images_sign_771_1_0[8] = get_internal_image(2340);
            images_sign_771_1_0[9] = get_internal_image(2299);
            images_sign_771_1_0[10] = get_internal_image(2341);
            images_sign_771_1_0[11] = get_internal_image(2307);
            images_sign_771_1_0[12] = get_internal_image(2332);
            images_sign_771_1_0[13] = get_internal_image(2306);
            images_sign_771_1_0[14] = get_internal_image(2342);
            images_sign_771_1_0[15] = get_internal_image(2300);
            images_sign_771_1_8[0] = get_internal_image(2318);
            images_sign_771_1_8[1] = get_internal_image(2319);
            images_sign_771_1_8[2] = get_internal_image(2332);
            images_sign_771_1_8[3] = get_internal_image(2334);
            images_sign_771_12_0[0] = get_internal_image(5142);
            images_sign_771_12_2[0] = get_internal_image(1170);
            images_sign_771_12_8[0] = get_internal_image(5141);
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
FrameObject * create_sign_771(int x, int y)
{
    return new (Active::pool.create()) Sign_771(x, y);
}
static Image* images_levelcrusher1_772_0_0[1];
static Direction direction_levelcrusher1_772_0_0 = {0, 0, 0, 0, 1, images_levelcrusher1_772_0_0, 1};
static Animation anim_levelcrusher1_772_0 = {&direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, NULL, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0, &direction_levelcrusher1_772_0_0};
static Animation * anim_array_levelcrusher1_772[1] = {&anim_levelcrusher1_772_0};
static Animations anim_levelcrusher1_772 = {1, &anim_array_levelcrusher1_772[0]};
static bool anim_levelcrusher1_772_initialized;
class LevelCrusher1_772 : public Active
{
public:
    LevelCrusher1_772(int x, int y) : Active(x, y, LevelCrusher1_772_type)
    {
        // qualifiers: 14, 19, 20
#ifndef NDEBUG
        name = std::string("Level_Crusher 1", 15);
#endif
        this->animations = &anim_levelcrusher1_772;
        if (!anim_levelcrusher1_772_initialized) {
            anim_levelcrusher1_772_initialized = true;
            images_levelcrusher1_772_0_0[0] = get_internal_image(3832);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 96);
    }
};
FrameObject * create_levelcrusher1_772(int x, int y)
{
    return new (Active::pool.create()) LevelCrusher1_772(x, y);
}
static Image* images_waterjetmaker_773_0_0[1];
static Direction direction_waterjetmaker_773_0_0 = {0, 100, 100, 0, -1, images_waterjetmaker_773_0_0, 1};
static Animation anim_waterjetmaker_773_0 = {&direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, NULL, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0, &direction_waterjetmaker_773_0_0};
static Animation * anim_array_waterjetmaker_773[1] = {&anim_waterjetmaker_773_0};
static Animations anim_waterjetmaker_773 = {1, &anim_array_waterjetmaker_773[0]};
static bool anim_waterjetmaker_773_initialized;
class WaterJetMaker_773 : public Active
{
public:
    WaterJetMaker_773(int x, int y) : Active(x, y, WaterJetMaker_773_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WaterJet_Maker", 14);
#endif
        this->animations = &anim_waterjetmaker_773;
        if (!anim_waterjetmaker_773_initialized) {
            anim_waterjetmaker_773_initialized = true;
            images_waterjetmaker_773_0_0[0] = get_internal_image(7986);
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
FrameObject * create_waterjetmaker_773(int x, int y)
{
    return new (Active::pool.create()) WaterJetMaker_773(x, y);
}
class AquaSign1_774 : public Backdrop
{
public:
    AquaSign1_774(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Aqua_Sign 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4842);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquasign1_774(int x, int y)
{
    return new (Backdrop::pool.create()) AquaSign1_774(x, y);
}
class AquaSign2_775 : public Backdrop
{
public:
    AquaSign2_775(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Aqua_Sign 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4843);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_aquasign2_775(int x, int y)
{
    return new (Backdrop::pool.create()) AquaSign2_775(x, y);
}
class AquaLargePipe4_776 : public Backdrop
{
public:
    AquaLargePipe4_776(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(681);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aqualargepipe4_776(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe4_776(x, y);
}
class AquaLargePipe15_777 : public Backdrop
{
public:
    AquaLargePipe15_777(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 15", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4671);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe15_777(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe15_777(x, y);
}
class AquaLargePipe14_778 : public Backdrop
{
public:
    AquaLargePipe14_778(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 14", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3824);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe14_778(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe14_778(x, y);
}
class AquaLargePipe2_779 : public Backdrop
{
public:
    AquaLargePipe2_779(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(682);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aqualargepipe2_779(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe2_779(x, y);
}
class AquaBrick27_780 : public Backdrop
{
public:
    AquaBrick27_780(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 27", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3535);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick27_780(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick27_780(x, y);
}
class AquaLargePipe10_781 : public Backdrop
{
public:
    AquaLargePipe10_781(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 10", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1915);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe10_781(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe10_781(x, y);
}
class AquaLargePipe11_782 : public Backdrop
{
public:
    AquaLargePipe11_782(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 11", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3519);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe11_782(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe11_782(x, y);
}
class AquaLargePipe7_783 : public Backdrop
{
public:
    AquaLargePipe7_783(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 7", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1747);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_aqualargepipe7_783(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe7_783(x, y);
}
class AquaBrick30_784 : public Backdrop
{
public:
    AquaBrick30_784(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 30", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1520);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick30_784(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick30_784(x, y);
}
class AquaLargePipe9_785 : public Backdrop
{
public:
    AquaLargePipe9_785(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 9", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1836);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe9_785(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe9_785(x, y);
}
class AquaBrick26_786 : public Backdrop
{
public:
    AquaBrick26_786(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 26", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1911);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick26_786(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick26_786(x, y);
}
class AquaBrick28_787 : public Backdrop
{
public:
    AquaBrick28_787(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 28", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1914);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick28_787(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick28_787(x, y);
}
class AquaBrick29_788 : public Backdrop
{
public:
    AquaBrick29_788(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 29", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3520);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick29_788(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick29_788(x, y);
}
class AquaBrick31_789 : public Backdrop
{
public:
    AquaBrick31_789(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 31", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1810);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick31_789(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick31_789(x, y);
}
class AquaBrick34_790 : public Backdrop
{
public:
    AquaBrick34_790(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 34", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3890);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick34_790(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick34_790(x, y);
}
class AquaBrick12_791 : public Backdrop
{
public:
    AquaBrick12_791(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 12", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3619);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick12_791(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick12_791(x, y);
}
class AquaBrick33_792 : public Backdrop
{
public:
    AquaBrick33_792(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaBrick 33", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3841);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aquabrick33_792(int x, int y)
{
    return new (Backdrop::pool.create()) AquaBrick33_792(x, y);
}
class SwitchBase_793 : public Backdrop
{
public:
    SwitchBase_793(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2388);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_793(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_793(x, y);
}
class SignMillaBlock_794 : public Backdrop
{
public:
    SignMillaBlock_794(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Sign_MillaBlock", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4841);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_signmillablock_794(int x, int y)
{
    return new (Backdrop::pool.create()) SignMillaBlock_794(x, y);
}
class SewerPipe12_795 : public Backdrop
{
public:
    SewerPipe12_795(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SewerPipe 12", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8306);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sewerpipe12_795(int x, int y)
{
    return new (Backdrop::pool.create()) SewerPipe12_795(x, y);
}
class SewerPipe13_796 : public Backdrop
{
public:
    SewerPipe13_796(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("SewerPipe 13", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8419);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_sewerpipe13_796(int x, int y)
{
    return new (Backdrop::pool.create()) SewerPipe13_796(x, y);
}
class AquaLargePipe17_797 : public Backdrop
{
public:
    AquaLargePipe17_797(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 17", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3813);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe17_797(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe17_797(x, y);
}
class AquaLargePipe13_798 : public Backdrop
{
public:
    AquaLargePipe13_798(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 13", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4812);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe13_798(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe13_798(x, y);
}
class AquaLargePipe16_799 : public Backdrop
{
public:
    AquaLargePipe16_799(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("AquaLargePipe 16", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3611);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_aqualargepipe16_799(int x, int y)
{
    return new (Backdrop::pool.create()) AquaLargePipe16_799(x, y);
}
class EdgeOverlay_800 : public Backdrop
{
public:
    EdgeOverlay_800(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Edge_Overlay", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(953);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_edgeoverlay_800(int x, int y)
{
    return new (Backdrop::pool.create()) EdgeOverlay_800(x, y);
}
static Image* images_gimmickrotatingpipe_801_0_0[1];
static Direction direction_gimmickrotatingpipe_801_0_0 = {0, 100, 100, 0, 1, images_gimmickrotatingpipe_801_0_0, 1};
static Animation anim_gimmickrotatingpipe_801_0 = {&direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, NULL, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0, &direction_gimmickrotatingpipe_801_0_0};
static Animation * anim_array_gimmickrotatingpipe_801[1] = {&anim_gimmickrotatingpipe_801_0};
static Animations anim_gimmickrotatingpipe_801 = {1, &anim_array_gimmickrotatingpipe_801[0]};
static bool anim_gimmickrotatingpipe_801_initialized;
class GimmickRotatingPipe_801 : public Active
{
public:
    GimmickRotatingPipe_801(int x, int y) : Active(x, y, GimmickRotatingPipe_801_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_RotatingPipe", 20);
#endif
        this->animations = &anim_gimmickrotatingpipe_801;
        if (!anim_gimmickrotatingpipe_801_initialized) {
            anim_gimmickrotatingpipe_801_initialized = true;
            images_gimmickrotatingpipe_801_0_0[0] = get_internal_image(1661);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 1);
    }
};
FrameObject * create_gimmickrotatingpipe_801(int x, int y)
{
    return new (Active::pool.create()) GimmickRotatingPipe_801(x, y);
}
static Image* images_minibosschomper_802_0_0[1];
static Direction direction_minibosschomper_802_0_0 = {0, 50, 50, 0, 1, images_minibosschomper_802_0_0, 1};
static Animation anim_minibosschomper_802_0 = {&direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, NULL, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0, &direction_minibosschomper_802_0_0};
static Image* images_minibosschomper_802_7_0[1];
static Direction direction_minibosschomper_802_7_0 = {0, 50, 50, 0, -1, images_minibosschomper_802_7_0, 1};
static Image* images_minibosschomper_802_7_1[1];
static Direction direction_minibosschomper_802_7_1 = {1, 50, 50, 0, -1, images_minibosschomper_802_7_1, 1};
static Animation anim_minibosschomper_802_7 = {&direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_1, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0, &direction_minibosschomper_802_7_0};
static Animation * anim_array_minibosschomper_802[8] = {&anim_minibosschomper_802_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibosschomper_802_7};
static Animations anim_minibosschomper_802 = {8, &anim_array_minibosschomper_802[0]};
static bool anim_minibosschomper_802_initialized;
class MinibossChomper_802 : public Active
{
public:
    MinibossChomper_802(int x, int y) : Active(x, y, MinibossChomper_802_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Chomper", 16);
#endif
        this->animations = &anim_minibosschomper_802;
        if (!anim_minibosschomper_802_initialized) {
            anim_minibosschomper_802_initialized = true;
            images_minibosschomper_802_0_0[0] = get_internal_image(3140);
            images_minibosschomper_802_7_0[0] = get_internal_image(4777);
            images_minibosschomper_802_7_1[0] = get_internal_image(4830);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(8, -60);
        alterables->values.set(11, -1);
        alterables->values.set(12, 120);
    }
};
FrameObject * create_minibosschomper_802(int x, int y)
{
    return new (Active::pool.create()) MinibossChomper_802(x, y);
}
static Image* images_switchmillablock_803_0_0[1];
static Direction direction_switchmillablock_803_0_0 = {0, 50, 50, 0, 1, images_switchmillablock_803_0_0, 1};
static Animation anim_switchmillablock_803_0 = {&direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, NULL, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0, &direction_switchmillablock_803_0_0};
static Animation * anim_array_switchmillablock_803[1] = {&anim_switchmillablock_803_0};
static Animations anim_switchmillablock_803 = {1, &anim_array_switchmillablock_803[0]};
static bool anim_switchmillablock_803_initialized;
class SwitchMillaBlock_803 : public Active
{
public:
    SwitchMillaBlock_803(int x, int y) : Active(x, y, SwitchMillaBlock_803_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_MillaBlock", 17);
#endif
        this->animations = &anim_switchmillablock_803;
        if (!anim_switchmillablock_803_initialized) {
            anim_switchmillablock_803_initialized = true;
            images_switchmillablock_803_0_0[0] = get_internal_image(531);
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
FrameObject * create_switchmillablock_803(int x, int y)
{
    return new (Active::pool.create()) SwitchMillaBlock_803(x, y);
}
static Image* images_gimmickrotatingpipebase_804_0_0[1];
static Direction direction_gimmickrotatingpipebase_804_0_0 = {0, 50, 50, 0, 1, images_gimmickrotatingpipebase_804_0_0, 1};
static Animation anim_gimmickrotatingpipebase_804_0 = {&direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, NULL, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0, &direction_gimmickrotatingpipebase_804_0_0};
static Animation * anim_array_gimmickrotatingpipebase_804[1] = {&anim_gimmickrotatingpipebase_804_0};
static Animations anim_gimmickrotatingpipebase_804 = {1, &anim_array_gimmickrotatingpipebase_804[0]};
static bool anim_gimmickrotatingpipebase_804_initialized;
class GimmickRotatingPipeBase_804 : public Active
{
public:
    GimmickRotatingPipeBase_804(int x, int y) : Active(x, y, GimmickRotatingPipeBase_804_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_RotatingPipeBase", 24);
#endif
        this->animations = &anim_gimmickrotatingpipebase_804;
        if (!anim_gimmickrotatingpipebase_804_initialized) {
            anim_gimmickrotatingpipebase_804_initialized = true;
            images_gimmickrotatingpipebase_804_0_0[0] = get_internal_image(178);
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
FrameObject * create_gimmickrotatingpipebase_804(int x, int y)
{
    return new (Active::pool.create()) GimmickRotatingPipeBase_804(x, y);
}
static Image* images_aquabrickplatform_805_0_0[1];
static Direction direction_aquabrickplatform_805_0_0 = {0, 50, 50, 0, 1, images_aquabrickplatform_805_0_0, 1};
static Animation anim_aquabrickplatform_805_0 = {&direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, NULL, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0, &direction_aquabrickplatform_805_0_0};
static Animation * anim_array_aquabrickplatform_805[1] = {&anim_aquabrickplatform_805_0};
static Animations anim_aquabrickplatform_805 = {1, &anim_array_aquabrickplatform_805[0]};
static bool anim_aquabrickplatform_805_initialized;
class AquaBrickPlatform_805 : public Active
{
public:
    AquaBrickPlatform_805(int x, int y) : Active(x, y, AquaBrickPlatform_805_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("AquaBrick Platform", 18);
#endif
        this->animations = &anim_aquabrickplatform_805;
        if (!anim_aquabrickplatform_805_initialized) {
            anim_aquabrickplatform_805_initialized = true;
            images_aquabrickplatform_805_0_0[0] = get_internal_image(4523);
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
FrameObject * create_aquabrickplatform_805(int x, int y)
{
    return new (Active::pool.create()) AquaBrickPlatform_805(x, y);
}
