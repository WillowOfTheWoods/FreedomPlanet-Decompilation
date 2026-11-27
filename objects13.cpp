#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class SwitchBase_1209 : public Backdrop
{
public:
    SwitchBase_1209(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(200);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_1209(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_1209(x, y);
}
class RMEntrywayLeft2_1210 : public Backdrop
{
public:
    RMEntrywayLeft2_1210(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayLeft2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2451);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmentrywayleft2_1210(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayLeft2_1210(x, y);
}
class Loop7_1211 : public Backdrop
{
public:
    Loop7_1211(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 7", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2820);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop7_1211(int x, int y)
{
    return new (Backdrop::pool.create()) Loop7_1211(x, y);
}
class Loop3_1212 : public Backdrop
{
public:
    Loop3_1212(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 3", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9674);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop3_1212(int x, int y)
{
    return new (Backdrop::pool.create()) Loop3_1212(x, y);
}
class Loop5_1213 : public Backdrop
{
public:
    Loop5_1213(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 5", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2828);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop5_1213(int x, int y)
{
    return new (Backdrop::pool.create()) Loop5_1213(x, y);
}
class Loop4_1214 : public Backdrop
{
public:
    Loop4_1214(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 4", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9672);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop4_1214(int x, int y)
{
    return new (Backdrop::pool.create()) Loop4_1214(x, y);
}
class Loop2_1215 : public Backdrop
{
public:
    Loop2_1215(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 2", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9675);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop2_1215(int x, int y)
{
    return new (Backdrop::pool.create()) Loop2_1215(x, y);
}
class Loop6_1216 : public Backdrop
{
public:
    Loop6_1216(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 6", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9681);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop6_1216(int x, int y)
{
    return new (Backdrop::pool.create()) Loop6_1216(x, y);
}
class Loop6Down_1217 : public Backdrop
{
public:
    Loop6Down_1217(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 6 down", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2815);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop6down_1217(int x, int y)
{
    return new (Backdrop::pool.create()) Loop6Down_1217(x, y);
}
class Loop8_1218 : public Backdrop
{
public:
    Loop8_1218(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 8", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10594);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop8_1218(int x, int y)
{
    return new (Backdrop::pool.create()) Loop8_1218(x, y);
}
class BrickCurve1_1219 : public Backdrop
{
public:
    BrickCurve1_1219(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick curve 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2817);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_brickcurve1_1219(int x, int y)
{
    return new (Backdrop::pool.create()) BrickCurve1_1219(x, y);
}
class RMBrickCurve2_1220 : public Backdrop
{
public:
    RMBrickCurve2_1220(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BrickCurve2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2365);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrickcurve2_1220(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrickCurve2_1220(x, y);
}
class Backdrop3_1221 : public Backdrop
{
public:
    Backdrop3_1221(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3194);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_1221(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_1221(x, y);
}
class Backdrop_1222 : public Backdrop
{
public:
    Backdrop_1222(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1275);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_1222(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_1222(x, y);
}
class Backdrop2_1223 : public Backdrop
{
public:
    Backdrop2_1223(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1274);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_1223(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_1223(x, y);
}
class Brick23_1224 : public Backdrop
{
public:
    Brick23_1224(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 23", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7203);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_brick23_1224(int x, int y)
{
    return new (Backdrop::pool.create()) Brick23_1224(x, y);
}
class BrickCurve4Back_1225 : public Backdrop
{
public:
    BrickCurve4Back_1225(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick curve 4 back", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3122);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brickcurve4back_1225(int x, int y)
{
    return new (Backdrop::pool.create()) BrickCurve4Back_1225(x, y);
}
class RMBrickCurve3_1226 : public Backdrop
{
public:
    RMBrickCurve3_1226(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BrickCurve3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10616);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrickcurve3_1226(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrickCurve3_1226(x, y);
}
class Loop9_1227 : public Backdrop
{
public:
    Loop9_1227(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 9", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2487);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop9_1227(int x, int y)
{
    return new (Backdrop::pool.create()) Loop9_1227(x, y);
}
class BrickCurve4_1228 : public Backdrop
{
public:
    BrickCurve4_1228(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick curve 4", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(47);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_brickcurve4_1228(int x, int y)
{
    return new (Backdrop::pool.create()) BrickCurve4_1228(x, y);
}
class GimmickAxleTunnelBack_1229 : public Backdrop
{
public:
    GimmickAxleTunnelBack_1229(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_AxleTunnelBack", 22);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2827);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickaxletunnelback_1229(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickAxleTunnelBack_1229(x, y);
}
class Brick22_1230 : public Backdrop
{
public:
    Brick22_1230(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 22", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5333);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_brick22_1230(int x, int y)
{
    return new (Backdrop::pool.create()) Brick22_1230(x, y);
}
class SwitchBase2_1231 : public Backdrop
{
public:
    SwitchBase2_1231(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2095);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase2_1231(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase2_1231(x, y);
}
static Image* images_levellayer101_1232_0_0[1];
static Direction direction_levellayer101_1232_0_0 = {0, 50, 50, 0, 1, images_levellayer101_1232_0_0, 1};
static Animation anim_levellayer101_1232_0 = {&direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, NULL, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0, &direction_levellayer101_1232_0_0};
static Animation * anim_array_levellayer101_1232[1] = {&anim_levellayer101_1232_0};
static Animations anim_levellayer101_1232 = {1, &anim_array_levellayer101_1232[0]};
static bool anim_levellayer101_1232_initialized;
class LevelLayer101_1232 : public Active
{
public:
    LevelLayer101_1232(int x, int y) : Active(x, y, LevelLayer101_1232_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_01", 15);
#endif
        this->animations = &anim_levellayer101_1232;
        if (!anim_levellayer101_1232_initialized) {
            anim_levellayer101_1232_initialized = true;
            images_levellayer101_1232_0_0[0] = get_internal_image(11659);
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
FrameObject * create_levellayer101_1232(int x, int y)
{
    return new (Active::pool.create()) LevelLayer101_1232(x, y);
}
static Image* images_objectjumppad_1233_0_0[1];
static Direction direction_objectjumppad_1233_0_0 = {0, 25, 25, 0, -1, images_objectjumppad_1233_0_0, 1};
static Image* images_objectjumppad_1233_0_1[4];
static Direction direction_objectjumppad_1233_0_1 = {1, 25, 25, 0, -1, images_objectjumppad_1233_0_1, 4};
static Image* images_objectjumppad_1233_0_2[1];
static Direction direction_objectjumppad_1233_0_2 = {2, 25, 25, 0, -1, images_objectjumppad_1233_0_2, 1};
static Animation anim_objectjumppad_1233_0 = {&direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_1, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, &direction_objectjumppad_1233_0_2, NULL, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0, &direction_objectjumppad_1233_0_0};
static Animation * anim_array_objectjumppad_1233[1] = {&anim_objectjumppad_1233_0};
static Animations anim_objectjumppad_1233 = {1, &anim_array_objectjumppad_1233[0]};
static bool anim_objectjumppad_1233_initialized;
class ObjectJumppad_1233 : public Active
{
public:
    ObjectJumppad_1233(int x, int y) : Active(x, y, ObjectJumppad_1233_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Jumppad", 14);
#endif
        this->animations = &anim_objectjumppad_1233;
        if (!anim_objectjumppad_1233_initialized) {
            anim_objectjumppad_1233_initialized = true;
            images_objectjumppad_1233_0_0[0] = get_internal_image(4904);
            images_objectjumppad_1233_0_1[0] = get_internal_image(4914);
            images_objectjumppad_1233_0_1[1] = get_internal_image(4921);
            images_objectjumppad_1233_0_1[2] = get_internal_image(4925);
            images_objectjumppad_1233_0_1[3] = get_internal_image(4927);
            images_objectjumppad_1233_0_2[0] = get_internal_image(4904);
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
FrameObject * create_objectjumppad_1233(int x, int y)
{
    return new (Active::pool.create()) ObjectJumppad_1233(x, y);
}
static Image* images_levellayer1loop01_1234_0_0[1];
static Direction direction_levellayer1loop01_1234_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop01_1234_0_0, 1};
static Animation anim_levellayer1loop01_1234_0 = {&direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, NULL, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0, &direction_levellayer1loop01_1234_0_0};
static Animation * anim_array_levellayer1loop01_1234[1] = {&anim_levellayer1loop01_1234_0};
static Animations anim_levellayer1loop01_1234 = {1, &anim_array_levellayer1loop01_1234[0]};
static bool anim_levellayer1loop01_1234_initialized;
class LevelLayer1Loop01_1234 : public Active
{
public:
    LevelLayer1Loop01_1234(int x, int y) : Active(x, y, LevelLayer1Loop01_1234_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop01", 19);
#endif
        this->animations = &anim_levellayer1loop01_1234;
        if (!anim_levellayer1loop01_1234_initialized) {
            anim_levellayer1loop01_1234_initialized = true;
            images_levellayer1loop01_1234_0_0[0] = get_internal_image(10618);
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
FrameObject * create_levellayer1loop01_1234(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop01_1234(x, y);
}
static Image* images_levellayer1loop02_1235_0_0[1];
static Direction direction_levellayer1loop02_1235_0_0 = {0, 50, 50, 0, 1, images_levellayer1loop02_1235_0_0, 1};
static Animation anim_levellayer1loop02_1235_0 = {&direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, NULL, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0, &direction_levellayer1loop02_1235_0_0};
static Animation * anim_array_levellayer1loop02_1235[1] = {&anim_levellayer1loop02_1235_0};
static Animations anim_levellayer1loop02_1235 = {1, &anim_array_levellayer1loop02_1235[0]};
static bool anim_levellayer1loop02_1235_initialized;
class LevelLayer1Loop02_1235 : public Active
{
public:
    LevelLayer1Loop02_1235(int x, int y) : Active(x, y, LevelLayer1Loop02_1235_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_Loop02", 19);
#endif
        this->animations = &anim_levellayer1loop02_1235;
        if (!anim_levellayer1loop02_1235_initialized) {
            anim_levellayer1loop02_1235_initialized = true;
            images_levellayer1loop02_1235_0_0[0] = get_internal_image(9674);
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
FrameObject * create_levellayer1loop02_1235(int x, int y)
{
    return new (Active::pool.create()) LevelLayer1Loop02_1235(x, y);
}
static Image* images_levellayer116_1236_0_0[1];
static Direction direction_levellayer116_1236_0_0 = {0, 50, 50, 0, 1, images_levellayer116_1236_0_0, 1};
static Animation anim_levellayer116_1236_0 = {&direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, NULL, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0, &direction_levellayer116_1236_0_0};
static Animation * anim_array_levellayer116_1236[1] = {&anim_levellayer116_1236_0};
static Animations anim_levellayer116_1236 = {1, &anim_array_levellayer116_1236[0]};
static bool anim_levellayer116_1236_initialized;
class LevelLayer116_1236 : public Active
{
public:
    LevelLayer116_1236(int x, int y) : Active(x, y, LevelLayer116_1236_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("Level_Layer1_16", 15);
#endif
        this->animations = &anim_levellayer116_1236;
        if (!anim_levellayer116_1236_initialized) {
            anim_levellayer116_1236_initialized = true;
            images_levellayer116_1236_0_0[0] = get_internal_image(2818);
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
FrameObject * create_levellayer116_1236(int x, int y)
{
    return new (Active::pool.create()) LevelLayer116_1236(x, y);
}
static Image* images_levellayer001_1237_0_0[1];
static Direction direction_levellayer001_1237_0_0 = {0, 50, 50, 0, 1, images_levellayer001_1237_0_0, 1};
static Animation anim_levellayer001_1237_0 = {&direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, NULL, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0, &direction_levellayer001_1237_0_0};
static Animation * anim_array_levellayer001_1237[1] = {&anim_levellayer001_1237_0};
static Animations anim_levellayer001_1237 = {1, &anim_array_levellayer001_1237[0]};
static bool anim_levellayer001_1237_initialized;
class LevelLayer001_1237 : public Active
{
public:
    LevelLayer001_1237(int x, int y) : Active(x, y, LevelLayer001_1237_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_01", 15);
#endif
        this->animations = &anim_levellayer001_1237;
        if (!anim_levellayer001_1237_initialized) {
            anim_levellayer001_1237_initialized = true;
            images_levellayer001_1237_0_0[0] = get_internal_image(2085);
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
FrameObject * create_levellayer001_1237(int x, int y)
{
    return new (Active::pool.create()) LevelLayer001_1237(x, y);
}
static Image* images_levellayer02_1238_0_0[1];
static Direction direction_levellayer02_1238_0_0 = {0, 50, 50, 0, 1, images_levellayer02_1238_0_0, 1};
static Animation anim_levellayer02_1238_0 = {&direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, NULL, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0, &direction_levellayer02_1238_0_0};
static Animation * anim_array_levellayer02_1238[1] = {&anim_levellayer02_1238_0};
static Animations anim_levellayer02_1238 = {1, &anim_array_levellayer02_1238[0]};
static bool anim_levellayer02_1238_initialized;
class LevelLayer02_1238 : public Active
{
public:
    LevelLayer02_1238(int x, int y) : Active(x, y, LevelLayer02_1238_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_ 2", 15);
#endif
        this->animations = &anim_levellayer02_1238;
        if (!anim_levellayer02_1238_initialized) {
            anim_levellayer02_1238_initialized = true;
            images_levellayer02_1238_0_0[0] = get_internal_image(6959);
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
FrameObject * create_levellayer02_1238(int x, int y)
{
    return new (Active::pool.create()) LevelLayer02_1238(x, y);
}
static Image* images_layerchangeswitch2_1239_0_0[1];
static Direction direction_layerchangeswitch2_1239_0_0 = {0, 50, 50, 0, 1, images_layerchangeswitch2_1239_0_0, 1};
static Animation anim_layerchangeswitch2_1239_0 = {&direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, NULL, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0, &direction_layerchangeswitch2_1239_0_0};
static Animation * anim_array_layerchangeswitch2_1239[1] = {&anim_layerchangeswitch2_1239_0};
static Animations anim_layerchangeswitch2_1239 = {1, &anim_array_layerchangeswitch2_1239[0]};
static bool anim_layerchangeswitch2_1239_initialized;
class LayerChangeSwitch2_1239 : public Active
{
public:
    LayerChangeSwitch2_1239(int x, int y) : Active(x, y, LayerChangeSwitch2_1239_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LayerChange_Switch 2", 20);
#endif
        set_visible(false);
        this->animations = &anim_layerchangeswitch2_1239;
        if (!anim_layerchangeswitch2_1239_initialized) {
            anim_layerchangeswitch2_1239_initialized = true;
            images_layerchangeswitch2_1239_0_0[0] = get_internal_image(2822);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_331_layerchange_switch_2.value;
        if (!global_data_331_layerchange_switch_2.init) {
            global_data_331_layerchange_switch_2.init = true;
        }
    }
};
FrameObject * create_layerchangeswitch2_1239(int x, int y)
{
    return new (Active::pool.create()) LayerChangeSwitch2_1239(x, y);
}
static Image* images_gimmickrelicflippanel_1240_0_0[1];
static Direction direction_gimmickrelicflippanel_1240_0_0 = {0, 50, 50, 0, 1, images_gimmickrelicflippanel_1240_0_0, 1};
static Animation anim_gimmickrelicflippanel_1240_0 = {&direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, NULL, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0, &direction_gimmickrelicflippanel_1240_0_0};
static Animation * anim_array_gimmickrelicflippanel_1240[1] = {&anim_gimmickrelicflippanel_1240_0};
static Animations anim_gimmickrelicflippanel_1240 = {1, &anim_array_gimmickrelicflippanel_1240[0]};
static bool anim_gimmickrelicflippanel_1240_initialized;
class GimmickRelicFlipPanel_1240 : public Active
{
public:
    GimmickRelicFlipPanel_1240(int x, int y) : Active(x, y, GimmickRelicFlipPanel_1240_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_RelicFlipPanel", 22);
#endif
        this->animations = &anim_gimmickrelicflippanel_1240;
        if (!anim_gimmickrelicflippanel_1240_initialized) {
            anim_gimmickrelicflippanel_1240_initialized = true;
            images_gimmickrelicflippanel_1240_0_0[0] = get_internal_image(9451);
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
FrameObject * create_gimmickrelicflippanel_1240(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicFlipPanel_1240(x, y);
}
static Image* images_levellayer0loop04_1241_0_0[1];
static Direction direction_levellayer0loop04_1241_0_0 = {0, 50, 50, 0, 1, images_levellayer0loop04_1241_0_0, 1};
static Animation anim_levellayer0loop04_1241_0 = {&direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, NULL, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0, &direction_levellayer0loop04_1241_0_0};
static Animation * anim_array_levellayer0loop04_1241[1] = {&anim_levellayer0loop04_1241_0};
static Animations anim_levellayer0loop04_1241 = {1, &anim_array_levellayer0loop04_1241[0]};
static bool anim_levellayer0loop04_1241_initialized;
class LevelLayer0Loop04_1241 : public Active
{
public:
    LevelLayer0Loop04_1241(int x, int y) : Active(x, y, LevelLayer0Loop04_1241_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_Loop04", 19);
#endif
        this->animations = &anim_levellayer0loop04_1241;
        if (!anim_levellayer0loop04_1241_initialized) {
            anim_levellayer0loop04_1241_initialized = true;
            images_levellayer0loop04_1241_0_0[0] = get_internal_image(2829);
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
FrameObject * create_levellayer0loop04_1241(int x, int y)
{
    return new (Active::pool.create()) LevelLayer0Loop04_1241(x, y);
}
static Image* images_gimmickrelicflippanel2_1242_0_0[1];
static Direction direction_gimmickrelicflippanel2_1242_0_0 = {0, 50, 50, 0, 1, images_gimmickrelicflippanel2_1242_0_0, 1};
static Animation anim_gimmickrelicflippanel2_1242_0 = {&direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, NULL, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0, &direction_gimmickrelicflippanel2_1242_0_0};
static Animation * anim_array_gimmickrelicflippanel2_1242[1] = {&anim_gimmickrelicflippanel2_1242_0};
static Animations anim_gimmickrelicflippanel2_1242 = {1, &anim_array_gimmickrelicflippanel2_1242[0]};
static bool anim_gimmickrelicflippanel2_1242_initialized;
class GimmickRelicFlipPanel2_1242 : public Active
{
public:
    GimmickRelicFlipPanel2_1242(int x, int y) : Active(x, y, GimmickRelicFlipPanel2_1242_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RelicFlipPanel 2", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickrelicflippanel2_1242;
        if (!anim_gimmickrelicflippanel2_1242_initialized) {
            anim_gimmickrelicflippanel2_1242_initialized = true;
            images_gimmickrelicflippanel2_1242_0_0[0] = get_internal_image(3195);
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
FrameObject * create_gimmickrelicflippanel2_1242(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicFlipPanel2_1242(x, y);
}
static Image* images_gimmickrelicflippanel3_1243_0_0[1];
static Direction direction_gimmickrelicflippanel3_1243_0_0 = {0, 50, 50, 0, 1, images_gimmickrelicflippanel3_1243_0_0, 1};
static Animation anim_gimmickrelicflippanel3_1243_0 = {&direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, NULL, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0, &direction_gimmickrelicflippanel3_1243_0_0};
static Animation * anim_array_gimmickrelicflippanel3_1243[1] = {&anim_gimmickrelicflippanel3_1243_0};
static Animations anim_gimmickrelicflippanel3_1243 = {1, &anim_array_gimmickrelicflippanel3_1243[0]};
static bool anim_gimmickrelicflippanel3_1243_initialized;
class GimmickRelicFlipPanel3_1243 : public Active
{
public:
    GimmickRelicFlipPanel3_1243(int x, int y) : Active(x, y, GimmickRelicFlipPanel3_1243_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RelicFlipPanel 3", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickrelicflippanel3_1243;
        if (!anim_gimmickrelicflippanel3_1243_initialized) {
            anim_gimmickrelicflippanel3_1243_initialized = true;
            images_gimmickrelicflippanel3_1243_0_0[0] = get_internal_image(3121);
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
FrameObject * create_gimmickrelicflippanel3_1243(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicFlipPanel3_1243(x, y);
}
static Image* images_gimmickrelicflippanel4_1244_0_0[1];
static Direction direction_gimmickrelicflippanel4_1244_0_0 = {0, 50, 50, 0, 1, images_gimmickrelicflippanel4_1244_0_0, 1};
static Animation anim_gimmickrelicflippanel4_1244_0 = {&direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, NULL, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0, &direction_gimmickrelicflippanel4_1244_0_0};
static Animation * anim_array_gimmickrelicflippanel4_1244[1] = {&anim_gimmickrelicflippanel4_1244_0};
static Animations anim_gimmickrelicflippanel4_1244 = {1, &anim_array_gimmickrelicflippanel4_1244[0]};
static bool anim_gimmickrelicflippanel4_1244_initialized;
class GimmickRelicFlipPanel4_1244 : public Active
{
public:
    GimmickRelicFlipPanel4_1244(int x, int y) : Active(x, y, GimmickRelicFlipPanel4_1244_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RelicFlipPanel 4", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickrelicflippanel4_1244;
        if (!anim_gimmickrelicflippanel4_1244_initialized) {
            anim_gimmickrelicflippanel4_1244_initialized = true;
            images_gimmickrelicflippanel4_1244_0_0[0] = get_internal_image(3218);
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
FrameObject * create_gimmickrelicflippanel4_1244(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicFlipPanel4_1244(x, y);
}
static Image* images_clockdial1_1245_0_0[1];
static Direction direction_clockdial1_1245_0_0 = {0, 50, 50, 0, 1, images_clockdial1_1245_0_0, 1};
static Animation anim_clockdial1_1245_0 = {&direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, NULL, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0, &direction_clockdial1_1245_0_0};
static Animation * anim_array_clockdial1_1245[1] = {&anim_clockdial1_1245_0};
static Animations anim_clockdial1_1245 = {1, &anim_array_clockdial1_1245[0]};
static bool anim_clockdial1_1245_initialized;
class ClockDial1_1245 : public Active
{
public:
    ClockDial1_1245(int x, int y) : Active(x, y, ClockDial1_1245_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Clock dial 1", 12);
#endif
        this->animations = &anim_clockdial1_1245;
        if (!anim_clockdial1_1245_initialized) {
            anim_clockdial1_1245_initialized = true;
            images_clockdial1_1245_0_0[0] = get_internal_image(9650);
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
FrameObject * create_clockdial1_1245(int x, int y)
{
    return new (Active::pool.create()) ClockDial1_1245(x, y);
}
static Image* images_clockdial2_1246_0_0[1];
static Direction direction_clockdial2_1246_0_0 = {0, 50, 50, 0, 1, images_clockdial2_1246_0_0, 1};
static Animation anim_clockdial2_1246_0 = {&direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, NULL, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0, &direction_clockdial2_1246_0_0};
static Animation * anim_array_clockdial2_1246[1] = {&anim_clockdial2_1246_0};
static Animations anim_clockdial2_1246 = {1, &anim_array_clockdial2_1246[0]};
static bool anim_clockdial2_1246_initialized;
class ClockDial2_1246 : public Active
{
public:
    ClockDial2_1246(int x, int y) : Active(x, y, ClockDial2_1246_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Clock dial 2", 12);
#endif
        this->animations = &anim_clockdial2_1246;
        if (!anim_clockdial2_1246_initialized) {
            anim_clockdial2_1246_initialized = true;
            images_clockdial2_1246_0_0[0] = get_internal_image(9649);
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
FrameObject * create_clockdial2_1246(int x, int y)
{
    return new (Active::pool.create()) ClockDial2_1246(x, y);
}
static Image* images_gimmickhangingmovingsensor2_1247_0_0[1];
static Direction direction_gimmickhangingmovingsensor2_1247_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor2_1247_0_0, 1};
static Animation anim_gimmickhangingmovingsensor2_1247_0 = {&direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, NULL, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0, &direction_gimmickhangingmovingsensor2_1247_0_0};
static Animation * anim_array_gimmickhangingmovingsensor2_1247[1] = {&anim_gimmickhangingmovingsensor2_1247_0};
static Animations anim_gimmickhangingmovingsensor2_1247 = {1, &anim_array_gimmickhangingmovingsensor2_1247[0]};
static bool anim_gimmickhangingmovingsensor2_1247_initialized;
class GimmickHangingMovingSensor2_1247 : public Active
{
public:
    GimmickHangingMovingSensor2_1247(int x, int y) : Active(x, y, GimmickHangingMovingSensor2_1247_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor 2", 30);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor2_1247;
        if (!anim_gimmickhangingmovingsensor2_1247_initialized) {
            anim_gimmickhangingmovingsensor2_1247_initialized = true;
            images_gimmickhangingmovingsensor2_1247_0_0[0] = get_internal_image(532);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 88);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingsensor2_1247(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor2_1247(x, y);
}
static Image* images_gimmickhangingmovingbar2_1248_0_0[4];
static Direction direction_gimmickhangingmovingbar2_1248_0_0 = {0, 50, 50, 0, -1, images_gimmickhangingmovingbar2_1248_0_0, 4};
static Animation anim_gimmickhangingmovingbar2_1248_0 = {&direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, NULL, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0, &direction_gimmickhangingmovingbar2_1248_0_0};
static Animation * anim_array_gimmickhangingmovingbar2_1248[1] = {&anim_gimmickhangingmovingbar2_1248_0};
static Animations anim_gimmickhangingmovingbar2_1248 = {1, &anim_array_gimmickhangingmovingbar2_1248[0]};
static bool anim_gimmickhangingmovingbar2_1248_initialized;
class GimmickHangingMovingBar2_1248 : public Active
{
public:
    GimmickHangingMovingBar2_1248(int x, int y) : Active(x, y, GimmickHangingMovingBar2_1248_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar 2", 27);
#endif
        this->animations = &anim_gimmickhangingmovingbar2_1248;
        if (!anim_gimmickhangingmovingbar2_1248_initialized) {
            anim_gimmickhangingmovingbar2_1248_initialized = true;
            images_gimmickhangingmovingbar2_1248_0_0[0] = get_internal_image(13185);
            images_gimmickhangingmovingbar2_1248_0_0[1] = get_internal_image(13186);
            images_gimmickhangingmovingbar2_1248_0_0[2] = get_internal_image(13187);
            images_gimmickhangingmovingbar2_1248_0_0[3] = get_internal_image(13188);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 88);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingbar2_1248(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar2_1248(x, y);
}
static Image* images_minibossgolempiece2_1249_0_0[1];
static Direction direction_minibossgolempiece2_1249_0_0 = {0, 50, 50, 0, 1, images_minibossgolempiece2_1249_0_0, 1};
static Animation anim_minibossgolempiece2_1249_0 = {&direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, NULL, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0, &direction_minibossgolempiece2_1249_0_0};
static Animation * anim_array_minibossgolempiece2_1249[1] = {&anim_minibossgolempiece2_1249_0};
static Animations anim_minibossgolempiece2_1249 = {1, &anim_array_minibossgolempiece2_1249[0]};
static bool anim_minibossgolempiece2_1249_initialized;
class MinibossGolemPiece2_1249 : public Active
{
public:
    MinibossGolemPiece2_1249(int x, int y) : Active(x, y, MinibossGolemPiece2_1249_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Miniboss_GolemPiece 2", 21);
#endif
        this->animations = &anim_minibossgolempiece2_1249;
        if (!anim_minibossgolempiece2_1249_initialized) {
            anim_minibossgolempiece2_1249_initialized = true;
            images_minibossgolempiece2_1249_0_0[0] = get_internal_image(10631);
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
FrameObject * create_minibossgolempiece2_1249(int x, int y)
{
    return new (Active::pool.create()) MinibossGolemPiece2_1249(x, y);
}
static Image* images_minibossgolempiece1_1250_0_0[1];
static Direction direction_minibossgolempiece1_1250_0_0 = {0, 50, 50, 0, 1, images_minibossgolempiece1_1250_0_0, 1};
static Animation anim_minibossgolempiece1_1250_0 = {&direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, NULL, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0, &direction_minibossgolempiece1_1250_0_0};
static Animation * anim_array_minibossgolempiece1_1250[1] = {&anim_minibossgolempiece1_1250_0};
static Animations anim_minibossgolempiece1_1250 = {1, &anim_array_minibossgolempiece1_1250[0]};
static bool anim_minibossgolempiece1_1250_initialized;
class MinibossGolemPiece1_1250 : public Active
{
public:
    MinibossGolemPiece1_1250(int x, int y) : Active(x, y, MinibossGolemPiece1_1250_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Miniboss_GolemPiece 1", 21);
#endif
        this->animations = &anim_minibossgolempiece1_1250;
        if (!anim_minibossgolempiece1_1250_initialized) {
            anim_minibossgolempiece1_1250_initialized = true;
            images_minibossgolempiece1_1250_0_0[0] = get_internal_image(10631);
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
FrameObject * create_minibossgolempiece1_1250(int x, int y)
{
    return new (Active::pool.create()) MinibossGolemPiece1_1250(x, y);
}
static Image* images_minibossgolem2_1251_0_0[1];
static Direction direction_minibossgolem2_1251_0_0 = {0, 50, 50, 0, 1, images_minibossgolem2_1251_0_0, 1};
static Image* images_minibossgolem2_1251_0_1[1];
static Direction direction_minibossgolem2_1251_0_1 = {1, 50, 50, 0, 1, images_minibossgolem2_1251_0_1, 1};
static Animation anim_minibossgolem2_1251_0 = {&direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_1, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0, &direction_minibossgolem2_1251_0_0};
static Animation * anim_array_minibossgolem2_1251[1] = {&anim_minibossgolem2_1251_0};
static Animations anim_minibossgolem2_1251 = {1, &anim_array_minibossgolem2_1251[0]};
static bool anim_minibossgolem2_1251_initialized;
class MinibossGolem2_1251 : public Active
{
public:
    MinibossGolem2_1251(int x, int y) : Active(x, y, MinibossGolem2_1251_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Golem 2", 16);
#endif
        set_visible(false);
        this->animations = &anim_minibossgolem2_1251;
        if (!anim_minibossgolem2_1251_initialized) {
            anim_minibossgolem2_1251_initialized = true;
            images_minibossgolem2_1251_0_0[0] = get_internal_image(2503);
            images_minibossgolem2_1251_0_1[0] = get_internal_image(10625);
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
FrameObject * create_minibossgolem2_1251(int x, int y)
{
    return new (Active::pool.create()) MinibossGolem2_1251(x, y);
}
static Image* images_minibossgolem_1252_0_0[1];
static Direction direction_minibossgolem_1252_0_0 = {0, 50, 50, 0, 1, images_minibossgolem_1252_0_0, 1};
static Image* images_minibossgolem_1252_0_8[1];
static Direction direction_minibossgolem_1252_0_8 = {8, 50, 50, 0, 1, images_minibossgolem_1252_0_8, 1};
static Animation anim_minibossgolem_1252_0 = {&direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, NULL, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, &direction_minibossgolem_1252_0_8, NULL, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0, &direction_minibossgolem_1252_0_0};
static Image* images_minibossgolem_1252_7_0[4];
static Direction direction_minibossgolem_1252_7_0 = {0, 50, 50, 0, 2, images_minibossgolem_1252_7_0, 4};
static Animation anim_minibossgolem_1252_7 = {&direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, NULL, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0, &direction_minibossgolem_1252_7_0};
static Animation * anim_array_minibossgolem_1252[8] = {&anim_minibossgolem_1252_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_minibossgolem_1252_7};
static Animations anim_minibossgolem_1252 = {8, &anim_array_minibossgolem_1252[0]};
static bool anim_minibossgolem_1252_initialized;
class MinibossGolem_1252 : public Active
{
public:
    MinibossGolem_1252(int x, int y) : Active(x, y, MinibossGolem_1252_type)
    {
        // qualifiers: 15, 16, 97
#ifndef NDEBUG
        name = std::string("Miniboss_Golem", 14);
#endif
        this->animations = &anim_minibossgolem_1252;
        if (!anim_minibossgolem_1252_initialized) {
            anim_minibossgolem_1252_initialized = true;
            images_minibossgolem_1252_0_0[0] = get_internal_image(3229);
            images_minibossgolem_1252_0_8[0] = get_internal_image(3262);
            images_minibossgolem_1252_7_0[0] = get_internal_image(3229);
            images_minibossgolem_1252_7_0[1] = get_internal_image(9645);
            images_minibossgolem_1252_7_0[2] = get_internal_image(9680);
            images_minibossgolem_1252_7_0[3] = get_internal_image(3262);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 100);
        alterables->values.set(5, 270);
        alterables->values.set(8, 2);
    }
};
FrameObject * create_minibossgolem_1252(int x, int y)
{
    return new (Active::pool.create()) MinibossGolem_1252(x, y);
}
static Image* images_gimmickmovingfloor1_1253_0_0[1];
static Direction direction_gimmickmovingfloor1_1253_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingfloor1_1253_0_0, 1};
static Animation anim_gimmickmovingfloor1_1253_0 = {&direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, NULL, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0, &direction_gimmickmovingfloor1_1253_0_0};
static Animation * anim_array_gimmickmovingfloor1_1253[1] = {&anim_gimmickmovingfloor1_1253_0};
static Animations anim_gimmickmovingfloor1_1253 = {1, &anim_array_gimmickmovingfloor1_1253[0]};
static bool anim_gimmickmovingfloor1_1253_initialized;
class GimmickMovingFloor1_1253 : public Active
{
public:
    GimmickMovingFloor1_1253(int x, int y) : Active(x, y, GimmickMovingFloor1_1253_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingFloor 1", 21);
#endif
        this->animations = &anim_gimmickmovingfloor1_1253;
        if (!anim_gimmickmovingfloor1_1253_initialized) {
            anim_gimmickmovingfloor1_1253_initialized = true;
            images_gimmickmovingfloor1_1253_0_0[0] = get_internal_image(7800);
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
FrameObject * create_gimmickmovingfloor1_1253(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingFloor1_1253(x, y);
}
static Image* images_gimmickmovingfloor2_1254_0_0[1];
static Direction direction_gimmickmovingfloor2_1254_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingfloor2_1254_0_0, 1};
static Animation anim_gimmickmovingfloor2_1254_0 = {&direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, NULL, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0, &direction_gimmickmovingfloor2_1254_0_0};
static Animation * anim_array_gimmickmovingfloor2_1254[1] = {&anim_gimmickmovingfloor2_1254_0};
static Animations anim_gimmickmovingfloor2_1254 = {1, &anim_array_gimmickmovingfloor2_1254[0]};
static bool anim_gimmickmovingfloor2_1254_initialized;
class GimmickMovingFloor2_1254 : public Active
{
public:
    GimmickMovingFloor2_1254(int x, int y) : Active(x, y, GimmickMovingFloor2_1254_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingFloor 2", 21);
#endif
        this->animations = &anim_gimmickmovingfloor2_1254;
        if (!anim_gimmickmovingfloor2_1254_initialized) {
            anim_gimmickmovingfloor2_1254_initialized = true;
            images_gimmickmovingfloor2_1254_0_0[0] = get_internal_image(7791);
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
FrameObject * create_gimmickmovingfloor2_1254(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingFloor2_1254(x, y);
}
static Image* images_gimmickmovingfloor3_1255_0_0[1];
static Direction direction_gimmickmovingfloor3_1255_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingfloor3_1255_0_0, 1};
static Animation anim_gimmickmovingfloor3_1255_0 = {&direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, NULL, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0, &direction_gimmickmovingfloor3_1255_0_0};
static Animation * anim_array_gimmickmovingfloor3_1255[1] = {&anim_gimmickmovingfloor3_1255_0};
static Animations anim_gimmickmovingfloor3_1255 = {1, &anim_array_gimmickmovingfloor3_1255[0]};
static bool anim_gimmickmovingfloor3_1255_initialized;
class GimmickMovingFloor3_1255 : public Active
{
public:
    GimmickMovingFloor3_1255(int x, int y) : Active(x, y, GimmickMovingFloor3_1255_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingFloor 3", 21);
#endif
        this->animations = &anim_gimmickmovingfloor3_1255;
        if (!anim_gimmickmovingfloor3_1255_initialized) {
            anim_gimmickmovingfloor3_1255_initialized = true;
            images_gimmickmovingfloor3_1255_0_0[0] = get_internal_image(7789);
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
FrameObject * create_gimmickmovingfloor3_1255(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingFloor3_1255(x, y);
}
static Image* images_gimmickhangingswitch_1256_0_0[1];
static Direction direction_gimmickhangingswitch_1256_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingswitch_1256_0_0, 1};
static Animation anim_gimmickhangingswitch_1256_0 = {&direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, NULL, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0, &direction_gimmickhangingswitch_1256_0_0};
static Animation * anim_array_gimmickhangingswitch_1256[1] = {&anim_gimmickhangingswitch_1256_0};
static Animations anim_gimmickhangingswitch_1256 = {1, &anim_array_gimmickhangingswitch_1256[0]};
static bool anim_gimmickhangingswitch_1256_initialized;
class GimmickHangingSwitch_1256 : public Active
{
public:
    GimmickHangingSwitch_1256(int x, int y) : Active(x, y, GimmickHangingSwitch_1256_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingSwitch", 21);
#endif
        this->animations = &anim_gimmickhangingswitch_1256;
        if (!anim_gimmickhangingswitch_1256_initialized) {
            anim_gimmickhangingswitch_1256_initialized = true;
            images_gimmickhangingswitch_1256_0_0[0] = get_internal_image(8770);
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
FrameObject * create_gimmickhangingswitch_1256(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingSwitch_1256(x, y);
}
static Image* images_gimmickhangingidleswitch_1257_0_0[1];
static Direction direction_gimmickhangingidleswitch_1257_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidleswitch_1257_0_0, 1};
static Animation anim_gimmickhangingidleswitch_1257_0 = {&direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, NULL, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0, &direction_gimmickhangingidleswitch_1257_0_0};
static Animation * anim_array_gimmickhangingidleswitch_1257[1] = {&anim_gimmickhangingidleswitch_1257_0};
static Animations anim_gimmickhangingidleswitch_1257 = {1, &anim_array_gimmickhangingidleswitch_1257[0]};
static bool anim_gimmickhangingidleswitch_1257_initialized;
class GimmickHangingIdleSwitch_1257 : public Active
{
public:
    GimmickHangingIdleSwitch_1257(int x, int y) : Active(x, y, GimmickHangingIdleSwitch_1257_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Switch", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingidleswitch_1257;
        if (!anim_gimmickhangingidleswitch_1257_initialized) {
            anim_gimmickhangingidleswitch_1257_initialized = true;
            images_gimmickhangingidleswitch_1257_0_0[0] = get_internal_image(552);
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
FrameObject * create_gimmickhangingidleswitch_1257(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleSwitch_1257(x, y);
}
static Image* images_gimmickhangingmover_1258_0_0[1];
static Direction direction_gimmickhangingmover_1258_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmover_1258_0_0, 1};
static Animation anim_gimmickhangingmover_1258_0 = {&direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, NULL, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0, &direction_gimmickhangingmover_1258_0_0};
static Animation * anim_array_gimmickhangingmover_1258[1] = {&anim_gimmickhangingmover_1258_0};
static Animations anim_gimmickhangingmover_1258 = {1, &anim_array_gimmickhangingmover_1258[0]};
static bool anim_gimmickhangingmover_1258_initialized;
class GimmickHangingMover_1258 : public Active
{
public:
    GimmickHangingMover_1258(int x, int y) : Active(x, y, GimmickHangingMover_1258_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMover", 20);
#endif
        this->animations = &anim_gimmickhangingmover_1258;
        if (!anim_gimmickhangingmover_1258_initialized) {
            anim_gimmickhangingmover_1258_initialized = true;
            images_gimmickhangingmover_1258_0_0[0] = get_internal_image(12856);
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
FrameObject * create_gimmickhangingmover_1258(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMover_1258(x, y);
}
static Image* images_gimmickhangingidlemover_1259_0_0[1];
static Direction direction_gimmickhangingidlemover_1259_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidlemover_1259_0_0, 1};
static Animation anim_gimmickhangingidlemover_1259_0 = {&direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, NULL, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0, &direction_gimmickhangingidlemover_1259_0_0};
static Animation * anim_array_gimmickhangingidlemover_1259[1] = {&anim_gimmickhangingidlemover_1259_0};
static Animations anim_gimmickhangingidlemover_1259 = {1, &anim_array_gimmickhangingidlemover_1259[0]};
static bool anim_gimmickhangingidlemover_1259_initialized;
class GimmickHangingIdleMover_1259 : public Active
{
public:
    GimmickHangingIdleMover_1259(int x, int y) : Active(x, y, GimmickHangingIdleMover_1259_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Mover", 25);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingidlemover_1259;
        if (!anim_gimmickhangingidlemover_1259_initialized) {
            anim_gimmickhangingidlemover_1259_initialized = true;
            images_gimmickhangingidlemover_1259_0_0[0] = get_internal_image(545);
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
FrameObject * create_gimmickhangingidlemover_1259(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleMover_1259(x, y);
}
static Image* images_levellayer002_1260_0_0[1];
static Direction direction_levellayer002_1260_0_0 = {0, 50, 50, 0, 1, images_levellayer002_1260_0_0, 1};
static Animation anim_levellayer002_1260_0 = {&direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, NULL, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0, &direction_levellayer002_1260_0_0};
static Animation * anim_array_levellayer002_1260[1] = {&anim_levellayer002_1260_0};
static Animations anim_levellayer002_1260 = {1, &anim_array_levellayer002_1260[0]};
static bool anim_levellayer002_1260_initialized;
class LevelLayer002_1260 : public Active
{
public:
    LevelLayer002_1260(int x, int y) : Active(x, y, LevelLayer002_1260_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_02", 15);
#endif
        this->animations = &anim_levellayer002_1260;
        if (!anim_levellayer002_1260_initialized) {
            anim_levellayer002_1260_initialized = true;
            images_levellayer002_1260_0_0[0] = get_internal_image(2099);
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
FrameObject * create_levellayer002_1260(int x, int y)
{
    return new (Active::pool.create()) LevelLayer002_1260(x, y);
}
static Image* images_levellayer015_1261_0_0[1];
static Direction direction_levellayer015_1261_0_0 = {0, 50, 50, 0, 1, images_levellayer015_1261_0_0, 1};
static Animation anim_levellayer015_1261_0 = {&direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, NULL, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0, &direction_levellayer015_1261_0_0};
static Animation * anim_array_levellayer015_1261[1] = {&anim_levellayer015_1261_0};
static Animations anim_levellayer015_1261 = {1, &anim_array_levellayer015_1261[0]};
static bool anim_levellayer015_1261_initialized;
class LevelLayer015_1261 : public Active
{
public:
    LevelLayer015_1261(int x, int y) : Active(x, y, LevelLayer015_1261_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Level_Layer0_15", 15);
#endif
        this->animations = &anim_levellayer015_1261;
        if (!anim_levellayer015_1261_initialized) {
            anim_levellayer015_1261_initialized = true;
            images_levellayer015_1261_0_0[0] = get_internal_image(2084);
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
FrameObject * create_levellayer015_1261(int x, int y)
{
    return new (Active::pool.create()) LevelLayer015_1261(x, y);
}
static Image* images_gimmickaxletunnel_1262_0_0[1];
static Direction direction_gimmickaxletunnel_1262_0_0 = {0, 50, 50, 0, 1, images_gimmickaxletunnel_1262_0_0, 1};
static Image* images_gimmickaxletunnel_1262_0_8[3];
static Direction direction_gimmickaxletunnel_1262_0_8 = {8, 50, 50, 0, 1, images_gimmickaxletunnel_1262_0_8, 3};
static Animation anim_gimmickaxletunnel_1262_0 = {&direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, NULL, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, &direction_gimmickaxletunnel_1262_0_8, NULL, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0, &direction_gimmickaxletunnel_1262_0_0};
static Animation * anim_array_gimmickaxletunnel_1262[1] = {&anim_gimmickaxletunnel_1262_0};
static Animations anim_gimmickaxletunnel_1262 = {1, &anim_array_gimmickaxletunnel_1262[0]};
static bool anim_gimmickaxletunnel_1262_initialized;
class GimmickAxleTunnel_1262 : public Active
{
public:
    GimmickAxleTunnel_1262(int x, int y) : Active(x, y, GimmickAxleTunnel_1262_type)
    {
        // qualifiers: 14, 98
#ifndef NDEBUG
        name = std::string("Gimmick_AxleTunnel", 18);
#endif
        this->animations = &anim_gimmickaxletunnel_1262;
        if (!anim_gimmickaxletunnel_1262_initialized) {
            anim_gimmickaxletunnel_1262_initialized = true;
            images_gimmickaxletunnel_1262_0_0[0] = get_internal_image(2830);
            images_gimmickaxletunnel_1262_0_8[0] = get_internal_image(3307);
            images_gimmickaxletunnel_1262_0_8[1] = get_internal_image(3289);
            images_gimmickaxletunnel_1262_0_8[2] = get_internal_image(3293);
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
FrameObject * create_gimmickaxletunnel_1262(int x, int y)
{
    return new (Active::pool.create()) GimmickAxleTunnel_1262(x, y);
}
class RMEntrywayLeft3_1263 : public Backdrop
{
public:
    RMEntrywayLeft3_1263(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayLeft3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2452);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrywayleft3_1263(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayLeft3_1263(x, y);
}
class RMEntryPurple2_1264 : public Backdrop
{
public:
    RMEntryPurple2_1264(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntryPurple2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2087);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrypurple2_1264(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntryPurple2_1264(x, y);
}
class RMEntryYellow2_1265 : public Backdrop
{
public:
    RMEntryYellow2_1265(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntryYellow2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2117);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentryyellow2_1265(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntryYellow2_1265(x, y);
}
class GimmickAxleTunnelScrew_1266 : public Backdrop
{
public:
    GimmickAxleTunnelScrew_1266(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_AxleTunnelScrew", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1257);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickaxletunnelscrew_1266(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickAxleTunnelScrew_1266(x, y);
}
static Image* images_gimmickhangingmovingsensor_1267_0_0[1];
static Direction direction_gimmickhangingmovingsensor_1267_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_1267_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_1267_0 = {&direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, NULL, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0, &direction_gimmickhangingmovingsensor_1267_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_1267[1] = {&anim_gimmickhangingmovingsensor_1267_0};
static Animations anim_gimmickhangingmovingsensor_1267 = {1, &anim_array_gimmickhangingmovingsensor_1267[0]};
static bool anim_gimmickhangingmovingsensor_1267_initialized;
class GimmickHangingMovingSensor_1267 : public Active
{
public:
    GimmickHangingMovingSensor_1267(int x, int y) : Active(x, y, GimmickHangingMovingSensor_1267_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_1267;
        if (!anim_gimmickhangingmovingsensor_1267_initialized) {
            anim_gimmickhangingmovingsensor_1267_initialized = true;
            images_gimmickhangingmovingsensor_1267_0_0[0] = get_internal_image(38);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 100);
        alterables->values.set(3, 1);
        alterables->values.set(5, 1);
        alterables->values.set(6, 150);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingsensor_1267(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_1267(x, y);
}
static Image* images_gimmickhangingmovingbar_1268_0_0[4];
static Direction direction_gimmickhangingmovingbar_1268_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingbar_1268_0_0, 4};
static Animation anim_gimmickhangingmovingbar_1268_0 = {&direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, NULL, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0, &direction_gimmickhangingmovingbar_1268_0_0};
static Animation * anim_array_gimmickhangingmovingbar_1268[1] = {&anim_gimmickhangingmovingbar_1268_0};
static Animations anim_gimmickhangingmovingbar_1268 = {1, &anim_array_gimmickhangingmovingbar_1268[0]};
static bool anim_gimmickhangingmovingbar_1268_initialized;
class GimmickHangingMovingBar_1268 : public Active
{
public:
    GimmickHangingMovingBar_1268(int x, int y) : Active(x, y, GimmickHangingMovingBar_1268_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar", 25);
#endif
        this->animations = &anim_gimmickhangingmovingbar_1268;
        if (!anim_gimmickhangingmovingbar_1268_initialized) {
            anim_gimmickhangingmovingbar_1268_initialized = true;
            images_gimmickhangingmovingbar_1268_0_0[0] = get_internal_image(2442);
            images_gimmickhangingmovingbar_1268_0_0[1] = get_internal_image(2449);
            images_gimmickhangingmovingbar_1268_0_0[2] = get_internal_image(2446);
            images_gimmickhangingmovingbar_1268_0_0[3] = get_internal_image(2450);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 100);
        alterables->values.set(3, 1);
        alterables->values.set(5, 1);
        alterables->values.set(6, 150);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingbar_1268(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar_1268(x, y);
}
static Image* images_basementlight_1269_0_0[1];
static Direction direction_basementlight_1269_0_0 = {0, 50, 50, 0, 1, images_basementlight_1269_0_0, 1};
static Animation anim_basementlight_1269_0 = {&direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, NULL, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0, &direction_basementlight_1269_0_0};
static Animation * anim_array_basementlight_1269[1] = {&anim_basementlight_1269_0};
static Animations anim_basementlight_1269 = {1, &anim_array_basementlight_1269[0]};
static bool anim_basementlight_1269_initialized;
class BasementLight_1269 : public Active
{
public:
    BasementLight_1269(int x, int y) : Active(x, y, BasementLight_1269_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basement_Light", 14);
#endif
        this->animations = &anim_basementlight_1269;
        if (!anim_basementlight_1269_initialized) {
            anim_basementlight_1269_initialized = true;
            images_basementlight_1269_0_0[0] = get_internal_image(6589);
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
FrameObject * create_basementlight_1269(int x, int y)
{
    return new (Active::pool.create()) BasementLight_1269(x, y);
}
static Image* images_guicompass_1270_0_0[1];
static Direction direction_guicompass_1270_0_0 = {0, 50, 50, 0, 1, images_guicompass_1270_0_0, 1};
static Image* images_guicompass_1270_0_1[1];
static Direction direction_guicompass_1270_0_1 = {1, 50, 50, 0, 1, images_guicompass_1270_0_1, 1};
static Animation anim_guicompass_1270_0 = {&direction_guicompass_1270_0_0, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_1, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0, &direction_guicompass_1270_0_0};
static Animation * anim_array_guicompass_1270[1] = {&anim_guicompass_1270_0};
static Animations anim_guicompass_1270 = {1, &anim_array_guicompass_1270[0]};
static bool anim_guicompass_1270_initialized;
class GUICompass_1270 : public Active
{
public:
    GUICompass_1270(int x, int y) : Active(x, y, GUICompass_1270_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Compass", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_guicompass_1270;
        if (!anim_guicompass_1270_initialized) {
            anim_guicompass_1270_initialized = true;
            images_guicompass_1270_0_0[0] = get_internal_image(6554);
            images_guicompass_1270_0_1[0] = get_internal_image(6707);
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
FrameObject * create_guicompass_1270(int x, int y)
{
    return new (Active::pool.create()) GUICompass_1270(x, y);
}
class LevelParallaxPiece6_1271 : public SystemBox
{
public:
    LevelParallaxPiece6_1271(int x, int y) : SystemBox(x, y, LevelParallaxPiece6_1271_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 6", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 720;
        type = PATTERN_IMAGE;
        image = get_internal_image(3364);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece6_1271(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece6_1271(x, y);
}
class LevelParallaxPiece7_1272 : public SystemBox
{
public:
    LevelParallaxPiece7_1272(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_1272_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 720;
        type = PATTERN_IMAGE;
        image = get_internal_image(3407);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_1272(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_1272(x, y);
}
class CaravanPlatform8_1273 : public Backdrop
{
public:
    CaravanPlatform8_1273(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 8", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2316);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform8_1273(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform8_1273(x, y);
}
class LevelParallaxPiece9_1274 : public SystemBox
{
public:
    LevelParallaxPiece9_1274(int x, int y) : SystemBox(x, y, LevelParallaxPiece9_1274_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 9", 22);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 1600;
        type = PATTERN_IMAGE;
        image = get_internal_image(1969);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece9_1274(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece9_1274(x, y);
}
class Backdrop_1275 : public Backdrop
{
public:
    Backdrop_1275(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13112);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_1275(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_1275(x, y);
}
static Image* images_gimmickfireball2_1276_0_0[4];
static Direction direction_gimmickfireball2_1276_0_0 = {0, 50, 50, 0, -1, images_gimmickfireball2_1276_0_0, 4};
static Animation anim_gimmickfireball2_1276_0 = {&direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, NULL, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0, &direction_gimmickfireball2_1276_0_0};
static Image* images_gimmickfireball2_1276_7_0[6];
static Direction direction_gimmickfireball2_1276_7_0 = {0, 25, 25, 0, 1, images_gimmickfireball2_1276_7_0, 6};
static Animation anim_gimmickfireball2_1276_7 = {&direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, NULL, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0, &direction_gimmickfireball2_1276_7_0};
static Animation * anim_array_gimmickfireball2_1276[8] = {&anim_gimmickfireball2_1276_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_gimmickfireball2_1276_7};
static Animations anim_gimmickfireball2_1276 = {8, &anim_array_gimmickfireball2_1276[0]};
static bool anim_gimmickfireball2_1276_initialized;
class GimmickFireball2_1276 : public Active
{
public:
    GimmickFireball2_1276(int x, int y) : Active(x, y, GimmickFireball2_1276_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Fireball 2", 18);
#endif
        this->animations = &anim_gimmickfireball2_1276;
        if (!anim_gimmickfireball2_1276_initialized) {
            anim_gimmickfireball2_1276_initialized = true;
            images_gimmickfireball2_1276_0_0[0] = get_internal_image(1059);
            images_gimmickfireball2_1276_0_0[1] = get_internal_image(1284);
            images_gimmickfireball2_1276_0_0[2] = get_internal_image(1287);
            images_gimmickfireball2_1276_0_0[3] = get_internal_image(1299);
            images_gimmickfireball2_1276_7_0[0] = get_internal_image(1300);
            images_gimmickfireball2_1276_7_0[1] = get_internal_image(1301);
            images_gimmickfireball2_1276_7_0[2] = get_internal_image(1302);
            images_gimmickfireball2_1276_7_0[3] = get_internal_image(1308);
            images_gimmickfireball2_1276_7_0[4] = get_internal_image(1320);
            images_gimmickfireball2_1276_7_0[5] = get_internal_image(1327);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(40);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_gimmickfireball2_1276(int x, int y)
{
    return new (Active::pool.create()) GimmickFireball2_1276(x, y);
}
static Image* images_enemyrock_1277_0_0[1];
static Direction direction_enemyrock_1277_0_0 = {0, 50, 50, 0, 1, images_enemyrock_1277_0_0, 1};
static Animation anim_enemyrock_1277_0 = {&direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, NULL, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0, &direction_enemyrock_1277_0_0};
static Image* images_enemyrock_1277_7_0[6];
static Direction direction_enemyrock_1277_7_0 = {0, 25, 25, 0, 1, images_enemyrock_1277_7_0, 6};
static Animation anim_enemyrock_1277_7 = {&direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, NULL, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0, &direction_enemyrock_1277_7_0};
static Animation * anim_array_enemyrock_1277[8] = {&anim_enemyrock_1277_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyrock_1277_7};
static Animations anim_enemyrock_1277 = {8, &anim_array_enemyrock_1277[0]};
static bool anim_enemyrock_1277_initialized;
class EnemyRock_1277 : public Active
{
public:
    EnemyRock_1277(int x, int y) : Active(x, y, EnemyRock_1277_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Rock", 10);
#endif
        this->animations = &anim_enemyrock_1277;
        if (!anim_enemyrock_1277_initialized) {
            anim_enemyrock_1277_initialized = true;
            images_enemyrock_1277_0_0[0] = get_internal_image(3556);
            images_enemyrock_1277_7_0[0] = get_internal_image(1300);
            images_enemyrock_1277_7_0[1] = get_internal_image(1301);
            images_enemyrock_1277_7_0[2] = get_internal_image(1302);
            images_enemyrock_1277_7_0[3] = get_internal_image(1308);
            images_enemyrock_1277_7_0[4] = get_internal_image(1320);
            images_enemyrock_1277_7_0[5] = get_internal_image(1327);
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
FrameObject * create_enemyrock_1277(int x, int y)
{
    return new (Active::pool.create()) EnemyRock_1277(x, y);
}
static Image* images_bossclawpiece4_1278_0_0[1];
static Direction direction_bossclawpiece4_1278_0_0 = {0, 50, 50, 0, 1, images_bossclawpiece4_1278_0_0, 1};
static Image* images_bossclawpiece4_1278_0_4[3];
static Direction direction_bossclawpiece4_1278_0_4 = {4, 50, 50, 0, 1, images_bossclawpiece4_1278_0_4, 3};
static Animation anim_bossclawpiece4_1278_0 = {&direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, NULL, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, &direction_bossclawpiece4_1278_0_4, NULL, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0, &direction_bossclawpiece4_1278_0_0};
static Image* images_bossclawpiece4_1278_7_0[2];
static Direction direction_bossclawpiece4_1278_7_0 = {0, 50, 50, 0, -1, images_bossclawpiece4_1278_7_0, 2};
static Animation anim_bossclawpiece4_1278_7 = {&direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, NULL, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0, &direction_bossclawpiece4_1278_7_0};
static Animation * anim_array_bossclawpiece4_1278[8] = {&anim_bossclawpiece4_1278_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossclawpiece4_1278_7};
static Animations anim_bossclawpiece4_1278 = {8, &anim_array_bossclawpiece4_1278[0]};
static bool anim_bossclawpiece4_1278_initialized;
class BossClawPiece4_1278 : public Active
{
public:
    BossClawPiece4_1278(int x, int y) : Active(x, y, BossClawPiece4_1278_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ClawPiece 4", 16);
#endif
        this->animations = &anim_bossclawpiece4_1278;
        if (!anim_bossclawpiece4_1278_initialized) {
            anim_bossclawpiece4_1278_initialized = true;
            images_bossclawpiece4_1278_0_0[0] = get_internal_image(13083);
            images_bossclawpiece4_1278_0_4[0] = get_internal_image(13085);
            images_bossclawpiece4_1278_0_4[1] = get_internal_image(13085);
            images_bossclawpiece4_1278_0_4[2] = get_internal_image(13087);
            images_bossclawpiece4_1278_7_0[0] = get_internal_image(13083);
            images_bossclawpiece4_1278_7_0[1] = get_internal_image(1189);
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
FrameObject * create_bossclawpiece4_1278(int x, int y)
{
    return new (Active::pool.create()) BossClawPiece4_1278(x, y);
}
static Image* images_breakablerelicwalldebris_1279_0_0[16];
static Direction direction_breakablerelicwalldebris_1279_0_0 = {0, 0, 0, 0, 1, images_breakablerelicwalldebris_1279_0_0, 16};
static Animation anim_breakablerelicwalldebris_1279_0 = {&direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, NULL, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0, &direction_breakablerelicwalldebris_1279_0_0};
static Animation * anim_array_breakablerelicwalldebris_1279[1] = {&anim_breakablerelicwalldebris_1279_0};
static Animations anim_breakablerelicwalldebris_1279 = {1, &anim_array_breakablerelicwalldebris_1279[0]};
static bool anim_breakablerelicwalldebris_1279_initialized;
class BreakableRelicWallDebris_1279 : public Active
{
public:
    BreakableRelicWallDebris_1279(int x, int y) : Active(x, y, BreakableRelicWallDebris_1279_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRelicWall_Debris", 25);
#endif
        this->animations = &anim_breakablerelicwalldebris_1279;
        if (!anim_breakablerelicwalldebris_1279_initialized) {
            anim_breakablerelicwalldebris_1279_initialized = true;
            images_breakablerelicwalldebris_1279_0_0[0] = get_internal_image(8284);
            images_breakablerelicwalldebris_1279_0_0[1] = get_internal_image(8148);
            images_breakablerelicwalldebris_1279_0_0[2] = get_internal_image(8285);
            images_breakablerelicwalldebris_1279_0_0[3] = get_internal_image(8286);
            images_breakablerelicwalldebris_1279_0_0[4] = get_internal_image(8287);
            images_breakablerelicwalldebris_1279_0_0[5] = get_internal_image(8168);
            images_breakablerelicwalldebris_1279_0_0[6] = get_internal_image(8169);
            images_breakablerelicwalldebris_1279_0_0[7] = get_internal_image(8171);
            images_breakablerelicwalldebris_1279_0_0[8] = get_internal_image(8174);
            images_breakablerelicwalldebris_1279_0_0[9] = get_internal_image(8207);
            images_breakablerelicwalldebris_1279_0_0[10] = get_internal_image(8252);
            images_breakablerelicwalldebris_1279_0_0[11] = get_internal_image(8278);
            images_breakablerelicwalldebris_1279_0_0[12] = get_internal_image(8280);
            images_breakablerelicwalldebris_1279_0_0[13] = get_internal_image(8279);
            images_breakablerelicwalldebris_1279_0_0[14] = get_internal_image(8281);
            images_breakablerelicwalldebris_1279_0_0[15] = get_internal_image(8282);
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
FrameObject * create_breakablerelicwalldebris_1279(int x, int y)
{
    return new (Active::pool.create()) BreakableRelicWallDebris_1279(x, y);
}
static Image* images_enemyfirespitterbase_1280_0_0[1];
static Direction direction_enemyfirespitterbase_1280_0_0 = {0, 50, 50, 0, 1, images_enemyfirespitterbase_1280_0_0, 1};
static Image* images_enemyfirespitterbase_1280_0_16[1];
static Direction direction_enemyfirespitterbase_1280_0_16 = {16, 50, 50, 0, 1, images_enemyfirespitterbase_1280_0_16, 1};
static Animation anim_enemyfirespitterbase_1280_0 = {&direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, NULL, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, &direction_enemyfirespitterbase_1280_0_16, NULL, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0, &direction_enemyfirespitterbase_1280_0_0};
static Animation * anim_array_enemyfirespitterbase_1280[1] = {&anim_enemyfirespitterbase_1280_0};
static Animations anim_enemyfirespitterbase_1280 = {1, &anim_array_enemyfirespitterbase_1280[0]};
static bool anim_enemyfirespitterbase_1280_initialized;
class EnemyFirespitterBase_1280 : public Active
{
public:
    EnemyFirespitterBase_1280(int x, int y) : Active(x, y, EnemyFirespitterBase_1280_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_FirespitterBase", 21);
#endif
        this->animations = &anim_enemyfirespitterbase_1280;
        if (!anim_enemyfirespitterbase_1280_initialized) {
            anim_enemyfirespitterbase_1280_initialized = true;
            images_enemyfirespitterbase_1280_0_0[0] = get_internal_image(13109);
            images_enemyfirespitterbase_1280_0_16[0] = get_internal_image(13110);
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
FrameObject * create_enemyfirespitterbase_1280(int x, int y)
{
    return new (Active::pool.create()) EnemyFirespitterBase_1280(x, y);
}
static Image* images_bossclawpiece1_1281_0_0[1];
static Direction direction_bossclawpiece1_1281_0_0 = {0, 50, 50, 0, 1, images_bossclawpiece1_1281_0_0, 1};
static Image* images_bossclawpiece1_1281_0_4[3];
static Direction direction_bossclawpiece1_1281_0_4 = {4, 50, 50, 0, 1, images_bossclawpiece1_1281_0_4, 3};
static Animation anim_bossclawpiece1_1281_0 = {&direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, NULL, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, &direction_bossclawpiece1_1281_0_4, NULL, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0, &direction_bossclawpiece1_1281_0_0};
static Image* images_bossclawpiece1_1281_7_0[2];
static Direction direction_bossclawpiece1_1281_7_0 = {0, 50, 50, 0, -1, images_bossclawpiece1_1281_7_0, 2};
static Animation anim_bossclawpiece1_1281_7 = {&direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, NULL, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0, &direction_bossclawpiece1_1281_7_0};
static Animation * anim_array_bossclawpiece1_1281[8] = {&anim_bossclawpiece1_1281_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossclawpiece1_1281_7};
static Animations anim_bossclawpiece1_1281 = {8, &anim_array_bossclawpiece1_1281[0]};
static bool anim_bossclawpiece1_1281_initialized;
class BossClawPiece1_1281 : public Active
{
public:
    BossClawPiece1_1281(int x, int y) : Active(x, y, BossClawPiece1_1281_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ClawPiece 1", 16);
#endif
        set_visible(false);
        this->animations = &anim_bossclawpiece1_1281;
        if (!anim_bossclawpiece1_1281_initialized) {
            anim_bossclawpiece1_1281_initialized = true;
            images_bossclawpiece1_1281_0_0[0] = get_internal_image(13083);
            images_bossclawpiece1_1281_0_4[0] = get_internal_image(13085);
            images_bossclawpiece1_1281_0_4[1] = get_internal_image(13085);
            images_bossclawpiece1_1281_0_4[2] = get_internal_image(13087);
            images_bossclawpiece1_1281_7_0[0] = get_internal_image(13083);
            images_bossclawpiece1_1281_7_0[1] = get_internal_image(1189);
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
FrameObject * create_bossclawpiece1_1281(int x, int y)
{
    return new (Active::pool.create()) BossClawPiece1_1281(x, y);
}
static Image* images_bossreflectobeam_1282_0_4[1];
static Direction direction_bossreflectobeam_1282_0_4 = {4, 50, 50, 0, 1, images_bossreflectobeam_1282_0_4, 1};
static Image* images_bossreflectobeam_1282_0_12[1];
static Direction direction_bossreflectobeam_1282_0_12 = {12, 50, 50, 0, 1, images_bossreflectobeam_1282_0_12, 1};
static Image* images_bossreflectobeam_1282_0_20[1];
static Direction direction_bossreflectobeam_1282_0_20 = {20, 50, 50, 0, 1, images_bossreflectobeam_1282_0_20, 1};
static Image* images_bossreflectobeam_1282_0_28[1];
static Direction direction_bossreflectobeam_1282_0_28 = {28, 50, 50, 0, 1, images_bossreflectobeam_1282_0_28, 1};
static Animation anim_bossreflectobeam_1282_0 = {NULL, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, &direction_bossreflectobeam_1282_0_4, NULL, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, &direction_bossreflectobeam_1282_0_12, NULL, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, &direction_bossreflectobeam_1282_0_20, NULL, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28, &direction_bossreflectobeam_1282_0_28};
static Animation * anim_array_bossreflectobeam_1282[1] = {&anim_bossreflectobeam_1282_0};
static Animations anim_bossreflectobeam_1282 = {1, &anim_array_bossreflectobeam_1282[0]};
static bool anim_bossreflectobeam_1282_initialized;
class BossReflectoBeam_1282 : public Active
{
public:
    BossReflectoBeam_1282(int x, int y) : Active(x, y, BossReflectoBeam_1282_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ReflectoBeam", 17);
#endif
        this->animations = &anim_bossreflectobeam_1282;
        if (!anim_bossreflectobeam_1282_initialized) {
            anim_bossreflectobeam_1282_initialized = true;
            images_bossreflectobeam_1282_0_4[0] = get_internal_image(1192);
            images_bossreflectobeam_1282_0_12[0] = get_internal_image(1190);
            images_bossreflectobeam_1282_0_20[0] = get_internal_image(1192);
            images_bossreflectobeam_1282_0_28[0] = get_internal_image(1190);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(20);
        create_alterables();
        alterables->values.set(0, -5);
        alterables->values.set(1, 5);
    }
};
FrameObject * create_bossreflectobeam_1282(int x, int y)
{
    return new (Active::pool.create()) BossReflectoBeam_1282(x, y);
}
static Image* images_npcmerc_1283_0_0[1];
static Direction direction_npcmerc_1283_0_0 = {0, 10, 10, 0, -1, images_npcmerc_1283_0_0, 1};
static Image* images_npcmerc_1283_0_1[1];
static Direction direction_npcmerc_1283_0_1 = {1, 50, 50, 0, 1, images_npcmerc_1283_0_1, 1};
static Image* images_npcmerc_1283_0_16[1];
static Direction direction_npcmerc_1283_0_16 = {16, 10, 10, 0, -1, images_npcmerc_1283_0_16, 1};
static Image* images_npcmerc_1283_0_17[1];
static Direction direction_npcmerc_1283_0_17 = {17, 50, 50, 0, 1, images_npcmerc_1283_0_17, 1};
static Animation anim_npcmerc_1283_0 = {&direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_1, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_16, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_17, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0, &direction_npcmerc_1283_0_0};
static Image* images_npcmerc_1283_2_0[8];
static Direction direction_npcmerc_1283_2_0 = {0, 35, 35, 0, -1, images_npcmerc_1283_2_0, 8};
static Image* images_npcmerc_1283_2_1[8];
static Direction direction_npcmerc_1283_2_1 = {1, 35, 35, 0, -1, images_npcmerc_1283_2_1, 8};
static Image* images_npcmerc_1283_2_2[9];
static Direction direction_npcmerc_1283_2_2 = {2, 50, 50, 0, -1, images_npcmerc_1283_2_2, 9};
static Image* images_npcmerc_1283_2_8[10];
static Direction direction_npcmerc_1283_2_8 = {8, 50, 50, 1, -1, images_npcmerc_1283_2_8, 10};
static Image* images_npcmerc_1283_2_16[8];
static Direction direction_npcmerc_1283_2_16 = {16, 35, 35, 0, -1, images_npcmerc_1283_2_16, 8};
static Image* images_npcmerc_1283_2_17[8];
static Direction direction_npcmerc_1283_2_17 = {17, 35, 35, 0, -1, images_npcmerc_1283_2_17, 8};
static Animation anim_npcmerc_1283_2 = {&direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_1, &direction_npcmerc_1283_2_2, &direction_npcmerc_1283_2_2, &direction_npcmerc_1283_2_2, NULL, &direction_npcmerc_1283_2_8, &direction_npcmerc_1283_2_8, &direction_npcmerc_1283_2_8, &direction_npcmerc_1283_2_8, &direction_npcmerc_1283_2_8, &direction_npcmerc_1283_2_8, NULL, &direction_npcmerc_1283_2_16, &direction_npcmerc_1283_2_16, &direction_npcmerc_1283_2_16, &direction_npcmerc_1283_2_16, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_17, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0, &direction_npcmerc_1283_2_0};
static Image* images_npcmerc_1283_5_0[1];
static Direction direction_npcmerc_1283_5_0 = {0, 50, 50, 0, -1, images_npcmerc_1283_5_0, 1};
static Image* images_npcmerc_1283_5_16[1];
static Direction direction_npcmerc_1283_5_16 = {16, 50, 50, 0, -1, images_npcmerc_1283_5_16, 1};
static Animation anim_npcmerc_1283_5 = {&direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, NULL, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, &direction_npcmerc_1283_5_16, NULL, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0, &direction_npcmerc_1283_5_0};
static Image* images_npcmerc_1283_7_0[1];
static Direction direction_npcmerc_1283_7_0 = {0, 10, 10, 0, -1, images_npcmerc_1283_7_0, 1};
static Image* images_npcmerc_1283_7_8[1];
static Direction direction_npcmerc_1283_7_8 = {8, 50, 50, 0, 1, images_npcmerc_1283_7_8, 1};
static Image* images_npcmerc_1283_7_16[1];
static Direction direction_npcmerc_1283_7_16 = {16, 10, 10, 0, -1, images_npcmerc_1283_7_16, 1};
static Animation anim_npcmerc_1283_7 = {&direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, NULL, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, &direction_npcmerc_1283_7_8, NULL, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, &direction_npcmerc_1283_7_16, NULL, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0, &direction_npcmerc_1283_7_0};
static Image* images_npcmerc_1283_8_0[1];
static Direction direction_npcmerc_1283_8_0 = {0, 50, 50, 0, -1, images_npcmerc_1283_8_0, 1};
static Image* images_npcmerc_1283_8_16[1];
static Direction direction_npcmerc_1283_8_16 = {16, 50, 50, 0, -1, images_npcmerc_1283_8_16, 1};
static Animation anim_npcmerc_1283_8 = {&direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, NULL, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, &direction_npcmerc_1283_8_16, NULL, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0, &direction_npcmerc_1283_8_0};
static Image* images_npcmerc_1283_9_0[5];
static Direction direction_npcmerc_1283_9_0 = {0, 100, 100, 1, 1, images_npcmerc_1283_9_0, 5};
static Image* images_npcmerc_1283_9_16[5];
static Direction direction_npcmerc_1283_9_16 = {16, 100, 100, 1, 1, images_npcmerc_1283_9_16, 5};
static Animation anim_npcmerc_1283_9 = {&direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, NULL, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, &direction_npcmerc_1283_9_16, NULL, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0, &direction_npcmerc_1283_9_0};
static Image* images_npcmerc_1283_10_0[1];
static Direction direction_npcmerc_1283_10_0 = {0, 50, 50, 0, -1, images_npcmerc_1283_10_0, 1};
static Image* images_npcmerc_1283_10_1[1];
static Direction direction_npcmerc_1283_10_1 = {1, 50, 50, 0, -1, images_npcmerc_1283_10_1, 1};
static Image* images_npcmerc_1283_10_8[3];
static Direction direction_npcmerc_1283_10_8 = {8, 50, 50, 0, 1, images_npcmerc_1283_10_8, 3};
static Image* images_npcmerc_1283_10_16[1];
static Direction direction_npcmerc_1283_10_16 = {16, 50, 50, 0, -1, images_npcmerc_1283_10_16, 1};
static Image* images_npcmerc_1283_10_17[1];
static Direction direction_npcmerc_1283_10_17 = {17, 50, 50, 0, -1, images_npcmerc_1283_10_17, 1};
static Animation anim_npcmerc_1283_10 = {&direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_1, &direction_npcmerc_1283_10_1, &direction_npcmerc_1283_10_1, &direction_npcmerc_1283_10_1, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, &direction_npcmerc_1283_10_8, NULL, &direction_npcmerc_1283_10_16, &direction_npcmerc_1283_10_16, &direction_npcmerc_1283_10_16, &direction_npcmerc_1283_10_16, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_17, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0, &direction_npcmerc_1283_10_0};
static Animation * anim_array_npcmerc_1283[11] = {&anim_npcmerc_1283_0, NULL, &anim_npcmerc_1283_2, NULL, NULL, &anim_npcmerc_1283_5, NULL, &anim_npcmerc_1283_7, &anim_npcmerc_1283_8, &anim_npcmerc_1283_9, &anim_npcmerc_1283_10};
static Animations anim_npcmerc_1283 = {11, &anim_array_npcmerc_1283[0]};
static bool anim_npcmerc_1283_initialized;
class NPCMerc_1283 : public Active
{
public:
    NPCMerc_1283(int x, int y) : Active(x, y, NPCMerc_1283_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC_Merc", 8);
#endif
        this->animations = &anim_npcmerc_1283;
        if (!anim_npcmerc_1283_initialized) {
            anim_npcmerc_1283_initialized = true;
            images_npcmerc_1283_0_0[0] = get_internal_image(1217);
            images_npcmerc_1283_0_1[0] = get_internal_image(11411);
            images_npcmerc_1283_0_16[0] = get_internal_image(1218);
            images_npcmerc_1283_0_17[0] = get_internal_image(11415);
            images_npcmerc_1283_2_0[0] = get_internal_image(4837);
            images_npcmerc_1283_2_0[1] = get_internal_image(5828);
            images_npcmerc_1283_2_0[2] = get_internal_image(5830);
            images_npcmerc_1283_2_0[3] = get_internal_image(5831);
            images_npcmerc_1283_2_0[4] = get_internal_image(6380);
            images_npcmerc_1283_2_0[5] = get_internal_image(6393);
            images_npcmerc_1283_2_0[6] = get_internal_image(6422);
            images_npcmerc_1283_2_0[7] = get_internal_image(6936);
            images_npcmerc_1283_2_1[0] = get_internal_image(6938);
            images_npcmerc_1283_2_1[1] = get_internal_image(7195);
            images_npcmerc_1283_2_1[2] = get_internal_image(7841);
            images_npcmerc_1283_2_1[3] = get_internal_image(7854);
            images_npcmerc_1283_2_1[4] = get_internal_image(7855);
            images_npcmerc_1283_2_1[5] = get_internal_image(7868);
            images_npcmerc_1283_2_1[6] = get_internal_image(7869);
            images_npcmerc_1283_2_1[7] = get_internal_image(7870);
            images_npcmerc_1283_2_2[0] = get_internal_image(7871);
            images_npcmerc_1283_2_2[1] = get_internal_image(8135);
            images_npcmerc_1283_2_2[2] = get_internal_image(8139);
            images_npcmerc_1283_2_2[3] = get_internal_image(8191);
            images_npcmerc_1283_2_2[4] = get_internal_image(8949);
            images_npcmerc_1283_2_2[5] = get_internal_image(10877);
            images_npcmerc_1283_2_2[6] = get_internal_image(10878);
            images_npcmerc_1283_2_2[7] = get_internal_image(10982);
            images_npcmerc_1283_2_2[8] = get_internal_image(10983);
            images_npcmerc_1283_2_8[0] = get_internal_image(10984);
            images_npcmerc_1283_2_8[1] = get_internal_image(11079);
            images_npcmerc_1283_2_8[2] = get_internal_image(11080);
            images_npcmerc_1283_2_8[3] = get_internal_image(11384);
            images_npcmerc_1283_2_8[4] = get_internal_image(11385);
            images_npcmerc_1283_2_8[5] = get_internal_image(11386);
            images_npcmerc_1283_2_8[6] = get_internal_image(11387);
            images_npcmerc_1283_2_8[7] = get_internal_image(11388);
            images_npcmerc_1283_2_8[8] = get_internal_image(11389);
            images_npcmerc_1283_2_8[9] = get_internal_image(11390);
            images_npcmerc_1283_2_16[0] = get_internal_image(11391);
            images_npcmerc_1283_2_16[1] = get_internal_image(11392);
            images_npcmerc_1283_2_16[2] = get_internal_image(11393);
            images_npcmerc_1283_2_16[3] = get_internal_image(11394);
            images_npcmerc_1283_2_16[4] = get_internal_image(11395);
            images_npcmerc_1283_2_16[5] = get_internal_image(11396);
            images_npcmerc_1283_2_16[6] = get_internal_image(11397);
            images_npcmerc_1283_2_16[7] = get_internal_image(11398);
            images_npcmerc_1283_2_17[0] = get_internal_image(11399);
            images_npcmerc_1283_2_17[1] = get_internal_image(11400);
            images_npcmerc_1283_2_17[2] = get_internal_image(11401);
            images_npcmerc_1283_2_17[3] = get_internal_image(11402);
            images_npcmerc_1283_2_17[4] = get_internal_image(11403);
            images_npcmerc_1283_2_17[5] = get_internal_image(11404);
            images_npcmerc_1283_2_17[6] = get_internal_image(11405);
            images_npcmerc_1283_2_17[7] = get_internal_image(11406);
            images_npcmerc_1283_5_0[0] = get_internal_image(4836);
            images_npcmerc_1283_5_16[0] = get_internal_image(2891);
            images_npcmerc_1283_7_0[0] = get_internal_image(11407);
            images_npcmerc_1283_7_8[0] = get_internal_image(3434);
            images_npcmerc_1283_7_16[0] = get_internal_image(11408);
            images_npcmerc_1283_8_0[0] = get_internal_image(3706);
            images_npcmerc_1283_8_16[0] = get_internal_image(3758);
            images_npcmerc_1283_9_0[0] = get_internal_image(11411);
            images_npcmerc_1283_9_0[1] = get_internal_image(11412);
            images_npcmerc_1283_9_0[2] = get_internal_image(11413);
            images_npcmerc_1283_9_0[3] = get_internal_image(11414);
            images_npcmerc_1283_9_0[4] = get_internal_image(11411);
            images_npcmerc_1283_9_16[0] = get_internal_image(11415);
            images_npcmerc_1283_9_16[1] = get_internal_image(11416);
            images_npcmerc_1283_9_16[2] = get_internal_image(11417);
            images_npcmerc_1283_9_16[3] = get_internal_image(11418);
            images_npcmerc_1283_9_16[4] = get_internal_image(11415);
            images_npcmerc_1283_10_0[0] = get_internal_image(11419);
            images_npcmerc_1283_10_1[0] = get_internal_image(2079);
            images_npcmerc_1283_10_8[0] = get_internal_image(11420);
            images_npcmerc_1283_10_8[1] = get_internal_image(11421);
            images_npcmerc_1283_10_8[2] = get_internal_image(11422);
            images_npcmerc_1283_10_16[0] = get_internal_image(11423);
            images_npcmerc_1283_10_17[0] = get_internal_image(3652);
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
FrameObject * create_npcmerc_1283(int x, int y)
{
    return new (Active::pool.create()) NPCMerc_1283(x, y);
}
static Image* images_breakablespike_1284_0_0[1];
static Direction direction_breakablespike_1284_0_0 = {0, 100, 100, 0, 1, images_breakablespike_1284_0_0, 1};
static Animation anim_breakablespike_1284_0 = {&direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, NULL, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0, &direction_breakablespike_1284_0_0};
static Animation * anim_array_breakablespike_1284[1] = {&anim_breakablespike_1284_0};
static Animations anim_breakablespike_1284 = {1, &anim_array_breakablespike_1284[0]};
static bool anim_breakablespike_1284_initialized;
class BreakableSpike_1284 : public Active
{
public:
    BreakableSpike_1284(int x, int y) : Active(x, y, BreakableSpike_1284_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableSpike", 14);
#endif
        this->animations = &anim_breakablespike_1284;
        if (!anim_breakablespike_1284_initialized) {
            anim_breakablespike_1284_initialized = true;
            images_breakablespike_1284_0_0[0] = get_internal_image(1342);
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
FrameObject * create_breakablespike_1284(int x, int y)
{
    return new (Active::pool.create()) BreakableSpike_1284(x, y);
}
class CaveColumn1_1285 : public Backdrop
{
public:
    CaveColumn1_1285(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 1", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3404);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn1_1285(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn1_1285(x, y);
}
class Shaft3_1286 : public Backdrop
{
public:
    Shaft3_1286(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shaft 3", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3559);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shaft3_1286(int x, int y)
{
    return new (Backdrop::pool.create()) Shaft3_1286(x, y);
}
class QuickBackdrop_1287 : public QuickBackdrop
{
public:
    QuickBackdrop_1287(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 6720;
        height = 288;
        image = get_internal_image(3365);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_1287(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_1287(x, y);
}
class QuickBackdrop2_1288 : public QuickBackdrop
{
public:
    QuickBackdrop2_1288(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 6720;
        height = 288;
        image = get_internal_image(3399);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_1288(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_1288(x, y);
}
class QuickBackdrop3_1289 : public QuickBackdrop
{
public:
    QuickBackdrop3_1289(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 3", 16);
#endif
        flags |= BACKGROUND;
        width = 6720;
        height = 576;
        color = Color(0, 8, 8, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop3_1289(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop3_1289(x, y);
}
class Brick28_1290 : public Backdrop
{
public:
    Brick28_1290(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 28", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12404);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brick28_1290(int x, int y)
{
    return new (Backdrop::pool.create()) Brick28_1290(x, y);
}
class CaveColumn2_1291 : public Backdrop
{
public:
    CaveColumn2_1291(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave column 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3398);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_cavecolumn2_1291(int x, int y)
{
    return new (Backdrop::pool.create()) CaveColumn2_1291(x, y);
}
class Brick22_1292 : public Backdrop
{
public:
    Brick22_1292(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 22", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12405);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brick22_1292(int x, int y)
{
    return new (Backdrop::pool.create()) Brick22_1292(x, y);
}
class Brick27_1293 : public Backdrop
{
public:
    Brick27_1293(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 27", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12403);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brick27_1293(int x, int y)
{
    return new (Backdrop::pool.create()) Brick27_1293(x, y);
}
class Brick23_1294 : public Backdrop
{
public:
    Brick23_1294(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 23", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12406);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brick23_1294(int x, int y)
{
    return new (Backdrop::pool.create()) Brick23_1294(x, y);
}
class Brick29_1295 : public Backdrop
{
public:
    Brick29_1295(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 29", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12407);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brick29_1295(int x, int y)
{
    return new (Backdrop::pool.create()) Brick29_1295(x, y);
}
static Image* images_backgroundwall_1296_0_0[1];
static Direction direction_backgroundwall_1296_0_0 = {0, 50, 50, 0, 1, images_backgroundwall_1296_0_0, 1};
static Animation anim_backgroundwall_1296_0 = {&direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, NULL, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0, &direction_backgroundwall_1296_0_0};
static Animation * anim_array_backgroundwall_1296[1] = {&anim_backgroundwall_1296_0};
static Animations anim_backgroundwall_1296 = {1, &anim_array_backgroundwall_1296[0]};
static bool anim_backgroundwall_1296_initialized;
class BackgroundWall_1296 : public Active
{
public:
    BackgroundWall_1296(int x, int y) : Active(x, y, BackgroundWall_1296_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("background_wall", 15);
#endif
        this->animations = &anim_backgroundwall_1296;
        if (!anim_backgroundwall_1296_initialized) {
            anim_backgroundwall_1296_initialized = true;
            images_backgroundwall_1296_0_0[0] = get_internal_image(12395);
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
FrameObject * create_backgroundwall_1296(int x, int y)
{
    return new (Active::pool.create()) BackgroundWall_1296(x, y);
}
static Image* images_backgroundwall2_1297_0_0[1];
static Direction direction_backgroundwall2_1297_0_0 = {0, 50, 50, 0, 1, images_backgroundwall2_1297_0_0, 1};
static Animation anim_backgroundwall2_1297_0 = {&direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, NULL, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0, &direction_backgroundwall2_1297_0_0};
static Animation * anim_array_backgroundwall2_1297[1] = {&anim_backgroundwall2_1297_0};
static Animations anim_backgroundwall2_1297 = {1, &anim_array_backgroundwall2_1297[0]};
static bool anim_backgroundwall2_1297_initialized;
class BackgroundWall2_1297 : public Active
{
public:
    BackgroundWall2_1297(int x, int y) : Active(x, y, BackgroundWall2_1297_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("background_wall 2", 17);
#endif
        this->animations = &anim_backgroundwall2_1297;
        if (!anim_backgroundwall2_1297_initialized) {
            anim_backgroundwall2_1297_initialized = true;
            images_backgroundwall2_1297_0_0[0] = get_internal_image(2352);
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
FrameObject * create_backgroundwall2_1297(int x, int y)
{
    return new (Active::pool.create()) BackgroundWall2_1297(x, y);
}
class QuickBackdrop4_1298 : public QuickBackdrop
{
public:
    QuickBackdrop4_1298(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 4", 16);
#endif
        flags |= BACKGROUND;
        width = 16;
        height = 2176;
        image = get_internal_image(2126);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop4_1298(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop4_1298(x, y);
}
class RMMineTrack3_1299 : public Backdrop
{
public:
    RMMineTrack3_1299(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2127);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack3_1299(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack3_1299(x, y);
}
class RMHugeDirtPattern_1300 : public QuickBackdrop
{
public:
    RMHugeDirtPattern_1300(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_HugeDirtPattern", 18);
#endif
        flags |= BACKGROUND;
        width = 6528;
        height = 768;
        image = get_internal_image(2430);
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmhugedirtpattern_1300(int x, int y)
{
    return new (QuickBackdrop::pool.create()) RMHugeDirtPattern_1300(x, y);
}
class RMBlueCrystal2_1301 : public Backdrop
{
public:
    RMBlueCrystal2_1301(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueCrystal 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10896);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbluecrystal2_1301(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueCrystal2_1301(x, y);
}
class Shaft4_1302 : public Backdrop
{
public:
    Shaft4_1302(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shaft 4", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3578);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shaft4_1302(int x, int y)
{
    return new (Backdrop::pool.create()) Shaft4_1302(x, y);
}
class Shaft2_1303 : public Backdrop
{
public:
    Shaft2_1303(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shaft 2", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10862);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shaft2_1303(int x, int y)
{
    return new (Backdrop::pool.create()) Shaft2_1303(x, y);
}
class CaveSoil27_1304 : public Backdrop
{
public:
    CaveSoil27_1304(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 27", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3174);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil27_1304(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil27_1304(x, y);
}
class CaveSoil18_1305 : public Backdrop
{
public:
    CaveSoil18_1305(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 18", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10849);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil18_1305(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil18_1305(x, y);
}
class RMBlueCrystal1_1306 : public Backdrop
{
public:
    RMBlueCrystal1_1306(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BlueCrystal 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10895);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbluecrystal1_1306(int x, int y)
{
    return new (Backdrop::pool.create()) RMBlueCrystal1_1306(x, y);
}
class CaveSoil9_1307 : public Backdrop
{
public:
    CaveSoil9_1307(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 9", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3170);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil9_1307(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil9_1307(x, y);
}
class CaveSoil19_1308 : public Backdrop
{
public:
    CaveSoil19_1308(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 19", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10813);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil19_1308(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil19_1308(x, y);
}
