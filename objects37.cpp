#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class FDCore5_3614 : public Backdrop
{
public:
    FDCore5_3614(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15030);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcore5_3614(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore5_3614(x, y);
}
class FDCoreFloor1_3615 : public Backdrop
{
public:
    FDCoreFloor1_3615(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15051);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor1_3615(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor1_3615(x, y);
}
class FDCoreSlope1_3616 : public Backdrop
{
public:
    FDCoreSlope1_3616(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15065);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope1_3616(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope1_3616(x, y);
}
class FDCoreSlope3_3617 : public Backdrop
{
public:
    FDCoreSlope3_3617(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15067);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope3_3617(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope3_3617(x, y);
}
class FDCoreSlope5_3618 : public Backdrop
{
public:
    FDCoreSlope5_3618(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15061);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope5_3618(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope5_3618(x, y);
}
class FDCoreFloor5_3619 : public Backdrop
{
public:
    FDCoreFloor5_3619(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15056);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor5_3619(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor5_3619(x, y);
}
class FDCoreFloor6_3620 : public Backdrop
{
public:
    FDCoreFloor6_3620(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15057);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor6_3620(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor6_3620(x, y);
}
class FDCoreFloor8_3621 : public Backdrop
{
public:
    FDCoreFloor8_3621(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 8", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15059);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor8_3621(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor8_3621(x, y);
}
class FDCoreFloor7_3622 : public Backdrop
{
public:
    FDCoreFloor7_3622(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 7", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15058);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor7_3622(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor7_3622(x, y);
}
class FDCore3_3623 : public Backdrop
{
public:
    FDCore3_3623(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Core 3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15016);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcore3_3623(int x, int y)
{
    return new (Backdrop::pool.create()) FDCore3_3623(x, y);
}
class FDCoreSlope2_3624 : public Backdrop
{
public:
    FDCoreSlope2_3624(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15066);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope2_3624(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope2_3624(x, y);
}
class FDCoreSlope4_3625 : public Backdrop
{
public:
    FDCoreSlope4_3625(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15068);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope4_3625(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope4_3625(x, y);
}
class FDCoreSlope6_3626 : public Backdrop
{
public:
    FDCoreSlope6_3626(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreSlope 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15062);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreslope6_3626(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreSlope6_3626(x, y);
}
class FDCoreFloor9_3627 : public Backdrop
{
public:
    FDCoreFloor9_3627(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreFloor 9", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15060);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fdcorefloor9_3627(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreFloor9_3627(x, y);
}
class FDCoreLoop1_3628 : public Backdrop
{
public:
    FDCoreLoop1_3628(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreLoop 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15063);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreloop1_3628(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreLoop1_3628(x, y);
}
class FDCoreLoop3_3629 : public Backdrop
{
public:
    FDCoreLoop3_3629(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreLoop 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15064);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreloop3_3629(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreLoop3_3629(x, y);
}
class Backdrop_3630 : public Backdrop
{
public:
    Backdrop_3630(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15027);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_3630(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_3630(x, y);
}
class FDCoreLoop4_3631 : public Backdrop
{
public:
    FDCoreLoop4_3631(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreLoop 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15070);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreloop4_3631(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreLoop4_3631(x, y);
}
class FDCoreLoop5_3632 : public Backdrop
{
public:
    FDCoreLoop5_3632(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreLoop 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15069);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdcoreloop5_3632(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreLoop5_3632(x, y);
}
static Image* images_hazardorbitbeambase_3633_0_0[8];
static Direction direction_hazardorbitbeambase_3633_0_0 = {0, 0, 0, 0, -1, images_hazardorbitbeambase_3633_0_0, 8};
static Animation anim_hazardorbitbeambase_3633_0 = {&direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, NULL, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0, &direction_hazardorbitbeambase_3633_0_0};
static Animation * anim_array_hazardorbitbeambase_3633[1] = {&anim_hazardorbitbeambase_3633_0};
static Animations anim_hazardorbitbeambase_3633 = {1, &anim_array_hazardorbitbeambase_3633[0]};
static bool anim_hazardorbitbeambase_3633_initialized;
class HazardOrbitBeamBase_3633 : public Active
{
public:
    HazardOrbitBeamBase_3633(int x, int y) : Active(x, y, HazardOrbitBeamBase_3633_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Hazard_OrbitBeamBase", 20);
#endif
        this->animations = &anim_hazardorbitbeambase_3633;
        if (!anim_hazardorbitbeambase_3633_initialized) {
            anim_hazardorbitbeambase_3633_initialized = true;
            images_hazardorbitbeambase_3633_0_0[0] = get_internal_image(12187);
            images_hazardorbitbeambase_3633_0_0[1] = get_internal_image(12187);
            images_hazardorbitbeambase_3633_0_0[2] = get_internal_image(12197);
            images_hazardorbitbeambase_3633_0_0[3] = get_internal_image(12194);
            images_hazardorbitbeambase_3633_0_0[4] = get_internal_image(12190);
            images_hazardorbitbeambase_3633_0_0[5] = get_internal_image(12190);
            images_hazardorbitbeambase_3633_0_0[6] = get_internal_image(12194);
            images_hazardorbitbeambase_3633_0_0[7] = get_internal_image(12197);
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
FrameObject * create_hazardorbitbeambase_3633(int x, int y)
{
    return new (Active::pool.create()) HazardOrbitBeamBase_3633(x, y);
}
static Image* images_enemygatlinggunright_3634_0_0[2];
static Direction direction_enemygatlinggunright_3634_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggunright_3634_0_0, 2};
static Animation anim_enemygatlinggunright_3634_0 = {&direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, NULL, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0, &direction_enemygatlinggunright_3634_0_0};
static Animation * anim_array_enemygatlinggunright_3634[1] = {&anim_enemygatlinggunright_3634_0};
static Animations anim_enemygatlinggunright_3634 = {1, &anim_array_enemygatlinggunright_3634[0]};
static bool anim_enemygatlinggunright_3634_initialized;
class EnemyGatlingGunRight_3634 : public Active
{
public:
    EnemyGatlingGunRight_3634(int x, int y) : Active(x, y, EnemyGatlingGunRight_3634_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGunRight", 21);
#endif
        this->animations = &anim_enemygatlinggunright_3634;
        if (!anim_enemygatlinggunright_3634_initialized) {
            anim_enemygatlinggunright_3634_initialized = true;
            images_enemygatlinggunright_3634_0_0[0] = get_internal_image(15014);
            images_enemygatlinggunright_3634_0_0[1] = get_internal_image(15015);
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
FrameObject * create_enemygatlinggunright_3634(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGunRight_3634(x, y);
}
static Image* images_enemygatlinggunleft_3635_0_0[2];
static Direction direction_enemygatlinggunleft_3635_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggunleft_3635_0_0, 2};
static Animation anim_enemygatlinggunleft_3635_0 = {&direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, NULL, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0, &direction_enemygatlinggunleft_3635_0_0};
static Animation * anim_array_enemygatlinggunleft_3635[1] = {&anim_enemygatlinggunleft_3635_0};
static Animations anim_enemygatlinggunleft_3635 = {1, &anim_array_enemygatlinggunleft_3635[0]};
static bool anim_enemygatlinggunleft_3635_initialized;
class EnemyGatlingGunLeft_3635 : public Active
{
public:
    EnemyGatlingGunLeft_3635(int x, int y) : Active(x, y, EnemyGatlingGunLeft_3635_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGunLeft", 20);
#endif
        this->animations = &anim_enemygatlinggunleft_3635;
        if (!anim_enemygatlinggunleft_3635_initialized) {
            anim_enemygatlinggunleft_3635_initialized = true;
            images_enemygatlinggunleft_3635_0_0[0] = get_internal_image(15014);
            images_enemygatlinggunleft_3635_0_0[1] = get_internal_image(15015);
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
FrameObject * create_enemygatlinggunleft_3635(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGunLeft_3635(x, y);
}
static Image* images_fdlooplayer12_3636_0_0[4];
static Direction direction_fdlooplayer12_3636_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer12_3636_0_0, 4};
static Animation anim_fdlooplayer12_3636_0 = {&direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, NULL, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0, &direction_fdlooplayer12_3636_0_0};
static Animation * anim_array_fdlooplayer12_3636[1] = {&anim_fdlooplayer12_3636_0};
static Animations anim_fdlooplayer12_3636 = {1, &anim_array_fdlooplayer12_3636[0]};
static bool anim_fdlooplayer12_3636_initialized;
class FDLoopLayer12_3636 : public Active
{
public:
    FDLoopLayer12_3636(int x, int y) : Active(x, y, FDLoopLayer12_3636_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("FD_LoopLayer1 2", 15);
#endif
        this->animations = &anim_fdlooplayer12_3636;
        if (!anim_fdlooplayer12_3636_initialized) {
            anim_fdlooplayer12_3636_initialized = true;
            images_fdlooplayer12_3636_0_0[0] = get_internal_image(15076);
            images_fdlooplayer12_3636_0_0[1] = get_internal_image(15077);
            images_fdlooplayer12_3636_0_0[2] = get_internal_image(15078);
            images_fdlooplayer12_3636_0_0[3] = get_internal_image(15079);
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
FrameObject * create_fdlooplayer12_3636(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer12_3636(x, y);
}
class DialogData_3637 : public Text
{
public:
    DialogData_3637(int x, int y) : Text(x, y, DialogData_3637_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 00 to_03_14 According to our scans, the Kingdom Stone has enough energy to double the size of his army.", 106));
        add_line(std::string("05 00 to_03_15 If he gets it... he'll be unstoppable.", 53));
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
FrameObject * create_dialogdata_3637(int x, int y)
{
    return new (Text::pool.create()) DialogData_3637(x, y);
}
static Image* images_gimmickspeedbooster_3638_0_0[4];
static Direction direction_gimmickspeedbooster_3638_0_0 = {0, 100, 100, 0, -1, images_gimmickspeedbooster_3638_0_0, 4};
static Animation anim_gimmickspeedbooster_3638_0 = {&direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, NULL, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0, &direction_gimmickspeedbooster_3638_0_0};
static Animation * anim_array_gimmickspeedbooster_3638[1] = {&anim_gimmickspeedbooster_3638_0};
static Animations anim_gimmickspeedbooster_3638 = {1, &anim_array_gimmickspeedbooster_3638[0]};
static bool anim_gimmickspeedbooster_3638_initialized;
class GimmickSpeedBooster_3638 : public Active
{
public:
    GimmickSpeedBooster_3638(int x, int y) : Active(x, y, GimmickSpeedBooster_3638_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpeedBooster", 20);
#endif
        this->animations = &anim_gimmickspeedbooster_3638;
        if (!anim_gimmickspeedbooster_3638_initialized) {
            anim_gimmickspeedbooster_3638_initialized = true;
            images_gimmickspeedbooster_3638_0_0[0] = get_internal_image(14992);
            images_gimmickspeedbooster_3638_0_0[1] = get_internal_image(14995);
            images_gimmickspeedbooster_3638_0_0[2] = get_internal_image(14996);
            images_gimmickspeedbooster_3638_0_0[3] = get_internal_image(14997);
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
FrameObject * create_gimmickspeedbooster_3638(int x, int y)
{
    return new (Active::pool.create()) GimmickSpeedBooster_3638(x, y);
}
static Image* images_fdlooplayer03_3639_0_0[1];
static Direction direction_fdlooplayer03_3639_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer03_3639_0_0, 1};
static Animation anim_fdlooplayer03_3639_0 = {&direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, NULL, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0, &direction_fdlooplayer03_3639_0_0};
static Animation * anim_array_fdlooplayer03_3639[1] = {&anim_fdlooplayer03_3639_0};
static Animations anim_fdlooplayer03_3639 = {1, &anim_array_fdlooplayer03_3639[0]};
static bool anim_fdlooplayer03_3639_initialized;
class FDLoopLayer03_3639 : public Active
{
public:
    FDLoopLayer03_3639(int x, int y) : Active(x, y, FDLoopLayer03_3639_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("FD_LoopLayer0 3", 15);
#endif
        this->animations = &anim_fdlooplayer03_3639;
        if (!anim_fdlooplayer03_3639_initialized) {
            anim_fdlooplayer03_3639_initialized = true;
            images_fdlooplayer03_3639_0_0[0] = get_internal_image(15069);
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
FrameObject * create_fdlooplayer03_3639(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer03_3639(x, y);
}
static Image* images_fdlooplayer11_3640_0_0[1];
static Direction direction_fdlooplayer11_3640_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer11_3640_0_0, 1};
static Animation anim_fdlooplayer11_3640_0 = {&direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, NULL, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0, &direction_fdlooplayer11_3640_0_0};
static Animation * anim_array_fdlooplayer11_3640[1] = {&anim_fdlooplayer11_3640_0};
static Animations anim_fdlooplayer11_3640 = {1, &anim_array_fdlooplayer11_3640[0]};
static bool anim_fdlooplayer11_3640_initialized;
class FDLoopLayer11_3640 : public Active
{
public:
    FDLoopLayer11_3640(int x, int y) : Active(x, y, FDLoopLayer11_3640_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("FD_LoopLayer1 1", 15);
#endif
        this->animations = &anim_fdlooplayer11_3640;
        if (!anim_fdlooplayer11_3640_initialized) {
            anim_fdlooplayer11_3640_initialized = true;
            images_fdlooplayer11_3640_0_0[0] = get_internal_image(15069);
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
FrameObject * create_fdlooplayer11_3640(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer11_3640(x, y);
}
static Image* images_fdlooplayer02_3641_0_0[4];
static Direction direction_fdlooplayer02_3641_0_0 = {0, 50, 50, 0, -1, images_fdlooplayer02_3641_0_0, 4};
static Animation anim_fdlooplayer02_3641_0 = {&direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, NULL, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0, &direction_fdlooplayer02_3641_0_0};
static Animation * anim_array_fdlooplayer02_3641[1] = {&anim_fdlooplayer02_3641_0};
static Animations anim_fdlooplayer02_3641 = {1, &anim_array_fdlooplayer02_3641[0]};
static bool anim_fdlooplayer02_3641_initialized;
class FDLoopLayer02_3641 : public Active
{
public:
    FDLoopLayer02_3641(int x, int y) : Active(x, y, FDLoopLayer02_3641_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("FD_LoopLayer0 2", 15);
#endif
        this->animations = &anim_fdlooplayer02_3641;
        if (!anim_fdlooplayer02_3641_initialized) {
            anim_fdlooplayer02_3641_initialized = true;
            images_fdlooplayer02_3641_0_0[0] = get_internal_image(15071);
            images_fdlooplayer02_3641_0_0[1] = get_internal_image(15073);
            images_fdlooplayer02_3641_0_0[2] = get_internal_image(15074);
            images_fdlooplayer02_3641_0_0[3] = get_internal_image(15075);
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
FrameObject * create_fdlooplayer02_3641(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer02_3641(x, y);
}
static Image* images_fdlooplayer13_3642_0_0[1];
static Direction direction_fdlooplayer13_3642_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer13_3642_0_0, 1};
static Animation anim_fdlooplayer13_3642_0 = {&direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, NULL, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0, &direction_fdlooplayer13_3642_0_0};
static Animation * anim_array_fdlooplayer13_3642[1] = {&anim_fdlooplayer13_3642_0};
static Animations anim_fdlooplayer13_3642 = {1, &anim_array_fdlooplayer13_3642[0]};
static bool anim_fdlooplayer13_3642_initialized;
class FDLoopLayer13_3642 : public Active
{
public:
    FDLoopLayer13_3642(int x, int y) : Active(x, y, FDLoopLayer13_3642_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("FD_LoopLayer1 3", 15);
#endif
        this->animations = &anim_fdlooplayer13_3642;
        if (!anim_fdlooplayer13_3642_initialized) {
            anim_fdlooplayer13_3642_initialized = true;
            images_fdlooplayer13_3642_0_0[0] = get_internal_image(15070);
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
FrameObject * create_fdlooplayer13_3642(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer13_3642(x, y);
}
static Image* images_fdlooplayer01_3643_0_0[1];
static Direction direction_fdlooplayer01_3643_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer01_3643_0_0, 1};
static Animation anim_fdlooplayer01_3643_0 = {&direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, NULL, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0, &direction_fdlooplayer01_3643_0_0};
static Animation * anim_array_fdlooplayer01_3643[1] = {&anim_fdlooplayer01_3643_0};
static Animations anim_fdlooplayer01_3643 = {1, &anim_array_fdlooplayer01_3643[0]};
static bool anim_fdlooplayer01_3643_initialized;
class FDLoopLayer01_3643 : public Active
{
public:
    FDLoopLayer01_3643(int x, int y) : Active(x, y, FDLoopLayer01_3643_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("FD_LoopLayer0 1", 15);
#endif
        this->animations = &anim_fdlooplayer01_3643;
        if (!anim_fdlooplayer01_3643_initialized) {
            anim_fdlooplayer01_3643_initialized = true;
            images_fdlooplayer01_3643_0_0[0] = get_internal_image(15070);
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
FrameObject * create_fdlooplayer01_3643(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer01_3643(x, y);
}
static Image* images_hazardorbitbeam_3644_0_0[1];
static Direction direction_hazardorbitbeam_3644_0_0 = {0, 50, 50, 0, 1, images_hazardorbitbeam_3644_0_0, 1};
static Animation anim_hazardorbitbeam_3644_0 = {&direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, NULL, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0, &direction_hazardorbitbeam_3644_0_0};
static Animation * anim_array_hazardorbitbeam_3644[1] = {&anim_hazardorbitbeam_3644_0};
static Animations anim_hazardorbitbeam_3644 = {1, &anim_array_hazardorbitbeam_3644[0]};
static bool anim_hazardorbitbeam_3644_initialized;
class HazardOrbitBeam_3644 : public Active
{
public:
    HazardOrbitBeam_3644(int x, int y) : Active(x, y, HazardOrbitBeam_3644_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_OrbitBeam", 16);
#endif
        this->animations = &anim_hazardorbitbeam_3644;
        if (!anim_hazardorbitbeam_3644_initialized) {
            anim_hazardorbitbeam_3644_initialized = true;
            images_hazardorbitbeam_3644_0_0[0] = get_internal_image(12201);
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
FrameObject * create_hazardorbitbeam_3644(int x, int y)
{
    return new (Active::pool.create()) HazardOrbitBeam_3644(x, y);
}
static Image* images_hazardorbitbeamscan_3645_0_0[2];
static Direction direction_hazardorbitbeamscan_3645_0_0 = {0, 25, 25, 0, -1, images_hazardorbitbeamscan_3645_0_0, 2};
static Image* images_hazardorbitbeamscan_3645_0_1[2];
static Direction direction_hazardorbitbeamscan_3645_0_1 = {1, 50, 50, 0, -1, images_hazardorbitbeamscan_3645_0_1, 2};
static Animation anim_hazardorbitbeamscan_3645_0 = {&direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_1, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0, &direction_hazardorbitbeamscan_3645_0_0};
static Animation * anim_array_hazardorbitbeamscan_3645[1] = {&anim_hazardorbitbeamscan_3645_0};
static Animations anim_hazardorbitbeamscan_3645 = {1, &anim_array_hazardorbitbeamscan_3645[0]};
static bool anim_hazardorbitbeamscan_3645_initialized;
class HazardOrbitBeamScan_3645 : public Active
{
public:
    HazardOrbitBeamScan_3645(int x, int y) : Active(x, y, HazardOrbitBeamScan_3645_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_OrbitBeamScan", 20);
#endif
        this->animations = &anim_hazardorbitbeamscan_3645;
        if (!anim_hazardorbitbeamscan_3645_initialized) {
            anim_hazardorbitbeamscan_3645_initialized = true;
            images_hazardorbitbeamscan_3645_0_0[0] = get_internal_image(15008);
            images_hazardorbitbeamscan_3645_0_0[1] = get_internal_image(15003);
            images_hazardorbitbeamscan_3645_0_1[0] = get_internal_image(15012);
            images_hazardorbitbeamscan_3645_0_1[1] = get_internal_image(15013);
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
FrameObject * create_hazardorbitbeamscan_3645(int x, int y)
{
    return new (Active::pool.create()) HazardOrbitBeamScan_3645(x, y);
}
static Image* images_fdlooplayer14_3646_0_0[1];
static Direction direction_fdlooplayer14_3646_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer14_3646_0_0, 1};
static Animation anim_fdlooplayer14_3646_0 = {&direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, NULL, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0, &direction_fdlooplayer14_3646_0_0};
static Animation * anim_array_fdlooplayer14_3646[1] = {&anim_fdlooplayer14_3646_0};
static Animations anim_fdlooplayer14_3646 = {1, &anim_array_fdlooplayer14_3646[0]};
static bool anim_fdlooplayer14_3646_initialized;
class FDLoopLayer14_3646 : public Active
{
public:
    FDLoopLayer14_3646(int x, int y) : Active(x, y, FDLoopLayer14_3646_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("FD_LoopLayer1 4", 15);
#endif
        this->animations = &anim_fdlooplayer14_3646;
        if (!anim_fdlooplayer14_3646_initialized) {
            anim_fdlooplayer14_3646_initialized = true;
            images_fdlooplayer14_3646_0_0[0] = get_internal_image(15063);
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
FrameObject * create_fdlooplayer14_3646(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer14_3646(x, y);
}
static Image* images_fdlooplayer04_3647_0_0[1];
static Direction direction_fdlooplayer04_3647_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer04_3647_0_0, 1};
static Animation anim_fdlooplayer04_3647_0 = {&direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, NULL, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0, &direction_fdlooplayer04_3647_0_0};
static Animation * anim_array_fdlooplayer04_3647[1] = {&anim_fdlooplayer04_3647_0};
static Animations anim_fdlooplayer04_3647 = {1, &anim_array_fdlooplayer04_3647[0]};
static bool anim_fdlooplayer04_3647_initialized;
class FDLoopLayer04_3647 : public Active
{
public:
    FDLoopLayer04_3647(int x, int y) : Active(x, y, FDLoopLayer04_3647_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("FD_LoopLayer0 4", 15);
#endif
        this->animations = &anim_fdlooplayer04_3647;
        if (!anim_fdlooplayer04_3647_initialized) {
            anim_fdlooplayer04_3647_initialized = true;
            images_fdlooplayer04_3647_0_0[0] = get_internal_image(15072);
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
FrameObject * create_fdlooplayer04_3647(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer04_3647(x, y);
}
static Image* images_fdlooplayer05_3648_0_0[1];
static Direction direction_fdlooplayer05_3648_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer05_3648_0_0, 1};
static Animation anim_fdlooplayer05_3648_0 = {&direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, NULL, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0, &direction_fdlooplayer05_3648_0_0};
static Animation * anim_array_fdlooplayer05_3648[1] = {&anim_fdlooplayer05_3648_0};
static Animations anim_fdlooplayer05_3648 = {1, &anim_array_fdlooplayer05_3648[0]};
static bool anim_fdlooplayer05_3648_initialized;
class FDLoopLayer05_3648 : public Active
{
public:
    FDLoopLayer05_3648(int x, int y) : Active(x, y, FDLoopLayer05_3648_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("FD_LoopLayer0 5", 15);
#endif
        this->animations = &anim_fdlooplayer05_3648;
        if (!anim_fdlooplayer05_3648_initialized) {
            anim_fdlooplayer05_3648_initialized = true;
            images_fdlooplayer05_3648_0_0[0] = get_internal_image(15063);
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
FrameObject * create_fdlooplayer05_3648(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer05_3648(x, y);
}
static Image* images_fdlooplayer15_3649_0_0[1];
static Direction direction_fdlooplayer15_3649_0_0 = {0, 50, 50, 0, 1, images_fdlooplayer15_3649_0_0, 1};
static Animation anim_fdlooplayer15_3649_0 = {&direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, NULL, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0, &direction_fdlooplayer15_3649_0_0};
static Animation * anim_array_fdlooplayer15_3649[1] = {&anim_fdlooplayer15_3649_0};
static Animations anim_fdlooplayer15_3649 = {1, &anim_array_fdlooplayer15_3649[0]};
static bool anim_fdlooplayer15_3649_initialized;
class FDLoopLayer15_3649 : public Active
{
public:
    FDLoopLayer15_3649(int x, int y) : Active(x, y, FDLoopLayer15_3649_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("FD_LoopLayer1 5", 15);
#endif
        this->animations = &anim_fdlooplayer15_3649;
        if (!anim_fdlooplayer15_3649_initialized) {
            anim_fdlooplayer15_3649_initialized = true;
            images_fdlooplayer15_3649_0_0[0] = get_internal_image(15072);
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
FrameObject * create_fdlooplayer15_3649(int x, int y)
{
    return new (Active::pool.create()) FDLoopLayer15_3649(x, y);
}
static Image* images_enemygatlinggun_3650_0_0[2];
static Direction direction_enemygatlinggun_3650_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggun_3650_0_0, 2};
static Animation anim_enemygatlinggun_3650_0 = {&direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, NULL, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0, &direction_enemygatlinggun_3650_0_0};
static Animation * anim_array_enemygatlinggun_3650[1] = {&anim_enemygatlinggun_3650_0};
static Animations anim_enemygatlinggun_3650 = {1, &anim_array_enemygatlinggun_3650[0]};
static bool anim_enemygatlinggun_3650_initialized;
class EnemyGatlingGun_3650 : public Active
{
public:
    EnemyGatlingGun_3650(int x, int y) : Active(x, y, EnemyGatlingGun_3650_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGun", 16);
#endif
        this->animations = &anim_enemygatlinggun_3650;
        if (!anim_enemygatlinggun_3650_initialized) {
            anim_enemygatlinggun_3650_initialized = true;
            images_enemygatlinggun_3650_0_0[0] = get_internal_image(15045);
            images_enemygatlinggun_3650_0_0[1] = get_internal_image(15046);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
        alterables->values.set(3, 270);
        alterables->values.set(5, -24);
        alterables->values.set(6, -24);
        alterables->values.set(9, -64);
        alterables->values.set(10, 90);
    }
};
FrameObject * create_enemygatlinggun_3650(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGun_3650(x, y);
}
static Image* images_enemygatlinggunbarrel_3651_0_0[2];
static Direction direction_enemygatlinggunbarrel_3651_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggunbarrel_3651_0_0, 2};
static Animation anim_enemygatlinggunbarrel_3651_0 = {&direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, NULL, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0, &direction_enemygatlinggunbarrel_3651_0_0};
static Animation * anim_array_enemygatlinggunbarrel_3651[1] = {&anim_enemygatlinggunbarrel_3651_0};
static Animations anim_enemygatlinggunbarrel_3651 = {1, &anim_array_enemygatlinggunbarrel_3651[0]};
static bool anim_enemygatlinggunbarrel_3651_initialized;
class EnemyGatlingGunBarrel_3651 : public Active
{
public:
    EnemyGatlingGunBarrel_3651(int x, int y) : Active(x, y, EnemyGatlingGunBarrel_3651_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGunBarrel", 22);
#endif
        this->animations = &anim_enemygatlinggunbarrel_3651;
        if (!anim_enemygatlinggunbarrel_3651_initialized) {
            anim_enemygatlinggunbarrel_3651_initialized = true;
            images_enemygatlinggunbarrel_3651_0_0[0] = get_internal_image(15049);
            images_enemygatlinggunbarrel_3651_0_0[1] = get_internal_image(15050);
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
FrameObject * create_enemygatlinggunbarrel_3651(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGunBarrel_3651(x, y);
}
static Image* images_enemygatlinggun2_3652_0_0[2];
static Direction direction_enemygatlinggun2_3652_0_0 = {0, 0, 0, 0, 1, images_enemygatlinggun2_3652_0_0, 2};
static Animation anim_enemygatlinggun2_3652_0 = {&direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, NULL, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0, &direction_enemygatlinggun2_3652_0_0};
static Animation * anim_array_enemygatlinggun2_3652[1] = {&anim_enemygatlinggun2_3652_0};
static Animations anim_enemygatlinggun2_3652 = {1, &anim_array_enemygatlinggun2_3652[0]};
static bool anim_enemygatlinggun2_3652_initialized;
class EnemyGatlingGun2_3652 : public Active
{
public:
    EnemyGatlingGun2_3652(int x, int y) : Active(x, y, EnemyGatlingGun2_3652_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_GatlingGun 2", 18);
#endif
        this->animations = &anim_enemygatlinggun2_3652;
        if (!anim_enemygatlinggun2_3652_initialized) {
            anim_enemygatlinggun2_3652_initialized = true;
            images_enemygatlinggun2_3652_0_0[0] = get_internal_image(15047);
            images_enemygatlinggun2_3652_0_0[1] = get_internal_image(15048);
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
FrameObject * create_enemygatlinggun2_3652(int x, int y)
{
    return new (Active::pool.create()) EnemyGatlingGun2_3652(x, y);
}
static Image* images_gimmickspeedboosterfront_3653_0_0[5];
static Direction direction_gimmickspeedboosterfront_3653_0_0 = {0, 100, 100, 0, -1, images_gimmickspeedboosterfront_3653_0_0, 5};
static Animation anim_gimmickspeedboosterfront_3653_0 = {&direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, NULL, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0, &direction_gimmickspeedboosterfront_3653_0_0};
static Animation * anim_array_gimmickspeedboosterfront_3653[1] = {&anim_gimmickspeedboosterfront_3653_0};
static Animations anim_gimmickspeedboosterfront_3653 = {1, &anim_array_gimmickspeedboosterfront_3653[0]};
static bool anim_gimmickspeedboosterfront_3653_initialized;
class GimmickSpeedBoosterFront_3653 : public Active
{
public:
    GimmickSpeedBoosterFront_3653(int x, int y) : Active(x, y, GimmickSpeedBoosterFront_3653_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpeedBoosterFront", 25);
#endif
        this->animations = &anim_gimmickspeedboosterfront_3653;
        if (!anim_gimmickspeedboosterfront_3653_initialized) {
            anim_gimmickspeedboosterfront_3653_initialized = true;
            images_gimmickspeedboosterfront_3653_0_0[0] = get_internal_image(15006);
            images_gimmickspeedboosterfront_3653_0_0[1] = get_internal_image(14922);
            images_gimmickspeedboosterfront_3653_0_0[2] = get_internal_image(15002);
            images_gimmickspeedboosterfront_3653_0_0[3] = get_internal_image(14987);
            images_gimmickspeedboosterfront_3653_0_0[4] = get_internal_image(9121);
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
FrameObject * create_gimmickspeedboosterfront_3653(int x, int y)
{
    return new (Active::pool.create()) GimmickSpeedBoosterFront_3653(x, y);
}
static Image* images_flashbackbg_3654_0_0[1];
static Direction direction_flashbackbg_3654_0_0 = {0, 50, 50, 0, 1, images_flashbackbg_3654_0_0, 1};
static Animation anim_flashbackbg_3654_0 = {&direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, NULL, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0, &direction_flashbackbg_3654_0_0};
static Animation * anim_array_flashbackbg_3654[1] = {&anim_flashbackbg_3654_0};
static Animations anim_flashbackbg_3654 = {1, &anim_array_flashbackbg_3654[0]};
static bool anim_flashbackbg_3654_initialized;
class FlashbackBG_3654 : public Active
{
public:
    FlashbackBG_3654(int x, int y) : Active(x, y, FlashbackBG_3654_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Flashback_BG", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flashbackbg_3654;
        if (!anim_flashbackbg_3654_initialized) {
            anim_flashbackbg_3654_initialized = true;
            images_flashbackbg_3654_0_0[0] = get_internal_image(609);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_flashbackbg_3654(int x, int y)
{
    return new (Active::pool.create()) FlashbackBG_3654(x, y);
}
class SubtitleData_3655 : public Text
{
public:
    SubtitleData_3655(int x, int y) : Text(x, y, SubtitleData_3655_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Subtitle Data", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("BREVON: Ohhh nooo! My ship is being infiltrated! What ever shall I do\?", 70));
        add_line(std::string("BREVON: How about THIS.", 23));
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
FrameObject * create_subtitledata_3655(int x, int y)
{
    return new (Text::pool.create()) SubtitleData_3655(x, y);
}
static Image* images_kingdomstonewave_3656_0_0[1];
static Direction direction_kingdomstonewave_3656_0_0 = {0, 50, 50, 0, 1, images_kingdomstonewave_3656_0_0, 1};
static Animation anim_kingdomstonewave_3656_0 = {&direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, NULL, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0, &direction_kingdomstonewave_3656_0_0};
static Animation * anim_array_kingdomstonewave_3656[1] = {&anim_kingdomstonewave_3656_0};
static Animations anim_kingdomstonewave_3656 = {1, &anim_array_kingdomstonewave_3656[0]};
static bool anim_kingdomstonewave_3656_initialized;
class KingdomStoneWave_3656 : public Active
{
public:
    KingdomStoneWave_3656(int x, int y) : Active(x, y, KingdomStoneWave_3656_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Kingdom Stone Wave", 18);
#endif
        this->animations = &anim_kingdomstonewave_3656;
        if (!anim_kingdomstonewave_3656_initialized) {
            anim_kingdomstonewave_3656_initialized = true;
            images_kingdomstonewave_3656_0_0[0] = get_internal_image(15228);
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
FrameObject * create_kingdomstonewave_3656(int x, int y)
{
    return new (Active::pool.create()) KingdomStoneWave_3656(x, y);
}
static Image* images_bossbounceshot_3657_0_0[6];
static Direction direction_bossbounceshot_3657_0_0 = {0, 100, 100, 0, -1, images_bossbounceshot_3657_0_0, 6};
static Animation anim_bossbounceshot_3657_0 = {&direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, NULL, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0, &direction_bossbounceshot_3657_0_0};
static Animation * anim_array_bossbounceshot_3657[1] = {&anim_bossbounceshot_3657_0};
static Animations anim_bossbounceshot_3657 = {1, &anim_array_bossbounceshot_3657[0]};
static bool anim_bossbounceshot_3657_initialized;
class BossBounceShot_3657 : public Active
{
public:
    BossBounceShot_3657(int x, int y) : Active(x, y, BossBounceShot_3657_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_BounceShot", 15);
#endif
        this->animations = &anim_bossbounceshot_3657;
        if (!anim_bossbounceshot_3657_initialized) {
            anim_bossbounceshot_3657_initialized = true;
            images_bossbounceshot_3657_0_0[0] = get_internal_image(15315);
            images_bossbounceshot_3657_0_0[1] = get_internal_image(15316);
            images_bossbounceshot_3657_0_0[2] = get_internal_image(15317);
            images_bossbounceshot_3657_0_0[3] = get_internal_image(15318);
            images_bossbounceshot_3657_0_0[4] = get_internal_image(15319);
            images_bossbounceshot_3657_0_0[5] = get_internal_image(15320);
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
        ((BallMovement*)movement)->set_max_speed(60);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_bossbounceshot_3657(int x, int y)
{
    return new (Active::pool.create()) BossBounceShot_3657(x, y);
}
static Image* images_effectbounceshotdebris_3658_0_0[2];
static Direction direction_effectbounceshotdebris_3658_0_0 = {0, 50, 50, 0, -1, images_effectbounceshotdebris_3658_0_0, 2};
static Animation anim_effectbounceshotdebris_3658_0 = {&direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, NULL, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0, &direction_effectbounceshotdebris_3658_0_0};
static Animation * anim_array_effectbounceshotdebris_3658[1] = {&anim_effectbounceshotdebris_3658_0};
static Animations anim_effectbounceshotdebris_3658 = {1, &anim_array_effectbounceshotdebris_3658[0]};
static bool anim_effectbounceshotdebris_3658_initialized;
class EffectBounceShotDebris_3658 : public Active
{
public:
    EffectBounceShotDebris_3658(int x, int y) : Active(x, y, EffectBounceShotDebris_3658_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_BounceShotDebris", 23);
#endif
        this->animations = &anim_effectbounceshotdebris_3658;
        if (!anim_effectbounceshotdebris_3658_initialized) {
            anim_effectbounceshotdebris_3658_initialized = true;
            images_effectbounceshotdebris_3658_0_0[0] = get_internal_image(15321);
            images_effectbounceshotdebris_3658_0_0[1] = get_internal_image(15322);
        }
        collision_box = true;
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
        ((PinballMovement*)movements[0])->set_gravity(25);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_effectbounceshotdebris_3658(int x, int y)
{
    return new (Active::pool.create()) EffectBounceShotDebris_3658(x, y);
}
static Image* images_bossreflect_3659_0_0[1];
static Direction direction_bossreflect_3659_0_0 = {0, 100, 100, 0, -1, images_bossreflect_3659_0_0, 1};
static Animation anim_bossreflect_3659_0 = {&direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, NULL, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0, &direction_bossreflect_3659_0_0};
static Image* images_bossreflect_3659_2_0[6];
static Direction direction_bossreflect_3659_2_0 = {0, 50, 50, 4, -1, images_bossreflect_3659_2_0, 6};
static Image* images_bossreflect_3659_2_16[6];
static Direction direction_bossreflect_3659_2_16 = {16, 50, 50, 4, -1, images_bossreflect_3659_2_16, 6};
static Animation anim_bossreflect_3659_2 = {&direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, NULL, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, &direction_bossreflect_3659_2_16, NULL, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0, &direction_bossreflect_3659_2_0};
static Image* images_bossreflect_3659_5_0[6];
static Direction direction_bossreflect_3659_5_0 = {0, 50, 50, 0, 1, images_bossreflect_3659_5_0, 6};
static Image* images_bossreflect_3659_5_16[6];
static Direction direction_bossreflect_3659_5_16 = {16, 50, 50, 0, 1, images_bossreflect_3659_5_16, 6};
static Animation anim_bossreflect_3659_5 = {&direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, NULL, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, &direction_bossreflect_3659_5_16, NULL, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0, &direction_bossreflect_3659_5_0};
static Image* images_bossreflect_3659_8_0[6];
static Direction direction_bossreflect_3659_8_0 = {0, 50, 50, 0, 1, images_bossreflect_3659_8_0, 6};
static Image* images_bossreflect_3659_8_16[6];
static Direction direction_bossreflect_3659_8_16 = {16, 50, 50, 0, 1, images_bossreflect_3659_8_16, 6};
static Animation anim_bossreflect_3659_8 = {&direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, NULL, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, &direction_bossreflect_3659_8_16, NULL, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0, &direction_bossreflect_3659_8_0};
static Image* images_bossreflect_3659_9_0[1];
static Direction direction_bossreflect_3659_9_0 = {0, 50, 50, 0, -1, images_bossreflect_3659_9_0, 1};
static Animation anim_bossreflect_3659_9 = {&direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, NULL, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0, &direction_bossreflect_3659_9_0};
static Image* images_bossreflect_3659_10_0[6];
static Direction direction_bossreflect_3659_10_0 = {0, 100, 100, 0, 1, images_bossreflect_3659_10_0, 6};
static Animation anim_bossreflect_3659_10 = {&direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, NULL, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0, &direction_bossreflect_3659_10_0};
static Image* images_bossreflect_3659_11_0[9];
static Direction direction_bossreflect_3659_11_0 = {0, 100, 100, 5, -1, images_bossreflect_3659_11_0, 9};
static Image* images_bossreflect_3659_11_16[9];
static Direction direction_bossreflect_3659_11_16 = {16, 100, 100, 5, -1, images_bossreflect_3659_11_16, 9};
static Animation anim_bossreflect_3659_11 = {&direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, NULL, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, &direction_bossreflect_3659_11_16, NULL, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0, &direction_bossreflect_3659_11_0};
static Animation * anim_array_bossreflect_3659[12] = {&anim_bossreflect_3659_0, NULL, &anim_bossreflect_3659_2, NULL, NULL, &anim_bossreflect_3659_5, NULL, NULL, &anim_bossreflect_3659_8, &anim_bossreflect_3659_9, &anim_bossreflect_3659_10, &anim_bossreflect_3659_11};
static Animations anim_bossreflect_3659 = {12, &anim_array_bossreflect_3659[0]};
static bool anim_bossreflect_3659_initialized;
class BossReflect_3659 : public Active
{
public:
    BossReflect_3659(int x, int y) : Active(x, y, BossReflect_3659_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Reflect", 12);
#endif
        this->animations = &anim_bossreflect_3659;
        if (!anim_bossreflect_3659_initialized) {
            anim_bossreflect_3659_initialized = true;
            images_bossreflect_3659_0_0[0] = get_internal_image(2104);
            images_bossreflect_3659_2_0[0] = get_internal_image(7271);
            images_bossreflect_3659_2_0[1] = get_internal_image(4534);
            images_bossreflect_3659_2_0[2] = get_internal_image(7272);
            images_bossreflect_3659_2_0[3] = get_internal_image(4392);
            images_bossreflect_3659_2_0[4] = get_internal_image(7285);
            images_bossreflect_3659_2_0[5] = get_internal_image(4394);
            images_bossreflect_3659_2_16[0] = get_internal_image(4396);
            images_bossreflect_3659_2_16[1] = get_internal_image(7273);
            images_bossreflect_3659_2_16[2] = get_internal_image(7276);
            images_bossreflect_3659_2_16[3] = get_internal_image(7277);
            images_bossreflect_3659_2_16[4] = get_internal_image(7284);
            images_bossreflect_3659_2_16[5] = get_internal_image(7278);
            images_bossreflect_3659_5_0[0] = get_internal_image(12100);
            images_bossreflect_3659_5_0[1] = get_internal_image(12103);
            images_bossreflect_3659_5_0[2] = get_internal_image(12098);
            images_bossreflect_3659_5_0[3] = get_internal_image(12099);
            images_bossreflect_3659_5_0[4] = get_internal_image(12101);
            images_bossreflect_3659_5_0[5] = get_internal_image(12102);
            images_bossreflect_3659_5_16[0] = get_internal_image(12097);
            images_bossreflect_3659_5_16[1] = get_internal_image(12104);
            images_bossreflect_3659_5_16[2] = get_internal_image(12105);
            images_bossreflect_3659_5_16[3] = get_internal_image(12106);
            images_bossreflect_3659_5_16[4] = get_internal_image(12107);
            images_bossreflect_3659_5_16[5] = get_internal_image(12108);
            images_bossreflect_3659_8_0[0] = get_internal_image(4457);
            images_bossreflect_3659_8_0[1] = get_internal_image(11582);
            images_bossreflect_3659_8_0[2] = get_internal_image(11583);
            images_bossreflect_3659_8_0[3] = get_internal_image(11581);
            images_bossreflect_3659_8_0[4] = get_internal_image(4525);
            images_bossreflect_3659_8_0[5] = get_internal_image(4656);
            images_bossreflect_3659_8_16[0] = get_internal_image(4521);
            images_bossreflect_3659_8_16[1] = get_internal_image(11584);
            images_bossreflect_3659_8_16[2] = get_internal_image(11585);
            images_bossreflect_3659_8_16[3] = get_internal_image(11586);
            images_bossreflect_3659_8_16[4] = get_internal_image(4652);
            images_bossreflect_3659_8_16[5] = get_internal_image(4654);
            images_bossreflect_3659_9_0[0] = get_internal_image(8574);
            images_bossreflect_3659_10_0[0] = get_internal_image(7711);
            images_bossreflect_3659_10_0[1] = get_internal_image(8372);
            images_bossreflect_3659_10_0[2] = get_internal_image(8376);
            images_bossreflect_3659_10_0[3] = get_internal_image(8377);
            images_bossreflect_3659_10_0[4] = get_internal_image(8378);
            images_bossreflect_3659_10_0[5] = get_internal_image(8379);
            images_bossreflect_3659_11_0[0] = get_internal_image(15297);
            images_bossreflect_3659_11_0[1] = get_internal_image(15298);
            images_bossreflect_3659_11_0[2] = get_internal_image(15299);
            images_bossreflect_3659_11_0[3] = get_internal_image(15300);
            images_bossreflect_3659_11_0[4] = get_internal_image(15301);
            images_bossreflect_3659_11_0[5] = get_internal_image(15302);
            images_bossreflect_3659_11_0[6] = get_internal_image(15303);
            images_bossreflect_3659_11_0[7] = get_internal_image(15304);
            images_bossreflect_3659_11_0[8] = get_internal_image(15305);
            images_bossreflect_3659_11_16[0] = get_internal_image(15306);
            images_bossreflect_3659_11_16[1] = get_internal_image(15307);
            images_bossreflect_3659_11_16[2] = get_internal_image(15308);
            images_bossreflect_3659_11_16[3] = get_internal_image(15309);
            images_bossreflect_3659_11_16[4] = get_internal_image(15310);
            images_bossreflect_3659_11_16[5] = get_internal_image(15311);
            images_bossreflect_3659_11_16[6] = get_internal_image(15312);
            images_bossreflect_3659_11_16[7] = get_internal_image(15313);
            images_bossreflect_3659_11_16[8] = get_internal_image(15314);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        flags |= GLOBAL;
        alterables = &global_data_968_boss_reflect.value;
        if (!global_data_968_boss_reflect.init) {
            alterables->values.set(7, 5);
            global_data_968_boss_reflect.init = true;
        }
    }
};
FrameObject * create_bossreflect_3659(int x, int y)
{
    return new (Active::pool.create()) BossReflect_3659(x, y);
}
class FDPlateGlass_3660 : public Backdrop
{
public:
    FDPlateGlass_3660(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PlateGlass", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11623);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdplateglass_3660(int x, int y)
{
    return new (Backdrop::pool.create()) FDPlateGlass_3660(x, y);
}
class FDPowerCore2_3661 : public Backdrop
{
public:
    FDPowerCore2_3661(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PowerCore 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15230);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_fdpowercore2_3661(int x, int y)
{
    return new (Backdrop::pool.create()) FDPowerCore2_3661(x, y);
}
class FDPowerCore3_3662 : public Backdrop
{
public:
    FDPowerCore3_3662(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PowerCore 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15229);
        width = image->width;
        height = image->height;
        set_shader(Render::ADDITIVE);
    }
};
FrameObject * create_fdpowercore3_3662(int x, int y)
{
    return new (Backdrop::pool.create()) FDPowerCore3_3662(x, y);
}
class FDPowerCore1_3663 : public Backdrop
{
public:
    FDPowerCore1_3663(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_PowerCore 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15249);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdpowercore1_3663(int x, int y)
{
    return new (Backdrop::pool.create()) FDPowerCore1_3663(x, y);
}
class FDCoreTerminal_3664 : public Backdrop
{
public:
    FDCoreTerminal_3664(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CoreTerminal", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15237);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcoreterminal_3664(int x, int y)
{
    return new (Backdrop::pool.create()) FDCoreTerminal_3664(x, y);
}
static Image* images_kingdomstone_3665_0_0[3];
static Direction direction_kingdomstone_3665_0_0 = {0, 14, 14, 0, -1, images_kingdomstone_3665_0_0, 3};
static Animation anim_kingdomstone_3665_0 = {&direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, NULL, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0, &direction_kingdomstone_3665_0_0};
static Animation * anim_array_kingdomstone_3665[1] = {&anim_kingdomstone_3665_0};
static Animations anim_kingdomstone_3665 = {1, &anim_array_kingdomstone_3665[0]};
static bool anim_kingdomstone_3665_initialized;
class KingdomStone_3665 : public Active
{
public:
    KingdomStone_3665(int x, int y) : Active(x, y, KingdomStone_3665_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Kingdom Stone", 13);
#endif
        this->animations = &anim_kingdomstone_3665;
        if (!anim_kingdomstone_3665_initialized) {
            anim_kingdomstone_3665_initialized = true;
            images_kingdomstone_3665_0_0[0] = get_internal_image(1600);
            images_kingdomstone_3665_0_0[1] = get_internal_image(492);
            images_kingdomstone_3665_0_0[2] = get_internal_image(640);
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
FrameObject * create_kingdomstone_3665(int x, int y)
{
    return new (Active::pool.create()) KingdomStone_3665(x, y);
}
static Image* images_computerterminal_3666_0_0[4];
static Direction direction_computerterminal_3666_0_0 = {0, 16, 16, 0, -1, images_computerterminal_3666_0_0, 4};
static Image* images_computerterminal_3666_0_1[1];
static Direction direction_computerterminal_3666_0_1 = {1, 50, 50, 0, 1, images_computerterminal_3666_0_1, 1};
static Animation anim_computerterminal_3666_0 = {&direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_1, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0, &direction_computerterminal_3666_0_0};
static Animation * anim_array_computerterminal_3666[1] = {&anim_computerterminal_3666_0};
static Animations anim_computerterminal_3666 = {1, &anim_array_computerterminal_3666[0]};
static bool anim_computerterminal_3666_initialized;
class ComputerTerminal_3666 : public Active
{
public:
    ComputerTerminal_3666(int x, int y) : Active(x, y, ComputerTerminal_3666_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ComputerTerminal", 16);
#endif
        this->animations = &anim_computerterminal_3666;
        if (!anim_computerterminal_3666_initialized) {
            anim_computerterminal_3666_initialized = true;
            images_computerterminal_3666_0_0[0] = get_internal_image(15205);
            images_computerterminal_3666_0_0[1] = get_internal_image(15203);
            images_computerterminal_3666_0_0[2] = get_internal_image(15217);
            images_computerterminal_3666_0_0[3] = get_internal_image(15218);
            images_computerterminal_3666_0_1[0] = get_internal_image(2985);
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
FrameObject * create_computerterminal_3666(int x, int y)
{
    return new (Active::pool.create()) ComputerTerminal_3666(x, y);
}
static Image* images_computerterminal3_3667_0_0[1];
static Direction direction_computerterminal3_3667_0_0 = {0, 50, 50, 0, 1, images_computerterminal3_3667_0_0, 1};
static Animation anim_computerterminal3_3667_0 = {&direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, NULL, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0, &direction_computerterminal3_3667_0_0};
static Animation * anim_array_computerterminal3_3667[1] = {&anim_computerterminal3_3667_0};
static Animations anim_computerterminal3_3667 = {1, &anim_array_computerterminal3_3667[0]};
static bool anim_computerterminal3_3667_initialized;
class ComputerTerminal3_3667 : public Active
{
public:
    ComputerTerminal3_3667(int x, int y) : Active(x, y, ComputerTerminal3_3667_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ComputerTerminal 3", 18);
#endif
        this->animations = &anim_computerterminal3_3667;
        if (!anim_computerterminal3_3667_initialized) {
            anim_computerterminal3_3667_initialized = true;
            images_computerterminal3_3667_0_0[0] = get_internal_image(8036);
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
FrameObject * create_computerterminal3_3667(int x, int y)
{
    return new (Active::pool.create()) ComputerTerminal3_3667(x, y);
}
static Image* images_computerterminal2_3668_0_0[5];
static Direction direction_computerterminal2_3668_0_0 = {0, 16, 16, 0, -1, images_computerterminal2_3668_0_0, 5};
static Animation anim_computerterminal2_3668_0 = {&direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, NULL, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0, &direction_computerterminal2_3668_0_0};
static Animation * anim_array_computerterminal2_3668[1] = {&anim_computerterminal2_3668_0};
static Animations anim_computerterminal2_3668 = {1, &anim_array_computerterminal2_3668[0]};
static bool anim_computerterminal2_3668_initialized;
class ComputerTerminal2_3668 : public Active
{
public:
    ComputerTerminal2_3668(int x, int y) : Active(x, y, ComputerTerminal2_3668_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ComputerTerminal 2", 18);
#endif
        this->animations = &anim_computerterminal2_3668;
        if (!anim_computerterminal2_3668_initialized) {
            anim_computerterminal2_3668_initialized = true;
            images_computerterminal2_3668_0_0[0] = get_internal_image(15243);
            images_computerterminal2_3668_0_0[1] = get_internal_image(15245);
            images_computerterminal2_3668_0_0[2] = get_internal_image(15246);
            images_computerterminal2_3668_0_0[3] = get_internal_image(15247);
            images_computerterminal2_3668_0_0[4] = get_internal_image(15248);
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
FrameObject * create_computerterminal2_3668(int x, int y)
{
    return new (Active::pool.create()) ComputerTerminal2_3668(x, y);
}
class FDHandlebar_3669 : public Backdrop
{
public:
    FDHandlebar_3669(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11730);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdhandlebar_3669(int x, int y)
{
    return new (Backdrop::pool.create()) FDHandlebar_3669(x, y);
}
class DialogData_3670 : public Text
{
public:
    DialogData_3670(int x, int y) : Text(x, y, DialogData_3670_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("05 00 to_03_14 According to our scans, the Kingdom Stone has enough energy to double the size of his army.", 106));
        add_line(std::string("05 00 to_03_15 If he gets it... he'll be unstoppable.", 53));
        add_line(std::string("12 00 br_11_01 Remove the device.", 33));
        add_line(std::string("12 00 br_11_02 I won't ask you again.", 37));
        add_line(std::string("12 00 br_11_03 Throw it to me.", 30));
        add_line(std::string("12 00 br_11_04 Just like I said... right in harm's way.", 55));
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
FrameObject * create_dialogdata_3670(int x, int y)
{
    return new (Text::pool.create()) DialogData_3670(x, y);
}
static Image* images_bossmmillafootback_3671_0_0[1];
static Direction direction_bossmmillafootback_3671_0_0 = {0, 50, 50, 0, 1, images_bossmmillafootback_3671_0_0, 1};
static Image* images_bossmmillafootback_3671_0_1[1];
static Direction direction_bossmmillafootback_3671_0_1 = {1, 50, 50, 0, 1, images_bossmmillafootback_3671_0_1, 1};
static Image* images_bossmmillafootback_3671_0_16[1];
static Direction direction_bossmmillafootback_3671_0_16 = {16, 50, 50, 0, 1, images_bossmmillafootback_3671_0_16, 1};
static Image* images_bossmmillafootback_3671_0_17[1];
static Direction direction_bossmmillafootback_3671_0_17 = {17, 50, 50, 0, 1, images_bossmmillafootback_3671_0_17, 1};
static Animation anim_bossmmillafootback_3671_0 = {&direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_1, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_16, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_17, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0, &direction_bossmmillafootback_3671_0_0};
static Animation * anim_array_bossmmillafootback_3671[1] = {&anim_bossmmillafootback_3671_0};
static Animations anim_bossmmillafootback_3671 = {1, &anim_array_bossmmillafootback_3671[0]};
static bool anim_bossmmillafootback_3671_initialized;
class BossMMillaFootBack_3671 : public Active
{
public:
    BossMMillaFootBack_3671(int x, int y) : Active(x, y, BossMMillaFootBack_3671_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaFootBack", 19);
#endif
        this->animations = &anim_bossmmillafootback_3671;
        if (!anim_bossmmillafootback_3671_initialized) {
            anim_bossmmillafootback_3671_initialized = true;
            images_bossmmillafootback_3671_0_0[0] = get_internal_image(15215);
            images_bossmmillafootback_3671_0_1[0] = get_internal_image(15224);
            images_bossmmillafootback_3671_0_16[0] = get_internal_image(15225);
            images_bossmmillafootback_3671_0_17[0] = get_internal_image(15227);
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
FrameObject * create_bossmmillafootback_3671(int x, int y)
{
    return new (Active::pool.create()) BossMMillaFootBack_3671(x, y);
}
static Image* images_bossmmillaarmback_3672_0_0[1];
static Direction direction_bossmmillaarmback_3672_0_0 = {0, 50, 50, 0, 1, images_bossmmillaarmback_3672_0_0, 1};
static Image* images_bossmmillaarmback_3672_0_1[1];
static Direction direction_bossmmillaarmback_3672_0_1 = {1, 50, 50, 0, 1, images_bossmmillaarmback_3672_0_1, 1};
static Image* images_bossmmillaarmback_3672_0_16[1];
static Direction direction_bossmmillaarmback_3672_0_16 = {16, 50, 50, 0, 1, images_bossmmillaarmback_3672_0_16, 1};
static Image* images_bossmmillaarmback_3672_0_17[1];
static Direction direction_bossmmillaarmback_3672_0_17 = {17, 50, 50, 0, 1, images_bossmmillaarmback_3672_0_17, 1};
static Animation anim_bossmmillaarmback_3672_0 = {&direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_1, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_16, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_17, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0, &direction_bossmmillaarmback_3672_0_0};
static Animation * anim_array_bossmmillaarmback_3672[1] = {&anim_bossmmillaarmback_3672_0};
static Animations anim_bossmmillaarmback_3672 = {1, &anim_array_bossmmillaarmback_3672[0]};
static bool anim_bossmmillaarmback_3672_initialized;
class BossMMillaArmBack_3672 : public Active
{
public:
    BossMMillaArmBack_3672(int x, int y) : Active(x, y, BossMMillaArmBack_3672_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaArmBack", 18);
#endif
        this->animations = &anim_bossmmillaarmback_3672;
        if (!anim_bossmmillaarmback_3672_initialized) {
            anim_bossmmillaarmback_3672_initialized = true;
            images_bossmmillaarmback_3672_0_0[0] = get_internal_image(15231);
            images_bossmmillaarmback_3672_0_1[0] = get_internal_image(15232);
            images_bossmmillaarmback_3672_0_16[0] = get_internal_image(15233);
            images_bossmmillaarmback_3672_0_17[0] = get_internal_image(15234);
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
FrameObject * create_bossmmillaarmback_3672(int x, int y)
{
    return new (Active::pool.create()) BossMMillaArmBack_3672(x, y);
}
static Image* images_bossmmillapawback_3673_0_0[1];
static Direction direction_bossmmillapawback_3673_0_0 = {0, 0, 0, 0, 1, images_bossmmillapawback_3673_0_0, 1};
static Image* images_bossmmillapawback_3673_0_1[1];
static Direction direction_bossmmillapawback_3673_0_1 = {1, 0, 0, 0, 1, images_bossmmillapawback_3673_0_1, 1};
static Image* images_bossmmillapawback_3673_0_16[1];
static Direction direction_bossmmillapawback_3673_0_16 = {16, 0, 0, 0, 1, images_bossmmillapawback_3673_0_16, 1};
static Image* images_bossmmillapawback_3673_0_17[1];
static Direction direction_bossmmillapawback_3673_0_17 = {17, 0, 0, 0, 1, images_bossmmillapawback_3673_0_17, 1};
static Animation anim_bossmmillapawback_3673_0 = {&direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_1, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_16, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_17, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0, &direction_bossmmillapawback_3673_0_0};
static Animation * anim_array_bossmmillapawback_3673[1] = {&anim_bossmmillapawback_3673_0};
static Animations anim_bossmmillapawback_3673 = {1, &anim_array_bossmmillapawback_3673[0]};
static bool anim_bossmmillapawback_3673_initialized;
class BossMMillaPawBack_3673 : public Active
{
public:
    BossMMillaPawBack_3673(int x, int y) : Active(x, y, BossMMillaPawBack_3673_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaPawBack", 18);
#endif
        this->animations = &anim_bossmmillapawback_3673;
        if (!anim_bossmmillapawback_3673_initialized) {
            anim_bossmmillapawback_3673_initialized = true;
            images_bossmmillapawback_3673_0_0[0] = get_internal_image(15235);
            images_bossmmillapawback_3673_0_1[0] = get_internal_image(15236);
            images_bossmmillapawback_3673_0_16[0] = get_internal_image(15238);
            images_bossmmillapawback_3673_0_17[0] = get_internal_image(15239);
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
FrameObject * create_bossmmillapawback_3673(int x, int y)
{
    return new (Active::pool.create()) BossMMillaPawBack_3673(x, y);
}
static Image* images_bossmmillaearback_3674_0_0[1];
static Direction direction_bossmmillaearback_3674_0_0 = {0, 50, 50, 0, 1, images_bossmmillaearback_3674_0_0, 1};
static Image* images_bossmmillaearback_3674_0_16[1];
static Direction direction_bossmmillaearback_3674_0_16 = {16, 50, 50, 0, 1, images_bossmmillaearback_3674_0_16, 1};
static Animation anim_bossmmillaearback_3674_0 = {&direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, NULL, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, &direction_bossmmillaearback_3674_0_16, NULL, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0, &direction_bossmmillaearback_3674_0_0};
static Animation * anim_array_bossmmillaearback_3674[1] = {&anim_bossmmillaearback_3674_0};
static Animations anim_bossmmillaearback_3674 = {1, &anim_array_bossmmillaearback_3674[0]};
static bool anim_bossmmillaearback_3674_initialized;
class BossMMillaEarBack_3674 : public Active
{
public:
    BossMMillaEarBack_3674(int x, int y) : Active(x, y, BossMMillaEarBack_3674_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaEarBack", 18);
#endif
        this->animations = &anim_bossmmillaearback_3674;
        if (!anim_bossmmillaearback_3674_initialized) {
            anim_bossmmillaearback_3674_initialized = true;
            images_bossmmillaearback_3674_0_0[0] = get_internal_image(15240);
            images_bossmmillaearback_3674_0_16[0] = get_internal_image(15241);
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
FrameObject * create_bossmmillaearback_3674(int x, int y)
{
    return new (Active::pool.create()) BossMMillaEarBack_3674(x, y);
}
static Image* images_bossmmillatail_3675_0_0[1];
static Direction direction_bossmmillatail_3675_0_0 = {0, 50, 50, 0, 1, images_bossmmillatail_3675_0_0, 1};
static Image* images_bossmmillatail_3675_0_1[1];
static Direction direction_bossmmillatail_3675_0_1 = {1, 50, 50, 0, 1, images_bossmmillatail_3675_0_1, 1};
static Image* images_bossmmillatail_3675_0_16[1];
static Direction direction_bossmmillatail_3675_0_16 = {16, 50, 50, 0, 1, images_bossmmillatail_3675_0_16, 1};
static Image* images_bossmmillatail_3675_0_17[1];
static Direction direction_bossmmillatail_3675_0_17 = {17, 50, 50, 0, 1, images_bossmmillatail_3675_0_17, 1};
static Animation anim_bossmmillatail_3675_0 = {&direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_1, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_16, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_17, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0, &direction_bossmmillatail_3675_0_0};
static Animation * anim_array_bossmmillatail_3675[1] = {&anim_bossmmillatail_3675_0};
static Animations anim_bossmmillatail_3675 = {1, &anim_array_bossmmillatail_3675[0]};
static bool anim_bossmmillatail_3675_initialized;
class BossMMillaTail_3675 : public Active
{
public:
    BossMMillaTail_3675(int x, int y) : Active(x, y, BossMMillaTail_3675_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaTail", 15);
#endif
        this->animations = &anim_bossmmillatail_3675;
        if (!anim_bossmmillatail_3675_initialized) {
            anim_bossmmillatail_3675_initialized = true;
            images_bossmmillatail_3675_0_0[0] = get_internal_image(15242);
            images_bossmmillatail_3675_0_1[0] = get_internal_image(15244);
            images_bossmmillatail_3675_0_16[0] = get_internal_image(15250);
            images_bossmmillatail_3675_0_17[0] = get_internal_image(15251);
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
FrameObject * create_bossmmillatail_3675(int x, int y)
{
    return new (Active::pool.create()) BossMMillaTail_3675(x, y);
}
static Image* images_bossmmillabody_3676_0_0[1];
static Direction direction_bossmmillabody_3676_0_0 = {0, 50, 50, 0, 1, images_bossmmillabody_3676_0_0, 1};
static Image* images_bossmmillabody_3676_0_1[1];
static Direction direction_bossmmillabody_3676_0_1 = {1, 50, 50, 0, 1, images_bossmmillabody_3676_0_1, 1};
static Image* images_bossmmillabody_3676_0_16[1];
static Direction direction_bossmmillabody_3676_0_16 = {16, 50, 50, 0, 1, images_bossmmillabody_3676_0_16, 1};
static Image* images_bossmmillabody_3676_0_17[1];
static Direction direction_bossmmillabody_3676_0_17 = {17, 50, 50, 0, 1, images_bossmmillabody_3676_0_17, 1};
static Animation anim_bossmmillabody_3676_0 = {&direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_1, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_16, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_17, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0, &direction_bossmmillabody_3676_0_0};
static Animation * anim_array_bossmmillabody_3676[1] = {&anim_bossmmillabody_3676_0};
static Animations anim_bossmmillabody_3676 = {1, &anim_array_bossmmillabody_3676[0]};
static bool anim_bossmmillabody_3676_initialized;
class BossMMillaBody_3676 : public Active
{
public:
    BossMMillaBody_3676(int x, int y) : Active(x, y, BossMMillaBody_3676_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaBody", 15);
#endif
        this->animations = &anim_bossmmillabody_3676;
        if (!anim_bossmmillabody_3676_initialized) {
            anim_bossmmillabody_3676_initialized = true;
            images_bossmmillabody_3676_0_0[0] = get_internal_image(15252);
            images_bossmmillabody_3676_0_1[0] = get_internal_image(15253);
            images_bossmmillabody_3676_0_16[0] = get_internal_image(15254);
            images_bossmmillabody_3676_0_17[0] = get_internal_image(15255);
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
FrameObject * create_bossmmillabody_3676(int x, int y)
{
    return new (Active::pool.create()) BossMMillaBody_3676(x, y);
}
static Image* images_bossmmillaleg_3677_0_0[1];
static Direction direction_bossmmillaleg_3677_0_0 = {0, 50, 50, 0, 1, images_bossmmillaleg_3677_0_0, 1};
static Image* images_bossmmillaleg_3677_0_1[1];
static Direction direction_bossmmillaleg_3677_0_1 = {1, 50, 50, 0, 1, images_bossmmillaleg_3677_0_1, 1};
static Image* images_bossmmillaleg_3677_0_16[1];
static Direction direction_bossmmillaleg_3677_0_16 = {16, 50, 50, 0, 1, images_bossmmillaleg_3677_0_16, 1};
static Image* images_bossmmillaleg_3677_0_17[1];
static Direction direction_bossmmillaleg_3677_0_17 = {17, 50, 50, 0, 1, images_bossmmillaleg_3677_0_17, 1};
static Animation anim_bossmmillaleg_3677_0 = {&direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_1, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_16, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_17, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0, &direction_bossmmillaleg_3677_0_0};
static Animation * anim_array_bossmmillaleg_3677[1] = {&anim_bossmmillaleg_3677_0};
static Animations anim_bossmmillaleg_3677 = {1, &anim_array_bossmmillaleg_3677[0]};
static bool anim_bossmmillaleg_3677_initialized;
class BossMMillaLeg_3677 : public Active
{
public:
    BossMMillaLeg_3677(int x, int y) : Active(x, y, BossMMillaLeg_3677_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaLeg", 14);
#endif
        this->animations = &anim_bossmmillaleg_3677;
        if (!anim_bossmmillaleg_3677_initialized) {
            anim_bossmmillaleg_3677_initialized = true;
            images_bossmmillaleg_3677_0_0[0] = get_internal_image(15242);
            images_bossmmillaleg_3677_0_1[0] = get_internal_image(15244);
            images_bossmmillaleg_3677_0_16[0] = get_internal_image(15250);
            images_bossmmillaleg_3677_0_17[0] = get_internal_image(15251);
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
FrameObject * create_bossmmillaleg_3677(int x, int y)
{
    return new (Active::pool.create()) BossMMillaLeg_3677(x, y);
}
static Image* images_bossmmillaarmfront_3678_0_0[1];
static Direction direction_bossmmillaarmfront_3678_0_0 = {0, 50, 50, 0, 1, images_bossmmillaarmfront_3678_0_0, 1};
static Image* images_bossmmillaarmfront_3678_0_1[1];
static Direction direction_bossmmillaarmfront_3678_0_1 = {1, 50, 50, 0, 1, images_bossmmillaarmfront_3678_0_1, 1};
static Image* images_bossmmillaarmfront_3678_0_16[1];
static Direction direction_bossmmillaarmfront_3678_0_16 = {16, 50, 50, 0, 1, images_bossmmillaarmfront_3678_0_16, 1};
static Image* images_bossmmillaarmfront_3678_0_17[1];
static Direction direction_bossmmillaarmfront_3678_0_17 = {17, 50, 50, 0, 1, images_bossmmillaarmfront_3678_0_17, 1};
static Animation anim_bossmmillaarmfront_3678_0 = {&direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_1, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_16, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_17, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0, &direction_bossmmillaarmfront_3678_0_0};
static Animation * anim_array_bossmmillaarmfront_3678[1] = {&anim_bossmmillaarmfront_3678_0};
static Animations anim_bossmmillaarmfront_3678 = {1, &anim_array_bossmmillaarmfront_3678[0]};
static bool anim_bossmmillaarmfront_3678_initialized;
class BossMMillaArmFront_3678 : public Active
{
public:
    BossMMillaArmFront_3678(int x, int y) : Active(x, y, BossMMillaArmFront_3678_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaArmFront", 19);
#endif
        this->animations = &anim_bossmmillaarmfront_3678;
        if (!anim_bossmmillaarmfront_3678_initialized) {
            anim_bossmmillaarmfront_3678_initialized = true;
            images_bossmmillaarmfront_3678_0_0[0] = get_internal_image(15242);
            images_bossmmillaarmfront_3678_0_1[0] = get_internal_image(15244);
            images_bossmmillaarmfront_3678_0_16[0] = get_internal_image(15250);
            images_bossmmillaarmfront_3678_0_17[0] = get_internal_image(15251);
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
FrameObject * create_bossmmillaarmfront_3678(int x, int y)
{
    return new (Active::pool.create()) BossMMillaArmFront_3678(x, y);
}
static Image* images_bossmmillafoot_3679_0_0[1];
static Direction direction_bossmmillafoot_3679_0_0 = {0, 50, 50, 0, 1, images_bossmmillafoot_3679_0_0, 1};
static Image* images_bossmmillafoot_3679_0_1[1];
static Direction direction_bossmmillafoot_3679_0_1 = {1, 50, 50, 0, 1, images_bossmmillafoot_3679_0_1, 1};
static Image* images_bossmmillafoot_3679_0_16[1];
static Direction direction_bossmmillafoot_3679_0_16 = {16, 50, 50, 0, 1, images_bossmmillafoot_3679_0_16, 1};
static Image* images_bossmmillafoot_3679_0_17[1];
static Direction direction_bossmmillafoot_3679_0_17 = {17, 50, 50, 0, 1, images_bossmmillafoot_3679_0_17, 1};
static Animation anim_bossmmillafoot_3679_0 = {&direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_1, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_16, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_17, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0, &direction_bossmmillafoot_3679_0_0};
static Animation * anim_array_bossmmillafoot_3679[1] = {&anim_bossmmillafoot_3679_0};
static Animations anim_bossmmillafoot_3679 = {1, &anim_array_bossmmillafoot_3679[0]};
static bool anim_bossmmillafoot_3679_initialized;
class BossMMillaFoot_3679 : public Active
{
public:
    BossMMillaFoot_3679(int x, int y) : Active(x, y, BossMMillaFoot_3679_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaFoot", 15);
#endif
        this->animations = &anim_bossmmillafoot_3679;
        if (!anim_bossmmillafoot_3679_initialized) {
            anim_bossmmillafoot_3679_initialized = true;
            images_bossmmillafoot_3679_0_0[0] = get_internal_image(15256);
            images_bossmmillafoot_3679_0_1[0] = get_internal_image(15257);
            images_bossmmillafoot_3679_0_16[0] = get_internal_image(15258);
            images_bossmmillafoot_3679_0_17[0] = get_internal_image(15259);
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
FrameObject * create_bossmmillafoot_3679(int x, int y)
{
    return new (Active::pool.create()) BossMMillaFoot_3679(x, y);
}
static Image* images_bossmmillahead_3680_0_0[6];
static Direction direction_bossmmillahead_3680_0_0 = {0, 0, 0, 0, -1, images_bossmmillahead_3680_0_0, 6};
static Image* images_bossmmillahead_3680_0_1[6];
static Direction direction_bossmmillahead_3680_0_1 = {1, 0, 0, 0, -1, images_bossmmillahead_3680_0_1, 6};
static Image* images_bossmmillahead_3680_0_16[6];
static Direction direction_bossmmillahead_3680_0_16 = {16, 0, 0, 0, -1, images_bossmmillahead_3680_0_16, 6};
static Image* images_bossmmillahead_3680_0_17[6];
static Direction direction_bossmmillahead_3680_0_17 = {17, 0, 0, 0, -1, images_bossmmillahead_3680_0_17, 6};
static Image* images_bossmmillahead_3680_0_24[1];
static Direction direction_bossmmillahead_3680_0_24 = {24, 50, 50, 0, 1, images_bossmmillahead_3680_0_24, 1};
static Animation anim_bossmmillahead_3680_0 = {&direction_bossmmillahead_3680_0_0, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_1, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_16, &direction_bossmmillahead_3680_0_17, &direction_bossmmillahead_3680_0_17, &direction_bossmmillahead_3680_0_17, &direction_bossmmillahead_3680_0_17, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, &direction_bossmmillahead_3680_0_24, NULL, &direction_bossmmillahead_3680_0_0, &direction_bossmmillahead_3680_0_0, &direction_bossmmillahead_3680_0_0};
static Image* images_bossmmillahead_3680_7_0[6];
static Direction direction_bossmmillahead_3680_7_0 = {0, 0, 0, 0, -1, images_bossmmillahead_3680_7_0, 6};
static Image* images_bossmmillahead_3680_7_1[6];
static Direction direction_bossmmillahead_3680_7_1 = {1, 0, 0, 0, -1, images_bossmmillahead_3680_7_1, 6};
static Image* images_bossmmillahead_3680_7_16[6];
static Direction direction_bossmmillahead_3680_7_16 = {16, 0, 0, 0, -1, images_bossmmillahead_3680_7_16, 6};
static Image* images_bossmmillahead_3680_7_17[6];
static Direction direction_bossmmillahead_3680_7_17 = {17, 0, 0, 0, -1, images_bossmmillahead_3680_7_17, 6};
static Image* images_bossmmillahead_3680_7_24[1];
static Direction direction_bossmmillahead_3680_7_24 = {24, 50, 50, 0, 1, images_bossmmillahead_3680_7_24, 1};
static Animation anim_bossmmillahead_3680_7 = {&direction_bossmmillahead_3680_7_0, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_1, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_16, &direction_bossmmillahead_3680_7_17, &direction_bossmmillahead_3680_7_17, &direction_bossmmillahead_3680_7_17, &direction_bossmmillahead_3680_7_17, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, &direction_bossmmillahead_3680_7_24, NULL, &direction_bossmmillahead_3680_7_0, &direction_bossmmillahead_3680_7_0, &direction_bossmmillahead_3680_7_0};
static Animation * anim_array_bossmmillahead_3680[8] = {&anim_bossmmillahead_3680_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossmmillahead_3680_7};
static Animations anim_bossmmillahead_3680 = {8, &anim_array_bossmmillahead_3680[0]};
static bool anim_bossmmillahead_3680_initialized;
class BossMMillaHead_3680 : public Active
{
public:
    BossMMillaHead_3680(int x, int y) : Active(x, y, BossMMillaHead_3680_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_MMillaHead", 15);
#endif
        this->animations = &anim_bossmmillahead_3680;
        if (!anim_bossmmillahead_3680_initialized) {
            anim_bossmmillahead_3680_initialized = true;
            images_bossmmillahead_3680_0_0[0] = get_internal_image(15260);
            images_bossmmillahead_3680_0_0[1] = get_internal_image(15261);
            images_bossmmillahead_3680_0_0[2] = get_internal_image(15262);
            images_bossmmillahead_3680_0_0[3] = get_internal_image(15263);
            images_bossmmillahead_3680_0_0[4] = get_internal_image(15264);
            images_bossmmillahead_3680_0_0[5] = get_internal_image(15260);
            images_bossmmillahead_3680_0_1[0] = get_internal_image(15265);
            images_bossmmillahead_3680_0_1[1] = get_internal_image(15266);
            images_bossmmillahead_3680_0_1[2] = get_internal_image(15267);
            images_bossmmillahead_3680_0_1[3] = get_internal_image(15268);
            images_bossmmillahead_3680_0_1[4] = get_internal_image(15269);
            images_bossmmillahead_3680_0_1[5] = get_internal_image(15265);
            images_bossmmillahead_3680_0_16[0] = get_internal_image(15270);
            images_bossmmillahead_3680_0_16[1] = get_internal_image(15271);
            images_bossmmillahead_3680_0_16[2] = get_internal_image(15272);
            images_bossmmillahead_3680_0_16[3] = get_internal_image(15273);
            images_bossmmillahead_3680_0_16[4] = get_internal_image(15274);
            images_bossmmillahead_3680_0_16[5] = get_internal_image(15270);
            images_bossmmillahead_3680_0_17[0] = get_internal_image(15275);
            images_bossmmillahead_3680_0_17[1] = get_internal_image(15276);
            images_bossmmillahead_3680_0_17[2] = get_internal_image(15277);
            images_bossmmillahead_3680_0_17[3] = get_internal_image(15278);
            images_bossmmillahead_3680_0_17[4] = get_internal_image(15279);
            images_bossmmillahead_3680_0_17[5] = get_internal_image(15275);
            images_bossmmillahead_3680_0_24[0] = get_internal_image(15280);
            images_bossmmillahead_3680_7_0[0] = get_internal_image(15410);
            images_bossmmillahead_3680_7_0[1] = get_internal_image(15409);
            images_bossmmillahead_3680_7_0[2] = get_internal_image(15411);
            images_bossmmillahead_3680_7_0[3] = get_internal_image(15410);
            images_bossmmillahead_3680_7_0[4] = get_internal_image(15410);
            images_bossmmillahead_3680_7_0[5] = get_internal_image(15410);
            images_bossmmillahead_3680_7_1[0] = get_internal_image(15412);
            images_bossmmillahead_3680_7_1[1] = get_internal_image(15413);
            images_bossmmillahead_3680_7_1[2] = get_internal_image(15414);
            images_bossmmillahead_3680_7_1[3] = get_internal_image(15412);
            images_bossmmillahead_3680_7_1[4] = get_internal_image(15412);
            images_bossmmillahead_3680_7_1[5] = get_internal_image(15412);
            images_bossmmillahead_3680_7_16[0] = get_internal_image(15415);
            images_bossmmillahead_3680_7_16[1] = get_internal_image(15416);
            images_bossmmillahead_3680_7_16[2] = get_internal_image(15417);
            images_bossmmillahead_3680_7_16[3] = get_internal_image(15415);
            images_bossmmillahead_3680_7_16[4] = get_internal_image(15415);
            images_bossmmillahead_3680_7_16[5] = get_internal_image(15415);
            images_bossmmillahead_3680_7_17[0] = get_internal_image(15418);
            images_bossmmillahead_3680_7_17[1] = get_internal_image(15419);
            images_bossmmillahead_3680_7_17[2] = get_internal_image(15420);
            images_bossmmillahead_3680_7_17[3] = get_internal_image(15418);
            images_bossmmillahead_3680_7_17[4] = get_internal_image(15418);
            images_bossmmillahead_3680_7_17[5] = get_internal_image(15418);
            images_bossmmillahead_3680_7_24[0] = get_internal_image(15280);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 60);
        alterables->values.set(7, 1);
        alterables->values.set(12, 1);
        alterables->values.set(14, 5);
    }
};
FrameObject * create_bossmmillahead_3680(int x, int y)
{
    return new (Active::pool.create()) BossMMillaHead_3680(x, y);
}
static Image* images_bossmmillapawfront_3681_0_0[1];
static Direction direction_bossmmillapawfront_3681_0_0 = {0, 0, 0, 0, 1, images_bossmmillapawfront_3681_0_0, 1};
static Image* images_bossmmillapawfront_3681_0_1[1];
static Direction direction_bossmmillapawfront_3681_0_1 = {1, 0, 0, 0, 1, images_bossmmillapawfront_3681_0_1, 1};
static Image* images_bossmmillapawfront_3681_0_16[1];
static Direction direction_bossmmillapawfront_3681_0_16 = {16, 0, 0, 0, 1, images_bossmmillapawfront_3681_0_16, 1};
static Image* images_bossmmillapawfront_3681_0_17[1];
static Direction direction_bossmmillapawfront_3681_0_17 = {17, 0, 0, 0, 1, images_bossmmillapawfront_3681_0_17, 1};
static Animation anim_bossmmillapawfront_3681_0 = {&direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_1, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_16, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_17, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0, &direction_bossmmillapawfront_3681_0_0};
static Animation * anim_array_bossmmillapawfront_3681[1] = {&anim_bossmmillapawfront_3681_0};
static Animations anim_bossmmillapawfront_3681 = {1, &anim_array_bossmmillapawfront_3681[0]};
static bool anim_bossmmillapawfront_3681_initialized;
class BossMMillaPawFront_3681 : public Active
{
public:
    BossMMillaPawFront_3681(int x, int y) : Active(x, y, BossMMillaPawFront_3681_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaPawFront", 19);
#endif
        this->animations = &anim_bossmmillapawfront_3681;
        if (!anim_bossmmillapawfront_3681_initialized) {
            anim_bossmmillapawfront_3681_initialized = true;
            images_bossmmillapawfront_3681_0_0[0] = get_internal_image(15281);
            images_bossmmillapawfront_3681_0_1[0] = get_internal_image(15282);
            images_bossmmillapawfront_3681_0_16[0] = get_internal_image(15283);
            images_bossmmillapawfront_3681_0_17[0] = get_internal_image(15284);
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
FrameObject * create_bossmmillapawfront_3681(int x, int y)
{
    return new (Active::pool.create()) BossMMillaPawFront_3681(x, y);
}
static Image* images_bossmmillaearfront_3682_0_0[1];
static Direction direction_bossmmillaearfront_3682_0_0 = {0, 50, 50, 0, 1, images_bossmmillaearfront_3682_0_0, 1};
static Image* images_bossmmillaearfront_3682_0_1[1];
static Direction direction_bossmmillaearfront_3682_0_1 = {1, 50, 50, 0, 1, images_bossmmillaearfront_3682_0_1, 1};
static Image* images_bossmmillaearfront_3682_0_16[1];
static Direction direction_bossmmillaearfront_3682_0_16 = {16, 50, 50, 0, 1, images_bossmmillaearfront_3682_0_16, 1};
static Image* images_bossmmillaearfront_3682_0_17[1];
static Direction direction_bossmmillaearfront_3682_0_17 = {17, 50, 50, 0, 1, images_bossmmillaearfront_3682_0_17, 1};
static Animation anim_bossmmillaearfront_3682_0 = {&direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_1, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_16, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_17, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0, &direction_bossmmillaearfront_3682_0_0};
static Animation * anim_array_bossmmillaearfront_3682[1] = {&anim_bossmmillaearfront_3682_0};
static Animations anim_bossmmillaearfront_3682 = {1, &anim_array_bossmmillaearfront_3682[0]};
static bool anim_bossmmillaearfront_3682_initialized;
class BossMMillaEarFront_3682 : public Active
{
public:
    BossMMillaEarFront_3682(int x, int y) : Active(x, y, BossMMillaEarFront_3682_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaEarFront", 19);
#endif
        this->animations = &anim_bossmmillaearfront_3682;
        if (!anim_bossmmillaearfront_3682_initialized) {
            anim_bossmmillaearfront_3682_initialized = true;
            images_bossmmillaearfront_3682_0_0[0] = get_internal_image(15293);
            images_bossmmillaearfront_3682_0_1[0] = get_internal_image(15294);
            images_bossmmillaearfront_3682_0_16[0] = get_internal_image(15295);
            images_bossmmillaearfront_3682_0_17[0] = get_internal_image(15296);
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
FrameObject * create_bossmmillaearfront_3682(int x, int y)
{
    return new (Active::pool.create()) BossMMillaEarFront_3682(x, y);
}
static Image* images_brevon_3683_0_0[1];
static Direction direction_brevon_3683_0_0 = {0, 50, 50, 0, 1, images_brevon_3683_0_0, 1};
static Image* images_brevon_3683_0_16[1];
static Direction direction_brevon_3683_0_16 = {16, 50, 50, 0, 1, images_brevon_3683_0_16, 1};
static Animation anim_brevon_3683_0 = {&direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, NULL, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, &direction_brevon_3683_0_16, NULL, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0, &direction_brevon_3683_0_0};
static Image* images_brevon_3683_1_0[8];
static Direction direction_brevon_3683_1_0 = {0, 14, 14, 0, -1, images_brevon_3683_1_0, 8};
static Image* images_brevon_3683_1_1[8];
static Direction direction_brevon_3683_1_1 = {1, 14, 14, 0, -1, images_brevon_3683_1_1, 8};
static Image* images_brevon_3683_1_2[8];
static Direction direction_brevon_3683_1_2 = {2, 14, 14, 0, -1, images_brevon_3683_1_2, 8};
static Image* images_brevon_3683_1_7[9];
static Direction direction_brevon_3683_1_7 = {7, 50, 50, 1, -1, images_brevon_3683_1_7, 9};
static Image* images_brevon_3683_1_8[10];
static Direction direction_brevon_3683_1_8 = {8, 50, 50, 1, -1, images_brevon_3683_1_8, 10};
static Image* images_brevon_3683_1_9[9];
static Direction direction_brevon_3683_1_9 = {9, 50, 50, 1, -1, images_brevon_3683_1_9, 9};
static Image* images_brevon_3683_1_16[8];
static Direction direction_brevon_3683_1_16 = {16, 14, 14, 0, -1, images_brevon_3683_1_16, 8};
static Image* images_brevon_3683_1_17[8];
static Direction direction_brevon_3683_1_17 = {17, 14, 14, 0, -1, images_brevon_3683_1_17, 8};
static Image* images_brevon_3683_1_18[8];
static Direction direction_brevon_3683_1_18 = {18, 14, 14, 0, -1, images_brevon_3683_1_18, 8};
static Animation anim_brevon_3683_1 = {&direction_brevon_3683_1_0, &direction_brevon_3683_1_1, &direction_brevon_3683_1_2, &direction_brevon_3683_1_2, &direction_brevon_3683_1_2, &direction_brevon_3683_1_7, &direction_brevon_3683_1_7, &direction_brevon_3683_1_7, &direction_brevon_3683_1_8, &direction_brevon_3683_1_9, &direction_brevon_3683_1_9, &direction_brevon_3683_1_9, &direction_brevon_3683_1_9, &direction_brevon_3683_1_16, &direction_brevon_3683_1_16, &direction_brevon_3683_1_16, &direction_brevon_3683_1_16, &direction_brevon_3683_1_17, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, &direction_brevon_3683_1_18, NULL, &direction_brevon_3683_1_0, &direction_brevon_3683_1_0, &direction_brevon_3683_1_0, &direction_brevon_3683_1_0, &direction_brevon_3683_1_0, &direction_brevon_3683_1_0};
static Image* images_brevon_3683_5_0[64];
static Direction direction_brevon_3683_5_0 = {0, 0, 0, 0, -1, images_brevon_3683_5_0, 64};
static Image* images_brevon_3683_5_1[2];
static Direction direction_brevon_3683_5_1 = {1, 9, 9, 0, -1, images_brevon_3683_5_1, 2};
static Image* images_brevon_3683_5_12[2];
static Direction direction_brevon_3683_5_12 = {12, 50, 50, 0, -1, images_brevon_3683_5_12, 2};
static Image* images_brevon_3683_5_13[2];
static Direction direction_brevon_3683_5_13 = {13, 0, 0, 0, -1, images_brevon_3683_5_13, 2};
static Image* images_brevon_3683_5_14[2];
static Direction direction_brevon_3683_5_14 = {14, 95, 95, 0, -1, images_brevon_3683_5_14, 2};
static Image* images_brevon_3683_5_15[1];
static Direction direction_brevon_3683_5_15 = {15, 0, 0, 0, -1, images_brevon_3683_5_15, 1};
static Image* images_brevon_3683_5_16[64];
static Direction direction_brevon_3683_5_16 = {16, 0, 0, 0, -1, images_brevon_3683_5_16, 64};
static Image* images_brevon_3683_5_17[2];
static Direction direction_brevon_3683_5_17 = {17, 9, 9, 0, -1, images_brevon_3683_5_17, 2};
static Image* images_brevon_3683_5_27[1];
static Direction direction_brevon_3683_5_27 = {27, 50, 50, 0, -1, images_brevon_3683_5_27, 1};
static Image* images_brevon_3683_5_28[2];
static Direction direction_brevon_3683_5_28 = {28, 95, 95, 0, -1, images_brevon_3683_5_28, 2};
static Image* images_brevon_3683_5_29[1];
static Direction direction_brevon_3683_5_29 = {29, 0, 0, 0, -1, images_brevon_3683_5_29, 1};
static Image* images_brevon_3683_5_30[1];
static Direction direction_brevon_3683_5_30 = {30, 50, 50, 0, -1, images_brevon_3683_5_30, 1};
static Image* images_brevon_3683_5_31[1];
static Direction direction_brevon_3683_5_31 = {31, 0, 0, 0, -1, images_brevon_3683_5_31, 1};
static Animation anim_brevon_3683_5 = {&direction_brevon_3683_5_0, &direction_brevon_3683_5_1, &direction_brevon_3683_5_1, &direction_brevon_3683_5_1, &direction_brevon_3683_5_1, &direction_brevon_3683_5_1, &direction_brevon_3683_5_1, &direction_brevon_3683_5_12, &direction_brevon_3683_5_12, &direction_brevon_3683_5_12, &direction_brevon_3683_5_12, &direction_brevon_3683_5_12, &direction_brevon_3683_5_12, &direction_brevon_3683_5_13, &direction_brevon_3683_5_14, &direction_brevon_3683_5_15, &direction_brevon_3683_5_16, &direction_brevon_3683_5_17, &direction_brevon_3683_5_17, &direction_brevon_3683_5_17, &direction_brevon_3683_5_17, &direction_brevon_3683_5_17, NULL, &direction_brevon_3683_5_27, &direction_brevon_3683_5_27, &direction_brevon_3683_5_27, &direction_brevon_3683_5_27, &direction_brevon_3683_5_27, &direction_brevon_3683_5_28, &direction_brevon_3683_5_29, &direction_brevon_3683_5_30, &direction_brevon_3683_5_31};
static Image* images_brevon_3683_7_0[4];
static Direction direction_brevon_3683_7_0 = {0, 40, 40, 0, -1, images_brevon_3683_7_0, 4};
static Image* images_brevon_3683_7_7[1];
static Direction direction_brevon_3683_7_7 = {7, 50, 50, 0, 1, images_brevon_3683_7_7, 1};
static Image* images_brevon_3683_7_8[3];
static Direction direction_brevon_3683_7_8 = {8, 50, 50, 0, 1, images_brevon_3683_7_8, 3};
static Image* images_brevon_3683_7_16[4];
static Direction direction_brevon_3683_7_16 = {16, 40, 40, 0, -1, images_brevon_3683_7_16, 4};
static Image* images_brevon_3683_7_23[1];
static Direction direction_brevon_3683_7_23 = {23, 50, 50, 0, 1, images_brevon_3683_7_23, 1};
static Animation anim_brevon_3683_7 = {&direction_brevon_3683_7_0, &direction_brevon_3683_7_0, &direction_brevon_3683_7_0, &direction_brevon_3683_7_0, &direction_brevon_3683_7_7, &direction_brevon_3683_7_7, &direction_brevon_3683_7_7, &direction_brevon_3683_7_7, &direction_brevon_3683_7_8, &direction_brevon_3683_7_8, &direction_brevon_3683_7_8, &direction_brevon_3683_7_8, NULL, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_16, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_23, &direction_brevon_3683_7_0, &direction_brevon_3683_7_0, &direction_brevon_3683_7_0, &direction_brevon_3683_7_0};
static Image* images_brevon_3683_8_0[1];
static Direction direction_brevon_3683_8_0 = {0, 50, 50, 0, -1, images_brevon_3683_8_0, 1};
static Image* images_brevon_3683_8_1[1];
static Direction direction_brevon_3683_8_1 = {1, 50, 50, 0, -1, images_brevon_3683_8_1, 1};
static Image* images_brevon_3683_8_2[1];
static Direction direction_brevon_3683_8_2 = {2, 50, 50, 0, -1, images_brevon_3683_8_2, 1};
static Image* images_brevon_3683_8_8[3];
static Direction direction_brevon_3683_8_8 = {8, 50, 50, 0, 1, images_brevon_3683_8_8, 3};
static Image* images_brevon_3683_8_16[1];
static Direction direction_brevon_3683_8_16 = {16, 50, 50, 0, -1, images_brevon_3683_8_16, 1};
static Image* images_brevon_3683_8_17[1];
static Direction direction_brevon_3683_8_17 = {17, 50, 50, 0, -1, images_brevon_3683_8_17, 1};
static Image* images_brevon_3683_8_18[1];
static Direction direction_brevon_3683_8_18 = {18, 50, 50, 0, -1, images_brevon_3683_8_18, 1};
static Animation anim_brevon_3683_8 = {&direction_brevon_3683_8_0, &direction_brevon_3683_8_1, &direction_brevon_3683_8_2, &direction_brevon_3683_8_2, &direction_brevon_3683_8_2, NULL, &direction_brevon_3683_8_8, &direction_brevon_3683_8_8, &direction_brevon_3683_8_8, &direction_brevon_3683_8_8, &direction_brevon_3683_8_8, &direction_brevon_3683_8_8, NULL, &direction_brevon_3683_8_16, &direction_brevon_3683_8_16, &direction_brevon_3683_8_16, &direction_brevon_3683_8_16, &direction_brevon_3683_8_17, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, &direction_brevon_3683_8_18, NULL, &direction_brevon_3683_8_0, &direction_brevon_3683_8_0, &direction_brevon_3683_8_0, &direction_brevon_3683_8_0, &direction_brevon_3683_8_0, &direction_brevon_3683_8_0};
static Image* images_brevon_3683_9_0[4];
static Direction direction_brevon_3683_9_0 = {0, 25, 25, 3, -1, images_brevon_3683_9_0, 4};
static Image* images_brevon_3683_9_1[1];
static Direction direction_brevon_3683_9_1 = {1, 50, 50, 0, -1, images_brevon_3683_9_1, 1};
static Image* images_brevon_3683_9_8[2];
static Direction direction_brevon_3683_9_8 = {8, 50, 50, 0, 1, images_brevon_3683_9_8, 2};
static Image* images_brevon_3683_9_16[4];
static Direction direction_brevon_3683_9_16 = {16, 25, 25, 3, -1, images_brevon_3683_9_16, 4};
static Image* images_brevon_3683_9_17[1];
static Direction direction_brevon_3683_9_17 = {17, 50, 50, 0, -1, images_brevon_3683_9_17, 1};
static Animation anim_brevon_3683_9 = {&direction_brevon_3683_9_0, &direction_brevon_3683_9_1, &direction_brevon_3683_9_1, &direction_brevon_3683_9_1, &direction_brevon_3683_9_1, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, &direction_brevon_3683_9_8, NULL, &direction_brevon_3683_9_16, &direction_brevon_3683_9_16, &direction_brevon_3683_9_16, &direction_brevon_3683_9_16, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_17, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0, &direction_brevon_3683_9_0};
static Image* images_brevon_3683_10_0[4];
static Direction direction_brevon_3683_10_0 = {0, 20, 20, 3, -1, images_brevon_3683_10_0, 4};
static Image* images_brevon_3683_10_1[1];
static Direction direction_brevon_3683_10_1 = {1, 50, 50, 0, -1, images_brevon_3683_10_1, 1};
static Image* images_brevon_3683_10_8[1];
static Direction direction_brevon_3683_10_8 = {8, 50, 50, 0, 1, images_brevon_3683_10_8, 1};
static Image* images_brevon_3683_10_16[4];
static Direction direction_brevon_3683_10_16 = {16, 20, 20, 3, -1, images_brevon_3683_10_16, 4};
static Image* images_brevon_3683_10_17[1];
static Direction direction_brevon_3683_10_17 = {17, 50, 50, 0, -1, images_brevon_3683_10_17, 1};
static Animation anim_brevon_3683_10 = {&direction_brevon_3683_10_0, &direction_brevon_3683_10_1, &direction_brevon_3683_10_1, &direction_brevon_3683_10_1, &direction_brevon_3683_10_1, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, &direction_brevon_3683_10_8, NULL, &direction_brevon_3683_10_16, &direction_brevon_3683_10_16, &direction_brevon_3683_10_16, &direction_brevon_3683_10_16, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_17, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0, &direction_brevon_3683_10_0};
static Image* images_brevon_3683_11_0[13];
static Direction direction_brevon_3683_11_0 = {0, 25, 25, 12, -1, images_brevon_3683_11_0, 13};
static Image* images_brevon_3683_11_1[6];
static Direction direction_brevon_3683_11_1 = {1, 25, 25, 5, -1, images_brevon_3683_11_1, 6};
static Image* images_brevon_3683_11_2[6];
static Direction direction_brevon_3683_11_2 = {2, 14, 14, 5, -1, images_brevon_3683_11_2, 6};
static Image* images_brevon_3683_11_8[1];
static Direction direction_brevon_3683_11_8 = {8, 50, 50, 0, 1, images_brevon_3683_11_8, 1};
static Image* images_brevon_3683_11_16[13];
static Direction direction_brevon_3683_11_16 = {16, 25, 25, 12, -1, images_brevon_3683_11_16, 13};
static Image* images_brevon_3683_11_17[6];
static Direction direction_brevon_3683_11_17 = {17, 25, 25, 5, -1, images_brevon_3683_11_17, 6};
static Image* images_brevon_3683_11_18[6];
static Direction direction_brevon_3683_11_18 = {18, 14, 14, 5, -1, images_brevon_3683_11_18, 6};
static Image* images_brevon_3683_11_25[2];
static Direction direction_brevon_3683_11_25 = {25, 9, 9, 0, -1, images_brevon_3683_11_25, 2};
static Image* images_brevon_3683_11_26[3];
static Direction direction_brevon_3683_11_26 = {26, 14, 14, 2, -1, images_brevon_3683_11_26, 3};
static Animation anim_brevon_3683_11 = {&direction_brevon_3683_11_0, &direction_brevon_3683_11_1, &direction_brevon_3683_11_2, &direction_brevon_3683_11_2, &direction_brevon_3683_11_2, NULL, &direction_brevon_3683_11_8, &direction_brevon_3683_11_8, &direction_brevon_3683_11_8, &direction_brevon_3683_11_8, &direction_brevon_3683_11_8, &direction_brevon_3683_11_8, NULL, &direction_brevon_3683_11_16, &direction_brevon_3683_11_16, &direction_brevon_3683_11_16, &direction_brevon_3683_11_16, &direction_brevon_3683_11_17, &direction_brevon_3683_11_18, &direction_brevon_3683_11_18, &direction_brevon_3683_11_18, &direction_brevon_3683_11_18, &direction_brevon_3683_11_25, &direction_brevon_3683_11_25, &direction_brevon_3683_11_25, &direction_brevon_3683_11_25, &direction_brevon_3683_11_26, &direction_brevon_3683_11_26, &direction_brevon_3683_11_26, NULL, &direction_brevon_3683_11_0, &direction_brevon_3683_11_0};
static Image* images_brevon_3683_12_0[8];
static Direction direction_brevon_3683_12_0 = {0, 50, 50, 7, -1, images_brevon_3683_12_0, 8};
static Image* images_brevon_3683_12_8[1];
static Direction direction_brevon_3683_12_8 = {8, 50, 50, 0, 1, images_brevon_3683_12_8, 1};
static Image* images_brevon_3683_12_16[8];
static Direction direction_brevon_3683_12_16 = {16, 50, 50, 7, -1, images_brevon_3683_12_16, 8};
static Animation anim_brevon_3683_12 = {&direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, NULL, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, &direction_brevon_3683_12_8, NULL, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, &direction_brevon_3683_12_16, NULL, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0, &direction_brevon_3683_12_0};
static Image* images_brevon_3683_13_0[3];
static Direction direction_brevon_3683_13_0 = {0, 12, 12, 2, -1, images_brevon_3683_13_0, 3};
static Image* images_brevon_3683_13_1[1];
static Direction direction_brevon_3683_13_1 = {1, 50, 50, 0, -1, images_brevon_3683_13_1, 1};
static Image* images_brevon_3683_13_8[4];
static Direction direction_brevon_3683_13_8 = {8, 50, 50, 0, 1, images_brevon_3683_13_8, 4};
static Image* images_brevon_3683_13_16[3];
static Direction direction_brevon_3683_13_16 = {16, 12, 12, 2, -1, images_brevon_3683_13_16, 3};
static Image* images_brevon_3683_13_17[1];
static Direction direction_brevon_3683_13_17 = {17, 50, 50, 0, -1, images_brevon_3683_13_17, 1};
static Animation anim_brevon_3683_13 = {&direction_brevon_3683_13_0, &direction_brevon_3683_13_1, &direction_brevon_3683_13_1, &direction_brevon_3683_13_1, &direction_brevon_3683_13_1, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, &direction_brevon_3683_13_8, NULL, &direction_brevon_3683_13_16, &direction_brevon_3683_13_16, &direction_brevon_3683_13_16, &direction_brevon_3683_13_16, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_17, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0, &direction_brevon_3683_13_0};
static Image* images_brevon_3683_14_0[8];
static Direction direction_brevon_3683_14_0 = {0, 50, 50, 7, -1, images_brevon_3683_14_0, 8};
static Image* images_brevon_3683_14_8[5];
static Direction direction_brevon_3683_14_8 = {8, 50, 50, 0, 1, images_brevon_3683_14_8, 5};
static Image* images_brevon_3683_14_16[8];
static Direction direction_brevon_3683_14_16 = {16, 50, 50, 7, -1, images_brevon_3683_14_16, 8};
static Animation anim_brevon_3683_14 = {&direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, NULL, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, &direction_brevon_3683_14_8, NULL, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, &direction_brevon_3683_14_16, NULL, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0, &direction_brevon_3683_14_0};
static Image* images_brevon_3683_15_0[1];
static Direction direction_brevon_3683_15_0 = {0, 50, 50, 0, -1, images_brevon_3683_15_0, 1};
static Image* images_brevon_3683_15_8[1];
static Direction direction_brevon_3683_15_8 = {8, 50, 50, 0, 1, images_brevon_3683_15_8, 1};
static Image* images_brevon_3683_15_16[1];
static Direction direction_brevon_3683_15_16 = {16, 50, 50, 0, 1, images_brevon_3683_15_16, 1};
static Animation anim_brevon_3683_15 = {&direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, NULL, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, &direction_brevon_3683_15_8, NULL, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, &direction_brevon_3683_15_16, NULL, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0, &direction_brevon_3683_15_0};
static Image* images_brevon_3683_16_0[5];
static Direction direction_brevon_3683_16_0 = {0, 15, 15, 4, -1, images_brevon_3683_16_0, 5};
static Image* images_brevon_3683_16_16[5];
static Direction direction_brevon_3683_16_16 = {16, 15, 15, 4, -1, images_brevon_3683_16_16, 5};
static Animation anim_brevon_3683_16 = {&direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, NULL, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, &direction_brevon_3683_16_16, NULL, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0, &direction_brevon_3683_16_0};
static Image* images_brevon_3683_17_0[2];
static Direction direction_brevon_3683_17_0 = {0, 50, 50, 0, 1, images_brevon_3683_17_0, 2};
static Image* images_brevon_3683_17_16[2];
static Direction direction_brevon_3683_17_16 = {16, 50, 50, 0, 1, images_brevon_3683_17_16, 2};
static Animation anim_brevon_3683_17 = {&direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, NULL, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, &direction_brevon_3683_17_16, NULL, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0, &direction_brevon_3683_17_0};
static Animation * anim_array_brevon_3683[18] = {&anim_brevon_3683_0, &anim_brevon_3683_1, NULL, NULL, NULL, &anim_brevon_3683_5, NULL, &anim_brevon_3683_7, &anim_brevon_3683_8, &anim_brevon_3683_9, &anim_brevon_3683_10, &anim_brevon_3683_11, &anim_brevon_3683_12, &anim_brevon_3683_13, &anim_brevon_3683_14, &anim_brevon_3683_15, &anim_brevon_3683_16, &anim_brevon_3683_17};
static Animations anim_brevon_3683 = {18, &anim_array_brevon_3683[0]};
static bool anim_brevon_3683_initialized;
class Brevon_3683 : public Active
{
public:
    Brevon_3683(int x, int y) : Active(x, y, Brevon_3683_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon", 6);
#endif
        this->animations = &anim_brevon_3683;
        if (!anim_brevon_3683_initialized) {
            anim_brevon_3683_initialized = true;
            images_brevon_3683_0_0[0] = get_internal_image(16366);
            images_brevon_3683_0_16[0] = get_internal_image(16367);
            images_brevon_3683_1_0[0] = get_internal_image(16443);
            images_brevon_3683_1_0[1] = get_internal_image(16444);
            images_brevon_3683_1_0[2] = get_internal_image(16445);
            images_brevon_3683_1_0[3] = get_internal_image(16446);
            images_brevon_3683_1_0[4] = get_internal_image(16447);
            images_brevon_3683_1_0[5] = get_internal_image(16448);
            images_brevon_3683_1_0[6] = get_internal_image(16449);
            images_brevon_3683_1_0[7] = get_internal_image(16450);
            images_brevon_3683_1_1[0] = get_internal_image(16459);
            images_brevon_3683_1_1[1] = get_internal_image(16460);
            images_brevon_3683_1_1[2] = get_internal_image(16461);
            images_brevon_3683_1_1[3] = get_internal_image(16462);
            images_brevon_3683_1_1[4] = get_internal_image(16463);
            images_brevon_3683_1_1[5] = get_internal_image(16464);
            images_brevon_3683_1_1[6] = get_internal_image(16465);
            images_brevon_3683_1_1[7] = get_internal_image(16466);
            images_brevon_3683_1_2[0] = get_internal_image(16475);
            images_brevon_3683_1_2[1] = get_internal_image(16476);
            images_brevon_3683_1_2[2] = get_internal_image(16477);
            images_brevon_3683_1_2[3] = get_internal_image(16478);
            images_brevon_3683_1_2[4] = get_internal_image(16479);
            images_brevon_3683_1_2[5] = get_internal_image(16480);
            images_brevon_3683_1_2[6] = get_internal_image(16481);
            images_brevon_3683_1_2[7] = get_internal_image(16482);
            images_brevon_3683_1_7[0] = get_internal_image(3895);
            images_brevon_3683_1_7[1] = get_internal_image(3942);
            images_brevon_3683_1_7[2] = get_internal_image(3982);
            images_brevon_3683_1_7[3] = get_internal_image(3985);
            images_brevon_3683_1_7[4] = get_internal_image(3984);
            images_brevon_3683_1_7[5] = get_internal_image(3981);
            images_brevon_3683_1_7[6] = get_internal_image(3979);
            images_brevon_3683_1_7[7] = get_internal_image(3980);
            images_brevon_3683_1_7[8] = get_internal_image(3948);
            images_brevon_3683_1_8[0] = get_internal_image(3812);
            images_brevon_3683_1_8[1] = get_internal_image(3028);
            images_brevon_3683_1_8[2] = get_internal_image(3800);
            images_brevon_3683_1_8[3] = get_internal_image(3799);
            images_brevon_3683_1_8[4] = get_internal_image(3796);
            images_brevon_3683_1_8[5] = get_internal_image(3804);
            images_brevon_3683_1_8[6] = get_internal_image(3783);
            images_brevon_3683_1_8[7] = get_internal_image(3802);
            images_brevon_3683_1_8[8] = get_internal_image(3803);
            images_brevon_3683_1_8[9] = get_internal_image(3797);
            images_brevon_3683_1_9[0] = get_internal_image(3895);
            images_brevon_3683_1_9[1] = get_internal_image(3873);
            images_brevon_3683_1_9[2] = get_internal_image(3872);
            images_brevon_3683_1_9[3] = get_internal_image(3938);
            images_brevon_3683_1_9[4] = get_internal_image(3939);
            images_brevon_3683_1_9[5] = get_internal_image(3881);
            images_brevon_3683_1_9[6] = get_internal_image(3880);
            images_brevon_3683_1_9[7] = get_internal_image(3936);
            images_brevon_3683_1_9[8] = get_internal_image(3941);
            images_brevon_3683_1_16[0] = get_internal_image(16451);
            images_brevon_3683_1_16[1] = get_internal_image(16452);
            images_brevon_3683_1_16[2] = get_internal_image(16453);
            images_brevon_3683_1_16[3] = get_internal_image(16454);
            images_brevon_3683_1_16[4] = get_internal_image(16455);
            images_brevon_3683_1_16[5] = get_internal_image(16456);
            images_brevon_3683_1_16[6] = get_internal_image(16457);
            images_brevon_3683_1_16[7] = get_internal_image(16458);
            images_brevon_3683_1_17[0] = get_internal_image(16467);
            images_brevon_3683_1_17[1] = get_internal_image(16468);
            images_brevon_3683_1_17[2] = get_internal_image(16469);
            images_brevon_3683_1_17[3] = get_internal_image(16470);
            images_brevon_3683_1_17[4] = get_internal_image(16471);
            images_brevon_3683_1_17[5] = get_internal_image(16472);
            images_brevon_3683_1_17[6] = get_internal_image(16473);
            images_brevon_3683_1_17[7] = get_internal_image(16474);
            images_brevon_3683_1_18[0] = get_internal_image(16483);
            images_brevon_3683_1_18[1] = get_internal_image(16484);
            images_brevon_3683_1_18[2] = get_internal_image(16485);
            images_brevon_3683_1_18[3] = get_internal_image(16486);
            images_brevon_3683_1_18[4] = get_internal_image(16487);
            images_brevon_3683_1_18[5] = get_internal_image(16488);
            images_brevon_3683_1_18[6] = get_internal_image(16489);
            images_brevon_3683_1_18[7] = get_internal_image(16490);
            images_brevon_3683_5_0[0] = get_internal_image(5184);
            images_brevon_3683_5_0[1] = get_internal_image(5651);
            images_brevon_3683_5_0[2] = get_internal_image(5656);
            images_brevon_3683_5_0[3] = get_internal_image(5842);
            images_brevon_3683_5_0[4] = get_internal_image(6438);
            images_brevon_3683_5_0[5] = get_internal_image(7255);
            images_brevon_3683_5_0[6] = get_internal_image(7525);
            images_brevon_3683_5_0[7] = get_internal_image(7526);
            images_brevon_3683_5_0[8] = get_internal_image(7941);
            images_brevon_3683_5_0[9] = get_internal_image(11136);
            images_brevon_3683_5_0[10] = get_internal_image(16223);
            images_brevon_3683_5_0[11] = get_internal_image(7526);
            images_brevon_3683_5_0[12] = get_internal_image(16224);
            images_brevon_3683_5_0[13] = get_internal_image(16226);
            images_brevon_3683_5_0[14] = get_internal_image(16227);
            images_brevon_3683_5_0[15] = get_internal_image(16228);
            images_brevon_3683_5_0[16] = get_internal_image(16230);
            images_brevon_3683_5_0[17] = get_internal_image(16258);
            images_brevon_3683_5_0[18] = get_internal_image(16259);
            images_brevon_3683_5_0[19] = get_internal_image(16228);
            images_brevon_3683_5_0[20] = get_internal_image(16260);
            images_brevon_3683_5_0[21] = get_internal_image(16261);
            images_brevon_3683_5_0[22] = get_internal_image(16262);
            images_brevon_3683_5_0[23] = get_internal_image(16263);
            images_brevon_3683_5_0[24] = get_internal_image(16264);
            images_brevon_3683_5_0[25] = get_internal_image(16265);
            images_brevon_3683_5_0[26] = get_internal_image(16266);
            images_brevon_3683_5_0[27] = get_internal_image(16267);
            images_brevon_3683_5_0[28] = get_internal_image(16268);
            images_brevon_3683_5_0[29] = get_internal_image(16269);
            images_brevon_3683_5_0[30] = get_internal_image(16518);
            images_brevon_3683_5_0[31] = get_internal_image(16521);
            images_brevon_3683_5_0[32] = get_internal_image(16272);
            images_brevon_3683_5_0[33] = get_internal_image(16273);
            images_brevon_3683_5_0[34] = get_internal_image(16274);
            images_brevon_3683_5_0[35] = get_internal_image(16275);
            images_brevon_3683_5_0[36] = get_internal_image(16276);
            images_brevon_3683_5_0[37] = get_internal_image(16277);
            images_brevon_3683_5_0[38] = get_internal_image(16278);
            images_brevon_3683_5_0[39] = get_internal_image(16279);
            images_brevon_3683_5_0[40] = get_internal_image(16280);
            images_brevon_3683_5_0[41] = get_internal_image(16281);
            images_brevon_3683_5_0[42] = get_internal_image(16282);
            images_brevon_3683_5_0[43] = get_internal_image(16283);
            images_brevon_3683_5_0[44] = get_internal_image(16284);
            images_brevon_3683_5_0[45] = get_internal_image(16285);
            images_brevon_3683_5_0[46] = get_internal_image(16286);
            images_brevon_3683_5_0[47] = get_internal_image(16287);
            images_brevon_3683_5_0[48] = get_internal_image(16288);
            images_brevon_3683_5_0[49] = get_internal_image(16289);
            images_brevon_3683_5_0[50] = get_internal_image(16290);
            images_brevon_3683_5_0[51] = get_internal_image(16291);
            images_brevon_3683_5_0[52] = get_internal_image(16292);
            images_brevon_3683_5_0[53] = get_internal_image(16293);
            images_brevon_3683_5_0[54] = get_internal_image(16294);
            images_brevon_3683_5_0[55] = get_internal_image(16295);
            images_brevon_3683_5_0[56] = get_internal_image(16296);
            images_brevon_3683_5_0[57] = get_internal_image(16297);
            images_brevon_3683_5_0[58] = get_internal_image(16298);
            images_brevon_3683_5_0[59] = get_internal_image(16299);
            images_brevon_3683_5_0[60] = get_internal_image(16301);
            images_brevon_3683_5_0[61] = get_internal_image(16300);
            images_brevon_3683_5_0[62] = get_internal_image(16302);
            images_brevon_3683_5_0[63] = get_internal_image(16303);
            images_brevon_3683_5_1[0] = get_internal_image(16410);
            images_brevon_3683_5_1[1] = get_internal_image(16411);
            images_brevon_3683_5_12[0] = get_internal_image(3046);
            images_brevon_3683_5_12[1] = get_internal_image(3040);
            images_brevon_3683_5_13[0] = get_internal_image(16520);
            images_brevon_3683_5_13[1] = get_internal_image(16513);
            images_brevon_3683_5_14[0] = get_internal_image(237);
            images_brevon_3683_5_14[1] = get_internal_image(247);
            images_brevon_3683_5_15[0] = get_internal_image(16519);
            images_brevon_3683_5_16[0] = get_internal_image(16304);
            images_brevon_3683_5_16[1] = get_internal_image(16305);
            images_brevon_3683_5_16[2] = get_internal_image(16306);
            images_brevon_3683_5_16[3] = get_internal_image(16307);
            images_brevon_3683_5_16[4] = get_internal_image(16308);
            images_brevon_3683_5_16[5] = get_internal_image(16309);
            images_brevon_3683_5_16[6] = get_internal_image(16310);
            images_brevon_3683_5_16[7] = get_internal_image(16311);
            images_brevon_3683_5_16[8] = get_internal_image(16312);
            images_brevon_3683_5_16[9] = get_internal_image(16313);
            images_brevon_3683_5_16[10] = get_internal_image(16314);
            images_brevon_3683_5_16[11] = get_internal_image(16311);
            images_brevon_3683_5_16[12] = get_internal_image(16315);
            images_brevon_3683_5_16[13] = get_internal_image(16316);
            images_brevon_3683_5_16[14] = get_internal_image(16317);
            images_brevon_3683_5_16[15] = get_internal_image(16318);
            images_brevon_3683_5_16[16] = get_internal_image(16319);
            images_brevon_3683_5_16[17] = get_internal_image(16320);
            images_brevon_3683_5_16[18] = get_internal_image(16321);
            images_brevon_3683_5_16[19] = get_internal_image(16318);
            images_brevon_3683_5_16[20] = get_internal_image(16322);
            images_brevon_3683_5_16[21] = get_internal_image(16323);
            images_brevon_3683_5_16[22] = get_internal_image(16324);
            images_brevon_3683_5_16[23] = get_internal_image(16325);
            images_brevon_3683_5_16[24] = get_internal_image(16326);
            images_brevon_3683_5_16[25] = get_internal_image(16327);
            images_brevon_3683_5_16[26] = get_internal_image(16328);
            images_brevon_3683_5_16[27] = get_internal_image(16329);
            images_brevon_3683_5_16[28] = get_internal_image(16330);
            images_brevon_3683_5_16[29] = get_internal_image(16331);
            images_brevon_3683_5_16[30] = get_internal_image(16522);
            images_brevon_3683_5_16[31] = get_internal_image(16523);
            images_brevon_3683_5_16[32] = get_internal_image(16334);
            images_brevon_3683_5_16[33] = get_internal_image(16335);
            images_brevon_3683_5_16[34] = get_internal_image(16336);
            images_brevon_3683_5_16[35] = get_internal_image(16337);
            images_brevon_3683_5_16[36] = get_internal_image(16338);
            images_brevon_3683_5_16[37] = get_internal_image(16339);
            images_brevon_3683_5_16[38] = get_internal_image(16340);
            images_brevon_3683_5_16[39] = get_internal_image(16341);
            images_brevon_3683_5_16[40] = get_internal_image(16342);
            images_brevon_3683_5_16[41] = get_internal_image(16343);
            images_brevon_3683_5_16[42] = get_internal_image(16344);
            images_brevon_3683_5_16[43] = get_internal_image(16345);
            images_brevon_3683_5_16[44] = get_internal_image(16346);
            images_brevon_3683_5_16[45] = get_internal_image(16347);
            images_brevon_3683_5_16[46] = get_internal_image(16348);
            images_brevon_3683_5_16[47] = get_internal_image(16349);
            images_brevon_3683_5_16[48] = get_internal_image(16350);
            images_brevon_3683_5_16[49] = get_internal_image(16351);
            images_brevon_3683_5_16[50] = get_internal_image(16352);
            images_brevon_3683_5_16[51] = get_internal_image(16353);
            images_brevon_3683_5_16[52] = get_internal_image(16354);
            images_brevon_3683_5_16[53] = get_internal_image(16355);
            images_brevon_3683_5_16[54] = get_internal_image(16356);
            images_brevon_3683_5_16[55] = get_internal_image(16357);
            images_brevon_3683_5_16[56] = get_internal_image(16358);
            images_brevon_3683_5_16[57] = get_internal_image(16359);
            images_brevon_3683_5_16[58] = get_internal_image(16360);
            images_brevon_3683_5_16[59] = get_internal_image(16361);
            images_brevon_3683_5_16[60] = get_internal_image(16362);
            images_brevon_3683_5_16[61] = get_internal_image(16363);
            images_brevon_3683_5_16[62] = get_internal_image(16364);
            images_brevon_3683_5_16[63] = get_internal_image(16365);
            images_brevon_3683_5_17[0] = get_internal_image(16409);
            images_brevon_3683_5_17[1] = get_internal_image(16412);
            images_brevon_3683_5_27[0] = get_internal_image(16396);
            images_brevon_3683_5_28[0] = get_internal_image(138);
            images_brevon_3683_5_28[1] = get_internal_image(165);
            images_brevon_3683_5_29[0] = get_internal_image(16516);
            images_brevon_3683_5_30[0] = get_internal_image(16512);
            images_brevon_3683_5_31[0] = get_internal_image(16517);
            images_brevon_3683_7_0[0] = get_internal_image(16401);
            images_brevon_3683_7_0[1] = get_internal_image(16402);
            images_brevon_3683_7_0[2] = get_internal_image(16403);
            images_brevon_3683_7_0[3] = get_internal_image(16404);
            images_brevon_3683_7_7[0] = get_internal_image(4885);
            images_brevon_3683_7_8[0] = get_internal_image(2892);
            images_brevon_3683_7_8[1] = get_internal_image(2925);
            images_brevon_3683_7_8[2] = get_internal_image(2965);
            images_brevon_3683_7_16[0] = get_internal_image(16405);
            images_brevon_3683_7_16[1] = get_internal_image(16406);
            images_brevon_3683_7_16[2] = get_internal_image(16407);
            images_brevon_3683_7_16[3] = get_internal_image(16408);
            images_brevon_3683_7_23[0] = get_internal_image(4847);
            images_brevon_3683_8_0[0] = get_internal_image(16503);
            images_brevon_3683_8_1[0] = get_internal_image(16506);
            images_brevon_3683_8_2[0] = get_internal_image(16504);
            images_brevon_3683_8_8[0] = get_internal_image(11727);
            images_brevon_3683_8_8[1] = get_internal_image(11670);
            images_brevon_3683_8_8[2] = get_internal_image(11672);
            images_brevon_3683_8_16[0] = get_internal_image(16502);
            images_brevon_3683_8_17[0] = get_internal_image(16509);
            images_brevon_3683_8_18[0] = get_internal_image(16505);
            images_brevon_3683_9_0[0] = get_internal_image(16392);
            images_brevon_3683_9_0[1] = get_internal_image(16392);
            images_brevon_3683_9_0[2] = get_internal_image(16393);
            images_brevon_3683_9_0[3] = get_internal_image(16393);
            images_brevon_3683_9_1[0] = get_internal_image(16510);
            images_brevon_3683_9_8[0] = get_internal_image(3588);
            images_brevon_3683_9_8[1] = get_internal_image(66);
            images_brevon_3683_9_16[0] = get_internal_image(16394);
            images_brevon_3683_9_16[1] = get_internal_image(16394);
            images_brevon_3683_9_16[2] = get_internal_image(16395);
            images_brevon_3683_9_16[3] = get_internal_image(16395);
            images_brevon_3683_9_17[0] = get_internal_image(16511);
            images_brevon_3683_10_0[0] = get_internal_image(16524);
            images_brevon_3683_10_0[1] = get_internal_image(16525);
            images_brevon_3683_10_0[2] = get_internal_image(16526);
            images_brevon_3683_10_0[3] = get_internal_image(16527);
            images_brevon_3683_10_1[0] = get_internal_image(16390);
            images_brevon_3683_10_8[0] = get_internal_image(2984);
            images_brevon_3683_10_16[0] = get_internal_image(16528);
            images_brevon_3683_10_16[1] = get_internal_image(16529);
            images_brevon_3683_10_16[2] = get_internal_image(16530);
            images_brevon_3683_10_16[3] = get_internal_image(16531);
            images_brevon_3683_10_17[0] = get_internal_image(16391);
            images_brevon_3683_11_0[0] = get_internal_image(5184);
            images_brevon_3683_11_0[1] = get_internal_image(16380);
            images_brevon_3683_11_0[2] = get_internal_image(16381);
            images_brevon_3683_11_0[3] = get_internal_image(16382);
            images_brevon_3683_11_0[4] = get_internal_image(16413);
            images_brevon_3683_11_0[5] = get_internal_image(16413);
            images_brevon_3683_11_0[6] = get_internal_image(16413);
            images_brevon_3683_11_0[7] = get_internal_image(16414);
            images_brevon_3683_11_0[8] = get_internal_image(16415);
            images_brevon_3683_11_0[9] = get_internal_image(16416);
            images_brevon_3683_11_0[10] = get_internal_image(16417);
            images_brevon_3683_11_0[11] = get_internal_image(16418);
            images_brevon_3683_11_0[12] = get_internal_image(16419);
            images_brevon_3683_11_1[0] = get_internal_image(5184);
            images_brevon_3683_11_1[1] = get_internal_image(16380);
            images_brevon_3683_11_1[2] = get_internal_image(16381);
            images_brevon_3683_11_1[3] = get_internal_image(16382);
            images_brevon_3683_11_1[4] = get_internal_image(16383);
            images_brevon_3683_11_1[5] = get_internal_image(16384);
            images_brevon_3683_11_2[0] = get_internal_image(16368);
            images_brevon_3683_11_2[1] = get_internal_image(16369);
            images_brevon_3683_11_2[2] = get_internal_image(16370);
            images_brevon_3683_11_2[3] = get_internal_image(16372);
            images_brevon_3683_11_2[4] = get_internal_image(16371);
            images_brevon_3683_11_2[5] = get_internal_image(16373);
            images_brevon_3683_11_8[0] = get_internal_image(14797);
            images_brevon_3683_11_16[0] = get_internal_image(16304);
            images_brevon_3683_11_16[1] = get_internal_image(16385);
            images_brevon_3683_11_16[2] = get_internal_image(16386);
            images_brevon_3683_11_16[3] = get_internal_image(16387);
            images_brevon_3683_11_16[4] = get_internal_image(16420);
            images_brevon_3683_11_16[5] = get_internal_image(16420);
            images_brevon_3683_11_16[6] = get_internal_image(16420);
            images_brevon_3683_11_16[7] = get_internal_image(16421);
            images_brevon_3683_11_16[8] = get_internal_image(16422);
            images_brevon_3683_11_16[9] = get_internal_image(16423);
            images_brevon_3683_11_16[10] = get_internal_image(16424);
            images_brevon_3683_11_16[11] = get_internal_image(16425);
            images_brevon_3683_11_16[12] = get_internal_image(16426);
            images_brevon_3683_11_17[0] = get_internal_image(16304);
            images_brevon_3683_11_17[1] = get_internal_image(16385);
            images_brevon_3683_11_17[2] = get_internal_image(16386);
            images_brevon_3683_11_17[3] = get_internal_image(16387);
            images_brevon_3683_11_17[4] = get_internal_image(16388);
            images_brevon_3683_11_17[5] = get_internal_image(16389);
            images_brevon_3683_11_18[0] = get_internal_image(16374);
            images_brevon_3683_11_18[1] = get_internal_image(16375);
            images_brevon_3683_11_18[2] = get_internal_image(16376);
            images_brevon_3683_11_18[3] = get_internal_image(16377);
            images_brevon_3683_11_18[4] = get_internal_image(16378);
            images_brevon_3683_11_18[5] = get_internal_image(16379);
            images_brevon_3683_11_25[0] = get_internal_image(497);
            images_brevon_3683_11_25[1] = get_internal_image(1223);
            images_brevon_3683_11_26[0] = get_internal_image(16398);
            images_brevon_3683_11_26[1] = get_internal_image(16399);
            images_brevon_3683_11_26[2] = get_internal_image(16400);
            images_brevon_3683_12_0[0] = get_internal_image(16272);
            images_brevon_3683_12_0[1] = get_internal_image(16272);
            images_brevon_3683_12_0[2] = get_internal_image(16272);
            images_brevon_3683_12_0[3] = get_internal_image(16272);
            images_brevon_3683_12_0[4] = get_internal_image(16427);
            images_brevon_3683_12_0[5] = get_internal_image(16428);
            images_brevon_3683_12_0[6] = get_internal_image(16429);
            images_brevon_3683_12_0[7] = get_internal_image(16430);
            images_brevon_3683_12_8[0] = get_internal_image(14760);
            images_brevon_3683_12_16[0] = get_internal_image(16334);
            images_brevon_3683_12_16[1] = get_internal_image(16334);
            images_brevon_3683_12_16[2] = get_internal_image(16334);
            images_brevon_3683_12_16[3] = get_internal_image(16334);
            images_brevon_3683_12_16[4] = get_internal_image(16431);
            images_brevon_3683_12_16[5] = get_internal_image(16432);
            images_brevon_3683_12_16[6] = get_internal_image(16433);
            images_brevon_3683_12_16[7] = get_internal_image(16434);
            images_brevon_3683_13_0[0] = get_internal_image(1239);
            images_brevon_3683_13_0[1] = get_internal_image(1239);
            images_brevon_3683_13_0[2] = get_internal_image(1254);
            images_brevon_3683_13_1[0] = get_internal_image(15540);
            images_brevon_3683_13_8[0] = get_internal_image(14451);
            images_brevon_3683_13_8[1] = get_internal_image(15536);
            images_brevon_3683_13_8[2] = get_internal_image(15538);
            images_brevon_3683_13_8[3] = get_internal_image(15539);
            images_brevon_3683_13_16[0] = get_internal_image(1239);
            images_brevon_3683_13_16[1] = get_internal_image(1239);
            images_brevon_3683_13_16[2] = get_internal_image(1254);
            images_brevon_3683_13_17[0] = get_internal_image(15540);
            images_brevon_3683_14_0[0] = get_internal_image(16492);
            images_brevon_3683_14_0[1] = get_internal_image(16492);
            images_brevon_3683_14_0[2] = get_internal_image(16492);
            images_brevon_3683_14_0[3] = get_internal_image(16492);
            images_brevon_3683_14_0[4] = get_internal_image(16493);
            images_brevon_3683_14_0[5] = get_internal_image(16494);
            images_brevon_3683_14_0[6] = get_internal_image(16495);
            images_brevon_3683_14_0[7] = get_internal_image(16496);
            images_brevon_3683_14_8[0] = get_internal_image(15542);
            images_brevon_3683_14_8[1] = get_internal_image(15546);
            images_brevon_3683_14_8[2] = get_internal_image(15554);
            images_brevon_3683_14_8[3] = get_internal_image(15545);
            images_brevon_3683_14_8[4] = get_internal_image(15553);
            images_brevon_3683_14_16[0] = get_internal_image(16497);
            images_brevon_3683_14_16[1] = get_internal_image(16497);
            images_brevon_3683_14_16[2] = get_internal_image(16497);
            images_brevon_3683_14_16[3] = get_internal_image(16497);
            images_brevon_3683_14_16[4] = get_internal_image(16498);
            images_brevon_3683_14_16[5] = get_internal_image(16499);
            images_brevon_3683_14_16[6] = get_internal_image(16500);
            images_brevon_3683_14_16[7] = get_internal_image(16501);
            images_brevon_3683_15_0[0] = get_internal_image(16514);
            images_brevon_3683_15_8[0] = get_internal_image(3406);
            images_brevon_3683_15_16[0] = get_internal_image(16515);
            images_brevon_3683_16_0[0] = get_internal_image(16395);
            images_brevon_3683_16_0[1] = get_internal_image(16435);
            images_brevon_3683_16_0[2] = get_internal_image(16436);
            images_brevon_3683_16_0[3] = get_internal_image(16437);
            images_brevon_3683_16_0[4] = get_internal_image(16438);
            images_brevon_3683_16_16[0] = get_internal_image(16393);
            images_brevon_3683_16_16[1] = get_internal_image(16439);
            images_brevon_3683_16_16[2] = get_internal_image(16440);
            images_brevon_3683_16_16[3] = get_internal_image(16441);
            images_brevon_3683_16_16[4] = get_internal_image(16442);
            images_brevon_3683_17_0[0] = get_internal_image(5785);
            images_brevon_3683_17_0[1] = get_internal_image(5784);
            images_brevon_3683_17_16[0] = get_internal_image(7178);
            images_brevon_3683_17_16[1] = get_internal_image(7181);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(8, 1);
    }
};
FrameObject * create_brevon_3683(int x, int y)
{
    return new (Active::pool.create()) Brevon_3683(x, y);
}
static Image* images_brevonknifearm_3684_0_0[1];
static Direction direction_brevonknifearm_3684_0_0 = {0, 50, 50, 0, 1, images_brevonknifearm_3684_0_0, 1};
static Animation anim_brevonknifearm_3684_0 = {&direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, NULL, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0, &direction_brevonknifearm_3684_0_0};
static Animation * anim_array_brevonknifearm_3684[1] = {&anim_brevonknifearm_3684_0};
static Animations anim_brevonknifearm_3684 = {1, &anim_array_brevonknifearm_3684[0]};
static bool anim_brevonknifearm_3684_initialized;
class BrevonKnifeArm_3684 : public Active
{
public:
    BrevonKnifeArm_3684(int x, int y) : Active(x, y, BrevonKnifeArm_3684_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Brevon_KnifeArm", 15);
#endif
        set_visible(false);
        this->animations = &anim_brevonknifearm_3684;
        if (!anim_brevonknifearm_3684_initialized) {
            anim_brevonknifearm_3684_initialized = true;
            images_brevonknifearm_3684_0_0[0] = get_internal_image(16397);
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
FrameObject * create_brevonknifearm_3684(int x, int y)
{
    return new (Active::pool.create()) BrevonKnifeArm_3684(x, y);
}
static Image* images_bossmmillatailend_3685_0_0[2];
static Direction direction_bossmmillatailend_3685_0_0 = {0, 0, 0, 0, 1, images_bossmmillatailend_3685_0_0, 2};
static Image* images_bossmmillatailend_3685_0_1[2];
static Direction direction_bossmmillatailend_3685_0_1 = {1, 0, 0, 0, 1, images_bossmmillatailend_3685_0_1, 2};
static Image* images_bossmmillatailend_3685_0_16[2];
static Direction direction_bossmmillatailend_3685_0_16 = {16, 0, 0, 0, 1, images_bossmmillatailend_3685_0_16, 2};
static Image* images_bossmmillatailend_3685_0_17[2];
static Direction direction_bossmmillatailend_3685_0_17 = {17, 0, 0, 0, 1, images_bossmmillatailend_3685_0_17, 2};
static Animation anim_bossmmillatailend_3685_0 = {&direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_1, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_16, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_17, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0, &direction_bossmmillatailend_3685_0_0};
static Animation * anim_array_bossmmillatailend_3685[1] = {&anim_bossmmillatailend_3685_0};
static Animations anim_bossmmillatailend_3685 = {1, &anim_array_bossmmillatailend_3685[0]};
static bool anim_bossmmillatailend_3685_initialized;
class BossMMillaTailEnd_3685 : public Active
{
public:
    BossMMillaTailEnd_3685(int x, int y) : Active(x, y, BossMMillaTailEnd_3685_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_MMillaTailEnd", 18);
#endif
        this->animations = &anim_bossmmillatailend_3685;
        if (!anim_bossmmillatailend_3685_initialized) {
            anim_bossmmillatailend_3685_initialized = true;
            images_bossmmillatailend_3685_0_0[0] = get_internal_image(15285);
            images_bossmmillatailend_3685_0_0[1] = get_internal_image(15286);
            images_bossmmillatailend_3685_0_1[0] = get_internal_image(15287);
            images_bossmmillatailend_3685_0_1[1] = get_internal_image(15288);
            images_bossmmillatailend_3685_0_16[0] = get_internal_image(15289);
            images_bossmmillatailend_3685_0_16[1] = get_internal_image(15290);
            images_bossmmillatailend_3685_0_17[0] = get_internal_image(15291);
            images_bossmmillatailend_3685_0_17[1] = get_internal_image(15292);
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
FrameObject * create_bossmmillatailend_3685(int x, int y)
{
    return new (Active::pool.create()) BossMMillaTailEnd_3685(x, y);
}
static Image* images_npcmillabody_3686_0_0[1];
static Direction direction_npcmillabody_3686_0_0 = {0, 50, 50, 0, 1, images_npcmillabody_3686_0_0, 1};
static Animation anim_npcmillabody_3686_0 = {&direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, NULL, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0, &direction_npcmillabody_3686_0_0};
static Animation * anim_array_npcmillabody_3686[1] = {&anim_npcmillabody_3686_0};
static Animations anim_npcmillabody_3686 = {1, &anim_array_npcmillabody_3686[0]};
static bool anim_npcmillabody_3686_initialized;
class NPCMillaBody_3686 : public Active
{
public:
    NPCMillaBody_3686(int x, int y) : Active(x, y, NPCMillaBody_3686_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_MillaBody", 13);
#endif
        this->animations = &anim_npcmillabody_3686;
        if (!anim_npcmillabody_3686_initialized) {
            anim_npcmillabody_3686_initialized = true;
            images_npcmillabody_3686_0_0[0] = get_internal_image(8922);
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
FrameObject * create_npcmillabody_3686(int x, int y)
{
    return new (Active::pool.create()) NPCMillaBody_3686(x, y);
}
class LevelParallaxPiece0_3687 : public SystemBox
{
public:
    LevelParallaxPiece0_3687(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3687_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 426;
        height = 380;
        type = PATTERN_IMAGE;
        image = get_internal_image(14826);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3687(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3687(x, y);
}
class FDCorePipe3_3688 : public Backdrop
{
public:
    FDCorePipe3_3688(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15105);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe3_3688(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe3_3688(x, y);
}
class FDCorePipe4_3689 : public Backdrop
{
public:
    FDCorePipe4_3689(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15106);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe4_3689(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe4_3689(x, y);
}
class FDCorePipe6_3690 : public Backdrop
{
public:
    FDCorePipe6_3690(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15102);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe6_3690(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe6_3690(x, y);
}
class FDCorePipe5_3691 : public Backdrop
{
public:
    FDCorePipe5_3691(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15098);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe5_3691(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe5_3691(x, y);
}
class FDCorePipe7_3692 : public Backdrop
{
public:
    FDCorePipe7_3692(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15112);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe7_3692(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe7_3692(x, y);
}
class FDCorePipe1_3693 : public Backdrop
{
public:
    FDCorePipe1_3693(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15103);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe1_3693(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe1_3693(x, y);
}
class FDCorePipe8_3694 : public Backdrop
{
public:
    FDCorePipe8_3694(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15100);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe8_3694(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe8_3694(x, y);
}
class FDCorePipe2_3695 : public Backdrop
{
public:
    FDCorePipe2_3695(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_CorePipe 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15104);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdcorepipe2_3695(int x, int y)
{
    return new (Backdrop::pool.create()) FDCorePipe2_3695(x, y);
}
class LevelParallaxPiece1_3696 : public SystemBox
{
public:
    LevelParallaxPiece1_3696(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3696_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 426;
        height = 88;
        type = PATTERN_IMAGE;
        image = get_internal_image(11486);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3696(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3696(x, y);
}
class FDBackPipe_3697 : public Backdrop
{
public:
    FDBackPipe_3697(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_BackPipe", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15216);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdbackpipe_3697(int x, int y)
{
    return new (Backdrop::pool.create()) FDBackPipe_3697(x, y);
}
class FDGadget1_3698 : public Backdrop
{
public:
    FDGadget1_3698(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_Gadget 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15096);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fdgadget1_3698(int x, int y)
{
    return new (Backdrop::pool.create()) FDGadget1_3698(x, y);
}
class FDBluePipe3_3699 : public Backdrop
{
public:
    FDBluePipe3_3699(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_BluePipe 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2898);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdbluepipe3_3699(int x, int y)
{
    return new (Backdrop::pool.create()) FDBluePipe3_3699(x, y);
}
class FDDeepCore4_3700 : public Backdrop
{
public:
    FDDeepCore4_3700(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13081);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore4_3700(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore4_3700(x, y);
}
class FDDeepCore6_3701 : public Backdrop
{
public:
    FDDeepCore6_3701(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 6", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15168);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore6_3701(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore6_3701(x, y);
}
class FDBluePipe2_3702 : public Backdrop
{
public:
    FDBluePipe2_3702(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_BluePipe 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15108);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_fdbluepipe2_3702(int x, int y)
{
    return new (Backdrop::pool.create()) FDBluePipe2_3702(x, y);
}
class FDDeepCore8_3703 : public Backdrop
{
public:
    FDDeepCore8_3703(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 8", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15164);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore8_3703(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore8_3703(x, y);
}
class FDDeepCore5_3704 : public Backdrop
{
public:
    FDDeepCore5_3704(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 5", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15167);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore5_3704(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore5_3704(x, y);
}
class FDDeepCore11_3705 : public Backdrop
{
public:
    FDDeepCore11_3705(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 11", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15160);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore11_3705(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore11_3705(x, y);
}
class FDDeepCore12_3706 : public Backdrop
{
public:
    FDDeepCore12_3706(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 12", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15161);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore12_3706(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore12_3706(x, y);
}
class FDDeepCore9_3707 : public Backdrop
{
public:
    FDDeepCore9_3707(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 9", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15169);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore9_3707(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore9_3707(x, y);
}
class FDDeepCore7_3708 : public Backdrop
{
public:
    FDDeepCore7_3708(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 7", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15165);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore7_3708(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore7_3708(x, y);
}
class FDDeepCore1_3709 : public Backdrop
{
public:
    FDDeepCore1_3709(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15158);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore1_3709(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore1_3709(x, y);
}
class FDDeepCore10_3710 : public Backdrop
{
public:
    FDDeepCore10_3710(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 10", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15159);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore10_3710(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore10_3710(x, y);
}
class FDDeepCore13_3711 : public Backdrop
{
public:
    FDDeepCore13_3711(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 13", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15162);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore13_3711(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore13_3711(x, y);
}
class FDDeepCore14_3712 : public Backdrop
{
public:
    FDDeepCore14_3712(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 14", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15163);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore14_3712(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore14_3712(x, y);
}
class FDDeepCore2_3713 : public Backdrop
{
public:
    FDDeepCore2_3713(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FD_DeepCore 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(15166);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_fddeepcore2_3713(int x, int y)
{
    return new (Backdrop::pool.create()) FDDeepCore2_3713(x, y);
}
