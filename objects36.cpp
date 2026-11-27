#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class FDLabFloor1_3514 : public Backdrop
{
public:
    FDLabFloor1_3514(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9036);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor1_3514(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor1_3514(x, y);
}
class FDLabWall5_3515 : public Backdrop
{
public:
    FDLabWall5_3515(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 5", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7053);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabwall5_3515(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall5_3515(x, y);
}
class FDLabWall4_3516 : public Backdrop
{
public:
    FDLabWall4_3516(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 4", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7054);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabwall4_3516(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall4_3516(x, y);
}
class FDLabFloor8_3517 : public Backdrop
{
public:
    FDLabFloor8_3517(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(889);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor8_3517(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor8_3517(x, y);
}
class FDLabWall3_3518 : public Backdrop
{
public:
    FDLabWall3_3518(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 3", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9069);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabwall3_3518(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall3_3518(x, y);
}
class FDLabFloor10_3519 : public Backdrop
{
public:
    FDLabFloor10_3519(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9026);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor10_3519(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor10_3519(x, y);
}
class FDLabFloor12_3520 : public Backdrop
{
public:
    FDLabFloor12_3520(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10584);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor12_3520(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor12_3520(x, y);
}
class FDLabFloor2_3521 : public Backdrop
{
public:
    FDLabFloor2_3521(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9040);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor2_3521(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor2_3521(x, y);
}
class FDLabFloor5_3522 : public Backdrop
{
public:
    FDLabFloor5_3522(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9120);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor5_3522(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor5_3522(x, y);
}
class FDLabFloor7_3523 : public Backdrop
{
public:
    FDLabFloor7_3523(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9323);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor7_3523(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor7_3523(x, y);
}
class FDLabFloor9_3524 : public Backdrop
{
public:
    FDLabFloor9_3524(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8612);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor9_3524(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor9_3524(x, y);
}
class FDLabFloor13_3525 : public Backdrop
{
public:
    FDLabFloor13_3525(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7051);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabfloor13_3525(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor13_3525(x, y);
}
class FDLabFloor14_3526 : public Backdrop
{
public:
    FDLabFloor14_3526(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 14", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7052);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabfloor14_3526(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor14_3526(x, y);
}
class FDLabFloor3_3527 : public Backdrop
{
public:
    FDLabFloor3_3527(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9068);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor3_3527(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor3_3527(x, y);
}
class FDLabFloor15_3528 : public Backdrop
{
public:
    FDLabFloor15_3528(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 15", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(442);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabfloor15_3528(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor15_3528(x, y);
}
class FDLabFloor16_3529 : public Backdrop
{
public:
    FDLabFloor16_3529(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 16", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1209);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabfloor16_3529(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor16_3529(x, y);
}
class FDFloorSwitch_3530 : public Backdrop
{
public:
    FDFloorSwitch_3530(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_FloorSwitch", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7095);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdfloorswitch_3530(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloorSwitch_3530(x, y);
}
class FDCurve3_3531 : public Backdrop
{
public:
    FDCurve3_3531(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Curve 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12192);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcurve3_3531(int x, int y)
{
    return new (Backdrop::pool.create()) FDCurve3_3531(x, y);
}
class FDCurve1_3532 : public Backdrop
{
public:
    FDCurve1_3532(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Curve 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12191);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcurve1_3532(int x, int y)
{
    return new (Backdrop::pool.create()) FDCurve1_3532(x, y);
}
class FDCurve4_3533 : public Backdrop
{
public:
    FDCurve4_3533(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Curve 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9332);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcurve4_3533(int x, int y)
{
    return new (Backdrop::pool.create()) FDCurve4_3533(x, y);
}
class FDCurve2_3534 : public Backdrop
{
public:
    FDCurve2_3534(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Curve 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9327);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcurve2_3534(int x, int y)
{
    return new (Backdrop::pool.create()) FDCurve2_3534(x, y);
}
class FDLabWall6_3535 : public Backdrop
{
public:
    FDLabWall6_3535(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 6", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(546);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabwall6_3535(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall6_3535(x, y);
}
static Image* images_switchcorkscrewdoor_3536_0_0[2];
static Direction direction_switchcorkscrewdoor_3536_0_0 = {0, 10, 10, 0, -1, images_switchcorkscrewdoor_3536_0_0, 2};
static Animation anim_switchcorkscrewdoor_3536_0 = {&direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, NULL, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0, &direction_switchcorkscrewdoor_3536_0_0};
static Animation * anim_array_switchcorkscrewdoor_3536[1] = {&anim_switchcorkscrewdoor_3536_0};
static Animations anim_switchcorkscrewdoor_3536 = {1, &anim_array_switchcorkscrewdoor_3536[0]};
static bool anim_switchcorkscrewdoor_3536_initialized;
class SwitchCorkscrewDoor_3536 : public Active
{
public:
    SwitchCorkscrewDoor_3536(int x, int y) : Active(x, y, SwitchCorkscrewDoor_3536_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_CorkscrewDoor", 20);
#endif
        this->animations = &anim_switchcorkscrewdoor_3536;
        if (!anim_switchcorkscrewdoor_3536_initialized) {
            anim_switchcorkscrewdoor_3536_initialized = true;
            images_switchcorkscrewdoor_3536_0_0[0] = get_internal_image(7048);
            images_switchcorkscrewdoor_3536_0_0[1] = get_internal_image(6729);
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
FrameObject * create_switchcorkscrewdoor_3536(int x, int y)
{
    return new (Active::pool.create()) SwitchCorkscrewDoor_3536(x, y);
}
static Image* images_corkscrewdoor_3537_0_0[8];
static Direction direction_corkscrewdoor_3537_0_0 = {0, 0, 0, 0, -1, images_corkscrewdoor_3537_0_0, 8};
static Animation anim_corkscrewdoor_3537_0 = {&direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, NULL, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0, &direction_corkscrewdoor_3537_0_0};
static Animation * anim_array_corkscrewdoor_3537[1] = {&anim_corkscrewdoor_3537_0};
static Animations anim_corkscrewdoor_3537 = {1, &anim_array_corkscrewdoor_3537[0]};
static bool anim_corkscrewdoor_3537_initialized;
class CorkscrewDoor_3537 : public Active
{
public:
    CorkscrewDoor_3537(int x, int y) : Active(x, y, CorkscrewDoor_3537_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CorkscrewDoor", 13);
#endif
        this->animations = &anim_corkscrewdoor_3537;
        if (!anim_corkscrewdoor_3537_initialized) {
            anim_corkscrewdoor_3537_initialized = true;
            images_corkscrewdoor_3537_0_0[0] = get_internal_image(7059);
            images_corkscrewdoor_3537_0_0[1] = get_internal_image(7069);
            images_corkscrewdoor_3537_0_0[2] = get_internal_image(7078);
            images_corkscrewdoor_3537_0_0[3] = get_internal_image(7068);
            images_corkscrewdoor_3537_0_0[4] = get_internal_image(7073);
            images_corkscrewdoor_3537_0_0[5] = get_internal_image(7071);
            images_corkscrewdoor_3537_0_0[6] = get_internal_image(7076);
            images_corkscrewdoor_3537_0_0[7] = get_internal_image(7070);
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
FrameObject * create_corkscrewdoor_3537(int x, int y)
{
    return new (Active::pool.create()) CorkscrewDoor_3537(x, y);
}
static Image* images_levelelectriccrusherbolt_3538_0_0[6];
static Direction direction_levelelectriccrusherbolt_3538_0_0 = {0, 50, 50, 0, -1, images_levelelectriccrusherbolt_3538_0_0, 6};
static Animation anim_levelelectriccrusherbolt_3538_0 = {&direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, NULL, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0, &direction_levelelectriccrusherbolt_3538_0_0};
static Animation * anim_array_levelelectriccrusherbolt_3538[1] = {&anim_levelelectriccrusherbolt_3538_0};
static Animations anim_levelelectriccrusherbolt_3538 = {1, &anim_array_levelelectriccrusherbolt_3538[0]};
static bool anim_levelelectriccrusherbolt_3538_initialized;
class LevelElectricCrusherBolt_3538 : public Active
{
public:
    LevelElectricCrusherBolt_3538(int x, int y) : Active(x, y, LevelElectricCrusherBolt_3538_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ElectricCrusherBolt", 25);
#endif
        this->animations = &anim_levelelectriccrusherbolt_3538;
        if (!anim_levelelectriccrusherbolt_3538_initialized) {
            anim_levelelectriccrusherbolt_3538_initialized = true;
            images_levelelectriccrusherbolt_3538_0_0[0] = get_internal_image(7208);
            images_levelelectriccrusherbolt_3538_0_0[1] = get_internal_image(7808);
            images_levelelectriccrusherbolt_3538_0_0[2] = get_internal_image(8328);
            images_levelelectriccrusherbolt_3538_0_0[3] = get_internal_image(8332);
            images_levelelectriccrusherbolt_3538_0_0[4] = get_internal_image(8333);
            images_levelelectriccrusherbolt_3538_0_0[5] = get_internal_image(8335);
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
FrameObject * create_levelelectriccrusherbolt_3538(int x, int y)
{
    return new (Active::pool.create()) LevelElectricCrusherBolt_3538(x, y);
}
static Image* images_levelfdpushplatform_3539_0_0[1];
static Direction direction_levelfdpushplatform_3539_0_0 = {0, 100, 100, 0, 1, images_levelfdpushplatform_3539_0_0, 1};
static Animation anim_levelfdpushplatform_3539_0 = {&direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, NULL, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0, &direction_levelfdpushplatform_3539_0_0};
static Animation * anim_array_levelfdpushplatform_3539[1] = {&anim_levelfdpushplatform_3539_0};
static Animations anim_levelfdpushplatform_3539 = {1, &anim_array_levelfdpushplatform_3539[0]};
static bool anim_levelfdpushplatform_3539_initialized;
class LevelFDPushPlatform_3539 : public Active
{
public:
    LevelFDPushPlatform_3539(int x, int y) : Active(x, y, LevelFDPushPlatform_3539_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_FDPushPlatform", 20);
#endif
        set_visible(false);
        this->animations = &anim_levelfdpushplatform_3539;
        if (!anim_levelfdpushplatform_3539_initialized) {
            anim_levelfdpushplatform_3539_initialized = true;
            images_levelfdpushplatform_3539_0_0[0] = get_internal_image(6990);
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
FrameObject * create_levelfdpushplatform_3539(int x, int y)
{
    return new (Active::pool.create()) LevelFDPushPlatform_3539(x, y);
}
static Image* images_levelelectriccrusher_3540_0_0[1];
static Direction direction_levelelectriccrusher_3540_0_0 = {0, 100, 100, 0, 1, images_levelelectriccrusher_3540_0_0, 1};
static Animation anim_levelelectriccrusher_3540_0 = {&direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, NULL, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0, &direction_levelelectriccrusher_3540_0_0};
static Animation * anim_array_levelelectriccrusher_3540[1] = {&anim_levelelectriccrusher_3540_0};
static Animations anim_levelelectriccrusher_3540 = {1, &anim_array_levelelectriccrusher_3540[0]};
static bool anim_levelelectriccrusher_3540_initialized;
class LevelElectricCrusher_3540 : public Active
{
public:
    LevelElectricCrusher_3540(int x, int y) : Active(x, y, LevelElectricCrusher_3540_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Level_ElectricCrusher", 21);
#endif
        set_visible(false);
        this->animations = &anim_levelelectriccrusher_3540;
        if (!anim_levelelectriccrusher_3540_initialized) {
            anim_levelelectriccrusher_3540_initialized = true;
            images_levelelectriccrusher_3540_0_0[0] = get_internal_image(7049);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 64);
    }
};
FrameObject * create_levelelectriccrusher_3540(int x, int y)
{
    return new (Active::pool.create()) LevelElectricCrusher_3540(x, y);
}
static Image* images_lockedlabdoorbarrier_3541_0_0[1];
static Direction direction_lockedlabdoorbarrier_3541_0_0 = {0, 50, 50, 0, 1, images_lockedlabdoorbarrier_3541_0_0, 1};
static Animation anim_lockedlabdoorbarrier_3541_0 = {&direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, NULL, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0, &direction_lockedlabdoorbarrier_3541_0_0};
static Animation * anim_array_lockedlabdoorbarrier_3541[1] = {&anim_lockedlabdoorbarrier_3541_0};
static Animations anim_lockedlabdoorbarrier_3541 = {1, &anim_array_lockedlabdoorbarrier_3541[0]};
static bool anim_lockedlabdoorbarrier_3541_initialized;
class LockedLabDoorBarrier_3541 : public Active
{
public:
    LockedLabDoorBarrier_3541(int x, int y) : Active(x, y, LockedLabDoorBarrier_3541_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("LockedLabDoor_Barrier", 21);
#endif
        set_visible(false);
        this->animations = &anim_lockedlabdoorbarrier_3541;
        if (!anim_lockedlabdoorbarrier_3541_initialized) {
            anim_lockedlabdoorbarrier_3541_initialized = true;
            images_lockedlabdoorbarrier_3541_0_0[0] = get_internal_image(12198);
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
FrameObject * create_lockedlabdoorbarrier_3541(int x, int y)
{
    return new (Active::pool.create()) LockedLabDoorBarrier_3541(x, y);
}
static Image* images_fdplatform_3542_0_0[5];
static Direction direction_fdplatform_3542_0_0 = {0, 0, 0, 0, 1, images_fdplatform_3542_0_0, 5};
static Animation anim_fdplatform_3542_0 = {&direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, NULL, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0, &direction_fdplatform_3542_0_0};
static Animation * anim_array_fdplatform_3542[1] = {&anim_fdplatform_3542_0};
static Animations anim_fdplatform_3542 = {1, &anim_array_fdplatform_3542[0]};
static bool anim_fdplatform_3542_initialized;
class FDPlatform_3542 : public Active
{
public:
    FDPlatform_3542(int x, int y) : Active(x, y, FDPlatform_3542_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("FDPlatform", 10);
#endif
        this->animations = &anim_fdplatform_3542;
        if (!anim_fdplatform_3542_initialized) {
            anim_fdplatform_3542_initialized = true;
            images_fdplatform_3542_0_0[0] = get_internal_image(7066);
            images_fdplatform_3542_0_0[1] = get_internal_image(7024);
            images_fdplatform_3542_0_0[2] = get_internal_image(7055);
            images_fdplatform_3542_0_0[3] = get_internal_image(7024);
            images_fdplatform_3542_0_0[4] = get_internal_image(7066);
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
FrameObject * create_fdplatform_3542(int x, int y)
{
    return new (Active::pool.create()) FDPlatform_3542(x, y);
}
class FDLabFloor17_3543 : public Backdrop
{
public:
    FDLabFloor17_3543(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabFloor 17", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7093);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdlabfloor17_3543(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabFloor17_3543(x, y);
}
static Image* images_lockedlabdoorfront_3544_0_0[10];
static Direction direction_lockedlabdoorfront_3544_0_0 = {0, 0, 0, 0, 1, images_lockedlabdoorfront_3544_0_0, 10};
static Animation anim_lockedlabdoorfront_3544_0 = {&direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, NULL, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0, &direction_lockedlabdoorfront_3544_0_0};
static Animation * anim_array_lockedlabdoorfront_3544[1] = {&anim_lockedlabdoorfront_3544_0};
static Animations anim_lockedlabdoorfront_3544 = {1, &anim_array_lockedlabdoorfront_3544[0]};
static bool anim_lockedlabdoorfront_3544_initialized;
class LockedLabDoorFront_3544 : public Active
{
public:
    LockedLabDoorFront_3544(int x, int y) : Active(x, y, LockedLabDoorFront_3544_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedLabDoor_front", 19);
#endif
        this->animations = &anim_lockedlabdoorfront_3544;
        if (!anim_lockedlabdoorfront_3544_initialized) {
            anim_lockedlabdoorfront_3544_initialized = true;
            images_lockedlabdoorfront_3544_0_0[0] = get_internal_image(1041);
            images_lockedlabdoorfront_3544_0_0[1] = get_internal_image(1091);
            images_lockedlabdoorfront_3544_0_0[2] = get_internal_image(1693);
            images_lockedlabdoorfront_3544_0_0[3] = get_internal_image(1091);
            images_lockedlabdoorfront_3544_0_0[4] = get_internal_image(3453);
            images_lockedlabdoorfront_3544_0_0[5] = get_internal_image(5278);
            images_lockedlabdoorfront_3544_0_0[6] = get_internal_image(10581);
            images_lockedlabdoorfront_3544_0_0[7] = get_internal_image(10582);
            images_lockedlabdoorfront_3544_0_0[8] = get_internal_image(10583);
            images_lockedlabdoorfront_3544_0_0[9] = get_internal_image(10583);
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
FrameObject * create_lockedlabdoorfront_3544(int x, int y)
{
    return new (Active::pool.create()) LockedLabDoorFront_3544(x, y);
}
static Image* images_basementlight_3545_0_0[1];
static Direction direction_basementlight_3545_0_0 = {0, 50, 50, 0, 1, images_basementlight_3545_0_0, 1};
static Animation anim_basementlight_3545_0 = {&direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, NULL, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0, &direction_basementlight_3545_0_0};
static Animation * anim_array_basementlight_3545[1] = {&anim_basementlight_3545_0};
static Animations anim_basementlight_3545 = {1, &anim_array_basementlight_3545[0]};
static bool anim_basementlight_3545_initialized;
class BasementLight_3545 : public Active
{
public:
    BasementLight_3545(int x, int y) : Active(x, y, BasementLight_3545_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basement_Light", 14);
#endif
        this->animations = &anim_basementlight_3545;
        if (!anim_basementlight_3545_initialized) {
            anim_basementlight_3545_initialized = true;
            images_basementlight_3545_0_0[0] = get_internal_image(9333);
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
FrameObject * create_basementlight_3545(int x, int y)
{
    return new (Active::pool.create()) BasementLight_3545(x, y);
}
class LevelParallaxPiece0_3546 : public SystemBox
{
public:
    LevelParallaxPiece0_3546(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3546_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(5857);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3546(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3546(x, y);
}
class LevelParallaxPiece1_3547 : public SystemBox
{
public:
    LevelParallaxPiece1_3547(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3547_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 3200;
        type = PATTERN_IMAGE;
        image = get_internal_image(368);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3547(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3547(x, y);
}
class LevelParallaxPiece3_3548 : public SystemBox
{
public:
    LevelParallaxPiece3_3548(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_3548_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 3200;
        type = PATTERN_IMAGE;
        image = get_internal_image(1015);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_3548(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_3548(x, y);
}
class LevelParallaxPiece2_3549 : public SystemBox
{
public:
    LevelParallaxPiece2_3549(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3549_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 3200;
        type = PATTERN_IMAGE;
        image = get_internal_image(995);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3549(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3549(x, y);
}
class LevelParallaxPiece8_3550 : public SystemBox
{
public:
    LevelParallaxPiece8_3550(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_3550_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 360;
        height = 4000;
        type = PATTERN_IMAGE;
        image = get_internal_image(973);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_3550(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_3550(x, y);
}
class LevelParallaxPiece10_3551 : public SystemBox
{
public:
    LevelParallaxPiece10_3551(int x, int y) : SystemBox(x, y, LevelParallaxPiece10_3551_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 10", 23);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 4800;
        type = PATTERN_IMAGE;
        image = get_internal_image(1000);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece10_3551(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece10_3551(x, y);
}
class LevelParallaxPiece5_3552 : public SystemBox
{
public:
    LevelParallaxPiece5_3552(int x, int y) : SystemBox(x, y, LevelParallaxPiece5_3552_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 5", 22);
#endif
        flags |= BACKGROUND;
        width = 190;
        height = 289;
        type = PATTERN_IMAGE;
        image = get_internal_image(8605);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece5_3552(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece5_3552(x, y);
}
class LevelParallaxPiece7_3553 : public SystemBox
{
public:
    LevelParallaxPiece7_3553(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_3553_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 252;
        height = 578;
        type = PATTERN_IMAGE;
        image = get_internal_image(8488);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_3553(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_3553(x, y);
}
class LevelParallaxPiece9_3554 : public SystemBox
{
public:
    LevelParallaxPiece9_3554(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_3554_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 252;
        height = 578;
        type = PATTERN_IMAGE;
        image = get_internal_image(8505);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_3554(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_3554(x, y);
}
static Image* images_npctransformbubble_3555_0_0[1];
static Direction direction_npctransformbubble_3555_0_0 = {0, 50, 50, 0, 1, images_npctransformbubble_3555_0_0, 1};
static Animation anim_npctransformbubble_3555_0 = {&direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, NULL, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0, &direction_npctransformbubble_3555_0_0};
static Animation * anim_array_npctransformbubble_3555[1] = {&anim_npctransformbubble_3555_0};
static Animations anim_npctransformbubble_3555 = {1, &anim_array_npctransformbubble_3555[0]};
static bool anim_npctransformbubble_3555_initialized;
class NPCTransformBubble_3555 : public Active
{
public:
    NPCTransformBubble_3555(int x, int y) : Active(x, y, NPCTransformBubble_3555_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_TransformBubble", 19);
#endif
        this->animations = &anim_npctransformbubble_3555;
        if (!anim_npctransformbubble_3555_initialized) {
            anim_npctransformbubble_3555_initialized = true;
            images_npctransformbubble_3555_0_0[0] = get_internal_image(6315);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 240);
        alterables->values.set(2, 10);
    }
};
FrameObject * create_npctransformbubble_3555(int x, int y)
{
    return new (Active::pool.create()) NPCTransformBubble_3555(x, y);
}
static Image* images_bossmserpflare_3556_0_0[1];
static Direction direction_bossmserpflare_3556_0_0 = {0, 50, 50, 0, 1, images_bossmserpflare_3556_0_0, 1};
static Animation anim_bossmserpflare_3556_0 = {&direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, NULL, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0, &direction_bossmserpflare_3556_0_0};
static Image* images_bossmserpflare_3556_10_0[2];
static Direction direction_bossmserpflare_3556_10_0 = {0, 30, 30, 0, -1, images_bossmserpflare_3556_10_0, 2};
static Animation anim_bossmserpflare_3556_10 = {&direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, NULL, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0, &direction_bossmserpflare_3556_10_0};
static Image* images_bossmserpflare_3556_11_0[1];
static Direction direction_bossmserpflare_3556_11_0 = {0, 50, 50, 0, -1, images_bossmserpflare_3556_11_0, 1};
static Image* images_bossmserpflare_3556_11_16[1];
static Direction direction_bossmserpflare_3556_11_16 = {16, 50, 50, 0, -1, images_bossmserpflare_3556_11_16, 1};
static Animation anim_bossmserpflare_3556_11 = {&direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, NULL, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, &direction_bossmserpflare_3556_11_16, NULL, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0, &direction_bossmserpflare_3556_11_0};
static Animation * anim_array_bossmserpflare_3556[12] = {&anim_bossmserpflare_3556_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmserpflare_3556_10, &anim_bossmserpflare_3556_11};
static Animations anim_bossmserpflare_3556 = {12, &anim_array_bossmserpflare_3556[0]};
static bool anim_bossmserpflare_3556_initialized;
class BossMSerpFlare_3556 : public Active
{
public:
    BossMSerpFlare_3556(int x, int y) : Active(x, y, BossMSerpFlare_3556_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpFlare", 15);
#endif
        this->animations = &anim_bossmserpflare_3556;
        if (!anim_bossmserpflare_3556_initialized) {
            anim_bossmserpflare_3556_initialized = true;
            images_bossmserpflare_3556_0_0[0] = get_internal_image(12261);
            images_bossmserpflare_3556_10_0[0] = get_internal_image(12582);
            images_bossmserpflare_3556_10_0[1] = get_internal_image(12589);
            images_bossmserpflare_3556_11_0[0] = get_internal_image(13670);
            images_bossmserpflare_3556_11_16[0] = get_internal_image(13671);
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
FrameObject * create_bossmserpflare_3556(int x, int y)
{
    return new (Active::pool.create()) BossMSerpFlare_3556(x, y);
}
static Image* images_bossburstshot_3557_0_0[9];
static Direction direction_bossburstshot_3557_0_0 = {0, 50, 50, 6, -1, images_bossburstshot_3557_0_0, 9};
static Animation anim_bossburstshot_3557_0 = {&direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, NULL, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0, &direction_bossburstshot_3557_0_0};
static Animation * anim_array_bossburstshot_3557[1] = {&anim_bossburstshot_3557_0};
static Animations anim_bossburstshot_3557 = {1, &anim_array_bossburstshot_3557[0]};
static bool anim_bossburstshot_3557_initialized;
class BossBurstShot_3557 : public Active
{
public:
    BossBurstShot_3557(int x, int y) : Active(x, y, BossBurstShot_3557_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_BurstShot", 14);
#endif
        this->animations = &anim_bossburstshot_3557;
        if (!anim_bossburstshot_3557_initialized) {
            anim_bossburstshot_3557_initialized = true;
            images_bossburstshot_3557_0_0[0] = get_internal_image(11041);
            images_bossburstshot_3557_0_0[1] = get_internal_image(11042);
            images_bossburstshot_3557_0_0[2] = get_internal_image(11043);
            images_bossburstshot_3557_0_0[3] = get_internal_image(11041);
            images_bossburstshot_3557_0_0[4] = get_internal_image(11042);
            images_bossburstshot_3557_0_0[5] = get_internal_image(11043);
            images_bossburstshot_3557_0_0[6] = get_internal_image(11052);
            images_bossburstshot_3557_0_0[7] = get_internal_image(11054);
            images_bossburstshot_3557_0_0[8] = get_internal_image(11069);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(20);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_bossburstshot_3557(int x, int y)
{
    return new (Active::pool.create()) BossBurstShot_3557(x, y);
}
static Image* images_effectfireball_3558_0_0[5];
static Direction direction_effectfireball_3558_0_0 = {0, 35, 35, 0, -1, images_effectfireball_3558_0_0, 5};
static Animation anim_effectfireball_3558_0 = {&direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, NULL, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0, &direction_effectfireball_3558_0_0};
static Animation * anim_array_effectfireball_3558[1] = {&anim_effectfireball_3558_0};
static Animations anim_effectfireball_3558 = {1, &anim_array_effectfireball_3558[0]};
static bool anim_effectfireball_3558_initialized;
class EffectFireball_3558 : public Active
{
public:
    EffectFireball_3558(int x, int y) : Active(x, y, EffectFireball_3558_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect: Fireball", 16);
#endif
        this->animations = &anim_effectfireball_3558;
        if (!anim_effectfireball_3558_initialized) {
            anim_effectfireball_3558_initialized = true;
            images_effectfireball_3558_0_0[0] = get_internal_image(11070);
            images_effectfireball_3558_0_0[1] = get_internal_image(11071);
            images_effectfireball_3558_0_0[2] = get_internal_image(11072);
            images_effectfireball_3558_0_0[3] = get_internal_image(11073);
            images_effectfireball_3558_0_0[4] = get_internal_image(11074);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_effectfireball_3558(int x, int y)
{
    return new (Active::pool.create()) EffectFireball_3558(x, y);
}
class FDLabBack19_3559 : public Backdrop
{
public:
    FDLabBack19_3559(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 19", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4455);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback19_3559(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack19_3559(x, y);
}
class FDLabBack16_3560 : public Backdrop
{
public:
    FDLabBack16_3560(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 16", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3314);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback16_3560(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack16_3560(x, y);
}
class FDLabBack17_3561 : public Backdrop
{
public:
    FDLabBack17_3561(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 17", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1088);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback17_3561(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack17_3561(x, y);
}
class FDLabBack18_3562 : public Backdrop
{
public:
    FDLabBack18_3562(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabBack 18", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6470);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdlabback18_3562(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabBack18_3562(x, y);
}
static Image* images_bossmserplasersight_3563_0_0[2];
static Direction direction_bossmserplasersight_3563_0_0 = {0, 25, 25, 0, -1, images_bossmserplasersight_3563_0_0, 2};
static Animation anim_bossmserplasersight_3563_0 = {&direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, NULL, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0, &direction_bossmserplasersight_3563_0_0};
static Animation * anim_array_bossmserplasersight_3563[1] = {&anim_bossmserplasersight_3563_0};
static Animations anim_bossmserplasersight_3563 = {1, &anim_array_bossmserplasersight_3563[0]};
static bool anim_bossmserplasersight_3563_initialized;
class BossMSerpLaserSight_3563 : public Active
{
public:
    BossMSerpLaserSight_3563(int x, int y) : Active(x, y, BossMSerpLaserSight_3563_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpLaserSight", 20);
#endif
        set_visible(false);
        this->animations = &anim_bossmserplasersight_3563;
        if (!anim_bossmserplasersight_3563_initialized) {
            anim_bossmserplasersight_3563_initialized = true;
            images_bossmserplasersight_3563_0_0[0] = get_internal_image(13672);
            images_bossmserplasersight_3563_0_0[1] = get_internal_image(13674);
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
FrameObject * create_bossmserplasersight_3563(int x, int y)
{
    return new (Active::pool.create()) BossMSerpLaserSight_3563(x, y);
}
class FDLabWall7_3564 : public Backdrop
{
public:
    FDLabWall7_3564(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_LabWall 7", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(972);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdlabwall7_3564(int x, int y)
{
    return new (Backdrop::pool.create()) FDLabWall7_3564(x, y);
}
class FDFloor7_3565 : public Backdrop
{
public:
    FDFloor7_3565(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Floor 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15480);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdfloor7_3565(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloor7_3565(x, y);
}
class FDFloor8_3566 : public Backdrop
{
public:
    FDFloor8_3566(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Floor 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15479);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdfloor8_3566(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloor8_3566(x, y);
}
class FDVentPipeSquare_3567 : public Backdrop
{
public:
    FDVentPipeSquare_3567(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_VentPipeSquare", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4412);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdventpipesquare_3567(int x, int y)
{
    return new (Backdrop::pool.create()) FDVentPipeSquare_3567(x, y);
}
class FDFloor9_3568 : public Backdrop
{
public:
    FDFloor9_3568(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Floor 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15477);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdfloor9_3568(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloor9_3568(x, y);
}
class FDFloor10_3569 : public Backdrop
{
public:
    FDFloor10_3569(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Floor 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15478);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdfloor10_3569(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloor10_3569(x, y);
}
class FDFloor1_3570 : public Backdrop
{
public:
    FDFloor1_3570(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Floor 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11687);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdfloor1_3570(int x, int y)
{
    return new (Backdrop::pool.create()) FDFloor1_3570(x, y);
}
class FDRamp1_3571 : public Backdrop
{
public:
    FDRamp1_3571(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Ramp 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15486);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdramp1_3571(int x, int y)
{
    return new (Backdrop::pool.create()) FDRamp1_3571(x, y);
}
class FDRamp2_3572 : public Backdrop
{
public:
    FDRamp2_3572(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Ramp 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15485);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdramp2_3572(int x, int y)
{
    return new (Backdrop::pool.create()) FDRamp2_3572(x, y);
}
static Image* images_fdrotatingbarrier_3573_0_0[1];
static Direction direction_fdrotatingbarrier_3573_0_0 = {0, 50, 50, 0, 1, images_fdrotatingbarrier_3573_0_0, 1};
static Animation anim_fdrotatingbarrier_3573_0 = {&direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, NULL, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0, &direction_fdrotatingbarrier_3573_0_0};
static Animation * anim_array_fdrotatingbarrier_3573[1] = {&anim_fdrotatingbarrier_3573_0};
static Animations anim_fdrotatingbarrier_3573 = {1, &anim_array_fdrotatingbarrier_3573[0]};
static bool anim_fdrotatingbarrier_3573_initialized;
class FDRotatingBarrier_3573 : public Active
{
public:
    FDRotatingBarrier_3573(int x, int y) : Active(x, y, FDRotatingBarrier_3573_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("FD_RotatingBarrier", 18);
#endif
        this->animations = &anim_fdrotatingbarrier_3573;
        if (!anim_fdrotatingbarrier_3573_initialized) {
            anim_fdrotatingbarrier_3573_initialized = true;
            images_fdrotatingbarrier_3573_0_0[0] = get_internal_image(10587);
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
FrameObject * create_fdrotatingbarrier_3573(int x, int y)
{
    return new (Active::pool.create()) FDRotatingBarrier_3573(x, y);
}
static Image* images_objectbiglift_3574_0_0[6];
static Direction direction_objectbiglift_3574_0_0 = {0, 0, 0, 0, -1, images_objectbiglift_3574_0_0, 6};
static Animation anim_objectbiglift_3574_0 = {&direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, NULL, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0, &direction_objectbiglift_3574_0_0};
static Animation * anim_array_objectbiglift_3574[1] = {&anim_objectbiglift_3574_0};
static Animations anim_objectbiglift_3574 = {1, &anim_array_objectbiglift_3574[0]};
static bool anim_objectbiglift_3574_initialized;
class ObjectBigLift_3574 : public Active
{
public:
    ObjectBigLift_3574(int x, int y) : Active(x, y, ObjectBigLift_3574_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Object_BigLift", 14);
#endif
        this->animations = &anim_objectbiglift_3574;
        if (!anim_objectbiglift_3574_initialized) {
            anim_objectbiglift_3574_initialized = true;
            images_objectbiglift_3574_0_0[0] = get_internal_image(4452);
            images_objectbiglift_3574_0_0[1] = get_internal_image(5396);
            images_objectbiglift_3574_0_0[2] = get_internal_image(5852);
            images_objectbiglift_3574_0_0[3] = get_internal_image(5846);
            images_objectbiglift_3574_0_0[4] = get_internal_image(5847);
            images_objectbiglift_3574_0_0[5] = get_internal_image(5392);
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
FrameObject * create_objectbiglift_3574(int x, int y)
{
    return new (Active::pool.create()) ObjectBigLift_3574(x, y);
}
static Image* images_switchbiglift1_3575_0_0[2];
static Direction direction_switchbiglift1_3575_0_0 = {0, 10, 10, 0, -1, images_switchbiglift1_3575_0_0, 2};
static Animation anim_switchbiglift1_3575_0 = {&direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, NULL, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0, &direction_switchbiglift1_3575_0_0};
static Animation * anim_array_switchbiglift1_3575[1] = {&anim_switchbiglift1_3575_0};
static Animations anim_switchbiglift1_3575 = {1, &anim_array_switchbiglift1_3575[0]};
static bool anim_switchbiglift1_3575_initialized;
class SwitchBigLift1_3575 : public Active
{
public:
    SwitchBigLift1_3575(int x, int y) : Active(x, y, SwitchBigLift1_3575_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_BigLift 1", 16);
#endif
        this->animations = &anim_switchbiglift1_3575;
        if (!anim_switchbiglift1_3575_initialized) {
            anim_switchbiglift1_3575_initialized = true;
            images_switchbiglift1_3575_0_0[0] = get_internal_image(4453);
            images_switchbiglift1_3575_0_0[1] = get_internal_image(4450);
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
FrameObject * create_switchbiglift1_3575(int x, int y)
{
    return new (Active::pool.create()) SwitchBigLift1_3575(x, y);
}
static Image* images_switchbiglift2_3576_0_0[2];
static Direction direction_switchbiglift2_3576_0_0 = {0, 10, 10, 0, -1, images_switchbiglift2_3576_0_0, 2};
static Animation anim_switchbiglift2_3576_0 = {&direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, NULL, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0, &direction_switchbiglift2_3576_0_0};
static Animation * anim_array_switchbiglift2_3576[1] = {&anim_switchbiglift2_3576_0};
static Animations anim_switchbiglift2_3576 = {1, &anim_array_switchbiglift2_3576[0]};
static bool anim_switchbiglift2_3576_initialized;
class SwitchBigLift2_3576 : public Active
{
public:
    SwitchBigLift2_3576(int x, int y) : Active(x, y, SwitchBigLift2_3576_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_BigLift 2", 16);
#endif
        this->animations = &anim_switchbiglift2_3576;
        if (!anim_switchbiglift2_3576_initialized) {
            anim_switchbiglift2_3576_initialized = true;
            images_switchbiglift2_3576_0_0[0] = get_internal_image(4453);
            images_switchbiglift2_3576_0_0[1] = get_internal_image(4450);
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
FrameObject * create_switchbiglift2_3576(int x, int y)
{
    return new (Active::pool.create()) SwitchBigLift2_3576(x, y);
}
static Image* images_bossmserpbackshoulder_3577_0_0[2];
static Direction direction_bossmserpbackshoulder_3577_0_0 = {0, 0, 0, 0, 1, images_bossmserpbackshoulder_3577_0_0, 2};
static Image* images_bossmserpbackshoulder_3577_0_8[1];
static Direction direction_bossmserpbackshoulder_3577_0_8 = {8, 50, 50, 0, 1, images_bossmserpbackshoulder_3577_0_8, 1};
static Image* images_bossmserpbackshoulder_3577_0_16[2];
static Direction direction_bossmserpbackshoulder_3577_0_16 = {16, 0, 0, 0, 1, images_bossmserpbackshoulder_3577_0_16, 2};
static Animation anim_bossmserpbackshoulder_3577_0 = {&direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, NULL, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, &direction_bossmserpbackshoulder_3577_0_8, NULL, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, &direction_bossmserpbackshoulder_3577_0_16, NULL, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0, &direction_bossmserpbackshoulder_3577_0_0};
static Animation * anim_array_bossmserpbackshoulder_3577[1] = {&anim_bossmserpbackshoulder_3577_0};
static Animations anim_bossmserpbackshoulder_3577 = {1, &anim_array_bossmserpbackshoulder_3577[0]};
static bool anim_bossmserpbackshoulder_3577_initialized;
class BossMSerpBackShoulder_3577 : public Active
{
public:
    BossMSerpBackShoulder_3577(int x, int y) : Active(x, y, BossMSerpBackShoulder_3577_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpBackShoulder", 22);
#endif
        this->animations = &anim_bossmserpbackshoulder_3577;
        if (!anim_bossmserpbackshoulder_3577_initialized) {
            anim_bossmserpbackshoulder_3577_initialized = true;
            images_bossmserpbackshoulder_3577_0_0[0] = get_internal_image(11005);
            images_bossmserpbackshoulder_3577_0_0[1] = get_internal_image(5595);
            images_bossmserpbackshoulder_3577_0_8[0] = get_internal_image(11008);
            images_bossmserpbackshoulder_3577_0_16[0] = get_internal_image(11009);
            images_bossmserpbackshoulder_3577_0_16[1] = get_internal_image(5596);
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
FrameObject * create_bossmserpbackshoulder_3577(int x, int y)
{
    return new (Active::pool.create()) BossMSerpBackShoulder_3577(x, y);
}
static Image* images_bossmserpneck_3578_0_0[2];
static Direction direction_bossmserpneck_3578_0_0 = {0, 0, 0, 0, 1, images_bossmserpneck_3578_0_0, 2};
static Image* images_bossmserpneck_3578_0_16[2];
static Direction direction_bossmserpneck_3578_0_16 = {16, 0, 0, 0, 1, images_bossmserpneck_3578_0_16, 2};
static Animation anim_bossmserpneck_3578_0 = {&direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, NULL, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, &direction_bossmserpneck_3578_0_16, NULL, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0, &direction_bossmserpneck_3578_0_0};
static Animation * anim_array_bossmserpneck_3578[1] = {&anim_bossmserpneck_3578_0};
static Animations anim_bossmserpneck_3578 = {1, &anim_array_bossmserpneck_3578[0]};
static bool anim_bossmserpneck_3578_initialized;
class BossMSerpNeck_3578 : public Active
{
public:
    BossMSerpNeck_3578(int x, int y) : Active(x, y, BossMSerpNeck_3578_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpNeck", 14);
#endif
        this->animations = &anim_bossmserpneck_3578;
        if (!anim_bossmserpneck_3578_initialized) {
            anim_bossmserpneck_3578_initialized = true;
            images_bossmserpneck_3578_0_0[0] = get_internal_image(6873);
            images_bossmserpneck_3578_0_0[1] = get_internal_image(5597);
            images_bossmserpneck_3578_0_16[0] = get_internal_image(7097);
            images_bossmserpneck_3578_0_16[1] = get_internal_image(5598);
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
FrameObject * create_bossmserpneck_3578(int x, int y)
{
    return new (Active::pool.create()) BossMSerpNeck_3578(x, y);
}
static Image* images_bossmserptail_3579_0_0[2];
static Direction direction_bossmserptail_3579_0_0 = {0, 0, 0, 0, 1, images_bossmserptail_3579_0_0, 2};
static Image* images_bossmserptail_3579_0_8[1];
static Direction direction_bossmserptail_3579_0_8 = {8, 50, 50, 0, 1, images_bossmserptail_3579_0_8, 1};
static Image* images_bossmserptail_3579_0_16[2];
static Direction direction_bossmserptail_3579_0_16 = {16, 0, 0, 0, 1, images_bossmserptail_3579_0_16, 2};
static Animation anim_bossmserptail_3579_0 = {&direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, NULL, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, &direction_bossmserptail_3579_0_8, NULL, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, &direction_bossmserptail_3579_0_16, NULL, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0, &direction_bossmserptail_3579_0_0};
static Animation * anim_array_bossmserptail_3579[1] = {&anim_bossmserptail_3579_0};
static Animations anim_bossmserptail_3579 = {1, &anim_array_bossmserptail_3579[0]};
static bool anim_bossmserptail_3579_initialized;
class BossMSerpTail_3579 : public Active
{
public:
    BossMSerpTail_3579(int x, int y) : Active(x, y, BossMSerpTail_3579_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpTail", 14);
#endif
        this->animations = &anim_bossmserptail_3579;
        if (!anim_bossmserptail_3579_initialized) {
            anim_bossmserptail_3579_initialized = true;
            images_bossmserptail_3579_0_0[0] = get_internal_image(7104);
            images_bossmserptail_3579_0_0[1] = get_internal_image(1220);
            images_bossmserptail_3579_0_8[0] = get_internal_image(8944);
            images_bossmserptail_3579_0_16[0] = get_internal_image(10129);
            images_bossmserptail_3579_0_16[1] = get_internal_image(1221);
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
FrameObject * create_bossmserptail_3579(int x, int y)
{
    return new (Active::pool.create()) BossMSerpTail_3579(x, y);
}
static Image* images_bossmserprightarm_3580_0_0[3];
static Direction direction_bossmserprightarm_3580_0_0 = {0, 0, 0, 0, 1, images_bossmserprightarm_3580_0_0, 3};
static Image* images_bossmserprightarm_3580_0_8[1];
static Direction direction_bossmserprightarm_3580_0_8 = {8, 50, 50, 0, 1, images_bossmserprightarm_3580_0_8, 1};
static Image* images_bossmserprightarm_3580_0_16[3];
static Direction direction_bossmserprightarm_3580_0_16 = {16, 0, 0, 0, 1, images_bossmserprightarm_3580_0_16, 3};
static Animation anim_bossmserprightarm_3580_0 = {&direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, NULL, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, &direction_bossmserprightarm_3580_0_8, NULL, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, &direction_bossmserprightarm_3580_0_16, NULL, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0, &direction_bossmserprightarm_3580_0_0};
static Animation * anim_array_bossmserprightarm_3580[1] = {&anim_bossmserprightarm_3580_0};
static Animations anim_bossmserprightarm_3580 = {1, &anim_array_bossmserprightarm_3580[0]};
static bool anim_bossmserprightarm_3580_initialized;
class BossMSerpRightArm_3580 : public Active
{
public:
    BossMSerpRightArm_3580(int x, int y) : Active(x, y, BossMSerpRightArm_3580_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpRightArm", 18);
#endif
        this->animations = &anim_bossmserprightarm_3580;
        if (!anim_bossmserprightarm_3580_initialized) {
            anim_bossmserprightarm_3580_initialized = true;
            images_bossmserprightarm_3580_0_0[0] = get_internal_image(10236);
            images_bossmserprightarm_3580_0_0[1] = get_internal_image(10761);
            images_bossmserprightarm_3580_0_0[2] = get_internal_image(10762);
            images_bossmserprightarm_3580_0_8[0] = get_internal_image(10768);
            images_bossmserprightarm_3580_0_16[0] = get_internal_image(10921);
            images_bossmserprightarm_3580_0_16[1] = get_internal_image(10929);
            images_bossmserprightarm_3580_0_16[2] = get_internal_image(10930);
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
FrameObject * create_bossmserprightarm_3580(int x, int y)
{
    return new (Active::pool.create()) BossMSerpRightArm_3580(x, y);
}
static Image* images_bossmserprightclaw_3581_0_0[20];
static Direction direction_bossmserprightclaw_3581_0_0 = {0, 45, 45, 0, -1, images_bossmserprightclaw_3581_0_0, 20};
static Image* images_bossmserprightclaw_3581_0_8[3];
static Direction direction_bossmserprightclaw_3581_0_8 = {8, 0, 0, 0, 1, images_bossmserprightclaw_3581_0_8, 3};
static Image* images_bossmserprightclaw_3581_0_16[20];
static Direction direction_bossmserprightclaw_3581_0_16 = {16, 45, 45, 0, -1, images_bossmserprightclaw_3581_0_16, 20};
static Animation anim_bossmserprightclaw_3581_0 = {&direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, NULL, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, &direction_bossmserprightclaw_3581_0_8, NULL, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, &direction_bossmserprightclaw_3581_0_16, NULL, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0, &direction_bossmserprightclaw_3581_0_0};
static Image* images_bossmserprightclaw_3581_7_0[1];
static Direction direction_bossmserprightclaw_3581_7_0 = {0, 50, 50, 0, -1, images_bossmserprightclaw_3581_7_0, 1};
static Image* images_bossmserprightclaw_3581_7_16[1];
static Direction direction_bossmserprightclaw_3581_7_16 = {16, 50, 50, 0, -1, images_bossmserprightclaw_3581_7_16, 1};
static Animation anim_bossmserprightclaw_3581_7 = {&direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, NULL, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, &direction_bossmserprightclaw_3581_7_16, NULL, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0, &direction_bossmserprightclaw_3581_7_0};
static Image* images_bossmserprightclaw_3581_8_0[1];
static Direction direction_bossmserprightclaw_3581_8_0 = {0, 50, 50, 0, -1, images_bossmserprightclaw_3581_8_0, 1};
static Image* images_bossmserprightclaw_3581_8_16[1];
static Direction direction_bossmserprightclaw_3581_8_16 = {16, 50, 50, 0, -1, images_bossmserprightclaw_3581_8_16, 1};
static Animation anim_bossmserprightclaw_3581_8 = {&direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, NULL, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, &direction_bossmserprightclaw_3581_8_16, NULL, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0, &direction_bossmserprightclaw_3581_8_0};
static Image* images_bossmserprightclaw_3581_10_0[1];
static Direction direction_bossmserprightclaw_3581_10_0 = {0, 50, 50, 0, 1, images_bossmserprightclaw_3581_10_0, 1};
static Animation anim_bossmserprightclaw_3581_10 = {&direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, NULL, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0, &direction_bossmserprightclaw_3581_10_0};
static Animation * anim_array_bossmserprightclaw_3581[11] = {&anim_bossmserprightclaw_3581_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmserprightclaw_3581_7, &anim_bossmserprightclaw_3581_8, NULL, &anim_bossmserprightclaw_3581_10};
static Animations anim_bossmserprightclaw_3581 = {11, &anim_array_bossmserprightclaw_3581[0]};
static bool anim_bossmserprightclaw_3581_initialized;
class BossMSerpRightClaw_3581 : public Active
{
public:
    BossMSerpRightClaw_3581(int x, int y) : Active(x, y, BossMSerpRightClaw_3581_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpRightClaw", 19);
#endif
        this->animations = &anim_bossmserprightclaw_3581;
        if (!anim_bossmserprightclaw_3581_initialized) {
            anim_bossmserprightclaw_3581_initialized = true;
            images_bossmserprightclaw_3581_0_0[0] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[1] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[2] = get_internal_image(10932);
            images_bossmserprightclaw_3581_0_0[3] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[4] = get_internal_image(10932);
            images_bossmserprightclaw_3581_0_0[5] = get_internal_image(10934);
            images_bossmserprightclaw_3581_0_0[6] = get_internal_image(10935);
            images_bossmserprightclaw_3581_0_0[7] = get_internal_image(10934);
            images_bossmserprightclaw_3581_0_0[8] = get_internal_image(10935);
            images_bossmserprightclaw_3581_0_0[9] = get_internal_image(10934);
            images_bossmserprightclaw_3581_0_0[10] = get_internal_image(10936);
            images_bossmserprightclaw_3581_0_0[11] = get_internal_image(10936);
            images_bossmserprightclaw_3581_0_0[12] = get_internal_image(10936);
            images_bossmserprightclaw_3581_0_0[13] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[14] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[15] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[16] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[17] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[18] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_0[19] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_8[0] = get_internal_image(10931);
            images_bossmserprightclaw_3581_0_8[1] = get_internal_image(10934);
            images_bossmserprightclaw_3581_0_8[2] = get_internal_image(10937);
            images_bossmserprightclaw_3581_0_16[0] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[1] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[2] = get_internal_image(10949);
            images_bossmserprightclaw_3581_0_16[3] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[4] = get_internal_image(10949);
            images_bossmserprightclaw_3581_0_16[5] = get_internal_image(10955);
            images_bossmserprightclaw_3581_0_16[6] = get_internal_image(10957);
            images_bossmserprightclaw_3581_0_16[7] = get_internal_image(10955);
            images_bossmserprightclaw_3581_0_16[8] = get_internal_image(10957);
            images_bossmserprightclaw_3581_0_16[9] = get_internal_image(10955);
            images_bossmserprightclaw_3581_0_16[10] = get_internal_image(10958);
            images_bossmserprightclaw_3581_0_16[11] = get_internal_image(10958);
            images_bossmserprightclaw_3581_0_16[12] = get_internal_image(10958);
            images_bossmserprightclaw_3581_0_16[13] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[14] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[15] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[16] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[17] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[18] = get_internal_image(10944);
            images_bossmserprightclaw_3581_0_16[19] = get_internal_image(10944);
            images_bossmserprightclaw_3581_7_0[0] = get_internal_image(10961);
            images_bossmserprightclaw_3581_7_16[0] = get_internal_image(10962);
            images_bossmserprightclaw_3581_8_0[0] = get_internal_image(10972);
            images_bossmserprightclaw_3581_8_16[0] = get_internal_image(10986);
            images_bossmserprightclaw_3581_10_0[0] = get_internal_image(11004);
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
FrameObject * create_bossmserprightclaw_3581(int x, int y)
{
    return new (Active::pool.create()) BossMSerpRightClaw_3581(x, y);
}
static Image* images_bossmserptorso_3582_0_0[2];
static Direction direction_bossmserptorso_3582_0_0 = {0, 0, 0, 0, 1, images_bossmserptorso_3582_0_0, 2};
static Image* images_bossmserptorso_3582_0_16[2];
static Direction direction_bossmserptorso_3582_0_16 = {16, 0, 0, 0, 1, images_bossmserptorso_3582_0_16, 2};
static Image* images_bossmserptorso_3582_0_24[2];
static Direction direction_bossmserptorso_3582_0_24 = {24, 0, 0, 0, 1, images_bossmserptorso_3582_0_24, 2};
static Animation anim_bossmserptorso_3582_0 = {&direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, NULL, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, &direction_bossmserptorso_3582_0_16, NULL, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, &direction_bossmserptorso_3582_0_24, NULL, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0, &direction_bossmserptorso_3582_0_0};
static Animation * anim_array_bossmserptorso_3582[1] = {&anim_bossmserptorso_3582_0};
static Animations anim_bossmserptorso_3582 = {1, &anim_array_bossmserptorso_3582[0]};
static bool anim_bossmserptorso_3582_initialized;
class BossMSerpTorso_3582 : public Active
{
public:
    BossMSerpTorso_3582(int x, int y) : Active(x, y, BossMSerpTorso_3582_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpTorso", 15);
#endif
        this->animations = &anim_bossmserptorso_3582;
        if (!anim_bossmserptorso_3582_initialized) {
            anim_bossmserptorso_3582_initialized = true;
            images_bossmserptorso_3582_0_0[0] = get_internal_image(11013);
            images_bossmserptorso_3582_0_0[1] = get_internal_image(5559);
            images_bossmserptorso_3582_0_16[0] = get_internal_image(5560);
            images_bossmserptorso_3582_0_16[1] = get_internal_image(5568);
            images_bossmserptorso_3582_0_24[0] = get_internal_image(11023);
            images_bossmserptorso_3582_0_24[1] = get_internal_image(5558);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 45);
        alterables->values.set(5, 1);
        alterables->values.set(6, 4992);
        alterables->values.set(9, 1);
        alterables->values.set(20, 7008);
        alterables->values.set(21, 8160);
    }
};
FrameObject * create_bossmserptorso_3582(int x, int y)
{
    return new (Active::pool.create()) BossMSerpTorso_3582(x, y);
}
static Image* images_bossmserpfrontshoulder_3583_0_0[2];
static Direction direction_bossmserpfrontshoulder_3583_0_0 = {0, 0, 0, 0, 1, images_bossmserpfrontshoulder_3583_0_0, 2};
static Image* images_bossmserpfrontshoulder_3583_0_8[1];
static Direction direction_bossmserpfrontshoulder_3583_0_8 = {8, 50, 50, 0, 1, images_bossmserpfrontshoulder_3583_0_8, 1};
static Image* images_bossmserpfrontshoulder_3583_0_16[2];
static Direction direction_bossmserpfrontshoulder_3583_0_16 = {16, 0, 0, 0, 1, images_bossmserpfrontshoulder_3583_0_16, 2};
static Animation anim_bossmserpfrontshoulder_3583_0 = {&direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, NULL, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, &direction_bossmserpfrontshoulder_3583_0_8, NULL, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, &direction_bossmserpfrontshoulder_3583_0_16, NULL, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0, &direction_bossmserpfrontshoulder_3583_0_0};
static Image* images_bossmserpfrontshoulder_3583_5_0[2];
static Direction direction_bossmserpfrontshoulder_3583_5_0 = {0, 0, 0, 0, -1, images_bossmserpfrontshoulder_3583_5_0, 2};
static Image* images_bossmserpfrontshoulder_3583_5_16[2];
static Direction direction_bossmserpfrontshoulder_3583_5_16 = {16, 0, 0, 0, -1, images_bossmserpfrontshoulder_3583_5_16, 2};
static Animation anim_bossmserpfrontshoulder_3583_5 = {&direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, NULL, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, &direction_bossmserpfrontshoulder_3583_5_16, NULL, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0, &direction_bossmserpfrontshoulder_3583_5_0};
static Animation * anim_array_bossmserpfrontshoulder_3583[6] = {&anim_bossmserpfrontshoulder_3583_0, NULL, NULL, NULL, NULL, &anim_bossmserpfrontshoulder_3583_5};
static Animations anim_bossmserpfrontshoulder_3583 = {6, &anim_array_bossmserpfrontshoulder_3583[0]};
static bool anim_bossmserpfrontshoulder_3583_initialized;
class BossMSerpFrontShoulder_3583 : public Active
{
public:
    BossMSerpFrontShoulder_3583(int x, int y) : Active(x, y, BossMSerpFrontShoulder_3583_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpFrontShoulder", 23);
#endif
        this->animations = &anim_bossmserpfrontshoulder_3583;
        if (!anim_bossmserpfrontshoulder_3583_initialized) {
            anim_bossmserpfrontshoulder_3583_initialized = true;
            images_bossmserpfrontshoulder_3583_0_0[0] = get_internal_image(11024);
            images_bossmserpfrontshoulder_3583_0_0[1] = get_internal_image(5569);
            images_bossmserpfrontshoulder_3583_0_8[0] = get_internal_image(10768);
            images_bossmserpfrontshoulder_3583_0_16[0] = get_internal_image(11025);
            images_bossmserpfrontshoulder_3583_0_16[1] = get_internal_image(5594);
            images_bossmserpfrontshoulder_3583_5_0[0] = get_internal_image(11009);
            images_bossmserpfrontshoulder_3583_5_0[1] = get_internal_image(5596);
            images_bossmserpfrontshoulder_3583_5_16[0] = get_internal_image(11005);
            images_bossmserpfrontshoulder_3583_5_16[1] = get_internal_image(5595);
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
FrameObject * create_bossmserpfrontshoulder_3583(int x, int y)
{
    return new (Active::pool.create()) BossMSerpFrontShoulder_3583(x, y);
}
static Image* images_bossmserpleftarm_3584_0_0[3];
static Direction direction_bossmserpleftarm_3584_0_0 = {0, 0, 0, 0, 1, images_bossmserpleftarm_3584_0_0, 3};
static Image* images_bossmserpleftarm_3584_0_16[3];
static Direction direction_bossmserpleftarm_3584_0_16 = {16, 0, 0, 0, 1, images_bossmserpleftarm_3584_0_16, 3};
static Animation anim_bossmserpleftarm_3584_0 = {&direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, NULL, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, &direction_bossmserpleftarm_3584_0_16, NULL, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0, &direction_bossmserpleftarm_3584_0_0};
static Animation * anim_array_bossmserpleftarm_3584[1] = {&anim_bossmserpleftarm_3584_0};
static Animations anim_bossmserpleftarm_3584 = {1, &anim_array_bossmserpleftarm_3584[0]};
static bool anim_bossmserpleftarm_3584_initialized;
class BossMSerpLeftArm_3584 : public Active
{
public:
    BossMSerpLeftArm_3584(int x, int y) : Active(x, y, BossMSerpLeftArm_3584_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpLeftArm", 17);
#endif
        this->animations = &anim_bossmserpleftarm_3584;
        if (!anim_bossmserpleftarm_3584_initialized) {
            anim_bossmserpleftarm_3584_initialized = true;
            images_bossmserpleftarm_3584_0_0[0] = get_internal_image(10236);
            images_bossmserpleftarm_3584_0_0[1] = get_internal_image(10761);
            images_bossmserpleftarm_3584_0_0[2] = get_internal_image(10762);
            images_bossmserpleftarm_3584_0_16[0] = get_internal_image(10921);
            images_bossmserpleftarm_3584_0_16[1] = get_internal_image(10929);
            images_bossmserpleftarm_3584_0_16[2] = get_internal_image(10930);
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
FrameObject * create_bossmserpleftarm_3584(int x, int y)
{
    return new (Active::pool.create()) BossMSerpLeftArm_3584(x, y);
}
static Image* images_bossmserphead_3585_0_0[4];
static Direction direction_bossmserphead_3585_0_0 = {0, 0, 0, 0, 1, images_bossmserphead_3585_0_0, 4};
static Image* images_bossmserphead_3585_0_16[4];
static Direction direction_bossmserphead_3585_0_16 = {16, 0, 0, 0, 1, images_bossmserphead_3585_0_16, 4};
static Image* images_bossmserphead_3585_0_24[4];
static Direction direction_bossmserphead_3585_0_24 = {24, 0, 0, 0, 1, images_bossmserphead_3585_0_24, 4};
static Animation anim_bossmserphead_3585_0 = {&direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, NULL, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, &direction_bossmserphead_3585_0_16, NULL, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, &direction_bossmserphead_3585_0_24, NULL, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0, &direction_bossmserphead_3585_0_0};
static Animation * anim_array_bossmserphead_3585[1] = {&anim_bossmserphead_3585_0};
static Animations anim_bossmserphead_3585 = {1, &anim_array_bossmserphead_3585[0]};
static bool anim_bossmserphead_3585_initialized;
class BossMSerpHead_3585 : public Active
{
public:
    BossMSerpHead_3585(int x, int y) : Active(x, y, BossMSerpHead_3585_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_MSerpHead", 14);
#endif
        this->animations = &anim_bossmserphead_3585;
        if (!anim_bossmserphead_3585_initialized) {
            anim_bossmserphead_3585_initialized = true;
            images_bossmserphead_3585_0_0[0] = get_internal_image(11026);
            images_bossmserphead_3585_0_0[1] = get_internal_image(1007);
            images_bossmserphead_3585_0_0[2] = get_internal_image(6351);
            images_bossmserphead_3585_0_0[3] = get_internal_image(5599);
            images_bossmserphead_3585_0_16[0] = get_internal_image(11028);
            images_bossmserphead_3585_0_16[1] = get_internal_image(1030);
            images_bossmserphead_3585_0_16[2] = get_internal_image(6344);
            images_bossmserphead_3585_0_16[3] = get_internal_image(6684);
            images_bossmserphead_3585_0_24[0] = get_internal_image(11033);
            images_bossmserphead_3585_0_24[1] = get_internal_image(63);
            images_bossmserphead_3585_0_24[2] = get_internal_image(11027);
            images_bossmserphead_3585_0_24[3] = get_internal_image(11022);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 40);
        alterables->values.set(5, 1);
        alterables->values.set(7, 5);
    }
};
FrameObject * create_bossmserphead_3585(int x, int y)
{
    return new (Active::pool.create()) BossMSerpHead_3585(x, y);
}
static Image* images_bossmserpleftclaw_3586_0_0[20];
static Direction direction_bossmserpleftclaw_3586_0_0 = {0, 45, 45, 0, -1, images_bossmserpleftclaw_3586_0_0, 20};
static Image* images_bossmserpleftclaw_3586_0_8[1];
static Direction direction_bossmserpleftclaw_3586_0_8 = {8, 50, 50, 0, 1, images_bossmserpleftclaw_3586_0_8, 1};
static Image* images_bossmserpleftclaw_3586_0_16[20];
static Direction direction_bossmserpleftclaw_3586_0_16 = {16, 45, 45, 0, -1, images_bossmserpleftclaw_3586_0_16, 20};
static Animation anim_bossmserpleftclaw_3586_0 = {&direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, NULL, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, &direction_bossmserpleftclaw_3586_0_8, NULL, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, &direction_bossmserpleftclaw_3586_0_16, NULL, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0, &direction_bossmserpleftclaw_3586_0_0};
static Image* images_bossmserpleftclaw_3586_7_0[1];
static Direction direction_bossmserpleftclaw_3586_7_0 = {0, 50, 50, 0, -1, images_bossmserpleftclaw_3586_7_0, 1};
static Image* images_bossmserpleftclaw_3586_7_16[1];
static Direction direction_bossmserpleftclaw_3586_7_16 = {16, 50, 50, 0, -1, images_bossmserpleftclaw_3586_7_16, 1};
static Animation anim_bossmserpleftclaw_3586_7 = {&direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, NULL, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, &direction_bossmserpleftclaw_3586_7_16, NULL, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0, &direction_bossmserpleftclaw_3586_7_0};
static Image* images_bossmserpleftclaw_3586_8_0[1];
static Direction direction_bossmserpleftclaw_3586_8_0 = {0, 50, 50, 0, -1, images_bossmserpleftclaw_3586_8_0, 1};
static Image* images_bossmserpleftclaw_3586_8_16[1];
static Direction direction_bossmserpleftclaw_3586_8_16 = {16, 50, 50, 0, -1, images_bossmserpleftclaw_3586_8_16, 1};
static Animation anim_bossmserpleftclaw_3586_8 = {&direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, NULL, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, &direction_bossmserpleftclaw_3586_8_16, NULL, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0, &direction_bossmserpleftclaw_3586_8_0};
static Image* images_bossmserpleftclaw_3586_10_0[1];
static Direction direction_bossmserpleftclaw_3586_10_0 = {0, 50, 50, 0, 1, images_bossmserpleftclaw_3586_10_0, 1};
static Image* images_bossmserpleftclaw_3586_10_16[1];
static Direction direction_bossmserpleftclaw_3586_10_16 = {16, 50, 50, 0, 1, images_bossmserpleftclaw_3586_10_16, 1};
static Animation anim_bossmserpleftclaw_3586_10 = {&direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, NULL, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, &direction_bossmserpleftclaw_3586_10_16, NULL, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0, &direction_bossmserpleftclaw_3586_10_0};
static Animation * anim_array_bossmserpleftclaw_3586[11] = {&anim_bossmserpleftclaw_3586_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmserpleftclaw_3586_7, &anim_bossmserpleftclaw_3586_8, NULL, &anim_bossmserpleftclaw_3586_10};
static Animations anim_bossmserpleftclaw_3586 = {11, &anim_array_bossmserpleftclaw_3586[0]};
static bool anim_bossmserpleftclaw_3586_initialized;
class BossMSerpLeftClaw_3586 : public Active
{
public:
    BossMSerpLeftClaw_3586(int x, int y) : Active(x, y, BossMSerpLeftClaw_3586_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MSerpLeftClaw", 18);
#endif
        this->animations = &anim_bossmserpleftclaw_3586;
        if (!anim_bossmserpleftclaw_3586_initialized) {
            anim_bossmserpleftclaw_3586_initialized = true;
            images_bossmserpleftclaw_3586_0_0[0] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[1] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[2] = get_internal_image(10949);
            images_bossmserpleftclaw_3586_0_0[3] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[4] = get_internal_image(10949);
            images_bossmserpleftclaw_3586_0_0[5] = get_internal_image(10955);
            images_bossmserpleftclaw_3586_0_0[6] = get_internal_image(10957);
            images_bossmserpleftclaw_3586_0_0[7] = get_internal_image(10955);
            images_bossmserpleftclaw_3586_0_0[8] = get_internal_image(10957);
            images_bossmserpleftclaw_3586_0_0[9] = get_internal_image(10955);
            images_bossmserpleftclaw_3586_0_0[10] = get_internal_image(10958);
            images_bossmserpleftclaw_3586_0_0[11] = get_internal_image(10958);
            images_bossmserpleftclaw_3586_0_0[12] = get_internal_image(10958);
            images_bossmserpleftclaw_3586_0_0[13] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[14] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[15] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[16] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[17] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[18] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_0[19] = get_internal_image(10944);
            images_bossmserpleftclaw_3586_0_8[0] = get_internal_image(11034);
            images_bossmserpleftclaw_3586_0_16[0] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[1] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[2] = get_internal_image(10932);
            images_bossmserpleftclaw_3586_0_16[3] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[4] = get_internal_image(10932);
            images_bossmserpleftclaw_3586_0_16[5] = get_internal_image(10934);
            images_bossmserpleftclaw_3586_0_16[6] = get_internal_image(10935);
            images_bossmserpleftclaw_3586_0_16[7] = get_internal_image(10934);
            images_bossmserpleftclaw_3586_0_16[8] = get_internal_image(10935);
            images_bossmserpleftclaw_3586_0_16[9] = get_internal_image(10934);
            images_bossmserpleftclaw_3586_0_16[10] = get_internal_image(10936);
            images_bossmserpleftclaw_3586_0_16[11] = get_internal_image(10936);
            images_bossmserpleftclaw_3586_0_16[12] = get_internal_image(10936);
            images_bossmserpleftclaw_3586_0_16[13] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[14] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[15] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[16] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[17] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[18] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_0_16[19] = get_internal_image(10931);
            images_bossmserpleftclaw_3586_7_0[0] = get_internal_image(10961);
            images_bossmserpleftclaw_3586_7_16[0] = get_internal_image(10962);
            images_bossmserpleftclaw_3586_8_0[0] = get_internal_image(10972);
            images_bossmserpleftclaw_3586_8_16[0] = get_internal_image(10986);
            images_bossmserpleftclaw_3586_10_0[0] = get_internal_image(11035);
            images_bossmserpleftclaw_3586_10_16[0] = get_internal_image(11004);
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
FrameObject * create_bossmserpleftclaw_3586(int x, int y)
{
    return new (Active::pool.create()) BossMSerpLeftClaw_3586(x, y);
}
static Image* images_bossenergypunch_3587_0_0[1];
static Direction direction_bossenergypunch_3587_0_0 = {0, 50, 50, 0, 1, images_bossenergypunch_3587_0_0, 1};
static Image* images_bossenergypunch_3587_0_16[1];
static Direction direction_bossenergypunch_3587_0_16 = {16, 50, 50, 0, 1, images_bossenergypunch_3587_0_16, 1};
static Animation anim_bossenergypunch_3587_0 = {&direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, NULL, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, &direction_bossenergypunch_3587_0_16, NULL, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0, &direction_bossenergypunch_3587_0_0};
static Animation * anim_array_bossenergypunch_3587[1] = {&anim_bossenergypunch_3587_0};
static Animations anim_bossenergypunch_3587 = {1, &anim_array_bossenergypunch_3587[0]};
static bool anim_bossenergypunch_3587_initialized;
class BossEnergyPunch_3587 : public Active
{
public:
    BossEnergyPunch_3587(int x, int y) : Active(x, y, BossEnergyPunch_3587_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_EnergyPunch", 16);
#endif
        set_visible(false);
        this->animations = &anim_bossenergypunch_3587;
        if (!anim_bossenergypunch_3587_initialized) {
            anim_bossenergypunch_3587_initialized = true;
            images_bossenergypunch_3587_0_0[0] = get_internal_image(11036);
            images_bossenergypunch_3587_0_16[0] = get_internal_image(11037);
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
FrameObject * create_bossenergypunch_3587(int x, int y)
{
    return new (Active::pool.create()) BossEnergyPunch_3587(x, y);
}
class FDAxle_3588 : public Backdrop
{
public:
    FDAxle_3588(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Axle", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10592);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdaxle_3588(int x, int y)
{
    return new (Backdrop::pool.create()) FDAxle_3588(x, y);
}
class SubtitleData_3589 : public Text
{
public:
    SubtitleData_3589(int x, int y) : Text(x, y, SubtitleData_3589_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("BREVON: You're forgetting something important about our troops.", 63));
        add_line(std::string("BREVON: They don't...", 21));
        add_line(std::string("BREVON: ...need...", 18));
        add_line(std::string("BREVON: ...oxygen!", 18));
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
FrameObject * create_subtitledata_3589(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_3589(x, y);
}
class LevelParallaxPiece0_3590 : public SystemBox
{
public:
    LevelParallaxPiece0_3590(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3590_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 2048;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1260);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3590(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3590(x, y);
}
class LevelParallaxPiece1_3591 : public SystemBox
{
public:
    LevelParallaxPiece1_3591(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3591_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 584;
        height = 160;
        type = PATTERN_IMAGE;
        image = get_internal_image(11487);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3591(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3591(x, y);
}
class LevelParallaxPiece7_3592 : public SystemBox
{
public:
    LevelParallaxPiece7_3592(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_3592_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 584;
        height = 192;
        type = PATTERN_IMAGE;
        image = get_internal_image(245);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_3592(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_3592(x, y);
}
class LevelParallaxPiece8_3593 : public SystemBox
{
public:
    LevelParallaxPiece8_3593(int x, int y) : SystemBox(x, y, LevelParallaxPiece8_3593_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 8", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 128;
        type = PATTERN_IMAGE;
        image = get_internal_image(206);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece8_3593(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece8_3593(x, y);
}
static Image* images_fd3backpillar_3594_0_0[1];
static Direction direction_fd3backpillar_3594_0_0 = {0, 50, 50, 0, 1, images_fd3backpillar_3594_0_0, 1};
static Animation anim_fd3backpillar_3594_0 = {&direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, NULL, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0, &direction_fd3backpillar_3594_0_0};
static Animation * anim_array_fd3backpillar_3594[1] = {&anim_fd3backpillar_3594_0};
static Animations anim_fd3backpillar_3594 = {1, &anim_array_fd3backpillar_3594[0]};
static bool anim_fd3backpillar_3594_initialized;
class FD3BackPillar_3594 : public Active
{
public:
    FD3BackPillar_3594(int x, int y) : Active(x, y, FD3BackPillar_3594_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FD3_BackPillar", 14);
#endif
        this->animations = &anim_fd3backpillar_3594;
        if (!anim_fd3backpillar_3594_initialized) {
            anim_fd3backpillar_3594_initialized = true;
            images_fd3backpillar_3594_0_0[0] = get_internal_image(1375);
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
FrameObject * create_fd3backpillar_3594(int x, int y)
{
    return new (Active::pool.create()) FD3BackPillar_3594(x, y);
}
static Image* images_enemygatlinggundebris_3595_0_0[4];
static Direction direction_enemygatlinggundebris_3595_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggundebris_3595_0_0, 4};
static Animation anim_enemygatlinggundebris_3595_0 = {&direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, NULL, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0, &direction_enemygatlinggundebris_3595_0_0};
static Animation * anim_array_enemygatlinggundebris_3595[1] = {&anim_enemygatlinggundebris_3595_0};
static Animations anim_enemygatlinggundebris_3595 = {1, &anim_array_enemygatlinggundebris_3595[0]};
static bool anim_enemygatlinggundebris_3595_initialized;
class EnemyGatlingGunDebris_3595 : public Active
{
public:
    EnemyGatlingGunDebris_3595(int x, int y) : Active(x, y, EnemyGatlingGunDebris_3595_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGunDebris", 22);
#endif
        this->animations = &anim_enemygatlinggundebris_3595;
        if (!anim_enemygatlinggundebris_3595_initialized) {
            anim_enemygatlinggundebris_3595_initialized = true;
            images_enemygatlinggundebris_3595_0_0[0] = get_internal_image(15047);
            images_enemygatlinggundebris_3595_0_0[1] = get_internal_image(15049);
            images_enemygatlinggundebris_3595_0_0[2] = get_internal_image(15010);
            images_enemygatlinggundebris_3595_0_0[3] = get_internal_image(15010);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(randrange(32));
        set_direction(randrange(32));
        movements[0] = new PinballMovement(this);
        movements[0]->index = 0;
        ((PinballMovement*)movements[0])->set_max_speed(100);
        ((PinballMovement*)movements[0])->set_deceleration(0);
        ((PinballMovement*)movements[0])->set_gravity(50);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_enemygatlinggundebris_3595(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGunDebris_3595(x, y);
}
class LevelParallaxPiece9_3596 : public SystemBox
{
public:
    LevelParallaxPiece9_3596(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_3596_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1194);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_3596(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_3596(x, y);
}
class FDSilo1_3597 : public Backdrop
{
public:
    FDSilo1_3597(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Silo 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3137);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdsilo1_3597(int x, int y)
{
    return new (Backdrop::pool.create()) FDSilo1_3597(x, y);
}
class FDCoreBack1_3598 : public Backdrop
{
public:
    FDCoreBack1_3598(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreBack 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14915);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcoreback1_3598(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreBack1_3598(x, y);
}
class FDCoreBack2_3599 : public Backdrop
{
public:
    FDCoreBack2_3599(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreBack 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14916);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcoreback2_3599(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreBack2_3599(x, y);
}
class FDOrbitBeamRing1_3600 : public Backdrop
{
public:
    FDOrbitBeamRing1_3600(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_OrbitBeamRing 1", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15043);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdorbitbeamring1_3600(int x, int y)
{
    return new (Backdrop::pool.create()) FDOrbitBeamRing1_3600(x, y);
}
class FDOrbitBeamRing3_3601 : public Backdrop
{
public:
    FDOrbitBeamRing3_3601(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_OrbitBeamRing 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15042);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdorbitbeamring3_3601(int x, int y)
{
    return new (Backdrop::pool.create()) FDOrbitBeamRing3_3601(x, y);
}
class FDOrbitBeamRing2_3602 : public Backdrop
{
public:
    FDOrbitBeamRing2_3602(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_OrbitBeamRing 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15044);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdorbitbeamring2_3602(int x, int y)
{
    return new (Backdrop::pool.create()) FDOrbitBeamRing2_3602(x, y);
}
class FDOrbitBeamRing4_3603 : public Backdrop
{
public:
    FDOrbitBeamRing4_3603(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_OrbitBeamRing 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15041);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdorbitbeamring4_3603(int x, int y)
{
    return new (Backdrop::pool.create()) FDOrbitBeamRing4_3603(x, y);
}
static Image* images_enemygatlingguntable_3604_0_0[1];
static Direction direction_enemygatlingguntable_3604_0_0 = {0, 50, 50, 0, 1, images_enemygatlingguntable_3604_0_0, 1};
static Animation anim_enemygatlingguntable_3604_0 = {&direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, NULL, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0, &direction_enemygatlingguntable_3604_0_0};
static Animation * anim_array_enemygatlingguntable_3604[1] = {&anim_enemygatlingguntable_3604_0};
static Animations anim_enemygatlingguntable_3604 = {1, &anim_array_enemygatlingguntable_3604[0]};
static bool anim_enemygatlingguntable_3604_initialized;
class EnemyGatlingGunTable_3604 : public Active
{
public:
    EnemyGatlingGunTable_3604(int x, int y) : Active(x, y, EnemyGatlingGunTable_3604_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGunTable", 21);
#endif
        this->animations = &anim_enemygatlingguntable_3604;
        if (!anim_enemygatlingguntable_3604_initialized) {
            anim_enemygatlingguntable_3604_initialized = true;
            images_enemygatlingguntable_3604_0_0[0] = get_internal_image(15052);
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
FrameObject * create_enemygatlingguntable_3604(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGunTable_3604(x, y);
}
class FDCoreLoop2_3605 : public Backdrop
{
public:
    FDCoreLoop2_3605(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreLoop 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15072);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreloop2_3605(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreLoop2_3605(x, y);
}
class FDCore1_3606 : public Backdrop
{
public:
    FDCore1_3606(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15009);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcore1_3606(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore1_3606(x, y);
}
class FDCore4_3607 : public Backdrop
{
public:
    FDCore4_3607(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15017);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcore4_3607(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore4_3607(x, y);
}
class FDCoreFloor2_3608 : public Backdrop
{
public:
    FDCoreFloor2_3608(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15053);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor2_3608(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor2_3608(x, y);
}
class FDCoreFloor4_3609 : public Backdrop
{
public:
    FDCoreFloor4_3609(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15055);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor4_3609(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor4_3609(x, y);
}
class FDCore2_3610 : public Backdrop
{
public:
    FDCore2_3610(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15011);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcore2_3610(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore2_3610(x, y);
}
class FDCoreFloor3_3611 : public Backdrop
{
public:
    FDCoreFloor3_3611(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15054);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor3_3611(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor3_3611(x, y);
}
class FDCore6_3612 : public Backdrop
{
public:
    FDCore6_3612(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15038);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcore6_3612(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore6_3612(x, y);
}
class FDCore7_3613 : public Backdrop
{
public:
    FDCore7_3613(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15040);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcore7_3613(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore7_3613(x, y);
}
